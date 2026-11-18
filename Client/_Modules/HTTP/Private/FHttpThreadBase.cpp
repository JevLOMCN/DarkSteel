// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 25

// FHttpThreadBase @ 14314d670

/* WARNING: Enum "Type": Some values do not have unique names */

FHttpThreadBase * __thiscall FHttpThreadBase::FHttpThreadBase(FHttpThreadBase *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar4;
  atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar5;
  
  this->bIsSingleThread = false;
  this->bIsStopped = true;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->Thread = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->CurrentThreadPriority = TPri_Num;
  pTVar1 = CVarHttpMaxConcurrentRequests.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_14314d6cb;
  }
  lVar3 = 0;
LAB_14314d6cb:
  this->MaxConcurrentRequests = *(int *)((longlong)pTVar1->ShadowedValue + lVar3);
  (this->NewThreadedRequests).Head = (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0;
  aVar4 = (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar4 = 0;
  (this->NewThreadedRequests).Head = aVar4;
  (this->NewThreadedRequests).Tail = (FNode *)aVar4;
  (this->CancelledThreadedRequests).Head =
       (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0;
  aVar4 = (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar4 = 0;
  (this->CancelledThreadedRequests).Head = aVar4;
  (this->CancelledThreadedRequests).Tail = (FNode *)aVar4;
  (this->RateLimitedThreadedRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RateLimitedThreadedRequests).ArrayNum = 0;
  (this->RateLimitedThreadedRequests).ArrayMax = 0;
  (this->RunningThreadedRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningThreadedRequests).ArrayNum = 0;
  (this->RunningThreadedRequests).ArrayMax = 0;
  (this->CompletedThreadedRequests).Tail =
       (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0;
  (this->CompletedThreadedRequests).NumElems = (atomic<int>)0x0;
  aVar5 = (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar5 = 0;
  (this->CompletedThreadedRequests).Tail = aVar5;
  (this->CompletedThreadedRequests).TailCopy = (FNode *)aVar5;
  (this->CompletedThreadedRequests).First = (FNode *)aVar5;
  (this->CompletedThreadedRequests).Head = (FNode *)aVar5;
  LOCK();
  (this->CompletedThreadedRequests).NumElems = (atomic<int>)0x0;
  UNLOCK();
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return this;
}

// ~FHttpThreadBase @ 143150a80

void __thiscall FHttpThreadBase::~FHttpThreadBase(FHttpThreadBase *this)

{
  FRunnableThread *pFVar1;
  atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar2;
  atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar3;
  FScriptContainerElement *pFVar4;
  atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar5;
  atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  this->bIsSingleThread = true;
  this->bIsStopped = true;
  aVar2 = (this->CompletedThreadedRequests).Tail;
  aVar6 = (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)
          (this->CompletedThreadedRequests).First;
  do {
    aVar3 = *(atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar2;
    aVar6 = aVar3;
  } while (bVar7);
  while (aVar3 != (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0) {
    aVar2 = *(atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *)aVar3;
    FMemory::Free((void *)aVar3);
    aVar3 = aVar2;
  }
  pFVar4 = (this->RunningThreadedRequests).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RateLimitedThreadedRequests).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  aVar5 = ((this->CancelledThreadedRequests).Tail)->Next;
  FMemory::Free((this->CancelledThreadedRequests).Tail);
  while (aVar5 != (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0) {
    (this->CancelledThreadedRequests).Tail = (FNode *)aVar5;
    aVar5 = *(atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *)aVar5;
    FMemory::Free((this->CancelledThreadedRequests).Tail);
  }
  aVar5 = ((this->NewThreadedRequests).Tail)->Next;
  FMemory::Free((this->NewThreadedRequests).Tail);
  while (aVar5 != (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0) {
    (this->NewThreadedRequests).Tail = (FNode *)aVar5;
    aVar5 = *(atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *)aVar5;
    FMemory::Free((this->NewThreadedRequests).Tail);
  }
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// AddRequest @ 143154e70

void __thiscall FHttpThreadBase::AddRequest(FHttpThreadBase *this,FHttpRequestCommon *param_1)

{
  atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar1;
  atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar2;
  
  aVar2 = (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(FHttpRequestCommon **)((longlong)aVar2 + 8) = param_1;
  *(undefined8 *)aVar2 = 0;
  LOCK();
  aVar1 = (this->NewThreadedRequests).Head;
  (this->NewThreadedRequests).Head = aVar2;
  UNLOCK();
  *(atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *)aVar1 = aVar2;
  return;
}

// CancelRequest @ 143157430

void __thiscall FHttpThreadBase::CancelRequest(FHttpThreadBase *this,FHttpRequestCommon *param_1)

{
  atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar1;
  atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar2;
  
  aVar2 = (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(FHttpRequestCommon **)((longlong)aVar2 + 8) = param_1;
  *(undefined8 *)aVar2 = 0;
  LOCK();
  aVar1 = (this->CancelledThreadedRequests).Head;
  (this->CancelledThreadedRequests).Head = aVar2;
  UNLOCK();
  *(atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *)aVar1 = aVar2;
  return;
}

// CompleteThreadedRequest @ 143158f30

void __thiscall
FHttpThreadBase::CompleteThreadedRequest(FHttpThreadBase *this,FHttpRequestCommon *param_1)

{
  return;
}

// ConsumeCanceledRequestsAndNewRequests @ 1431590a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpThreadBase::ConsumeCanceledRequestsAndNewRequests
          (FHttpThreadBase *this,TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FHttpRequestCommon *pFVar14;
  int iVar15;
  undefined1 local_res20 [8];
  FHttpRequestCommon *local_80;
  FHttpRequestCommon *local_78;
  FScriptContainerElement *local_70;
  LARGE_INTEGER local_68;
  FScriptContainerElement *local_60;
  
  piVar1 = &param_1->ArrayMax;
  local_78 = (FHttpRequestCommon *)0x0;
  param_1->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  while (dVar6 = __real_4170000000000000, aVar3 = ((this->CancelledThreadedRequests).Tail)->Next,
        aVar3 != (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0) {
    pFVar14 = *(FHttpRequestCommon **)((longlong)aVar3 + 8);
    FMemory::Free((this->CancelledThreadedRequests).Tail);
    (this->CancelledThreadedRequests).Tail = (FNode *)aVar3;
    pFVar10 = (param_1->AllocatorInstance).Data;
    local_78 = pFVar14;
    if (((pFVar10 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < pFVar10 + (longlong)*piVar1 * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    *(FHttpRequestCommon **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_78;
  }
  while (aVar3 = ((this->NewThreadedRequests).Tail)->Next,
        aVar3 != (atomic<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0) {
    pFVar14 = *(FHttpRequestCommon **)((longlong)aVar3 + 8);
    FMemory::Free((this->NewThreadedRequests).Tail);
    (this->NewThreadedRequests).Tail = (FNode *)aVar3;
    local_78 = pFVar14;
    QueryPerformanceCounter(&local_68);
    pFVar14->TimeStartedWaitingInQueue =
         (float)((double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6);
    InsertToRateLimitedRequestsAccordingToPriority(this,local_78);
  }
  uVar2 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  pFVar10 = (param_1->AllocatorInstance).Data;
  local_60 = pFVar10 + uVar9 * 8;
  do {
    pFVar4 = local_60;
    local_70 = pFVar10;
    if (param_1->ArrayNum != (int)uVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FHttpRequestCommon_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar10 == pFVar4) {
      return;
    }
    pFVar4 = (this->RunningThreadedRequests).AllocatorInstance.Data;
    local_80 = *(FHttpRequestCommon **)pFVar10;
    if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar4 + (longlong)(this->RunningThreadedRequests).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->RunningThreadedRequests).ArrayNum;
    pFVar14 = local_80;
    if (iVar8 == 0) {
LAB_143159373:
      pFVar10 = (this->RateLimitedThreadedRequests).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 <
           pFVar10 + (longlong)(this->RateLimitedThreadedRequests).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), pFVar14 = local_80, bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->RateLimitedThreadedRequests).ArrayNum;
      if (iVar8 != 0) {
        pFVar10 = (this->RateLimitedThreadedRequests).AllocatorInstance.Data;
        iVar15 = 0;
        lVar11 = 0;
        bVar7 = *(FHttpRequestCommon **)pFVar10 != pFVar14;
        iVar13 = 0;
        do {
          iVar12 = iVar13;
          do {
            lVar11 = lVar11 + 1;
            iVar12 = iVar12 + 1;
            if (iVar8 <= lVar11) break;
          } while (bVar7 == (*(FHttpRequestCommon **)(pFVar10 + lVar11 * 8) != pFVar14));
          if (bVar7 != false) {
            if (iVar15 != iVar13) {
              memmove(pFVar10 + (longlong)iVar15 * 8,pFVar10 + (longlong)iVar13 * 8,
                      (longlong)(iVar12 - iVar13) << 3);
              pFVar14 = local_80;
            }
            iVar15 = iVar15 + (iVar12 - iVar13);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar13 = iVar12;
        } while (lVar11 < iVar8);
        (this->RateLimitedThreadedRequests).ArrayNum = iVar15;
        if (0 < iVar8 - iVar15) goto LAB_14315947f;
      }
      if (4 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
    }
    else {
      pFVar10 = (this->RunningThreadedRequests).AllocatorInstance.Data;
      iVar15 = 0;
      lVar11 = 0;
      bVar7 = *(FHttpRequestCommon **)pFVar10 != local_80;
      iVar13 = 0;
      do {
        iVar12 = iVar13;
        do {
          lVar11 = lVar11 + 1;
          iVar12 = iVar12 + 1;
          if (iVar8 <= lVar11) break;
        } while (bVar7 == (*(FHttpRequestCommon **)(pFVar10 + lVar11 * 8) != pFVar14));
        if (bVar7 != false) {
          if (iVar15 != iVar13) {
            memmove(pFVar10 + (longlong)iVar15 * 8,pFVar10 + (longlong)iVar13 * 8,
                    (longlong)(iVar12 - iVar13) << 3);
            pFVar14 = local_80;
          }
          iVar15 = iVar15 + (iVar12 - iVar13);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar13 = iVar12;
      } while (lVar11 < iVar8);
      (this->RunningThreadedRequests).ArrayNum = iVar15;
      if (iVar8 - iVar15 < 1) goto LAB_143159373;
LAB_14315947f:
      TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FHttpRequestCommon_*_const_&>(param_2,&local_80);
    }
    pFVar10 = local_70 + 8;
    uVar9 = (ulonglong)uVar2;
  } while( true );
}

// Exit @ 14315e2c0

void __thiscall FHttpThreadBase::Exit(FHttpThreadBase *this)

{
  return;
}

// FinishRequestsFromHttpThreadWithCallbacks @ 14315f2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpThreadBase::FinishRequestsFromHttpThreadWithCallbacks
          (FHttpThreadBase *this,TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar2;
  longlong *plVar3;
  FHttpManager *this_00;
  atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  atomic<int> aVar9;
  TConsoleVariableData<bool> *pTVar10;
  FScriptContainerElement *pFVar11;
  char cVar12;
  atomic<int> aVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_HTTPThread_CompleteThreadedRequest> FVar15;
  longlong *plVar16;
  FHttpModule *pFVar17;
  longlong lVar18;
  atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar19;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar20;
  ulonglong uVar21;
  TReferenceControllerBase<1> *pTVar22;
  FNameEntryId FVar23;
  FName FVar24;
  IHttpRequest *pIVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  uint local_res20;
  TSharedRef<IHttpRequest,1> local_98;
  FName local_88;
  uint local_80;
  uint uStack_7c;
  FName local_78;
  LARGE_INTEGER local_60;
  FScriptContainerElement *local_58;
  FStatMessage local_50;
  FName local_40;
  
  local_res20 = param_1->ArrayNum;
  uVar21 = (ulonglong)(int)local_res20;
  if (0 < (int)local_res20) {
    pFVar26 = (param_1->AllocatorInstance).Data;
    local_58 = pFVar26 + uVar21 * 8;
    while( true ) {
      pFVar11 = local_58;
      pIVar25 = (IHttpRequest *)0x0;
      if (param_1->ArrayNum != (int)uVar21) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FHttpRequestCommon_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar26 == pFVar11) break;
      plVar3 = *(longlong **)pFVar26;
      FVar15 = StatPtr_STAT_HTTPThread_CompleteThreadedRequest;
      if (StatPtr_STAT_HTTPThread_CompleteThreadedRequest ==
          (FThreadSafeStaticStat<FStat_STAT_HTTPThread_CompleteThreadedRequest>)0x0) {
        pFVar14 = ::FName::FName(&local_40,"STAT_HTTPThread_CompleteThreadedRequest");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_HTTPThread_CompleteThreadedRequest>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_HTTPThread_CompleteThreadedRequest,*pFVar14,
                            L"CompleteThreadedRequest","STATGROUP_HTTPThread","STATCAT_Advanced",
                            L"HTTP Thread",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar24 = *(FName *)FVar15;
      bVar6 = false;
      bVar8 = false;
      local_78.ComparisonIndex.Value = 0;
      local_78.Number = 0;
      FVar23 = FVar24.ComparisonIndex.Value;
      uVar20 = FVar24.Number;
      if ((FVar23.Value == 0) && (uVar20 == 0)) {
LAB_14315f47c:
        bVar7 = false;
        FVar24 = local_78;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res18[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
          bVar6 = false;
          bVar8 = true;
          if (-1 < CpuChannel->Enabled) {
            local_88.ComparisonIndex.Value = FVar23.Value;
            local_88.Number = uVar20;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_88,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                       ,0x194);
            bVar6 = true;
            bVar8 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14315f47c;
        local_80 = FVar23.Value;
        uStack_7c = uVar20;
        local_78 = FVar24;
        FThreadStats::AddMessage(FVar24,CycleScopeStart);
        bVar7 = true;
      }
      (**(code **)(this->_padding_ + 0x88))(this,plVar3);
      pTVar22 = (TReferenceControllerBase<1> *)plVar3[2];
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        aVar9 = pTVar22->SharedReferenceCount;
        do {
          if (aVar9 == (atomic<int>)0x0) {
            pTVar22 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14315f4c9;
          }
          LOCK();
          aVar13 = pTVar22->SharedReferenceCount;
          bVar27 = aVar9 == aVar13;
          if (bVar27) {
            pTVar22->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
            aVar13 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar13;
        } while (!bVar27);
        pIVar25 = (IHttpRequest *)plVar3[1];
      }
LAB_14315f4c9:
      plVar16 = (longlong *)&pIVar25->field_0x8;
      if (pIVar25 == (IHttpRequest *)0x0) {
        plVar16 = (longlong *)0x0;
      }
      if ((plVar16 != plVar3 + 1) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pIVar25 == (IHttpRequest *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_98.Object = pIVar25;
      local_98.SharedReferenceCount.ReferenceController = pTVar22;
      if ((pIVar25 == (IHttpRequest *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      cVar12 = (**(code **)(*plVar3 + 0x140))(plVar3);
      if (cVar12 == '\x01') {
        pFVar17 = FHttpModule::Get();
        if ((pFVar17->HttpManager == (FHttpManager *)0x0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("HttpManager != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                                ,0x50,L""), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar10 = CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread.Ref;
        this_00 = pFVar17->HttpManager;
        bVar27 = IsInParallelGameThread();
        if ((bVar27) || (bVar27 = IsInGameThread(), bVar27)) {
          lVar18 = 0;
        }
        else {
          lVar18 = 1;
        }
        if (pTVar10->ShadowedValue[lVar18] != false) {
          lpCriticalSection = &this_00->RequestLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          TArray<TSharedRef<IHttpRequest,1>,TSizedDefaultAllocator<32>_>::Remove
                    (&this_00->Requests,&local_98);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        FHttpManager::MarkCurrentThreadCompletingRequest(this_00,true);
        (**(code **)(*plVar3 + 0x168))(plVar3);
        FHttpManager::BroadcastHttpRequestCompleted(this_00,&local_98);
        FHttpManager::MarkCurrentThreadCompletingRequest(this_00,false);
      }
      pTVar10 = CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread.Ref;
      bVar27 = IsInParallelGameThread();
      if ((bVar27) || (bVar27 = IsInGameThread(), bVar27)) {
        lVar18 = 0;
      }
      else {
        lVar18 = 1;
      }
      if ((pTVar10->ShadowedValue[lVar18] == false) ||
         (cVar12 = (**(code **)(*(longlong *)local_98.Object + 0x140))(), cVar12 == '\0')) {
        aVar19 = (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)
                 (this->CompletedThreadedRequests).First;
        if (aVar19 == (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)
                      (this->CompletedThreadedRequests).TailCopy) {
          aVar4 = (this->CompletedThreadedRequests).Tail;
          aVar19 = (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)
                   (this->CompletedThreadedRequests).First;
          (this->CompletedThreadedRequests).TailCopy = (FNode *)aVar4;
          if (aVar19 == aVar4) {
            aVar19 = (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)
                     FMemory::Malloc(0x10,8);
            *(undefined8 *)aVar19 = 0;
          }
          else {
            (this->CompletedThreadedRequests).First = *(FNode **)aVar19;
            *(undefined8 *)aVar19 = 0;
          }
        }
        else {
          (this->CompletedThreadedRequests).First = *(FNode **)aVar19;
          *(undefined8 *)aVar19 = 0;
        }
        *(longlong **)((TTypeCompatibleBytes<FHttpRequestCommon_*> *)((longlong)aVar19 + 8))->Pad =
             plVar3;
        ((this->CompletedThreadedRequests).Head)->Next = aVar19;
        (this->CompletedThreadedRequests).Head = (FNode *)aVar19;
        LOCK();
        paVar2 = &(this->CompletedThreadedRequests).NumElems;
        *paVar2 = (atomic<int>)((int)*paVar2 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar7) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) goto LAB_14315f7fc;
        local_50.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
        local_50.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_60);
        local_50.StatData.Pad[4] = '\0';
        local_50.StatData.Pad[5] = '\0';
        local_50.StatData.Pad[6] = '\0';
        local_50.StatData.Pad[7] = '\0';
        local_50.StatData.Pad[0] = local_60.s.LowPart._0_1_;
        local_50.StatData.Pad[1] = local_60.s.LowPart._1_1_;
        local_50.StatData.Pad[2] = local_60.s.LowPart._2_1_;
        local_50.StatData.Pad[3] = local_60.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_50);
        piVar1 = &this_01->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
          goto LAB_14315f7fc;
        }
        FThreadStats::Flush(this_01,false,false);
        uVar21 = (ulonglong)local_res20;
        pFVar26 = pFVar26 + 8;
      }
      else {
LAB_14315f7fc:
        uVar21 = (ulonglong)local_res20;
        pFVar26 = pFVar26 + 8;
      }
    }
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  return;
}

// GetCompletedRequests @ 1431618e0

void __thiscall
FHttpThreadBase::GetCompletedRequests
          (FHttpThreadBase *this,TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 local_18 [2];
  
  do {
    aVar2 = *(atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *)
             (this->CompletedThreadedRequests).Tail;
    if (aVar2 == (atomic<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>)0x0) {
      return;
    }
    local_18[0] = *(undefined8 *)((longlong)aVar2 + 8);
    (this->CompletedThreadedRequests).Tail = aVar2;
    LOCK();
    paVar1 = &(this->CompletedThreadedRequests).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    pFVar3 = (param_1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar6;
    }
    param_1->ArrayNum = iVar6 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  } while( true );
}

// GetSingleThreadInterface @ 143164900

FSingleThreadRunnable * __thiscall FHttpThreadBase::GetSingleThreadInterface(FHttpThreadBase *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FHttpThreadBase *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// HttpThreadTick @ 14316a840

void __thiscall FHttpThreadBase::HttpThreadTick(FHttpThreadBase *this,float param_1)

{
  return;
}

// Init @ 14316af20

bool __thiscall FHttpThreadBase::Init(FHttpThreadBase *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->LastTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  (**(code **)(this->_padding_ + 0x58))(this);
  return true;
}

// InsertToRateLimitedRequestsAccordingToPriority @ 14316c050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpThreadBase::InsertToRateLimitedRequestsAccordingToPriority
          (FHttpThreadBase *this,FHttpRequestCommon *param_1)

{
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_void___cdecl_FHttpThreadBase::InsertToRateLimitedRequestsAccordingToPriority(FHttpRequestCommon_*)_::_2_::FStat_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority>
  FVar14;
  ulonglong uVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar16;
  FNameEntryId FVar17;
  FName FVar18;
  ulonglong uVar19;
  uint uVar20;
  FHttpRequestCommon *local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  uVar19 = 0;
  local_res10 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FHttpThreadBase::InsertToRateLimitedRequestsAccordingToPriority(FHttpRequestCommon_*)_::_2_::FStat_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority>
           )0x0) {
        pFVar13 = ::FName::FName(&local_80,
                                 "STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority"
                                );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority,
                   *pFVar13,L"STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority",
                   "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority;
  if (StatPtr_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FHttpThreadBase::InsertToRateLimitedRequestsAccordingToPriority(FHttpRequestCommon_*)_::_2_::FStat_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority>
       )0x0) {
    pFVar13 = ::FName::FName(&local_78,
                             "STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority");
    FVar14 = (FThreadSafeStaticStat<_private:_void___cdecl_FHttpThreadBase::InsertToRateLimitedRequestsAccordingToPriority(FHttpRequestCommon_*)_::_2_::FStat_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &
                          StatPtr_STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority
                          ,*pFVar13,
                          L"STAT_FHttpThreadBase_InsertToRateLimitedRequestsAccordingToPriority",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar11 = FVar18.Number;
  if ((FVar17.Value == 0) && (uVar11 == 0)) {
LAB_14316c1bd:
    bVar5 = false;
    FVar18 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                   ,0x11c);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14316c1bd;
    local_88.s.LowPart = FVar17.Value;
    local_88.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  pTVar7 = CVarHttpRequestPriorityEnabled.Ref;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    uVar15 = 1;
    if (!bVar8) goto LAB_14316c1e2;
  }
  uVar15 = uVar19;
LAB_14316c1e2:
  if ((pTVar7->ShadowedValue[uVar15] != false) && (0 < (this->RateLimitedThreadedRequests).ArrayNum)
     ) {
    pTVar1 = &this->RateLimitedThreadedRequests;
    uVar15 = uVar19;
    do {
      uVar20 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar20 < (this->RateLimitedThreadedRequests).ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pcVar3 = *(code **)(local_res10->_padding_ + 0x158);
      bVar9 = (**(code **)(**(longlong **)((pTVar1->AllocatorInstance).Data + uVar19) + 0x158))();
      bVar10 = (*pcVar3)(local_res10);
      if (bVar9 < bVar10) {
        pFVar16 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar16 <= (FScriptContainerElement *)&local_res10) &&
           ((FScriptContainerElement *)&local_res10 <
            pFVar16 + (longlong)(this->RateLimitedThreadedRequests).ArrayMax * 8)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar12 = (this->RateLimitedThreadedRequests).ArrayNum;
        piVar2 = &(this->RateLimitedThreadedRequests).ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        pFVar16 = (pTVar1->AllocatorInstance).Data;
        (this->RateLimitedThreadedRequests).ArrayNum = iVar12 + 1;
        pFVar16 = pFVar16 + (longlong)(int)uVar20 * 8;
        memmove(pFVar16 + 8,pFVar16,(longlong)(int)(iVar12 - uVar20) << 3);
        *(FHttpRequestCommon **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar20 * 8) =
             local_res10;
        goto LAB_14316c33c;
      }
      uVar15 = (ulonglong)(uVar20 + 1);
      uVar19 = uVar19 + 8;
    } while ((int)(uVar20 + 1) < (this->RateLimitedThreadedRequests).ArrayNum);
  }
  pFVar16 = (this->RateLimitedThreadedRequests).AllocatorInstance.Data;
  if ((pFVar16 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar16 + (longlong)(this->RateLimitedThreadedRequests).ArrayMax * 8)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar12 = (this->RateLimitedThreadedRequests).ArrayNum;
  piVar2 = &(this->RateLimitedThreadedRequests).ArrayMax;
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->RateLimitedThreadedRequests).AllocatorInstance,piVar2);
  }
  (this->RateLimitedThreadedRequests).ArrayNum = iVar12 + 1;
  *(FHttpRequestCommon **)
   ((this->RateLimitedThreadedRequests).AllocatorInstance.Data + (longlong)iVar12 * 8) = local_res10
  ;
LAB_14316c33c:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
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

// MoveCompletingRequestsToCompletedRequests @ 14316fc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpThreadBase::MoveCompletingRequestsToCompletedRequests
          (FHttpThreadBase *this,TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FHttpRequestCommon *pFVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_HTTPThread_TickThreadedRequest> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_HTTPThread_HttpThreadTick> FVar19;
  FThreadSafeStaticStat<FStat_STAT_HTTPThread_IsThreadedRequestComplete> FVar20;
  FNameEntryId FVar21;
  FName FVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  double dVar27;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_148 [2];
  uint local_140;
  uint uStack_13c;
  FHttpRequestCommon *local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  FName local_118;
  uint local_110;
  uint uStack_10c;
  FName local_108;
  FName local_f8;
  FName local_e8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FName local_88;
  FName local_80;
  FName local_78 [7];
  
  QueryPerformanceCounter(&local_d8);
  local_138 = (FHttpRequestCommon *)&this->RunningThreadedRequests;
  dVar27 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  dVar6 = dVar27 - this->LastTime;
  this->LastTime = dVar27;
  pFVar26 = (this->RunningThreadedRequests).AllocatorInstance.Data;
  iVar14 = (this->RunningThreadedRequests).ArrayNum;
  pFVar4 = pFVar26 + (longlong)iVar14 * 8;
  while( true ) {
    if ((this->RunningThreadedRequests).ArrayNum != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FHttpRequestCommon_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar26 == pFVar4) break;
    plVar3 = *(longlong **)pFVar26;
    FVar16 = StatPtr_STAT_HTTPThread_TickThreadedRequest;
    if (StatPtr_STAT_HTTPThread_TickThreadedRequest ==
        (FThreadSafeStaticStat<FStat_STAT_HTTPThread_TickThreadedRequest>)0x0) {
      pFVar15 = ::FName::FName(&local_88,"STAT_HTTPThread_TickThreadedRequest");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_HTTPThread_TickThreadedRequest>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_TickThreadedRequest,
                          *pFVar15,L"TickThreadedRequest","STATGROUP_HTTPThread","STATCAT_Advanced",
                          L"HTTP Thread",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar22 = *(FName *)FVar16;
    bVar7 = false;
    bVar9 = false;
    local_108.ComparisonIndex.Value = 0;
    local_108.Number = 0;
    FVar21 = FVar22.ComparisonIndex.Value;
    uVar25 = FVar22.Number;
    if ((FVar21.Value == 0) && (uVar25 == 0)) {
LAB_14316fdf6:
      bVar8 = false;
      FVar22 = local_108;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
        bVar7 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_128.ComparisonIndex.Value = FVar21.Value;
          local_128.Number = uVar25;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_128,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                     ,0x170);
          bVar7 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14316fdf6;
      local_140 = FVar21.Value;
      uStack_13c = uVar25;
      local_108 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar8 = true;
    }
    (**(code **)(*plVar3 + 0x180))(plVar3,(float)dVar6);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar8) && (FVar22 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      if (pFVar17->ScopeCount <= pFVar17->bWaitForExplicitFlush) goto LAB_14316fee4;
      local_b8.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_b8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_b8);
      piVar1 = &pFVar17->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar17,false,false);
        }
        goto LAB_14316fee4;
      }
      FThreadStats::Flush(pFVar17,false,false);
      pFVar26 = pFVar26 + 8;
    }
    else {
LAB_14316fee4:
      pFVar26 = pFVar26 + 8;
    }
  }
  FVar19 = StatPtr_STAT_HTTPThread_HttpThreadTick;
  if (StatPtr_STAT_HTTPThread_HttpThreadTick ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_HttpThreadTick>)0x0) {
    pFVar15 = ::FName::FName(&local_80,"STAT_HTTPThread_HttpThreadTick");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_HTTPThread_HttpThreadTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_HttpThreadTick,
                        *pFVar15,L"HttpThreadTick","STATGROUP_HTTPThread","STATCAT_Advanced",
                        L"HTTP Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar19;
  bVar7 = false;
  bVar9 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar25 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar21.Value;
        local_120.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                   ,0x176);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar21.Value;
      uStack_13c = uVar25;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar8 = true;
      goto LAB_143170019;
    }
  }
  bVar8 = false;
  FVar22 = local_f8;
LAB_143170019:
  (**(code **)(this->_padding_ + 0x78))(this,(float)dVar6);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_a8);
      piVar1 = &pFVar17->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  pFVar10 = local_138;
  uVar25 = 0;
  if (0 < (this->RunningThreadedRequests).ArrayNum) {
    lVar24 = 0;
    do {
      FVar20 = StatPtr_STAT_HTTPThread_IsThreadedRequestComplete;
      if (StatPtr_STAT_HTTPThread_IsThreadedRequestComplete ==
          (FThreadSafeStaticStat<FStat_STAT_HTTPThread_IsThreadedRequestComplete>)0x0) {
        pFVar15 = ::FName::FName(local_78,"STAT_HTTPThread_IsThreadedRequestComplete");
        FVar20 = (FThreadSafeStaticStat<FStat_STAT_HTTPThread_IsThreadedRequestComplete>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_HTTPThread_IsThreadedRequestComplete,*pFVar15,
                            L"IsThreadedRequestComplete","STATGROUP_HTTPThread","STATCAT_Advanced",
                            L"HTTP Thread",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar22 = *(FName *)FVar20;
      bVar9 = false;
      bVar7 = false;
      local_e8.ComparisonIndex.Value = 0;
      local_e8.Number = 0;
      FVar21 = FVar22.ComparisonIndex.Value;
      uVar13 = FVar22.Number;
      if ((FVar21.Value == 0) && (uVar13 == 0)) {
LAB_143170221:
        bVar8 = false;
        FVar22 = local_e8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_148[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
          bVar9 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_118.ComparisonIndex.Value = FVar21.Value;
            local_118.Number = uVar13;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_118,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                       ,0x180);
            bVar9 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_143170221;
        local_110 = FVar21.Value;
        uStack_10c = uVar13;
        local_e8 = FVar22;
        FThreadStats::AddMessage(FVar22,CycleScopeStart);
        bVar9 = false;
        bVar8 = true;
      }
      uVar23 = ~uVar25 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar25 < (int)pFVar10->_padding_) {
        uVar13 = uVar23;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_138 = *(FHttpRequestCommon **)
                   (((ForAnyElementType *)&pFVar10->_padding_)->Data + lVar24);
      cVar12 = (**(code **)(((ForAnyElementType *)&local_138->_padding_)->Data + 0x170))();
      if (cVar12 != '\0') {
        TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FHttpRequestCommon_*_const_&>(param_1,&local_138);
        uVar13 = 0;
        if ((int)uVar25 < (int)pFVar10->_padding_) {
          uVar13 = uVar23;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (int)pFVar10->_padding_;
        pFVar4 = ((ForAnyElementType *)&pFVar10->_padding_)->Data;
        iVar14 = iVar2 + ~uVar25;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar25 * 8,pFVar4 + (longlong)(iVar2 - iVar14) * 8,
                  (longlong)iVar14 << 3);
        }
        *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)pFVar10,(int)pFVar10->_padding_,
                   (int *)((longlong)&pFVar10->_padding_ + 4));
        uVar25 = uVar25 - 1;
        lVar24 = lVar24 + -8;
        if (5 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar17 == (FThreadStats *)0x0) {
          pFVar18 = FThreadStatsPool::Get();
          pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
        }
        if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
          local_98.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
          local_98.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_c0);
          local_98.StatData.Pad[4] = '\0';
          local_98.StatData.Pad[5] = '\0';
          local_98.StatData.Pad[6] = '\0';
          local_98.StatData.Pad[7] = '\0';
          local_98.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
          local_98.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
          local_98.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
          local_98.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar17,&local_98);
          piVar1 = &pFVar17->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar17,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar17,false,false);
          }
        }
      }
      uVar25 = uVar25 + 1;
      lVar24 = lVar24 + 8;
    } while ((int)uVar25 < (this->RunningThreadedRequests).ArrayNum);
  }
  return;
}

// NeedsSingleThreadTick @ 143170590

bool __thiscall FHttpThreadBase::NeedsSingleThreadTick(FHttpThreadBase *this)

{
  return this->bIsSingleThread;
}

// Process @ 143173080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpThreadBase::Process
          (FHttpThreadBase *this,TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  EThreadPriority EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_HTTPThread_Process> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  int iVar11;
  FNameEntryId FVar12;
  FName FVar13;
  int iVar14;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  FVar9 = StatPtr_STAT_HTTPThread_Process;
  if (StatPtr_STAT_HTTPThread_Process == (FThreadSafeStaticStat<FStat_STAT_HTTPThread_Process>)0x0)
  {
    pFVar8 = ::FName::FName(&local_50,"STAT_HTTPThread_Process");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_HTTPThread_Process>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_Process,*pFVar8,
                       L"Process","STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",true,true
                       ,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                   ,0x1b2);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_58.s.LowPart = FVar12.Value;
      local_58.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_1431731d7;
    }
  }
  bVar5 = false;
  FVar13 = local_48;
LAB_1431731d7:
  if (this->bIsSingleThread == false) {
    bVar7 = IsInGameThread();
    if (bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4512387740343468177>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                         ,0x91,"!IsInGameThread()");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      iVar11 = 4;
      if (GHttpThreadPriorityIndex < 4) {
        iVar11 = GHttpThreadPriorityIndex;
      }
      iVar14 = 0;
      if (0 < iVar11) {
        iVar14 = iVar11;
      }
      EVar2 = GHttpThreadPriorities[iVar14];
      if (EVar2 != this->CurrentThreadPriority) {
        if (3 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        FWindowsPlatformProcess::SetThreadPriority(EVar2);
        this->CurrentThreadPriority = EVar2;
      }
    }
  }
  ConsumeCanceledRequestsAndNewRequests(this,param_1,param_2);
  MoveCompletingRequestsToCompletedRequests(this,param_2);
  StartRequestsWaitingInQueue(this,param_2);
  FinishRequestsFromHttpThreadWithCallbacks(this,param_2);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Run @ 14317aca0

uint __thiscall FHttpThreadBase::Run(FHttpThreadBase *this)

{
  return 0;
}

// StartRequestsWaitingInQueue @ 143183540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpThreadBase::StartRequestsWaitingInQueue
          (FHttpThreadBase *this,TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FHttpManager *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  double dVar9;
  TConsoleVariableData<int> *pTVar10;
  FHttpRequestCommon *pFVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  atomic<int> aVar16;
  FHttpModule *pFVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_HTTPThread_StartThreadedRequest> FVar19;
  longlong lVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  atomic<int> aVar24;
  atomic<float> aVar25;
  atomic<float> aVar26;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  FHttpRequestCommon *local_d8;
  uint local_d0;
  uint uStack_cc;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a0;
  void *local_90 [11];
  
  pFVar17 = FHttpModule::Get();
  if ((pFVar17->HttpManager == (FHttpManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("HttpManager != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                          ,0x50,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar10 = CVarHttpMaxConcurrentRequests.Ref;
  pFVar2 = pFVar17->HttpManager;
  aVar24 = (atomic<int>)(this->RunningThreadedRequests).ArrayNum;
  bVar12 = IsInParallelGameThread();
  if (!bVar12) {
    bVar12 = IsInGameThread();
    lVar20 = 4;
    if (!bVar12) goto LAB_1431835cb;
  }
  lVar20 = 0;
LAB_1431835cb:
  iVar15 = *(int *)((longlong)pTVar10->ShadowedValue + lVar20);
  this->MaxConcurrentRequests = iVar15;
  dVar9 = __real_4170000000000000;
  fVar8 = __real_3c23d70a;
  if ((int)aVar24 < iVar15) {
    do {
      if ((this->RateLimitedThreadedRequests).ArrayNum == 0) break;
      FVar19 = StatPtr_STAT_HTTPThread_StartThreadedRequest;
      if (StatPtr_STAT_HTTPThread_StartThreadedRequest ==
          (FThreadSafeStaticStat<FStat_STAT_HTTPThread_StartThreadedRequest>)0x0) {
        pFVar18 = ::FName::FName(&local_b8,"STAT_HTTPThread_StartThreadedRequest");
        FVar19 = (FThreadSafeStaticStat<FStat_STAT_HTTPThread_StartThreadedRequest>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_HTTPThread_StartThreadedRequest,*pFVar18,
                            L"StartThreadedRequest","STATGROUP_HTTPThread","STATCAT_Advanced",
                            L"HTTP Thread",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar23 = *(FName *)FVar19;
      bVar12 = false;
      bVar7 = false;
      local_b0.ComparisonIndex.Value = 0;
      local_b0.Number = 0;
      FVar22 = FVar23.ComparisonIndex.Value;
      uVar21 = FVar23.Number;
      if ((FVar22.Value == 0) && (uVar21 == 0)) {
LAB_143183746:
        bVar6 = false;
        FVar23 = local_b0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res8[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
          bVar12 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_res20.ComparisonIndex.Value = FVar22.Value;
            local_res20.Number = uVar21;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_res20,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                       ,0x143);
            bVar12 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_143183746;
        local_d0 = FVar22.Value;
        uStack_cc = uVar21;
        local_b0 = FVar23;
        FThreadStats::AddMessage(FVar23,CycleScopeStart);
        bVar6 = true;
      }
      if (((this->RateLimitedThreadedRequests).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_d8 = *(FHttpRequestCommon **)(this->RateLimitedThreadedRequests).AllocatorInstance.Data;
      if (((this->RateLimitedThreadedRequests).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->RateLimitedThreadedRequests).AllocatorInstance.Data;
      iVar15 = (this->RateLimitedThreadedRequests).ArrayNum + -1;
      if (iVar15 != 0) {
        memmove(pFVar3,pFVar3 + 8,(longlong)iVar15 << 3);
      }
      piVar1 = &(this->RateLimitedThreadedRequests).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->RateLimitedThreadedRequests).AllocatorInstance,
                 (this->RateLimitedThreadedRequests).ArrayNum,
                 &(this->RateLimitedThreadedRequests).ArrayMax);
      QueryPerformanceCounter(&local_c8);
      pFVar11 = local_d8;
      dVar5 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      if ((local_d8->TimeStartedWaitingInQueue == 0.0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TimeStartedWaitingInQueue != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestCommon.cpp"
                              ,0x28c,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aVar26 = (atomic<float>)(float)((dVar5 + dVar9) - (double)pFVar11->TimeStartedWaitingInQueue);
      if ((2 < (byte)LogHttp._0_1_) &&
         (bVar13 = FApp::IsUnattended(), pTVar10 = CVarHttpDurationInQueueToWarnInSeconds.Ref,
         !bVar13)) {
        bVar13 = IsInParallelGameThread();
        if ((bVar13) || (bVar13 = IsInGameThread(), bVar13)) {
          lVar20 = 0;
        }
        else {
          lVar20 = 4;
        }
        if ((float)*(int *)((longlong)pTVar10->ShadowedValue + lVar20) < (float)aVar26) {
          (**(code **)local_d8->_padding_)();
          (**(code **)(local_d8->_padding_ + 0x58))(local_d8,local_90);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          if (local_90[0] != (void *)0x0) {
            FMemory::Free(local_90[0]);
          }
        }
      }
      if (fVar8 < (float)aVar26) {
        aVar25 = (pFVar2->HttpStats).MaxTimeToWaitInQueue;
        if ((float)aVar25 <= (float)aVar26) {
          aVar25 = aVar26;
        }
        LOCK();
        (pFVar2->HttpStats).MaxTimeToWaitInQueue = aVar25;
        UNLOCK();
      }
      cVar14 = (**(code **)(this->_padding_ + 0x80))(this,local_d8);
      if (cVar14 == '\0') {
        TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FHttpRequestCommon_*_const_&>(param_1,&local_d8);
      }
      else {
        pFVar3 = (this->RunningThreadedRequests).AllocatorInstance.Data;
        aVar24 = (atomic<int>)((int)aVar24 + 1);
        if (((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar3 + (longlong)(this->RunningThreadedRequests).ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar15 = (this->RunningThreadedRequests).ArrayNum;
        piVar1 = &(this->RunningThreadedRequests).ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->RunningThreadedRequests).AllocatorInstance,piVar1);
        }
        (this->RunningThreadedRequests).ArrayNum = iVar15 + 1;
        *(FHttpRequestCommon **)
         ((this->RunningThreadedRequests).AllocatorInstance.Data + (longlong)iVar15 * 8) = local_d8;
        (**(code **)(local_d8->_padding_ + 0x180))(local_d8,0);
        if (5 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar6) && (FVar23 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_a0.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
          local_a0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_c0);
          local_a0.StatData.Pad[4] = '\0';
          local_a0.StatData.Pad[5] = '\0';
          local_a0.StatData.Pad[6] = '\0';
          local_a0.StatData.Pad[7] = '\0';
          local_a0.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
          local_a0.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
          local_a0.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
          local_a0.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_a0);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    } while ((int)aVar24 < this->MaxConcurrentRequests);
  }
  LOCK();
  (pFVar2->HttpStats).RequestsInFlight = aVar24;
  UNLOCK();
  aVar16 = *(atomic<int> *)&(pFVar2->HttpStats).MaxRequestsInFlight;
  if ((uint)aVar16 < (uint)aVar24) {
    aVar16 = aVar24;
  }
  LOCK();
  (pFVar2->HttpStats).MaxRequestsInFlight = (atomic<unsigned_int>)aVar16;
  UNLOCK();
  aVar24 = (atomic<int>)(this->RateLimitedThreadedRequests).ArrayNum;
  if (aVar24 != (atomic<int>)0x0) {
    LOCK();
    (pFVar2->HttpStats).RequestsInQueue = aVar24;
    UNLOCK();
    aVar16 = *(atomic<int> *)&(pFVar2->HttpStats).MaxRequestsInQueue;
    if ((uint)aVar16 < (uint)aVar24) {
      aVar16 = aVar24;
    }
    LOCK();
    (pFVar2->HttpStats).MaxRequestsInQueue = (atomic<unsigned_int>)aVar16;
    UNLOCK();
  }
  return;
}

// StartThread @ 143183c20

void __thiscall FHttpThreadBase::StartThread(FHttpThreadBase *this)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FRunnableThread *pFVar4;
  longlong lVar5;
  longlong lVar6;
  
  this->bIsSingleThread = false;
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar3,L"DisableForkedHTTPThread");
  lVar6 = 4;
  if ((longlong)GHttpThreadPriorityIndex < 4) {
    lVar6 = (longlong)GHttpThreadPriorityIndex;
  }
  lVar5 = 0;
  if (0 < lVar6) {
    lVar5 = lVar6;
  }
  this->CurrentThreadPriority = GHttpThreadPriorities[lVar5];
  bVar2 = FForkProcessHelper::IsForkedMultithreadInstance();
  if ((bVar2) && (!bVar1)) {
    pFVar4 = FForkProcessHelper::CreateForkableThread
                       ((FRunnable *)this,L"HttpManagerThread",0x20000,this->CurrentThreadPriority,
                        0xffffffffffffffff,bVar1,bVar1);
    this->Thread = pFVar4;
    this->bIsStopped = false;
    return;
  }
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar1) {
    this->bIsSingleThread = true;
  }
  pFVar4 = FRunnableThread::Create
                     ((FRunnable *)this,L"HttpManagerThread",0x20000,this->CurrentThreadPriority,
                      0xffffffffffffffff,None);
  this->Thread = pFVar4;
  this->bIsStopped = false;
  return;
}

// StartThreadedRequest @ 143184220

bool __thiscall
FHttpThreadBase::StartThreadedRequest(FHttpThreadBase *this,FHttpRequestCommon *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143184226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1->_padding_ + 0x178))(param_1);
  return (bool)uVar1;
}

// Stop @ 1431857f0

void __thiscall FHttpThreadBase::Stop(FHttpThreadBase *this)

{
  return;
}

// StopThread @ 143185f00

void __thiscall FHttpThreadBase::StopThread(FHttpThreadBase *this)

{
  FRunnableThread *pFVar1;
  
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  this->bIsSingleThread = true;
  this->bIsStopped = true;
  return;
}

// Tick @ 143188180

void __thiscall FHttpThreadBase::Tick(FHttpThreadBase *this)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  lVar2 = *(longlong *)&this[-1].CompletedThreadedRequests.NumElems;
  dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = *(double *)&this->bIsSingleThread;
  *(double *)&this->bIsSingleThread = dVar3;
                    /* WARNING: Could not recover jumptable at 0x0001431881cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x78))(&this[-1].CompletedThreadedRequests.NumElems,(float)(dVar3 - dVar1));
  return;
}

// UpdateConfigs @ 14318abf0

void __thiscall FHttpThreadBase::UpdateConfigs(FHttpThreadBase *this)

{
  return;
}

// UpdateThreadPriorityIfNeeded @ 14318ac90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpThreadBase::UpdateThreadPriorityIfNeeded(FHttpThreadBase *this)

{
  EThreadPriority EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (this->bIsSingleThread == false) {
    bVar3 = IsInGameThread();
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4512387740343468177>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                         ,0x91,"!IsInGameThread()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      iVar5 = 4;
      if (GHttpThreadPriorityIndex < 4) {
        iVar5 = GHttpThreadPriorityIndex;
      }
      iVar4 = 0;
      if (0 < iVar5) {
        iVar4 = iVar5;
      }
      EVar1 = GHttpThreadPriorities[iVar4];
      if (EVar1 != this->CurrentThreadPriority) {
        if (3 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        FWindowsPlatformProcess::SetThreadPriority(EVar1);
        this->CurrentThreadPriority = EVar1;
      }
    }
  }
  return;
}

