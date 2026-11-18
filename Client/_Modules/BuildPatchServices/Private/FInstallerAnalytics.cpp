// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FInstallerAnalytics @ 143280fc0

FInstallerAnalytics * __thiscall
BuildPatchServices::FInstallerAnalytics::FInstallerAnalytics
          (FInstallerAnalytics *this,IAnalyticsProvider *param_1)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FInstallerAnalytics *pFVar7;
  FTSTicker *this_00;
  undefined8 *puVar8;
  ulong64 uVar9;
  TWeakPtr<FTSTicker::FElement,1> *pTVar10;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  this->Analytics = param_1;
  this->_padding_ = (longlong)&___7FInstallerAnalytics_BuildPatchServices__6B_;
  (this->DownloadErrors).Counter = 0;
  (this->CacheErrors).Counter = 0;
  (this->ConstructionErrors).Counter = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AnalyticsEventQueueCS,4000);
  pTVar1 = &this->TickerHandle;
  (this->AnalyticsEventQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AnalyticsEventQueue).ArrayNum = 0;
  (this->AnalyticsEventQueue).ArrayMax = 0;
  if (this->Analytics == (IAnalyticsProvider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Analytics",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerAnalytics.cpp"
                       ,0x5b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FInstallerAnalytics *)(*pcVar5)();
      return pFVar7;
    }
  }
  this_00 = FTSTicker::GetCoreTicker();
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallerAnalytics_BuildPatchServices____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[4] = Tick;
    puVar8[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar10 = FTSTicker::AddTicker
                      (this_00,&local_78,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
  if (pTVar1 != pTVar10) {
    pTVar1->Object = pTVar10->Object;
    pTVar10->Object = (FElement *)0x0;
    pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar10->WeakReferenceCount).ReferenceController;
    (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return this;
}

// ~FInstallerAnalytics @ 1432885a0

void __thiscall
BuildPatchServices::FInstallerAnalytics::~FInstallerAnalytics(FInstallerAnalytics *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FInstallerAnalytics_BuildPatchServices__6B_;
  local_18.Object = (this->TickerHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
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
  DestructItems<BuildPatchServices::FAnalyticsEventInfo,int>
            ((FAnalyticsEventInfo *)(this->AnalyticsEventQueue).AllocatorInstance.Data,
             (this->AnalyticsEventQueue).ArrayNum);
  pFVar4 = (this->AnalyticsEventQueue).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AnalyticsEventQueueCS);
  this->_padding_ = (longlong)&___7IInstallerAnalytics_BuildPatchServices__6B_;
  return;
}

// Flush @ 1432d1040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FInstallerAnalytics::Flush(FInstallerAnalytics *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FAnalyticsEventInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_BuildPatchServices::FInstallerAnalytics::Flush(void)_::_2_::FStat_STAT_FInstallerAnalytics_Tick>
  FVar9;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  
  bVar7 = IsInGameThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerAnalytics.cpp"
                       ,0xa9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->Analytics == (IAnalyticsProvider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Analytics",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerAnalytics.cpp"
                       ,0xaa,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FInstallerAnalytics_Tick ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_BuildPatchServices::FInstallerAnalytics::Flush(void)_::_2_::FStat_STAT_FInstallerAnalytics_Tick>
           )0x0) {
        pFVar8 = ::FName::FName(&local_res20,"STAT_FInstallerAnalytics_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FInstallerAnalytics_Tick,*pFVar8,
                   L"STAT_FInstallerAnalytics_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_FInstallerAnalytics_Tick;
  if (StatPtr_STAT_FInstallerAnalytics_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_BuildPatchServices::FInstallerAnalytics::Flush(void)_::_2_::FStat_STAT_FInstallerAnalytics_Tick>
       )0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_FInstallerAnalytics_Tick");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_BuildPatchServices::FInstallerAnalytics::Flush(void)_::_2_::FStat_STAT_FInstallerAnalytics_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FInstallerAnalytics_Tick,*pFVar8
                         ,L"STAT_FInstallerAnalytics_Tick","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar7 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerAnalytics.cpp"
                   ,0xac);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar11.Value;
      uStackX_c = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_1432d120e;
    }
  }
  bVar5 = false;
  FVar12 = local_60;
LAB_1432d120e:
  lpCriticalSection = &this->AnalyticsEventQueueCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->AnalyticsEventQueue).ArrayNum;
    pFVar13 = (this->AnalyticsEventQueue).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar2 * 0x20;
    while( true ) {
      if ((this->AnalyticsEventQueue).ArrayNum != iVar2) {
        `TCheckedPointerIterator<BuildPatchServices::FAnalyticsEventInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar13 == pFVar14) break;
      (**(code **)((longlong)*this->Analytics + 0x80))(this->Analytics,pFVar13);
      pFVar13 = pFVar13 + 0x20;
    }
    piVar1 = &(this->AnalyticsEventQueue).ArrayMax;
    pFVar3 = (FAnalyticsEventInfo *)(this->AnalyticsEventQueue).AllocatorInstance.Data;
    iVar2 = (this->AnalyticsEventQueue).ArrayNum;
    if ((this->AnalyticsEventQueue).ArrayMax < 0) {
      DestructItems<BuildPatchServices::FAnalyticsEventInfo,int>(pFVar3,iVar2);
      (this->AnalyticsEventQueue).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->AnalyticsEventQueue).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<BuildPatchServices::FAnalyticsEventInfo,int>(pFVar3,iVar2);
      (this->AnalyticsEventQueue).ArrayNum = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar5) {
      FThreadStats::AddMessage(FVar12,CycleScopeEnd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// QueueAnalyticsEvent @ 1432e37a0

void __thiscall
BuildPatchServices::FInstallerAnalytics::QueueAnalyticsEvent
          (FInstallerAnalytics *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  lpCriticalSection = &this->AnalyticsEventQueueCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar7 = (this->AnalyticsEventQueue).ArrayNum;
    piVar1 = &(this->AnalyticsEventQueue).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->AnalyticsEventQueue).AllocatorInstance,piVar1);
    }
    (this->AnalyticsEventQueue).ArrayNum = iVar7 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data;
    pFVar8 = (this->AnalyticsEventQueue).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar7 = param_2->ArrayNum;
    iVar2 = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    pFVar6 = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (param_1->Data).ArrayNum;
    iVar4 = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    *(FScriptContainerElement **)pFVar8 = pFVar6;
    *(int *)(pFVar8 + 8) = iVar3;
    *(int *)(pFVar8 + 0xc) = iVar4;
    *(FScriptContainerElement **)(pFVar8 + 0x10) = pFVar5;
    *(int *)(pFVar8 + 0x18) = iVar7;
    *(int *)(pFVar8 + 0x1c) = iVar2;
    DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    pFVar5 = (param_2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RecordChunkCacheError @ 1432e38a0

/* WARNING: Removing unreachable block (ram,0x0001432e40b1) */
/* WARNING: Removing unreachable block (ram,0x0001432e3ce7) */
/* WARNING: Removing unreachable block (ram,0x0001432e3af9) */
/* WARNING: Removing unreachable block (ram,0x0001432e3ecf) */
/* WARNING: Removing unreachable block (ram,0x0001432e42aa) */
/* WARNING: Removing unreachable block (ram,0x0001432e40bf) */
/* WARNING: Removing unreachable block (ram,0x0001432e3cf5) */
/* WARNING: Removing unreachable block (ram,0x0001432e3b08) */
/* WARNING: Removing unreachable block (ram,0x0001432e3edd) */
/* WARNING: Removing unreachable block (ram,0x0001432e42b8) */

void __thiscall
BuildPatchServices::FInstallerAnalytics::RecordChunkCacheError
          (FInstallerAnalytics *this,FGuid *param_1,FString *param_2,int param_3,FString *param_4,
          FString *param_5)

{
  FThreadSafeCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  FString local_198;
  FScriptContainerElement *local_188;
  undefined8 local_180;
  FScriptContainerElement *local_178;
  undefined8 local_170;
  undefined8 local_168;
  FScriptContainerElement local_160;
  undefined4 local_15c;
  FScriptContainerElement *local_158;
  undefined8 local_150;
  FString local_148;
  undefined8 local_138;
  FScriptContainerElement local_130;
  undefined4 local_12c;
  FScriptContainerElement *local_128;
  undefined8 local_120;
  FString local_118;
  undefined8 local_108;
  FScriptContainerElement local_100;
  undefined4 local_fc;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  FString local_e8;
  undefined8 local_d8;
  FScriptContainerElement local_d0;
  undefined4 local_cc;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  FString local_b8;
  undefined8 local_a8;
  FScriptContainerElement local_a0;
  undefined4 local_9c;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  LOCK();
  pFVar1 = &this->CacheErrors;
  iVar5 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (0x14 < iVar5 + 1) {
    return;
  }
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  FGuid::AppendString(param_1,&local_198,Digits);
  pFVar6 = ::FString::FString(&local_88,L"ChunkGuid");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e395c:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e395c;
  }
  local_188 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180._0_4_ = (pFVar6->Data).ArrayNum;
  local_180._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  local_178 = local_198.Data.AllocatorInstance.Data;
  local_170._0_4_ = local_198.Data.ArrayNum;
  local_170._4_4_ = local_198.Data.ArrayMax;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  local_168 = 0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160 = (FScriptContainerElement)0x0;
  local_15c = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_1a8.Data <= (FScriptContainerElement *)&local_188) &&
      ((FScriptContainerElement *)&local_188 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x30))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_1a0;
  if ((int)local_1a0 == local_1a0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar5 + 1);
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30) = local_188;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 8) = (undefined4)local_180;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0xc) = local_180._4_4_;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30 + 0x10) = local_178;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x18) = (int)local_170;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x1c) = local_170._4_4_;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x20) = local_168;
  local_1a8.Data[lVar7 * 0x30 + 0x28] = local_160;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0x2c) = local_15c;
  local_170 = 0;
  local_178 = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_188 = (FScriptContainerElement *)0x0;
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_78,L"Filename");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e3b6d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e3b6d;
  }
  local_158 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150._0_4_ = (pFVar6->Data).ArrayNum;
  local_150._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_148,param_2);
  local_138 = 0;
  local_130 = (FScriptContainerElement)0x0;
  local_12c = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_1a8.Data <= (FScriptContainerElement *)&local_158) &&
      ((FScriptContainerElement *)&local_158 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x30))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_1a0;
  if ((int)local_1a0 == local_1a0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar5 + 1);
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30) = local_158;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 8) = (undefined4)local_150;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0xc) = local_150._4_4_;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30 + 0x10) =
       local_148.Data.AllocatorInstance.Data;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x18) = local_148.Data.ArrayNum;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x1c) = local_148.Data.ArrayMax;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x20) = local_138;
  local_1a8.Data[lVar7 * 0x30 + 0x28] = local_130;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0x2c) = local_12c;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_158 = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_68,L"LastError");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e3d4b:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e3d4b;
  }
  local_128 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120._0_4_ = (pFVar6->Data).ArrayNum;
  local_120._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_118,L"%d");
  local_108 = 0;
  local_100 = (FScriptContainerElement)0x0;
  local_fc = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_1a8.Data <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x30))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_1a0;
  if ((int)local_1a0 == local_1a0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar5 + 1);
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30) = local_128;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 8) = (undefined4)local_120;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0xc) = local_120._4_4_;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30 + 0x10) =
       local_118.Data.AllocatorInstance.Data;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x18) = local_118.Data.ArrayNum;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x1c) = local_118.Data.ArrayMax;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x20) = local_108;
  local_1a8.Data[lVar7 * 0x30 + 0x28] = local_100;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0x2c) = local_fc;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_128 = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_58,L"SystemName");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e3f33:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e3f33;
  }
  local_f8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0._0_4_ = (pFVar6->Data).ArrayNum;
  local_f0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_e8,param_4);
  local_d8 = 0;
  local_d0 = (FScriptContainerElement)0x0;
  local_cc = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_1a8.Data <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_1a0;
  if ((int)local_1a0 == local_1a0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar5 + 1);
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30) = local_f8;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 8) = (undefined4)local_f0;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0xc) = local_f0._4_4_;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30 + 0x10) =
       local_e8.Data.AllocatorInstance.Data;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x18) = local_e8.Data.ArrayNum;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x1c) = local_e8.Data.ArrayMax;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x20) = local_d8;
  local_1a8.Data[lVar7 * 0x30 + 0x28] = local_d0;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0x2c) = local_cc;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_f8 = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_48,L"ErrorString");
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 != 0) goto LAB_1432e413b;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1432e413b:
  local_c8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = (pFVar6->Data).ArrayNum;
  local_c0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_b8,param_5);
  local_a8 = 0;
  local_a0 = (FScriptContainerElement)0x0;
  local_9c = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_1a8.Data <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_1a0;
  if ((int)local_1a0 == local_1a0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  local_98.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30) = local_c8;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 8) = (undefined4)local_c0;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0xc) = local_c0._4_4_;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar7 * 0x30 + 0x10) =
       local_b8.Data.AllocatorInstance.Data;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x18) = local_b8.Data.ArrayNum;
  *(int *)(local_1a8.Data + lVar7 * 0x30 + 0x1c) = local_b8.Data.ArrayMax;
  *(undefined8 *)(local_1a8.Data + lVar7 * 0x30 + 0x20) = local_a8;
  local_1a8.Data[lVar7 * 0x30 + 0x28] = local_a0;
  *(undefined4 *)(local_1a8.Data + lVar7 * 0x30 + 0x2c) = local_9c;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_c8 = (FScriptContainerElement *)0x0;
  local_98.AllocatorInstance.Data = local_1a8.Data;
  local_98.ArrayMax = local_1a0._4_4_;
  local_1a0 = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(local_38,L"Patcher.Error.Cache");
  QueueAnalyticsEvent(this,pFVar6,&local_98);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_1a8.Data,(int)local_1a0);
  if ((FAnalyticsEventAttribute *)local_1a8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// RecordChunkDownloadAborted @ 1432e4350

/* WARNING: Removing unreachable block (ram,0x0001432e4569) */
/* WARNING: Removing unreachable block (ram,0x0001432e4578) */

void __thiscall
BuildPatchServices::FInstallerAnalytics::RecordChunkDownloadAborted
          (FInstallerAnalytics *this,FString *param_1,double param_2,double param_3,double param_4,
          double param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  FAnalyticsEventAttribute *pFVar7;
  wchar_t *pwVar8;
  double local_res18;
  double local_res20;
  ForAnyElementType local_188;
  undefined8 local_180;
  FAnalyticsEventAttribute local_178;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FAnalyticsEventAttribute local_d8;
  FAnalyticsEventAttribute local_a8;
  FAnalyticsEventAttribute local_78;
  FAnalyticsEventAttribute local_48;
  
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  pFVar5 = ::FString::FString(&local_138,L"ChunkURL");
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 != 0) goto LAB_1432e4400;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1432e4400:
  local_178.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_178.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_178.AttrValueString,param_1);
  local_178.AttrValueBool = false;
  local_178.AttrValueNumber = 0.0;
  local_178.AttrType = String;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_188.Data <= &local_178) &&
      (&local_178 < (FAnalyticsEventAttribute *)(local_188.Data + (longlong)local_180._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_180;
  if ((int)local_180 == local_180._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_188,(int *)((longlong)&local_180 + 4));
  }
  lVar6 = (longlong)iVar4;
  *(undefined8 *)&local_188.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_188.Data[lVar6 * 0x30].field_0x0 =
       local_178.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_188.Data + lVar6 * 0x30 + 8) = local_178.AttrName.Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0xc) = local_178.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_188.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_188.Data + lVar6 * 0x30 + 0x10) =
       local_178.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x18) = local_178.AttrValueString.Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x1c) = local_178.AttrValueString.Data.ArrayMax;
  *(double *)(local_188.Data + lVar6 * 0x30 + 0x20) = local_178.AttrValueNumber;
  local_188.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_178.AttrValueBool;
  *(AttrTypeEnum *)(local_188.Data + lVar6 * 0x30 + 0x2c) = local_178.AttrType;
  local_178.AttrValueString.Data.ArrayNum = 0;
  local_178.AttrValueString.Data.ArrayMax = 0;
  local_178.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.AttrName.Data.ArrayNum = 0;
  local_178.AttrName.Data.ArrayMax = 0;
  local_178.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180._0_4_ = iVar4 + 1;
  pFVar5 = ::FString::FString(&local_128,L"ChunkTime");
  pFVar7 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>
                     (&local_d8,pFVar5,&local_res18);
  if (((local_188.Data <= pFVar7) &&
      (pFVar7 < (FAnalyticsEventAttribute *)(local_188.Data + (longlong)local_180._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)local_180 == local_180._4_4_) {
    local_180._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_188,(int *)((longlong)&local_180 + 4));
  }
  lVar6 = (longlong)(int)local_180;
  local_180 = CONCAT44(local_180._4_4_,(int)local_180 + 1);
  *(undefined8 *)&local_188.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_188.Data[lVar6 * 0x30].field_0x0 =
       (pFVar7->AttrName).Data.AllocatorInstance.Data;
  (pFVar7->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 8) = (pFVar7->AttrName).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0xc) = (pFVar7->AttrName).Data.ArrayMax;
  (pFVar7->AttrName).Data.ArrayNum = 0;
  (pFVar7->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_188.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_188.Data + lVar6 * 0x30 + 0x10) =
       (pFVar7->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar7->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x18) = (pFVar7->AttrValueString).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x1c) = (pFVar7->AttrValueString).Data.ArrayMax;
  (pFVar7->AttrValueString).Data.ArrayNum = 0;
  (pFVar7->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_188.Data + lVar6 * 0x30 + 0x20) = pFVar7->AttrValueNumber;
  local_188.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)pFVar7->AttrValueBool;
  *(AttrTypeEnum *)(local_188.Data + lVar6 * 0x30 + 0x2c) = pFVar7->AttrType;
  if (local_d8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_d8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&local_118,L"ChunkMean");
  pFVar7 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>
                     (&local_a8,pFVar5,&local_res20);
  if (((local_188.Data <= pFVar7) &&
      (pFVar7 < (FAnalyticsEventAttribute *)(local_188.Data + (longlong)local_180._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_180;
  if ((int)local_180 == local_180._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_188,(int *)((longlong)&local_180 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_180 = CONCAT44(local_180._4_4_,iVar4 + 1);
  *(undefined8 *)&local_188.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_188.Data[lVar6 * 0x30].field_0x0 =
       (pFVar7->AttrName).Data.AllocatorInstance.Data;
  (pFVar7->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 8) = (pFVar7->AttrName).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0xc) = (pFVar7->AttrName).Data.ArrayMax;
  (pFVar7->AttrName).Data.ArrayNum = 0;
  (pFVar7->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_188.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_188.Data + lVar6 * 0x30 + 0x10) =
       (pFVar7->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar7->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x18) = (pFVar7->AttrValueString).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x1c) = (pFVar7->AttrValueString).Data.ArrayMax;
  (pFVar7->AttrValueString).Data.ArrayNum = 0;
  (pFVar7->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_188.Data + lVar6 * 0x30 + 0x20) = pFVar7->AttrValueNumber;
  local_188.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)pFVar7->AttrValueBool;
  *(AttrTypeEnum *)(local_188.Data + lVar6 * 0x30 + 0x2c) = pFVar7->AttrType;
  if (local_a8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_a8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&local_108,L"ChunkStd");
  pFVar7 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>(&local_78,pFVar5,&param_4);
  if (((local_188.Data <= pFVar7) &&
      (pFVar7 < (FAnalyticsEventAttribute *)(local_188.Data + (longlong)local_180._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_180;
  if ((int)local_180 == local_180._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_188,(int *)((longlong)&local_180 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_180 = CONCAT44(local_180._4_4_,iVar4 + 1);
  *(undefined8 *)&local_188.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_188.Data[lVar6 * 0x30].field_0x0 =
       (pFVar7->AttrName).Data.AllocatorInstance.Data;
  (pFVar7->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 8) = (pFVar7->AttrName).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0xc) = (pFVar7->AttrName).Data.ArrayMax;
  (pFVar7->AttrName).Data.ArrayNum = 0;
  (pFVar7->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_188.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_188.Data + lVar6 * 0x30 + 0x10) =
       (pFVar7->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar7->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x18) = (pFVar7->AttrValueString).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x1c) = (pFVar7->AttrValueString).Data.ArrayMax;
  (pFVar7->AttrValueString).Data.ArrayNum = 0;
  (pFVar7->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_188.Data + lVar6 * 0x30 + 0x20) = pFVar7->AttrValueNumber;
  local_188.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)pFVar7->AttrValueBool;
  *(AttrTypeEnum *)(local_188.Data + lVar6 * 0x30 + 0x2c) = pFVar7->AttrType;
  if (local_78.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_78.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&local_f8,L"BreakingPoint");
  pFVar7 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>(&local_48,pFVar5,&param_5);
  if (((local_188.Data <= pFVar7) &&
      (pFVar7 < (FAnalyticsEventAttribute *)(local_188.Data + (longlong)local_180._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_180;
  if ((int)local_180 == local_180._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_188,(int *)((longlong)&local_180 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_180 = CONCAT44(local_180._4_4_,iVar4 + 1);
  *(undefined8 *)&local_188.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_188.Data[lVar6 * 0x30].field_0x0 =
       (pFVar7->AttrName).Data.AllocatorInstance.Data;
  (pFVar7->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 8) = (pFVar7->AttrName).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0xc) = (pFVar7->AttrName).Data.ArrayMax;
  (pFVar7->AttrName).Data.ArrayNum = 0;
  (pFVar7->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_188.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_188.Data + lVar6 * 0x30 + 0x10) =
       (pFVar7->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar7->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x18) = (pFVar7->AttrValueString).Data.ArrayNum;
  *(int *)(local_188.Data + lVar6 * 0x30 + 0x1c) = (pFVar7->AttrValueString).Data.ArrayMax;
  (pFVar7->AttrValueString).Data.ArrayNum = 0;
  (pFVar7->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_188.Data + lVar6 * 0x30 + 0x20) = pFVar7->AttrValueNumber;
  local_188.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)pFVar7->AttrValueBool;
  *(AttrTypeEnum *)(local_188.Data + lVar6 * 0x30 + 0x2c) = pFVar7->AttrType;
  if (local_48.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_48.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AttrName.Data.AllocatorInstance.Data);
  }
  local_148.AllocatorInstance.Data = local_188.Data;
  local_148.ArrayNum = (int)local_180;
  local_148.ArrayMax = local_180._4_4_;
  local_180 = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_e8,L"Patcher.Warning.ChunkAborted");
  QueueAnalyticsEvent(this,pFVar5,&local_148);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_188.Data,(int)local_180);
  if ((FAnalyticsEventAttribute *)local_188.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_188.Data);
  }
  return;
}

// RecordChunkDownloadError @ 1432e4b10

/* WARNING: Removing unreachable block (ram,0x0001432e4f29) */
/* WARNING: Removing unreachable block (ram,0x0001432e4d43) */
/* WARNING: Removing unreachable block (ram,0x0001432e511b) */
/* WARNING: Removing unreachable block (ram,0x0001432e4f37) */
/* WARNING: Removing unreachable block (ram,0x0001432e4d52) */
/* WARNING: Removing unreachable block (ram,0x0001432e5129) */

void __thiscall
BuildPatchServices::FInstallerAnalytics::RecordChunkDownloadError
          (FInstallerAnalytics *this,FString *param_1,int param_2,FString *param_3)

{
  FThreadSafeCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_118;
  undefined8 local_110;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement local_e0;
  undefined4 local_dc;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  FString local_c8;
  undefined8 local_b8;
  FScriptContainerElement local_b0;
  undefined4 local_ac;
  FScriptContainerElement *local_a8;
  undefined8 local_a0;
  FString local_98;
  undefined8 local_88;
  FScriptContainerElement local_80;
  undefined4 local_7c;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  LOCK();
  pFVar1 = &this->DownloadErrors;
  iVar5 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (0x14 < iVar5 + 1) {
    return;
  }
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  pFVar6 = ::FString::FString(&local_68,L"ChunkURL");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e4bb4:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e4bb4;
  }
  local_108 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100._0_4_ = (pFVar6->Data).ArrayNum;
  local_100._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_f8,param_1);
  local_e0 = (FScriptContainerElement)0x0;
  local_e8 = 0;
  local_dc = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_118.Data <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < local_118.Data + (longlong)local_110._4_4_ * 0x30))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_118,(int *)((longlong)&local_110 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_110 = CONCAT44(local_110._4_4_,iVar5 + 1);
  *(undefined8 *)(local_118.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30) = local_108;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 8) = (undefined4)local_100;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0xc) = local_100._4_4_;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30 + 0x10) =
       local_f8.Data.AllocatorInstance.Data;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x18) = local_f8.Data.ArrayNum;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x1c) = local_f8.Data.ArrayMax;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x20) = local_e8;
  local_118.Data[lVar7 * 0x30 + 0x28] = local_e0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0x2c) = local_dc;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_108 = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_58,L"ResponseCode");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e4da5:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e4da5;
  }
  local_d8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (pFVar6->Data).ArrayNum;
  local_d0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_c8,L"%d");
  local_b8 = 0;
  local_b0 = (FScriptContainerElement)0x0;
  local_ac = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_118.Data <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < local_118.Data + (longlong)local_110._4_4_ * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_118,(int *)((longlong)&local_110 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_110 = CONCAT44(local_110._4_4_,iVar5 + 1);
  *(undefined8 *)(local_118.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30) = local_d8;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 8) = (undefined4)local_d0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0xc) = local_d0._4_4_;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30 + 0x10) =
       local_c8.Data.AllocatorInstance.Data;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x18) = local_c8.Data.ArrayNum;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x1c) = local_c8.Data.ArrayMax;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x20) = local_b8;
  local_118.Data[lVar7 * 0x30 + 0x28] = local_b0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0x2c) = local_ac;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_d8 = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_48,L"ErrorString");
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 != 0) goto LAB_1432e4fb0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1432e4fb0:
  local_a8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = (pFVar6->Data).ArrayNum;
  local_a0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_98,param_3);
  local_88 = 0;
  local_80 = (FScriptContainerElement)0x0;
  local_7c = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_118.Data <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 < local_118.Data + (longlong)local_110._4_4_ * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_78.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30) = local_a8;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 8) = (undefined4)local_a0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0xc) = local_a0._4_4_;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30 + 0x10) =
       local_98.Data.AllocatorInstance.Data;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x18) = local_98.Data.ArrayNum;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x1c) = local_98.Data.ArrayMax;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x20) = local_88;
  local_118.Data[lVar7 * 0x30 + 0x28] = local_80;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0x2c) = local_7c;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_a8 = (FScriptContainerElement *)0x0;
  local_78.AllocatorInstance.Data = local_118.Data;
  local_78.ArrayMax = local_110._4_4_;
  local_110 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(local_38,L"Patcher.Error.Download");
  QueueAnalyticsEvent(this,pFVar6,&local_78);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_118.Data,(int)local_110);
  if ((FAnalyticsEventAttribute *)local_118.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return;
}

// RecordConstructionError @ 1432e51d0

/* WARNING: Removing unreachable block (ram,0x0001432e55e9) */
/* WARNING: Removing unreachable block (ram,0x0001432e5403) */
/* WARNING: Removing unreachable block (ram,0x0001432e57db) */
/* WARNING: Removing unreachable block (ram,0x0001432e55f7) */
/* WARNING: Removing unreachable block (ram,0x0001432e5412) */
/* WARNING: Removing unreachable block (ram,0x0001432e57e9) */

void __thiscall
BuildPatchServices::FInstallerAnalytics::RecordConstructionError
          (FInstallerAnalytics *this,FString *param_1,int param_2,FString *param_3)

{
  FThreadSafeCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_118;
  undefined8 local_110;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement local_e0;
  undefined4 local_dc;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  FString local_c8;
  undefined8 local_b8;
  FScriptContainerElement local_b0;
  undefined4 local_ac;
  FScriptContainerElement *local_a8;
  undefined8 local_a0;
  FString local_98;
  undefined8 local_88;
  FScriptContainerElement local_80;
  undefined4 local_7c;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  LOCK();
  pFVar1 = &this->ConstructionErrors;
  iVar5 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (0x14 < iVar5 + 1) {
    return;
  }
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  pFVar6 = ::FString::FString(&local_68,L"Filename");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e5274:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e5274;
  }
  local_108 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100._0_4_ = (pFVar6->Data).ArrayNum;
  local_100._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_f8,param_1);
  local_e0 = (FScriptContainerElement)0x0;
  local_e8 = 0;
  local_dc = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_118.Data <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < local_118.Data + (longlong)local_110._4_4_ * 0x30))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_118,(int *)((longlong)&local_110 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_110 = CONCAT44(local_110._4_4_,iVar5 + 1);
  *(undefined8 *)(local_118.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30) = local_108;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 8) = (undefined4)local_100;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0xc) = local_100._4_4_;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30 + 0x10) =
       local_f8.Data.AllocatorInstance.Data;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x18) = local_f8.Data.ArrayNum;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x1c) = local_f8.Data.ArrayMax;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x20) = local_e8;
  local_118.Data[lVar7 * 0x30 + 0x28] = local_e0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0x2c) = local_dc;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_108 = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_58,L"LastError");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1432e5465:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1432e5465;
  }
  local_d8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (pFVar6->Data).ArrayNum;
  local_d0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_c8,L"%d");
  local_b8 = 0;
  local_b0 = (FScriptContainerElement)0x0;
  local_ac = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_118.Data <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < local_118.Data + (longlong)local_110._4_4_ * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_118,(int *)((longlong)&local_110 + 4));
  }
  lVar7 = (longlong)iVar5;
  local_110 = CONCAT44(local_110._4_4_,iVar5 + 1);
  *(undefined8 *)(local_118.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30) = local_d8;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 8) = (undefined4)local_d0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0xc) = local_d0._4_4_;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30 + 0x10) =
       local_c8.Data.AllocatorInstance.Data;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x18) = local_c8.Data.ArrayNum;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x1c) = local_c8.Data.ArrayMax;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x20) = local_b8;
  local_118.Data[lVar7 * 0x30 + 0x28] = local_b0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0x2c) = local_ac;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_d8 = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_48,L"ErrorString");
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 != 0) goto LAB_1432e5670;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1432e5670:
  local_a8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = (pFVar6->Data).ArrayNum;
  local_a0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_98,param_3);
  local_88 = 0;
  local_80 = (FScriptContainerElement)0x0;
  local_7c = 0;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_118.Data <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 < local_118.Data + (longlong)local_110._4_4_ * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_78.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30) = local_a8;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 8) = (undefined4)local_a0;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0xc) = local_a0._4_4_;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_118.Data + lVar7 * 0x30 + 0x10) =
       local_98.Data.AllocatorInstance.Data;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x18) = local_98.Data.ArrayNum;
  *(int *)(local_118.Data + lVar7 * 0x30 + 0x1c) = local_98.Data.ArrayMax;
  *(undefined8 *)(local_118.Data + lVar7 * 0x30 + 0x20) = local_88;
  local_118.Data[lVar7 * 0x30 + 0x28] = local_80;
  *(undefined4 *)(local_118.Data + lVar7 * 0x30 + 0x2c) = local_7c;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_a8 = (FScriptContainerElement *)0x0;
  local_78.AllocatorInstance.Data = local_118.Data;
  local_78.ArrayMax = local_110._4_4_;
  local_110 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(local_38,L"Patcher.Error.Construction");
  QueueAnalyticsEvent(this,pFVar6,&local_78);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_118.Data,(int)local_110);
  if ((FAnalyticsEventAttribute *)local_118.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return;
}

// RecordPrereqInstallationError @ 1432e5890

/* WARNING: Removing unreachable block (ram,0x0001432e623e) */
/* WARNING: Removing unreachable block (ram,0x0001432e5e70) */
/* WARNING: Removing unreachable block (ram,0x0001432e5ab3) */
/* WARNING: Removing unreachable block (ram,0x0001432e5c92) */
/* WARNING: Removing unreachable block (ram,0x0001432e6052) */
/* WARNING: Removing unreachable block (ram,0x0001432e6427) */
/* WARNING: Removing unreachable block (ram,0x0001432e624c) */
/* WARNING: Removing unreachable block (ram,0x0001432e5e7e) */
/* WARNING: Removing unreachable block (ram,0x0001432e5ac2) */
/* WARNING: Removing unreachable block (ram,0x0001432e5ca0) */
/* WARNING: Removing unreachable block (ram,0x0001432e6060) */
/* WARNING: Removing unreachable block (ram,0x0001432e6435) */

void __thiscall
BuildPatchServices::FInstallerAnalytics::RecordPrereqInstallationError
          (FInstallerAnalytics *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4,int param_5,FString *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FScriptContainerElement *local_1c8;
  undefined8 local_1c0;
  FString local_1b8;
  undefined8 local_1a8;
  FScriptContainerElement local_1a0;
  undefined4 local_19c;
  FScriptContainerElement *local_198;
  undefined8 local_190;
  FString local_188;
  undefined8 local_178;
  FScriptContainerElement local_170;
  undefined4 local_16c;
  FScriptContainerElement *local_168;
  undefined8 local_160;
  FString local_158;
  undefined8 local_148;
  FScriptContainerElement local_140;
  undefined4 local_13c;
  FScriptContainerElement *local_138;
  undefined8 local_130;
  FString local_128;
  undefined8 local_118;
  FScriptContainerElement local_110;
  undefined4 local_10c;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement local_e0;
  undefined4 local_dc;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  FString local_c8;
  undefined8 local_b8;
  FScriptContainerElement local_b0;
  undefined4 local_ac;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  pFVar5 = ::FString::FString(&local_98,L"AppName");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1432e5924:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_1432e5924;
  }
  local_1c8 = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = (pFVar5->Data).ArrayNum;
  local_1c0._4_4_ = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_1b8,param_1);
  local_1a0 = (FScriptContainerElement)0x0;
  local_1a8 = 0;
  local_19c = 0;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_1d8.Data <= (FScriptContainerElement *)&local_1c8) &&
      ((FScriptContainerElement *)&local_1c8 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x30))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_1d0;
  if ((int)local_1d0 == local_1d0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar4 + 1);
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30) = local_1c8;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 8) = (undefined4)local_1c0;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0xc) = local_1c0._4_4_;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30 + 0x10) =
       local_1b8.Data.AllocatorInstance.Data;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x18) = local_1b8.Data.ArrayNum;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x1c) = local_1b8.Data.ArrayMax;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x20) = local_1a8;
  local_1d8.Data[lVar6 * 0x30 + 0x28] = local_1a0;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0x2c) = local_19c;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_1c8 = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_88,L"AppVersion");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1432e5b18:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_1432e5b18;
  }
  local_198 = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190._0_4_ = (pFVar5->Data).ArrayNum;
  local_190._4_4_ = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_188,param_2);
  local_178 = 0;
  local_170 = (FScriptContainerElement)0x0;
  local_16c = 0;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_1d8.Data <= (FScriptContainerElement *)&local_198) &&
      ((FScriptContainerElement *)&local_198 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x30))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_1d0;
  if ((int)local_1d0 == local_1d0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar4 + 1);
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30) = local_198;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 8) = (undefined4)local_190;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0xc) = local_190._4_4_;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30 + 0x10) =
       local_188.Data.AllocatorInstance.Data;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x18) = local_188.Data.ArrayNum;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x1c) = local_188.Data.ArrayMax;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x20) = local_178;
  local_1d8.Data[lVar6 * 0x30 + 0x28] = local_170;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0x2c) = local_16c;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  local_198 = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_78,L"Filename");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1432e5cf6:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_1432e5cf6;
  }
  local_168 = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160._0_4_ = (pFVar5->Data).ArrayNum;
  local_160._4_4_ = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_158,param_3);
  local_148 = 0;
  local_140 = (FScriptContainerElement)0x0;
  local_13c = 0;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_1d8.Data <= (FScriptContainerElement *)&local_168) &&
      ((FScriptContainerElement *)&local_168 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x30))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_1d0;
  if ((int)local_1d0 == local_1d0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar4 + 1);
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30) = local_168;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 8) = (undefined4)local_160;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0xc) = local_160._4_4_;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30 + 0x10) =
       local_158.Data.AllocatorInstance.Data;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x18) = local_158.Data.ArrayNum;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x1c) = local_158.Data.ArrayMax;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x20) = local_148;
  local_1d8.Data[lVar6 * 0x30 + 0x28] = local_140;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0x2c) = local_13c;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_168 = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_68,L"CommandLine");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1432e5ed4:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_1432e5ed4;
  }
  local_138 = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = (pFVar5->Data).ArrayNum;
  local_130._4_4_ = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_128,param_4);
  local_118 = 0;
  local_110 = (FScriptContainerElement)0x0;
  local_10c = 0;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_1d8.Data <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x30))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_1d0;
  if ((int)local_1d0 == local_1d0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar4 + 1);
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30) = local_138;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 8) = (undefined4)local_130;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0xc) = local_130._4_4_;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30 + 0x10) =
       local_128.Data.AllocatorInstance.Data;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x18) = local_128.Data.ArrayNum;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x1c) = local_128.Data.ArrayMax;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x20) = local_118;
  local_1d8.Data[lVar6 * 0x30 + 0x28] = local_110;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0x2c) = local_10c;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_138 = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_58,L"ReturnCode");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1432e60b6:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_1432e60b6;
  }
  local_108 = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100._0_4_ = (pFVar5->Data).ArrayNum;
  local_100._4_4_ = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_f8,L"%d");
  local_e8 = 0;
  local_e0 = (FScriptContainerElement)0x0;
  local_dc = 4;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_1d8.Data <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x30))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_1d0;
  if ((int)local_1d0 == local_1d0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar4 + 1);
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30) = local_108;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 8) = (undefined4)local_100;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0xc) = local_100._4_4_;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30 + 0x10) =
       local_f8.Data.AllocatorInstance.Data;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x18) = local_f8.Data.ArrayNum;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x1c) = local_f8.Data.ArrayMax;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x20) = local_e8;
  local_1d8.Data[lVar6 * 0x30 + 0x28] = local_e0;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0x2c) = local_dc;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_108 = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_48,L"ErrorString");
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 != 0) goto LAB_1432e62c8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1432e62c8:
  local_d8 = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (pFVar5->Data).ArrayNum;
  local_d0._4_4_ = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_c8,param_6);
  local_b8 = 0;
  local_b0 = (FScriptContainerElement)0x0;
  local_ac = 0;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_1d8.Data <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_1d0;
  if ((int)local_1d0 == local_1d0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  }
  local_a8.ArrayNum = iVar4 + 1;
  lVar6 = (longlong)iVar4;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30) = local_d8;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 8) = (undefined4)local_d0;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0xc) = local_d0._4_4_;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_1d8.Data + lVar6 * 0x30 + 0x10) =
       local_c8.Data.AllocatorInstance.Data;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x18) = local_c8.Data.ArrayNum;
  *(int *)(local_1d8.Data + lVar6 * 0x30 + 0x1c) = local_c8.Data.ArrayMax;
  *(undefined8 *)(local_1d8.Data + lVar6 * 0x30 + 0x20) = local_b8;
  local_1d8.Data[lVar6 * 0x30 + 0x28] = local_b0;
  *(undefined4 *)(local_1d8.Data + lVar6 * 0x30 + 0x2c) = local_ac;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_d8 = (FScriptContainerElement *)0x0;
  local_a8.AllocatorInstance.Data = local_1d8.Data;
  local_a8.ArrayMax = local_1d0._4_4_;
  local_1d0 = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(local_38,L"Patcher.Error.Prerequisites");
  QueueAnalyticsEvent(this,pFVar5,&local_a8);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_1d8.Data,(int)local_1d0);
  if ((FAnalyticsEventAttribute *)local_1d8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  return;
}

// Tick @ 1432f4370

bool __thiscall
BuildPatchServices::FInstallerAnalytics::Tick(FInstallerAnalytics *this,float param_1)

{
  (**(code **)(this->_padding_ + 0x38))();
  return true;
}

// TrackRequest @ 1432f46f0

void __thiscall
BuildPatchServices::FInstallerAnalytics::TrackRequest
          (FInstallerAnalytics *this,TSharedPtr<IHttpRequest,1> *param_1)

{
  return;
}

