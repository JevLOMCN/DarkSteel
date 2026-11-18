// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ExecuteTick @ 1488a1840

/* WARNING: Removing unreachable block (ram,0x0001488a1c99) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestTickFunction::ExecuteTick
          (FTestTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FNameEntryId FVar12;
  FNameEntryId FVar13;
  FName FVar14;
  int *piVar15;
  FName FVar16;
  FNameEntryId FVar17;
  bool bVar18;
  LARGE_INTEGER local_68;
  FStatMessage local_60;
  FName local_50;
  FName local_40;
  
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  FVar17.Value = 0;
  if ((*piVar15 <
       `public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_TestStatOverhead_FTestTickFunction = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName((FName *)&local_68.s,"STAT_TestStatOverhead_FTestTickFunction");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_TestStatOverhead_FTestTickFunction,*pFVar8,
               L"STAT_TestStatOverhead_FTestTickFunction","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_TestStatOverhead_FTestTickFunction;
  if (_StatPtr_STAT_TestStatOverhead_FTestTickFunction == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_60,"STAT_TestStatOverhead_FTestTickFunction");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_TestStatOverhead_FTestTickFunction,*pFVar8,
                        L"STAT_TestStatOverhead_FTestTickFunction","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar6 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar12 = FVar16.ComparisonIndex.Value;
  uVar7 = FVar16.Number;
  if ((FVar12.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_68.s,(pTVar9->StatDescriptionAnsi).Ptr)
      ;
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.s.LowPart = FVar12.Value;
        local_68.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_68.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0xb2e);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68.s.LowPart = FVar12.Value;
      local_68.s.HighPart = uVar7;
      local_50 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = local_50.ComparisonIndex.Value;
      goto LAB_1488a19b3;
    }
  }
  bVar4 = false;
  FVar16 = local_50;
  FVar12.Value = FVar17.Value;
LAB_1488a19b3:
  if ((*piVar15 <
       `public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    _StatPtr_STAT_TestStatOverhead_FTestTickFunction_Inner = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName((FName *)&local_60,"STAT_TestStatOverhead_FTestTickFunction_Inner");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_TestStatOverhead_FTestTickFunction_Inner,*pFVar8,
               L"STAT_TestStatOverhead_FTestTickFunction_Inner","STATGROUP_Quick","STATCAT_Advanced"
               ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  pTVar9 = _StatPtr_STAT_TestStatOverhead_FTestTickFunction_Inner;
  if (_StatPtr_STAT_TestStatOverhead_FTestTickFunction_Inner == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_60,"STAT_TestStatOverhead_FTestTickFunction_Inner");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_FTestTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_TestStatOverhead_FTestTickFunction_Inner,*pFVar8,
                        L"STAT_TestStatOverhead_FTestTickFunction_Inner","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar1 = *(FName *)&pTVar9->Name;
  bVar2 = false;
  bVar5 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar13 = FVar1.ComparisonIndex.Value;
  uVar7 = FVar1.Number;
  if ((FVar13.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_68.s,(pTVar9->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.s.LowPart = FVar13.Value;
        local_68.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_68.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0xb2f);
        bVar2 = true;
        bVar5 = true;
      }
    }
    bVar18 = FThreadStats::bPrimaryEnable != false;
    FVar14 = local_40;
    if (bVar18) {
      local_68.s.LowPart = FVar13.Value;
      local_68.s.HighPart = uVar7;
      local_40 = FVar1;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      FVar14 = FVar1;
      FVar17.Value = local_40.ComparisonIndex.Value;
    }
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar18) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      if (pFVar10->bWaitForExplicitFlush < pFVar10->ScopeCount) {
        local_60.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
        local_60.NameAndInfo.Index.Value = FVar17.Value;
        QueryPerformanceCounter(&local_68);
        local_60.StatData.Pad[4] = '\0';
        local_60.StatData.Pad[5] = '\0';
        local_60.StatData.Pad[6] = '\0';
        local_60.StatData.Pad[7] = '\0';
        local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
        local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
        local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
        local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar10,&local_60);
        piVar15 = &pFVar10->ScopeCount;
        *piVar15 = *piVar15 + -1;
        if (*piVar15 == 0) {
          FThreadStats::Flush(pFVar10,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar10,false,false);
        }
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    if (pFVar10->bWaitForExplicitFlush < pFVar10->ScopeCount) {
      local_60.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_60.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_68);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar10,&local_60);
      piVar15 = &pFVar10->ScopeCount;
      *piVar15 = *piVar15 + -1;
      if (*piVar15 == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  return;
}

// DiagnosticMessage @ 1488a1df0

FString * __thiscall
FTestTickFunction::DiagnosticMessage(FTestTickFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"test");
  return __return_storage_ptr__;
}

// DiagnosticContext @ 1488a1e20

FName __thiscall FTestTickFunction::DiagnosticContext(FTestTickFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"test");
  return this_00;
}

