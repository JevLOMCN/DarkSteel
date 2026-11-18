// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 50

// FOnDemandIoBackendStats @ 1445a5a60

FOnDemandIoBackendStats * __thiscall
UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats
          (FOnDemandIoBackendStats *this,FBackendStatus *param_1)

{
  TUniquePtr<IConsoleCommand,FConsoleCommandUnregister> *this_00;
  IConsoleCommand *pIVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  FOnDemandIoBackendStats *pFVar4;
  FDelegateHandle FVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  IConsoleCommand *pIVar8;
  bool bVar9;
  <lambda_1> local_res20;
  <lambda_2> local_98;
  FConsoleCommandUnregister local_90 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  this->BackendStatus = param_1;
  bVar9 = GStatistics != (FOnDemandIoBackendStats *)0x0;
  this_00 = &this->ResetStatisticsCommand;
  (this->OnApplicationResumeHandle).ID = 0;
  (this->EndFrameDelegateHandle).ID = 0;
  (this->OnScreenDelegateHandle).ID = 0;
  this_00->Ptr = (IConsoleCommand *)0x0;
  this->bValuesValidForAnalytics = true;
  if (bVar9) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("GStatistics == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\Statistics.cpp"
                       ,0x23a,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FOnDemandIoBackendStats *)(*pcVar2)();
      return pFVar4;
    }
  }
  GStatistics = this;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<UE::IoStore::FOnDemandIoBackendStats>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
                     (FOnDemandIoBackendStats *)&stack0x00000018,(pmf_4dfdc52c)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnApplicationResumeHandle).ID = *FVar5.ID;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddLambda<_UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnEndFrame,&local_res20);
                    /* WARNING: Load size is inaccurate */
  (this->EndFrameDelegateHandle).ID = *FVar5.ID;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
          ::
          AddLambda<_UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats_::__l2::<lambda_2>_>
                    (&FCoreDelegates::OnGetOnScreenMessages,&local_98);
                    /* WARNING: Load size is inaccurate */
  (this->OnScreenDelegateHandle).ID = *FVar5.ID;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FOnDemandIoBackendStats *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  pIVar3 = IConsoleManager::Singleton;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_58);
  local_40 = &local_80;
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_80);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  pIVar8 = (IConsoleCommand *)
           (*pcVar2)(pIVar3,L"iax.ResetOnScreenStatistics",
                     L"Resets the values shown by \'DisplayOnScreenStatistics\'",&local_88,0);
  if ((FConsoleCommandUnregister *)this_00 != local_90) {
    pIVar1 = this_00->Ptr;
    this_00->Ptr = pIVar8;
    FConsoleCommandUnregister::operator()((FConsoleCommandUnregister *)this_00,pIVar1);
    pIVar8 = (IConsoleCommand *)0x0;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FOnDemandIoBackendStats *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return this;
}

// ~FOnDemandIoBackendStats @ 1445a92e0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::~FOnDemandIoBackendStats(FOnDemandIoBackendStats *this)

{
  FDelegateHandle FVar1;
  IConsoleCommand *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  FVar1.ID = (this->OnApplicationResumeHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,FVar1);
  }
  FVar1.ID = (this->EndFrameDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               FVar1);
  }
  FVar1.ID = (this->OnScreenDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnGetOnScreenMessages,FVar1);
  }
  pIVar2 = (this->ResetStatisticsCommand).Ptr;
  GStatistics = (FOnDemandIoBackendStats *)0x0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001445a938a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar2,1);
  return;
}

// operator() @ 1445aa840

void __thiscall
`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::__l2::<lambda_1>::operator()
          (void *this)

{
  float fVar1;
  atomic<__int64> aVar2;
  atomic<__int64> aVar3;
  atomic<__int64> aVar4;
  atomic<__int64> aVar5;
  atomic<__int64> aVar6;
  atomic<__int64> aVar7;
  atomic<__int64> aVar8;
  atomic<__int64> aVar9;
  undefined1 local_res10 [8];
  
  aVar9 = UE::IoStore::GCacheRejectBytes.Value;
  aVar8 = UE::IoStore::GCacheReadBytes.Value;
  aVar7 = UE::IoStore::GCacheWrittenBytes.Value;
  aVar6 = UE::IoStore::GCacheCachedBytes.Value;
  aVar5 = UE::IoStore::GCachePutRejectCount.Value;
  aVar4 = UE::IoStore::GCachePutExistingCount.Value;
  aVar3 = UE::IoStore::GCachePutCount.Value;
  aVar2 = UE::IoStore::GCacheErrorCount.Value;
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CacheGetCount.Name,
             UE::IoStore::_GCsvStat_CacheGetCount.CategoryIndex,
             UE::IoStore::GCacheGetCount.Value._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CacheErrorCount.Name,
             UE::IoStore::_GCsvStat_CacheErrorCount.CategoryIndex,aVar2._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CachePutCount.Name,
             UE::IoStore::_GCsvStat_CachePutCount.CategoryIndex,aVar3._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CachePutExistingCount.Name,
             UE::IoStore::_GCsvStat_CachePutExistingCount.CategoryIndex,aVar4._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CachePutRejectCount.Name,
             UE::IoStore::_GCsvStat_CachePutRejectCount.CategoryIndex,aVar5._0_4_,Set);
  fVar1 = __real_35800000;
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CacheCachedMB.Name,
             UE::IoStore::_GCsvStat_CacheCachedMB.CategoryIndex,
             (float)(longlong)aVar6 * __real_35800000,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CacheWrittenMB.Name,
             UE::IoStore::_GCsvStat_CacheWrittenMB.CategoryIndex,(float)(longlong)aVar7 * fVar1,Set)
  ;
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CacheReadMB.Name,
             UE::IoStore::_GCsvStat_CacheReadMB.CategoryIndex,(float)(longlong)aVar8 * fVar1,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_CacheRejectedMB.Name,
             UE::IoStore::_GCsvStat_CacheRejectedMB.CategoryIndex,(float)(longlong)aVar9 * fVar1,Set
            );
  UpdateCSVValues'::__l2::<lambda_1>::operator()(local_res10,Streaming);
  UpdateCSVValues'::__l2::<lambda_1>::operator()(local_res10,Installed);
  UE::IoStore::FOnDemandIoBackendStats::PrintPeriodicLogging(*(FOnDemandIoBackendStats **)this);
  return;
}

// operator() @ 1445abd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::IoStore::FOnDemandIoBackendStats::PrintOnScreenStatistics'::__l2::<lambda_1>::operator()
          (void *this,FIASHostGroup *param_1)

{
  FImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FText *pFVar7;
  undefined1 auStack_2c8 [32];
  EOnScreenMessageSeverity local_2a8 [16];
  TStringView<char> local_298;
  FName local_288;
  TArrayView<FAnsiString_const_,int> local_280;
  TStringView<wchar_t> local_268;
  FText local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  local_2a8[0] = Info;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  pvVar5 = FGenericPlatformString::Memcpy(local_228,L"HostGroup [",0x16);
  local_248.CurPos = (wchar_t *)((longlong)pvVar5 + 0x16);
  if ((param_1->Impl).Object == (FImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_288 = ((param_1->Impl).Object)->Name;
  ::FName::AppendString(&local_288,&local_248);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_248,L"] ",2);
  if ((param_1->Impl).Object == (FImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = UE::IoStore::FOnDemandHostGroup::PrimaryHostIndex(&((param_1->Impl).Object)->HostGroup);
  pFVar1 = (param_1->Impl).Object;
  if (iVar4 == -1) {
    if (pFVar1 == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = UE::IoStore::FOnDemandHostGroup::IsEmpty(&((param_1->Impl).Object)->HostGroup);
    if (bVar3) {
      if (local_248.End < local_248.CurPos + 0xc) {
        TStringBuilderBase<wchar_t>::Extend(&local_248,0xc);
      }
      pvVar5 = FGenericPlatformString::Memcpy(local_248.CurPos,L"Disconnected",0x18);
      local_2a8[0] = Error;
    }
    else {
      if (local_248.End < local_248.CurPos + 0xc) {
        TStringBuilderBase<wchar_t>::Extend(&local_248,0xc);
      }
      pvVar5 = FGenericPlatformString::Memcpy(local_248.CurPos,L"Resolving...",0x18);
    }
    local_248.CurPos = (wchar_t *)((longlong)pvVar5 + 0x18);
  }
  else {
    if (pFVar1 == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::IoStore::FOnDemandHostGroup::PrimaryHost(&((param_1->Impl).Object)->HostGroup,&local_298);
    if (local_248.End < local_248.CurPos + local_298.Size) {
      TStringBuilderBase<wchar_t>::Extend(&local_248,(longlong)local_298.Size);
    }
    if (local_298.Size != 0) {
      local_248.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>
                     (local_248.CurPos,local_298.Size,local_298.DataPtr,local_298.Size);
    }
    if (local_248.End < local_248.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_248,2);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_248.CurPos,L" (",4);
    local_248.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
    if ((param_1->Impl).Object == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::IoStore::FOnDemandHostGroup::PrimaryHostIndex(&((param_1->Impl).Object)->HostGroup);
    pTVar6 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_248,L"%d");
    pTVar6 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar6,L"/",1);
    if ((param_1->Impl).Object == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::IoStore::FOnDemandHostGroup::Hosts(&((param_1->Impl).Object)->HostGroup,&local_280);
    pTVar6 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar6,L"%d");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar6,L")",1);
  }
  pvVar5 = *(void **)this;
  local_298.Size = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
  local_298.DataPtr = (char *)local_248.Base;
  local_268._12_4_ = local_298._12_4_;
  local_268.Size = local_298.Size;
  local_268.DataPtr = local_248.Base;
  pFVar7 = FText::FromStringView(&local_258,&local_268);
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText>(pvVar5,local_2a8,pFVar7);
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return;
}

// operator() @ 1445acce0

void __thiscall
`UE::IoStore::FOnDemandIoBackendStats::UpdateCSVValues'::__l2::<lambda_1>::operator()
          (void *this,EHttpRequestType param_1)

{
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpGetCount[param_1].Name,
             UE::IoStore::_GCsvStat_HttpGetCount[param_1].CategoryIndex,
             (int)UE::IoStore::GHttpGetCount[param_1].Value,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpCancelCount[param_1].Name,
             UE::IoStore::_GCsvStat_HttpCancelCount[param_1].CategoryIndex,
             (int)UE::IoStore::GHttpCancelCount[param_1].Value,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpErrorCount[param_1].Name,
             UE::IoStore::_GCsvStat_HttpErrorCount[param_1].CategoryIndex,
             (int)UE::IoStore::GHttpErrorCount[param_1].Value,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpPendingCount[param_1].Name,
             UE::IoStore::_GCsvStat_HttpPendingCount[param_1].CategoryIndex,
             SUB84(UE::IoStore::GHttpPendingCount[param_1].Value,0),Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpDownloadedMB[param_1].Name,
             UE::IoStore::_GCsvStat_HttpDownloadedMB[param_1].CategoryIndex,
             (float)UE::IoStore::GHttpDownloadedBytes[param_1].Value * __real_35800000,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpBandwidthMbps[param_1].Name,
             UE::IoStore::_GCsvStat_HttpBandwidthMbps[param_1].CategoryIndex,
             UE::IoStore::GHttpBandwidthMbps[param_1].Value,Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpDurationMsAvg[param_1].Name,
             UE::IoStore::_GCsvStat_HttpDurationMsAvg[param_1].CategoryIndex,
             (int)UE::IoStore::GHttpDurationMsAvg[param_1],Set);
  FCsvProfiler::RecordCustomStat
            (&UE::IoStore::_GCsvStat_HttpDurationMsMax[param_1].Name,
             UE::IoStore::_GCsvStat_HttpDurationMsMax[param_1].CategoryIndex,
             UE::IoStore::GHttpDurationMsMax[param_1],Set);
  return;
}

// operator() @ 1445ad3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::IoStore::FOnDemandIoBackendStats::ReportEndPointAnalytics'::__l5::<lambda_1>::operator()
          (void *this,wchar_t *param_1,EHttpRequestType param_2)

{
  uint uVar1;
  atomic<__int64> aVar2;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar3;
  size_t sVar4;
  void *pvVar5;
  long64 lVar6;
  long64 lVar7;
  TStringBuilderBase<wchar_t> *pTVar8;
  wchar_t *pwVar9;
  ulong64 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStackY_fb8 [32];
  TStringView<wchar_t> local_f88;
  TStringView<wchar_t> local_f78;
  TStringView<wchar_t> local_f68;
  TStringView<wchar_t> local_f58;
  undefined8 *local_f48;
  long64 local_f40;
  long64 local_f38;
  long64 local_f30;
  long64 local_f28;
  TStringBuilderBase<wchar_t> *local_f20;
  long64 local_f18;
  TStringBuilderBase<wchar_t> *local_f10;
  double local_f08;
  TStringBuilderBase<wchar_t> *local_f00;
  TStringBuilderBase<wchar_t> *local_ef8;
  double local_ef0;
  TStringBuilderBase<wchar_t> local_ee8;
  TStringBuilderBase<wchar_t> local_ec8 [8];
  TStringBuilderBase<wchar_t> local_dc8;
  TStringBuilderBase<wchar_t> local_da8 [8];
  TStringBuilderBase<wchar_t> local_ca8;
  TStringBuilderBase<wchar_t> local_c88 [8];
  TStringBuilderBase<wchar_t> local_b88;
  TStringBuilderBase<wchar_t> local_b68 [8];
  TStringBuilderBase<wchar_t> local_a68;
  TStringBuilderBase<wchar_t> local_a48 [8];
  TStringBuilderBase<wchar_t> local_948;
  TStringBuilderBase<wchar_t> local_928 [8];
  TStringBuilderBase<wchar_t> local_828;
  TStringBuilderBase<wchar_t> local_808 [8];
  TStringBuilderBase<wchar_t> local_708;
  TStringBuilderBase<wchar_t> local_6e8 [8];
  TStringBuilderBase<wchar_t> local_5e8;
  TStringBuilderBase<wchar_t> local_5c8 [8];
  TStringBuilderBase<wchar_t> local_4c8;
  TStringBuilderBase<wchar_t> local_4a8 [8];
  TStringBuilderBase<wchar_t> local_3a8;
  TStringBuilderBase<wchar_t> local_388 [8];
  TStringBuilderBase<wchar_t> local_288;
  TStringBuilderBase<wchar_t> local_268 [8];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_fb8;
  local_3a8.bIsDynamic = false;
  local_3a8.bIsExternal = false;
  lVar7 = UE::IoStore::GHttpDownloadedBytes[param_2].Value;
  local_3a8.Base = (wchar_t *)local_388;
  local_3a8.End = (wchar_t *)&local_288;
  iVar11 = 0;
  local_f48 = this;
  local_3a8.CurPos = (wchar_t *)local_388;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_388;
  if (&local_288 < (TStringBuilderBase<wchar_t> *)((longlong)&local_388[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_3a8,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_3a8.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    local_3a8.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_3a8,L"HttpDownloadedBytes",0x13);
  local_f88.Size = (int)((longlong)local_3a8.CurPos - (longlong)local_3a8.Base >> 1);
  local_f88.DataPtr = local_3a8.Base;
  lVar6 = UE::IoStore::FDeltaTracking::Get(&UE::IoStore::GDeltaTracking,&local_f88,lVar7);
  local_f18 = lVar6;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3a8);
  local_288.bIsDynamic = false;
  local_288.bIsExternal = false;
  lVar7 = UE::IoStore::GHttpGetCount[param_2].Value;
  local_288.Base = (wchar_t *)local_268;
  iVar11 = 0;
  local_288.End = (wchar_t *)&local_168;
  local_288.CurPos = (wchar_t *)local_268;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_268;
  if (&local_168 < (TStringBuilderBase<wchar_t> *)((longlong)&local_268[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_288,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_288.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    local_288.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_288,L"HttpGetCount",0xc);
  local_f88.Size = (int)((longlong)local_288.CurPos - (longlong)local_288.Base >> 1);
  local_f88.DataPtr = local_288.Base;
  lVar7 = UE::IoStore::FDeltaTracking::Get(&UE::IoStore::GDeltaTracking,&local_f88,lVar7);
  local_f28 = lVar7;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  local_f08 = (double)UE::IoStore::GHttpDurationMsSum[param_2];
  if (UE::IoStore::GHttpDurationMsSum[param_2] < 1) {
    local_ef0 = 0.0;
  }
  else {
    local_ef0 = (__real_408f400000000000 / local_f08) * (double)lVar6;
  }
  if (lVar7 == 0) {
    local_f08 = 0.0;
  }
  else {
    local_f08 = local_f08 / (double)lVar7;
  }
  local_828.Base = (wchar_t *)local_808;
  iVar11 = 0;
  local_828.bIsDynamic = false;
  local_828.bIsExternal = false;
  local_828.End = (wchar_t *)&local_708;
  local_828.CurPos = (wchar_t *)local_808;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_808;
  if (&local_708 < (TStringBuilderBase<wchar_t> *)((longlong)&local_808[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_828,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_828.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    local_828.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_828,L"HttpDataRateMean",0x10);
  if (local_828.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_828.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_828,1);
  }
  *(undefined2 *)(wchar_t **)local_828.CurPos = 0;
  iVar11 = 0;
  local_f88.DataPtr = local_828.Base;
  local_948.Base = (wchar_t *)local_928;
  local_948.End = (wchar_t *)&local_828;
  local_948.bIsDynamic = false;
  local_948.bIsExternal = false;
  local_948.CurPos = (wchar_t *)local_928;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_928;
  if (&local_828 < (TStringBuilderBase<wchar_t> *)((longlong)&local_928[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_948,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_948.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    local_948.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_948,L"HttpDurationSum",0xf);
  if (local_948.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_948.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_948,1);
  }
  *(undefined2 *)(wchar_t **)local_948.CurPos = 0;
  iVar11 = 0;
  local_ef8 = (TStringBuilderBase<wchar_t> *)local_948.Base;
  local_a68.Base = (wchar_t *)local_a48;
  local_a68.End = (wchar_t *)&local_948;
  local_a68.bIsDynamic = false;
  local_a68.bIsExternal = false;
  local_a68.CurPos = (wchar_t *)local_a48;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_a48;
  if (&local_948 < (TStringBuilderBase<wchar_t> *)((longlong)&local_a48[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_a68,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_a68.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    local_a68.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_a68,L"HttpDurationMean",0x10);
  if (local_a68.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_a68.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_a68,1);
  }
  *(undefined2 *)(wchar_t **)local_a68.CurPos = 0;
  iVar11 = 0;
  local_f00 = (TStringBuilderBase<wchar_t> *)local_a68.Base;
  local_b88.Base = (wchar_t *)local_b68;
  local_b88.End = (wchar_t *)&local_a68;
  local_b88.bIsDynamic = false;
  local_b88.bIsExternal = false;
  local_b88.CurPos = (wchar_t *)local_b68;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_b68;
  if (&local_a68 < (TStringBuilderBase<wchar_t> *)((longlong)&local_b68[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_b88,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_b88.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    local_b88.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_b88,L"HttpDownloadedBytes",0x13);
  if (local_b88.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_b88.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_b88,1);
  }
  *(undefined2 *)(wchar_t **)local_b88.CurPos = 0;
  iVar11 = 0;
  local_f10 = (TStringBuilderBase<wchar_t> *)local_b88.Base;
  local_ca8.Base = (wchar_t *)local_c88;
  local_ca8.End = (wchar_t *)&local_b88;
  local_ca8.bIsDynamic = false;
  local_ca8.bIsExternal = false;
  local_ca8.CurPos = (wchar_t *)local_c88;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_c88;
  if (&local_b88 < (TStringBuilderBase<wchar_t> *)((longlong)&local_c88[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_ca8,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_ca8.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    local_ca8.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_ca8,L"HttpGetCount",0xc);
  if (local_ca8.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_ca8.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_ca8,1);
  }
  *(undefined2 *)(wchar_t **)local_ca8.CurPos = 0;
  local_f20 = (TStringBuilderBase<wchar_t> *)local_ca8.Base;
  iVar11 = 0;
  lVar7 = UE::IoStore::GHttpRetryCount[param_2].Value;
  local_4c8.Base = (wchar_t *)local_4a8;
  local_4c8.End = (wchar_t *)&local_3a8;
  local_4c8.bIsDynamic = false;
  local_4c8.bIsExternal = false;
  local_4c8.CurPos = (wchar_t *)local_4a8;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_4a8;
  if (&local_3a8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_4a8[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_4c8,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_4c8.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    pTVar8 = (TStringBuilderBase<wchar_t> *)(uVar10 * 2 + (longlong)pvVar5);
    local_4c8.CurPos = (wchar_t *)pTVar8;
  }
  if (local_4c8.End < &pTVar8->field_0x1c) {
    TStringBuilderBase<wchar_t>::Extend(&local_4c8,0xe);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_4c8.CurPos;
  }
  local_4c8.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pTVar8,0xe,"HttpRetryCount",0xe);
  local_f58.Size = (int)((longlong)local_4c8.CurPos - (longlong)local_4c8.Base >> 1);
  local_f58.DataPtr = local_4c8.Base;
  local_f30 = UE::IoStore::FDeltaTracking::Get(&UE::IoStore::GDeltaTracking,&local_f58,lVar7);
  local_dc8.Base = (wchar_t *)local_da8;
  local_dc8.End = (wchar_t *)&local_ca8;
  local_dc8.bIsDynamic = false;
  local_dc8.bIsExternal = false;
  iVar11 = 0;
  local_dc8.CurPos = (wchar_t *)local_da8;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_da8;
  if (&local_ca8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_da8[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_dc8,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_dc8.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    pTVar8 = (TStringBuilderBase<wchar_t> *)(uVar10 * 2 + (longlong)pvVar5);
    local_dc8.CurPos = (wchar_t *)pTVar8;
  }
  if (local_dc8.End < &pTVar8->field_0x1c) {
    TStringBuilderBase<wchar_t>::Extend(&local_dc8,0xe);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_dc8.CurPos;
  }
  local_dc8.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pTVar8,0xe,"HttpRetryCount",0xe);
  if (local_dc8.End < (TStringBuilderBase<wchar_t> *)(local_dc8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_dc8,1);
  }
  *local_dc8.CurPos = L'\0';
  iVar11 = 0;
  local_f58.DataPtr = local_dc8.Base;
  aVar2 = UE::IoStore::GHttpDecodeErrorCount[param_2].Value;
  local_5e8.Base = (wchar_t *)local_5c8;
  local_5e8.End = (wchar_t *)&local_4c8;
  local_5e8.bIsDynamic = false;
  local_5e8.bIsExternal = false;
  local_5e8.CurPos = (wchar_t *)local_5c8;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_5c8;
  if (&local_4c8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_5c8[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_5e8,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_5e8.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    pTVar8 = (TStringBuilderBase<wchar_t> *)(uVar10 * 2 + (longlong)pvVar5);
    local_5e8.CurPos = (wchar_t *)pTVar8;
  }
  if (local_5e8.End < pTVar8 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_5e8,0x10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_5e8.CurPos;
  }
  local_5e8.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pTVar8,0x10,"HttpDecodeErrors",0x10)
  ;
  local_f68.Size = (int)((longlong)local_5e8.CurPos - (longlong)local_5e8.Base >> 1);
  local_f68.DataPtr = local_5e8.Base;
  local_f38 = UE::IoStore::FDeltaTracking::Get
                        (&UE::IoStore::GDeltaTracking,&local_f68,(long64)aVar2);
  local_ee8.Base = (wchar_t *)local_ec8;
  local_ee8.bIsDynamic = false;
  local_ee8.bIsExternal = false;
  local_ee8.End = (wchar_t *)&local_dc8;
  iVar11 = 0;
  local_ee8.CurPos = (wchar_t *)local_ec8;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_ec8;
  if (&local_dc8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_ec8[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_ee8,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_ee8.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    pTVar8 = (TStringBuilderBase<wchar_t> *)(uVar10 * 2 + (longlong)pvVar5);
    local_ee8.CurPos = (wchar_t *)pTVar8;
  }
  if (local_ee8.End < pTVar8 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_ee8,0x10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_ee8.CurPos;
  }
  local_ee8.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pTVar8,0x10,"HttpDecodeErrors",0x10)
  ;
  if (local_ee8.End < (TStringBuilderBase<wchar_t> *)(local_ee8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_ee8,1);
  }
  *local_ee8.CurPos = L'\0';
  local_f68.DataPtr = local_ee8.Base;
  lVar7 = UE::IoStore::GHttpErrorCount[param_2].Value;
  local_708.Base = (wchar_t *)local_6e8;
  local_708.End = (wchar_t *)&local_5e8;
  iVar12 = 0;
  local_708.bIsDynamic = false;
  local_708.bIsExternal = false;
  iVar11 = iVar12;
  local_708.CurPos = (wchar_t *)local_6e8;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar11 = (int)sVar4;
  }
  uVar10 = (ulong64)iVar11;
  pTVar8 = local_6e8;
  if (&local_5e8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_6e8[0].Base + uVar10 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_708,uVar10);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_708.CurPos;
  }
  if (iVar11 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pTVar8,param_1,uVar10 * 2);
    pTVar8 = (TStringBuilderBase<wchar_t> *)(uVar10 * 2 + (longlong)pvVar5);
    local_708.CurPos = (wchar_t *)pTVar8;
  }
  if (local_708.End < &pTVar8->field_0x1c) {
    TStringBuilderBase<wchar_t>::Extend(&local_708,0xe);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_708.CurPos;
  }
  local_708.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pTVar8,0xe,"HttpErrorCount",0xe);
  local_f78.Size = (int)((longlong)local_708.CurPos - (longlong)local_708.Base >> 1);
  local_f78.DataPtr = local_708.Base;
  local_f40 = UE::IoStore::FDeltaTracking::Get(&UE::IoStore::GDeltaTracking,&local_f78,lVar7);
  local_168.Base = local_148;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar12 = (int)sVar4;
  }
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,param_1,iVar12);
  if (pTVar8->End < pTVar8->CurPos + 0xe) {
    TStringBuilderBase<wchar_t>::Extend(pTVar8,0xe);
  }
  pwVar9 = FGenericPlatformString::Convert<char,wchar_t>(pTVar8->CurPos,0xe,"HttpErrorCount",0xe);
  pTVar8->CurPos = pwVar9;
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'\0';
  local_f78.DataPtr = local_168.Base;
  pTVar3 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)*local_f48;
  uVar1 = pTVar3->ArrayNum + 8;
  if (-1 < (int)uVar1) {
    if (pTVar3->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,(ForAnyElementType *)pTVar3,pTVar3->ArrayNum,&pTVar3->ArrayMax);
    }
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (pTVar3,&local_f78.DataPtr,&local_f40);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (pTVar3,&local_f68.DataPtr,&local_f38);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (pTVar3,&local_f58.DataPtr,&local_f30);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (pTVar3,(wchar_t **)&local_f20,&local_f28);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (pTVar3,(wchar_t **)&local_f10,&local_f18);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
              (pTVar3,(wchar_t **)&local_f00,&local_f08);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (pTVar3,(wchar_t **)&local_ef8,UE::IoStore::GHttpDurationMsSum + param_2);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
              (pTVar3,&local_f88.DataPtr,&local_ef0);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_708);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ee8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_5e8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_dc8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4c8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ca8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a68);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_948);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_828);
    UE::IoStore::GHttpDurationMsSum[param_2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// operator() @ 1445aee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandIoBackendStats::PrintOnScreenStatistics'::__l4::<lambda_2>::operator()
          (void *this,wchar_t *param_1,EHttpRequestType param_2)

{
  void *this_00;
  FText *pFVar1;
  undefined1 auStackY_2d8 [32];
  EOnScreenMessageSeverity local_298 [16];
  TSharedPtr<FCulture,1> local_288;
  undefined1 local_278 [16];
  TStringBuilderBase<wchar_t> local_268;
  FCulture local_248 [2];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_268.Base = (wchar_t *)local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.CurPos = (wchar_t *)local_248;
  local_268.End = (wchar_t *)local_48;
  local_288.Object = (FCulture *)0x0;
  local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::AsMemory((FText *)local_278,UE::IoStore::GHttpDownloadedBytes[param_2].Value,
                           (FNumberFormattingOptions *)0x0,&local_288,IEC);
  FText::ToString(pFVar1);
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_268,L"%s Http: Downloaded: %s (%d) Avg %d ms | Retries: %d | Pending: %d");
  if ((ITextData *)local_278._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_278._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  if (UE::IoStore::GHttpNumPausedRequests[param_2] != (atomic<unsigned_int>)0x0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L" | Paused: %d");
  }
  this_00 = *(void **)this;
  local_288.SharedReferenceCount.ReferenceController._0_4_ =
       (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
  local_288.Object = (FCulture *)local_268.Base;
  local_278._0_8_ = local_268.Base;
  local_278._8_8_ = local_288.SharedReferenceCount.ReferenceController;
  pFVar1 = FText::FromStringView((FText *)&local_288,(TStringView<wchar_t> *)local_278);
  local_298[0] = Info;
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(this_00,local_298,pFVar1);
  if (local_288.Object != (FCulture *)0x0) {
    (**(code **)((((local_288.Object)->Implementation).Ptr)->ICULocale).language)();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return;
}

// Get @ 1445d10a0

FOnDemandIoBackendStats * __cdecl UE::IoStore::FOnDemandIoBackendStats::Get(void)

{
  return GStatistics;
}

// GetIasCacheStats @ 1445d50d0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::GetIasCacheStats
          (FOnDemandIoBackendStats *this,ulong64 *param_1,ulong64 *param_2)

{
  *param_1 = (ulong64)GCacheCachedBytes.Value;
  *param_2 = GCacheMaxBytes;
  return;
}

// OnApplicationResume @ 1445e2d00

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnApplicationResume(FOnDemandIoBackendStats *this)

{
  GAppResumeCount = GAppResumeCount + 1;
  return;
}

// OnCacheBootMs @ 1445e2ec0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCacheBootMs(FOnDemandIoBackendStats *this,ulong64 param_1)

{
  GCacheBootMs = (uint)param_1;
  return;
}

// OnCacheDecodeError @ 1445e2ed0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCacheDecodeError(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  LOCK();
  GCacheDecodeErrorCount.Value = (atomic<__int64>)((longlong)GCacheDecodeErrorCount.Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GCacheDecodeErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GCacheDecodeErrorCount.CounterName,TraceCounterType_Int,
                       GCacheDecodeErrorCount.CounterFlags & 0xf);
    LOCK();
    if (GCacheDecodeErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
      GCacheDecodeErrorCount.CounterId._2_2_ = 0;
      GCacheDecodeErrorCount.CounterId._0_2_ = uVar1;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (GCacheDecodeErrorCount.CounterId._0_2_,(long64)GCacheDecodeErrorCount.Value);
  return;
}

// OnCacheError @ 1445e2f50

void __thiscall UE::IoStore::FOnDemandIoBackendStats::OnCacheError(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  LOCK();
  GCacheErrorCount.Value = (atomic<__int64>)((longlong)GCacheErrorCount.Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GCacheErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GCacheErrorCount.CounterName,TraceCounterType_Int,
                       GCacheErrorCount.CounterFlags & 0xf);
    LOCK();
    if (GCacheErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
      GCacheErrorCount.CounterId._2_2_ = 0;
      GCacheErrorCount.CounterId._0_2_ = uVar1;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue(GCacheErrorCount.CounterId._0_2_,(long64)GCacheErrorCount.Value);
  return;
}

// OnCacheGet @ 1445e2fd0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCacheGet(FOnDemandIoBackendStats *this,ulong64 param_1)

{
  ushort uVar1;
  
  LOCK();
  GCacheGetCount.Value = (atomic<__int64>)((longlong)GCacheGetCount.Value + 1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (GCacheGetCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GCacheGetCount.CounterName,TraceCounterType_Int,
                         GCacheGetCount.CounterFlags & 0xf);
      LOCK();
      if (GCacheGetCount.CounterId == (atomic<unsigned_int>)0x0) {
        GCacheGetCount.CounterId._2_2_ = 0;
        GCacheGetCount.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(GCacheGetCount.CounterId._0_2_,(long64)GCacheGetCount.Value);
  }
  if (param_1 != 0) {
    LOCK();
    GCacheReadBytes.Value = (atomic<__int64>)((longlong)GCacheReadBytes.Value + param_1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCacheReadBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (GCacheReadBytes.CounterName,TraceCounterType_Int,
                           GCacheReadBytes.CounterFlags & 0xf);
        LOCK();
        if (GCacheReadBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheReadBytes.CounterId._2_2_ = 0;
          GCacheReadBytes.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(GCacheReadBytes.CounterId._0_2_,(long64)GCacheReadBytes.Value);
      return;
    }
  }
  return;
}

// OnCachePendingBytes @ 1445e30b0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCachePendingBytes
          (FOnDemandIoBackendStats *this,ulong64 param_1)

{
  ushort uVar1;
  
  if (GCachePendingBytes.Value != (atomic<__int64>)param_1) {
    LOCK();
    UNLOCK();
    GCachePendingBytes.Value = (atomic<__int64>)param_1;
    if (-1 < CountersChannel->Enabled) {
      if (GCachePendingBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (GCachePendingBytes.CounterName,TraceCounterType_Int,
                           GCachePendingBytes.CounterFlags & 0xf);
        LOCK();
        if (GCachePendingBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCachePendingBytes.CounterId._2_2_ = 0;
          GCachePendingBytes.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCachePendingBytes.CounterId._0_2_,(long64)GCachePendingBytes.Value);
      return;
    }
  }
  return;
}

// OnCachePersistedBytes @ 1445e3130

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCachePersistedBytes
          (FOnDemandIoBackendStats *this,ulong64 param_1)

{
  ushort uVar1;
  
  if (GCacheCachedBytes.Value != (atomic<__int64>)param_1) {
    LOCK();
    UNLOCK();
    GCacheCachedBytes.Value = (atomic<__int64>)param_1;
    if (-1 < CountersChannel->Enabled) {
      if (GCacheCachedBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (GCacheCachedBytes.CounterName,TraceCounterType_Int,
                           GCacheCachedBytes.CounterFlags & 0xf);
        LOCK();
        if (GCacheCachedBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheCachedBytes.CounterId._2_2_ = 0;
          GCacheCachedBytes.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheCachedBytes.CounterId._0_2_,(long64)GCacheCachedBytes.Value);
      return;
    }
  }
  return;
}

// OnCachePut @ 1445e31b0

void __thiscall UE::IoStore::FOnDemandIoBackendStats::OnCachePut(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  LOCK();
  GCachePutCount.Value = (atomic<__int64>)((longlong)GCachePutCount.Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GCachePutCount.CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GCachePutCount.CounterName,TraceCounterType_Int,
                       GCachePutCount.CounterFlags & 0xf);
    LOCK();
    if (GCachePutCount.CounterId == (atomic<unsigned_int>)0x0) {
      GCachePutCount.CounterId._2_2_ = 0;
      GCachePutCount.CounterId._0_2_ = uVar1;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue(GCachePutCount.CounterId._0_2_,(long64)GCachePutCount.Value);
  return;
}

// OnCachePutExisting @ 1445e3230

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCachePutExisting
          (FOnDemandIoBackendStats *this,ulong64 param_1)

{
  ushort uVar1;
  
  LOCK();
  GCachePutExistingCount.Value = (atomic<__int64>)((longlong)GCachePutExistingCount.Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GCachePutExistingCount.CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GCachePutExistingCount.CounterName,TraceCounterType_Int,
                       GCachePutExistingCount.CounterFlags & 0xf);
    LOCK();
    if (GCachePutExistingCount.CounterId == (atomic<unsigned_int>)0x0) {
      GCachePutExistingCount.CounterId._2_2_ = 0;
      GCachePutExistingCount.CounterId._0_2_ = uVar1;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (GCachePutExistingCount.CounterId._0_2_,(long64)GCachePutExistingCount.Value);
  return;
}

// OnCachePutReject @ 1445e32b0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCachePutReject
          (FOnDemandIoBackendStats *this,ulong64 param_1)

{
  ushort uVar1;
  
  LOCK();
  GCachePutRejectCount.Value = (atomic<__int64>)((longlong)GCachePutRejectCount.Value + 1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (GCachePutRejectCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GCachePutRejectCount.CounterName,TraceCounterType_Int,
                         GCachePutRejectCount.CounterFlags & 0xf);
      LOCK();
      if (GCachePutRejectCount.CounterId == (atomic<unsigned_int>)0x0) {
        GCachePutRejectCount.CounterId._2_2_ = 0;
        GCachePutRejectCount.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (GCachePutRejectCount.CounterId._0_2_,(long64)GCachePutRejectCount.Value);
  }
  if (param_1 != 0) {
    LOCK();
    GCacheRejectBytes.Value = (atomic<__int64>)((longlong)GCacheRejectBytes.Value + param_1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCacheRejectBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (GCacheRejectBytes.CounterName,TraceCounterType_Int,
                           GCacheRejectBytes.CounterFlags & 0xf);
        LOCK();
        if (GCacheRejectBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheRejectBytes.CounterId._2_2_ = 0;
          GCacheRejectBytes.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheRejectBytes.CounterId._0_2_,(long64)GCacheRejectBytes.Value);
      return;
    }
  }
  return;
}

// OnCacheSetMaxBytes @ 1445e3390

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCacheSetMaxBytes
          (FOnDemandIoBackendStats *this,ulong64 param_1)

{
  GCacheMaxBytes = param_1;
  return;
}

// OnCacheSuspended @ 1445e33a0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCacheSuspended(FOnDemandIoBackendStats *this,double param_1)

{
  ushort uVar1;
  
  if ((GCacheSuspendedSeconds.Value != param_1) &&
     (GCacheSuspendedSeconds.Value = param_1, -1 < CountersChannel->Enabled)) {
    if (GCacheSuspendedSeconds.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GCacheSuspendedSeconds.CounterName,TraceCounterType_Float,
                         GCacheSuspendedSeconds.CounterFlags & 0xf);
      LOCK();
      if (GCacheSuspendedSeconds.CounterId == (atomic<unsigned_int>)0x0) {
        GCacheSuspendedSeconds.CounterId._2_2_ = 0;
        GCacheSuspendedSeconds.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (GCacheSuspendedSeconds.CounterId._0_2_,GCacheSuspendedSeconds.Value);
    return;
  }
  return;
}

// OnCacheWriteBytes @ 1445e3520

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnCacheWriteBytes
          (FOnDemandIoBackendStats *this,ulong64 param_1)

{
  ushort uVar1;
  
  if (param_1 != 0) {
    LOCK();
    GCacheWrittenBytes.Value = (atomic<__int64>)((longlong)GCacheWrittenBytes.Value + param_1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCacheWrittenBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (GCacheWrittenBytes.CounterName,TraceCounterType_Int,
                           GCacheWrittenBytes.CounterFlags & 0xf);
        LOCK();
        if (GCacheWrittenBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheWrittenBytes.CounterId._2_2_ = 0;
          GCacheWrittenBytes.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheWrittenBytes.CounterId._0_2_,(long64)GCacheWrittenBytes.Value);
      return;
    }
  }
  return;
}

// OnHttpCancel @ 1445e4820

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpCancel
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  FChannel *pFVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  
  pFVar1 = CountersChannel;
  GHttpInflightCount[param_1].Value = GHttpInflightCount[param_1].Value + -1;
  if (-1 < pFVar1->Enabled) {
    if (GHttpInflightCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpInflightCount[param_1].CounterName,TraceCounterType_Int,
                         GHttpInflightCount[param_1].CounterFlags & 0xf);
      LOCK();
      if (GHttpInflightCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        GHttpInflightCount[param_1].CounterId = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpInflightCount[param_1].CounterId,0),GHttpInflightCount[param_1].Value);
  }
  LOCK();
  GHttpPendingCount[param_1].Value =
       (atomic<__int64>)((longlong)GHttpPendingCount[param_1].Value + -1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpPendingCount[param_1].CounterName,TraceCounterType_Int,
                         GHttpPendingCount[param_1].CounterFlags & 0xf);
      LOCK();
      if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar2;
        GHttpPendingCount[param_1].CounterId = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpPendingCount[param_1].CounterId,0),
               (long64)GHttpPendingCount[param_1].Value);
  }
  GHttpCancelCount[param_1].Value = GHttpCancelCount[param_1].Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (GHttpCancelCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpCancelCount[param_1].CounterName,TraceCounterType_Int,
                         GHttpCancelCount[param_1].CounterFlags & 0xf);
      LOCK();
      if (GHttpCancelCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
        aVar5._2_2_ = 0;
        aVar5._0_2_ = uVar2;
        GHttpCancelCount[param_1].CounterId = aVar5;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpCancelCount[param_1].CounterId,0),GHttpCancelCount[param_1].Value);
  }
  return;
}

// OnHttpCdnCacheReply @ 1445e4980

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpCdnCacheReply
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1,int param_2)

{
  if (param_2 == -1) {
    GHttpCdnCacheUnknown = GHttpCdnCacheUnknown + 1;
    return;
  }
  if (param_2 != 0) {
    GHttpCdnCacheHit = GHttpCdnCacheHit + 1;
    return;
  }
  GHttpCdnCacheMiss = GHttpCdnCacheMiss + 1;
  return;
}

// OnHttpConnected @ 1445e4ba0

void __thiscall UE::IoStore::FOnDemandIoBackendStats::OnHttpConnected(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  GHttpConnectCount.Value = GHttpConnectCount.Value + 1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GHttpConnectCount.CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GHttpConnectCount.CounterName,TraceCounterType_Int,
                       GHttpConnectCount.CounterFlags & 0xf);
    LOCK();
    if (GHttpConnectCount.CounterId == (atomic<unsigned_int>)0x0) {
      GHttpConnectCount.CounterId._2_2_ = 0;
      GHttpConnectCount.CounterId._0_2_ = uVar1;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue(GHttpConnectCount.CounterId._0_2_,GHttpConnectCount.Value);
  return;
}

// OnHttpDecodeError @ 1445e4c10

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpDecodeError
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  TCounter<__int64,0,std::atomic<__int64>,0> *pTVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  pTVar1 = GHttpDecodeErrorCount + param_1;
  LOCK();
  pTVar1->Value = (atomic<__int64>)((longlong)pTVar1->Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GHttpDecodeErrorCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
    uVar2 = FCountersTrace::OutputInitCounter
                      (GHttpDecodeErrorCount[param_1].CounterName,TraceCounterType_Int,
                       GHttpDecodeErrorCount[param_1].CounterFlags & 0xf);
    LOCK();
    if (GHttpDecodeErrorCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      aVar3._2_2_ = 0;
      aVar3._0_2_ = uVar2;
      GHttpDecodeErrorCount[param_1].CounterId = aVar3;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42(GHttpDecodeErrorCount[param_1].CounterId,0),(long64)pTVar1->Value);
  return;
}

// OnHttpDequeue @ 1445e4c90

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpDequeue
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  
  GHttpInflightCount[param_1].Value = GHttpInflightCount[param_1].Value + 1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GHttpInflightCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GHttpInflightCount[param_1].CounterName,TraceCounterType_Int,
                       GHttpInflightCount[param_1].CounterFlags & 0xf);
    LOCK();
    if (GHttpInflightCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      aVar2._2_2_ = 0;
      aVar2._0_2_ = uVar1;
      GHttpInflightCount[param_1].CounterId = aVar2;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42(GHttpInflightCount[param_1].CounterId,0),GHttpInflightCount[param_1].Value);
  return;
}

// OnHttpDisconnected @ 1445e4d00

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpDisconnected(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  GHttpDisconnectCount.Value = GHttpDisconnectCount.Value + 1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GHttpDisconnectCount.CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GHttpDisconnectCount.CounterName,TraceCounterType_Int,
                       GHttpDisconnectCount.CounterFlags & 0xf);
    LOCK();
    if (GHttpDisconnectCount.CounterId == (atomic<unsigned_int>)0x0) {
      GHttpDisconnectCount.CounterId._2_2_ = 0;
      GHttpDisconnectCount.CounterId._0_2_ = uVar1;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue(GHttpDisconnectCount.CounterId._0_2_,GHttpDisconnectCount.Value);
  return;
}

// OnHttpDistributedEndpointResolved @ 1445e4d70

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpDistributedEndpointResolved
          (FOnDemandIoBackendStats *this)

{
  GHttpDistributedEndpointResolved = true;
  return;
}

// OnHttpEnqueue @ 1445e4d80

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpEnqueue
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  TCounter<__int64,0,std::atomic<__int64>,0> *pTVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  pTVar1 = GHttpPendingCount + param_1;
  LOCK();
  pTVar1->Value = (atomic<__int64>)((longlong)pTVar1->Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
    uVar2 = FCountersTrace::OutputInitCounter
                      (GHttpPendingCount[param_1].CounterName,TraceCounterType_Int,
                       GHttpPendingCount[param_1].CounterFlags & 0xf);
    LOCK();
    if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      aVar3._2_2_ = 0;
      aVar3._0_2_ = uVar2;
      GHttpPendingCount[param_1].CounterId = aVar3;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42(GHttpPendingCount[param_1].CounterId,0),(long64)pTVar1->Value);
  return;
}

// OnHttpError @ 1445e4e00

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpError
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  
  LOCK();
  GHttpPendingCount[param_1].Value =
       (atomic<__int64>)((longlong)GHttpPendingCount[param_1].Value + -1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GHttpPendingCount[param_1].CounterName,TraceCounterType_Int,
                         GHttpPendingCount[param_1].CounterFlags & 0xf);
      LOCK();
      if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
        aVar2._2_2_ = 0;
        aVar2._0_2_ = uVar1;
        GHttpPendingCount[param_1].CounterId = aVar2;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpPendingCount[param_1].CounterId,0),
               (long64)GHttpPendingCount[param_1].Value);
  }
  GHttpInflightCount[param_1].Value = GHttpInflightCount[param_1].Value + -1;
  if (-1 < CountersChannel->Enabled) {
    if (GHttpInflightCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GHttpInflightCount[param_1].CounterName,TraceCounterType_Int,
                         GHttpInflightCount[param_1].CounterFlags & 0xf);
      LOCK();
      if (GHttpInflightCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar1;
        GHttpInflightCount[param_1].CounterId = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpInflightCount[param_1].CounterId,0),GHttpInflightCount[param_1].Value);
  }
  GHttpErrorCount[param_1].Value = GHttpErrorCount[param_1].Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (GHttpErrorCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GHttpErrorCount[param_1].CounterName,TraceCounterType_Int,
                         GHttpErrorCount[param_1].CounterFlags & 0xf);
      LOCK();
      if (GHttpErrorCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar1;
        GHttpErrorCount[param_1].CounterId = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpErrorCount[param_1].CounterId,0),GHttpErrorCount[param_1].Value);
  }
  return;
}

// OnHttpGet @ 1445e4f60

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpGet
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1,ulong64 param_2,ulong64 param_3)

{
  FChannel *pFVar1;
  ushort uVar2;
  ulong64 uVar3;
  longlong lVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  atomic<unsigned_int> aVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  
  uVar12 = (ulonglong)param_1;
  LOCK();
  GHttpPendingCount[uVar12].Value =
       (atomic<__int64>)((longlong)GHttpPendingCount[uVar12].Value + -1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (GHttpPendingCount[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpPendingCount[uVar12].CounterName,TraceCounterType_Int,
                         GHttpPendingCount[uVar12].CounterFlags & 0xf);
      LOCK();
      if (GHttpPendingCount[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
        aVar5._2_2_ = 0;
        aVar5._0_2_ = uVar2;
        GHttpPendingCount[uVar12].CounterId = aVar5;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpPendingCount[uVar12].CounterId,0),(long64)GHttpPendingCount[uVar12].Value)
    ;
  }
  GHttpInflightCount[uVar12].Value = GHttpInflightCount[uVar12].Value + -1;
  if (-1 < CountersChannel->Enabled) {
    if (GHttpInflightCount[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpInflightCount[uVar12].CounterName,TraceCounterType_Int,
                         GHttpInflightCount[uVar12].CounterFlags & 0xf);
      LOCK();
      if (GHttpInflightCount[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
        aVar6._2_2_ = 0;
        aVar6._0_2_ = uVar2;
        GHttpInflightCount[uVar12].CounterId = aVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpInflightCount[uVar12].CounterId,0),GHttpInflightCount[uVar12].Value);
  }
  GHttpGetCount[uVar12].Value = GHttpGetCount[uVar12].Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (GHttpGetCount[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpGetCount[uVar12].CounterName,TraceCounterType_Int,
                         GHttpGetCount[uVar12].CounterFlags & 0xf);
      LOCK();
      if (GHttpGetCount[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
        aVar7._2_2_ = 0;
        aVar7._0_2_ = uVar2;
        GHttpGetCount[uVar12].CounterId = aVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpGetCount[uVar12].CounterId,0),GHttpGetCount[uVar12].Value);
  }
  if ((param_2 != 0) &&
     (GHttpDownloadedBytes[uVar12].Value = GHttpDownloadedBytes[uVar12].Value + param_2,
     -1 < CountersChannel->Enabled)) {
    if (GHttpDownloadedBytes[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpDownloadedBytes[uVar12].CounterName,TraceCounterType_Int,
                         GHttpDownloadedBytes[uVar12].CounterFlags & 0xf);
      LOCK();
      if (GHttpDownloadedBytes[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
        aVar8._2_2_ = 0;
        aVar8._0_2_ = uVar2;
        GHttpDownloadedBytes[uVar12].CounterId = aVar8;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpDownloadedBytes[uVar12].CounterId,0),GHttpDownloadedBytes[uVar12].Value);
  }
  GHttpDurationMsSum[uVar12] = GHttpDurationMsSum[uVar12] + param_3;
  pFVar1 = CountersChannel;
  if ((GHttpDurationMs[uVar12].Value != param_3) &&
     (GHttpDurationMs[uVar12].Value = param_3, -1 < pFVar1->Enabled)) {
    if (GHttpDurationMs[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpDurationMs[uVar12].CounterName,TraceCounterType_Int,
                         GHttpDurationMs[uVar12].CounterFlags & 0xf);
      LOCK();
      if (GHttpDurationMs[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
        aVar9._2_2_ = 0;
        aVar9._0_2_ = uVar2;
        GHttpDurationMs[uVar12].CounterId = aVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpDurationMs[uVar12].CounterId,0),GHttpDurationMs[uVar12].Value);
  }
  lVar4 = GHttpHistory[uVar12].Index;
  GHttpHistory[uVar12].TotalDuration =
       GHttpHistory[uVar12].TotalDuration + (param_3 - GHttpHistory[uVar12].Duration[lVar4]);
  GHttpHistory[uVar12].Duration[lVar4] = param_3;
  lVar4 = GHttpHistory[uVar12].Index;
  GHttpHistory[uVar12].TotalBytes =
       GHttpHistory[uVar12].TotalBytes +
       (param_2 - *(longlong *)(uVar12 * 0x120 + 0x1550804b0 + lVar4 * 8));
  *(ulong64 *)(uVar12 * 0x120 + 0x1550804b0 + lVar4 * 8) = param_2;
  uVar3 = GHttpHistory[uVar12].MaxDuration;
  if (GHttpHistory[uVar12].MaxDuration < (longlong)param_3) {
    uVar3 = param_3;
  }
  GHttpHistory[uVar12].MaxDuration = uVar3;
  lVar4 = GHttpHistory[uVar12].Index + 1;
  uVar11 = (uint)(lVar4 >> 0x3f) & 0xf;
  GHttpHistory[uVar12].Index = (ulonglong)((int)lVar4 + uVar11 & 0xf) - (ulonglong)uVar11;
  pFVar1 = CountersChannel;
  dVar13 = ((double)(GHttpHistory[uVar12].TotalBytes << 3) /
           (double)(GHttpHistory[uVar12].TotalDuration + 1)) * __real_3f50624dd2f1a9fc;
  if ((dVar13 != GHttpBandwidthMbps[uVar12].Value) &&
     (GHttpBandwidthMbps[uVar12].Value = dVar13, -1 < pFVar1->Enabled)) {
    if (GHttpBandwidthMbps[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (GHttpBandwidthMbps[uVar12].CounterName,TraceCounterType_Float,
                         GHttpBandwidthMbps[uVar12].CounterFlags & 0xf);
      LOCK();
      if (GHttpBandwidthMbps[uVar12].CounterId == (atomic<unsigned_int>)0x0) {
        aVar10._2_2_ = 0;
        aVar10._0_2_ = uVar2;
        GHttpBandwidthMbps[uVar12].CounterId = aVar10;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42(GHttpBandwidthMbps[uVar12].CounterId,0),GHttpBandwidthMbps[uVar12].Value);
  }
  lVar4 = GHttpHistory[uVar12].TotalDuration;
  GHttpDurationMsMax[uVar12] = (int)GHttpHistory[uVar12].MaxDuration;
  GHttpDurationMsAvg[uVar12] = (double)lVar4 * __real_3fb0000000000000;
  return;
}

// OnHttpOnRemovedPending @ 1445e5320

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpOnRemovedPending
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  
  LOCK();
  GHttpPendingCount[param_1].Value =
       (atomic<__int64>)((longlong)GHttpPendingCount[param_1].Value + -1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GHttpPendingCount[param_1].CounterName,TraceCounterType_Int,
                       GHttpPendingCount[param_1].CounterFlags & 0xf);
    LOCK();
    if (GHttpPendingCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      aVar2._2_2_ = 0;
      aVar2._0_2_ = uVar1;
      GHttpPendingCount[param_1].CounterId = aVar2;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42(GHttpPendingCount[param_1].CounterId,0),(long64)GHttpPendingCount[param_1].Value)
  ;
  return;
}

// OnHttpPaused @ 1445e53a0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpPaused
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  LOCK();
  GHttpNumPausedRequests[param_1] = (atomic<unsigned_int>)((int)GHttpNumPausedRequests[param_1] + 1)
  ;
  UNLOCK();
  return;
}

// OnHttpRequestCompleted @ 1445e53c0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpRequestCompleted(FOnDemandIoBackendStats *this)

{
  LOCK();
  GHttpNumConcurrentRequests = (atomic<unsigned_int>)((int)GHttpNumConcurrentRequests + -1);
  UNLOCK();
  return;
}

// OnHttpRequestStarted @ 1445e53d0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpRequestStarted(FOnDemandIoBackendStats *this)

{
  LOCK();
  GHttpNumConcurrentRequests = (atomic<unsigned_int>)((int)GHttpNumConcurrentRequests + 1);
  UNLOCK();
  return;
}

// OnHttpRetry @ 1445e53e0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpRetry
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  
  GHttpRetryCount[param_1].Value = GHttpRetryCount[param_1].Value + 1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (GHttpRetryCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (GHttpRetryCount[param_1].CounterName,TraceCounterType_Int,
                       GHttpRetryCount[param_1].CounterFlags & 0xf);
    LOCK();
    if (GHttpRetryCount[param_1].CounterId == (atomic<unsigned_int>)0x0) {
      aVar2._2_2_ = 0;
      aVar2._0_2_ = uVar1;
      GHttpRetryCount[param_1].CounterId = aVar2;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42(GHttpRetryCount[param_1].CounterId,0),GHttpRetryCount[param_1].Value);
  return;
}

// OnHttpUnpaused @ 1445e5450

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnHttpUnpaused
          (FOnDemandIoBackendStats *this,EHttpRequestType param_1)

{
  LOCK();
  GHttpNumPausedRequests[param_1] =
       (atomic<unsigned_int>)((int)GHttpNumPausedRequests[param_1] + -1);
  UNLOCK();
  return;
}

// OnIoRequestCancel @ 1445e55b0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnIoRequestCancel(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  GIoRequestCancelCount.Value = GIoRequestCancelCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (GIoRequestCancelCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GIoRequestCancelCount.CounterName,TraceCounterType_Int,
                         GIoRequestCancelCount.CounterFlags & 0xf);
      LOCK();
      if (GIoRequestCancelCount.CounterId == (atomic<unsigned_int>)0x0) {
        GIoRequestCancelCount.CounterId._2_2_ = 0;
        GIoRequestCancelCount.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (GIoRequestCancelCount.CounterId._0_2_,GIoRequestCancelCount.Value);
  }
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameIoRequestCancelCount.Name,
             _GCsvStat_FrameIoRequestCancelCount.CategoryIndex,(int)GIoRequestCancelCount.Value,Set)
  ;
  return;
}

// OnIoRequestComplete @ 1445e5640

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnIoRequestComplete
          (FOnDemandIoBackendStats *this,ulong64 param_1,ulong64 param_2)

{
  ushort uVar1;
  
  LOCK();
  GIoRequestReadCount.Value = (atomic<__int64>)((longlong)GIoRequestReadCount.Value + 1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (GIoRequestReadCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GIoRequestReadCount.CounterName,TraceCounterType_Int,
                         GIoRequestReadCount.CounterFlags & 0xf);
      LOCK();
      if (GIoRequestReadCount.CounterId == (atomic<unsigned_int>)0x0) {
        GIoRequestReadCount.CounterId._2_2_ = 0;
        GIoRequestReadCount.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (GIoRequestReadCount.CounterId._0_2_,(long64)GIoRequestReadCount.Value);
  }
  if (param_1 != 0) {
    LOCK();
    GIoRequestReadBytes.Value = (atomic<__int64>)((longlong)GIoRequestReadBytes.Value + param_1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GIoRequestReadBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (GIoRequestReadBytes.CounterName,TraceCounterType_Int,
                           GIoRequestReadBytes.CounterFlags & 0xf);
        LOCK();
        if (GIoRequestReadBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GIoRequestReadBytes.CounterId._2_2_ = 0;
          GIoRequestReadBytes.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GIoRequestReadBytes.CounterId._0_2_,(long64)GIoRequestReadBytes.Value);
    }
  }
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameIoRequestReadCount.Name,_GCsvStat_FrameIoRequestReadCount.CategoryIndex
             ,GIoRequestReadCount.Value._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameIoRequestReadMB.Name,_GCsvStat_FrameIoRequestReadMB.CategoryIndex,
             (int)((ulonglong)GIoRequestReadBytes.Value >> 0x14),Set);
  return;
}

// OnIoRequestEnqueue @ 1445e5760

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnIoRequestEnqueue(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  GIoRequestCount.Value = GIoRequestCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (GIoRequestCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GIoRequestCount.CounterName,TraceCounterType_Int,
                         GIoRequestCount.CounterFlags & 0xf);
      LOCK();
      if (GIoRequestCount.CounterId == (atomic<unsigned_int>)0x0) {
        GIoRequestCount.CounterId._2_2_ = 0;
        GIoRequestCount.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(GIoRequestCount.CounterId._0_2_,GIoRequestCount.Value);
  }
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameIoRequestCount.Name,_GCsvStat_FrameIoRequestCount.CategoryIndex,
             (int)GIoRequestCount.Value,Set);
  return;
}

// OnIoRequestError @ 1445e57f0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::OnIoRequestError(FOnDemandIoBackendStats *this)

{
  ushort uVar1;
  
  LOCK();
  GIoRequestErrorCount.Value = (atomic<__int64>)((longlong)GIoRequestErrorCount.Value + 1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (GIoRequestErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (GIoRequestErrorCount.CounterName,TraceCounterType_Int,
                         GIoRequestErrorCount.CounterFlags & 0xf);
      LOCK();
      if (GIoRequestErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
        GIoRequestErrorCount.CounterId._2_2_ = 0;
        GIoRequestErrorCount.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (GIoRequestErrorCount.CounterId._0_2_,(long64)GIoRequestErrorCount.Value);
  }
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameIoRequestErrorCount.Name,
             _GCsvStat_FrameIoRequestErrorCount.CategoryIndex,GIoRequestErrorCount.Value._0_4_,Set);
  return;
}

// PrintOnScreenStatistics @ 1445e9eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::PrintOnScreenStatistics
          (FOnDemandIoBackendStats *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  atomic<unsigned_char> *paVar2;
  code *pcVar3;
  atomic<unsigned_int> aVar4;
  bool bVar5;
  void *pvVar6;
  FText *pFVar7;
  FHostGroupManager *pFVar8;
  TStringBuilderBase<wchar_t> *pTVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStackY_c48 [32];
  EOnScreenMessageSeverity local_c18 [16];
  TSharedPtr<FCulture,1> local_c08;
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  *local_bf8;
  int iStack_bf0;
  undefined4 uStack_bec;
  FString local_be8;
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  *local_bd8;
  TSharedPtr<FCulture,1> local_bd0;
  TSharedPtr<FCulture,1> local_bc0;
  TStringView<wchar_t> local_ba8;
  FText local_b98;
  TStringView<wchar_t> local_b88;
  FText local_b78;
  TStringView<wchar_t> local_b68;
  FText local_b58;
  FText local_b48;
  FText local_b38;
  FText local_b28;
  undefined1 local_b18 [16];
  FText local_b08;
  undefined1 local_af8 [16];
  FText local_ae8;
  TStringBuilderBase<wchar_t> local_ad8;
  FScriptContainerElement local_ab8 [512];
  TStringBuilderBase<wchar_t> local_8b8;
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  local_898 [6];
  TStringBuilderBase<wchar_t> local_698;
  FCulture local_678 [2];
  TStringBuilderBase<wchar_t> local_478;
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  local_458 [6];
  TStringBuilderBase<wchar_t> local_258;
  FCulture local_238 [2];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_c48;
  local_ad8.Base = (wchar_t *)local_ab8;
  local_ad8.bIsDynamic = false;
  local_ad8.bIsExternal = false;
  local_ad8.CurPos = (wchar_t *)local_ab8;
  local_ad8.End = (wchar_t *)&local_8b8;
  pvVar6 = FGenericPlatformString::Memcpy(local_ab8,L"IAS Backend Status: ",0x28);
  paVar2 = &this->BackendStatus->Flags;
  local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x28);
  if (((byte)*paVar2 & 1) == 0) {
    if (local_ad8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x4cU)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ad8,0x12);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L"Caching - Disabled",0x24);
    local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x24);
  }
  else {
    if (local_ad8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x4aU)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ad8,0x11);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L"Caching - Enabled",0x22);
    local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x22);
  }
  if (local_ad8.End < (TStringBuilderBase<wchar_t> *)(local_ad8.CurPos + 3)) {
    TStringBuilderBase<wchar_t>::Extend(&local_ad8,3);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L" | ",6);
  local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 6);
  if ((((byte)*paVar2 & 2) == 0) || (GIasHttpEnabled == false)) {
    if (local_ad8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x24U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ad8,0xf);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L"Http - Disabled",0x1e);
    local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x1e);
  }
  else {
    if (local_ad8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x22U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ad8,0xe);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L"Http - Enabled",0x1c);
    local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x1c);
  }
  if (local_ad8.End < (TStringBuilderBase<wchar_t> *)(local_ad8.CurPos + 3)) {
    TStringBuilderBase<wchar_t>::Extend(&local_ad8,3);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L" | ",6);
  local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 6);
  if ((((((byte)*paVar2 & 2) == 0) || (GIasHttpEnabled == false)) || (((byte)*paVar2 & 4) != 0)) ||
     (GIasHttpOptionalBulkDataEnabled == false)) {
    if (local_ad8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x32U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ad8,0x16);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L"Optional Mips Disabled",0x2c);
    local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2c);
  }
  else {
    if (local_ad8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x30U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ad8,0x15);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_ad8.CurPos,L"Optional Mips Enabled",0x2a);
    local_ad8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2a);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_ad8,L" | HTTP I/O dispatcher: %s");
  local_be8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_ad8.Base;
  local_be8.Data.ArrayNum = (int)((longlong)local_ad8.CurPos - (longlong)local_ad8.Base >> 1);
  local_ba8._12_4_ = local_be8.Data.ArrayMax;
  local_ba8.Size = local_be8.Data.ArrayNum;
  local_ba8.DataPtr = local_ad8.Base;
  pFVar7 = FText::FromStringView(&local_b98,&local_ba8);
  local_c18[0] = Info;
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_c18,pFVar7);
  if (local_b98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b98.TextData.Reference + 0x10))();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ad8);
  pFVar8 = FHostGroupManager::Get();
  SRWLock = &pFVar8->Mutex;
  local_bf8 = param_1;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar14 = (pFVar8->HostGroups).ArrayNum;
  pFVar13 = (pFVar8->HostGroups).AllocatorInstance.Data;
  pFVar12 = pFVar13 + (longlong)iVar14 * 0x10;
  while( true ) {
    if ((pFVar8->HostGroups).ArrayNum != iVar14) {
      `TCheckedPointerIterator<UE::IoStore::FIASHostGroup_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c18 + 5);
    }
    if (pFVar13 == pFVar12) break;
    `UE::IoStore::FOnDemandIoBackendStats::PrintOnScreenStatistics'::__l2::<lambda_1>::operator()
              (&local_bf8,(FIASHostGroup *)pFVar13);
    pFVar13 = pFVar13 + 0x10;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  local_478.Base = (wchar_t *)local_458;
  local_478.CurPos = (wchar_t *)local_458;
  local_478.bIsDynamic = false;
  local_478.bIsExternal = false;
  local_478.End = (wchar_t *)&local_258;
  local_bd8 = param_1;
  pvVar6 = FGenericPlatformString::Memcpy(local_458,L"IAX Http:",0x12);
  local_478.CurPos = (wchar_t *)((longlong)pvVar6 + 0x12);
  if (local_478.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x16U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_478,2);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_478.CurPos,L" v",4);
  local_478.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_478,L"%d");
  pTVar9 = &local_478;
  if (GIasHttpRateLimitKiBPerSecond < 1) {
    iVar14 = 0x13;
    pwVar11 = L" DataRate Cap: None";
  }
  else {
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L" DataRate Cap: ",0xf);
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar9,L"%d");
    iVar14 = 5;
    pwVar11 = L"KiB/s";
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,pwVar11,iVar14);
  aVar4 = GHttpNumConcurrentRequests;
  if (local_478.End < (TStringBuilderBase<wchar_t> *)(local_478.CurPos + 0x15)) {
    TStringBuilderBase<wchar_t>::Extend(&local_478,0x15);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_478.CurPos,L" ConcurrentRequests: ",0x2a);
  local_478.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2a);
  pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_478,L"%d");
  pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L"/",1);
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar9,L"%d");
  if (GIasHttpConcurrentRequests <= (int)aVar4) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_478,L"(saturated)",0xb);
  }
  local_bf8 = (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
               *)local_478.Base;
  iStack_bf0 = (int)((longlong)local_478.CurPos - (longlong)local_478.Base >> 1);
  local_b88._12_4_ = uStack_bec;
  local_b88.Size = iStack_bf0;
  local_b88.DataPtr = local_478.Base;
  pFVar7 = FText::FromStringView(&local_b78,&local_b88);
  local_c18[1] = 0;
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_c18 + 1,pFVar7);
  if (local_b78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b78.TextData.Reference + 0x10))();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
  `UE::IoStore::FOnDemandIoBackendStats::PrintOnScreenStatistics'::__l4::<lambda_2>::operator()
            (&local_bd8,L"IAS",Streaming);
  `UE::IoStore::FOnDemandIoBackendStats::PrintOnScreenStatistics'::__l4::<lambda_2>::operator()
            (&local_bd8,L"IAD",Installed);
  local_8b8.Base = (wchar_t *)local_898;
  local_8b8.bIsDynamic = false;
  local_8b8.bIsExternal = false;
  local_8b8.CurPos = (wchar_t *)local_898;
  local_8b8.End = (wchar_t *)&local_698;
  pvVar6 = FGenericPlatformString::Memcpy(local_898,L"IAX CDN: Hit/Miss/NoHdr: ",0x32);
  local_8b8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x32);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_8b8,L"%u");
  if (local_8b8.End < (TStringBuilderBase<wchar_t> *)(local_8b8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_8b8,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_8b8.CurPos,&u__,2);
  local_8b8.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_8b8,L"%u");
  if (local_8b8.End < (TStringBuilderBase<wchar_t> *)(local_8b8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_8b8,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_8b8.CurPos,&u__,2);
  local_8b8.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_8b8,L"%u");
  if (GHttpCdnCacheUnknown + GHttpCdnCacheMiss + GHttpCdnCacheHit != 0) {
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8b8,L" - ",3);
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar9,L"%u");
    if (local_8b8.End < (TStringBuilderBase<wchar_t> *)(local_8b8.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8b8,2);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_8b8.CurPos,L"%/",4);
    local_8b8.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8b8,L"%u");
    if (local_8b8.End < (TStringBuilderBase<wchar_t> *)(local_8b8.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8b8,2);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_8b8.CurPos,L"%/",4);
    local_8b8.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8b8,L"%u");
    if (local_8b8.End < (TStringBuilderBase<wchar_t> *)(local_8b8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8b8,1);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_8b8.CurPos,L"%",2);
    local_8b8.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  }
  local_bf8 = (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
               *)local_8b8.Base;
  iStack_bf0 = (int)((longlong)local_8b8.CurPos - (longlong)local_8b8.Base >> 1);
  local_b68._12_4_ = uStack_bec;
  local_b68.Size = iStack_bf0;
  local_b68.DataPtr = local_8b8.Base;
  pFVar7 = FText::FromStringView(&local_b58,&local_b68);
  local_c18[2] = 0;
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_c18 + 2,pFVar7);
  if (local_b58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b58.TextData.Reference + 0x10))();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8b8);
  local_698.Base = (wchar_t *)local_678;
  local_698.bIsDynamic = false;
  local_698.bIsExternal = false;
  local_698.CurPos = (wchar_t *)local_678;
  local_698.End = (wchar_t *)&local_478;
  pvVar6 = FGenericPlatformString::Memcpy(local_678,L"IAS Cache Stats: ",0x22);
  local_698.CurPos = (wchar_t *)((longlong)pvVar6 + 0x22);
  if (((byte)this->BackendStatus->Flags & 1) == 0) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_698,L"Caching Disabled",0x10);
  }
  else {
    if (local_698.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar6 + 0x32U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_698,8);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_698.CurPos,L"Cached: ",0x10);
    local_698.CurPos = (wchar_t *)((longlong)pvVar6 + 0x10);
    local_bd0.Object = (FCulture *)0x0;
    local_bd0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_b48,(ulong64)GCacheCachedBytes.Value,
                             (FNumberFormattingOptions *)0x0,&local_bd0,IEC);
    pFVar10 = FText::ToString(pFVar7);
    iVar1 = (pFVar10->Data).ArrayNum;
    iVar14 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar14 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_698,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
    if (local_b48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b48.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bd0.SharedReferenceCount.ReferenceController);
    if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 0xd)) {
      TStringBuilderBase<wchar_t>::Extend(&local_698,0xd);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_698.CurPos,L" | Rejected: ",0x1a);
    local_698.CurPos = (wchar_t *)((longlong)pvVar6 + 0x1a);
    local_bc0.Object = (FCulture *)0x0;
    local_bc0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_b38,(ulong64)GCacheRejectBytes.Value,
                             (FNumberFormattingOptions *)0x0,&local_bc0,IEC);
    pFVar10 = FText::ToString(pFVar7);
    iVar1 = (pFVar10->Data).ArrayNum;
    iVar14 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar14 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_698,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
    if (local_b38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b38.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bc0.SharedReferenceCount.ReferenceController);
    if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 9)) {
      TStringBuilderBase<wchar_t>::Extend(&local_698,9);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_698.CurPos,L" | Read: ",0x12);
    local_698.CurPos = (wchar_t *)((longlong)pvVar6 + 0x12);
    local_c08.Object = (FCulture *)0x0;
    local_c08.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsMemory(&local_b28,(ulong64)GCacheReadBytes.Value,
                             (FNumberFormattingOptions *)0x0,&local_c08,IEC);
    pFVar10 = FText::ToString(pFVar7);
    iVar1 = (pFVar10->Data).ArrayNum;
    iVar14 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar14 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_698,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
    if (local_b28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b28.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c08.SharedReferenceCount.ReferenceController);
    if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_698,2);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_698.CurPos,L" (",4);
    local_698.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_698,L"%lld");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L")",1);
    if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 8)) {
      TStringBuilderBase<wchar_t>::Extend(&local_698,8);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_698.CurPos,L" (Boot: ",0x10);
    local_698.CurPos = (wchar_t *)((longlong)pvVar6 + 0x10);
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_698,L"%u");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L"ms)",3);
    if (0.0 < GCacheSuspendedSeconds.Value) {
      ::FString::PrintfImpl(&local_be8,L" (Suspended: %.2lfs)");
      iVar14 = local_be8.Data.ArrayNum + -1;
      if (local_be8.Data.ArrayNum == 0) {
        iVar14 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_698,(wchar_t *)local_be8.Data.AllocatorInstance.Data,iVar14);
      if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_be8.Data.AllocatorInstance.Data);
      }
    }
  }
  local_c08.Object = (FCulture *)local_698.Base;
  local_c08.SharedReferenceCount.ReferenceController._0_4_ =
       (int)((longlong)local_698.CurPos - (longlong)local_698.Base >> 1);
  local_b18._0_8_ = local_698.Base;
  local_b18._8_8_ = local_c08.SharedReferenceCount.ReferenceController;
  pFVar7 = FText::FromStringView(&local_b08,(TStringView<wchar_t> *)local_b18);
  local_c18[3] = 0;
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_c18 + 3,pFVar7);
  if (local_b08.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b08.TextData.Reference + 0x10))();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_698);
  if (((0 < (longlong)GHttpDecodeErrorCount[0].Value) ||
      (0 < (longlong)GCacheDecodeErrorCount.Value)) || (0 < GHttpErrorCount[0].Value)) {
    local_258.Base = (wchar_t *)local_238;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    local_258.CurPos = (wchar_t *)local_238;
    local_258.End = (wchar_t *)local_38;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_258,L"IAS Errors: Cache Decode: %d | Http Decode: %d | Http: %d");
    local_c08.Object = (FCulture *)local_258.Base;
    local_c08.SharedReferenceCount.ReferenceController._0_4_ =
         (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
    local_af8._0_8_ = local_258.Base;
    local_af8._8_8_ = local_c08.SharedReferenceCount.ReferenceController;
    pFVar7 = FText::FromStringView(&local_ae8,(TStringView<wchar_t> *)local_af8);
    local_c18[4] = 2;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_c18 + 4,pFVar7);
    if (local_ae8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ae8.TextData.Reference + 0x10))();
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  }
  return;
}

// PrintPeriodicLogging @ 1445ead00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::PrintPeriodicLogging(FOnDemandIoBackendStats *this)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  LARGE_INTEGER local_res10;
  
  dVar4 = LastLogTime;
  if (0.0 < GIasStatisticsLogInterval) {
    QueryPerformanceCounter(&local_res10);
    dVar3 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    dVar4 = LastLogTime;
    if ((double)GIasStatisticsLogInterval < dVar3 - LastLogTime) {
      if (((byte)this->BackendStatus->Flags & 1) == 0) {
        if (4 < (byte)LogIas._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
        }
      }
      else if (4 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      if ((4 < (byte)LogIas._0_1_) &&
         (Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u__s___HttpStats__150d8b568,
                     (FLogCategoryBase *)&LogIas), 4 < (byte)LogIas._0_1_)) {
        Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u__s___HttpStats__150d8b568,
                   (FLogCategoryBase *)&LogIas);
      }
      LOCK();
      bVar5 = FInstallerTraceCounters::Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar5) {
        FInstallerTraceCounters::Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar5) {
        FMutex::LockSlow(&FInstallerTraceCounters::Mutex);
      }
      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      LOCK();
      aVar2 = FInstallerTraceCounters::Mutex.State + -1;
      UNLOCK();
      bVar1 = (byte)FInstallerTraceCounters::Mutex.State & 2;
      FInstallerTraceCounters::Mutex.State = aVar2;
      dVar4 = dVar3;
      if (bVar1 != 0) {
        FMutex::WakeWaitingThread(&FInstallerTraceCounters::Mutex);
      }
    }
  }
  LastLogTime = dVar4;
  return;
}

// ReportEndPointAnalytics @ 1445f79b0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::ReportEndPointAnalytics
          (FOnDemandIoBackendStats *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  atomic<__int64> aVar2;
  atomic<__int64> aVar3;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_res18;
  float local_res20 [2];
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  atomic<__int64> local_40;
  
  if ((GIasReportHttpAnalyticsEnabled) && (this->bValuesValidForAnalytics != false)) {
    local_res18 = param_1;
    `UE::IoStore::FOnDemandIoBackendStats::ReportEndPointAnalytics'::__l5::<lambda_1>::operator()
              (&local_res18,L"Ias",Streaming);
    `UE::IoStore::FOnDemandIoBackendStats::ReportEndPointAnalytics'::__l5::<lambda_1>::operator()
              (&local_res18,L"Iad",Installed);
    uVar1 = param_1->ArrayNum + 1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (param_1->ArrayMax < (int)uVar1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bcd0;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>
              (param_1,(wchar_t **)&local_res18,&GHttpIoDispatcherEnabled);
  }
  aVar3 = GCachePutCount.Value;
  aVar2 = GCacheGetCount.Value;
  if (GIasReportCacheAnalyticsEnabled != false) {
    local_res20[0] = 0.0;
    if (0 < GCacheMaxBytes) {
      local_res20[0] =
           ((float)(longlong)GCacheCachedBytes.Value / (float)GCacheMaxBytes) * __real_42c80000;
    }
    local_58.Size = 0x13;
    local_58.DataPtr = L"IasCacheRejectBytes";
    local_58.DataPtr =
         (wchar_t *)FDeltaTracking::Get(&GDeltaTracking,&local_58,(long64)GCacheRejectBytes.Value);
    local_68.Size = 0x11;
    local_68.DataPtr = L"IasCacheReadBytes";
    local_68.DataPtr =
         (wchar_t *)FDeltaTracking::Get(&GDeltaTracking,&local_68,(long64)GCacheReadBytes.Value);
    local_78.Size = 0x12;
    local_78.DataPtr = L"IasCacheWriteBytes";
    local_78.DataPtr =
         (wchar_t *)FDeltaTracking::Get(&GDeltaTracking,&local_78,(long64)GCacheWrittenBytes.Value);
    local_88.Size = 0x10;
    local_40 = GCacheCachedBytes.Value;
    local_88.DataPtr = L"IasCachePutCount";
    local_88.DataPtr =
         (wchar_t *)FDeltaTracking::Get(&GDeltaTracking,&local_88,(long64)GCachePutCount.Value);
    local_98.Size = 0x10;
    local_98.DataPtr = L"IasCacheGetCount";
    local_98.DataPtr =
         (wchar_t *)FDeltaTracking::Get(&GDeltaTracking,&local_98,(long64)GCacheGetCount.Value);
    local_a8.Size = 0x14;
    local_a8.DataPtr = L"IasCacheDecodeErrors";
    local_a8.DataPtr =
         (wchar_t *)
         FDeltaTracking::Get(&GDeltaTracking,&local_a8,(long64)GCacheDecodeErrorCount.Value);
    local_b8.Size = 0x12;
    local_b8.DataPtr = L"IasCacheErrorCount";
    local_b8.DataPtr =
         (wchar_t *)FDeltaTracking::Get(&GDeltaTracking,&local_b8,(long64)GCacheErrorCount.Value);
    local_c8.Size = 0x12;
    local_c8.DataPtr = L"IasCacheTotalCount";
    local_c8.DataPtr =
         (wchar_t *)FDeltaTracking::Get(&GDeltaTracking,&local_c8,(longlong)aVar3 + (longlong)aVar2)
    ;
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)
                  (CONCAT71(local_res18._1_7_,this->BackendStatus->Flags) & 0xffffffffffffff01);
    uVar1 = param_1->ArrayNum + 0xc;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (param_1->ArrayMax < (int)uVar1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_48 = L"IasCacheEnabled";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>
              (param_1,&local_48,(bool *)&local_res18);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bea0;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_c8);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8be78;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_b8);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8be48;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_a8);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8be20;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_98);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bdf8;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_88);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bdd0;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_40);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bda8;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,&GCacheMaxBytes);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bd78;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,float>
              (param_1,(wchar_t **)&local_res18,local_res20);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bd50;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_78);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bd28;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_68);
    local_res18 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)0x150d8bd00;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,(wchar_t **)&local_res18,(long64 *)&local_58);
  }
  return;
}

// ReportGeneralAnalytics @ 1445f7e60

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::ReportGeneralAnalytics
          (FOnDemandIoBackendStats *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  bool local_res10 [8];
  wchar_t *local_res18 [2];
  
  local_res10[0] = 0 < GHttpConnectCount.Value;
  uVar1 = param_1->ArrayNum + 3;
  if (-1 < (int)uVar1) {
    if (param_1->ArrayMax < (int)uVar1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_res18[0] = L"IasAppResumeCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
              (param_1,local_res18,&GAppResumeCount);
    local_res18[0] = L"IasHttpDistributedEndpointResolved";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>
              (param_1,local_res18,&GHttpDistributedEndpointResolved);
    local_res18[0] = L"IasHttpHasEverConnected";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>(param_1,local_res18,local_res10);
    GAppResumeCount = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ResetOnScreenStatistics @ 1445f8cb0

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::ResetOnScreenStatistics(FOnDemandIoBackendStats *this)

{
  FChannel *pFVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> *paVar8;
  bool bVar9;
  
  paVar8 = &GHttpDownloadedBytes[0].CounterId;
  do {
    pFVar1 = CountersChannel;
    if ((*(longlong *)(paVar8 + -4) != 0) &&
       (*(undefined8 *)(paVar8 + -4) = 0, -1 < pFVar1->Enabled)) {
      if (*paVar8 == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (*(wchar_t **)(paVar8 + -2),TraceCounterType_Int,
                           *(ETraceCounterDisplayHint *)(paVar8 + 1) & 0xf);
        LOCK();
        if (*paVar8 == (atomic<unsigned_int>)0x0) {
          aVar3._2_2_ = 0;
          aVar3._0_2_ = uVar2;
          *paVar8 = aVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(SUB42(*paVar8,0),*(long64 *)(paVar8 + -4));
    }
    bVar9 = paVar8 != &GHttpDownloadedBytes[1].CounterId;
    paVar8 = paVar8 + 6;
  } while (bVar9);
  paVar8 = &GHttpGetCount[0].CounterId;
  do {
    pFVar1 = CountersChannel;
    if ((*(longlong *)(paVar8 + -4) != 0) &&
       (*(undefined8 *)(paVar8 + -4) = 0, -1 < pFVar1->Enabled)) {
      if (*paVar8 == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (*(wchar_t **)(paVar8 + -2),TraceCounterType_Int,
                           *(ETraceCounterDisplayHint *)(paVar8 + 1) & 0xf);
        LOCK();
        if (*paVar8 == (atomic<unsigned_int>)0x0) {
          aVar4._2_2_ = 0;
          aVar4._0_2_ = uVar2;
          *paVar8 = aVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(SUB42(*paVar8,0),*(long64 *)(paVar8 + -4));
    }
    bVar9 = paVar8 != &GHttpGetCount[1].CounterId;
    paVar8 = paVar8 + 6;
  } while (bVar9);
  GHttpDurationMsAvg[0] = 0.0;
  GHttpDurationMsAvg[1] = 0.0;
  paVar8 = &GHttpRetryCount[0].CounterId;
  do {
    pFVar1 = CountersChannel;
    if ((*(longlong *)(paVar8 + -4) != 0) &&
       (*(undefined8 *)(paVar8 + -4) = 0, -1 < pFVar1->Enabled)) {
      if (*paVar8 == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (*(wchar_t **)(paVar8 + -2),TraceCounterType_Int,
                           *(ETraceCounterDisplayHint *)(paVar8 + 1) & 0xf);
        LOCK();
        if (*paVar8 == (atomic<unsigned_int>)0x0) {
          aVar5._2_2_ = 0;
          aVar5._0_2_ = uVar2;
          *paVar8 = aVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(SUB42(*paVar8,0),*(long64 *)(paVar8 + -4));
    }
    bVar9 = paVar8 != &GHttpRetryCount[1].CounterId;
    paVar8 = paVar8 + 6;
  } while (bVar9);
  GHttpCdnCacheHit = 0;
  GHttpCdnCacheMiss = 0;
  GHttpCdnCacheUnknown = 0;
  if (GCacheRejectBytes.Value != (atomic<__int64>)0x0) {
    LOCK();
    GCacheRejectBytes.Value = (atomic<__int64>)0x0;
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCacheRejectBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (GCacheRejectBytes.CounterName,TraceCounterType_Int,
                           GCacheRejectBytes.CounterFlags & 0xf);
        LOCK();
        if (GCacheRejectBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheRejectBytes.CounterId._2_2_ = 0;
          GCacheRejectBytes.CounterId._0_2_ = uVar2;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheRejectBytes.CounterId._0_2_,(long64)GCacheRejectBytes.Value);
    }
  }
  if (GCacheReadBytes.Value != (atomic<__int64>)0x0) {
    LOCK();
    GCacheReadBytes.Value = (atomic<__int64>)0x0;
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCacheReadBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (GCacheReadBytes.CounterName,TraceCounterType_Int,
                           GCacheReadBytes.CounterFlags & 0xf);
        LOCK();
        if (GCacheReadBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheReadBytes.CounterId._2_2_ = 0;
          GCacheReadBytes.CounterId._0_2_ = uVar2;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(GCacheReadBytes.CounterId._0_2_,(long64)GCacheReadBytes.Value);
    }
  }
  if (GCacheGetCount.Value != (atomic<__int64>)0x0) {
    LOCK();
    GCacheGetCount.Value = (atomic<__int64>)0x0;
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCacheGetCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (GCacheGetCount.CounterName,TraceCounterType_Int,
                           GCacheGetCount.CounterFlags & 0xf);
        LOCK();
        if (GCacheGetCount.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheGetCount.CounterId._2_2_ = 0;
          GCacheGetCount.CounterId._0_2_ = uVar2;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(GCacheGetCount.CounterId._0_2_,(long64)GCacheGetCount.Value);
    }
  }
  if (GCacheDecodeErrorCount.Value != (atomic<__int64>)0x0) {
    LOCK();
    GCacheDecodeErrorCount.Value = (atomic<__int64>)0x0;
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCacheDecodeErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (GCacheDecodeErrorCount.CounterName,TraceCounterType_Int,
                           GCacheDecodeErrorCount.CounterFlags & 0xf);
        LOCK();
        if (GCacheDecodeErrorCount.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheDecodeErrorCount.CounterId._2_2_ = 0;
          GCacheDecodeErrorCount.CounterId._0_2_ = uVar2;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheDecodeErrorCount.CounterId._0_2_,(long64)GCacheDecodeErrorCount.Value);
    }
  }
  paVar8 = &GHttpDecodeErrorCount[0].CounterId;
  do {
    if (*(longlong *)(paVar8 + -4) != 0) {
      LOCK();
      *(undefined8 *)(paVar8 + -4) = 0;
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (*paVar8 == (atomic<unsigned_int>)0x0) {
          uVar2 = FCountersTrace::OutputInitCounter
                            (*(wchar_t **)(paVar8 + -2),TraceCounterType_Int,
                             *(ETraceCounterDisplayHint *)(paVar8 + 1) & 0xf);
          LOCK();
          if (*paVar8 == (atomic<unsigned_int>)0x0) {
            aVar6._2_2_ = 0;
            aVar6._0_2_ = uVar2;
            *paVar8 = aVar6;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue(SUB42(*paVar8,0),*(long64 *)(paVar8 + -4));
      }
    }
    bVar9 = paVar8 != &GHttpDecodeErrorCount[1].CounterId;
    paVar8 = paVar8 + 6;
  } while (bVar9);
  paVar8 = &GHttpErrorCount[0].CounterId;
  do {
    pFVar1 = CountersChannel;
    if ((*(longlong *)(paVar8 + -4) != 0) &&
       (*(undefined8 *)(paVar8 + -4) = 0, -1 < pFVar1->Enabled)) {
      if (*paVar8 == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          (*(wchar_t **)(paVar8 + -2),TraceCounterType_Int,
                           *(ETraceCounterDisplayHint *)(paVar8 + 1) & 0xf);
        LOCK();
        if (*paVar8 == (atomic<unsigned_int>)0x0) {
          aVar7._2_2_ = 0;
          aVar7._0_2_ = uVar2;
          *paVar8 = aVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(SUB42(*paVar8,0),*(long64 *)(paVar8 + -4));
    }
    bVar9 = paVar8 != &GHttpErrorCount[1].CounterId;
    paVar8 = paVar8 + 6;
  } while (bVar9);
  this->bValuesValidForAnalytics = false;
  return;
}

// SetHttpIoDispatcherEnabled @ 1445ff280

void __thiscall
UE::IoStore::FOnDemandIoBackendStats::SetHttpIoDispatcherEnabled
          (FOnDemandIoBackendStats *this,bool param_1)

{
  GHttpIoDispatcherEnabled = param_1;
  return;
}

// StartAnalyticsRecording @ 1446011d0

TUniquePtr<UE::IoStore::IAnalyticsRecording,TDefaultDelete<UE::IoStore::IAnalyticsRecording>_>
__thiscall
UE::IoStore::FOnDemandIoBackendStats::StartAnalyticsRecording(FOnDemandIoBackendStats *this)

{
  IAnalyticsRecording *in_RDX;
  
  *in_RDX = (IAnalyticsRecording)0x0;
  return (TUniquePtr<UE::IoStore::IAnalyticsRecording,TDefaultDelete<UE::IoStore::IAnalyticsRecording>_>
          )in_RDX;
}

// UpdateCSVValues @ 14460b3d0

void __thiscall UE::IoStore::FOnDemandIoBackendStats::UpdateCSVValues(FOnDemandIoBackendStats *this)

{
  float fVar1;
  atomic<__int64> aVar2;
  atomic<__int64> aVar3;
  atomic<__int64> aVar4;
  atomic<__int64> aVar5;
  atomic<__int64> aVar6;
  atomic<__int64> aVar7;
  atomic<__int64> aVar8;
  atomic<__int64> aVar9;
  undefined1 local_res10 [8];
  
  aVar9 = GCacheRejectBytes.Value;
  aVar8 = GCacheReadBytes.Value;
  aVar7 = GCacheWrittenBytes.Value;
  aVar6 = GCacheCachedBytes.Value;
  aVar5 = GCachePutRejectCount.Value;
  aVar4 = GCachePutExistingCount.Value;
  aVar3 = GCachePutCount.Value;
  aVar2 = GCacheErrorCount.Value;
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CacheGetCount.Name,_GCsvStat_CacheGetCount.CategoryIndex,
             GCacheGetCount.Value._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CacheErrorCount.Name,_GCsvStat_CacheErrorCount.CategoryIndex,aVar2._0_4_,Set
            );
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CachePutCount.Name,_GCsvStat_CachePutCount.CategoryIndex,aVar3._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CachePutExistingCount.Name,_GCsvStat_CachePutExistingCount.CategoryIndex,
             aVar4._0_4_,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CachePutRejectCount.Name,_GCsvStat_CachePutRejectCount.CategoryIndex,
             aVar5._0_4_,Set);
  fVar1 = __real_35800000;
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CacheCachedMB.Name,_GCsvStat_CacheCachedMB.CategoryIndex,
             (float)(longlong)aVar6 * __real_35800000,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CacheWrittenMB.Name,_GCsvStat_CacheWrittenMB.CategoryIndex,
             (float)(longlong)aVar7 * fVar1,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CacheReadMB.Name,_GCsvStat_CacheReadMB.CategoryIndex,
             (float)(longlong)aVar8 * fVar1,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_CacheRejectedMB.Name,_GCsvStat_CacheRejectedMB.CategoryIndex,
             (float)(longlong)aVar9 * fVar1,Set);
  `UE::IoStore::FOnDemandIoBackendStats::UpdateCSVValues'::__l2::<lambda_1>::operator()
            (local_res10,Streaming);
  `UE::IoStore::FOnDemandIoBackendStats::UpdateCSVValues'::__l2::<lambda_1>::operator()
            (local_res10,Installed);
  return;
}

