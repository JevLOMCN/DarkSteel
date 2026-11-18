// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 3

// OnRequestCompleted @ 1445e6870

void __cdecl
UE::IoStore::FOnDemandContentInstallerStats::OnRequestCompleted
          (TValueOrError<void,UE::UnifiedError::FError> *param_1,ulong64 param_2,ulong64 param_3,
          ulong64 param_4,ulong64 param_5,double param_6,ulong64 param_7)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  LOCK();
  bVar5 = FInstallerTraceCounters::Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    FInstallerTraceCounters::Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(&FInstallerTraceCounters::Mutex);
  }
  InstallerTraceCounters.InflightInstallCount.Value =
       InstallerTraceCounters.InflightInstallCount.Value + -1;
  if (-1 < CountersChannel->Enabled) {
    if (InstallerTraceCounters.InflightInstallCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (InstallerTraceCounters.InflightInstallCount.CounterName,
                         TraceCounterType_Int,
                         InstallerTraceCounters.InflightInstallCount.CounterFlags & 0xf);
      LOCK();
      if (InstallerTraceCounters.InflightInstallCount.CounterId == (atomic<unsigned_int>)0x0) {
        InstallerTraceCounters.InflightInstallCount.CounterId._2_2_ = 0;
        InstallerTraceCounters.InflightInstallCount.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (InstallerTraceCounters.InflightInstallCount.CounterId._0_2_,
               InstallerTraceCounters.InflightInstallCount.Value);
  }
  LOCK();
  aVar2 = FInstallerTraceCounters::Mutex.State + -1;
  UNLOCK();
  bVar1 = (byte)FInstallerTraceCounters::Mutex.State & 2;
  FInstallerTraceCounters::Mutex.State = aVar2;
  if (bVar1 != 0) {
    FMutex::WakeWaitingThread(&FInstallerTraceCounters::Mutex);
  }
  if (param_2 != 0) {
    LOCK();
    bVar5 = FInstallerTraceCounters::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      FInstallerTraceCounters::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(&FInstallerTraceCounters::Mutex);
    }
    InstallerTraceCounters.InstallCount.Value = InstallerTraceCounters.InstallCount.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (InstallerTraceCounters.InstallCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (InstallerTraceCounters.InstallCount.CounterName,TraceCounterType_Int,
                           InstallerTraceCounters.InstallCount.CounterFlags & 0xf);
        LOCK();
        if (InstallerTraceCounters.InstallCount.CounterId == (atomic<unsigned_int>)0x0) {
          InstallerTraceCounters.InstallCount.CounterId._2_2_ = 0;
          InstallerTraceCounters.InstallCount.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (InstallerTraceCounters.InstallCount.CounterId._0_2_,
                 InstallerTraceCounters.InstallCount.Value);
    }
    if ((param_5 != 0) &&
       (InstallerTraceCounters.DownloadedBytes.Value =
             InstallerTraceCounters.DownloadedBytes.Value + param_5, -1 < CountersChannel->Enabled))
    {
      if (InstallerTraceCounters.DownloadedBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (InstallerTraceCounters.DownloadedBytes.CounterName,TraceCounterType_Int,
                           InstallerTraceCounters.DownloadedBytes.CounterFlags & 0xf);
        LOCK();
        if (InstallerTraceCounters.DownloadedBytes.CounterId == (atomic<unsigned_int>)0x0) {
          InstallerTraceCounters.DownloadedBytes.CounterId._2_2_ = 0;
          InstallerTraceCounters.DownloadedBytes.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (InstallerTraceCounters.DownloadedBytes.CounterId._0_2_,
                 InstallerTraceCounters.DownloadedBytes.Value);
    }
    InstallerTraceCounters.InstallDurationMs.Count =
         InstallerTraceCounters.InstallDurationMs.Count + 1;
    dVar6 = (double)param_7 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
    dVar7 = dVar6 - InstallerTraceCounters.InstallDurationMs.Mean;
    InstallerTraceCounters.CacheHitRatio.Count = InstallerTraceCounters.CacheHitRatio.Count + 1;
    InstallerTraceCounters.InstallDurationMs.Mean =
         dVar7 / (double)InstallerTraceCounters.InstallDurationMs.Count +
         InstallerTraceCounters.InstallDurationMs.Mean;
    dVar8 = param_6 - InstallerTraceCounters.CacheHitRatio.Mean;
    InstallerTraceCounters.InstallDurationMs.VarianceAccumulator =
         InstallerTraceCounters.InstallDurationMs.VarianceAccumulator +
         (dVar6 - InstallerTraceCounters.InstallDurationMs.Mean) * dVar7;
    InstallerTraceCounters.CacheHitRatio.Mean =
         dVar8 / (double)InstallerTraceCounters.CacheHitRatio.Count +
         InstallerTraceCounters.CacheHitRatio.Mean;
    InstallerTraceCounters.CacheHitRatio.VarianceAccumulator =
         InstallerTraceCounters.CacheHitRatio.VarianceAccumulator +
         (param_6 - InstallerTraceCounters.CacheHitRatio.Mean) * dVar8;
    if ((InstallerTraceCounters.AvgInstallDurationMs.Value !=
         InstallerTraceCounters.InstallDurationMs.Mean) &&
       (InstallerTraceCounters.AvgInstallDurationMs.Value =
             InstallerTraceCounters.InstallDurationMs.Mean, -1 < CountersChannel->Enabled)) {
      if (InstallerTraceCounters.AvgInstallDurationMs.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (InstallerTraceCounters.AvgInstallDurationMs.CounterName,
                           TraceCounterType_Float,
                           InstallerTraceCounters.AvgInstallDurationMs.CounterFlags & 0xf);
        LOCK();
        if (InstallerTraceCounters.AvgInstallDurationMs.CounterId == (atomic<unsigned_int>)0x0) {
          InstallerTraceCounters.AvgInstallDurationMs.CounterId._2_2_ = 0;
          InstallerTraceCounters.AvgInstallDurationMs.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (InstallerTraceCounters.AvgInstallDurationMs.CounterId._0_2_,
                 InstallerTraceCounters.AvgInstallDurationMs.Value);
    }
    if ((InstallerTraceCounters.AvgCacheHitRatio.Value != InstallerTraceCounters.CacheHitRatio.Mean)
       && (InstallerTraceCounters.AvgCacheHitRatio.Value = InstallerTraceCounters.CacheHitRatio.Mean
          , -1 < CountersChannel->Enabled)) {
      if (InstallerTraceCounters.AvgCacheHitRatio.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (InstallerTraceCounters.AvgCacheHitRatio.CounterName,
                           TraceCounterType_Float,
                           InstallerTraceCounters.AvgCacheHitRatio.CounterFlags & 0xf);
        LOCK();
        if (InstallerTraceCounters.AvgCacheHitRatio.CounterId == (atomic<unsigned_int>)0x0) {
          InstallerTraceCounters.AvgCacheHitRatio.CounterId._2_2_ = 0;
          InstallerTraceCounters.AvgCacheHitRatio.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (InstallerTraceCounters.AvgCacheHitRatio.CounterId._0_2_,
                 InstallerTraceCounters.AvgCacheHitRatio.Value);
    }
    LOCK();
    aVar2 = FInstallerTraceCounters::Mutex.State + -1;
    UNLOCK();
    bVar1 = (byte)FInstallerTraceCounters::Mutex.State & 2;
    FInstallerTraceCounters::Mutex.State = aVar2;
    if (bVar1 != 0) {
      FMutex::WakeWaitingThread(&FInstallerTraceCounters::Mutex);
    }
    LOCK();
    bVar5 = FInstallerAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      FInstallerAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(&FInstallerAnalytics::Mutex);
    }
    if (((param_1->Error).bIsSet != false) &&
       (bVar5 = UnifiedError::IsCancellationError((FError *)param_1), !bVar5)) {
      InstallerAnalytics.InstallErrorCount = InstallerAnalytics.InstallErrorCount + 1;
    }
    lVar4 = 0;
    InstallerAnalytics.InstallCount = InstallerAnalytics.InstallCount + 1;
    InstallerAnalytics.DownloadedBytes = InstallerAnalytics.DownloadedBytes + param_5;
    dVar6 = (double)param_7 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
    if ((__real_43e0000000000000 <= dVar6) &&
       (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
      lVar4 = -0x8000000000000000;
    }
    InstallerAnalytics.TotalCacheHitRatio = InstallerAnalytics.TotalCacheHitRatio + param_6;
    InstallerAnalytics.TotalInstallDurationMs =
         InstallerAnalytics.TotalInstallDurationMs + (longlong)dVar6 + lVar4;
    LOCK();
    aVar2 = FInstallerAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar1 = (byte)FInstallerAnalytics::Mutex.State & 2;
    FInstallerAnalytics::Mutex.State = aVar2;
    if (bVar1 != 0) {
      FMutex::WakeWaitingThread(&FInstallerAnalytics::Mutex);
    }
  }
  return;
}

// OnRequestEnqueued @ 1445e6d10

void __cdecl UE::IoStore::FOnDemandContentInstallerStats::OnRequestEnqueued(void)

{
  FMutex FVar1;
  ushort uVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = FInstallerTraceCounters::Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    FInstallerTraceCounters::Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(&FInstallerTraceCounters::Mutex);
  }
  InstallerTraceCounters.InflightInstallCount.Value =
       InstallerTraceCounters.InflightInstallCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (InstallerTraceCounters.InflightInstallCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (InstallerTraceCounters.InflightInstallCount.CounterName,
                         TraceCounterType_Int,
                         InstallerTraceCounters.InflightInstallCount.CounterFlags & 0xf);
      LOCK();
      if (InstallerTraceCounters.InflightInstallCount.CounterId == (atomic<unsigned_int>)0x0) {
        InstallerTraceCounters.InflightInstallCount.CounterId._2_2_ = 0;
        InstallerTraceCounters.InflightInstallCount.CounterId._0_2_ = uVar2;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (InstallerTraceCounters.InflightInstallCount.CounterId._0_2_,
               InstallerTraceCounters.InflightInstallCount.Value);
  }
  FVar1.State = FInstallerTraceCounters::Mutex.State;
  LOCK();
  FInstallerTraceCounters::Mutex.State = FInstallerTraceCounters::Mutex.State + -1;
  UNLOCK();
  if (((byte)FVar1.State & 2) == 0) {
    return;
  }
  FMutex::WakeWaitingThread(&FInstallerTraceCounters::Mutex);
  return;
}

// ReportAnalytics @ 1445f71f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::IoStore::FOnDemandContentInstallerStats::ReportAnalytics
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  longlong lVar7;
  bool bVar8;
  wchar_t *local_res10;
  longlong local_res18;
  double local_res20;
  double local_1e8;
  double local_1e0;
  ulong64 local_1d8;
  ulong64 uStack_1d0;
  ulong64 local_1c8;
  ulong64 uStack_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong64 local_108;
  ulong64 uStack_100;
  ulong64 local_f8;
  ulong64 uStack_f0;
  ulong64 local_e8;
  ulong64 uStack_e0;
  ulong64 local_d8;
  ulong64 uStack_d0;
  ulong64 local_c8;
  ulong64 uStack_c0;
  ulong64 local_b8;
  ulong64 uStack_b0;
  ulong64 local_a8;
  ulong64 uStack_a0;
  ulong64 local_98;
  ulong64 uStack_90;
  ulong64 local_88;
  ulong64 uStack_80;
  ulong64 local_78;
  long64 lStack_70;
  uint local_68 [16];
  
  if (GIadReportAnalyticsEnabled) {
    LOCK();
    bVar8 = FInstallerAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      FInstallerAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(&FInstallerAnalytics::Mutex);
    }
    local_1b8 = InstallerAnalytics.TotalCacheHitRatio;
    uVar6 = InstallerAnalytics.TotalInstallDurationMs;
    uVar5 = InstallerAnalytics.InstallCount;
    InstallerAnalytics.InstallCount = 0;
    dVar4 = 0.0;
    local_1d8 = uVar5;
    uStack_1d0 = InstallerAnalytics.InstallErrorCount;
    InstallerAnalytics.InstallErrorCount = 0;
    local_1c8 = InstallerAnalytics.DownloadedBytes;
    uStack_1c0 = InstallerAnalytics.TotalInstallDurationMs;
    InstallerAnalytics.DownloadedBytes = 0;
    InstallerAnalytics.TotalCacheHitRatio = 0.0;
    InstallerAnalytics.TotalInstallDurationMs = 0;
    LOCK();
    aVar3 = FInstallerAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar2 = (byte)FInstallerAnalytics::Mutex.State & 2;
    FInstallerAnalytics::Mutex.State = aVar3;
    if (bVar2 != 0) {
      FMutex::WakeWaitingThread(&FInstallerAnalytics::Mutex);
    }
    LOCK();
    bVar8 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_108 = InstallCacheAnalytics.VerificationRemovedBlockCount;
    uStack_100 = InstallCacheAnalytics.FlushCount;
    local_1a0 = 0;
    uStack_198 = 0;
    local_f8 = InstallCacheAnalytics.FlushErrorCount;
    uStack_f0 = InstallCacheAnalytics.FlushedBytes;
    local_190 = 0;
    uStack_188 = 0;
    local_e8 = InstallCacheAnalytics.PurgedBytes;
    uStack_e0 = InstallCacheAnalytics.PurgeCount;
    local_180 = 0;
    uStack_178 = 0;
    local_d8 = InstallCacheAnalytics.PurgeErrorCount;
    uStack_d0 = InstallCacheAnalytics.FragmentedBytes;
    local_170 = 0;
    uStack_168 = 0;
    local_c8 = InstallCacheAnalytics.DefragCount;
    uStack_c0 = InstallCacheAnalytics.DefragErrorCount;
    local_160 = 0;
    uStack_158 = 0;
    local_b8 = InstallCacheAnalytics.JournalCommitCount;
    uStack_b0 = InstallCacheAnalytics.JournalCommitErrorCount;
    local_150 = 0;
    uStack_148 = 0;
    local_a8 = InstallCacheAnalytics.ReadCount;
    uStack_a0 = InstallCacheAnalytics.ReadErrorCount;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_98 = InstallCacheAnalytics.MaxCacheSize;
    uStack_90 = InstallCacheAnalytics.MaxCacheUsageSize;
    local_88 = InstallCacheAnalytics.MaxReferencedBlockSize;
    uStack_80 = InstallCacheAnalytics.MaxReferencedSize;
    local_78 = InstallCacheAnalytics.MaxFragmentedSize;
    lStack_70 = InstallCacheAnalytics.OldestBlockAccess;
    local_68[0] = InstallCacheAnalytics.StartupErrorCode;
    local_68[1] = InstallCacheAnalytics._164_4_;
    local_110 = 0;
    uStack_118 = 0x2bca2875f4373fff;
    InstallCacheAnalytics.VerificationRemovedBlockCount = 0;
    InstallCacheAnalytics.FlushCount = 0;
    InstallCacheAnalytics.FlushErrorCount = 0;
    InstallCacheAnalytics.FlushedBytes = 0;
    InstallCacheAnalytics.PurgedBytes = 0;
    InstallCacheAnalytics.PurgeCount = 0;
    InstallCacheAnalytics.PurgeErrorCount = 0;
    InstallCacheAnalytics.FragmentedBytes = 0;
    InstallCacheAnalytics.DefragCount = 0;
    InstallCacheAnalytics.DefragErrorCount = 0;
    InstallCacheAnalytics.JournalCommitCount = 0;
    InstallCacheAnalytics.JournalCommitErrorCount = 0;
    InstallCacheAnalytics.ReadCount = 0;
    InstallCacheAnalytics.ReadErrorCount = 0;
    InstallCacheAnalytics.MaxCacheSize = 0;
    InstallCacheAnalytics.MaxCacheUsageSize = 0;
    InstallCacheAnalytics.MaxReferencedBlockSize = 0;
    InstallCacheAnalytics.MaxReferencedSize = 0;
    InstallCacheAnalytics.MaxFragmentedSize = 0;
    InstallCacheAnalytics.OldestBlockAccess = 0x2bca2875f4373fff;
    InstallCacheAnalytics.StartupErrorCode = 0;
    InstallCacheAnalytics._164_4_ = 0;
    LOCK();
    aVar3 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar2 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar3;
    if (bVar2 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    }
    FDateTime::UtcNow();
    local_res20 = 0.0;
    lVar7 = 0x7fffffffffffffff;
    if (lStack_70 <= local_res18) {
      lVar7 = local_res18 - lStack_70;
    }
    if (uVar5 != 0) {
      local_res20 = (double)uVar6 / (double)uVar5;
      dVar4 = local_1b8 / (double)uVar5;
    }
    uVar1 = param_1->ArrayNum + 0x19;
    local_1e0 = (double)lVar7 * ___real_3e1ca213d840baf8;
    local_1e8 = dVar4;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (param_1->ArrayMax < (int)uVar1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_res10 = L"IadTotalInstallCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_1d8);
    local_res10 = L"IadTotalInstallErrorCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_1d0);
    local_res10 = L"IadTotalDownloadedBytes";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_1c8);
    local_res10 = L"IadTotalInstallDurationMs";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_1c0);
    local_res10 = L"IadAvgInstallDurationMs";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>(param_1,&local_res10,&local_res20)
    ;
    local_res10 = L"IadAvgCacheHitRatio";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>(param_1,&local_res10,&local_1e8);
    local_res10 = L"IadInstallCacheStartupErrorCode";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned_int>
              (param_1,&local_res10,local_68);
    local_res10 = L"IadInstallCacheVerificationRemovedBlockCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_108);
    local_res10 = L"IadInstallCacheFlushCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_100);
    local_res10 = L"IadInstallCacheFlushErrorCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_f8);
    local_res10 = L"IadInstallCacheFlushedBytes";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_f0);
    local_res10 = L"IadInstallCachePurgeCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_e0);
    local_res10 = L"IadInstallCachePurgeErrorCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_d8);
    local_res10 = L"IadInstallCacheDefragCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_c8);
    local_res10 = L"IadInstallCacheDefragErrorCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_c0);
    local_res10 = L"IadInstallCacheJournalCommitCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_b8);
    local_res10 = L"IadInstallCacheJournalCommitErrorCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_b0);
    local_res10 = L"IadInstallCacheMaxSize";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_98);
    local_res10 = L"IadInstallCacheMaxUsageSize";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_90);
    local_res10 = L"IadInstallCacheMaxReferencedBlockSize";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_88);
    local_res10 = L"IadInstallCacheMaxReferencedSize";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_80);
    local_res10 = L"IadInstallCacheMaxFragmentedSize";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_78);
    local_res10 = L"IadInstallCacheOldestBlockAgeMinutes";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>(param_1,&local_res10,&local_1e0);
    local_res10 = L"IadInstallCacheReadCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&local_a8);
    local_res10 = L"IadInstallCacheReadErrorCount";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (param_1,&local_res10,&uStack_a0);
  }
  return;
}

