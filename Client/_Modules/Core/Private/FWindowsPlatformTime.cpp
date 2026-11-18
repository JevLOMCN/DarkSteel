// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// Seconds @ 14188e8d0

double __cdecl FWindowsPlatformTime::Seconds(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
}

// AutoUpdateGameThreadCPUTime @ 141b38bb0

void __cdecl FWindowsPlatformTime::AutoUpdateGameThreadCPUTime(double param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (!bEnabledGameThreadTiming) {
    this = FTSTicker::GetCoreTicker();
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      puVar3[3] = UpdateThreadCPUTime;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FTSTicker::AddTicker
              (this,&local_68,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,
               (float)param_1);
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
    bEnabledGameThreadTiming = true;
  }
  return;
}

// GetCPUTime @ 141b43f90

FCPUTime __cdecl FWindowsPlatformTime::GetCPUTime(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FCPUTime in_RCX;
  
  fVar1 = CPUTimePctRelative;
  iVar3 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  fVar2 = CPUTimePctRelative;
  *(float *)((longlong)in_RCX + 4) = fVar1;
  *(float *)in_RCX = fVar2 / (float)iVar3;
  return in_RCX;
}

// GetLastIntervalThreadCPUTimeInSeconds @ 141b43fe0

double __cdecl FWindowsPlatformTime::GetLastIntervalThreadCPUTimeInSeconds(void)

{
  return *(double *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbf8);
}

// GetThreadCPUTime @ 141b440d0

FCPUTime __cdecl FWindowsPlatformTime::GetThreadCPUTime(void)

{
  undefined4 uVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  FCPUTime in_RCX;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar1 = *(undefined4 *)(lVar3 + 0xbf0);
  iVar4 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  fVar2 = *(float *)(lVar3 + 0xbf0);
  *(undefined4 *)((longlong)in_RCX + 4) = uVar1;
  *(float *)in_RCX = fVar2 / (float)iVar4;
  return in_RCX;
}

// InitTiming @ 141b44ac0

double __cdecl FWindowsPlatformTime::InitTiming(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  BOOL BVar5;
  FTSTicker *this;
  undefined8 *puVar6;
  ulong64 uVar7;
  double dVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  BVar5 = QueryPerformanceFrequency(&local_res8);
  if (BVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryPerformanceFrequency(&Frequency)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformTime.cpp"
                       ,0x1e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
  }
  FGenericPlatformTime::SecondsPerCycle = __real_3ff0000000000000 / (double)local_res8.QuadPart;
  FGenericPlatformTime::SecondsPerCycle64 = FGenericPlatformTime::SecondsPerCycle;
  this = FTSTicker::GetCoreTicker();
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[3] = UpdateCPUTime;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  FTSTicker::AddTicker
            (this,&local_78,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,
             __real_3e800000);
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
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
  QueryPerformanceCounter(&local_res10);
  return (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
}

// SystemTime @ 141b4e940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWindowsPlatformTime::SystemTime
          (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
          int *param_7,int *param_8)

{
  undefined1 auStack_88 [32];
  _SYSTEMTIME local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_88;
  GetLocalTime(&local_68);
  *param_1 = (uint)local_68.wYear;
  *param_2 = (uint)local_68.wMonth;
  *param_3 = (uint)local_68.wDayOfWeek;
  *param_4 = (uint)local_68.wDay;
  *param_5 = (uint)local_68.wHour;
  *param_6 = (uint)local_68.wMinute;
  *param_7 = (uint)local_68.wSecond;
  *param_8 = (uint)local_68.wMilliseconds;
  return;
}

// UpdateCPUTime @ 141bbd640

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWindowsPlatformTime::UpdateCPUTime(float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_static_bool___cdecl_FWindowsPlatformTime::UpdateCPUTime(float)_::_2_::FStat_STAT_FWindowsPlatformTime_UpdateCPUTime>
  FVar6;
  HANDLE hProcess;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  LARGE_INTEGER local_res10;
  _FILETIME local_res18;
  _FILETIME local_res20;
  _FILETIME local_68;
  _FILETIME local_60;
  _FILETIME local_58;
  FStatMessage local_50;
  FName local_40;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FWindowsPlatformTime_UpdateCPUTime ==
        (FThreadSafeStaticStat<_public:_static_bool___cdecl_FWindowsPlatformTime::UpdateCPUTime(float)_::_2_::FStat_STAT_FWindowsPlatformTime_UpdateCPUTime>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_FWindowsPlatformTime_UpdateCPUTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FWindowsPlatformTime_UpdateCPUTime,
                 *pFVar5,L"STAT_FWindowsPlatformTime_UpdateCPUTime","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_FWindowsPlatformTime_UpdateCPUTime;
  if (StatPtr_STAT_FWindowsPlatformTime_UpdateCPUTime ==
      (FThreadSafeStaticStat<_public:_static_bool___cdecl_FWindowsPlatformTime::UpdateCPUTime(float)_::_2_::FStat_STAT_FWindowsPlatformTime_UpdateCPUTime>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_50,"STAT_FWindowsPlatformTime_UpdateCPUTime");
    FVar6 = (FThreadSafeStaticStat<_public:_static_bool___cdecl_FWindowsPlatformTime::UpdateCPUTime(float)_::_2_::FStat_STAT_FWindowsPlatformTime_UpdateCPUTime>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FWindowsPlatformTime_UpdateCPUTime,*pFVar5,
                         L"STAT_FWindowsPlatformTime_UpdateCPUTime","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformTime.cpp"
                   ,0x65);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      local_40 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_40.ComparisonIndex.Value;
      goto LAB_141bbd7a5;
    }
  }
  bVar3 = false;
  FVar9 = local_40;
LAB_141bbd7a5:
  local_60.dwLowDateTime = 0;
  local_60.dwHighDateTime = 0;
  local_58.dwLowDateTime = 0;
  local_58.dwHighDateTime = 0;
  local_res20.dwLowDateTime = 0;
  local_res20.dwHighDateTime = 0;
  local_res18.dwLowDateTime = 0;
  local_res18.dwHighDateTime = 0;
  local_68.dwLowDateTime = 0;
  local_68.dwHighDateTime = 0;
  hProcess = GetCurrentProcess();
  GetProcessTimes(hProcess,&local_60,&local_58,&local_res20,&local_res18);
  GetSystemTimeAsFileTime(&local_68);
  dVar11 = ((double)(ulonglong)local_res18 + (double)(ulonglong)local_res20) *
           __real_3e7ad7f29abcaf48;
  dVar13 = dVar11 - LastTotalUserAndKernelTime;
  dVar12 = (double)(ulonglong)local_68 * __real_3e7ad7f29abcaf48 -
           (double)(ulonglong)local_60 * __real_3e7ad7f29abcaf48;
  if (0.0 < dVar13) {
    CPUTimePctRelative =
         (float)((dVar13 / (dVar12 - LastTotalProcessTime)) * __real_4059000000000000);
    FGenericPlatformTime::LastIntervalCPUTimeInSeconds = dVar13;
    LastTotalProcessTime = dVar12;
    LastTotalUserAndKernelTime = dVar11;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res10);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_50);
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
  return true;
}

// UpdateThreadCPUTime @ 141bbda90

bool __cdecl FWindowsPlatformTime::UpdateThreadCPUTime(float param_1)

{
  double dVar1;
  longlong lVar2;
  HANDLE hThread;
  double dVar3;
  double dVar4;
  double dVar5;
  _FILETIME local_res10;
  _FILETIME local_res18;
  _FILETIME local_res20;
  _FILETIME local_18;
  _FILETIME local_10 [2];
  
  local_18.dwLowDateTime = 0;
  local_18.dwHighDateTime = 0;
  local_10[0].dwLowDateTime = 0;
  local_10[0].dwHighDateTime = 0;
  local_res18.dwLowDateTime = 0;
  local_res18.dwHighDateTime = 0;
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  local_res20.dwLowDateTime = 0;
  local_res20.dwHighDateTime = 0;
  hThread = GetCurrentThread();
  GetThreadTimes(hThread,&local_18,local_10,&local_res18,&local_res10);
  GetSystemTimeAsFileTime(&local_res20);
  dVar3 = ((double)(ulonglong)local_res10 + (double)(ulonglong)local_res18) *
          __real_3e7ad7f29abcaf48;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  dVar4 = (double)(ulonglong)local_res20 * __real_3e7ad7f29abcaf48 -
          (double)(ulonglong)local_18 * __real_3e7ad7f29abcaf48;
  dVar5 = dVar3 - *(double *)(lVar2 + 0xc08);
  if (0.0 < dVar5) {
    dVar1 = *(double *)(lVar2 + 0xc00);
    *(double *)(lVar2 + 0xc00) = dVar4;
    *(double *)(lVar2 + 0xc08) = dVar3;
    *(float *)(lVar2 + 0xbf0) = (float)((dVar5 / (dVar4 - dVar1)) * __real_4059000000000000);
    *(double *)(lVar2 + 0xbf8) = dVar5;
  }
  return true;
}

// UtcTime @ 141bbdc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWindowsPlatformTime::UtcTime
          (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
          int *param_7,int *param_8)

{
  undefined1 auStack_88 [32];
  _SYSTEMTIME local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_88;
  GetSystemTime(&local_68);
  *param_1 = (uint)local_68.wYear;
  *param_2 = (uint)local_68.wMonth;
  *param_3 = (uint)local_68.wDayOfWeek;
  *param_4 = (uint)local_68.wDay;
  *param_5 = (uint)local_68.wHour;
  *param_6 = (uint)local_68.wMinute;
  *param_7 = (uint)local_68.wSecond;
  *param_8 = (uint)local_68.wMilliseconds;
  return;
}

