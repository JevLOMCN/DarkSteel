// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 46

// <lambda_invoker_cdecl> @ 143149870

FString * __cdecl
`FHttpManager::GetDefaultCorrelationIdMethod'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FString *__return_storage_ptr__)

{
  FGuid *this;
  FGuid local_18;
  
  this = FGuid::NewGuid(&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(this,__return_storage_ptr__,Digits);
  return __return_storage_ptr__;
}

// FHttpManager @ 14314cf20

FHttpManager * __thiscall FHttpManager::FHttpManager(FHttpManager *this)

{
  undefined1 *puVar1;
  FTSBackgroundableTicker *pFVar2;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar3;
  
  pFVar2 = FTSBackgroundableTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,(FTSTicker *)pFVar2);
  this->_padding_ = (longlong)&___7FHttpManager__6B_;
  (this->Requests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Requests).ArrayNum = 0;
  (this->Requests).ArrayMax = 0;
  this->Thread = (FHttpThreadBase *)0x0;
  *(undefined8 *)&this->CorrelationIdMethod = 0;
  *(undefined8 *)&(this->CorrelationIdMethod).field_0x28 = 0;
  *(undefined ***)&(this->CorrelationIdMethod).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_AVFString__XZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CorrelationIdMethod).field_0x18;
  *(code **)puVar1 =
       `FHttpManager::GetDefaultCorrelationIdMethod'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CorrelationIdMethod =
         UE::Core::Private::Function::TFunctionRefCaller<FString_(__cdecl*)(void),FString>::Call;
  }
  (this->GameThreadTicker).AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  aVar3 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
          FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar3 = 0;
  (this->GameThreadTicker).AddedElements.Head = aVar3;
  (this->GameThreadTicker).AddedElements.Tail = (FNode *)aVar3;
  (this->GameThreadTicker).CurrentTime = (atomic<double>)0x0;
  (this->GameThreadTicker).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadTicker).Elements.ArrayNum = 0;
  (this->GameThreadTicker).Elements.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GameThreadTickerLock,4000);
  *(undefined8 *)&this->RequestAddedDelegate = 0;
  *(undefined8 *)&(this->RequestAddedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RequestAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RequestCompletedDelegate = 0;
  *(undefined8 *)&(this->RequestCompletedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RequestCompletedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->URLRequestFilter).AllowedRequests = 0;
  *(undefined8 *)&(this->URLRequestFilter).AllowedRequests.field_0x8 = 0;
  *(undefined8 *)&(this->URLRequestFilter).AllowedRequests.field_0x20 = 0;
  *(undefined4 *)&(this->URLRequestFilter).AllowedRequests.field_0x28 = 0;
  *(undefined4 *)&(this->URLRequestFilter).AllowedRequests.field_0x2c = 0x80;
  *(undefined4 *)&(this->URLRequestFilter).AllowedRequests.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->URLRequestFilter).AllowedRequests.field_0x34 = 0;
  *(undefined8 *)&(this->URLRequestFilter).AllowedRequests.field_0x40 = 0;
  *(undefined4 *)&(this->URLRequestFilter).AllowedRequests.field_0x48 = 0;
  *(undefined8 *)&this->FlushTimeLimitsMap = 0;
  *(undefined8 *)&(this->FlushTimeLimitsMap).field_0x8 = 0;
  *(undefined8 *)&(this->FlushTimeLimitsMap).field_0x20 = 0;
  *(undefined4 *)&(this->FlushTimeLimitsMap).field_0x28 = 0;
  *(undefined4 *)&(this->FlushTimeLimitsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FlushTimeLimitsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FlushTimeLimitsMap).field_0x34 = 0;
  *(undefined8 *)&(this->FlushTimeLimitsMap).field_0x40 = 0;
  *(undefined4 *)&(this->FlushTimeLimitsMap).field_0x48 = 0;
  (this->HttpStats).RequestsInQueue = (atomic<int>)0x0;
  (this->HttpStats).RequestsInFlight = (atomic<int>)0x0;
  (this->HttpStats).MaxTimeToConnect = (atomic<float>)0xbf800000;
  (this->HttpStats).MaxRequestsInQueue = (atomic<unsigned_int>)0x0;
  (this->HttpStats).MaxRequestsInFlight = (atomic<unsigned_int>)0x0;
  (this->HttpStats).MaxTimeToWaitInQueue = (atomic<float>)0x0;
  (this->HttpStats).TotalDownloadedBytes = (atomic<__int64>)0x0;
  (this->HttpStats).BandwidthMbps = (atomic<__int64>)0x0;
  (this->HttpStats).HttpDurationMsAvg = (atomic<__int64>)0x0;
  (this->HttpStats).PlatformStats.bIsSet = false;
  (this->HttpStatsHistory).HistoryIndex = 0;
  (this->HttpStatsHistory).DownloadedBytes[0] = 0;
  (this->HttpStatsHistory).DownloadedBytes[1] = 0;
  (this->HttpStatsHistory).DownloadedBytes[2] = 0;
  (this->HttpStatsHistory).DownloadedBytes[3] = 0;
  (this->HttpStatsHistory).DownloadedBytes[4] = 0;
  (this->HttpStatsHistory).DownloadedBytes[5] = 0;
  (this->HttpStatsHistory).DownloadedBytes[6] = 0;
  (this->HttpStatsHistory).DownloadedBytes[7] = 0;
  (this->HttpStatsHistory).DownloadedBytes[8] = 0;
  (this->HttpStatsHistory).DownloadedBytes[9] = 0;
  (this->HttpStatsHistory).DownloadedBytes[10] = 0;
  (this->HttpStatsHistory).DownloadedBytes[0xb] = 0;
  (this->HttpStatsHistory).DownloadedBytes[0xc] = 0;
  (this->HttpStatsHistory).DownloadedBytes[0xd] = 0;
  (this->HttpStatsHistory).DownloadedBytes[0xe] = 0;
  (this->HttpStatsHistory).DownloadedBytes[0xf] = 0;
  (this->HttpStatsHistory).DurationMs[0] = 0;
  (this->HttpStatsHistory).DurationMs[1] = 0;
  (this->HttpStatsHistory).DurationMs[2] = 0;
  (this->HttpStatsHistory).DurationMs[3] = 0;
  (this->HttpStatsHistory).DurationMs[4] = 0;
  (this->HttpStatsHistory).DurationMs[5] = 0;
  (this->HttpStatsHistory).DurationMs[6] = 0;
  (this->HttpStatsHistory).DurationMs[7] = 0;
  (this->HttpStatsHistory).DurationMs[8] = 0;
  (this->HttpStatsHistory).DurationMs[9] = 0;
  (this->HttpStatsHistory).DurationMs[10] = 0;
  (this->HttpStatsHistory).DurationMs[0xb] = 0;
  (this->HttpStatsHistory).DurationMs[0xc] = 0;
  (this->HttpStatsHistory).DurationMs[0xd] = 0;
  (this->HttpStatsHistory).DurationMs[0xe] = 0;
  (this->HttpStatsHistory).DurationMs[0xf] = 0;
  (this->HttpStatsHistory).TotalDownloadedBytes = 0;
  (this->HttpStatsHistory).TotalUploadedBytes = 0;
  (this->HttpStatsHistory).TotalDuration = 0;
  this->bUseEventLoop = true;
  (this->UrlPatternsToLogResponse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UrlPatternsToLogResponse).ArrayNum = 0;
  (this->UrlPatternsToLogResponse).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->UrlPatternsToLogResponseCriticalSection,4000);
  (this->UrlPatternsToDisableFailedLog).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UrlPatternsToDisableFailedLog).ArrayNum = 0;
  (this->UrlPatternsToDisableFailedLog).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->UrlPatternsToDisableFailedLogCriticalSection,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ThreadsCompletingRequestCriticalSection,4000);
  *(undefined8 *)&this->ThreadsCompletingRequest = 0;
  *(undefined8 *)&(this->ThreadsCompletingRequest).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadsCompletingRequest).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadsCompletingRequest).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadsCompletingRequest).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadsCompletingRequest).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadsCompletingRequest).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadsCompletingRequest).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadsCompletingRequest).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestLock,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedRequestLock,4000);
  (this->UrlPatternsToMockResponse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UrlPatternsToMockResponse).ArrayNum = 0;
  (this->UrlPatternsToMockResponse).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->UrlPatternsToMockResponseCriticalSection,4000);
  this->bFlushing = false;
  return this;
}

// ~FHttpManager @ 1431503d0

void __thiscall FHttpManager::~FHttpManager(FHttpManager *this)

{
  FHttpThreadBase *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FHttpManager__6B_;
  if (this->Thread != (FHttpThreadBase *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x38))();
    pFVar1 = this->Thread;
    if (pFVar1 != (FHttpThreadBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UrlPatternsToMockResponseCriticalSection);
  DestructItems<TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>,int>
            ((TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse> *)
             (this->UrlPatternsToMockResponse).AllocatorInstance.Data,
             (this->UrlPatternsToMockResponse).ArrayNum);
  pFVar2 = (this->UrlPatternsToMockResponse).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequestLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RequestLock);
  *(undefined4 *)&(this->ThreadsCompletingRequest).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ThreadsCompletingRequest).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadsCompletingRequest);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadsCompletingRequestCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UrlPatternsToDisableFailedLogCriticalSection);
  DestructItems<FString,int>
            ((FString *)(this->UrlPatternsToDisableFailedLog).AllocatorInstance.Data,
             (this->UrlPatternsToDisableFailedLog).ArrayNum);
  pFVar2 = (this->UrlPatternsToDisableFailedLog).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UrlPatternsToLogResponseCriticalSection);
  DestructItems<FString,int>
            ((FString *)(this->UrlPatternsToLogResponse).AllocatorInstance.Data,
             (this->UrlPatternsToLogResponse).ArrayNum);
  pFVar2 = (this->UrlPatternsToLogResponse).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->FlushTimeLimitsMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FlushTimeLimitsMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->FlushTimeLimitsMap);
  *(undefined4 *)&(this->URLRequestFilter).AllowedRequests.field_0x48 = 0;
  pvVar3 = *(void **)&(this->URLRequestFilter).AllowedRequests.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->URLRequestFilter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestCompletedDelegate);
  pvVar3 = *(void **)&(this->RequestCompletedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestCompletedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestAddedDelegate);
  pvVar3 = *(void **)&(this->RequestAddedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestAddedDelegate);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GameThreadTickerLock);
  FTSTicker::~FTSTicker(&this->GameThreadTicker);
  if (*(longlong *)&this->CorrelationIdMethod != 0) {
    plVar4 = *(longlong **)&(this->CorrelationIdMethod).field_0x28;
    plVar5 = (longlong *)&(this->CorrelationIdMethod).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  DestructItems<TSharedRef<IHttpRequest,1>,int>
            ((TSharedRef<IHttpRequest,1> *)(this->Requests).AllocatorInstance.Data,
             (this->Requests).ArrayNum);
  pFVar2 = (this->Requests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// AddGameThreadTask @ 143154190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHttpManager::AddGameThreadTask
          (FHttpManager *this,TFunction<void___cdecl(void)> *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  TWeakPtr<FTSTicker::FElement,1> local_80;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68 = *(longlong *)param_1;
  if (local_68 != 0) {
    local_40 = (longlong *)0x0;
    puVar3 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,&local_58);
    local_b8 = (undefined1  [8])0x0;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)&local_a0);
    local_88 = &local_b0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x50,&local_b0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FHttpManager::AddGameThreadTask'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar3[4] = local_68;
      puVar3[9] = local_40;
      local_40 = (longlong *)0x0;
      puVar3[6] = local_58;
      puVar3[7] = uStack_50;
      puVar3[8] = local_48;
      if (puVar3[4] != 0) {
        local_68 = 0;
      }
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    FTSTicker::AddTicker
              (&this->GameThreadTicker,&local_80,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_b8,param_2);
    if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_80.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)&local_a0);
    if ((local_b0.DelegateSize != 0) &&
       (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b0,0,0,0x10);
      local_b0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b8);
    if (local_68 != 0) {
      plVar5 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar5 = local_40;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return;
}

// AddHttpThreadTask @ 143154530

TSharedPtr<IHttpTaskTimerHandle,1> * __thiscall
FHttpManager::AddHttpThreadTask
          (FHttpManager *this,TSharedPtr<IHttpTaskTimerHandle,1> *__return_storage_ptr__,
          TFunction<void___cdecl(void)> *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<IHttpTaskTimerHandle,1> *pTVar3;
  
  if (this->Thread == (FHttpThreadBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                       ,0x15f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<IHttpTaskTimerHandle,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)(this->Thread->_padding_ + 0x60))(this->Thread,__return_storage_ptr__,param_1,param_2)
  ;
  return __return_storage_ptr__;
}

// AddRequest @ 1431549f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpManager::AddRequest(FHttpManager *this,TSharedRef<IHttpRequest,1> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedRef<IHttpRequest,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::AddRequest(TSharedRef<IHttpRequest,1>_const_&)_::_2_::FStat_STAT_FHttpManager_RequestAddedDelegate>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18;
  uint local_res1c;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  FReadAccessScope local_48;
  
  lpCriticalSection = &this->RequestLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((2 < (byte)LogHttp._0_1_) && (this->bFlushing != false)) {
    (*(code *)**(undefined8 **)param_1->Object)();
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  pTVar2 = (TSharedRef<IHttpRequest,1> *)(this->Requests).AllocatorInstance.Data;
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Requests).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (this->Requests).ArrayNum;
  piVar1 = &(this->Requests).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Requests).AllocatorInstance,piVar1);
  }
  (this->Requests).ArrayNum = iVar9 + 1;
  pFVar16 = (this->Requests).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
  *(IHttpRequest **)pFVar16 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar15.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FHttpManager_RequestAddedDelegate ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::AddRequest(TSharedRef<IHttpRequest,1>_const_&)_::_2_::FStat_STAT_FHttpManager_RequestAddedDelegate>
         )0x0) {
      pFVar10 = ::FName::FName(&local_78,"STAT_FHttpManager_RequestAddedDelegate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpManager_RequestAddedDelegate,
                 *pFVar10,L"STAT_FHttpManager_RequestAddedDelegate","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_FHttpManager_RequestAddedDelegate;
  if (StatPtr_STAT_FHttpManager_RequestAddedDelegate ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::AddRequest(TSharedRef<IHttpRequest,1>_const_&)_::_2_::FStat_STAT_FHttpManager_RequestAddedDelegate>
       )0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_FHttpManager_RequestAddedDelegate");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::AddRequest(TSharedRef<IHttpRequest,1>_const_&)_::_2_::FStat_STAT_FHttpManager_RequestAddedDelegate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FHttpManager_RequestAddedDelegate,*pFVar10,
                          L"STAT_FHttpManager_RequestAddedDelegate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar8 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar13.Bits;
        local_res1c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                   ,0x23e);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      local_68 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      FVar15.Value = local_68.ComparisonIndex.Value;
      goto LAB_143154c83;
    }
  }
  bVar6 = false;
  FVar14 = local_68;
LAB_143154c83:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RequestAddedDelegate,
             &local_48);
  if ((*(int *)&(this->RequestAddedDelegate).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->RequestAddedDelegate).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res20);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
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
  return;
}

// AddThreadedRequest @ 143154f10

void __thiscall
FHttpManager::AddThreadedRequest(FHttpManager *this,TSharedRef<FHttpRequestCommon,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<IHttpRequest,1> local_18;
  
  if (this->Thread == (FHttpThreadBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                       ,0x24b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = (IHttpRequest *)param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddRequest(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000143154f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Thread->_padding_ + 0x40))(this->Thread,param_1->Object);
  return;
}

// BroadcastHttpRequestCompleted @ 143155d10

void __thiscall
FHttpManager::BroadcastHttpRequestCompleted(FHttpManager *this,TSharedRef<IHttpRequest,1> *param_1)

{
  long64 *plVar1;
  atomic<__int64> *paVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  (**(code **)(*(longlong *)param_1->Object + 0x120))(param_1->Object,&local_38);
  if (local_38 != (longlong *)0x0) {
    lVar7 = (this->HttpStatsHistory).DurationMs[(this->HttpStatsHistory).HistoryIndex];
    fVar10 = (float)(**(code **)(*(longlong *)param_1->Object + 0x130))();
    lVar9 = (longlong)ROUND(fVar10 * __real_44fa0000 + __real_3f000000) >> 1;
    plVar1 = &(this->HttpStatsHistory).TotalDuration;
    *plVar1 = *plVar1 + (lVar9 - lVar7);
    (this->HttpStatsHistory).DurationMs[(this->HttpStatsHistory).HistoryIndex] = lVar9;
    if ((local_38 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar7 = (**(code **)(*local_38 + 0x40))();
    LOCK();
    paVar2 = &(this->HttpStats).TotalDownloadedBytes;
    *paVar2 = (atomic<__int64>)((longlong)*paVar2 + lVar7);
    UNLOCK();
    iVar3 = (this->HttpStatsHistory).HistoryIndex;
    plVar1 = &(this->HttpStatsHistory).TotalDownloadedBytes;
    *plVar1 = *plVar1 + (lVar7 - (this->HttpStatsHistory).DownloadedBytes[iVar3]);
    (this->HttpStatsHistory).DownloadedBytes[iVar3] = lVar7;
    LOCK();
    (this->HttpStats).BandwidthMbps =
         (atomic<__int64>)
         ((((this->HttpStatsHistory).TotalDownloadedBytes << 3) /
          ((this->HttpStatsHistory).TotalDuration + 1)) / 1000);
    UNLOCK();
    lVar7 = (this->HttpStatsHistory).TotalDuration;
    LOCK();
    (this->HttpStats).HttpDurationMsAvg =
         (atomic<__int64>)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 0xf)) >> 4);
    UNLOCK();
    uVar8 = (this->HttpStatsHistory).HistoryIndex + 1U & 0x8000000f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
    }
    (this->HttpStatsHistory).HistoryIndex = uVar8;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->RequestCompletedDelegate,&local_28);
  if ((*(int *)&(this->RequestCompletedDelegate).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->RequestCompletedDelegate).field_0x8, plVar4 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// CancelThreadedRequest @ 143157c80

void __thiscall
FHttpManager::CancelThreadedRequest(FHttpManager *this,TSharedRef<FHttpRequestCommon,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Thread == (FHttpThreadBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                       ,0x254,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143157cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Thread->_padding_ + 0x48))(this->Thread,param_1->Object);
  return;
}

// CreateCorrelationId @ 14315ab70

FString * __thiscall
FHttpManager::CreateCorrelationId(FHttpManager *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CorrelationIdMethod);
  plVar1 = *(longlong **)&(this->CorrelationIdMethod).field_0x28;
  pcVar2 = *(code **)&this->CorrelationIdMethod;
  plVar4 = (longlong *)&(this->CorrelationIdMethod).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// CreateHttpThread @ 14315b4d0

FHttpThreadBase * __thiscall FHttpManager::CreateHttpThread(FHttpManager *this)

{
  FLegacyHttpThread *pFVar1;
  
  pFVar1 = ::operator_new(0xe8);
  if (pFVar1 != (FLegacyHttpThread *)0x0) {
    pFVar1 = FLegacyHttpThread::FLegacyHttpThread(pFVar1);
    return (FHttpThreadBase *)pFVar1;
  }
  return (FHttpThreadBase *)0x0;
}

// DumpRequests @ 14315cc00

void __thiscall FHttpManager::DumpRequests(FHttpManager *this,FOutputDevice *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  void *local_38 [2];
  
  lpCriticalSection = &this->RequestLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FOutputDevice::LogfImpl(param_1,L"------- (%d) Http Requests");
    iVar1 = (this->Requests).ArrayNum;
    pFVar2 = (this->Requests).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Requests).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<IHttpRequest,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) break;
      (**(code **)(**(longlong **)pFVar2 + 0x10))();
      (**(code **)**(undefined8 **)pFVar2)();
      (**(code **)(**(longlong **)pFVar2 + 0x58))(*(longlong **)pFVar2,local_38);
      FOutputDevice::LogfImpl(param_1,L"\tverb=[%s] url=[%s] status=%s");
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      pFVar2 = pFVar2 + 0x10;
    }
                    /* WARNING: Could not recover jumptable at 0x00014315cd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Flush @ 14315f9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpManager::Flush(FHttpManager *this,EHttpFlushReason param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  double dVar2;
  TSharedRef<IHttpRequest,1> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  DWORD DVar20;
  DWORD DVar21;
  uint uVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_2_::FStat_STAT_FHttpManager_Flush>
  FVar24;
  FHttpFlushTimeLimit *pFVar25;
  FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_80_::FStat_STAT_FHttpManager_Flush_Iteration>
  FVar26;
  DWORD *pDVar27;
  FNameEntryId FVar28;
  DWORD *pDVar29;
  uint uVar30;
  int iVar31;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FName FVar32;
  undefined1 *puVar33;
  FScriptContainerElement *pFVar34;
  FName FVar35;
  int iVar36;
  ForAnyElementType local_188;
  undefined8 local_180;
  float local_178;
  FColor_u_0 local_174;
  FColor_u_0 local_170 [2];
  FName local_168;
  FName local_160;
  uint local_158;
  uint uStack_154;
  FName local_150;
  FName local_148;
  FName local_138;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LPCRITICAL_SECTION local_118;
  LARGE_INTEGER local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  void *local_e8 [2];
  void *local_d8 [20];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FHttpManager_Flush =
         (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_2_::FStat_STAT_FHttpManager_Flush>
          )0x0;
    pFVar23 = ::FName::FName(&local_108,"STAT_FHttpManager_Flush");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpManager_Flush,*pFVar23,
               L"STAT_FHttpManager_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
               ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar24 = StatPtr_STAT_FHttpManager_Flush;
  if (StatPtr_STAT_FHttpManager_Flush ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_2_::FStat_STAT_FHttpManager_Flush>
       )0x0) {
    pFVar23 = ::FName::FName(&local_100,"STAT_FHttpManager_Flush");
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_2_::FStat_STAT_FHttpManager_Flush>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpManager_Flush,*pFVar23,
                          L"STAT_FHttpManager_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar24;
  bVar10 = false;
  bVar11 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar16 = false;
  bVar18 = false;
  if ((FVar35.ComparisonIndex.Value.Value == 0) && (FVar35.Number == 0)) {
LAB_14315fbf0:
    bVar11 = bVar18;
    bVar10 = bVar16;
    bVar16 = false;
    local_150 = local_148;
    FVar35 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_174.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar16 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_168.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                   ,0x170);
        bVar10 = true;
        bVar11 = true;
        bVar16 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14315fbf0;
    local_150 = FVar35;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar16 = true;
  }
  if (2 < (byte)LogHttp._0_1_) {
    lpCriticalSection = &this->ThreadsCompletingRequestCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_143160804;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DVar20 = GetCurrentThreadId();
    if (*(int *)&(this->ThreadsCompletingRequest).field_0x8 !=
        *(int *)&(this->ThreadsCompletingRequest).field_0x34) {
      puVar33 = *(undefined1 **)&(this->ThreadsCompletingRequest).field_0x40;
      if (puVar33 == (undefined1 *)0x0) {
        puVar33 = &(this->ThreadsCompletingRequest).field_0x38;
      }
      DVar21 = *(DWORD *)(puVar33 +
                         (ulonglong)
                         (*(int *)&(this->ThreadsCompletingRequest).field_0x48 - 1U & DVar20) * 4);
      if (DVar21 != 0xffffffff) {
        do {
          pDVar27 = (DWORD *)((longlong)(int)DVar21 * 0x10 +
                             *(longlong *)&this->ThreadsCompletingRequest);
          if (*pDVar27 == DVar20) {
            pDVar29 = pDVar27 + 1;
            if (pDVar27 == (DWORD *)0x0) {
              pDVar29 = (DWORD *)0x0;
            }
            if (pDVar29 != (DWORD *)0x0) {
              DVar20 = *pDVar29;
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              if ((char)DVar20 != '\0') {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
              }
              goto LAB_14315fcb4;
            }
            break;
          }
          DVar21 = pDVar27[2];
        } while (DVar21 != 0xffffffff);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
LAB_14315fcb4:
  if (((param_1 == Shutdown) && (bVar18 = HasAnyBoundDelegate(this), bVar18)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("FlushReason != EHttpFlushReason::Shutdown || !HasAnyBoundDelegate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                          ,0x173,
                          L"Use Shutdown() instead of Flush(EHttpFlushReason::Shutdown) directly."),
     bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->bFlushing = true;
  pFVar25 = TMapBase<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,0>_>
            ::FindChecked(&this->FlushTimeLimitsMap,param_1);
  dVar1 = pFVar25->SoftLimitSeconds;
  pFVar25 = TMapBase<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,0>_>
            ::FindChecked(&this->FlushTimeLimitsMap,param_1);
  dVar2 = pFVar25->HardLimitSeconds;
  local_178 = 0.5;
  FConfigCacheIni::GetFloat(GConfig,L"HTTP",L"RequestCleanupDelaySec",&local_178,&GEngineIni);
  if ((5 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) {
    if (((param_1 != Default) && ((param_1 != Shutdown && (param_1 != FullFlush)))) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                            ,0x43,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->RequestLock;
  local_118 = lpCriticalSection_00;
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection_00);
    iVar36 = (this->Requests).ArrayNum;
    LeaveCriticalSection(lpCriticalSection_00);
    if (((5 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) && (iVar36 != 0)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    QueryPerformanceCounter(&local_128);
    dVar15 = __real_4170000000000000;
    dVar14 = __real_3fe0000000000000;
    dVar7 = (double)local_128.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    dVar6 = dVar7 + __real_3fe0000000000000;
    QueryPerformanceCounter(&local_120);
    dVar5 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    dVar8 = dVar7;
    do {
      dVar9 = dVar5 + dVar15;
      iVar31 = 0;
      if ((iVar36 == 0) || ((0.0 <= dVar2 && (dVar2 <= dVar9 - dVar7)))) {
        if ((5 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        if (((iVar36 != 0) && (0.0 < dVar2)) &&
           ((dVar2 < dVar9 - dVar7 &&
            ((PRIVATE_GIsRunningCommandlet == false && (bVar18 = FApp::IsUnattended(), !bVar18))))))
        {
          if (2 < (byte)LogHttp._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)&this->RequestLock);
          for (; (-1 < iVar31 && (iVar31 < (this->Requests).ArrayNum)); iVar31 = iVar31 + 1) {
            if ((iVar31 < 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar34 = (this->Requests).AllocatorInstance.Data + (longlong)iVar31 * 0x10;
            if (2 < (byte)LogHttp._0_1_) {
              (**(code **)(**(longlong **)pFVar34 + 0x10))();
              (**(code **)**(undefined8 **)pFVar34)();
              (**(code **)(**(longlong **)pFVar34 + 0x58))(*(longlong **)pFVar34,local_d8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
              if (local_d8[0] != (void *)0x0) {
                FMemory::Free(local_d8[0]);
              }
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&this->RequestLock);
        }
        this->bFlushing = false;
        if (bVar11) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar16) {
          FThreadStats::AddMessage(FVar35,CycleScopeEnd);
        }
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        StatPtr_STAT_FHttpManager_Flush_Iteration =
             (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_80_::FStat_STAT_FHttpManager_Flush_Iteration>
              )0x0;
        pFVar23 = ::FName::FName(&local_f8,"STAT_FHttpManager_Flush_Iteration");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpManager_Flush_Iteration,*pFVar23,
                   L"STAT_FHttpManager_Flush_Iteration","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      FVar26 = StatPtr_STAT_FHttpManager_Flush_Iteration;
      if (StatPtr_STAT_FHttpManager_Flush_Iteration ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_80_::FStat_STAT_FHttpManager_Flush_Iteration>
           )0x0) {
        pFVar23 = ::FName::FName(&local_f0,"STAT_FHttpManager_Flush_Iteration");
        FVar26 = (FThreadSafeStaticStat<_public:_void___cdecl_FHttpManager::Flush(EHttpFlushReason)_::_80_::FStat_STAT_FHttpManager_Flush_Iteration>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FHttpManager_Flush_Iteration,*pFVar23,
                              L"STAT_FHttpManager_Flush_Iteration","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar32 = *(FName *)FVar26;
      bVar17 = false;
      bVar19 = false;
      local_138.ComparisonIndex.Value = 0;
      local_138.Number = 0;
      bVar12 = false;
      bVar18 = false;
      FVar28 = FVar32.ComparisonIndex.Value;
      uVar30 = FVar32.Number;
      if ((FVar28.Value == 0) && (uVar30 == 0)) {
LAB_143160156:
        bVar13 = false;
        FVar32 = local_138;
      }
      else {
        bVar18 = false;
        bVar12 = false;
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_170[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_170[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
          bVar17 = false;
          bVar19 = true;
          bVar12 = false;
          bVar18 = true;
          if (-1 < CpuChannel->Enabled) {
            local_160.ComparisonIndex.Value = FVar28.Value;
            local_160.Number = uVar30;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_160,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                       ,0x195);
            bVar17 = true;
            bVar19 = true;
            bVar12 = true;
            bVar18 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_143160156;
        local_158 = FVar28.Value;
        uStack_154 = uVar30;
        local_138 = FVar32;
        FThreadStats::AddMessage(FVar32,CycleScopeStart);
        bVar13 = true;
        bVar18 = bVar19;
        bVar12 = bVar17;
      }
      if ((dVar1 < 0.0) || (dVar9 - dVar7 < dVar1)) {
LAB_143160438:
        bVar12 = bVar17;
        bVar18 = bVar19;
        (**(code **)(this->_padding_ + 0x10))(this,(float)(dVar9 - dVar8));
        EnterCriticalSection(lpCriticalSection_00);
      }
      else {
        if ((2 < (byte)LogHttp._0_1_) &&
           ((PRIVATE_GIsRunningCommandlet == false && (bVar19 = FApp::IsUnattended(), !bVar19)))) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        local_188.Data = (FScriptContainerElement *)0x0;
        local_180 = 0;
        EnterCriticalSection(lpCriticalSection_00);
        if ((TArray<TSharedRef<IHttpRequest,1>,TSizedDefaultAllocator<32>_> *)&local_188 !=
            &this->Requests) {
          DestructItems<TSharedRef<IHttpRequest,1>,int>
                    ((TSharedRef<IHttpRequest,1> *)local_188.Data,(int)local_180);
          iVar36 = (this->Requests).ArrayNum;
          pTVar3 = (TSharedRef<IHttpRequest,1> *)(this->Requests).AllocatorInstance.Data;
          local_180 = CONCAT44(local_180._4_4_,iVar36);
          if ((iVar36 == 0) && (local_180._4_4_ == 0)) {
            local_180 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar36,local_180._4_4_,&local_188,iVar36,
                       (int *)((longlong)&local_180 + 4));
            ConstructItems<TSharedRef<IHttpRequest,1>,TSharedRef<IHttpRequest,1>,int>
                      (local_188.Data,pTVar3,iVar36);
          }
        }
        LeaveCriticalSection(lpCriticalSection_00);
        for (uVar30 = 0; (-1 < (int)uVar30 && ((int)uVar30 < (int)local_180)); uVar30 = uVar30 + 1)
        {
          uVar22 = 0;
          if ((int)uVar30 < (int)local_180) {
            uVar22 = ~uVar30 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar34 = local_188.Data + (longlong)(int)uVar30 * 0x10;
          if (((2 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) &&
             (bVar19 = FApp::IsUnattended(), !bVar19)) {
            (**(code **)(**(longlong **)&pFVar34->field_0x0 + 0x10))();
            (**(code **)**(undefined8 **)&pFVar34->field_0x0)();
            (**(code **)(**(longlong **)&pFVar34->field_0x0 + 0x58))
                      (*(longlong **)&pFVar34->field_0x0,local_e8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
            if (local_e8[0] != (void *)0x0) {
              FMemory::Free(local_e8[0]);
            }
          }
          (**(code **)**(undefined8 **)&pFVar34->field_0x0)();
          (**(code **)(**(longlong **)&pFVar34->field_0x0 + 0x118))();
        }
        DestructItems<TSharedRef<IHttpRequest,1>,int>
                  ((TSharedRef<IHttpRequest,1> *)local_188.Data,(int)local_180);
        lpCriticalSection_00 = local_118;
        FVar35 = local_150;
        bVar19 = bVar18;
        bVar17 = bVar12;
        if ((TSharedRef<IHttpRequest,1> *)local_188.Data == (TSharedRef<IHttpRequest,1> *)0x0)
        goto LAB_143160438;
        FMemory::Free(local_188.Data);
        (**(code **)(this->_padding_ + 0x10))(this,(float)(dVar9 - dVar8));
        EnterCriticalSection(lpCriticalSection_00);
      }
      iVar36 = (this->Requests).ArrayNum;
      LeaveCriticalSection(lpCriticalSection_00);
      if ((iVar36 != 0) && (this->Thread != (FHttpThreadBase *)0x0)) {
        if (this->Thread->bIsSingleThread == false) {
          if (((2 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) &&
             (bVar19 = FApp::IsUnattended(), !bVar19)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          }
          FWindowsPlatformProcess::Sleep(local_178);
        }
        else {
          if (dVar6 <= dVar9) {
            if (((2 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) &&
               (bVar19 = FApp::IsUnattended(), !bVar19)) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
            }
            dVar6 = dVar9 + dVar14;
          }
          (**(code **)(this->Thread->_padding_ + 8))();
        }
      }
      QueryPerformanceCounter(&local_110);
      dVar5 = (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      if (bVar18) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      dVar8 = dVar9;
      if (bVar13) {
        FThreadStats::AddMessage(FVar32,CycleScopeEnd);
      }
    } while( true );
  }
LAB_143160804:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FlushTick @ 143160810

void __thiscall FHttpManager::FlushTick(FHttpManager *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143160813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// GetDefaultCorrelationIdMethod @ 1431623b0

TFunction<FString___cdecl(void)> * __cdecl
FHttpManager::GetDefaultCorrelationIdMethod
          (TFunction<FString___cdecl(void)> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &___7__TFunction_OwnedObject_P6A_AVFString__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x18 =
       `FHttpManager::GetDefaultCorrelationIdMethod'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::TFunctionRefCaller<FString_(__cdecl*)(void),FString>::Call;
  }
  return __return_storage_ptr__;
}

// GetMockResponse @ 143163b90

TOptional<FHttpManager::FMockResponse> * __thiscall
FHttpManager::GetMockResponse
          (FHttpManager *this,TOptional<FHttpManager::FMockResponse> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FUtf8String *pFVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  FScriptContainerElement *pFVar15;
  undefined4 local_res8 [2];
  uint local_res10;
  TStringView<wchar_t> *local_res18;
  TStringView<wchar_t> *local_res20;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  
  bVar14 = false;
  lpCriticalSection = &this->UrlPatternsToMockResponseCriticalSection;
  local_res8[0] = 0;
  __return_storage_ptr__->bIsSet = false;
  local_res18 = param_1;
  local_res20 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res10 = (this->UrlPatternsToMockResponse).ArrayNum;
  uVar8 = (ulonglong)(int)local_res10;
  pFVar15 = (this->UrlPatternsToMockResponse).AllocatorInstance.Data;
  pFVar13 = pFVar15 + uVar8 * 0x88;
  FVar10.Data = local_68.Data.AllocatorInstance.Data;
  do {
    if ((this->UrlPatternsToMockResponse).ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar13) goto LAB_143163e49;
    local_88.DataPtr = *(wchar_t **)pFVar15;
    iVar12 = 0;
    iVar6 = *(int *)(pFVar15 + 8) + -1;
    if (*(int *)(pFVar15 + 8) == 0) {
      iVar6 = 0;
    }
    iVar3 = local_res18->Size;
    local_88._12_4_ = uStack_9c;
    local_88.Size = iVar6;
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    local_78.DataPtr = local_res18->DataPtr + ((longlong)iVar3 - (longlong)iVar6);
    local_78._12_4_ = uStack_8c;
    local_78.Size = iVar6;
    iVar6 = UE::String::FindFirst(&local_78,&local_88,CaseSensitive);
    if (iVar6 == -1) {
LAB_143163d3a:
      bVar5 = false;
    }
    else {
      if (1 < *(int *)(pFVar15 + 0x18)) {
        bVar14 = true;
        pFVar7 = ::FString::ConstructFromPtrSize
                           (&local_58,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
        FVar10.Data = (FScriptContainerElement *)0x0;
        if (&local_68 != pFVar7) {
          FVar10.Data = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar12 = (pFVar7->Data).ArrayNum;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        pFVar11 = (FScriptContainerElement *)L"";
        if (iVar12 != 0) {
          pFVar11 = FVar10.Data;
        }
        if (*(int *)(pFVar15 + 0x18) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(pFVar15 + 0x10);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,(wchar_t *)pFVar11);
        param_2 = local_res20;
        if (iVar6 != 0) goto LAB_143163d3a;
      }
      bVar5 = true;
    }
    if (bVar14) {
      bVar14 = false;
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
    if (bVar5) {
      if ((TOptional<FHttpManager::FMockResponse> *)(pFVar15 + 0x20) != __return_storage_ptr__) {
        if (__return_storage_ptr__->bIsSet != false) {
          *(undefined4 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x48 = 0;
          pvVar4 = *(void **)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x40;
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&(__return_storage_ptr__->TypedValue).ResponseHeaders);
          pFVar13 = (__return_storage_ptr__->TypedValue).ResponsePayload.Data.AllocatorInstance.Data
          ;
          if (pFVar13 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar13);
          }
        }
        pFVar2 = &(__return_storage_ptr__->TypedValue).ResponsePayload;
        (__return_storage_ptr__->TypedValue).StatusCode =
             (((TOptional<FHttpManager::FMockResponse> *)(pFVar15 + 0x20))->TypedValue).StatusCode;
        piVar1 = &(__return_storage_ptr__->TypedValue).ResponsePayload.Data.ArrayMax;
        (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = *(int *)(pFVar15 + 0x30);
        pvVar4 = *(void **)(pFVar15 + 0x28);
        (__return_storage_ptr__->TypedValue).ResponsePayload.Data.ArrayNum = iVar6;
        if (iVar6 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar6,0,(ForAnyElementType *)pFVar2,iVar6,piVar1);
          memcpy((pFVar2->Data).AllocatorInstance.Data,pvVar4,(longlong)iVar6);
        }
        this_00 = &(__return_storage_ptr__->TypedValue).ResponseHeaders;
        *(undefined8 *)&this_00->field_0x0 = 0;
        *(undefined8 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x8 = 0;
        *(undefined8 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x20 = 0;
        *(undefined4 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x28 = 0;
        *(undefined4 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x2c = 0x80;
        *(undefined4 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x30 = 0xffffffff
        ;
        *(undefined4 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x34 = 0;
        *(undefined8 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x40 = 0;
        *(undefined4 *)&(__return_storage_ptr__->TypedValue).ResponseHeaders.field_0x48 = 0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)this_00,
                    (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)(pFVar15 + 0x38));
        __return_storage_ptr__->bIsSet = true;
      }
LAB_143163e49:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
    pFVar15 = pFVar15 + 0x88;
    uVar8 = (ulonglong)local_res10;
  } while( true );
}

// GetThread @ 143164ca0

FHttpThreadBase * __thiscall FHttpManager::GetThread(FHttpManager *this)

{
  return this->Thread;
}

// HasAnyBoundDelegate @ 1431689b0

bool __thiscall FHttpManager::HasAnyBoundDelegate(FHttpManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  lpCriticalSection = &this->RequestLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (this->Requests).ArrayNum)); iVar6 = iVar6 + 1) {
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    lpCriticalSection_00 =
         (LPCRITICAL_SECTION)
         (**(code **)(**(longlong **)
                        ((this->Requests).AllocatorInstance.Data + (longlong)iVar6 * 0x10) + 0xf0))
                   ();
    if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    EnterCriticalSection(lpCriticalSection_00);
    if ((lpCriticalSection_00[1].LockCount != 0) &&
       (lpCriticalSection_00[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      cVar5 = (**(code **)(*(longlong *)lpCriticalSection_00[1].DebugInfo + 0x38))();
      if (cVar5 != '\0') {
        LeaveCriticalSection(lpCriticalSection_00);
        bVar3 = true;
        goto LAB_143168b51;
      }
    }
    LeaveCriticalSection(lpCriticalSection_00);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RequestAddedDelegate,
             &local_38);
  if ((*(int *)&(this->RequestAddedDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->RequestAddedDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar1 + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      bVar3 = true;
      goto LAB_143168b51;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->RequestCompletedDelegate,&local_20);
  if ((*(int *)&(this->RequestCompletedDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->RequestCompletedDelegate).field_0x8, plVar1 != (longlong *)0x0)
     ) {
    cVar5 = (**(code **)(*plVar1 + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      bVar3 = true;
      goto LAB_143168b51;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  bVar3 = false;
LAB_143168b51:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// Initialize @ 14316bcd0

void __thiscall FHttpManager::Initialize(FHttpManager *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  FHttpThreadBase *pFVar7;
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
  *pTVar8;
  int iVar9;
  
  if (this->Thread == (FHttpThreadBase *)0x0) {
    uVar4 = rand();
    pTVar2 = CVarHttpEventLoopEnableChance.Ref;
    iVar5 = (int)((float)(uVar4 & 0x7fff) * __real_3b480190);
    iVar9 = 99;
    if (iVar5 < 99) {
      iVar9 = iVar5;
    }
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    this->bUseEventLoop = iVar9 < pTVar2->ShadowedValue[0];
    pwVar6 = FCommandLine::Get();
    FParse::Bool(pwVar6,L"useeventloop=",&this->bUseEventLoop);
    pFVar7 = (FHttpThreadBase *)(**(code **)(this->_padding_ + 0x40))(this);
    this->Thread = pFVar7;
    (**(code **)(pFVar7->_padding_ + 0x30))(pFVar7);
  }
  (**(code **)(this->_padding_ + 0x38))(this);
  UpdateUrlPatternsToLogResponse
            (this,(IConsoleVariable *)CVarHttpUrlPatternsToLogResponse._padding_);
  pTVar8 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
            *)(**(code **)(*(longlong *)CVarHttpUrlPatternsToLogResponse._padding_ + 0xe8))();
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
  AddRaw<FHttpManager>(pTVar8,(FHttpManager *)&stack0x00000008,(pmf_6488c2b7)this);
  UpdateUrlPatternsToDisableFailedLog
            (this,(IConsoleVariable *)CVarHttpUrlPatternsToDisableFailedLog._padding_);
  pTVar8 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
            *)(**(code **)(*(longlong *)CVarHttpUrlPatternsToDisableFailedLog._padding_ + 0xe8))();
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
  AddRaw<FHttpManager>(pTVar8,(FHttpManager *)&stack0x00000010,(pmf_6488c2b7)this);
  UpdateUrlPatternsToMockResponse
            (this,(IConsoleVariable *)CVarHttpUrlPatternsToMockResponse._padding_);
  pTVar8 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
            *)(**(code **)(*(longlong *)CVarHttpUrlPatternsToMockResponse._padding_ + 0xe8))();
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
  AddRaw<FHttpManager>(pTVar8,(FHttpManager *)&stack0x00000018,(pmf_6488c2b7)this);
  return;
}

// IsCurrentThreadCompletingRequest @ 14316c670

bool __thiscall FHttpManager::IsCurrentThreadCompletingRequest(FHttpManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DWORD DVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  DWORD *pDVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  
  lpCriticalSection = &this->ThreadsCompletingRequestCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DVar1 = GetCurrentThreadId();
  if (*(int *)&(this->ThreadsCompletingRequest).field_0x8 !=
      *(int *)&(this->ThreadsCompletingRequest).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ThreadsCompletingRequest).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ThreadsCompletingRequest).field_0x38;
    }
    DVar2 = *(DWORD *)(puVar6 + (ulonglong)
                                (*(int *)&(this->ThreadsCompletingRequest).field_0x48 - 1U & DVar1)
                                * 4);
    if (DVar2 != 0xffffffff) {
      do {
        pDVar4 = (DWORD *)((longlong)(int)DVar2 * 0x10 +
                          *(longlong *)&this->ThreadsCompletingRequest);
        if (*pDVar4 == DVar1) {
          pDVar3 = pDVar4 + 1;
          if (pDVar4 == (DWORD *)0x0) {
            pDVar3 = (DWORD *)0x0;
          }
          if (pDVar3 != (DWORD *)0x0) {
            uVar5 = (undefined1)*pDVar3;
            goto LAB_14316c6fa;
          }
          break;
        }
        DVar2 = pDVar4[2];
      } while (DVar2 != 0xffffffff);
    }
  }
  uVar5 = 0;
LAB_14316c6fa:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (bool)uVar5;
}

// IsDomainAllowed @ 14316c740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHttpManager::IsDomainAllowed(FHttpManager *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  iVar4 = (param_1->Data).ArrayNum;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_38.Size = 3;
  uVar2 = local_38._8_8_;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  local_38.DataPtr = L"://";
  local_28[0].DataPtr = (wchar_t *)pFVar1;
  local_28[0].Size = iVar5;
  iVar4 = UE::String::FindFirst(local_28,&local_38,CaseSensitive);
  if (iVar4 != -1) {
    iVar7 = (iVar5 - iVar4) + -3;
    iVar4 = iVar5;
    if (iVar7 < iVar5) {
      iVar4 = iVar7;
    }
    iVar7 = 0;
    if (0 < iVar4) {
      iVar7 = iVar4;
    }
    if (2 < (byte)LogHttp._0_1_) {
      local_38.DataPtr = L"://";
      local_28[0].Size = 0;
      if (0 < iVar7) {
        local_28[0].Size = iVar7;
      }
      local_28[0].DataPtr = (wchar_t *)(pFVar1 + ((longlong)iVar5 - (longlong)local_28[0].Size) * 2)
      ;
      local_38._8_8_ = uVar2;
      iVar5 = UE::String::FindFirst(local_28,&local_38,CaseSensitive);
      if (iVar5 != -1) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Duplicated_deli_150a56d70,
                   (FLogCategoryBase *)&LogHttp);
      }
    }
  }
  if (*(int *)&(this->URLRequestFilter).AllowedRequests.field_0x8 ==
      *(int *)&(this->URLRequestFilter).AllowedRequests.field_0x34) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pwVar6 = FCommandLine::Get();
        bIgnoreAllowList = FParse::Param(pwVar6,L"DisableHttpDomainRestrictions");
        _Init_thread_footer(&::_TSS0);
      }
    }
    bVar3 = true;
  }
  else {
    local_28[0].DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = (param_1->Data).ArrayNum;
    local_28[0].Size = iVar5 + -1;
    if (iVar5 == 0) {
      local_28[0].Size = 0;
    }
    bVar3 = UE::Core::FURLRequestFilter::IsRequestAllowed(&this->URLRequestFilter,local_28);
  }
  return bVar3;
}

// IsValidRequest @ 14316d370

bool __thiscall FHttpManager::IsValidRequest(FHttpManager *this,IHttpRequest *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->RequestLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Requests).ArrayNum;
  bVar4 = false;
  pFVar3 = (this->Requests).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Requests).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<IHttpRequest,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) goto LAB_14316d3e4;
    if (*(IHttpRequest **)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 0x10;
  }
  bVar4 = true;
LAB_14316d3e4:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// MarkCurrentThreadCompletingRequest @ 14316fac0

void __thiscall FHttpManager::MarkCurrentThreadCompletingRequest(FHttpManager *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DWORD DVar1;
  DWORD *pDVar2;
  undefined1 *puVar3;
  TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
  *this_00;
  DWORD local_res8 [4];
  int local_res18 [2];
  DWORD *local_res20;
  
  lpCriticalSection = &this->ThreadsCompletingRequestCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->ThreadsCompletingRequest;
  local_res8[0] = GetCurrentThreadId();
  if (*(int *)&(this->ThreadsCompletingRequest).field_0x8 !=
      *(int *)&(this->ThreadsCompletingRequest).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ThreadsCompletingRequest).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ThreadsCompletingRequest).field_0x38;
    }
    DVar1 = *(DWORD *)(puVar3 + (ulonglong)
                                (*(int *)&(this->ThreadsCompletingRequest).field_0x48 - 1U &
                                local_res8[0]) * 4);
    if (DVar1 != 0xffffffff) {
      do {
        pDVar2 = (DWORD *)((longlong)(int)DVar1 * 0x10 + *(longlong *)&this_00->field_0x0);
        if (*pDVar2 == local_res8[0]) {
          if (pDVar2 != (DWORD *)0x0) goto LAB_14316fb7f;
          break;
        }
        DVar1 = pDVar2[2];
      } while (DVar1 != 0xffffffff);
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
            ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res18,
             (TKeyInitializer<unsigned_int_&&> *)(ulonglong)local_res8[0],(bool *)&local_res20);
  pDVar2 = (DWORD *)((longlong)local_res18[0] * 0x10 + *(longlong *)&this_00->field_0x0);
LAB_14316fb7f:
  *(bool *)(pDVar2 + 1) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014316fb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnAfterFork @ 143170c20

void __thiscall FHttpManager::OnAfterFork(FHttpManager *this)

{
  return;
}

// OnBeforeFork @ 143170de0

void __thiscall FHttpManager::OnBeforeFork(FHttpManager *this)

{
  Flush(this,Default);
  return;
}

// OnEndFramePostFork @ 143171270

void __thiscall FHttpManager::OnEndFramePostFork(FHttpManager *this)

{
  return;
}

// RecordMaxTimeToWaitInQueue @ 143177550

void __thiscall FHttpManager::RecordMaxTimeToWaitInQueue(FHttpManager *this,float param_1)

{
  atomic<float> aVar1;
  
  aVar1 = (this->HttpStats).MaxTimeToWaitInQueue;
  if ((float)aVar1 <= param_1) {
    aVar1 = (atomic<float>)param_1;
  }
  LOCK();
  (this->HttpStats).MaxTimeToWaitInQueue = aVar1;
  UNLOCK();
  return;
}

// RecordPlatformStats @ 143177570

void __thiscall FHttpManager::RecordPlatformStats(FHttpManager *this,FHttpStatsPlatform *param_1)

{
  ulong64 uVar1;
  TOptional<FHttpStatsPlatform> *pTVar2;
  
  pTVar2 = &(this->HttpStats).PlatformStats;
  if ((TOptional<FHttpStatsPlatform> *)param_1 != pTVar2) {
    uVar1 = (param_1->MemoryPoolConnection).MaxInUseSize;
    (pTVar2->TypedValue).MemoryPoolConnection.PoolSize = (param_1->MemoryPoolConnection).PoolSize;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolConnection.MaxInUseSize = uVar1;
    uVar1 = (param_1->MemoryPoolSsl).PoolSize;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolConnection.CurrentInUseSize =
         (param_1->MemoryPoolConnection).CurrentInUseSize;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolSsl.PoolSize = uVar1;
    uVar1 = (param_1->MemoryPoolSsl).CurrentInUseSize;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolSsl.MaxInUseSize =
         (param_1->MemoryPoolSsl).MaxInUseSize;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolSsl.CurrentInUseSize = uVar1;
    uVar1 = (param_1->MemoryPoolNet).MaxInUseSize;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolNet.PoolSize =
         (param_1->MemoryPoolNet).PoolSize;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolNet.MaxInUseSize = uVar1;
    (this->HttpStats).PlatformStats.TypedValue.MemoryPoolNet.CurrentInUseSize =
         (param_1->MemoryPoolNet).CurrentInUseSize;
    (this->HttpStats).PlatformStats.bIsSet = true;
  }
  return;
}

// RecordStatRequestsInFlight @ 1431775b0

void __thiscall FHttpManager::RecordStatRequestsInFlight(FHttpManager *this,uint param_1)

{
  atomic<unsigned_int> aVar1;
  
  LOCK();
  (this->HttpStats).RequestsInFlight = (atomic<int>)param_1;
  UNLOCK();
  aVar1 = (this->HttpStats).MaxRequestsInFlight;
  if ((uint)aVar1 < param_1) {
    aVar1 = (atomic<unsigned_int>)param_1;
  }
  LOCK();
  (this->HttpStats).MaxRequestsInFlight = aVar1;
  UNLOCK();
  return;
}

// RecordStatRequestsInQueue @ 1431775e0

void __thiscall FHttpManager::RecordStatRequestsInQueue(FHttpManager *this,uint param_1)

{
  atomic<unsigned_int> aVar1;
  
  LOCK();
  (this->HttpStats).RequestsInQueue = (atomic<int>)param_1;
  UNLOCK();
  aVar1 = (this->HttpStats).MaxRequestsInQueue;
  if ((uint)aVar1 < param_1) {
    aVar1 = (atomic<unsigned_int>)param_1;
  }
  LOCK();
  (this->HttpStats).MaxRequestsInQueue = aVar1;
  UNLOCK();
  return;
}

// RecordStatTimeToConnect @ 143177610

void __thiscall FHttpManager::RecordStatTimeToConnect(FHttpManager *this,float param_1)

{
  atomic<float> aVar1;
  
  aVar1 = (this->HttpStats).MaxTimeToConnect;
  if ((float)aVar1 <= param_1) {
    aVar1 = (atomic<float>)param_1;
  }
  LOCK();
  (this->HttpStats).MaxTimeToConnect = aVar1;
  UNLOCK();
  return;
}

// ReloadFlushTimeLimits @ 143177d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpManager::ReloadFlushTimeLimits(FHttpManager *this)

{
  double dVar1;
  FHttpFlushTimeLimit *pFVar2;
  FHttpFlushTimeLimit *pFVar3;
  FHttpFlushTimeLimit *pFVar4;
  FHttpFlushTimeLimit *pFVar5;
  char cVar6;
  wchar_t *pwVar7;
  char local_res8 [8];
  TPairInitializer<EHttpFlushReason_const_&,FHttpManager::FHttpFlushTimeLimit_const_&> local_res10;
  FHttpFlushTimeLimit *local_res20;
  FHttpFlushTimeLimit *local_a8;
  FHttpFlushTimeLimit *local_a0;
  char *local_98;
  FHttpFlushTimeLimit **local_90;
  
  TSet<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>,TDefaultMapHashableKeyFuncs<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,0>,FDefaultSetAllocator>
  ::Reset(&this->FlushTimeLimitsMap);
  pFVar5 = __real_4010000000000000;
  pFVar4 = __real_4000000000000000;
  pFVar3 = __real_3fa999999999999a;
  pFVar2 = __real_bff0000000000000;
  dVar1 = __real_3fe0000000000000;
  local_98 = local_res8;
  cVar6 = '\0';
  local_90 = &local_a8;
  do {
    local_res10.Value = pFVar4;
    local_res20 = pFVar5;
    local_res8[0] = cVar6;
    if (cVar6 == '\0') {
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushSoftTimeLimitDefault",(double *)&local_res10.Value,
                 &GEngineIni);
      pwVar7 = L"FlushHardTimeLimitDefault";
LAB_143177f71:
      FConfigCacheIni::GetDouble(GConfig,L"HTTP",pwVar7,(double *)&local_res20,&GEngineIni);
    }
    else if (cVar6 == '\x01') {
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushSoftTimeLimitShutdown",(double *)&local_res10.Value,
                 &GEngineIni);
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushHardTimeLimitShutdown",(double *)&local_res20,&GEngineIni);
      if ((0.0 <= (double)local_res20) &&
         (((double)local_res10.Value < 0.0 || ((double)local_res20 <= (double)local_res10.Value))))
      {
        if ((2 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        if ((double)local_res20 <= 0.0) {
          local_res20 = pFVar3;
          local_res10.Value = (FHttpFlushTimeLimit *)0x0;
        }
        else {
          local_res10.Value = (FHttpFlushTimeLimit *)((double)local_res20 * dVar1);
        }
      }
    }
    else if (cVar6 == '\x02') {
      local_res10.Value = pFVar2;
      local_res20 = pFVar2;
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushSoftTimeLimitFullFlush",(double *)&local_res10.Value,
                 &GEngineIni);
      pwVar7 = L"FlushHardTimeLimitFullFlush";
      goto LAB_143177f71;
    }
    local_a8 = local_res10.Value;
    local_a0 = local_res20;
    TSet<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>,TDefaultMapHashableKeyFuncs<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EHttpFlushReason_const_&,FHttpManager::FHttpFlushTimeLimit_const_&>_>
              (&this->FlushTimeLimitsMap,&local_res10,(bool *)&local_98);
    cVar6 = cVar6 + '\x01';
    if (cVar6 == '\x03') {
      return;
    }
  } while( true );
}

// RemoveHttpThreadTask @ 1431785e0

void __thiscall
FHttpManager::RemoveHttpThreadTask(FHttpManager *this,TSharedPtr<IHttpTaskTimerHandle,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Thread == (FHttpThreadBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                       ,0x165,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->Object == (IHttpTaskTimerHandle *)0x0) {
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
  (**(code **)((longlong)*param_1->Object + 8))(param_1->Object,this->Thread);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveRequest @ 143178670

void __thiscall FHttpManager::RemoveRequest(FHttpManager *this,TSharedRef<IHttpRequest,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->RequestLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TArray<TSharedRef<IHttpRequest,1>,TSizedDefaultAllocator<32>_>::Remove(&this->Requests,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001431786b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetCorrelationIdMethod @ 14317dd80

void __thiscall
FHttpManager::SetCorrelationIdMethod(FHttpManager *this,TFunction<FString___cdecl(void)> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  longlong *plVar17;
  
  if (*(longlong *)param_1 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCorrelationIdMethod",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                        ,0xf5,L"");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar13 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined4 *)&this->CorrelationIdMethod;
  uVar3 = *(undefined4 *)&(this->CorrelationIdMethod).field_0x4;
  uVar4 = *(undefined4 *)&(this->CorrelationIdMethod).field_0x8;
  uVar5 = *(undefined4 *)&(this->CorrelationIdMethod).field_0xc;
  uVar6 = *(undefined4 *)&(this->CorrelationIdMethod).field_0x10;
  uVar7 = *(undefined4 *)&(this->CorrelationIdMethod).field_0x14;
  uVar8 = *(undefined4 *)&(this->CorrelationIdMethod).field_0x18;
  uVar9 = *(undefined4 *)&(this->CorrelationIdMethod).field_0x1c;
  uVar14 = *(undefined8 *)&(this->CorrelationIdMethod).field_0x20;
  uVar15 = *(undefined8 *)&(this->CorrelationIdMethod).field_0x28;
  *(undefined8 *)&this->CorrelationIdMethod = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CorrelationIdMethod).field_0x8 = uVar13;
  uVar10 = *(undefined4 *)&param_1->field_0x14;
  uVar11 = *(undefined4 *)&param_1->field_0x18;
  uVar12 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x14 = uVar10;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x18 = uVar11;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x1c = uVar12;
  uVar10 = *(undefined4 *)&param_1->field_0x24;
  uVar11 = *(undefined4 *)&param_1->field_0x28;
  uVar12 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x24 = uVar10;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x28 = uVar11;
  *(undefined4 *)&(this->CorrelationIdMethod).field_0x2c = uVar12;
  *(undefined4 *)param_1 = uVar2;
  *(undefined4 *)&param_1->field_0x4 = uVar3;
  *(undefined4 *)&param_1->field_0x8 = uVar4;
  *(undefined4 *)&param_1->field_0xc = uVar5;
  *(undefined4 *)&param_1->field_0x10 = uVar6;
  *(undefined4 *)&param_1->field_0x14 = uVar7;
  *(undefined4 *)&param_1->field_0x18 = uVar8;
  *(undefined4 *)&param_1->field_0x1c = uVar9;
  *(undefined8 *)&param_1->field_0x20 = uVar14;
  *(undefined8 *)&param_1->field_0x28 = uVar15;
  if (*(longlong *)param_1 != 0) {
    plVar17 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return;
}

// SetRequestAddedDelegate @ 14317ef60

void __thiscall
FHttpManager::SetRequestAddedDelegate
          (FHttpManager *this,
          TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->RequestAddedDelegate,param_1);
  return;
}

// SetRequestCompletedDelegate @ 14317ef80

void __thiscall
FHttpManager::SetRequestCompletedDelegate
          (FHttpManager *this,
          TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->RequestCompletedDelegate,param_1);
  return;
}

// ShouldDisableFailedLog @ 143181d70

bool __thiscall
FHttpManager::ShouldDisableFailedLog(FHttpManager *this,TStringView<wchar_t> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  lpCriticalSection = &this->UrlPatternsToDisableFailedLogCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->UrlPatternsToDisableFailedLog).ArrayNum;
  pFVar6 = (this->UrlPatternsToDisableFailedLog).AllocatorInstance.Data;
  pFVar4 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->UrlPatternsToDisableFailedLog).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar4) {
      bVar5 = false;
      goto LAB_143181e58;
    }
    local_48.DataPtr = *(wchar_t **)pFVar6;
    iVar3 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iVar3 = 0;
    }
    iVar2 = param_1->Size;
    local_48._12_4_ = uStack_5c;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    local_38.DataPtr = param_1->DataPtr + ((longlong)iVar2 - (longlong)iVar3);
    local_38._12_4_ = uStack_4c;
    local_38.Size = iVar3;
    iVar3 = UE::String::FindFirst(&local_38,&local_48,CaseSensitive);
    if (iVar3 != -1) break;
    pFVar6 = pFVar6 + 0x10;
  }
  bVar5 = true;
LAB_143181e58:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar5;
}

// ShouldLogResponse @ 143181fa0

bool __thiscall FHttpManager::ShouldLogResponse(FHttpManager *this,TStringView<wchar_t> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  lpCriticalSection = &this->UrlPatternsToLogResponseCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->UrlPatternsToLogResponse).ArrayNum;
  pFVar6 = (this->UrlPatternsToLogResponse).AllocatorInstance.Data;
  pFVar4 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->UrlPatternsToLogResponse).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar4) {
      bVar5 = false;
      goto LAB_143182088;
    }
    local_48.DataPtr = *(wchar_t **)pFVar6;
    iVar3 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iVar3 = 0;
    }
    iVar2 = param_1->Size;
    local_48._12_4_ = uStack_5c;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    local_38.DataPtr = param_1->DataPtr + ((longlong)iVar2 - (longlong)iVar3);
    local_38._12_4_ = uStack_4c;
    local_38.Size = iVar3;
    iVar3 = UE::String::FindFirst(&local_38,&local_48,CaseSensitive);
    if (iVar3 != -1) break;
    pFVar6 = pFVar6 + 0x10;
  }
  bVar5 = true;
LAB_143182088:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar5;
}

// Shutdown @ 1431824b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpManager::Shutdown(FHttpManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar6;
  int iVar7;
  void *local_38 [2];
  
  pTVar6 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*(longlong *)CVarHttpUrlPatternsToLogResponse._padding_ + 0xe8))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear(pTVar6);
  pTVar6 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*(longlong *)CVarHttpUrlPatternsToDisableFailedLog._padding_ + 0xe8))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear(pTVar6);
  pTVar6 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*(longlong *)CVarHttpUrlPatternsToMockResponse._padding_ + 0xe8))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear(pTVar6);
  lpCriticalSection = &this->RequestLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((((2 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) &&
      (bVar5 = FApp::IsUnattended(), !bVar5)) && ((this->Requests).ArrayNum != 0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  iVar7 = 0;
  do {
    if ((iVar7 < 0) || ((this->Requests).ArrayNum <= iVar7)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestAddedDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestCompletedDelegate);
      Flush(this,Shutdown);
      return;
    }
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->Requests).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar7 * 0x10 + 8);
    plVar3 = *(longlong **)(pFVar1 + (longlong)iVar7 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar3 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*plVar3 + 0x160))(plVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (((2 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) &&
       (bVar5 = FApp::IsUnattended(), !bVar5)) {
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)*plVar3)(plVar3);
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    iVar7 = iVar7 + 1;
  } while( true );
}

// SupportsDynamicProxy @ 1431860a0

bool __thiscall FHttpManager::SupportsDynamicProxy(FHttpManager *this)

{
  return false;
}

// Tick @ 1431879f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHttpManager::Tick(FHttpManager *this,float param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  TSharedRef<IHttpRequest,1> *pTVar2;
  atomic<__int64> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  atomic<int> aVar9;
  TConsoleVariableData<bool> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  atomic<int> aVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FHttpManager::Tick(float)_::_2_::FStat_STAT_FHttpManager_Tick>
  FVar16;
  IHttpRequest *pIVar17;
  longlong lVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  ulonglong uVar22;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar23;
  IHttpRequest *pIVar24;
  ulonglong uVar25;
  longlong *plVar26;
  FName FVar27;
  IHttpRequest *pIVar28;
  int iVar29;
  IHttpRequest *pIVar30;
  int iVar31;
  longlong *plVar32;
  bool bVar33;
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  TSharedRef<IHttpRequest,1> local_c0;
  FColor_u_0 local_b0;
  uint local_ac;
  longlong *local_a8;
  ulonglong local_a0;
  FName local_98;
  longlong *local_90;
  FName local_88;
  FName local_80;
  LPCRITICAL_SECTION local_70;
  longlong *local_68;
  longlong *local_60;
  FName local_58;
  FName local_50 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FHttpManager_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FHttpManager::Tick(float)_::_2_::FStat_STAT_FHttpManager_Tick>
         )0x0) {
      pFVar15 = ::FName::FName(&local_58,"STAT_FHttpManager_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpManager_Tick,*pFVar15,
                 L"STAT_FHttpManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_FHttpManager_Tick;
  if (StatPtr_STAT_FHttpManager_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FHttpManager::Tick(float)_::_2_::FStat_STAT_FHttpManager_Tick>
       )0x0) {
    pFVar15 = ::FName::FName(local_50,"STAT_FHttpManager_Tick");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FHttpManager::Tick(float)_::_2_::FStat_STAT_FHttpManager_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FHttpManager_Tick,*pFVar15,
                          L"STAT_FHttpManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar16;
  bVar8 = false;
  bVar6 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar33 = false;
  bVar11 = false;
  if ((FVar27.ComparisonIndex.Value.Value == 0) &&
     (bVar5 = bVar6, bVar7 = bVar8, FVar27.Number == 0)) {
LAB_143187b67:
    bVar8 = bVar33;
    bVar6 = bVar11;
    bVar11 = false;
    local_88 = local_80;
    FVar27 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b0._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar6 = true;
      bVar33 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_98.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                   ,0x1ed);
        bVar8 = true;
        bVar6 = true;
        bVar33 = true;
        bVar11 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143187b67;
    local_88 = FVar27;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar11 = true;
  }
  pFVar1 = &this->GameThreadTickerLock;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  FTSTicker::Tick(&this->GameThreadTicker,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  if (this->Thread != (FHttpThreadBase *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->RequestLock;
    local_70 = lpCriticalSection;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection);
      iVar29 = (this->Requests).ArrayNum;
      pFVar23 = (this->Requests).AllocatorInstance.Data;
      pFVar20 = pFVar23 + (longlong)iVar29 * 0x10;
      while( true ) {
        if ((this->Requests).ArrayNum != iVar29) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedRef<IHttpRequest,1>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (pFVar23 == pFVar20) break;
        (**(code **)(**(longlong **)pFVar23 + 0x128))(*(longlong **)pFVar23,param_1);
        pFVar23 = pFVar23 + 0x10;
      }
      LeaveCriticalSection(lpCriticalSection);
      pFVar1 = &this->CompletedRequestLock;
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        (**(code **)(this->Thread->_padding_ + 0x50))(this->Thread,&local_a8);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        uVar19 = (ulonglong)(int)(uint)local_a0;
        local_ac = (uint)local_a0;
        local_60 = local_a8 + uVar19;
        uVar25 = uVar19;
        plVar32 = local_a8;
        while( true ) {
          plVar26 = local_60;
          pIVar28 = (IHttpRequest *)0x0;
          local_90 = plVar32;
          if ((int)uVar19 != (int)uVar25) {
            local_c8[0] = 0;
            `TCheckedPointerIterator<FHttpRequestCommon_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_c8);
          }
          FVar27 = local_88;
          if (plVar32 == plVar26) break;
          plVar26 = (longlong *)*plVar32;
          pIVar17 = (IHttpRequest *)plVar26[2];
          pIVar24 = pIVar17;
          pIVar30 = pIVar28;
          if (pIVar17 != (IHttpRequest *)0x0) {
            aVar9 = *(atomic<int> *)&pIVar17->field_0x8;
            do {
              pIVar24 = pIVar28;
              if (aVar9 == (atomic<int>)0x0) goto LAB_143187cb4;
              LOCK();
              aVar14 = *(atomic<int> *)&pIVar17->field_0x8;
              bVar33 = aVar9 == aVar14;
              if (bVar33) {
                *(atomic<int> *)&pIVar17->field_0x8 = (atomic<int>)((int)aVar9 + 1);
                aVar14 = aVar9;
              }
              UNLOCK();
              aVar9 = aVar14;
            } while (!bVar33);
            pIVar24 = pIVar17;
            pIVar30 = *(IHttpRequest **)(plVar26 + 1);
          }
LAB_143187cb4:
          pIVar17 = (IHttpRequest *)&pIVar30->field_0x8;
          if (pIVar30 == (IHttpRequest *)0x0) {
            pIVar17 = pIVar28;
          }
          local_68 = plVar26;
          if ((pIVar17 != (IHttpRequest *)(plVar26 + 1)) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SharedThis.Get() == this",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x67f,L""), bVar33)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          if ((pIVar30 == (IHttpRequest *)0x0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x416,L""), bVar33)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          local_c0.Object = pIVar30;
          local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar24
          ;
          if ((pIVar30 == (IHttpRequest *)0x0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x26c,L""), bVar33)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          pTVar10 = CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread.Ref;
          bVar33 = IsInParallelGameThread();
          if (bVar33) {
LAB_143187d7c:
            pIVar17 = pIVar28;
          }
          else {
            bVar33 = IsInGameThread();
            pIVar17 = (IHttpRequest *)&DAT_00000001;
            if (bVar33) goto LAB_143187d7c;
          }
          if ((pTVar10->ShadowedValue[(longlong)&pIVar17->field_0x0] == false) ||
             (cVar13 = (**(code **)(*plVar26 + 0x140))(plVar26), cVar13 == '\0')) {
            EnterCriticalSection(lpCriticalSection);
            pTVar2 = (TSharedRef<IHttpRequest,1> *)(this->Requests).AllocatorInstance.Data;
            if ((pTVar2 <= &local_c0) &&
               ((&local_c0 < pTVar2 + (this->Requests).ArrayMax &&
                (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar33)))) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
            iVar29 = (this->Requests).ArrayNum;
            lVar18 = (longlong)iVar29;
            if (iVar29 != 0) {
              pFVar23 = (this->Requests).AllocatorInstance.Data;
              uVar22 = 0;
              bVar33 = *(IHttpRequest **)pFVar23 != local_c0.Object;
              uVar25 = uVar22;
              pIVar28 = local_c0.Object;
              uVar19 = uVar22;
              do {
                iVar29 = (int)uVar19;
                uVar25 = uVar25 + 1;
                uVar19 = (ulonglong)(iVar29 + 1);
                if ((longlong)uVar25 < lVar18) {
                  pFVar20 = pFVar23 + uVar25 * 0x10;
                  do {
                    if (bVar33 != (*(IHttpRequest **)pFVar20 != pIVar28)) break;
                    uVar19 = (ulonglong)((int)uVar19 + 1);
                    uVar25 = uVar25 + 1;
                    pFVar20 = pFVar20 + 0x10;
                  } while ((longlong)uVar25 < lVar18);
                }
                iVar31 = (int)uVar19 - iVar29;
                if (bVar33 == false) {
                  DestructItems<TSharedRef<IHttpRequest,1>,int>
                            ((TSharedRef<IHttpRequest,1> *)(pFVar23 + (longlong)iVar29 * 0x10),
                             iVar31);
                  pIVar28 = local_c0.Object;
                }
                else {
                  iVar21 = (int)uVar22;
                  if (iVar21 != iVar29) {
                    memmove(pFVar23 + (longlong)iVar21 * 0x10,pFVar23 + (longlong)iVar29 * 0x10,
                            (longlong)iVar31 << 4);
                    pIVar28 = local_c0.Object;
                  }
                  uVar22 = (ulonglong)(uint)(iVar21 + iVar31);
                }
                bVar33 = (bool)(bVar33 ^ 1);
              } while ((longlong)uVar25 < lVar18);
              (this->Requests).ArrayNum = (int)uVar22;
              lpCriticalSection = local_70;
              plVar26 = local_68;
              plVar32 = local_90;
            }
            LeaveCriticalSection(lpCriticalSection);
          }
          cVar13 = (**(code **)(*plVar26 + 0x140))(plVar26);
          if (cVar13 == '\0') {
            MarkCurrentThreadCompletingRequest(this,true);
            (**(code **)(*plVar26 + 0x168))(plVar26);
            BroadcastHttpRequestCompleted(this,&local_c0);
            MarkCurrentThreadCompletingRequest(this,false);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.SharedReferenceCount.ReferenceController);
          uVar19 = local_a0 & 0xffffffff;
          plVar32 = plVar32 + 1;
          uVar25 = (ulonglong)local_ac;
        }
        bVar5 = bVar6;
        bVar7 = bVar8;
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free(local_a8);
        }
        goto LAB_143187f6d;
      }
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
LAB_143187f6d:
  aVar3 = (this->HttpStats).TotalDownloadedBytes;
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_RequestsInQueue.Name,_GCsvStat_RequestsInQueue.CategoryIndex,
             (int)(this->HttpStats).RequestsInQueue,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_MaxRequestsInQueue.Name,_GCsvStat_MaxRequestsInQueue.CategoryIndex,
             (int)(this->HttpStats).MaxRequestsInQueue,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_RequestsInFlight.Name,_GCsvStat_RequestsInFlight.CategoryIndex,
             (int)(this->HttpStats).RequestsInFlight,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_MaxRequestsInFlight.Name,_GCsvStat_MaxRequestsInFlight.CategoryIndex,
             (int)(this->HttpStats).MaxRequestsInFlight,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_MaxTimeToWaitInQueue.Name,_GCsvStat_MaxTimeToWaitInQueue.CategoryIndex,
             (int)(float)(this->HttpStats).MaxTimeToWaitInQueue,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_DownloadedMB.Name,_GCsvStat_DownloadedMB.CategoryIndex,
             (int)((longlong)aVar3 >> 0x14),Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_BandwidthMbps.Name,_GCsvStat_BandwidthMbps.CategoryIndex,
             SUB84((this->HttpStats).BandwidthMbps,0),Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_DurationMsAvg.Name,_GCsvStat_DurationMsAvg.CategoryIndex,
             SUB84((this->HttpStats).HttpDurationMsAvg,0),Set);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return true;
}

// UpdateConfigs @ 14318a620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpManager::UpdateConfigs(FHttpManager *this)

{
  double dVar1;
  FHttpFlushTimeLimit *pFVar2;
  FHttpFlushTimeLimit *pFVar3;
  FHttpFlushTimeLimit *pFVar4;
  FHttpFlushTimeLimit *pFVar5;
  char cVar6;
  wchar_t *pwVar7;
  char local_res8 [8];
  TPairInitializer<EHttpFlushReason_const_&,FHttpManager::FHttpFlushTimeLimit_const_&> local_res10;
  FHttpFlushTimeLimit *local_res20;
  FHttpFlushTimeLimit *local_a8;
  FHttpFlushTimeLimit *local_a0;
  char *local_98;
  FHttpFlushTimeLimit **local_90;
  
  UE::Core::FURLRequestFilter::UpdateConfig
            (&this->URLRequestFilter,L"Online.HttpManager",&GEngineIni);
  TSet<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>,TDefaultMapHashableKeyFuncs<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,0>,FDefaultSetAllocator>
  ::Reset(&this->FlushTimeLimitsMap);
  pFVar5 = __real_4010000000000000;
  pFVar4 = __real_4000000000000000;
  pFVar3 = __real_3fa999999999999a;
  pFVar2 = __real_bff0000000000000;
  dVar1 = __real_3fe0000000000000;
  local_98 = local_res8;
  cVar6 = '\0';
  local_90 = &local_a8;
  do {
    local_res10.Value = pFVar4;
    local_res20 = pFVar5;
    local_res8[0] = cVar6;
    if (cVar6 == '\0') {
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushSoftTimeLimitDefault",(double *)&local_res10.Value,
                 &GEngineIni);
      pwVar7 = L"FlushHardTimeLimitDefault";
LAB_14318a841:
      FConfigCacheIni::GetDouble(GConfig,L"HTTP",pwVar7,(double *)&local_res20,&GEngineIni);
    }
    else if (cVar6 == '\x01') {
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushSoftTimeLimitShutdown",(double *)&local_res10.Value,
                 &GEngineIni);
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushHardTimeLimitShutdown",(double *)&local_res20,&GEngineIni);
      if ((0.0 <= (double)local_res20) &&
         (((double)local_res10.Value < 0.0 || ((double)local_res20 <= (double)local_res10.Value))))
      {
        if ((2 < (byte)LogHttp._0_1_) && (PRIVATE_GIsRunningCommandlet == false)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        if ((double)local_res20 <= 0.0) {
          local_res20 = pFVar3;
          local_res10.Value = (FHttpFlushTimeLimit *)0x0;
        }
        else {
          local_res10.Value = (FHttpFlushTimeLimit *)((double)local_res20 * dVar1);
        }
      }
    }
    else if (cVar6 == '\x02') {
      local_res10.Value = pFVar2;
      local_res20 = pFVar2;
      FConfigCacheIni::GetDouble
                (GConfig,L"HTTP",L"FlushSoftTimeLimitFullFlush",(double *)&local_res10.Value,
                 &GEngineIni);
      pwVar7 = L"FlushHardTimeLimitFullFlush";
      goto LAB_14318a841;
    }
    local_a8 = local_res10.Value;
    local_a0 = local_res20;
    TSet<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>,TDefaultMapHashableKeyFuncs<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EHttpFlushReason_const_&,FHttpManager::FHttpFlushTimeLimit_const_&>_>
              (&this->FlushTimeLimitsMap,&local_res10,(bool *)&local_98);
    cVar6 = cVar6 + '\x01';
    if (cVar6 == '\x03') {
      if (this->Thread != (FHttpThreadBase *)0x0) {
        (**(code **)(this->Thread->_padding_ + 0x58))();
      }
      return;
    }
  } while( true );
}

// UpdateUrlPatternsToDisableFailedLog @ 14318ad60

void __thiscall
FHttpManager::UpdateUrlPatternsToDisableFailedLog(FHttpManager *this,IConsoleVariable *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FString local_18;
  
  lpCriticalSection = &this->UrlPatternsToDisableFailedLogCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    plVar1 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x38))(param_1);
    (**(code **)(*plVar1 + 0xd8))(plVar1,&local_18);
    ::FString::ParseIntoArray(&local_18,&this->UrlPatternsToDisableFailedLog,L" ",true);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateUrlPatternsToLogResponse @ 14318ae00

void __thiscall
FHttpManager::UpdateUrlPatternsToLogResponse(FHttpManager *this,IConsoleVariable *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FString local_18;
  
  lpCriticalSection = &this->UrlPatternsToLogResponseCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    plVar1 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x38))(param_1);
    (**(code **)(*plVar1 + 0xd8))(plVar1,&local_18);
    ::FString::ParseIntoArray(&local_18,&this->UrlPatternsToLogResponse,L" ",true);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateUrlPatternsToMockResponse @ 14318aea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FHttpManager::UpdateUrlPatternsToMockResponse(FHttpManager *this,IConsoleVariable *param_1)

{
  uint uVar1;
  TArray<TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FString *lpCriticalSection;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  size_t sVar11;
  uchar *puVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  int iVar19;
  uint uVar20;
  ForAnyElementType this_00;
  int *piVar21;
  undefined1 auStackY_358 [32];
  undefined1 local_318;
  undefined1 local_317 [7];
  FString local_310;
  FString local_300;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c0;
  uint local_2b0;
  FString local_2a8;
  FScriptContainerElement *local_298;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  TPairInitializer<FString_&&,FString_&&> local_250;
  FString local_240;
  wchar_t *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FString local_1f8;
  FString *local_1e8;
  FString *local_1e0;
  FString local_1d8;
  FString local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  int local_178;
  FUtf8String local_170;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_160;
  FScriptContainerElement local_108 [128];
  ForAnyElementType local_88;
  FScriptContainerElement *local_80;
  int local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_250.Value = (FString *)&this->UrlPatternsToMockResponseCriticalSection;
  if ((FWindowsRecursiveMutex *)local_250.Value == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)local_250.Value);
  plVar10 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x38))(param_1);
  (**(code **)(*plVar10 + 0xd8))(plVar10,&local_1c8);
  local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.ArrayNum = 0;
  local_2c0.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_1c8,&local_2c0,L" ",true);
  pTVar2 = &this->UrlPatternsToMockResponse;
  DestructItems<TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>,int>
            ((TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse> *)
             (pTVar2->AllocatorInstance).Data,(this->UrlPatternsToMockResponse).ArrayNum);
  piVar21 = &(this->UrlPatternsToMockResponse).ArrayMax;
  (this->UrlPatternsToMockResponse).ArrayNum = 0;
  if (*piVar21 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&pTVar2->AllocatorInstance,0,piVar21);
  }
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  uVar14 = (ulonglong)local_2c0.ArrayNum;
  pFVar15 = local_2c0.AllocatorInstance.Data + uVar14 * 0x10;
  local_2b0 = local_2c0.ArrayNum;
  this_00.Data = local_2c0.AllocatorInstance.Data;
  local_298 = pFVar15;
  do {
    if (local_2c0.ArrayNum != (int)uVar14) {
      local_318 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_318)
      ;
    }
    if (this_00.Data == pFVar15) {
      DestructItems<FString,int>((FString *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum);
      lpCriticalSection = local_250.Value;
      if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.ArrayNum = 0;
    local_2e0.ArrayMax = 0;
    ::FString::ParseIntoArray((FString *)this_00.Data,&local_2e0,L"->",true);
    local_228 = L"++";
    iStack_220 = 2;
    if (local_2e0.ArrayNum == 2) {
      iVar9 = 0;
      local_178 = 0;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
      local_160.Elements._0_8_ = 0;
      local_160.Elements._8_8_ = 0;
      local_160.Elements._32_8_ = 0;
      local_160.Elements._40_8_ = uVar5;
      local_160.Elements._48_8_ = uVar6;
      local_160.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_160.HashSize = 0;
      local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_310.Data.ArrayNum = *(int *)(local_2e0.AllocatorInstance.Data + 0x18);
      lVar16 = (longlong)local_310.Data.ArrayNum;
      _Src = *(void **)(local_2e0.AllocatorInstance.Data + 0x10);
      if (local_310.Data.ArrayNum == 0) {
        local_310.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_310.Data.ArrayNum,0,(ForAnyElementType *)&local_310,
                   local_310.Data.ArrayNum,&local_310.Data.ArrayMax);
        memcpy(local_310.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
      }
      pwVar18 = local_228;
      uVar4._4_4_ = uStack_21c;
      uVar4._0_4_ = iStack_220;
      local_1b8.DataPtr = local_228;
      iStack_210 = local_310.Data.ArrayNum + -1;
      if (local_310.Data.ArrayNum == 0) {
        iStack_210 = 0;
      }
      local_1a8._12_4_ = uStack_20c;
      local_1a8.Size = iStack_210;
      local_218 = local_310.Data.AllocatorInstance.Data;
      local_1b8._8_8_ = uVar4;
      local_1a8.DataPtr = (wchar_t *)local_310.Data.AllocatorInstance.Data;
      iVar8 = UE::String::FindFirst(&local_1a8,&local_1b8,CaseSensitive);
      if (iVar8 == -1) {
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_310.Data.ArrayNum != 0) {
          FVar17.Data = local_310.Data.AllocatorInstance.Data;
        }
        local_178 = _wtoi((wchar_t *)FVar17.Data);
      }
      else {
        iVar13 = local_310.Data.ArrayNum + -1;
        if (local_310.Data.ArrayNum == 0) {
          iVar13 = iVar9;
        }
        if (iVar8 < iVar13) {
          iVar13 = iVar8;
        }
        iVar19 = iVar9;
        if (0 < iVar13) {
          iVar19 = iVar13;
        }
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_310.Data.ArrayNum != 0) {
          FVar17.Data = local_310.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_240,(wchar_t *)FVar17.Data,iVar19);
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_240.Data.ArrayNum != 0) {
          FVar17.Data = local_240.Data.AllocatorInstance.Data;
        }
        local_178 = _wtoi((wchar_t *)FVar17.Data);
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        ::FString::RightChop(&local_310,&local_300,iVar8 + 2);
        local_208 = local_300.Data.AllocatorInstance.Data;
        local_198.DataPtr = pwVar18;
        iStack_200 = local_300.Data.ArrayNum + -1;
        if (local_300.Data.ArrayNum == 0) {
          iStack_200 = iVar9;
        }
        local_188._12_4_ = uStack_1fc;
        local_188.Size = iStack_200;
        local_188.DataPtr = (wchar_t *)local_300.Data.AllocatorInstance.Data;
        local_198._8_8_ = uVar4;
        iVar8 = UE::String::FindFirst(&local_188,&local_198,CaseSensitive);
        if (iVar8 != -1) {
          ::FString::RightChop(&local_300,&local_1d8,iVar8 + 2);
          iVar13 = local_300.Data.ArrayNum + -1;
          if (local_300.Data.ArrayNum == 0) {
            iVar13 = iVar9;
          }
          if (iVar8 < iVar13) {
            iVar13 = iVar8;
          }
          if (0 < iVar13) {
            iVar9 = iVar13;
          }
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_300.Data.ArrayNum != 0) {
            FVar17.Data = local_300.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_2a8,(wchar_t *)FVar17.Data,iVar9);
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
          local_300.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data;
          local_300.Data.ArrayNum = local_2a8.Data.ArrayNum;
          local_300.Data.ArrayMax = local_2a8.Data.ArrayMax;
          local_2a8.Data.ArrayNum = 0;
          local_2a8.Data.ArrayMax = 0;
          local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.ArrayNum = 0;
          local_2d0.ArrayMax = 0;
          ::FString::ParseIntoArray(&local_1d8,&local_2d0,L",",true);
          iVar9 = local_2d0.ArrayNum;
          pFVar15 = local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayNum * 0x10;
          FVar17.Data = local_2d0.AllocatorInstance.Data;
          while( true ) {
            if (local_2d0.ArrayNum != iVar9) {
              local_317[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_317);
            }
            if (FVar17.Data == pFVar15) break;
            local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_280.Data.ArrayNum = 0;
            local_280.Data.ArrayMax = 0;
            local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_290.Data.ArrayNum = 0;
            local_290.Data.ArrayMax = 0;
            ::FString::FString(&local_1f8,L":");
            bVar7 = ::FString::Split((FString *)FVar17.Data,&local_1f8,&local_280,&local_290);
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              local_1e8 = &local_280;
              local_1e0 = &local_290;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                        (&local_160,&local_250,(bool *)&local_1e8);
            }
            if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
            }
            if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_280.Data.AllocatorInstance.Data);
            }
            FVar17.Data = FVar17.Data + 0x10;
          }
          DestructItems<FString,int>((FString *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum)
          ;
          uVar14 = (ulonglong)local_2b0;
          if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.AllocatorInstance.Data);
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
        }
        local_88.Data = (FScriptContainerElement *)0x0;
        if (local_300.Data.ArrayNum == 0) {
          pwVar18 = L"";
LAB_14318b38c:
          sVar11 = wcslen(pwVar18);
          local_78 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar18,(int)sVar11);
          uVar1 = local_78 + 1;
          uVar20 = uVar1;
          if (uVar1 < 0x81) {
            if (local_88.Data != (FScriptContainerElement *)0x0) {
              uVar20 = 0;
              goto LAB_14318b3c9;
            }
          }
          else {
LAB_14318b3c9:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_88,0,uVar20,1);
          }
          local_80 = local_108;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            local_80 = local_88.Data;
          }
          puVar12 = UE::Core::Private::Convert((uchar *)local_80,uVar1,pwVar18,(int)sVar11 + 1);
          if ((puVar12 == (uchar *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pwVar18 = (wchar_t *)local_300.Data.AllocatorInstance.Data;
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14318b38c;
          local_80 = (FScriptContainerElement *)0x0;
          local_78 = 0;
        }
        FUtf8String::AssignRange(&local_170,(uchar *)local_80,local_78);
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
      }
      piVar21 = &(this->UrlPatternsToMockResponse).ArrayMax;
      local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f0.ArrayNum = 0;
      local_2f0.ArrayMax = 0;
      if ((local_2e0.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::ParseIntoArray((FString *)local_2e0.AllocatorInstance.Data,&local_2f0,L"++",true);
      local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Data.ArrayNum = 0;
      local_270.Data.ArrayMax = 0;
      local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.Data.ArrayNum = 0;
      local_260.Data.ArrayMax = 0;
      if ((local_2f0.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)(local_2f0.AllocatorInstance.Data + 8) + -1;
      if (*(int *)(local_2f0.AllocatorInstance.Data + 8) == 0) {
        iVar9 = 0;
      }
      ::FString::AssignRange(&local_270,*(wchar_t **)local_2f0.AllocatorInstance.Data,iVar9);
      if (1 < local_2f0.ArrayNum) {
        iVar9 = *(int *)(local_2f0.AllocatorInstance.Data + 0x18) + -1;
        if (*(int *)(local_2f0.AllocatorInstance.Data + 0x18) == 0) {
          iVar9 = 0;
        }
        ::FString::AssignRange
                  (&local_260,*(wchar_t **)(local_2f0.AllocatorInstance.Data + 0x10),iVar9);
      }
      iVar9 = (this->UrlPatternsToMockResponse).ArrayNum;
      if (iVar9 == *piVar21) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x888,&pTVar2->AllocatorInstance,piVar21);
      }
      (this->UrlPatternsToMockResponse).ArrayNum = iVar9 + 1;
      pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x88;
      ::FString::FString((FString *)pFVar15,&local_270);
      ::FString::FString((FString *)(pFVar15 + 0x10),&local_260);
      *(undefined8 *)(pFVar15 + 0x28) = 0;
      *(int *)(pFVar15 + 0x20) = local_178;
      *(FScriptContainerElement **)(pFVar15 + 0x28) = local_170.Data.AllocatorInstance.Data;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar15 + 0x30) = local_170.Data.ArrayNum;
      *(int *)(pFVar15 + 0x34) = local_170.Data.ArrayMax;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)(pFVar15 + 0x38),&local_160);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
      if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.AllocatorInstance.Data);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      local_160.HashSize = 0;
      if (local_160.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_160.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_160.Elements);
      pFVar15 = local_298;
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
        pFVar15 = local_298;
      }
    }
    DestructItems<FString,int>((FString *)local_2e0.AllocatorInstance.Data,local_2e0.ArrayNum);
    if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.AllocatorInstance.Data);
    }
    this_00.Data = this_00.Data + 0x10;
  } while( true );
}

