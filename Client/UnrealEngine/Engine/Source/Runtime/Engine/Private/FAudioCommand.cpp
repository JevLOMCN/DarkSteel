// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Execute @ 1476a6dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AudioCommandPrivate::FAudioCommand::Execute
          (TUniqueFunction<void___cdecl(void)> *param_1,TStatId param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  undefined8 uVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  uint uVar14;
  longlong *plVar15;
  FName FVar16;
  FColor_u_0 FVar17;
  FColor_u_0 FVar18;
  FName FVar19;
  FColor_u_0 FVar20;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20;
  uint local_res24;
  FColor_u_0 local_98;
  uint local_94;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                         ,0x4e,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (`public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
      ::__l2::__CsvProfilerStat80 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Audio");
    `public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
    ::__l2::__CsvProfilerStat80 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Audio","CSV_Audio");
  FVar20.Bits = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_AudioCommandQueue_RunCommandOnGameThread = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_60,"STAT_AudioCommandQueue_RunCommandOnGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
                ::__l2::StatPtr_STAT_AudioCommandQueue_RunCommandOnGameThread,*pFVar9,
               L"STAT_AudioCommandQueue_RunCommandOnGameThread","STATGROUP_Quick","STATCAT_Advanced"
               ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_AudioCommandQueue_RunCommandOnGameThread;
  if (_StatPtr_STAT_AudioCommandQueue_RunCommandOnGameThread == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(local_58,"STAT_AudioCommandQueue_RunCommandOnGameThread");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_void___cdecl_AudioCommandPrivate::FAudioCommand::Execute(TUniqueFunction<void___cdecl(void)>_const&___ptr64,TStatId)'
                          ::__l2::StatPtr_STAT_AudioCommandQueue_RunCommandOnGameThread,*pFVar9,
                         L"STAT_AudioCommandQueue_RunCommandOnGameThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)&pTVar10->Name;
  bVar8 = false;
  bVar7 = false;
  FVar18.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar14 = FVar19.Number;
  if ((FVar18.Bits == 0) && (uVar14 == 0)) {
LAB_1476a6f9a:
    bVar5 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
    FVar18.Bits = FVar20.Bits;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar18.Bits;
        local_res24 = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x51);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1476a6f9a;
    local_res10.Bits = FVar18.Bits;
    uStackX_14 = uVar14;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  FVar16 = *(FName *)&(param_2.StatIdPtr)->Name;
  bVar3 = false;
  bVar6 = false;
  FVar17.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar17.Bits != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,((param_2.StatIdPtr)->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.Bits = FVar17.Bits;
        local_94 = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98._s_0,((param_2.StatIdPtr)->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x52);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar17.Bits;
      uStackX_14 = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      FVar20.Bits = FVar17.Bits;
      goto LAB_1476a7049;
    }
  }
  bVar4 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
LAB_1476a7049:
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar15 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar15 = *(longlong **)&param_1->field_0x28;
  }
  uVar11 = (**(code **)(*plVar15 + 8))();
  (*pcVar2)(uVar11);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar20.Bits;
      QueryPerformanceCounter(&local_90);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_80);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_70.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      local_70.NameAndInfo.Index.Value = FVar18.Bits;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_70);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Audio");
  return;
}

