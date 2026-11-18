// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 62

// FHttpRequestCommon @ 14314d2a0

FHttpRequestCommon * __thiscall FHttpRequestCommon::FHttpRequestCommon(FHttpRequestCommon *this)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  FHttpRequestImpl::FHttpRequestImpl((FHttpRequestImpl *)this);
  this->_padding_ = (longlong)&___7FHttpRequestCommon__6B_;
  (this->TimeoutSecs).bIsSet = false;
  (this->ActivityTimeoutSecs).bIsSet = false;
  this->bTimedOut = (atomic<bool>)0x0;
  this->bActivityTimedOut = (atomic<bool>)0x0;
  this->bCanceled = (atomic<bool>)0x0;
  this->bUsePlatformActivityTimeout = true;
  this->CompletionStatus = NotStarted;
  this->FailureReason = None;
  this->DelegateThreadPolicy = CompleteOnGameThread;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->ActivityTimeoutAt = 0.0;
  (this->TotalTimeoutHttpTaskTimerHandle).Object = (IHttpTaskTimerHandle *)0x0;
  (this->TotalTimeoutHttpTaskTimerHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActivityTimeoutHttpTaskTimerHandle).Object = (IHttpTaskTimerHandle *)0x0;
  dVar1 = dVar1 + __real_4170000000000000;
  (this->ActivityTimeoutHttpTaskTimerHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->RequestStartTimeAbsoluteSeconds = dVar1;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->HttpTaskTimerHandleCriticalSection,4000);
  this->StartProcessTime = 0.0;
  this->ConnectTime = -1.0;
  (this->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->URL).Data.ArrayNum = 0;
  (this->URL).Data.ArrayMax = 0;
  (this->EffectiveURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectiveURL).Data.ArrayNum = 0;
  (this->EffectiveURL).Data.ArrayMax = 0;
  (this->ResponseCommon).Object = (FHttpResponseCommon *)0x0;
  (this->ResponseCommon).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ResponseBodyReceiveStream).Object = (FArchive *)0x0;
  (this->ResponseBodyReceiveStream).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ResponseBodyReceiveStreamCriticalSection,4000);
  this->bInitializedWithValidStream = (atomic<bool>)0x0;
  (this->RequestPayload).Ptr = (FRequestPayload *)0x0;
  *(undefined8 *)&this->Options = 0;
  *(undefined8 *)&(this->Options).field_0x8 = 0;
  *(undefined8 *)&(this->Options).field_0x20 = 0;
  *(undefined4 *)&(this->Options).field_0x28 = 0;
  *(undefined4 *)&(this->Options).field_0x2c = 0x80;
  *(undefined4 *)&(this->Options).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Options).field_0x34 = 0;
  *(undefined8 *)&(this->Options).field_0x40 = 0;
  *(undefined4 *)&(this->Options).field_0x48 = 0;
  this->ElapsedTime = 0.0;
  this->TimeStartedWaitingInQueue = 0.0;
  this->Priority = Normal;
  return this;
}

// ~FHttpRequestCommon @ 143150630

void __thiscall FHttpRequestCommon::~FHttpRequestCommon(FHttpRequestCommon *this)

{
  void *pvVar1;
  FRequestPayload *pFVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->Options).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Options).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Options);
  pFVar2 = (this->RequestPayload).Ptr;
  if (pFVar2 != (FRequestPayload *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResponseBodyReceiveStreamCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResponseBodyReceiveStream).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResponseCommon).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->EffectiveURL).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HttpTaskTimerHandleCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActivityTimeoutHttpTaskTimerHandle).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TotalTimeoutHttpTaskTimerHandle).SharedReferenceCount.ReferenceController);
  FHttpRequestImpl::~FHttpRequestImpl((FHttpRequestImpl *)this);
  return;
}

// operator() @ 1431515a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FHttpRequestCommon::CancelRequest(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FHttpRequestCommon_AbortRequest ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FHttpRequestCommon::CancelRequest(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_FHttpRequestCommon_AbortRequest");
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
    pFVar4 = ::FName::FName(&local_res10,"STAT_FHttpRequestCommon_AbortRequest");
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
    (**(code **)(**(longlong **)this + 0x198))();
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
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
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    (**(code **)(**(longlong **)this + 0x198))();
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// operator() @ 143151e30

void __thiscall `FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(longlong *)this == 0) {
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
  FHttpRequestCommon::SetFailureReason(*(FHttpRequestCommon **)this,ConnectionError);
  if (*(longlong *)this == 0) {
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
  FHttpRequestCommon::FinishRequestNotInHttpManager(*(FHttpRequestCommon **)this);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    *(undefined8 *)this = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// CancelRequest @ 143157250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpRequestCommon::CancelRequest(FHttpRequestCommon *this)

{
  atomic<bool> aVar1;
  FHttpManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FHttpThreadBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FHttpModule *pFVar7;
  TSharedRef<IHttpRequest,1> *pTVar8;
  undefined ***pppuVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TSharedRef<IHttpRequest,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  IHttpRequest *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  LOCK();
  aVar1 = this->bCanceled;
  this->bCanceled = (atomic<bool>)0x1;
  UNLOCK();
  if (aVar1 == (atomic<bool>)0x0) {
    StopActivityTimeoutTimer(this);
    StopPassingReceivedData(this);
    if (5 < (byte)LogHttp._0_1_) {
      (**(code **)this->_padding_)(this);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    pFVar7 = FHttpModule::Get();
    if ((pFVar7->HttpManager == (FHttpManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = pFVar7->HttpManager;
    pTVar8 = TSharedFromThis<IHttpRequest,1>::AsShared
                       ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_58);
    pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_30 = pTVar8->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,void>::
                  Call;
    local_28 = pTVar3;
    if ((pFVar2->Thread == (FHttpThreadBase *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                           ,0x15f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = pFVar2->Thread;
    (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,local_68,local_48,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    if (local_48[0] != (code *)0x0) {
      pppuVar9 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar9 = local_20;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ClearInCaseOfRetry @ 143158310

void __thiscall FHttpRequestCommon::ClearInCaseOfRetry(FHttpRequestCommon *this)

{
  FString *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  LOCK();
  this->bActivityTimedOut = (atomic<bool>)0x0;
  UNLOCK();
  this->FailureReason = None;
  LOCK();
  this->bCanceled = (atomic<bool>)0x0;
  UNLOCK();
  pFVar1 = (FString *)(**(code **)this->_padding_)();
  ::FString::operator=(&this->EffectiveURL,pFVar1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ResponseCommon != (TSharedPtr<FHttpResponseCommon,1> *)&local_18) {
    (this->ResponseCommon).Object = (FHttpResponseCommon *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ResponseCommon).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ClearTimeout @ 1431583e0

void __thiscall FHttpRequestCommon::ClearTimeout(FHttpRequestCommon *this)

{
  if ((this->TimeoutSecs).bIsSet != false) {
    (this->TimeoutSecs).bIsSet = false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001431583f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd8))();
  return;
}

// CloseRequestPayloadDefaultImpl @ 143158c30

void __thiscall FHttpRequestCommon::CloseRequestPayloadDefaultImpl(FHttpRequestCommon *this)

{
  FRequestPayload *pFVar1;
  
  pFVar1 = (this->RequestPayload).Ptr;
  if (pFVar1 != (FRequestPayload *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143158c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x38))();
    return;
  }
  return;
}

// FinishRequestNotInHttpManager @ 14315f040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHttpRequestCommon::FinishRequestNotInHttpManager(FHttpRequestCommon *this)

{
  FHttpManager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FHttpThreadBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FHttpModule *pFVar6;
  TSharedRef<IHttpRequest,1> *pTVar7;
  undefined ***pppuVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  TSharedRef<IHttpRequest,1> local_98;
  TSharedRef<IHttpRequest,1> local_88;
  code *local_78 [2];
  undefined **local_68;
  IHttpRequest *local_60;
  TReferenceControllerBase<1> *local_58;
  undefined ***local_50;
  code *local_48 [2];
  undefined **local_38;
  IHttpRequest *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar5 = IsInGameThread();
  if (bVar5) {
    if (this->DelegateThreadPolicy == CompleteOnGameThread) {
LAB_14315f1ab:
      (**(code **)(this->_padding_ + 0x168))(this);
      return;
    }
    pFVar6 = FHttpModule::Get();
    if ((pFVar6->HttpManager == (FHttpManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = pFVar6->HttpManager;
    pTVar7 = TSharedFromThis<IHttpRequest,1>::AsShared
                       ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_98);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    local_60 = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`10'::<lambda_1>,0,0>
                ::_vftable_;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,void>
                  ::Call;
    local_58 = pTVar2;
    if ((pFVar1->Thread == (FHttpThreadBase *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                           ,0x15f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = pFVar1->Thread;
    (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,local_a8,local_78,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_78[0] != (code *)0x0) {
      pppuVar8 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar8 = local_50;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  else {
    if (this->DelegateThreadPolicy == CompleteOnHttpThread) goto LAB_14315f1ab;
    pFVar6 = FHttpModule::Get();
    if ((pFVar6->HttpManager == (FHttpManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = pFVar6->HttpManager;
    pTVar7 = TSharedFromThis<IHttpRequest,1>::AsShared
                       ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_88);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    local_30 = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`17'::<lambda_2>,0,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,void>
                  ::Call;
    local_28 = pTVar2;
    FHttpManager::AddGameThreadTask(pFVar1,(TFunction<void___cdecl(void)> *)local_48,0.0);
    if (local_48[0] != (code *)0x0) {
      pppuVar8 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar8 = local_20;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_98.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return;
}

// GetActivityTimeoutOrDefault @ 143160be0

float __thiscall FHttpRequestCommon::GetActivityTimeoutOrDefault(FHttpRequestCommon *this)

{
  FHttpModule *pFVar1;
  
  pFVar1 = FHttpModule::Get();
  if ((this->ActivityTimeoutSecs).bIsSet != false) {
    return (this->ActivityTimeoutSecs).TypedValue;
  }
  return pFVar1->HttpActivityTimeout;
}

// GetDelegateThreadPolicy @ 1431625e0

EHttpRequestDelegateThreadPolicy __thiscall
FHttpRequestCommon::GetDelegateThreadPolicy(FHttpRequestCommon *this)

{
  return this->DelegateThreadPolicy;
}

// GetEffectiveURL @ 143162690

FString * __thiscall FHttpRequestCommon::GetEffectiveURL(FHttpRequestCommon *this)

{
  return &this->EffectiveURL;
}

// GetElapsedTime @ 143162750

float __thiscall FHttpRequestCommon::GetElapsedTime(FHttpRequestCommon *this)

{
  return this->ElapsedTime;
}

// GetFailureReason @ 1431628e0

EHttpFailureReason __thiscall FHttpRequestCommon::GetFailureReason(FHttpRequestCommon *this)

{
  return this->FailureReason;
}

// GetOption @ 1431645c0

FString * __thiscall
FHttpRequestCommon::GetOption
          (FHttpRequestCommon *this,FString *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  pFVar1 = TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
           ::Find((TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
                   *)&this->Options,local_res18);
  if (pFVar1 != (FString *)0x0) {
    ::FString::FString(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetPriority @ 143164730

EHttpRequestPriority __thiscall FHttpRequestCommon::GetPriority(FHttpRequestCommon *this)

{
  return this->Priority;
}

// GetResponse @ 143164820

TSharedPtr<IHttpResponse,1> * __thiscall
FHttpRequestCommon::GetResponse
          (FHttpRequestCommon *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IHttpResponse *)(this->ResponseCommon).Object;
  pTVar1 = (this->ResponseCommon).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetStatus @ 143164c20

Type __thiscall FHttpRequestCommon::GetStatus(FHttpRequestCommon *this)

{
  return this->CompletionStatus;
}

// GetTimeStartedWaitingInQueue @ 143164cb0

float __thiscall FHttpRequestCommon::GetTimeStartedWaitingInQueue(FHttpRequestCommon *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->TimeStartedWaitingInQueue != 0.0) {
    return this->TimeStartedWaitingInQueue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TimeStartedWaitingInQueue != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestCommon.cpp"
                     ,0x28c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return this->TimeStartedWaitingInQueue;
}

// GetTimeout @ 143164d80

TOptional<float> __thiscall FHttpRequestCommon::GetTimeout(FHttpRequestCommon *this)

{
  bool bVar1;
  TOptional<float> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  bVar1 = (this->TimeoutSecs).bIsSet;
  *(bool *)((longlong)in_RDX + 4) = bVar1;
  if (bVar1 != false) {
    *(float *)in_RDX = (this->TimeoutSecs).TypedValue;
  }
  return in_RDX;
}

// GetTimeoutOrDefault @ 143164e50

float __thiscall FHttpRequestCommon::GetTimeoutOrDefault(FHttpRequestCommon *this)

{
  float *pfVar1;
  FHttpModule *pFVar2;
  undefined1 local_res8 [32];
  
  pfVar1 = (float *)(**(code **)(this->_padding_ + 0xe0))(this,local_res8);
  pFVar2 = FHttpModule::Get();
  if (*(char *)(pfVar1 + 1) != '\0') {
    return *pfVar1;
  }
  return pFVar2->HttpTotalTimeout;
}

// GetURL @ 143164fb0

FString * __thiscall FHttpRequestCommon::GetURL(FHttpRequestCommon *this)

{
  return &this->URL;
}

// GetURLParameter @ 143165170

FString * __thiscall
FHttpRequestCommon::GetURLParameter
          (FHttpRequestCommon *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  TOptional<FString>_u_0 local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  pFVar3 = (FScriptContainerElement *)(ulonglong)(iVar1 - 1);
  if (iVar1 == 0) {
    pFVar3 = (FScriptContainerElement *)0x0;
  }
  local_28.Size = (int)pFVar3;
  puVar2 = (undefined8 *)(**(code **)this->_padding_)();
  local_18.DataPtr = (wchar_t *)*puVar2;
  local_18.Size = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    local_18.Size = 0;
  }
  FGenericPlatformHttp::GetUrlParameter
            ((TOptional<FString> *)&local_38.TypedValue,&local_18,&local_28);
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     ((TOptional<FString>_u_0 *)__return_storage_ptr__ != &local_38)) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)local_38.TypedValue.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayMax = local_38.TypedValue.Data.ArrayMax;
    (__return_storage_ptr__->Data).ArrayNum = local_38.TypedValue.Data.ArrayNum;
    local_38.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_38.TypedValue.Data.ArrayMax = 0;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleRequestFailed @ 143168650

void __thiscall FHttpRequestCommon::HandleRequestFailed(FHttpRequestCommon *this)

{
  FHttpResponseCommon *pFVar1;
  EHttpFailureReason EVar2;
  
  if (this->FailureReason == None) {
    if (this->bCanceled == (atomic<bool>)0x0) {
      if (this->bTimedOut == (atomic<bool>)0x0) {
        if ((this->bUsePlatformActivityTimeout != false) ||
           (EVar2 = ConnectionError, this->bActivityTimedOut == (atomic<bool>)0x0)) {
          EVar2 = Other;
        }
      }
      else {
        EVar2 = TimedOut;
      }
    }
    else {
      EVar2 = Cancelled;
    }
    SetFailureReason(this,EVar2);
  }
  pFVar1 = (this->ResponseCommon).Object;
  this->CompletionStatus = Failed;
  if (pFVar1 != (FHttpResponseCommon *)0x0) {
    pFVar1->CompletionStatus = Failed;
  }
  LogFailure(this);
  return;
}

// HandleRequestSucceed @ 1431686d0

void __thiscall FHttpRequestCommon::HandleRequestSucceed(FHttpRequestCommon *this)

{
  atomic<float> aVar1;
  FHttpResponseCommon *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FHttpModule *pFVar6;
  atomic<float> aVar7;
  TSharedPtr<IHttpResponse,1> local_18;
  
  pFVar2 = (this->ResponseCommon).Object;
  this->CompletionStatus = Succeeded;
  if (pFVar2 != (FHttpResponseCommon *)0x0) {
    pFVar2->CompletionStatus = Succeeded;
  }
  pTVar3 = (this->ResponseCommon).SharedReferenceCount.ReferenceController;
  local_18.Object = (IHttpResponse *)(this->ResponseCommon).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar3;
  LogResponse(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar6 = FHttpModule::Get();
  if (pFVar6->HttpManager == (FHttpManager *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HttpManager != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                       ,0x50,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  aVar1 = (pFVar6->HttpManager->HttpStats).MaxTimeToConnect;
  aVar7 = (atomic<float>)(float)this->ConnectTime;
  if ((float)this->ConnectTime <= (float)aVar1) {
    aVar7 = aVar1;
  }
  LOCK();
  (pFVar6->HttpManager->HttpStats).MaxTimeToConnect = aVar7;
  UNLOCK();
  return;
}

// HandleStatusCodeReceived @ 1431688e0

void __thiscall FHttpRequestCommon::HandleStatusCodeReceived(FHttpRequestCommon *this,int param_1)

{
  FHttpResponseCommon *pFVar1;
  
  pFVar1 = (this->ResponseCommon).Object;
  if (pFVar1 != (FHttpResponseCommon *)0x0) {
    pFVar1->ResponseCode = param_1;
  }
  TriggerStatusCodeReceivedDelegate(this,param_1);
  return;
}

// InitResponse @ 14316bc40

void __thiscall FHttpRequestCommon::InitResponse(FHttpRequestCommon *this)

{
  TSharedPtr<FHttpResponseCommon,1> *pTVar1;
  FHttpResponseCommon *local_28;
  FSharedReferencer<1> local_20;
  FHttpResponseCommon *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->ResponseCommon;
  if (pTVar1->Object == (FHttpResponseCommon *)0x0) {
    (**(code **)(this->_padding_ + 0x1a8))(this,&local_18);
    local_28 = local_18;
    local_20.ReferenceController = local_10;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FHttpResponseCommon,1> *)&local_28) {
      pTVar1->Object = local_18;
      local_28 = (FHttpResponseCommon *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ResponseCommon).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// LogFailure @ 14316dbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpRequestCommon::LogFailure(FHttpRequestCommon *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FHttpManager *pFVar2;
  code *pcVar3;
  bool bVar4;
  EHttpFailureReason EVar5;
  int iVar6;
  FHttpModule *pFVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  if (((this->bCanceled == (atomic<bool>)0x0) && (this->bTimedOut == (atomic<bool>)0x0)) &&
     (this->bActivityTimedOut == (atomic<bool>)0x0)) {
    pFVar7 = FHttpModule::Get();
    if ((pFVar7->HttpManager == (FHttpManager *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = pFVar7->HttpManager;
    plVar8 = (longlong *)(**(code **)this->_padding_)(this);
    lpCriticalSection = &pFVar2->UrlPatternsToDisableFailedLogCriticalSection;
    local_res10 = *plVar8;
    iVar10 = (int)plVar8[1] + -1;
    if ((int)plVar8[1] == 0) {
      iVar10 = 0;
    }
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (pFVar2->UrlPatternsToDisableFailedLog).ArrayNum;
    pFVar9 = (pFVar2->UrlPatternsToDisableFailedLog).AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->UrlPatternsToDisableFailedLog).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar11) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((byte)LogHttp._0_1_ < 3) {
          return;
        }
        EVar5 = (**(code **)(this->_padding_ + 0x18))(this);
        ::LexToString(EVar5);
        (**(code **)this->_padding_)(this);
        (**(code **)(this->_padding_ + 0x58))(this,local_68);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        local_58[0] = local_68[0];
        goto LAB_14316de94;
      }
      local_88.DataPtr = *(wchar_t **)pFVar9;
      iVar6 = *(int *)(pFVar9 + 8) + -1;
      if (*(int *)(pFVar9 + 8) == 0) {
        iVar6 = 0;
      }
      local_88._12_4_ = uStack_9c;
      local_88.Size = iVar6;
      iVar6 = 0;
      if (0 < iVar10) {
        iVar6 = iVar10;
      }
      local_78.DataPtr = (wchar_t *)(local_res10 + ((longlong)iVar10 - (longlong)iVar6) * 2);
      local_78._12_4_ = uStack_8c;
      local_78.Size = iVar6;
      iVar6 = UE::String::FindFirst(&local_78,&local_88,CaseSensitive);
      if (iVar6 != -1) break;
      pFVar9 = pFVar9 + 0x10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (5 < (byte)LogHttp._0_1_) {
    EVar5 = (**(code **)(this->_padding_ + 0x18))(this);
    ::LexToString(EVar5);
    (**(code **)this->_padding_)(this);
    (**(code **)(this->_padding_ + 0x58))(this,local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
LAB_14316de94:
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// LogResponse @ 14316ded0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRequestCommon::LogResponse(FHttpRequestCommon *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FHttpManager *pFVar1;
  IHttpResponse *pIVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FHttpModule *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  int iVar15;
  FString *this_00;
  FScriptContainerElement *pFVar16;
  FString *pFVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FString *local_148;
  int local_140;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  FString local_120;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  char *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TStringView<char8_t> local_d8;
  TStringView<char8_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  void *local_98 [2];
  void *local_88 [2];
  void *local_78 [2];
  TStringView<char8_t> local_68;
  TStringView<char8_t> local_58 [2];
  
  pFVar9 = FHttpModule::Get();
  if ((pFVar9->HttpManager == (FHttpManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pFVar9->HttpManager;
  plVar10 = (longlong *)(**(code **)this->_padding_)(this);
  lpCriticalSection = &pFVar1->UrlPatternsToLogResponseCriticalSection;
  local_128 = *plVar10;
  local_res20 = (int)plVar10[1] + -1;
  if ((int)plVar10[1] == 0) {
    local_res20 = 0;
  }
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar15 = (pFVar1->UrlPatternsToLogResponse).ArrayNum;
  pFVar16 = (pFVar1->UrlPatternsToLogResponse).AllocatorInstance.Data;
  pFVar18 = pFVar16 + (longlong)iVar15 * 0x10;
  while( true ) {
    if ((pFVar1->UrlPatternsToLogResponse).ArrayNum != iVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar18) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar5 = false;
      if ((byte)LogHttp._0_1_ < 6) goto LAB_14316e23e;
      if ((param_1->Object == (IHttpResponse *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)((longlong)*param_1->Object + 0x40))();
      if ((param_1->Object == (IHttpResponse *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)((longlong)*param_1->Object + 0x58))();
      (**(code **)this->_padding_)(this);
      (**(code **)(this->_padding_ + 0x58))(this,local_88);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      local_98[0] = local_88[0];
      bVar5 = false;
      goto LAB_14316e234;
    }
    local_108 = *(wchar_t **)pFVar16;
    iStack_100 = *(int *)(pFVar16 + 8) + -1;
    if (*(int *)(pFVar16 + 8) == 0) {
      iStack_100 = 0;
    }
    local_b8._12_4_ = uStack_fc;
    local_b8.Size = iStack_100;
    iStack_130 = 0;
    if (0 < local_res20) {
      iStack_130 = local_res20;
    }
    local_138 = (wchar_t *)(local_128 + ((longlong)local_res20 - (longlong)iStack_130) * 2);
    local_a8._12_4_ = uStack_12c;
    local_a8.Size = iStack_130;
    local_b8.DataPtr = local_108;
    local_a8.DataPtr = local_138;
    iVar7 = UE::String::FindFirst(&local_a8,&local_b8,CaseSensitive);
    if (iVar7 != -1) break;
    pFVar16 = pFVar16 + 0x10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar5 = true;
  if (2 < (byte)LogHttp._0_1_) {
    if ((param_1->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*param_1->Object + 0x40))();
    if ((param_1->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*param_1->Object + 0x58))();
    (**(code **)this->_padding_)(this);
    (**(code **)(this->_padding_ + 0x58))(this,local_98);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    bVar5 = true;
LAB_14316e234:
    if (local_98[0] != (void *)0x0) {
      FMemory::Free(local_98[0]);
    }
  }
LAB_14316e23e:
  if ((param_1->Object == (IHttpResponse *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*param_1->Object + 0x30))(param_1->Object,&local_148);
  iVar15 = local_140;
  pFVar17 = local_148 + local_140;
  this_00 = local_148;
LAB_14316e296:
  do {
    if (local_140 != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (this_00 == pFVar17) break;
    bVar6 = ::FString::StartsWith(this_00,L"Authorization",0xd,IgnoreCase);
    if ((!bVar6) && (bVar6 = ::FString::StartsWith(this_00,L"Set-Cookie",10,IgnoreCase), !bVar6)) {
      if (bVar5) {
        if (2 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          this_00 = this_00 + 1;
          goto LAB_14316e296;
        }
      }
      else if (5 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
    }
    this_00 = this_00 + 1;
  } while( true );
  if (bVar5) {
    if ((param_1->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar11 = (**(code **)((longlong)*param_1->Object + 0x40))();
    pTVar4 = UE::HttpRequestCommon::Private::CVarHttpLogJsonResponseOnly.Ref;
    if (lVar11 != 0) {
      bVar5 = IsInParallelGameThread();
      if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
        lVar11 = 0;
      }
      else {
        lVar11 = 1;
      }
      iVar15 = 0;
      if (pTVar4->ShadowedValue[lVar11] != false) {
        if ((param_1->Object == (IHttpResponse *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar2 = param_1->Object;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
        ::FString::FString(&local_f8,L"Content-Type");
        puVar12 = (undefined8 *)(*pcVar3)(pIVar2,local_78);
        ::FString::FString(&local_120,L"application/json");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_120.Data.ArrayNum != 0) {
          FVar14.Data = local_120.Data.AllocatorInstance.Data;
        }
        if (*(int *)(puVar12 + 1) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)*puVar12;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar13,(wchar_t *)FVar14.Data);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_78[0] != (void *)0x0) {
          FMemory::Free(local_78[0]);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (iVar7 != 0) goto LAB_14316e643;
      }
      if ((param_1->Object == (IHttpResponse *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar10 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x48))();
      iVar7 = (int)plVar10[1];
      lVar11 = *plVar10;
      if (0 < iVar7) {
        do {
          uStack_e0 = 1;
          local_e8 = "\n";
          local_68._12_4_ = uStack_dc;
          local_68.Size = 1;
          local_68.DataPtr = "\n";
          iVar19 = iVar7 - iVar15;
          iVar8 = iVar7;
          if (iVar19 < iVar7) {
            iVar8 = iVar19;
          }
          iStack_130 = 0;
          if (0 < iVar8) {
            iStack_130 = iVar8;
          }
          local_138 = (wchar_t *)((lVar11 - iStack_130) + (longlong)iVar7);
          local_58[0]._12_4_ = uStack_12c;
          local_58[0].Size = iStack_130;
          local_58[0].DataPtr = (uchar *)local_138;
          iVar8 = UE::String::FindFirst(local_58,&local_68,CaseSensitive);
          if ((iVar8 == -1) || (iVar8 + iVar15 == -1)) {
            if (((iVar15 < 0) || (iVar7 <= iVar15)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_c8.DataPtr = (uchar *)(iVar15 + lVar11);
            local_c8.Size = iVar19;
            if (2 < (byte)LogHttp._0_1_) {
              UE::Logging::Private::
              LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char8_t>_&>
                        ((FLogCategoryBase *)&LogHttp,&::LOG_Static,&local_c8);
            }
            break;
          }
          if (((iVar15 < 0) || (iVar7 <= iVar15)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_d8.DataPtr = (uchar *)(iVar15 + lVar11);
          local_d8.Size = iVar8;
          if (2 < (byte)LogHttp._0_1_) {
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char8_t>_&>
                      ((FLogCategoryBase *)&LogHttp,&::LOG_Static,&local_d8);
          }
          iVar15 = iVar8 + iVar15 + 1;
        } while (iVar15 < iVar7);
      }
    }
  }
LAB_14316e643:
  DestructItems<FString,int>(local_148,local_140);
  if (local_148 != (FString *)0x0) {
    FMemory::Free(local_148);
  }
  return;
}

// OnActivityTimeoutTimerTaskTrigger @ 143170610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpRequestCommon::OnActivityTimeoutTimerTaskTrigger(FHttpRequestCommon *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  FDateTime FVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnActivityTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FStatMessage local_68 [3];
  
  lpCriticalSection = &this->HttpTaskTimerHandleCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar12.Value = 0;
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ActivityTimeoutHttpTaskTimerHandle != (TSharedPtr<IHttpTaskTimerHandle,1> *)&local_78)
  {
    (this->ActivityTimeoutHttpTaskTimerHandle).Object = (IHttpTaskTimerHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActivityTimeoutHttpTaskTimerHandle).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  uVar6 = (**(code **)(this->_padding_ + 0x10))(this);
  if (1 < uVar6) {
    if (2 < (byte)LogHttp._0_1_) {
      FVar7 = FDateTime::Now();
      FDateTime::ToString((FDateTime *)FVar7.Ticks,(FString *)local_68,L"%H:%M:%S:%s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      if (local_68[0].StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_68[0].StatData.Pad);
      }
    }
    goto LAB_143170b11;
  }
  QueryPerformanceCounter(&local_res8);
  dVar5 = __real_4170000000000000;
  if ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
      FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000 < this->ActivityTimeoutAt) {
    if (6 < (byte)LogHttp._0_1_) {
      QueryPerformanceCounter(&local_res8);
      FVar7 = FDateTime::Now();
      FDateTime::ToString((FDateTime *)FVar7.Ticks,(FString *)local_68,L"%H:%M:%S:%s");
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      if (local_68[0].StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_68[0].StatData.Pad);
      }
    }
    QueryPerformanceCounter(&local_res8);
    StartActivityTimeoutTimerBy
              (this,this->ActivityTimeoutAt -
                    ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                     FGenericPlatformTime::SecondsPerCycle + dVar5));
    goto LAB_143170b11;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FHttpRequestCommon_AbortRequest ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnActivityTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_FHttpRequestCommon_AbortRequest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpRequestCommon_AbortRequest,*pFVar8,
                 L"STAT_FHttpRequestCommon_AbortRequest","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_FHttpRequestCommon_AbortRequest;
  if (StatPtr_STAT_FHttpRequestCommon_AbortRequest ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnActivityTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_FHttpRequestCommon_AbortRequest");
    FVar9 = (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnActivityTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpRequestCommon_AbortRequest,
                         *pFVar8,L"STAT_FHttpRequestCommon_AbortRequest","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar6 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar6 == 0)) {
LAB_143170965:
    bVar3 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestCommon.cpp"
                   ,0x1cf);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143170965;
    local_res8.s.LowPart = FVar10.Value;
    local_res8.s.HighPart = uVar6;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar3 = true;
    FVar12.Value = FVar10.Value;
  }
  LOCK();
  this->bActivityTimedOut = (atomic<bool>)0x1;
  UNLOCK();
  (**(code **)(this->_padding_ + 0x198))(this);
  if (4 < (byte)LogHttp._0_1_) {
    FHttpModule::Get();
    FVar7 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)FVar7.Ticks,(FString *)local_68,L"%H:%M:%S:%s");
    (**(code **)this->_padding_)(this);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if (local_68[0].StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_68[0].StatData.Pad);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_68[0].NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_68[0].StatData.Pad[4] = '\0';
      local_68[0].StatData.Pad[5] = '\0';
      local_68[0].StatData.Pad[6] = '\0';
      local_68[0].StatData.Pad[7] = '\0';
      local_68[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_68[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_68[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_68[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_68);
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
LAB_143170b11:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnFinishRequest @ 143171280

void __thiscall FHttpRequestCommon::OnFinishRequest(FHttpRequestCommon *this,bool param_1)

{
  atomic<float> aVar1;
  FHttpResponseCommon *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IHttpRequest *pIVar4;
  code *pcVar5;
  bool bVar6;
  FHttpModule *pFVar7;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this_00;
  TSharedRef<IHttpRequest,1> *pTVar8;
  EHttpFailureReason EVar9;
  atomic<float> aVar10;
  TSharedPtr<IHttpRequest,1> local_48;
  TSharedPtr<IHttpResponse,1> local_38;
  TSharedRef<IHttpRequest,1> local_28;
  TSharedPtr<IHttpResponse,1> local_18;
  
  pFVar2 = (this->ResponseCommon).Object;
  if (pFVar2 != (FHttpResponseCommon *)0x0) {
    pFVar2->bIsReady = true;
  }
  if (param_1) {
    pFVar2 = (this->ResponseCommon).Object;
    this->CompletionStatus = Succeeded;
    if (pFVar2 != (FHttpResponseCommon *)0x0) {
      pFVar2->CompletionStatus = Succeeded;
    }
    pTVar3 = (this->ResponseCommon).SharedReferenceCount.ReferenceController;
    local_38.Object = (IHttpResponse *)(this->ResponseCommon).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar3;
    LogResponse(this,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar7 = FHttpModule::Get();
    if (pFVar7->HttpManager == (FHttpManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    aVar1 = (pFVar7->HttpManager->HttpStats).MaxTimeToConnect;
    aVar10 = (atomic<float>)(float)this->ConnectTime;
    if ((float)this->ConnectTime <= (float)aVar1) {
      aVar10 = aVar1;
    }
    LOCK();
    (pFVar7->HttpManager->HttpStats).MaxTimeToConnect = aVar10;
    UNLOCK();
  }
  else {
    if (this->FailureReason == None) {
      if (this->bCanceled == (atomic<bool>)0x0) {
        if (this->bTimedOut == (atomic<bool>)0x0) {
          if ((this->bUsePlatformActivityTimeout != false) ||
             (EVar9 = ConnectionError, this->bActivityTimedOut == (atomic<bool>)0x0)) {
            EVar9 = Other;
          }
        }
        else {
          EVar9 = TimedOut;
        }
      }
      else {
        EVar9 = Cancelled;
      }
      SetFailureReason(this,EVar9);
    }
    pFVar2 = (this->ResponseCommon).Object;
    this->CompletionStatus = Failed;
    if (pFVar2 != (FHttpResponseCommon *)0x0) {
      pFVar2->CompletionStatus = Failed;
    }
    LogFailure(this);
  }
  this_00 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(this->_padding_ + 0xf0))(this);
  local_18.Object = (IHttpResponse *)(this->ResponseCommon).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->ResponseCommon).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_28);
  pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
  pIVar4 = pTVar8->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pIVar4;
  local_48.SharedReferenceCount.ReferenceController = pTVar3;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  ::ExecuteIfBound(this_00,&local_48,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// OnTotalTimeoutTimerTaskTrigger @ 143171840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpRequestCommon::OnTotalTimeoutTimerTaskTrigger(FHttpRequestCommon *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnTotalTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FStatMessage local_58;
  FName local_48;
  
  lpCriticalSection = &this->HttpTaskTimerHandleCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  this->bTimedOut = (atomic<bool>)0x1;
  UNLOCK();
  uVar5 = (**(code **)(this->_padding_ + 0x10))(this);
  if (1 < uVar5) goto LAB_143171b9d;
  StopActivityTimeoutTimer(this);
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FHttpRequestCommon_AbortRequest ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnTotalTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
         )0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_FHttpRequestCommon_AbortRequest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpRequestCommon_AbortRequest,*pFVar6,
                 L"STAT_FHttpRequestCommon_AbortRequest","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_FHttpRequestCommon_AbortRequest;
  if (StatPtr_STAT_FHttpRequestCommon_AbortRequest ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnTotalTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_58,"STAT_FHttpRequestCommon_AbortRequest");
    FVar7 = (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestCommon::OnTotalTimeoutTimerTaskTrigger(void)_::_2_::FStat_STAT_FHttpRequestCommon_AbortRequest>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpRequestCommon_AbortRequest,
                         *pFVar6,L"STAT_FHttpRequestCommon_AbortRequest","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar5 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar5 == 0)) {
LAB_143171a19:
    bVar3 = false;
    FVar9 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar8.Value;
        local_res10.Number = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestCommon.cpp"
                   ,0x22c);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143171a19;
    local_res18 = FVar8.Value;
    uStackX_1c = uVar5;
    local_48 = FVar9;
    FThreadStats::AddMessage(FVar9,CycleScopeStart);
    bVar3 = true;
    FVar10.Value = local_48.ComparisonIndex.Value;
  }
  if (2 < (byte)LogHttp._0_1_) {
    (**(code **)this->_padding_)(this);
    (**(code **)(this->_padding_ + 0xe0))(this,&local_res18);
    FHttpModule::Get();
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  (**(code **)(this->_padding_ + 0x198))(this);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
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
LAB_143171b9d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OpenRequestPayloadDefaultImpl @ 143171d90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHttpRequestCommon::OpenRequestPayloadDefaultImpl(FHttpRequestCommon *this)

{
  FRequestPayload *pFVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  FString local_38;
  void *local_28 [2];
  void *local_18 [2];
  
  pFVar1 = (this->RequestPayload).Ptr;
  if (pFVar1 == (FRequestPayload *)0x0) {
    return true;
  }
  cVar4 = (**(code **)((longlong)*pFVar1 + 0x30))();
  if (cVar4 == '\0') {
    return false;
  }
  bVar3 = false;
  bVar2 = false;
  lVar6 = (**(code **)(this->_padding_ + 0x58))(this,local_18);
  if (*(int *)(lVar6 + 8) < 2) {
LAB_143171eaa:
    lVar6 = (**(code **)((longlong)*(this->RequestPayload).Ptr + 8))();
    if (lVar6 != 0) {
      bVar8 = true;
      goto LAB_143171e3d;
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x58))(this,local_28);
    ::FString::FString(&local_38,L"GET");
    iVar5 = *(int *)(puVar7 + 1);
    if (iVar5 == local_38.Data.ArrayNum) {
      if (iVar5 < 2) {
        bVar3 = true;
        bVar2 = true;
        goto LAB_143171eaa;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar7,(wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar8 = iVar5 == 0;
    }
    else {
      bVar8 = local_38.Data.ArrayNum + iVar5 == 1;
    }
    bVar3 = true;
    bVar2 = true;
    if (bVar8) goto LAB_143171eaa;
  }
  bVar8 = false;
LAB_143171e3d:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (!bVar8) {
    return true;
  }
  if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  return false;
}

// PassReceivedDataToStream @ 143171ee0

bool __thiscall
FHttpRequestCommon::PassReceivedDataToStream(FHttpRequestCommon *this,void *param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  lpCriticalSection = &this->ResponseBodyReceiveStreamCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->ResponseBodyReceiveStream).Object;
  if (pFVar1 == (FArchive *)0x0) {
    bVar3 = false;
  }
  else {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_1,param_2);
    if ((this->ResponseBodyReceiveStream).Object == (FArchive *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = (bool)(~((byte)((this->ResponseBodyReceiveStream).Object)->field_0x29 >> 1) & 1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// PopulateUserAgentHeader @ 143172a40

void __thiscall FHttpRequestCommon::PopulateUserAgentHeader(FHttpRequestCommon *this)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  FUserAgentImpl *SRWLock;
  FString local_28;
  FString local_18;
  
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  ::FString::FString(&local_28,L"User-Agent");
  lVar3 = (*pcVar2)(this,&local_18,&local_28);
  iVar1 = *(int *)(lVar3 + 8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (iVar1 < 2) {
    pcVar2 = *(code **)(this->_padding_ + 0xb0);
    SRWLock = FUserAgentImpl::Get();
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (SRWLock->CachedUserAgent).Data.ArrayNum;
    lVar3 = (longlong)local_28.Data.ArrayNum;
    _Src = (SRWLock->CachedUserAgent).Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    ::FString::FString(&local_18,L"User-Agent");
    (*pcVar2)(this,&local_18,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostProcess @ 143172c30

void __thiscall FHttpRequestCommon::PostProcess(FHttpRequestCommon *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143172c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1a0))();
  return;
}

// PreCheck @ 143172c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHttpRequestCommon::PreCheck(FHttpRequestCommon *this)

{
  int iVar1;
  bool bVar2;
  FHttpModule *pFVar3;
  longlong lVar4;
  FHttpManager *this_00;
  FString *pFVar5;
  void *local_18 [2];
  
  pFVar3 = FHttpModule::Get();
  if (pFVar3->bEnableHttp == false) {
    if (5 < (byte)LogHttp._0_1_) {
      (**(code **)this->_padding_)(this);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return false;
    }
  }
  else if (this->CompletionStatus == Processing) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return false;
    }
  }
  else {
    lVar4 = (**(code **)this->_padding_)(this);
    if (*(int *)(lVar4 + 8) < 2) {
      if (2 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        return false;
      }
    }
    else {
      lVar4 = (**(code **)(this->_padding_ + 0x58))(this,local_18);
      iVar1 = *(int *)(lVar4 + 8);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
      if (iVar1 < 2) {
        if (2 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          return false;
        }
      }
      else {
        pFVar3 = FHttpModule::Get();
        this_00 = FHttpModule::GetHttpManager(pFVar3);
        pFVar5 = (FString *)(**(code **)this->_padding_)(this);
        bVar2 = FHttpManager::IsDomainAllowed(this_00,pFVar5);
        if (bVar2) {
          if (this->bTimedOut == (atomic<bool>)0x0) {
            return true;
          }
          if (2 < (byte)LogHttp._0_1_) {
            (**(code **)this->_padding_)(this);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          }
        }
        else if (2 < (byte)LogHttp._0_1_) {
          lVar4 = (**(code **)this->_padding_)(this);
          if (*(int *)(lVar4 + 8) != 0) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
            return false;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          return false;
        }
      }
    }
  }
  return false;
}

// PreProcess @ 143172e60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHttpRequestCommon::PreProcess(FHttpRequestCommon *this)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  FUserAgentImpl *SRWLock;
  FString local_28;
  FString local_18;
  
  (**(code **)(this->_padding_ + 400))();
  bVar3 = PreCheck(this);
  if (bVar3) {
    bVar3 = TriggerMockResponse(this);
    if (bVar3) {
      return false;
    }
    pcVar2 = *(code **)(this->_padding_ + 0x28);
    ::FString::FString(&local_28,L"User-Agent");
    lVar5 = (*pcVar2)(this,&local_18,&local_28);
    iVar1 = *(int *)(lVar5 + 8);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar1 < 2) {
      pcVar2 = *(code **)(this->_padding_ + 0xb0);
      SRWLock = FUserAgentImpl::Get();
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (SRWLock->CachedUserAgent).Data.ArrayNum;
      lVar5 = (longlong)local_28.Data.ArrayNum;
      _Src = (SRWLock->CachedUserAgent).Data.AllocatorInstance.Data;
      if (local_28.Data.ArrayNum == 0) {
        local_28.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,
                   local_28.Data.ArrayNum,&local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
      }
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      ::FString::FString(&local_18,L"User-Agent");
      (*pcVar2)(this,&local_18,&local_28);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    cVar4 = (**(code **)(this->_padding_ + 0x188))(this);
    if (cVar4 != '\0') {
      StartTotalTimeoutTimer(this);
      if (5 < (byte)LogHttp._0_1_) {
        (**(code **)this->_padding_)(this);
        (**(code **)(this->_padding_ + 0x58))(this,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return true;
    }
  }
  FinishRequestNotInHttpManager(this);
  return false;
}

// ProcessRequestUntilComplete @ 143175170

void __thiscall FHttpRequestCommon::ProcessRequestUntilComplete(FHttpRequestCommon *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  LPCRITICAL_SECTION p_Var4;
  FEvent *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  
  p_Var4 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0xf0))();
  if (p_Var4 == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(p_Var4);
  if ((p_Var4[1].LockCount != 0) && (p_Var4[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)p_Var4[1].DebugInfo + 0x38))();
    if (cVar3 != '\0') {
      LeaveCriticalSection(p_Var4);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OnProcessRequestComplete().IsBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestCommon.cpp"
                         ,0x248,L"OnProcessRequestComplete is not supported for sync call");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_14317521b;
    }
  }
  LeaveCriticalSection(p_Var4);
LAB_14317521b:
  (**(code **)(this->_padding_ + 0x138))(this,1);
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  p_Var4 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0xf0))(this);
  if (p_Var4 == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(p_Var4);
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(p_Var4 + 1));
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`FHttpRequestCommon::ProcessRequestUntilComplete'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = pFVar5;
  }
  if (p_Var4 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var4);
  }
  (**(code **)(this->_padding_ + 0xe8))(this);
  (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(pFVar5);
  return;
}

// ResetActivityTimeoutTimer @ 143179730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRequestCommon::ResetActivityTimeoutTimer
          (FHttpRequestCommon *this,TStringView<wchar_t> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  FHttpModule *pFVar2;
  FDateTime this_00;
  float fVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  lpCriticalSection = &this->HttpTaskTimerHandleCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->bUsePlatformActivityTimeout == false) &&
       ((this->ActivityTimeoutHttpTaskTimerHandle).Object != (IHttpTaskTimerHandle *)0x0)) {
      QueryPerformanceCounter(&local_res8);
      dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      pFVar2 = FHttpModule::Get();
      if ((this->ActivityTimeoutSecs).bIsSet == false) {
        fVar3 = pFVar2->HttpActivityTimeout;
      }
      else {
        fVar3 = (this->ActivityTimeoutSecs).TypedValue;
      }
      this->ActivityTimeoutAt = (double)fVar3 + dVar1 + __real_4170000000000000;
      if (6 < (byte)LogHttp._0_1_) {
        this_00 = FDateTime::Now();
        FDateTime::ToString((FDateTime *)this_00.Ticks,local_28,L"%H:%M:%S:%s");
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014317984c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetTimeoutStatus @ 143179a00

void __thiscall FHttpRequestCommon::ResetTimeoutStatus(FHttpRequestCommon *this)

{
  StopTotalTimeoutTimer(this);
  LOCK();
  this->bTimedOut = (atomic<bool>)0x0;
  UNLOCK();
  return;
}

// SetActivityTimeout @ 14317cb70

void __thiscall FHttpRequestCommon::SetActivityTimeout(FHttpRequestCommon *this,float param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<float> *)local_res10 != &this->ActivityTimeoutSecs) {
    (this->ActivityTimeoutSecs).TypedValue = param_1;
    (this->ActivityTimeoutSecs).bIsSet = true;
  }
  return;
}

// SetContentAsStreamedFileDefaultImpl @ 14317d440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHttpRequestCommon::SetContentAsStreamedFileDefaultImpl(FHttpRequestCommon *this,FString *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  FRequestPayload *pFVar2;
  FRequestPayload *pFVar3;
  wchar_t *pwVar4;
  FRequestPayload *pFVar5;
  FString local_28;
  
  pwVar4 = L"";
  pFVar3 = (FRequestPayload *)0x0;
  if (5 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  if (this->CompletionStatus == Processing) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    bVar1 = false;
  }
  else {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar2 = ::operator_new(0x30);
    pFVar5 = pFVar3;
    if (pFVar2 != (FRequestPayload *)0x0) {
      ::FString::FString(&local_28,pwVar4);
      _Src.Data = local_28.Data.AllocatorInstance.Data;
      pFVar3 = pFVar2 + 1;
      *pFVar3 = (FRequestPayload)0x0;
      *pFVar2 = (FRequestPayload)&___7FRequestPayloadInFileStream__6B_;
      *(int *)(pFVar2 + 2) = local_28.Data.ArrayNum;
      if (local_28.Data.ArrayNum == 0) {
        *(undefined4 *)&pFVar2[2].field_0x4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar3,local_28.Data.ArrayNum,
                   (int *)&pFVar2[2].field_0x4);
        memcpy(*(FScriptContainerElement **)pFVar3,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
      }
      pFVar2[3] = (FRequestPayload)0x0;
      pFVar2[4] = (FRequestPayload)0x0;
      *(undefined1 *)(pFVar2 + 5) = 0;
      pFVar3 = pFVar2;
      pFVar5 = (FRequestPayload *)&DAT_00000001;
    }
    if ((pFVar5 != (FRequestPayload *)0x0) &&
       (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar5 = (this->RequestPayload).Ptr;
    (this->RequestPayload).Ptr = pFVar3;
    if (pFVar5 != (FRequestPayload *)0x0) {
      (**(code **)*pFVar5)(pFVar5,1);
    }
    bVar1 = true;
  }
  return bVar1;
}

// SetDelegateThreadPolicy @ 14317def0

void __thiscall
FHttpRequestCommon::SetDelegateThreadPolicy
          (FHttpRequestCommon *this,EHttpRequestDelegateThreadPolicy param_1)

{
  this->DelegateThreadPolicy = param_1;
  return;
}

// SetEffectiveURL @ 14317df70

void __thiscall FHttpRequestCommon::SetEffectiveURL(FHttpRequestCommon *this,FString *param_1)

{
  FHttpResponseCommon *pFVar1;
  
  ::FString::operator=(&this->EffectiveURL,param_1);
  pFVar1 = (this->ResponseCommon).Object;
  if (pFVar1 != (FHttpResponseCommon *)0x0) {
    ::FString::operator=(&pFVar1->EffectiveURL,&this->EffectiveURL);
  }
  return;
}

// SetFailureReason @ 14317dfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRequestCommon::SetFailureReason(FHttpRequestCommon *this,EHttpFailureReason param_1)

{
  FHttpResponseCommon *pFVar1;
  
  if ((2 < (byte)LogHttp._0_1_) && (this->FailureReason != None)) {
    ::LexToString(param_1);
    ::LexToString(this->FailureReason);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  pFVar1 = (this->ResponseCommon).Object;
  this->FailureReason = param_1;
  if (pFVar1 != (FHttpResponseCommon *)0x0) {
    pFVar1->FailureReason = param_1;
  }
  return;
}

// SetOption @ 14317ec30

void __thiscall
FHttpRequestCommon::SetOption(FHttpRequestCommon *this,FName param_1,FString *param_2)

{
  TPairInitializer<FName_const_&,FString_const_&> local_res8 [2];
  FString **local_18;
  FString *local_10;
  
  local_18 = &local_res8[0].Value;
  local_res8[0].Value = (FString *)param_1;
  local_10 = param_2;
  TSet<TTuple<FName_const_,FString>,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
            ((TSet<TTuple<FName_const_,FString>,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>,FDefaultSetAllocator>
              *)&this->Options,local_res8,(bool *)&local_18);
  return;
}

// SetPriority @ 14317ee90

void __thiscall
FHttpRequestCommon::SetPriority(FHttpRequestCommon *this,EHttpRequestPriority param_1)

{
  this->Priority = param_1;
  return;
}

// SetResponseBodyReceiveStream @ 14317f150

bool __thiscall
FHttpRequestCommon::SetResponseBodyReceiveStream
          (FHttpRequestCommon *this,TSharedRef<FArchive,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *local_18;
  FSharedReferencer<1> local_10;
  
  lpCriticalSection = &this->ResponseBodyReceiveStreamCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
    local_18 = param_1->Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->ResponseBodyReceiveStream != (TSharedPtr<FArchive,1> *)&local_18) {
      (this->ResponseBodyReceiveStream).Object = local_18;
      local_18 = (FArchive *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ResponseBodyReceiveStream).SharedReferenceCount,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    LOCK();
    this->bInitializedWithValidStream = (atomic<bool>)0x1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetStatus @ 14317f540

void __thiscall FHttpRequestCommon::SetStatus(FHttpRequestCommon *this,Type param_1)

{
  FHttpResponseCommon *pFVar1;
  
  pFVar1 = (this->ResponseCommon).Object;
  this->CompletionStatus = param_1;
  if (pFVar1 != (FHttpResponseCommon *)0x0) {
    pFVar1->CompletionStatus = param_1;
  }
  return;
}

// SetTimeout @ 14317f5b0

void __thiscall FHttpRequestCommon::SetTimeout(FHttpRequestCommon *this,float param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<float> *)local_res10 != &this->TimeoutSecs) {
    (this->TimeoutSecs).TypedValue = param_1;
    (this->TimeoutSecs).bIsSet = true;
  }
  return;
}

// SetURL @ 14317fa30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpRequestCommon::SetURL(FHttpRequestCommon *this,FString *param_1)

{
  if (this->CompletionStatus != Processing) {
    ::FString::operator=(&this->URL,param_1);
    return;
  }
  if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    return;
  }
  return;
}

// Shutdown @ 143182810

void __thiscall FHttpRequestCommon::Shutdown(FHttpRequestCommon *this)

{
  FHttpRequestImpl::Shutdown((FHttpRequestImpl *)this);
  StopPassingReceivedData(this);
  StopActivityTimeoutTimer(this);
  StopTotalTimeoutTimer(this);
  return;
}

// StartActivityTimeoutTimer @ 143182ef0

void __thiscall FHttpRequestCommon::StartActivityTimeoutTimer(FHttpRequestCommon *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  FHttpModule *pFVar2;
  wchar_t *pwVar3;
  TStringView<wchar_t> local_18;
  
  lpCriticalSection = &this->HttpTaskTimerHandleCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bUsePlatformActivityTimeout == false) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          pwVar3 = FCommandLine::Get();
          bNoTimeouts = FParse::Param(pwVar3,L"NoTimeouts");
          _Init_thread_footer(&::_TSS0);
        }
      }
      if ((bNoTimeouts == false) && (this->bActivityTimedOut == (atomic<bool>)0x0)) {
        pFVar2 = FHttpModule::Get();
        if ((this->ActivityTimeoutSecs).bIsSet == false) {
          fVar1 = pFVar2->HttpActivityTimeout;
        }
        else {
          fVar1 = (this->ActivityTimeoutSecs).TypedValue;
        }
        if (fVar1 != 0.0) {
          StartActivityTimeoutTimerBy(this,(double)fVar1);
          local_18.Size = 9;
          local_18.DataPtr = L"Connected";
          ResetActivityTimeoutTimer(this,&local_18);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000143182fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartActivityTimeoutTimerBy @ 143183020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRequestCommon::StartActivityTimeoutTimerBy(FHttpRequestCommon *this,double param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  IHttpRequest *pIVar4;
  FHttpManager *pFVar5;
  FHttpThreadBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<IHttpRequest,1> *pTVar9;
  FHttpModule *pFVar10;
  undefined ***pppuVar11;
  undefined1 auStack_a8 [32];
  IHttpTaskTimerHandle *local_88;
  FSharedReferencer<1> local_80;
  TSharedRef<IHttpRequest,1> local_78;
  code *local_68 [2];
  undefined **local_58;
  IHttpRequest *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((this->ActivityTimeoutHttpTaskTimerHandle).Object == (IHttpTaskTimerHandle *)0x0) {
    pTVar9 = TSharedFromThis<IHttpRequest,1>::AsShared
                       ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_78);
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    pIVar4 = pTVar9->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar10 = FHttpModule::Get();
    if ((pFVar10->HttpManager == (FHttpManager *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = pFVar10->HttpManager;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,void>
                  ::Call;
    local_40 = (undefined ***)0x0;
    local_50 = pIVar4;
    local_48 = pTVar3;
    if ((pFVar5->Thread == (FHttpThreadBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                           ,0x15f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = pFVar5->Thread;
    (**(code **)(pFVar6->_padding_ + 0x60))
              (pFVar6,&local_88,local_68,(float)(param_1 + __real_3fa999999999999a));
    if (&this->ActivityTimeoutHttpTaskTimerHandle != (TSharedPtr<IHttpTaskTimerHandle,1> *)&local_88
       ) {
      (this->ActivityTimeoutHttpTaskTimerHandle).Object = local_88;
      local_88 = (IHttpTaskTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActivityTimeoutHttpTaskTimerHandle).SharedReferenceCount,&local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    if (local_68[0] != (code *)0x0) {
      pppuVar11 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar11 = local_40;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  else if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  return;
}

// StartTotalTimeoutTimer @ 143184240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHttpRequestCommon::StartTotalTimeoutTimer(FHttpRequestCommon *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<IHttpTaskTimerHandle,1> *pTVar1;
  float fVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  FHttpModule *pFVar8;
  float *pfVar9;
  TSharedRef<IHttpRequest,1> *pTVar10;
  FHttpManager *pFVar11;
  wchar_t *pwVar12;
  undefined ***pppuVar13;
  atomic<int> *paVar14;
  undefined1 auStack_b8 [32];
  IHttpTaskTimerHandle *local_98;
  FSharedReferencer<1> local_90;
  undefined1 local_88 [8];
  TSharedRef<IHttpRequest,1> local_80;
  code *local_68 [2];
  undefined **local_58;
  IHttpRequest *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  lpCriticalSection = &this->HttpTaskTimerHandleCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar12 = FCommandLine::Get();
    bNoTimeouts = FParse::Param(pwVar12,L"NoTimeouts");
    _Init_thread_footer(&::_TSS0);
  }
  if (bNoTimeouts == false) {
    pfVar7 = (float *)(**(code **)(this->_padding_ + 0xe0))(this,local_88);
    pFVar8 = FHttpModule::Get();
    pfVar9 = &pFVar8->HttpTotalTimeout;
    if (*(char *)(pfVar7 + 1) != '\0') {
      pfVar9 = pfVar7;
    }
    fVar2 = *pfVar9;
    if (((fVar2 != 0.0) && (this->bTimedOut == (atomic<bool>)0x0)) &&
       (pTVar1 = &this->TotalTimeoutHttpTaskTimerHandle,
       pTVar1->Object == (IHttpTaskTimerHandle *)0x0)) {
      pTVar10 = TSharedFromThis<IHttpRequest,1>::AsShared
                          ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_80);
      pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
      local_50 = pTVar10->Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        paVar14 = (atomic<int> *)&DAT_0000000c;
      }
      else {
        paVar14 = &pTVar4->WeakReferenceCount;
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      pFVar8 = FHttpModule::Get();
      pFVar11 = FHttpModule::GetHttpManager(pFVar8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,void>
                    ::Call;
      local_40 = (undefined ***)0x0;
      local_48 = pTVar4;
      if ((pFVar11->Thread == (FHttpThreadBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Thread",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                             ,0x15f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(pFVar11->Thread->_padding_ + 0x60))(pFVar11->Thread,&local_98,local_68,fVar2);
      if (pTVar1 != (TSharedPtr<IHttpTaskTimerHandle,1> *)&local_98) {
        pTVar1->Object = local_98;
        local_98 = (IHttpTaskTimerHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TotalTimeoutHttpTaskTimerHandle).SharedReferenceCount,&local_90);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.ReferenceController);
      if (local_68[0] != (code *)0x0) {
        pppuVar13 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar13 = local_40;
        }
        (*(code *)(*pppuVar13)[2])();
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar14 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar14;
        *paVar14 = (atomic<int>)((int)*paVar14 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// StartWaitingInQueue @ 1431844f0

void __thiscall FHttpRequestCommon::StartWaitingInQueue(FHttpRequestCommon *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->TimeStartedWaitingInQueue =
       (float)((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000);
  return;
}

// StopActivityTimeoutTimer @ 143185820

void __thiscall FHttpRequestCommon::StopActivityTimeoutTimer(FHttpRequestCommon *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FHttpManager *this_00;
  code *pcVar1;
  bool bVar2;
  FHttpModule *pFVar3;
  TSharedPtr<IHttpTaskTimerHandle,1> *pTVar4;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<IHttpTaskTimerHandle,1> local_18;
  
  lpCriticalSection = &this->HttpTaskTimerHandleCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->bUsePlatformActivityTimeout == false) &&
     (pTVar4 = &this->ActivityTimeoutHttpTaskTimerHandle,
     pTVar4->Object != (IHttpTaskTimerHandle *)0x0)) {
    pFVar3 = FHttpModule::Get();
    if (pFVar3->HttpManager == (FHttpManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18.Object = pTVar4->Object;
    this_00 = pFVar3->HttpManager;
    local_18.SharedReferenceCount.ReferenceController =
         (this->ActivityTimeoutHttpTaskTimerHandle).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FHttpManager::RemoveHttpThreadTask(this_00,&local_18);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TSharedPtr<IHttpTaskTimerHandle,1> *)&local_28) {
      pTVar4->Object = (IHttpTaskTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActivityTimeoutHttpTaskTimerHandle).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
                    /* WARNING: Could not recover jumptable at 0x00014318590a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// StopPassingReceivedData @ 143185920

void __thiscall FHttpRequestCommon::StopPassingReceivedData(FHttpRequestCommon *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->ResponseBodyReceiveStreamCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ResponseBodyReceiveStream != (TSharedPtr<FArchive,1> *)&local_18) {
      (this->ResponseBodyReceiveStream).Object = (FArchive *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ResponseBodyReceiveStream).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000143185988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StopTotalTimeoutTimer @ 143185fa0

void __thiscall FHttpRequestCommon::StopTotalTimeoutTimer(FHttpRequestCommon *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FHttpManager *this_00;
  code *pcVar1;
  bool bVar2;
  FHttpModule *pFVar3;
  TSharedPtr<IHttpTaskTimerHandle,1> *pTVar4;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<IHttpTaskTimerHandle,1> local_18;
  
  lpCriticalSection = &this->HttpTaskTimerHandleCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = &this->TotalTimeoutHttpTaskTimerHandle;
  if (pTVar4->Object != (IHttpTaskTimerHandle *)0x0) {
    pFVar3 = FHttpModule::Get();
    if (pFVar3->HttpManager == (FHttpManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18.Object = pTVar4->Object;
    this_00 = pFVar3->HttpManager;
    local_18.SharedReferenceCount.ReferenceController =
         (this->TotalTimeoutHttpTaskTimerHandle).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FHttpManager::RemoveHttpThreadTask(this_00,&local_18);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TSharedPtr<IHttpTaskTimerHandle,1> *)&local_28) {
      pTVar4->Object = (IHttpTaskTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->TotalTimeoutHttpTaskTimerHandle).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
                    /* WARNING: Could not recover jumptable at 0x00014318607d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// TriggerMockResponse @ 143188440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FHttpRequestCommon::TriggerMockResponse(FHttpRequestCommon *this)

{
  FHttpManager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  IHttpRequest *pIVar3;
  FHttpThreadBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  FHttpModule *pFVar10;
  undefined8 *puVar11;
  TSharedRef<IHttpRequest,1> *pTVar12;
  FHttpResponseCommon *pFVar13;
  undefined ***pppuVar14;
  char *_Src;
  undefined1 auStackY_178 [32];
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  TSharedRef<IHttpRequest,1> local_128;
  undefined1 local_118 [24];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_100;
  bool local_b0;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  void *local_88 [2];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  code *local_68 [2];
  undefined **local_58;
  IHttpRequest *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar10 = FHttpModule::Get();
  if ((pFVar10->HttpManager == (FHttpManager *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar1 = pFVar10->HttpManager;
  puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 0x58))(this,local_88);
  local_a8.DataPtr = (wchar_t *)*puVar11;
  iVar8 = *(int *)(puVar11 + 1) + -1;
  if (*(int *)(puVar11 + 1) == 0) {
    iVar8 = 0;
  }
  puVar11 = (undefined8 *)(**(code **)this->_padding_)(this);
  local_a8._12_4_ = uStack_13c;
  local_a8.Size = iVar8;
  local_98.DataPtr = (wchar_t *)*puVar11;
  iVar8 = *(int *)(puVar11 + 1) + -1;
  if (*(int *)(puVar11 + 1) == 0) {
    iVar8 = 0;
  }
  local_98._12_4_ = uStack_12c;
  local_98.Size = iVar8;
  FHttpManager::GetMockResponse
            (pFVar1,(TOptional<FHttpManager::FMockResponse> *)local_118,&local_98,&local_a8);
  if (local_88[0] != (void *)0x0) {
    FMemory::Free(local_88[0]);
  }
  if (local_b0 == false) {
    bVar6 = false;
  }
  else {
    if (local_118._0_4_ == 0) {
      FHttpModule::Get();
      pTVar12 = TSharedFromThis<IHttpRequest,1>::AsShared
                          ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_128);
      pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
      pIVar3 = pTVar12->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar10 = FHttpModule::Get();
      if ((pFVar10->HttpManager == (FHttpManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HttpManager != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                             ,0x50,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar1 = pFVar10->HttpManager;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_40 = (undefined ***)0x0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::`8'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,void>
                    ::Call;
      local_50 = pIVar3;
      local_48 = pTVar2;
      if ((pFVar1->Thread == (FHttpThreadBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Thread",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                             ,0x15f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = pFVar1->Thread;
      (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,local_78,local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      if (local_68[0] != (code *)0x0) {
        pppuVar14 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar14 = local_40;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      StartTotalTimeoutTimer(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    else {
      InitResponse(this);
      if (((this->ResponseCommon).Object == (FHttpResponseCommon *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar13 = (this->ResponseCommon).Object;
      if ((local_b0 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar13->ResponseCode = local_118._0_4_;
      (**(code **)(this->_padding_ + 0x1b0))(this);
      if ((local_b0 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (1 < (int)local_118._16_4_) {
        pFVar13 = TSharedPtr<FHttpResponseCommon,1>::operator->(&this->ResponseCommon);
        _Src = (char *)local_118._8_8_;
        iVar8 = local_118._16_4_ + -1;
        if (local_118._16_4_ == 0) {
          iVar8 = 0;
          _Src = "";
        }
        else if ((((FScriptContainerElement *)local_118._8_8_ == (FScriptContainerElement *)0x0) &&
                 (iVar8 != 0)) &&
                (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Ptr != nullptr || Count == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar8,&(pFVar13->Payload).AllocatorInstance,
                           &(pFVar13->Payload).ArrayNum,&(pFVar13->Payload).ArrayMax);
        if (iVar8 != 0) {
          memcpy((pFVar13->Payload).AllocatorInstance.Data + iVar9,_Src,(longlong)iVar8);
        }
      }
      if ((local_b0 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (((this->ResponseCommon).Object == (FHttpResponseCommon *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&((this->ResponseCommon).Object)->Headers,
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(local_118 + 0x18));
      FinishRequestNotInHttpManager(this);
    }
    if (local_b0 != false) {
      local_100.HashSize = 0;
      if (local_100.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_100.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_118 + 0x18));
      if ((FScriptContainerElement *)local_118._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._8_8_);
      }
    }
    bVar6 = true;
  }
  return bVar6;
}

// TriggerStatusCodeReceivedDelegate @ 1431888d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHttpRequestCommon::TriggerStatusCodeReceivedDelegate(FHttpRequestCommon *this,int param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  IHttpRequest *pIVar3;
  FHttpManager *this_00;
  bool bVar4;
  char cVar5;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *this_01;
  TSharedRef<IHttpRequest,1> *pTVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  FHttpModule *pFVar7;
  code **ppcVar8;
  atomic<int> *paVar9;
  undefined1 auStack_a8 [32];
  TSharedPtr<IHttpRequest,1> local_88;
  TSharedRef<IHttpRequest,1> local_78;
  TSharedRef<IHttpRequest,1> local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pcVar1 = *(code **)(this->_padding_ + 0x110);
  if (this->DelegateThreadPolicy == CompleteOnHttpThread) {
    this_01 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
               *)(*pcVar1)();
    pTVar6 = TSharedFromThis<IHttpRequest,1>::AsShared
                       ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_78);
    pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar3 = pTVar6->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88.Object = pIVar3;
    local_88.SharedReferenceCount.ReferenceController = pTVar2;
    TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>::
    ExecuteIfBound(this_01,&local_88,param_1);
    local_68.SharedReferenceCount.ReferenceController = pTVar2;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(*pcVar1)();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    if (((lpCriticalSection[1].LockCount == 0) ||
        (lpCriticalSection[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) ||
       (cVar5 = (**(code **)(*(longlong *)lpCriticalSection[1].DebugInfo + 0x38))(), cVar5 == '\0'))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    LeaveCriticalSection(lpCriticalSection);
    if (!bVar4) {
      return;
    }
    pFVar7 = FHttpModule::Get();
    if ((pFVar7->HttpManager == (FHttpManager *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = pFVar7->HttpManager;
    pTVar6 = TSharedFromThis<IHttpRequest,1>::AsShared
                       ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_68);
    pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar3 = pTVar6->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar9 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar9 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x20,8);
    local_30[1] = (code *)pIVar3;
    *local_30 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::`9'::<lambda_1>,0,1>
                         ::_vftable_;
    local_30[2] = (code *)pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    *(int *)(local_30 + 3) = param_1;
    if (local_30 != (code **)&DAT_fffffffffffffff8) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,void>
                    ::Call;
    }
    FHttpManager::AddGameThreadTask(this_00,(TFunction<void___cdecl(void)> *)local_58,0.0);
    if (local_58[0] != (code *)0x0) {
      ppcVar8 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar8 = local_30;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

