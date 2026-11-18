// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DoWork @ 1419eef50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `DebugLeakTest'::__l43::FAllocPool::DoWork(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocPool::DoWork(void)_::_2_::FStat_Stat_FAllocPool_DoWork>
  FVar5;
  void *pvVar6;
  FThreadStats *this_00;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_Stat_FAllocPool_DoWork ==
          (FThreadSafeStaticStat<_public:_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocPool::DoWork(void)_::_2_::FStat_Stat_FAllocPool_DoWork>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res10.s,"Stat_FAllocPool_DoWork");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_Stat_FAllocPool_DoWork,*pFVar4,
                   L"FAllocPool::DoWork","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_Stat_FAllocPool_DoWork;
  if (StatPtr_Stat_FAllocPool_DoWork ==
      (FThreadSafeStaticStat<_public:_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocPool::DoWork(void)_::_2_::FStat_Stat_FAllocPool_DoWork>
       )0x0) {
    pFVar4 = ::FName::FName(local_res18,"Stat_FAllocPool_DoWork");
    FVar5 = (FThreadSafeStaticStat<_public:_void___cdecl__void___cdecl_DebugLeakTest(void)_::_43_::FAllocPool::DoWork(void)_::_2_::FStat_Stat_FAllocPool_DoWork>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_Stat_FAllocPool_DoWork,*pFVar4,
                         L"FAllocPool::DoWork","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                         true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    pvVar6 = operator_new__(0x3684f);
    operator_new__(100000);
    operator_delete__(pvVar6);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                   ,0x8b);
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
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      FVar10.Value = FVar8.Value;
    }
    pvVar6 = operator_new__(0x3684f);
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
      this_00 = FThreadStats::GetThreadStats();
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res10);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

