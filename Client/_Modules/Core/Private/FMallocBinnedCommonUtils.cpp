// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FlushCurrentThreadCache<FMallocBinned2> @ 141671e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>
          (FMallocBinned2 *param_1,bool param_2)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FPerThreadFreeBlockLists *pFVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  bool bVar13;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_58 [3];
  
  if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
    return;
  }
  pFVar6 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pFVar6 == (FPerThreadFreeBlockLists *)0x0) {
    return;
  }
  if (pFVar6->bLockedByOwnerThread == false) {
    return;
  }
  if (pFVar6->MemoryTrimEpoch < (ulonglong)param_1->_padding_) {
    pFVar6->MemoryTrimEpoch = param_1->_padding_;
  }
  else if (param_2) {
    return;
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                ::__l8::__CpuProfilerEventSpecId125,
               "FMallocBinnedCommonUtils::FlushCurrentThreadCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
               ,0x7d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
               ::__l8::__CpuProfilerEventSpecId125);
  }
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
       ::__l8::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                           ::__l8::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
     ::__l8::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res18.s,
                            "STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,*pFVar7,
               L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                         ::__l8::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache;
  if (_StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                         ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,
                        *pFVar7,L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar10.Value;
        local_res18.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                   ,0x7e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_141672046;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_141672046:
  QueryPerformanceCounter(&local_res18);
  dVar2 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  TrimThreadFreeBlockLists<FMallocBinned2>(param_1,pFVar6);
  QueryPerformanceCounter(&local_res18);
  if (((double)GMallocBinnedFlushThreadCacheMaxWaitTime <
       (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle - dVar2) && (2 < (byte)LogMemory._0_1_)) {
    (**(code **)(param_1->_padding_ + 200))(param_1);
    UE::Logging::Private::BasicLog<3>
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                ::__l12::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_58[0].NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res18);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_58);
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
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FlushCurrentThreadCache<FMallocBinned3> @ 1416722b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>
          (FMallocBinned3 *param_1,bool param_2)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FPerThreadFreeBlockLists *pFVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  bool bVar13;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_58 [3];
  
  if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
    return;
  }
  pFVar6 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pFVar6 == (FPerThreadFreeBlockLists *)0x0) {
    return;
  }
  if (pFVar6->bLockedByOwnerThread == false) {
    return;
  }
  if (pFVar6->MemoryTrimEpoch < (ulonglong)param_1->_padding_) {
    pFVar6->MemoryTrimEpoch = param_1->_padding_;
  }
  else if (param_2) {
    return;
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                ::__l8::__CpuProfilerEventSpecId125,
               "FMallocBinnedCommonUtils::FlushCurrentThreadCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
               ,0x7d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
               ::__l8::__CpuProfilerEventSpecId125);
  }
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
       ::__l8::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                           ::__l8::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
     ::__l8::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res18.s,
                            "STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,*pFVar7,
               L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                         ::__l8::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache;
  if (_StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                         ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,
                        *pFVar7,L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar10.Value;
        local_res18.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                   ,0x7e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_1416724f6;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1416724f6:
  QueryPerformanceCounter(&local_res18);
  dVar2 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  TrimThreadFreeBlockLists<FMallocBinned3>(param_1,pFVar6);
  QueryPerformanceCounter(&local_res18);
  if (((double)GMallocBinnedFlushThreadCacheMaxWaitTime <
       (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle - dVar2) && (2 < (byte)LogMemory._0_1_)) {
    (**(code **)(param_1->_padding_ + 200))(param_1);
    UE::Logging::Private::BasicLog<3>
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                ::__l12::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_58[0].NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res18);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_58);
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
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Trim<FMallocBinned2> @ 141676cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMallocBinnedCommonUtils::Trim<FMallocBinned2>(FMallocBinned2 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  TStatIdData *pTVar5;
  uint uVar6;
  undefined ***pppuVar7;
  FNameEntryId FVar8;
  FName FVar9;
  undefined1 auStackY_d8 [32];
  FName local_78;
  FName local_70;
  FName local_60;
  code *local_58 [2];
  undefined **local_48;
  FMallocBinned2 *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  LOCK();
  param_1->_padding_ = param_1->_padding_ + 1;
  UNLOCK();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned2>(FMallocBinned2&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned2>(FMallocBinned2&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned2>(FMallocBinned2&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FMallocBinnedCommonUtils_Trim = (TStatIdData *)0x0;
    pFVar4 = ::FName::FName(&local_78,"STAT_FMallocBinnedCommonUtils_Trim");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned2>(FMallocBinned2&___ptr64)'
                ::__l2::StatPtr_STAT_FMallocBinnedCommonUtils_Trim,*pFVar4,
               L"STAT_FMallocBinnedCommonUtils_Trim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned2>(FMallocBinned2&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar5 = _StatPtr_STAT_FMallocBinnedCommonUtils_Trim;
  if (_StatPtr_STAT_FMallocBinnedCommonUtils_Trim == (TStatIdData *)0x0) {
    pFVar4 = ::FName::FName(&local_60,"STAT_FMallocBinnedCommonUtils_Trim");
    pTVar5 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned2>(FMallocBinned2&___ptr64)'
                         ::__l2::StatPtr_STAT_FMallocBinnedCommonUtils_Trim,*pFVar4,
                        L"STAT_FMallocBinnedCommonUtils_Trim","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar5->Name;
  bVar1 = false;
  bVar3 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar6 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_78,(pTVar5->StatDescriptionAnsi).Ptr);
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar8.Value;
        local_78.Number = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(pTVar5->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                   ,0x92);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.ComparisonIndex.Value = FVar8.Value;
      local_78.Number = uVar6;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      goto LAB_141676e4c;
    }
  }
  bVar2 = false;
  FVar9 = local_70;
LAB_141676e4c:
  local_30 = (undefined ***)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____Trim_VFMallocBinned2___FMallocBinnedCommonUtils__SAXAEAVFMallocBinned2___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMallocBinnedCommonUtils::Trim<FMallocBinned2>'::__l2::<lambda_1>,void,enum_ENamedThreads::Type>
                ::Call;
  local_40 = param_1;
  FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes
            (false,false,(TFunction<void___cdecl(ENamedThreads::Type)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar7 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar7 = local_30;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar9,CycleScopeEnd);
  }
  return;
}

// Trim<FMallocBinned3> @ 141676fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  TStatIdData *pTVar5;
  uint uVar6;
  undefined ***pppuVar7;
  FNameEntryId FVar8;
  FName FVar9;
  undefined1 auStackY_d8 [32];
  FName local_78;
  FName local_70;
  FName local_60;
  code *local_58 [2];
  undefined **local_48;
  FMallocBinned3 *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  LOCK();
  param_1->_padding_ = param_1->_padding_ + 1;
  UNLOCK();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FMallocBinnedCommonUtils_Trim = (TStatIdData *)0x0;
    pFVar4 = ::FName::FName(&local_78,"STAT_FMallocBinnedCommonUtils_Trim");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                ::__l2::StatPtr_STAT_FMallocBinnedCommonUtils_Trim,*pFVar4,
               L"STAT_FMallocBinnedCommonUtils_Trim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar5 = _StatPtr_STAT_FMallocBinnedCommonUtils_Trim;
  if (_StatPtr_STAT_FMallocBinnedCommonUtils_Trim == (TStatIdData *)0x0) {
    pFVar4 = ::FName::FName(&local_60,"STAT_FMallocBinnedCommonUtils_Trim");
    pTVar5 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                         ::__l2::StatPtr_STAT_FMallocBinnedCommonUtils_Trim,*pFVar4,
                        L"STAT_FMallocBinnedCommonUtils_Trim","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar5->Name;
  bVar1 = false;
  bVar3 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar6 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_78,(pTVar5->StatDescriptionAnsi).Ptr);
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar8.Value;
        local_78.Number = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(pTVar5->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                   ,0x92);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.ComparisonIndex.Value = FVar8.Value;
      local_78.Number = uVar6;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      goto LAB_14167712c;
    }
  }
  bVar2 = false;
  FVar9 = local_70;
LAB_14167712c:
  local_30 = (undefined ***)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____Trim_VFMallocBinned3___FMallocBinnedCommonUtils__SAXAEAVFMallocBinned3___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMallocBinnedCommonUtils::Trim<FMallocBinned3>'::__l2::<lambda_1>,void,enum_ENamedThreads::Type>
                ::Call;
  local_40 = param_1;
  FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes
            (false,false,(TFunction<void___cdecl(ENamedThreads::Type)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar7 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar7 = local_30;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar9,CycleScopeEnd);
  }
  return;
}

// TrimThreadFreeBlockLists<FMallocBinned2> @ 141677290

void __cdecl
FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned2>
          (FMallocBinned2 *param_1,FPerThreadFreeBlockLists *param_2)

{
  FBundleNode *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (param_2 != (FPerThreadFreeBlockLists *)0x0) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned2>(FMallocBinned2&___ptr64,TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists*___ptr64)'
                  ::__l5::__CpuProfilerEventSpecId105,
                 "FMallocBinnedCommonUtils::TrimThreadFreeBlockLists",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                 ,0x69);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_static_void___cdecl_FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned2>(FMallocBinned2&___ptr64,TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists*___ptr64)'
                 ::__l5::__CpuProfilerEventSpecId105);
    }
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      pFVar1 = FMallocBinnedCommonBase::FFreeBlockList::PopBundles(param_2->FreeLists + uVar3,uVar2)
      ;
      if (pFVar1 != (FBundleNode *)0x0) {
        FMallocBinned2::Private::FreeBundles(param_1,pFVar1,uVar2);
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 != 0x33);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// TrimThreadFreeBlockLists<FMallocBinned3> @ 141677360

void __cdecl
FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned3>
          (FMallocBinned3 *param_1,FPerThreadFreeBlockLists *param_2)

{
  FBundleNode *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (param_2 != (FPerThreadFreeBlockLists *)0x0) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned3>(FMallocBinned3&___ptr64,TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists*___ptr64)'
                  ::__l5::__CpuProfilerEventSpecId105,
                 "FMallocBinnedCommonUtils::TrimThreadFreeBlockLists",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                 ,0x69);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_static_void___cdecl_FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned3>(FMallocBinned3&___ptr64,TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists*___ptr64)'
                 ::__l5::__CpuProfilerEventSpecId105);
    }
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      pFVar1 = FMallocBinnedCommonBase::FFreeBlockList::PopBundles(param_2->FreeLists + uVar3,uVar2)
      ;
      if (pFVar1 != (FBundleNode *)0x0) {
        FMallocBinned3::Private::FreeBundles(param_1,pFVar1,uVar2);
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 != 0x4d);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

