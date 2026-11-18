// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Alloc @ 1419dfc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `DebugLeakTest'::__l43::FAllocTask::Alloc(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_static_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocTask::Alloc(void)_::_2_::FStat_Stat_FAllocTask_Alloc>
  FVar5;
  void *pvVar6;
  FThreadStats *this;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_Stat_FAllocTask_Alloc ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocTask::Alloc(void)_::_2_::FStat_Stat_FAllocTask_Alloc>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"Stat_FAllocTask_Alloc");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_Stat_FAllocTask_Alloc,*pFVar4,
                   L"FAllocTask::Alloc","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_Stat_FAllocTask_Alloc;
  if (StatPtr_Stat_FAllocTask_Alloc ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocTask::Alloc(void)_::_2_::FStat_Stat_FAllocTask_Alloc>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"Stat_FAllocTask_Alloc");
    FVar5 = (FThreadSafeStaticStat<_public:_static_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocTask::Alloc(void)_::_2_::FStat_Stat_FAllocTask_Alloc>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_Stat_FAllocTask_Alloc,*pFVar4,
                         L"FAllocTask::Alloc","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                         true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    pvVar6 = operator_new__(0x1b669);
    operator_new__(100000);
    operator_delete__(pvVar6);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                   ,0x79);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar11 = FThreadStats::bPrimaryEnable == false;
    if (bVar11) {
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      FVar10.Value = FVar8.Value;
    }
    pvVar6 = operator_new__(0x1b669);
    operator_new__(100000);
    operator_delete__(pvVar6);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = FThreadStats::GetThreadStats();
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
        local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this,&local_28);
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
  }
  return;
}

