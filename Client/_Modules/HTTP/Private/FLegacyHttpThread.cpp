// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 16

// FLegacyHttpThread @ 14314d7a0

/* WARNING: Enum "Type": Some values do not have unique names */

FLegacyHttpThread * __thiscall FLegacyHttpThread::FLegacyHttpThread(FLegacyHttpThread *this)

{
  uint *puVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar4;
  FUserAgentImpl *this_00;
  FString *pFVar5;
  FHttpModule *pFVar6;
  FString local_28;
  FString local_18;
  
  FHttpThreadBase::FHttpThreadBase((FHttpThreadBase *)this);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  (this->ExitRequest).Counter = 0;
  (this->Ticker).AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  aVar4 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
          FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar4 = 0;
  (this->Ticker).AddedElements.Head = aVar4;
  (this->Ticker).AddedElements.Tail = (FNode *)aVar4;
  (this->Ticker).CurrentTime = (atomic<double>)0x0;
  (this->Ticker).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ticker).Elements.ArrayNum = 0;
  (this->Ticker).Elements.ArrayMax = 0;
  ::FString::FString(&local_28,L"http-legacy");
  this_00 = FUserAgentImpl::Get();
  AcquireSRWLockExclusive((PSRWLOCK)this_00);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&(this_00->Builder).ProjectComments,&local_28);
  puVar1 = &(this_00->Builder).AgentVersion;
  *puVar1 = *puVar1 + 1;
  pFVar5 = FUserAgentImpl::BuildUserAgentString(this_00,&local_18);
  pFVar2 = &this_00->CachedUserAgent;
  if (pFVar2 != pFVar5) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->CachedUserAgent).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this_00->CachedUserAgent).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this_00);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar6 = FHttpModule::Get();
  this->HttpThreadActiveFrameTimeInSeconds = (double)pFVar6->HttpThreadActiveFrameTimeInSeconds;
  pFVar6 = FHttpModule::Get();
  this->HttpThreadActiveMinimumSleepTimeInSeconds =
       (double)pFVar6->HttpThreadActiveMinimumSleepTimeInSeconds;
  pFVar6 = FHttpModule::Get();
  this->HttpThreadIdleFrameTimeInSeconds = (double)pFVar6->HttpThreadIdleFrameTimeInSeconds;
  pFVar6 = FHttpModule::Get();
  this->HttpThreadIdleMinimumSleepTimeInSeconds =
       (double)pFVar6->HttpThreadIdleMinimumSleepTimeInSeconds;
  if (4 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  return this;
}

// ~FLegacyHttpThread @ 143150be0

void __thiscall FLegacyHttpThread::~FLegacyHttpThread(FLegacyHttpThread *this)

{
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FTSTicker::~FTSTicker(&this->Ticker);
  FHttpThreadBase::~FHttpThreadBase((FHttpThreadBase *)this);
  return;
}

// AddHttpThreadTask @ 1431545b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<IHttpTaskTimerHandle,1> * __thiscall
FLegacyHttpThread::AddHttpThreadTask
          (FLegacyHttpThread *this,TSharedPtr<IHttpTaskTimerHandle,1> *__return_storage_ptr__,
          TFunction<void___cdecl(void)> *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<IHttpTaskTimerHandle,1> *pTVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  FLegacyHttpThread *local_98;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_60 = *(longlong **)&param_1->field_0x28;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  local_88 = *(longlong *)param_1;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_1->field_0x20;
  local_78 = *(longlong *)&param_1->field_0x10;
  uStack_70 = *(undefined8 *)&param_1->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  local_98 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_c8);
  local_b0 = &local_f0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x60,&local_f0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FLegacyHttpThread::AddHttpThreadTask'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[4] = local_98;
    puVar6[6] = local_88;
    puVar6[0xb] = local_60;
    local_60 = (longlong *)0x0;
    puVar6[8] = local_78;
    puVar6[9] = uStack_70;
    puVar6[10] = local_68;
    if (puVar6[6] != 0) {
      local_88 = 0;
    }
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  pTVar8 = FTSTicker::AddTicker
                     (&this->Ticker,&local_a8,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_f8,param_2)
  ;
  pTVar9 = ::operator_new(0x28);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IHttpTaskTimerHandle *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFHttpTaskTimerHandleFTSTicker___00_SharedPointerInternals__6B_
    ;
    pTVar12 = (pTVar8->WeakReferenceCount).ReferenceController;
    pFVar3 = pTVar8->Object;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (FElement *)0x0;
    pTVar9[1]._padding_ = (longlong)&___7FHttpTaskTimerHandleFTSTicker__6B_;
    *(FElement **)&pTVar9[1].SharedReferenceCount = pFVar3;
    pTVar9[2]._padding_ = (longlong)pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      paVar1 = &pTVar12->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
      }
    }
    if (pTVar9 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<IHttpTaskTimerHandle,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    __return_storage_ptr__->Object = (IHttpTaskTimerHandle *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pTVar12 = pTVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_a8.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_e0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  if (local_88 != 0) {
    plVar11 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar11 = local_60;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddRequest @ 143154ec0

void __thiscall FLegacyHttpThread::AddRequest(FLegacyHttpThread *this,FHttpRequestCommon *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x10,8);
  puVar2[1] = param_1;
  *puVar2 = 0;
  LOCK();
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  return;
}

// CancelRequest @ 143157480

void __thiscall
FLegacyHttpThread::CancelRequest(FLegacyHttpThread *this,FHttpRequestCommon *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x10,8);
  puVar2[1] = param_1;
  *puVar2 = 0;
  LOCK();
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  return;
}

// GetCompletedRequests @ 1431619e0

void __thiscall
FLegacyHttpThread::GetCompletedRequests
          (FLegacyHttpThread *this,TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1
          )

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

// HttpThreadTick @ 14316a850

void __thiscall FLegacyHttpThread::HttpThreadTick(FLegacyHttpThread *this,float param_1)

{
  FTSTicker::Tick(&this->Ticker,param_1);
  return;
}

// Init @ 14316af80

bool __thiscall FLegacyHttpThread::Init(FLegacyHttpThread *this)

{
  LARGE_INTEGER local_res8 [4];
  
  LOCK();
  (this->ExitRequest).Counter = 0;
  UNLOCK();
  QueryPerformanceCounter(local_res8);
  this->_padding_ =
       (longlong)
       ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000);
  (**(code **)(this->_padding_ + 0x58))(this);
  return true;
}

// RemoveTimerHandle @ 143178820

void __thiscall
FLegacyHttpThread::RemoveTimerHandle
          (FLegacyHttpThread *this,TResourceHandle<UE::EventLoop::FTimerHandleTraits> param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                     ,0x203,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveTimerHandle @ 143178860

void __thiscall
FLegacyHttpThread::RemoveTimerHandle
          (FLegacyHttpThread *this,TWeakPtr<FTSTicker::FElement,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (param_1->WeakReferenceCount).ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001431788b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// Run @ 14317acb0

uint __thiscall FLegacyHttpThread::Run(FLegacyHttpThread *this)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  TStatId TVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  EStatFlags *pEVar8;
  undefined1 *puVar9;
  FSourceLocation *pFVar10;
  EStatFlags local_1e7 [4];
  EStatFlags local_1e3;
  int local_1e0;
  uint local_1dc;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_190;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_180;
  double local_170;
  double local_168;
  double local_160;
  TStatIdData *local_158;
  TStatIdData *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  TStatIdData *local_128;
  TStatIdData *local_120;
  undefined4 local_118;
  undefined4 local_114;
  char *local_110;
  char *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  char *local_f8;
  char *local_f0;
  FScopeCycleCounter local_e8;
  FScopeCycleCounter local_d8 [2];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  FSourceLocation local_88;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  FSourceLocation local_38;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_180.AllocatorInstance);
  local_180.ArrayNum = 0;
  local_180.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_180.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_190.AllocatorInstance);
  local_190.ArrayNum = 0;
  local_190.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_190.AllocatorInstance);
  while (iVar3 = FThreadSafeCounter::GetValue(&this->ExitRequest), iVar3 == 0) {
    bVar2 = FHttpThreadBase::NeedsSingleThreadTick((FHttpThreadBase *)this);
    if (bVar2) {
      pEVar8 = local_1e7;
      for (lVar5 = 1; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pEVar8 = None;
        pEVar8 = pEVar8 + 1;
      }
      bVar2 = `FLegacyHttpThread::Run'::__l5::<lambda_1>::operator()(local_1e7);
      if (!bVar2) break;
    }
    local_148 = FWindowsPlatformTime::Seconds();
    local_1b0 = 0.0;
    bVar2 = true;
    dVar1 = local_1b0;
    while (local_1b0 = dVar1, bVar2) {
      local_170 = FWindowsPlatformTime::Seconds();
      FHttpThreadBase::Process((FHttpThreadBase *)this,&local_180,&local_190);
      local_1e0 = (int)this->_padding_;
      if (local_1e0 == 0) {
        bVar2 = false;
      }
      local_1b8 = FWindowsPlatformTime::Seconds();
      dVar1 = local_1b8;
      if (bVar2) {
        local_118 = 0x22e;
        local_114 = 6;
        local_110 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
        ;
        local_108 = "unsigned int __cdecl FLegacyHttpThread::Run(void)";
        puVar6 = &local_118;
        puVar7 = local_b8;
        for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((longlong)puVar6 + 1);
          puVar7 = puVar7 + 1;
        }
        puVar7 = local_b8;
        puVar9 = local_a0;
        for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        local_1e7[1] = ::operator|(ClearEveryFrame,CycleStat);
        local_1e7[2] = local_1e7[1];
        TVar4 = FThreadSafeStaticStatInner<FStat_STAT_HTTPThread_ActiveSleep,1>::GetStatId
                          ((FThreadSafeStaticStatInner<FStat_STAT_HTTPThread_ActiveSleep,1> *)
                           &StatPtr_STAT_HTTPThread_ActiveSleep);
        local_128 = *(TStatIdData **)&(TVar4.StatIdPtr)->Name;
        puVar7 = local_a0;
        pFVar10 = &local_88;
        for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined1 *)&(pFVar10->Impl)._Line = *puVar7;
          puVar7 = puVar7 + 1;
          pFVar10 = (FSourceLocation *)((longlong)&(pFVar10->Impl)._Line + 1);
        }
        local_120 = local_128;
        FScopeCycleCounter::FScopeCycleCounter
                  (&local_e8,(TStatId)local_128,local_1e7[2],false,&local_88);
        local_1d8 = local_1b8 - local_170;
        if (local_1d8 < __real_0000000000000000) {
          local_1d8 = 0.0;
        }
        local_1c8 = this->HttpThreadActiveMinimumSleepTimeInSeconds;
        local_1d0 = this->HttpThreadActiveFrameTimeInSeconds - local_1d8;
        local_1c0 = local_1c8;
        if (local_1c8 < local_1d0) {
          local_1c0 = local_1d0;
        }
        local_168 = local_1c0;
        local_160 = local_1c0;
        FWindowsPlatformProcess::SleepNoStats((float)local_1c0);
        FScopeCycleCounter::~FScopeCycleCounter(&local_e8);
        dVar1 = local_1b0;
      }
    }
    local_100 = 0x242;
    local_fc = 4;
    local_f8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp";
    local_f0 = "unsigned int __cdecl FLegacyHttpThread::Run(void)";
    puVar6 = &local_100;
    puVar7 = local_68;
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((longlong)puVar6 + 1);
      puVar7 = puVar7 + 1;
    }
    puVar7 = local_68;
    puVar9 = local_50;
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_1e7[3] = ::operator|(ClearEveryFrame,CycleStat);
    local_1e3 = local_1e7[3];
    TVar4 = FThreadSafeStaticStatInner<FStat_STAT_HTTPThread_IdleSleep,1>::GetStatId
                      ((FThreadSafeStaticStatInner<FStat_STAT_HTTPThread_IdleSleep,1> *)
                       &StatPtr_STAT_HTTPThread_IdleSleep);
    local_158 = *(TStatIdData **)&(TVar4.StatIdPtr)->Name;
    puVar7 = local_50;
    pFVar10 = &local_38;
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)&(pFVar10->Impl)._Line = *puVar7;
      puVar7 = puVar7 + 1;
      pFVar10 = (FSourceLocation *)((longlong)&(pFVar10->Impl)._Line + 1);
    }
    local_150 = local_158;
    FScopeCycleCounter::FScopeCycleCounter(local_d8,(TStatId)local_158,local_1e3,false,&local_38);
    local_140 = local_1b0 - local_148;
    local_1a0 = this->HttpThreadIdleMinimumSleepTimeInSeconds;
    local_1a8 = this->HttpThreadIdleFrameTimeInSeconds - local_140;
    local_198 = local_1a0;
    if (local_1a0 < local_1a8) {
      local_198 = local_1a8;
    }
    local_138 = local_198;
    local_130 = local_198;
    FWindowsPlatformProcess::SleepNoStats((float)local_198);
    FScopeCycleCounter::~FScopeCycleCounter(local_d8);
  }
  local_1dc = 0;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_>::
  ~TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_>(&local_190);
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_>::
  ~TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_>(&local_180);
  return local_1dc;
}

// StartThread @ 143183d10

void __thiscall FLegacyHttpThread::StartThread(FLegacyHttpThread *this)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FRunnableThread *pFVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined1 *)&this->_padding_ = 0;
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
  *(int *)&this->_padding_ = GHttpThreadPriorities[lVar5];
  bVar2 = FForkProcessHelper::IsForkedMultithreadInstance();
  if ((bVar2) && (!bVar1)) {
    pFVar4 = FForkProcessHelper::CreateForkableThread
                       ((FRunnable *)this,L"HttpManagerThread",0x20000,
                        (EThreadPriority)this->_padding_,0xffffffffffffffff,bVar1,bVar1);
    this->_padding_ = (longlong)pFVar4;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
    return;
  }
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar1) {
    *(undefined1 *)&this->_padding_ = 1;
  }
  pFVar4 = FRunnableThread::Create
                     ((FRunnable *)this,L"HttpManagerThread",0x20000,
                      (EThreadPriority)this->_padding_,0xffffffffffffffff,None);
  this->_padding_ = (longlong)pFVar4;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  return;
}

// Stop @ 143185800

void __thiscall FLegacyHttpThread::Stop(FLegacyHttpThread *this)

{
  LOCK();
  (this->ExitRequest).Counter = 1;
  UNLOCK();
  return;
}

// StopThread @ 143185f50

void __thiscall FLegacyHttpThread::StopThread(FLegacyHttpThread *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    this->_padding_ = 0;
  }
  *(undefined2 *)&this->_padding_ = 0x101;
  return;
}

// Tick @ 1431881e0

void __thiscall FLegacyHttpThread::Tick(FLegacyHttpThread *this)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> local_18;
  
  QueryPerformanceCounter(&local_res8);
  lVar2 = *(longlong *)&this[-1].Ticker.Elements.ArrayNum;
  dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = (double)this->_padding_;
  this->_padding_ = (longlong)dVar5;
  (**(code **)(lVar2 + 0x78))(&this[-1].Ticker.Elements.ArrayNum,(float)(dVar5 - dVar1));
  if ((char)this->_padding_ == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4512387740343468524>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpThread.cpp"
                       ,0x1ec,"NeedsSingleThreadTick()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FHttpThreadBase::Process
              ((FHttpThreadBase *)&this[-1].Ticker.Elements.ArrayNum,&local_18,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 15049bab0

bool __thiscall `FLegacyHttpThread::Run'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  UE::Core::Private::FormatStringSan::
  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4512387740343468571>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<4512387740343468571>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

