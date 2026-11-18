// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// Submit @ 1446e5280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHITransientMemoryStats::Submit(FRHITransientMemoryStats *this,ulong64 param_1)

{
  ulong64 uVar1;
  FName FVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryUsed> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryAliased> FVar10;
  FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryRequested> FVar11;
  FThreadSafeStaticStat<FStat_STAT_RHITransientBufferMemoryRequested> FVar12;
  FThreadSafeStaticStat<FStat_STAT_RHITransientTextureMemoryRequested> FVar13;
  FThreadSafeStaticStat<FStat_STAT_RHITransientTextures> FVar14;
  FThreadSafeStaticStat<FStat_STAT_RHITransientBuffers> FVar15;
  FThreadSafeStaticStat<FStat_STAT_RHITransientResources> FVar16;
  int iVar17;
  uchar auVar18 [8];
  uchar auVar19 [8];
  uchar auVar20 [8];
  FName local_res8;
  FStatMessage local_48 [2];
  
  iVar17 = (this->Textures).CreateCount + (this->Buffers).CreateCount;
  uVar1 = this->AliasedSize;
  lVar4 = (longlong)iVar17;
  if ((__GTraceCounterTransientResourceCreateCount.Value != lVar4) &&
     (__GTraceCounterTransientResourceCreateCount.Value = lVar4, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientResourceCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterTransientResourceCreateCount.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterTransientResourceCreateCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientResourceCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientResourceCreateCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientResourceCreateCount.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientResourceCreateCount.CounterId._0_2_,
               __GTraceCounterTransientResourceCreateCount.Value);
  }
  uVar5 = (ulonglong)(this->Textures).CreateCount;
  if ((__GTraceCounterTransientTextureCreateCount.Value != uVar5) &&
     (__GTraceCounterTransientTextureCreateCount.Value = uVar5, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientTextureCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterTransientTextureCreateCount.CounterName,TraceCounterType_Int
                         ,__GTraceCounterTransientTextureCreateCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientTextureCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientTextureCreateCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientTextureCreateCount.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientTextureCreateCount.CounterId._0_2_,
               __GTraceCounterTransientTextureCreateCount.Value);
  }
  uVar5 = (ulonglong)(this->Buffers).CreateCount;
  if ((__GTraceCounterTransientBufferCreateCount.Value != uVar5) &&
     (__GTraceCounterTransientBufferCreateCount.Value = uVar5, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientBufferCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterTransientBufferCreateCount.CounterName,TraceCounterType_Int,
                         __GTraceCounterTransientBufferCreateCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientBufferCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientBufferCreateCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientBufferCreateCount.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientBufferCreateCount.CounterId._0_2_,
               __GTraceCounterTransientBufferCreateCount.Value);
  }
  if ((__GTraceCounterTransientMemoryUsed.Value != param_1) &&
     (__GTraceCounterTransientMemoryUsed.Value = param_1, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientMemoryUsed.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterTransientMemoryUsed.CounterName,TraceCounterType_Int,
                         __GTraceCounterTransientMemoryUsed.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientMemoryUsed.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientMemoryUsed.CounterId._2_2_ = 0;
        __GTraceCounterTransientMemoryUsed.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientMemoryUsed.CounterId._0_2_,
               __GTraceCounterTransientMemoryUsed.Value);
  }
  if ((__GTraceCounterTransientMemoryRequested.Value != uVar1) &&
     (__GTraceCounterTransientMemoryRequested.Value = uVar1, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientMemoryRequested.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterTransientMemoryRequested.CounterName,TraceCounterType_Int,
                         __GTraceCounterTransientMemoryRequested.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientMemoryRequested.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientMemoryRequested.CounterId._2_2_ = 0;
        __GTraceCounterTransientMemoryRequested.CounterId._0_2_ = uVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientMemoryRequested.CounterId._0_2_,
               __GTraceCounterTransientMemoryRequested.Value);
  }
  if (__CsvProfilerStat103 == false) {
    FCsvProfilerTrace::OutputInlineStat("TransientResourceCreateCount",0);
    __CsvProfilerStat103 = true;
  }
  FCsvProfiler::RecordCustomStat("TransientResourceCreateCount",0,iVar17,Set);
  if (__CsvProfilerStat104 == false) {
    FCsvProfilerTrace::OutputInlineStat("TransientMemoryUsedMB",0);
    __CsvProfilerStat104 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TransientMemoryUsedMB",0,(float)(longlong)param_1 * __real_35800000,Set);
  if (__CsvProfilerStat105 == false) {
    FCsvProfilerTrace::OutputInlineStat("TransientMemoryAliasedMB",0);
    __CsvProfilerStat105 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TransientMemoryAliasedMB",0,(float)(longlong)uVar1 * __real_35800000,Set);
  FVar7 = StatPtr_STAT_RHITransientMemoryUsed;
  if (StatPtr_STAT_RHITransientMemoryUsed ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryUsed>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientMemoryUsed");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryUsed>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientMemoryUsed,*pFVar6,
                       L"Memory Used","STATGROUP_RHITransientMemory","STATCAT_Advanced",
                       L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar7;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = (uchar  [8])param_1;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,param_1);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar10 = StatPtr_STAT_RHITransientMemoryAliased;
  if (StatPtr_STAT_RHITransientMemoryAliased ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryAliased>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientMemoryAliased");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryAliased>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientMemoryAliased,*pFVar6
                        ,L"Memory Aliased","STATGROUP_RHITransientMemory","STATCAT_Advanced",
                        L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar10;
  auVar18 = (uchar  [8])this->AliasedSize;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = auVar18;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,(long64)auVar18);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar11 = StatPtr_STAT_RHITransientMemoryRequested;
  if (StatPtr_STAT_RHITransientMemoryRequested ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryRequested>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientMemoryRequested");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryRequested>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientMemoryRequested,
                        *pFVar6,L"Memory Requested","STATGROUP_RHITransientMemory",
                        "STATCAT_Advanced",L"RHI: Transient Memory",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FVar2 = *(FName *)FVar11;
  auVar18 = (uchar  [8])((this->Textures).AllocatedSize + (this->Buffers).AllocatedSize);
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = auVar18;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,(long64)auVar18);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar12 = StatPtr_STAT_RHITransientBufferMemoryRequested;
  if (StatPtr_STAT_RHITransientBufferMemoryRequested ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientBufferMemoryRequested>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientBufferMemoryRequested");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_RHITransientBufferMemoryRequested>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientBufferMemoryRequested
                        ,*pFVar6,L"Buffer Memory Requested","STATGROUP_RHITransientMemory",
                        "STATCAT_Advanced",L"RHI: Transient Memory",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FVar2 = *(FName *)FVar12;
  auVar18 = (uchar  [8])(this->Buffers).AllocatedSize;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = auVar18;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,(long64)auVar18);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar13 = StatPtr_STAT_RHITransientTextureMemoryRequested;
  if (StatPtr_STAT_RHITransientTextureMemoryRequested ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientTextureMemoryRequested>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientTextureMemoryRequested");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_RHITransientTextureMemoryRequested>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RHITransientTextureMemoryRequested,*pFVar6,
                        L"Texture Memory Requested","STATGROUP_RHITransientMemory",
                        "STATCAT_Advanced",L"RHI: Transient Memory",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FVar2 = *(FName *)FVar13;
  auVar18 = (uchar  [8])(this->Textures).AllocatedSize;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = auVar18;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,(long64)auVar18);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar14 = StatPtr_STAT_RHITransientTextures;
  if (StatPtr_STAT_RHITransientTextures ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientTextures>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientTextures");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_RHITransientTextures>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientTextures,*pFVar6,
                        L"Textures","STATGROUP_RHITransientMemory","STATCAT_Advanced",
                        L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar14;
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18._0_4_ = (this->Textures).AllocationCount;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = auVar18;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,(long64)auVar18);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar15 = StatPtr_STAT_RHITransientBuffers;
  if (StatPtr_STAT_RHITransientBuffers == (FThreadSafeStaticStat<FStat_STAT_RHITransientBuffers>)0x0
     ) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientBuffers");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_RHITransientBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientBuffers,*pFVar6,
                        L"Buffers","STATGROUP_RHITransientMemory","STATCAT_Advanced",
                        L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar15;
  auVar19[4] = '\0';
  auVar19[5] = '\0';
  auVar19[6] = '\0';
  auVar19[7] = '\0';
  auVar19._0_4_ = (this->Buffers).AllocationCount;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = auVar19;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,(long64)auVar19);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar16 = StatPtr_STAT_RHITransientResources;
  if (StatPtr_STAT_RHITransientResources ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientResources>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_RHITransientResources");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_RHITransientResources>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientResources,*pFVar6,
                        L"Resources","STATGROUP_RHITransientMemory","STATCAT_Advanced",
                        L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar16;
  auVar20._0_4_ = (this->Buffers).AllocationCount + (this->Textures).AllocationCount;
  auVar20[4] = '\0';
  auVar20[5] = '\0';
  auVar20[6] = '\0';
  auVar20[7] = '\0';
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar2;
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48[0].NameAndInfo =
         (FStatNameAndInfo)((ulonglong)FVar2 & 0xffff8fffffffffff | 0x800000000000);
    local_res8 = FVar2;
    local_48[0].StatData.Pad = auVar20;
    FThreadStats::AddStatMessage(pFVar8,local_48);
    FStatsTrace::Set(&local_res8,(long64)auVar20);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  uVar1 = this->AliasedSizeCurrent;
  (this->Textures).AllocatedSize = 0;
  (this->Textures).AllocationCount = 0;
  (this->Textures).DeallocationCount = 0;
  *(undefined8 *)&(this->Textures).CreateCount = 0;
  (this->Buffers).AllocatedSize = 0;
  (this->Buffers).AllocationCount = 0;
  (this->Buffers).DeallocationCount = 0;
  this->AliasedSize = uVar1;
  *(undefined8 *)&(this->Buffers).CreateCount = 0;
  return;
}

