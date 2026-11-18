// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 20

// Call @ 143156b90

FString * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<FString_(__cdecl*)(void),FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 143156bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FHttpRequestCommon::CancelRequest(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
  FVar5;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FStatMessage FStack_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FHttpRequestCommon_AbortRequest ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FHttpRequestCommon::CancelRequest(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&LStackX_8.s,"STAT_FHttpRequestCommon_AbortRequest");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpRequestCommon_AbortRequest,
                   *pFVar4,L"STAT_FHttpRequestCommon_AbortRequest","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_FHttpRequestCommon_AbortRequest;
  if (StatPtr_STAT_FHttpRequestCommon_AbortRequest ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FHttpRequestCommon::CancelRequest(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
       )0x0) {
    pFVar4 = ::FName::FName(&FStackX_10,"STAT_FHttpRequestCommon_AbortRequest");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FHttpRequestCommon::CancelRequest(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpRequestCommon_AbortRequest,
                         *pFVar4,L"STAT_FHttpRequestCommon_AbortRequest","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    (**(code **)(**(longlong **)param_1 + 0x198))();
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar7.Value;
        LStackX_8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestCommon.cpp"
                   ,0x184);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      LStackX_8.s.LowPart = FVar7.Value;
      LStackX_8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    (**(code **)(**(longlong **)param_1 + 0x198))();
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
        FStack_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        FStack_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&LStackX_8);
        FStack_28.StatData.Pad[4] = '\0';
        FStack_28.StatData.Pad[5] = '\0';
        FStack_28.StatData.Pad[6] = '\0';
        FStack_28.StatData.Pad[7] = '\0';
        FStack_28.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
        FStack_28.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
        FStack_28.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
        FStack_28.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this,&FStack_28);
        piVar1 = &this->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
  }
  return;
}

// Call @ 143156bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FCurlMultiPollEventLoopHttpThread::ProcessCurlRequests
            (*(FCurlMultiPollEventLoopHttpThread **)param_1);
  return;
}

// Call @ 143156bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  IHttpRequest *pIVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this;
  TSharedPtr<IHttpResponse,1> *pTVar8;
  FHttpLogVerbosityTracker *this_00;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  IHttpRequest *pIVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  IHttpRequest *pIVar15;
  bool bVar16;
  TSharedPtr<IHttpRequest,1> TStack_58;
  undefined1 auStack_48 [16];
  
  pIVar1 = *(IHttpRequest **)((longlong)param_1 + 8);
  pIVar11 = (IHttpRequest *)0x0;
  if (pIVar1 != (IHttpRequest *)0x0) {
    aVar4 = *(atomic<int> *)&pIVar1->field_0x8;
    do {
      pIVar15 = pIVar11;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1431519db;
      LOCK();
      aVar6 = *(atomic<int> *)&pIVar1->field_0x8;
      bVar16 = aVar4 == aVar6;
      if (bVar16) {
        *(atomic<int> *)&pIVar1->field_0x8 = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar16);
    pIVar11 = *(IHttpRequest **)param_1;
  }
  pIVar15 = pIVar1;
  if (pIVar11 == (IHttpRequest *)0x0) goto LAB_1431519db;
  pTVar9 = *(TReferenceControllerBase<1> **)&pIVar11[0x17].field_0x10;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_143151b9e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if ((pIVar11 == (IHttpRequest *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143151958;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar16 = aVar4 == aVar6;
      if (bVar16) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar16);
    lVar2 = *(longlong *)&pIVar11[0x17].field_0x8;
    if (lVar2 == 0) goto LAB_143151b9e;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x50);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if (pIVar1 != (IHttpRequest *)0x0) {
      LOCK();
      *(atomic<int> *)&pIVar1->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pIVar1->field_0x8 + 1);
      UNLOCK();
    }
    lVar13 = *(longlong *)(lVar2 + 0x40);
    lVar12 = (longlong)*(int *)(lVar2 + 0x48) * 0x30 + lVar13;
    if (lVar13 != lVar12) {
      lVar10 = lVar13;
      if (pIVar11 == (IHttpRequest *)0x0) goto LAB_143151a52;
      do {
        if (pIVar11 == *(IHttpRequest **)(lVar10 + 0x20)) {
          lVar13 = (lVar10 - lVar13) / 6 + (lVar10 - lVar13 >> 0x3f);
          uVar14 = (int)(lVar13 >> 3) - (int)(lVar13 >> 0x3f);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pIVar1);
          if (uVar14 == 0xffffffff) goto LAB_143151a66;
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(lVar2 + 0x48)) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar2 + 0x40) + 4 + (longlong)(int)uVar14 * 0x30) != 0) {
            this_00 = FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::Get();
            FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::DecrementRetriedRequests(this_00);
          }
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(lVar2 + 0x48)) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl((TArray<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,TSizedDefaultAllocator<32>_>
                            *)(lVar2 + 0x40),uVar14);
          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(ForAnyElementType *)(lVar2 + 0x40),*(int *)(lVar2 + 0x48),
                     (int *)(lVar2 + 0x4c));
          LeaveCriticalSection(lpCriticalSection);
          goto LAB_143151958;
        }
LAB_143151a52:
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != lVar12);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pIVar1);
LAB_143151a66:
    LeaveCriticalSection(lpCriticalSection);
LAB_143151958:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  this = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
          *)(**(code **)(*(longlong *)pIVar11 + 0xf0))(pIVar11);
  bVar16 = *(bool *)((longlong)param_1 + 0x10);
  if ((pIVar11 == (IHttpRequest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = (TSharedPtr<IHttpResponse,1> *)
           (**(code **)(*(longlong *)pIVar11 + 0x120))(pIVar11,auStack_48);
  if (pIVar1 != (IHttpRequest *)0x0) {
    LOCK();
    *(atomic<int> *)&pIVar1->field_0x8 = (atomic<int>)((int)*(atomic<int> *)&pIVar1->field_0x8 + 1);
    UNLOCK();
  }
  TStack_58.Object = pIVar11;
  TStack_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  ::ExecuteIfBound(this,&TStack_58,pTVar8,bVar16);
LAB_1431519db:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar15);
  return;
}

// Call @ 143156be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FHttpThreadBase::Process(*(FHttpThreadBase **)param_1,&local_18,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Call @ 143156c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FManager *this;
  FScriptContainerElement *pFVar3;
  FRequest *pFVar4;
  IHttpResponse *pIVar5;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  FHttpRetryRequestEntry *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined1 auStack_48 [8];
  TReferenceControllerBase<1> *pTStack_40;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  pTVar18 = pTVar17;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar1->SharedReferenceCount;
    do {
      pTVar15 = pTVar17;
      if (aVar7 == (atomic<int>)0x0) goto LAB_143151c7c;
      LOCK();
      aVar8 = pTVar1->SharedReferenceCount;
      bVar19 = aVar7 == aVar8;
      if (bVar19) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar19);
    pTVar18 = *(TReferenceControllerBase<1> **)param_1;
  }
  pTVar15 = pTVar1;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar18[0x23].SharedReferenceCount;
    pTVar14 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar2->SharedReferenceCount;
      do {
        pTVar14 = pTVar17;
        if (aVar7 == (atomic<int>)0x0) goto LAB_143151c74;
        LOCK();
        aVar8 = pTVar2->SharedReferenceCount;
        bVar19 = aVar7 == aVar8;
        if (bVar19) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar8 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar8;
      } while (!bVar19);
      this = (FManager *)pTVar18[0x23]._padding_;
      pTVar14 = pTVar2;
      if (this != (FManager *)0x0) {
        lpCriticalSection = &this->RequestListLock;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar3 = (this->RequestList).AllocatorInstance.Data;
        if (pFVar3 != pFVar3 + (longlong)(this->RequestList).ArrayNum * 0x30) {
          pFVar10 = pFVar3;
          if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_143151cef;
          do {
            if (pTVar18 == *(TReferenceControllerBase<1> **)(pFVar10 + 0x20)) {
              lVar11 = ((longlong)pFVar10 - (longlong)pFVar3) / 6 +
                       ((longlong)pFVar10 - (longlong)pFVar3 >> 0x3f);
              uVar12 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              if (uVar12 == 0xffffffff) goto LAB_143151d03;
              uVar16 = 0;
              if ((int)uVar12 < (this->RequestList).ArrayNum) {
                uVar16 = ~uVar12 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar13 = (FHttpRetryRequestEntry *)
                        ((this->RequestList).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x30);
              pFVar4 = (pFVar13->Request).Object;
              puVar9 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x120))(pFVar4,auStack_48);
              pFVar4 = (pFVar13->Request).Object;
              pTVar1 = (TReferenceControllerBase<1> *)puVar9[1];
              pIVar5 = (IHttpResponse *)*puVar9;
              if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                UNLOCK();
              }
              pTVar18 = (pFVar4->LastResponse).SharedReferenceCount.ReferenceController;
              (pFVar4->LastResponse).Object = pIVar5;
              (pFVar4->LastResponse).SharedReferenceCount.ReferenceController = pTVar1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar18);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_40);
              ((pFVar13->Request).Object)->bLastSucceeded = *(bool *)((longlong)param_1 + 0x10);
              FHttpRetrySystem::FManager::RetryHttpRequest(this,pFVar13);
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              goto LAB_143151c74;
            }
LAB_143151cef:
            pFVar10 = pFVar10 + 0x30;
          } while (pFVar10 != pFVar3 + (longlong)(this->RequestList).ArrayNum * 0x30);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_143151d03:
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
LAB_143151c74:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
LAB_143151c7c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// Call @ 143156c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143156c80;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(FHttpRequestCommon **)param_1 != (FHttpRequestCommon *)0x0) {
      FHttpRequestCommon::OnActivityTimeoutTimerTaskTrigger(*(FHttpRequestCommon **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_143156c80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 143156cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FHttpRequestCommon *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143156ce0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this = *(FHttpRequestCommon **)param_1;
    if (this != (FHttpRequestCommon *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FHttpRequestCommon::OnTotalTimeoutTimerTaskTrigger(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_143156ce0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 143156d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FHttpThreadBase::Process(*(FHttpThreadBase **)param_1,&local_18,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Call @ 143156d80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FHttpThreadBase::Process(*(FHttpThreadBase **)param_1,&local_18,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Call @ 143156de0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  FNullHttpRequest::FinishedRequest(*(FNullHttpRequest **)param_1);
  return;
}

// Call @ 143156df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
  RequestShutdown(*(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>
                    **)param_1,(TUniqueFunction<void___cdecl(void)> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// Call @ 143156e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FHttpRequestCommon::SetFailureReason(*(FHttpRequestCommon **)param_1,ConnectionError);
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FHttpRequestCommon::FinishRequestNotInHttpManager(*(FHttpRequestCommon **)param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &uStack_18) {
    *(undefined8 *)param_1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Call @ 143156e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,void>::
Call(void *param_1)

{
  int iVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *this;
  TSharedPtr<IHttpRequest,1> local_18;
  
  this = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *)
         (**(code **)(**(longlong **)param_1 + 0x110))();
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  local_18.Object = *(IHttpRequest **)param_1;
  iVar1 = *(int *)((longlong)param_1 + 0x10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>::
  ExecuteIfBound(this,&local_18,iVar1);
  return;
}

// Call @ 143156ec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,void>::
Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143156ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x168))();
  return;
}

// Call @ 143156ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,void,unsigned___int64,enum_UE::EventLoop::ESocketIoRequestStatus,enum_UE::EventLoop::EIOFlags>
::Call(void *param_1,ulong64 *param_2,ESocketIoRequestStatus *param_3,EIOFlags *param_4)

{
  `FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 143156f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,void>
::Call(void *param_1)

{
  FCurlSocketEventLoopHttpThread::ProcessCurlSocketActions
            (*(FCurlSocketEventLoopHttpThread **)param_1,0xffffffffffffffff,0);
  return;
}

// Call @ 143156f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,void>::Call(void *param_1)

{
  LARGE_INTEGER local_res10 [3];
  
  if (2 < (byte)LogHttp._0_1_) {
    QueryPerformanceCounter(local_res10);
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Still_waiting_f_150a54ba0,
               (FLogCategoryBase *)&LogHttp);
    return;
  }
  return;
}

// Call @ 143156f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,void>::
Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143156f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x168))();
  return;
}

// Call @ 143156fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143156fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x38))(*(longlong **)param_1,0);
  return;
}

