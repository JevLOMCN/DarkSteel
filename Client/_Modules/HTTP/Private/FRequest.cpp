// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 10

// FRequest @ 14314daa0

FRequest * __thiscall
FHttpRetrySystem::FRequest::FRequest
          (FRequest *this,TSharedRef<FHttpRetrySystem::FManager,1> *param_1,
          TSharedRef<IHttpRequest,1> *param_2,TOptional<unsigned_int> *param_3,
          TOptional<double> *param_4,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_6,
          TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *param_7,TOptional<unsigned_int> *param_8,
          FExponentialBackoffCurve *param_9)

{
  TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FRetryDomains *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FRequest *pFVar9;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  FHttpRequestImpl::FHttpRequestImpl((FHttpRequestImpl *)this);
  this->_padding_ = (longlong)&___7FHttpRequestAdapterBase__6B_;
  this->_padding_ = (longlong)param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FRequest_FHttpRetrySystem__6B_;
  (this->RetryLimitCountOverride).bIsSet = false;
  this->RetryStatus = NotStarted;
  bVar8 = param_3->bIsSet;
  (this->RetryLimitCountOverride).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->RetryLimitCountOverride).TypedValue = param_3->TypedValue;
  }
  (this->RetryLimitCountForConnectionErrorOverride).bIsSet = false;
  bVar8 = param_8->bIsSet;
  (this->RetryLimitCountForConnectionErrorOverride).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->RetryLimitCountForConnectionErrorOverride).TypedValue = param_8->TypedValue;
  }
  (this->RetryTimeoutRelativeSecondsOverride).bIsSet = false;
  bVar8 = param_4->bIsSet;
  (this->RetryTimeoutRelativeSecondsOverride).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->RetryTimeoutRelativeSecondsOverride).TypedValue = param_4->TypedValue;
  }
  *(undefined8 *)&(this->RetryResponseCodes).Elements = 0;
  *(undefined8 *)&(this->RetryResponseCodes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RetryResponseCodes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RetryResponseCodes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RetryResponseCodes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RetryResponseCodes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetryResponseCodes).Elements.field_0x34 = 0;
  (this->RetryResponseCodes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RetryResponseCodes).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->RetryResponseCodes,param_5);
  *(undefined8 *)&(this->RetryVerbs).Elements = 0;
  *(undefined8 *)&(this->RetryVerbs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RetryVerbs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RetryVerbs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RetryVerbs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RetryVerbs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetryVerbs).Elements.field_0x34 = 0;
  (this->RetryVerbs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RetryVerbs).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&this->RetryVerbs,param_6);
  pTVar1 = &this->RetryDomains;
  pTVar1->Object = param_7->Object;
  pTVar2 = (param_7->SharedReferenceCount).ReferenceController;
  (this->RetryDomains).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->RetryDomainsIndex = 0;
  (this->OriginalUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalUrl).Data.ArrayNum = 0;
  (this->OriginalUrl).Data.ArrayMax = 0;
  (this->RetryManager).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->RetryManager).WeakReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->LastResponse).Object = (IHttpResponse *)0x0;
  (this->LastResponse).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bLastSucceeded = false;
  fVar5 = param_9->ExponentBias;
  fVar6 = param_9->MinCoefficient;
  fVar7 = param_9->MaxCoefficient;
  (this->RetryExponentialBackoffCurve).Base = param_9->Base;
  (this->RetryExponentialBackoffCurve).ExponentBias = fVar5;
  (this->RetryExponentialBackoffCurve).MinCoefficient = fVar6;
  (this->RetryExponentialBackoffCurve).MaxCoefficient = fVar7;
  (this->RetryExponentialBackoffCurve).MaxBackoffSeconds = param_9->MaxBackoffSeconds;
  this->bBoundAdaptorDelegates = false;
  if ((param_4->bIsSet != false) && (param_4->TypedValue <= 0.0 && param_4->TypedValue != 0.0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InRetryTimeoutRelativeSecondsOverride.IsSet()) || (InRetryTimeoutRelativeSecondsOverride.GetValue() >= 0.0)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                       ,0x69,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRequest *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar3 = pTVar1->Object;
  if (pFVar3 != (FRetryDomains *)0x0) {
    if ((pFVar3->Domains).ArrayNum == 0) {
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *)&local_28) {
        pTVar1->Object = (FRetryDomains *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->RetryDomains).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    else {
      this->RetryDomainsIndex = (int)pFVar3->ActiveIndex;
      if (pTVar1->Object == (FRetryDomains *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FRequest *)(*pcVar4)();
          return pFVar9;
        }
      }
      if ((this->RetryDomainsIndex < 0) ||
         ((pTVar1->Object->Domains).ArrayNum <= this->RetryDomainsIndex)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RetryDomains->Domains.IsValidIndex(RetryDomainsIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                           ,0x76,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FRequest *)(*pcVar4)();
          return pFVar9;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// BindAdaptorDelegates @ 143155740

/* WARNING: Removing unreachable block (ram,0x000143155aa2) */

void __thiscall FHttpRetrySystem::FRequest::BindAdaptorDelegates(FRequest *this)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  LPCRITICAL_SECTION p_Var8;
  undefined8 *puVar9;
  TSharedRef<IHttpRequest,1> *pTVar10;
  ulong64 uVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uStackX_c;
  TSharedRef<IHttpRequest,1> local_68;
  TSharedRef<IHttpRequest,1> local_58;
  TSharedRef<IHttpRequest,1> local_48;
  TSharedRef<IHttpRequest,1> local_38;
  
  bVar7 = false;
  bVar4 = false;
  bVar3 = false;
  if (this->bBoundAdaptorDelegates == false) {
    this->bBoundAdaptorDelegates = true;
    p_Var8 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)this->_padding_ + 0xf0))();
    if ((p_Var8 == (LPCRITICAL_SECTION)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(p_Var8);
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(p_Var8 + 1));
    uVar5 = local_38.SharedReferenceCount.ReferenceController._4_4_;
    if (puVar9 == (undefined8 *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      pTVar10 = TSharedFromThis<IHttpRequest,1>::AsShared
                          ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_68);
      pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
      pIVar1 = pTVar10->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pIVar1;
      puVar9[4] = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar4 = true;
      bVar3 = true;
      puVar9[5] = HttpOnProcessRequestComplete;
      puVar9[6] = (ulonglong)uVar5 << 0x20;
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    bVar7 = false;
    bVar4 = false;
    bVar3 = false;
    if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var8);
    }
    p_Var8 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)this->_padding_ + 0xf8))();
    if ((p_Var8 == (LPCRITICAL_SECTION)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(p_Var8);
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(p_Var8 + 1));
    uVar5 = local_38.SharedReferenceCount.ReferenceController._4_4_;
    if (puVar9 == (undefined8 *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      pTVar10 = TSharedFromThis<IHttpRequest,1>::AsShared
                          ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_58);
      pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
      pIVar1 = pTVar10->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar4 = true;
      bVar3 = true;
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pIVar1;
      puVar9[4] = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar9[5] = HttpOnRequestProgress;
      puVar9[6] = (ulonglong)uVar5 << 0x20;
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    bVar4 = false;
    bVar3 = false;
    if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var8);
    }
    p_Var8 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)this->_padding_ + 0x110))();
    if ((p_Var8 == (LPCRITICAL_SECTION)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(p_Var8);
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(p_Var8 + 1));
    uVar5 = local_38.SharedReferenceCount.ReferenceController._4_4_;
    if (puVar9 == (undefined8 *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      pTVar10 = TSharedFromThis<IHttpRequest,1>::AsShared
                          ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_48);
      pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
      pIVar1 = pTVar10->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar4 = true;
      bVar3 = true;
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pIVar1;
      puVar9[4] = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar9[5] = HttpOnStatusCodeReceived;
      puVar9[6] = (ulonglong)uVar5 << 0x20;
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    bVar7 = false;
    bVar4 = false;
    bVar3 = false;
    if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var8);
    }
    p_Var8 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)this->_padding_ + 0x108))();
    if ((p_Var8 == (LPCRITICAL_SECTION)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(p_Var8);
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(p_Var8 + 1));
    uVar5 = local_38.SharedReferenceCount.ReferenceController._4_4_;
    if (puVar9 == (undefined8 *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      pTVar10 = TSharedFromThis<IHttpRequest,1>::AsShared
                          ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_38);
      pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
      pIVar1 = pTVar10->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar4 = true;
      bVar3 = true;
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pIVar1;
      puVar9[4] = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar9[5] = HttpOnHeaderReceived;
      puVar9[6] = (ulonglong)uVar5 << 0x20;
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_38.SharedReferenceCount.ReferenceController._4_4_,
                          local_38.SharedReferenceCount.ReferenceController._0_4_));
    }
    if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var8);
    }
  }
  return;
}

// CancelRequest @ 143157aa0

void __thiscall FHttpRetrySystem::FRequest::CancelRequest(FRequest *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FManager *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<IHttpRequest,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedRef<FHttpRetrySystem::FRequest,1> local_28;
  TSharedRef<IHttpRequest,1> local_18;
  
  pTVar4 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_18);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  local_28.Object = (FRequest *)pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  BindAdaptorDelegates(this);
  pTVar5 = (this->RetryManager).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143157b10;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->RetryManager).Object;
    if (this_00 != (FManager *)0x0) {
      FManager::CancelRequest(this_00,&local_28);
      goto LAB_143157b20;
    }
  }
LAB_143157b10:
  (**(code **)(*(longlong *)this->_padding_ + 0x118))();
LAB_143157b20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// HttpOnHeaderReceived @ 143168fb0

void __thiscall
FHttpRetrySystem::FRequest::HttpOnHeaderReceived
          (FRequest *this,TSharedPtr<IHttpRequest,1> *param_1,FString *param_2,FString *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<IHttpRequest,1> *pTVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  atomic<int> *paVar3;
  TSharedRef<IHttpRequest,1> local_28;
  
  pTVar2 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_28);
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  local_28.Object = pTVar2->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  this_00 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(this->_padding_ + 0x108))(this);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  ::ExecuteIfBound(this_00,(TSharedPtr<IHttpRequest,1> *)&local_28,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HttpOnProcessRequestComplete @ 143169070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FRequest::HttpOnProcessRequestComplete
          (FRequest *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
          bool param_3)

{
  TAtomic<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar2;
  TAtomic<int> TVar3;
  FManager *this_00;
  IHttpRequest *pIVar4;
  IHttpRequest *pIVar5;
  IHttpResponse *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  FRetryDomains *pFVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  code *pcVar10;
  atomic<int> aVar11;
  void *pvVar12;
  char cVar13;
  atomic<int> aVar14;
  int iVar15;
  TAtomic<int> TVar16;
  TSharedRef<IHttpRequest,1> *pTVar17;
  TSharedPtr<IHttpResponse,1> *pTVar18;
  FName *pFVar19;
  TStatId TVar20;
  LPCRITICAL_SECTION lpCriticalSection_00;
  undefined8 *puVar21;
  FHttpLogVerbosityTracker *this_01;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this_02;
  uint uVar22;
  Type TVar23;
  TOptional<unsigned_int> *pTVar24;
  ulonglong uVar25;
  TReferenceControllerBase<1> *pTVar26;
  TAtomic<int> TVar27;
  longlong lVar28;
  uint uVar29;
  FRequest *pFVar30;
  FHttpRetryRequestEntry *pFVar31;
  TReferenceControllerBase<1> *pTVar32;
  FName FVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  FLLMScope local_res8 [2];
  TSharedPtr<IHttpRequest,1> *local_res10;
  TSharedPtr<IHttpResponse,1> *local_res18;
  bool local_res20;
  undefined1 local_198 [8];
  FName local_190;
  FName local_188;
  FName local_180;
  byte local_178;
  TReferenceControllerBase<1> *local_170;
  IHttpRequest *local_168;
  FMemScope local_160;
  longlong local_158;
  FSharedReferencer<1> FStack_150;
  FSourceLocation local_148;
  TOptional<double> local_128;
  undefined8 local_118;
  undefined8 local_110;
  FRequest *local_108;
  TReferenceControllerBase<1> *local_100;
  TSharedPtr<IHttpResponse,1> local_f8;
  TSharedPtr<IHttpRequest,1> local_e8;
  FName local_d8;
  FName local_d0;
  TSharedRef<IHttpRequest,1> local_c8;
  TSharedRef<IHttpRequest,1> local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [88];
  
  pTVar32 = (this->RetryManager).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    aVar11 = pTVar32->SharedReferenceCount;
    do {
      if (aVar11 == (atomic<int>)0x0) {
        pTVar32 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1431690c6;
      }
      LOCK();
      aVar14 = pTVar32->SharedReferenceCount;
      bVar34 = aVar11 == aVar14;
      if (bVar34) {
        pTVar32->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
        aVar14 = aVar11;
      }
      UNLOCK();
      aVar11 = aVar14;
    } while (!bVar34);
    this_00 = (this->RetryManager).Object;
    if (this_00 != (FManager *)0x0) {
      pTVar17 = TSharedFromThis<IHttpRequest,1>::AsShared
                          ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_c8);
      local_168 = pTVar17->Object;
      local_170 = (pTVar17->SharedReferenceCount).ReferenceController;
      if (local_170 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_170->SharedReferenceCount = (atomic<int>)((int)local_170->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      lpCriticalSection = &this_00->RequestListLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FVar33 = (FName)(this_00->RequestList).AllocatorInstance.Data;
      local_190 = (FName)((longlong)(this_00->RequestList).ArrayNum * 0x30 + (longlong)FVar33);
      local_188 = FVar33;
      if (FVar33 != local_190) {
        do {
          pTVar17 = TSharedFromThis<IHttpRequest,1>::AsShared
                              ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_b8);
          pIVar4 = *(IHttpRequest **)((longlong)FVar33 + 0x20);
          pIVar5 = pTVar17->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.SharedReferenceCount.ReferenceController);
          if (pIVar4 == pIVar5) {
            lVar28 = ((longlong)FVar33 - (longlong)local_188) / 6 +
                     ((longlong)FVar33 - (longlong)local_188 >> 0x3f);
            uVar29 = (int)(lVar28 >> 3) - (int)(lVar28 >> 0x3f);
            if (uVar29 != 0xffffffff) {
              uVar22 = 0;
              if ((int)uVar29 < (this_00->RequestList).ArrayNum) {
                uVar22 = ~uVar29 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              TVar23 = this->RetryStatus;
              pFVar31 = (FHttpRetryRequestEntry *)
                        ((this_00->RequestList).AllocatorInstance.Data +
                        (longlong)(int)uVar29 * 0x30);
              if (TVar23 == Cancelled) {
LAB_1431693a2:
                if ((TVar23 - Cancelled & 0xfffffffd) != 0) goto LAB_1431693b0;
              }
              else {
                iVar15 = (**(code **)(this->_padding_ + 0x10))(this);
                if (iVar15 == 2) {
                  cVar13 = (**(code **)(this->_padding_ + 0x18))(this);
                  if ((cVar13 == '\x01') && ((this->RetryDomains).Object != (FRetryDomains *)0x0)) {
                    pFVar8 = (this->RetryDomains).Object;
                    TVar27 = (TAtomic<int>)
                             ((this->RetryDomainsIndex + 1) % (pFVar8->Domains).ArrayNum);
                    TVar3 = (TAtomic<int>)this->RetryDomainsIndex;
                    pTVar1 = &pFVar8->ActiveIndex;
                    LOCK();
                    TVar16 = *pTVar1;
                    bVar34 = TVar3 == TVar16;
                    if (bVar34) {
                      *pTVar1 = TVar27;
                      TVar16 = TVar3;
                    }
                    UNLOCK();
                    if (bVar34) {
                      this->RetryDomainsIndex = (int)TVar27;
                    }
                    else {
                      this->RetryDomainsIndex = (int)TVar16;
                    }
                    SetUrlFromRetryDomains(this);
                  }
                  cVar13 = (**(code **)(this->_padding_ + 0x18))(this);
                  TVar23 = (cVar13 == '\x03') + FailedRetry;
                  this->RetryStatus = TVar23;
                  goto LAB_1431693a2;
                }
                this->RetryStatus = Succeeded;
LAB_1431693b0:
                bVar34 = FManager::ShouldRetry(this_00,pFVar31);
                if (bVar34) {
                  cVar13 = (**(code **)(((pFVar31->Request).Object)->_padding_ + 0x18))();
                  if (cVar13 == '\x01') {
                    pFVar30 = (pFVar31->Request).Object;
                    bVar34 = (pFVar30->RetryLimitCountForConnectionErrorOverride).bIsSet;
                    if ((bVar34 == false) &&
                       ((this_00->RetryLimitCountForConnectionErrorDefault).bIsSet == false))
                    goto LAB_143169421;
                    local_198._0_4_ = 0;
                    pTVar24 = (TOptional<unsigned_int> *)local_198;
                    if ((this_00->RetryLimitCountForConnectionErrorDefault).bIsSet != false) {
                      pTVar24 = &this_00->RetryLimitCountForConnectionErrorDefault;
                    }
                    if (bVar34 != false) {
                      pTVar24 = &pFVar30->RetryLimitCountForConnectionErrorOverride;
                    }
                    bVar34 = pFVar31->CurrentRetryCountForConnectionError < pTVar24->TypedValue;
                  }
                  else {
LAB_143169421:
                    pFVar30 = (pFVar31->Request).Object;
                    local_198._4_4_ = 0;
                    pTVar24 = (TOptional<unsigned_int> *)(local_198 + 4);
                    if ((this_00->RetryLimitCountDefault).bIsSet != false) {
                      pTVar24 = &this_00->RetryLimitCountDefault;
                    }
                    if ((pFVar30->RetryLimitCountOverride).bIsSet != false) {
                      pTVar24 = &pFVar30->RetryLimitCountOverride;
                    }
                    bVar34 = pFVar31->CurrentRetryCount < pTVar24->TypedValue;
                  }
                  if (bVar34) {
                    FWindowsPlatformTime::Seconds();
                    pFVar30 = (pFVar31->Request).Object;
                    pTVar18 = (TSharedPtr<IHttpResponse,1> *)
                              (**(code **)(pFVar30->_padding_ + 0x120))(pFVar30,local_a8);
                    ReadThrottledTimeFromResponseInSeconds(&local_128,pTVar18);
                    if ((local_128.bIsSet == false) ||
                       (fVar37 = (float)local_128.TypedValue, (float)local_128.TypedValue <= 0.0)) {
                      iVar15 = (**(code **)(((pFVar31->Request).Object)->_padding_ + 0x10))();
                      if ((iVar15 == 2) &&
                         (cVar13 = (**(code **)(((pFVar31->Request).Object)->_padding_ + 0x18))(),
                         cVar13 == '\x01')) {
                        pFVar30 = (pFVar31->Request).Object;
                        fVar37 = 0.0;
                        if ((pFVar30->RetryDomains).Object != (FRetryDomains *)0x0)
                        goto LAB_1431695a4;
                      }
                      else {
                        pFVar30 = (pFVar31->Request).Object;
                      }
                      fVar37 = (pFVar30->RetryExponentialBackoffCurve).Base;
                      fVar2 = (pFVar30->RetryExponentialBackoffCurve).ExponentBias;
                      fVar35 = powf(fVar37,(float)(pFVar31->CurrentRetryCount + 1) + fVar2);
                      fVar36 = __real_3f800000;
                      if ((__real_3f800000 < fVar37) && (0.0 <= fVar2)) {
                        fVar37 = (pFVar30->RetryExponentialBackoffCurve).MaxCoefficient;
                        fVar2 = (pFVar30->RetryExponentialBackoffCurve).MinCoefficient;
                        if ((fVar2 <= fVar37) && ((__real_3a83126f < fVar37 && (0.0 <= fVar2)))) {
                          uVar29 = rand();
                          fVar36 = (float)(uVar29 & 0x7fff) * (fVar37 - fVar2) * __real_38000100 +
                                   fVar2;
                        }
                      }
                      fVar2 = (pFVar30->RetryExponentialBackoffCurve).MaxBackoffSeconds;
                      fVar37 = fVar36 * fVar35;
                      if (fVar2 <= fVar36 * fVar35) {
                        fVar37 = fVar2;
                      }
                    }
LAB_1431695a4:
                    pvVar12 = ThreadLocalStoragePointer;
                    uVar25 = (ulonglong)_tls_index;
                    this->RetryStatus = ProcessingLockout;
                    if ((*(int *)(*(longlong *)((longlong)pvVar12 + uVar25 * 8) + 0x9d4c) < ::_TSS0)
                       && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                      if (StatPtr_STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry ==
                          (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRetrySystem::FRequest::HttpOnProcessRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)_::_30_::FStat_STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry>
                           )0x0) {
                        pFVar19 = ::FName::FName(&local_d8,
                                                 "STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry"
                                                );
                        FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &StatPtr_STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry
                                   ,*pFVar19,
                                   L"STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry",
                                   "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,
                                   true,false,MCR_Invalid);
                      }
                      _Init_thread_footer(&::_TSS0);
                    }
                    TVar20.StatIdPtr =
                         (TStatIdData *)
                         StatPtr_STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry;
                    if (StatPtr_STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry ==
                        (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRetrySystem::FRequest::HttpOnProcessRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)_::_30_::FStat_STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry>
                         )0x0) {
                      pFVar19 = ::FName::FName(&local_d0,
                                               "STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry"
                                              );
                      TVar20.StatIdPtr =
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &
                                      StatPtr_STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry
                                      ,*pFVar19,
                                      L"STAT_FHttpRetrySystem_FManager_Update_OnRequestWillRetry",
                                      "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                                      ST_int64,true,false,MCR_Invalid);
                    }
                    local_148.Impl._Line = 0x114;
                    local_148.Impl._File =
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                    ;
                    local_148.Impl._Function =
                         "void __cdecl FHttpRetrySystem::FRequest::HttpOnProcessRequestComplete(class TSharedPtr<class IHttpRequest,1>,class TSharedPtr<class IHttpResponse,1>,bool)"
                    ;
                    local_148.Impl._Column = 6;
                    FScopeCycleCounter::FScopeCycleCounter
                              ((FScopeCycleCounter *)&local_180,TVar20,CycleStat|ClearEveryFrame,
                               false,&local_148);
                    lpCriticalSection_00 =
                         (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0x100))(this);
                    puVar21 = (undefined8 *)(**(code **)(this->_padding_ + 0x120))(this,local_98);
                    pTVar26 = (pFVar31->Request).SharedReferenceCount.ReferenceController;
                    local_188 = (FName)(pFVar31->Request).Object;
                    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar26->SharedReferenceCount =
                           (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    if ((lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) &&
                       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Mutex",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                            ,0x1b,L""), bVar34)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    EnterCriticalSection(lpCriticalSection_00);
                    if ((lpCriticalSection_00[1].LockCount == 0) ||
                       (p_Var9 = lpCriticalSection_00[1].DebugInfo,
                       p_Var9 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
                      LeaveCriticalSection(lpCriticalSection_00);
                    }
                    else {
                      pcVar10 = *(code **)(*(longlong *)p_Var9 + 0x68);
                      local_118 = *puVar21;
                      local_110 = puVar21[1];
                      local_108 = (FRequest *)local_188;
                      puVar21[1] = 0;
                      *puVar21 = 0;
                      local_100 = pTVar26;
                      (*pcVar10)(p_Var9,&local_108,&local_118,fVar37);
                      LeaveCriticalSection(lpCriticalSection_00);
                      pTVar26 = (TReferenceControllerBase<1> *)0x0;
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar26);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)puVar21[1]);
                    if ((local_178 & 1) != 0) {
                      FGenericPlatformMisc::EndNamedEvent();
                    }
                    if ((local_178 & 2) != 0) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    if ((local_178 & 4) != 0) {
                      FThreadStats::AddMessage(local_180,CycleScopeEnd);
                    }
                    FManager::RetryHttpRequestWithDelay(this_00,pFVar31,fVar37,local_res20);
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_170);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar32);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              ((local_res10->SharedReferenceCount).ReferenceController);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              ((local_res18->SharedReferenceCount).ReferenceController);
                    return;
                  }
                }
              }
              if (pFVar31->CurrentRetryCount != 0) {
                this_01 = FManager::FHttpLogVerbosityTracker::Get();
                FManager::FHttpLogVerbosityTracker::DecrementRetriedRequests(this_01);
              }
              uVar22 = 0;
              if ((int)uVar29 < (this_00->RequestList).ArrayNum) {
                uVar22 = ~uVar29 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              TArray<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,TSizedDefaultAllocator<32>_>
              ::RemoveAtSwapImpl(&this_00->RequestList,uVar29);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,&(this_00->RequestList).AllocatorInstance,
                         (this_00->RequestList).ArrayNum,&(this_00->RequestList).ArrayMax);
              goto LAB_1431691e4;
            }
            break;
          }
          FVar33 = (FName)((longlong)FVar33 + 0x30);
        } while (FVar33 != local_190);
      }
      bVar34 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_324262742288498452>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                          ,0xec,"EntryIndex != INDEX_NONE");
      if (bVar34) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_1431691e4:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pTVar26 = (local_res18->SharedReferenceCount).ReferenceController;
      local_f8.Object = local_res18->Object;
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this->RetryStatus == FailedTimeout) {
        pTVar18 = &this->LastResponse;
        pIVar6 = pTVar18->Object;
        if (pIVar6 != (IHttpResponse *)0x0) {
          pTVar7 = (this->LastResponse).SharedReferenceCount.ReferenceController;
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar26);
          local_158 = 0;
          FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar18 != (TSharedPtr<IHttpResponse,1> *)&local_158) {
            pTVar18->Object = (IHttpResponse *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->LastResponse).SharedReferenceCount,&FStack_150);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_150.ReferenceController);
          local_res20 = this->bLastSucceeded;
          pTVar26 = pTVar7;
          local_f8.Object = pIVar6;
        }
      }
      pTVar18 = local_res18;
      FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_HTTP.UniqueName,false,None,Default,true);
      local_190 = LLMTagDeclaration_HTTP.UniqueName;
      FMemScope::FMemScope(&local_160,&local_190,true);
      this_02 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                 *)(**(code **)(this->_padding_ + 0xf0))(this);
      pTVar7 = local_170;
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = local_168;
      local_e8.SharedReferenceCount.ReferenceController = local_170;
      if (local_170 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_170->SharedReferenceCount = (atomic<int>)((int)local_170->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8.SharedReferenceCount.ReferenceController = pTVar26;
      TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
      ::ExecuteIfBound(this_02,&local_e8,&local_f8,local_res20);
      (**(code **)(this->_padding_ + 0xd0))(this);
      FMemScope::~FMemScope(&local_160);
      FLLMScope::~FLLMScope(local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((local_res10->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar18->SharedReferenceCount).ReferenceController);
      return;
    }
  }
LAB_1431690c6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpOnRequestProgress @ 143169a50

void __thiscall
FHttpRetrySystem::FRequest::HttpOnRequestProgress
          (FRequest *this,TSharedPtr<IHttpRequest,1> *param_1,ulong64 param_2,ulong64 param_3)

{
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
  *this_00;
  TSharedRef<IHttpRequest,1> *pTVar1;
  TSharedPtr<IHttpRequest,1> local_28;
  TSharedRef<IHttpRequest,1> local_18;
  
  this_00 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(this->_padding_ + 0xf8))();
  pTVar1 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
  ::ExecuteIfBound(this_00,&local_28,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HttpOnStatusCodeReceived @ 143169af0

void __thiscall
FHttpRetrySystem::FRequest::HttpOnStatusCodeReceived
          (FRequest *this,TSharedPtr<IHttpRequest,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<IHttpRequest,1> *pTVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *this_00;
  atomic<int> *paVar3;
  TSharedRef<IHttpRequest,1> local_28;
  
  pTVar2 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_28);
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  local_28.Object = pTVar2->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  this_00 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *)
            (**(code **)(this->_padding_ + 0x110))(this);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>::
  ExecuteIfBound(this_00,(TSharedPtr<IHttpRequest,1> *)&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// MoveToNextRetryDomain @ 143170490

void __thiscall FHttpRetrySystem::FRequest::MoveToNextRetryDomain(FRequest *this)

{
  TAtomic<int> *pTVar1;
  TAtomic<int> TVar2;
  FRetryDomains *pFVar3;
  code *pcVar4;
  bool bVar5;
  TAtomic<int> TVar6;
  TAtomic<int> TVar7;
  
  if (((this->RetryDomains).Object == (FRetryDomains *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RetryDomains.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                         ,0xbf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->RetryDomains).Object == (FRetryDomains *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->RetryDomains).Object;
  TVar7 = (TAtomic<int>)((this->RetryDomainsIndex + 1) % (pFVar3->Domains).ArrayNum);
  if ((pFVar3 == (FRetryDomains *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TVar2 = (TAtomic<int>)this->RetryDomainsIndex;
  pTVar1 = &((this->RetryDomains).Object)->ActiveIndex;
  LOCK();
  TVar6 = *pTVar1;
  bVar5 = TVar2 == TVar6;
  if (bVar5) {
    *pTVar1 = TVar7;
    TVar6 = TVar2;
  }
  UNLOCK();
  if (bVar5) {
    this->RetryDomainsIndex = (int)TVar7;
    SetUrlFromRetryDomains(this);
    return;
  }
  this->RetryDomainsIndex = (int)TVar6;
  SetUrlFromRetryDomains(this);
  return;
}

// ProcessRequest @ 143174d90

bool __thiscall FHttpRetrySystem::FRequest::ProcessRequest(FRequest *this)

{
  int *piVar1;
  TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *this_00;
  FManager *this_01;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  atomic<int> aVar7;
  TSharedRef<IHttpRequest,1> *pTVar8;
  FString *pFVar9;
  FRetryDomains *pFVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  FString local_68;
  TSharedRef<FHttpRetrySystem::FRequest,1> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TSharedRef<IHttpRequest,1> local_38;
  TStringView<wchar_t> local_28;
  
  pTVar8 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_38);
  local_58.Object = (FRequest *)pTVar8->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pFVar9 = (FString *)(*(code *)**(undefined8 **)this->_padding_)();
  ::FString::operator=(&this->OriginalUrl,pFVar9);
  this_00 = &this->RetryDomains;
  if ((this_00->Object != (FRetryDomains *)0x0) && ((this_00->Object->Domains).ArrayNum != 0)) {
    local_48 = (this->OriginalUrl).Data.AllocatorInstance.Data;
    iVar12 = (this->OriginalUrl).Data.ArrayNum;
    iStack_40 = iVar12 + -1;
    if (iVar12 == 0) {
      iStack_40 = 0;
    }
    local_28._12_4_ = uStack_3c;
    local_28.Size = iStack_40;
    local_28.DataPtr = (wchar_t *)local_48;
    FGenericPlatformHttp::GetUrlDomainAndPort(&local_68,&local_28);
    if ((this_00->Object == (FRetryDomains *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar16 = (this_00->Object->Domains).AllocatorInstance.Data;
    iVar12 = (this_00->Object->Domains).ArrayNum;
    uVar13 = local_68.Data._8_8_;
    for (pFVar15 = pFVar16; pFVar15 != pFVar16 + (longlong)iVar12 * 0x10; pFVar15 = pFVar15 + 0x10)
    {
      iVar6 = *(int *)(pFVar15 + 8);
      if (iVar6 == (int)uVar13) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar15,(wchar_t *)local_68.Data.AllocatorInstance.Data);
          bVar4 = iVar6 == 0;
          uVar13 = local_68.Data._8_8_;
          goto LAB_143174ecd;
        }
LAB_143174ee2:
        uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar16 >> 4);
        if (uVar14 != 0xffffffff) {
          if ((int)uVar14 < 1) goto LAB_143174fd0;
          pFVar10 = TSharedPtr<FHttpRetrySystem::FRetryDomains,1>::operator->(this_00);
          uVar11 = 0;
          if ((int)uVar14 < (pFVar10->Domains).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pFVar16 = (pFVar10->Domains).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
          if (*(void **)pFVar16 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar16);
          }
          iVar12 = (pFVar10->Domains).ArrayNum + ~uVar14;
          if (iVar12 != 0) {
            memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar12 << 4);
          }
          piVar1 = &(pFVar10->Domains).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)pFVar10,(pFVar10->Domains).ArrayNum,
                     &(pFVar10->Domains).ArrayMax);
        }
        break;
      }
      bVar4 = iVar6 + (int)uVar13 == 1;
LAB_143174ecd:
      if (bVar4) goto LAB_143174ee2;
    }
    pFVar10 = TSharedPtr<FHttpRetrySystem::FRetryDomains,1>::operator->(this_00);
    TArray<FString,TSizedDefaultAllocator<32>_>::Insert(&pFVar10->Domains,&local_68,0);
LAB_143174fd0:
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (this_00->Object != (FRetryDomains *)0x0) {
    SetUrlFromRetryDomains(this);
  }
  BindAdaptorDelegates(this);
  pTVar18 = (this->RetryManager).WeakReferenceCount.ReferenceController;
  pTVar17 = pTVar18;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar18->SharedReferenceCount;
    do {
      pTVar17 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_143175031;
      LOCK();
      aVar7 = pTVar18->SharedReferenceCount;
      bVar4 = aVar3 == aVar7;
      if (bVar4) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar4);
    this_01 = (this->RetryManager).Object;
    pTVar17 = pTVar18;
    if (this_01 != (FManager *)0x0) {
      bVar4 = FManager::ProcessRequest(this_01,&local_58);
      goto LAB_143175061;
    }
  }
LAB_143175031:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_324262742288498520>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                     ,0xa8,"RetryManagerPtr");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  bVar4 = false;
  pTVar18 = pTVar17;
LAB_143175061:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// SetUrlFromRetryDomains @ 14317faf0

void __thiscall FHttpRetrySystem::FRequest::SetUrlFromRetryDomains(FRequest *this)

{
  int iVar1;
  uint uVar2;
  FRetryDomains *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FString local_58;
  FScriptContainerElement *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if (((this->RetryDomains).Object == (FRetryDomains *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RetryDomains.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                         ,0xb4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48 = (this->OriginalUrl).Data.AllocatorInstance.Data;
  iVar1 = (this->OriginalUrl).Data.ArrayNum;
  uStack_40 = iVar1 - 1;
  if (iVar1 == 0) {
    uStack_40 = 0;
  }
  local_28._12_4_ = uStack_3c;
  local_28.Size = uStack_40;
  local_28.DataPtr = (wchar_t *)local_48;
  FGenericPlatformHttp::GetUrlDomainAndPort(&local_58,&local_28);
  if (1 < local_58.Data.ArrayNum) {
    if (((this->RetryDomains).Object == (FRetryDomains *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = this->RetryDomainsIndex;
    pFVar3 = (this->RetryDomains).Object;
    uVar7 = 0;
    if ((int)uVar2 < (pFVar3->Domains).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pFVar3->Domains).AllocatorInstance.Data;
    if (*(int *)(pFVar4 + (longlong)(int)uVar2 * 0x10 + 8) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)(pFVar4 + (longlong)(int)uVar2 * 0x10);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    ::FString::Replace(&this->OriginalUrl,&local_38,(wchar_t *)FVar8.Data,pwVar9,IgnoreCase);
    (**(code **)(*(longlong *)this->_padding_ + 0x68))((longlong *)this->_padding_,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

