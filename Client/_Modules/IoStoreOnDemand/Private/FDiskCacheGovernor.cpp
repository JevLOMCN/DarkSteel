// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 10

// FDiskCacheGovernor @ 1445a2a40

FDiskCacheGovernor * __thiscall
UE::IoStore::FDiskCacheGovernor::FDiskCacheGovernor(FDiskCacheGovernor *this)

{
  FConfig local_28;
  
  (this->StreamingCacheState).Demand.Threshold = '\x1e';
  (this->StreamingCacheState).Demand.Boost = '<';
  (this->StreamingCacheState).Demand.SuperBoost = 'W';
  (this->StreamingCacheState).State = Waiting;
  (this->StreamingCacheState).OpInterval = 0;
  (this->StreamingCacheState).PrevCycles = 0;
  (this->StreamingCacheState).RunOff = 0;
  (this->StreamingCacheState).OpCount = 0;
  (this->StreamingCacheState).MaxOpCount = 0;
  (this->StreamingCacheState).OpAllowance = 0;
  (this->StreamingCacheState).CyclesSuspended = (atomic<__int64>)0x0;
  local_28.CommitBufferSize = 0;
  local_28.Allowance.Bytes = 0x1000000;
  local_28.Allowance.Ops = 0x20;
  local_28.Allowance.Seconds = 0x3c;
  local_28.Demand.Threshold = '\x1e';
  local_28.Demand.Boost = '<';
  local_28.Demand.SuperBoost = 'W';
  Configure(&this->StreamingCacheState,&local_28);
  return this;
}

// Configure @ 1445bd2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::IoStore::FDiskCacheGovernor::Configure(FCacheState *param_1,FConfig *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uchar uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  
  uVar4 = (param_2->Demand).Boost;
  dVar8 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
  (param_1->Demand).Threshold = (param_2->Demand).Threshold;
  (param_1->Demand).Boost = uVar4;
  (param_1->Demand).SuperBoost = (param_2->Demand).SuperBoost;
  uVar1 = param_2->CommitBufferSize;
  uVar5 = (param_2->Allowance).Bytes;
  uVar2 = (param_2->Allowance).Ops;
  lVar6 = (longlong)dVar8;
  if (uVar1 == 0) {
    param_1->OpAllowance = uVar5 / uVar2;
    param_1->OpInterval =
         (longlong)((ulonglong)(param_2->Allowance).Seconds * lVar6) /
         (longlong)(ulonglong)(param_2->Allowance).Ops;
    param_1->MaxOpCount = 4;
  }
  else if (uVar2 * uVar1 < uVar5) {
    param_1->OpAllowance = uVar1;
    param_1->OpInterval =
         (longlong)((ulonglong)(param_2->Allowance).Seconds * lVar6 * 3) /
         (longlong)(ulonglong)(param_2->Allowance).Ops;
    param_1->MaxOpCount = 1;
  }
  else {
    uVar7 = (ulonglong)uVar5 / (ulonglong)uVar1;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    uVar3 = (uVar2 + (int)uVar7 * -3) / uVar7;
    uVar5 = (uint)uVar3;
    param_1->MaxOpCount = uVar5;
    param_1->OpAllowance = (uint)(param_2->CommitBufferSize / uVar3);
    uVar1 = (param_2->Allowance).Seconds;
    param_1->State = Waiting;
    param_1->OpInterval =
         (longlong)((ulonglong)uVar1 * lVar6) / (longlong)(ulonglong)((int)uVar7 * (uVar5 - 1));
  }
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Streaming_cache_150d7c520,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  return;
}

// ConfigureStreamingCache @ 1445bd490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FDiskCacheGovernor::ConfigureStreamingCache(FDiskCacheGovernor *this,FConfig *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uchar uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  
  uVar4 = (param_1->Demand).Boost;
  dVar8 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
  (this->StreamingCacheState).Demand.Threshold = (param_1->Demand).Threshold;
  (this->StreamingCacheState).Demand.Boost = uVar4;
  (this->StreamingCacheState).Demand.SuperBoost = (param_1->Demand).SuperBoost;
  uVar1 = param_1->CommitBufferSize;
  uVar5 = (param_1->Allowance).Bytes;
  uVar2 = (param_1->Allowance).Ops;
  lVar6 = (longlong)dVar8;
  if (uVar1 == 0) {
    (this->StreamingCacheState).OpAllowance = uVar5 / uVar2;
    (this->StreamingCacheState).OpInterval =
         (longlong)((ulonglong)(param_1->Allowance).Seconds * lVar6) /
         (longlong)(ulonglong)(param_1->Allowance).Ops;
    (this->StreamingCacheState).MaxOpCount = 4;
  }
  else if (uVar2 * uVar1 < uVar5) {
    (this->StreamingCacheState).OpAllowance = uVar1;
    (this->StreamingCacheState).OpInterval =
         (longlong)((ulonglong)(param_1->Allowance).Seconds * lVar6 * 3) /
         (longlong)(ulonglong)(param_1->Allowance).Ops;
    (this->StreamingCacheState).MaxOpCount = 1;
  }
  else {
    uVar7 = (ulonglong)uVar5 / (ulonglong)uVar1;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    uVar3 = (uVar2 + (int)uVar7 * -3) / uVar7;
    uVar5 = (uint)uVar3;
    (this->StreamingCacheState).MaxOpCount = uVar5;
    (this->StreamingCacheState).OpAllowance = (uint)(param_1->CommitBufferSize / uVar3);
    uVar1 = (param_1->Allowance).Seconds;
    (this->StreamingCacheState).State = Waiting;
    (this->StreamingCacheState).OpInterval =
         (longlong)((ulonglong)uVar1 * lVar6) / (longlong)(ulonglong)((int)uVar7 * (uVar5 - 1));
  }
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Streaming_cache_150d7c520,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  return;
}

// EndWrite @ 1445c9cf0

int __cdecl UE::IoStore::FDiskCacheGovernor::EndWrite(FCacheState *param_1,uint param_2)

{
  param_1->RunOff = param_2;
  if ((param_1->OpCount < param_1->MaxOpCount) && ((longlong)param_1->CyclesSuspended < 1)) {
    return (int)(param_1->OpInterval >> 2);
  }
  param_1->State = Waiting;
  return -(int)(param_1->OpInterval >> 2);
}

// EndWriteToStreamingCache @ 1445c9d20

int __thiscall
UE::IoStore::FDiskCacheGovernor::EndWriteToStreamingCache(FDiskCacheGovernor *this,uint param_1)

{
  (this->StreamingCacheState).RunOff = param_1;
  if (((this->StreamingCacheState).OpCount < (this->StreamingCacheState).MaxOpCount) &&
     ((longlong)(this->StreamingCacheState).CyclesSuspended < 1)) {
    return (int)((this->StreamingCacheState).OpInterval >> 2);
  }
  (this->StreamingCacheState).State = Waiting;
  return -(int)((this->StreamingCacheState).OpInterval >> 2);
}

// GetMaxWaitCycles @ 1445d6650

int __cdecl UE::IoStore::FDiskCacheGovernor::GetMaxWaitCycles(FCacheState *param_1)

{
  return (int)(param_1->OpInterval >> 2);
}

// OnInstallCacheFlushed @ 1445e5520

void __thiscall
UE::IoStore::FDiskCacheGovernor::OnInstallCacheFlushed
          (FDiskCacheGovernor *this,ulong64 param_1,uint param_2)

{
  atomic<__int64> *paVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  
  dVar4 = (double)GIasCacheSuspendTimeoutFactor;
  if (__real_3ff0000000000000 <= (double)GIasCacheSuspendTimeoutFactor) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if ((((param_1 != 0) && (0.0 < dVar4)) &&
      (uVar2 = (this->StreamingCacheState).OpAllowance, uVar2 != 0)) &&
     (lVar3 = (longlong)
              (((double)param_1 / (double)uVar2) * (double)(this->StreamingCacheState).OpInterval *
              dVar4), 0 < lVar3)) {
    LOCK();
    paVar1 = &(this->StreamingCacheState).CyclesSuspended;
    *paVar1 = (atomic<__int64>)((longlong)*paVar1 + lVar3);
    UNLOCK();
  }
  return;
}

// TryBeginWrite @ 144605550

int __cdecl UE::IoStore::FDiskCacheGovernor::TryBeginWrite(FCacheState *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  atomic<__int64> aVar7;
  atomic<__int64> aVar8;
  longlong lVar9;
  double dVar10;
  LARGE_INTEGER local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  if (param_1->State == Rolling) {
    QueryPerformanceCounter(local_res8);
    iVar4 = (int)(param_1->OpInterval >> 2);
    lVar9 = local_res8[0].QuadPart - param_1->PrevCycles;
    for (lVar6 = lVar9; iVar4 < lVar6; lVar6 = lVar6 - iVar4) {
    }
    if (lVar9 < ((param_1->OpInterval >> ((param_1->Demand).Boost <= param_2)) >>
                ((param_1->Demand).SuperBoost <= param_2)) <<
                (param_2 <= (param_1->Demand).Threshold)) {
      return (int)lVar6 - iVar4;
    }
    param_1->OpCount = param_1->OpCount + 1;
    param_1->PrevCycles = local_res8[0].QuadPart - lVar6;
    return param_1->OpAllowance + param_1->RunOff;
  }
  aVar8 = param_1->CyclesSuspended;
  if (0 < (longlong)aVar8) {
    QueryPerformanceCounter(&local_res18);
    aVar7 = (atomic<__int64>)(local_res18.QuadPart - param_1->PrevCycles);
    lVar6 = (longlong)aVar8 - (longlong)aVar7;
    param_1->PrevCycles = (long64)local_res18;
    if (-1 < lVar6) {
      aVar8 = aVar7;
    }
    if (((longlong)aVar8 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Consumed >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\DiskCacheGovernor.cpp"
                           ,0x87,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    LOCK();
    param_1->CyclesSuspended =
         (atomic<__int64>)((longlong)param_1->CyclesSuspended - (longlong)aVar8);
    UNLOCK();
    dVar10 = (double)(ulonglong)param_1->CyclesSuspended * FGenericPlatformTime::SecondsPerCycle64;
    if ((GCacheSuspendedSeconds.Value != dVar10) &&
       (GCacheSuspendedSeconds.Value = dVar10, -1 < CountersChannel->Enabled)) {
      if (GCacheSuspendedSeconds.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (GCacheSuspendedSeconds.CounterName,TraceCounterType_Float,
                           GCacheSuspendedSeconds.CounterFlags & 0xf);
        LOCK();
        if (GCacheSuspendedSeconds.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheSuspendedSeconds.CounterId._2_2_ = 0;
          GCacheSuspendedSeconds.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheSuspendedSeconds.CounterId._0_2_,GCacheSuspendedSeconds.Value);
    }
    if (0 < lVar6) {
      iVar4 = (int)(param_1->OpInterval >> 2);
      if ((int)lVar6 < iVar4) {
        iVar4 = (int)lVar6;
      }
      return -iVar4;
    }
  }
  if (param_2 < (param_1->Demand).Threshold) {
    uVar5 = -(int)(param_1->OpInterval >> 2);
  }
  else {
    param_1->State = Rolling;
    QueryPerformanceCounter(&local_res20);
    param_1->PrevCycles = (long64)local_res20;
    uVar5 = param_1->OpAllowance;
    param_1->OpCount = 1;
    param_1->RunOff = 0;
  }
  return uVar5;
}

// TryBeginWrite @ 144605770

int __cdecl
UE::IoStore::FDiskCacheGovernor::TryBeginWrite(FCacheState *param_1,uint param_2,long64 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(param_1->OpInterval >> 2);
  lVar3 = param_3 - param_1->PrevCycles;
  for (lVar1 = lVar3; iVar2 < lVar1; lVar1 = lVar1 - iVar2) {
  }
  if (((param_1->OpInterval >> ((param_1->Demand).Boost <= param_2)) >>
      ((param_1->Demand).SuperBoost <= param_2)) << (param_2 <= (param_1->Demand).Threshold) <=
      lVar3) {
    param_1->OpCount = param_1->OpCount + 1;
    param_1->PrevCycles = param_3 - lVar1;
    return param_1->OpAllowance + param_1->RunOff;
  }
  return (int)lVar1 - iVar2;
}

// TryBeginWriteToStreamingCache @ 144605800

int __thiscall
UE::IoStore::FDiskCacheGovernor::TryBeginWriteToStreamingCache
          (FDiskCacheGovernor *this,uint param_1)

{
  uint *puVar1;
  atomic<__int64> *paVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  atomic<__int64> aVar9;
  longlong lVar10;
  atomic<__int64> aVar11;
  longlong lVar12;
  double dVar13;
  LARGE_INTEGER aLStackX_8 [2];
  LARGE_INTEGER LStackX_18;
  LARGE_INTEGER LStackX_20;
  
  if ((this->StreamingCacheState).State == Rolling) {
    QueryPerformanceCounter(aLStackX_8);
    lVar10 = (this->StreamingCacheState).OpInterval;
    iVar6 = (int)(lVar10 >> 2);
    lVar12 = aLStackX_8[0].QuadPart - (this->StreamingCacheState).PrevCycles;
    for (lVar8 = lVar12; iVar6 < lVar8; lVar8 = lVar8 - iVar6) {
    }
    if (lVar12 < ((lVar10 >> ((this->StreamingCacheState).Demand.Boost <= param_1)) >>
                 ((this->StreamingCacheState).Demand.SuperBoost <= param_1)) <<
                 (param_1 <= (this->StreamingCacheState).Demand.Threshold)) {
      return (int)lVar8 - iVar6;
    }
    puVar1 = &(this->StreamingCacheState).OpCount;
    *puVar1 = *puVar1 + 1;
    (this->StreamingCacheState).PrevCycles = aLStackX_8[0].QuadPart - lVar8;
    return (this->StreamingCacheState).OpAllowance + (this->StreamingCacheState).RunOff;
  }
  aVar11 = (this->StreamingCacheState).CyclesSuspended;
  if (0 < (longlong)aVar11) {
    QueryPerformanceCounter(&LStackX_18);
    aVar9 = (atomic<__int64>)(LStackX_18.QuadPart - (this->StreamingCacheState).PrevCycles);
    lVar10 = (longlong)aVar11 - (longlong)aVar9;
    (this->StreamingCacheState).PrevCycles = (long64)LStackX_18;
    if (-1 < lVar10) {
      aVar11 = aVar9;
    }
    if (((longlong)aVar11 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Consumed >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\DiskCacheGovernor.cpp"
                           ,0x87,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    LOCK();
    paVar2 = &(this->StreamingCacheState).CyclesSuspended;
    *paVar2 = (atomic<__int64>)((longlong)*paVar2 - (longlong)aVar11);
    UNLOCK();
    dVar13 = (double)(ulonglong)(this->StreamingCacheState).CyclesSuspended *
             FGenericPlatformTime::SecondsPerCycle64;
    if ((GCacheSuspendedSeconds.Value != dVar13) &&
       (GCacheSuspendedSeconds.Value = dVar13, -1 < CountersChannel->Enabled)) {
      if (GCacheSuspendedSeconds.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (GCacheSuspendedSeconds.CounterName,TraceCounterType_Float,
                           GCacheSuspendedSeconds.CounterFlags & 0xf);
        LOCK();
        if (GCacheSuspendedSeconds.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheSuspendedSeconds.CounterId._2_2_ = 0;
          GCacheSuspendedSeconds.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheSuspendedSeconds.CounterId._0_2_,GCacheSuspendedSeconds.Value);
    }
    if (0 < lVar10) {
      iVar6 = (int)((this->StreamingCacheState).OpInterval >> 2);
      if ((int)lVar10 < iVar6) {
        iVar6 = (int)lVar10;
      }
      return -iVar6;
    }
  }
  if (param_1 < (this->StreamingCacheState).Demand.Threshold) {
    uVar7 = -(int)((this->StreamingCacheState).OpInterval >> 2);
  }
  else {
    (this->StreamingCacheState).State = Rolling;
    QueryPerformanceCounter(&LStackX_20);
    (this->StreamingCacheState).PrevCycles = (long64)LStackX_20;
    uVar7 = (this->StreamingCacheState).OpAllowance;
    (this->StreamingCacheState).OpCount = 1;
    (this->StreamingCacheState).RunOff = 0;
  }
  return uVar7;
}

