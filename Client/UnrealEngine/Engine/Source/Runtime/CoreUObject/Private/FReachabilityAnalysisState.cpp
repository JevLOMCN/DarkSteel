// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// CollectGarbage @ 142024010

void __thiscall
UE::GC::FReachabilityAnalysisState::CollectGarbage
          (FReachabilityAnalysisState *this,EObjectFlags param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GIsIncrementalReachabilityPending) {
    this->bPerformFullPurge = true;
    PerformReachabilityAnalysisAndConditionallyPurgeGarbage(this,false);
    if (GIsIncrementalReachabilityPending != false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x16c3,
                         L"Flushing incremental reachability analysis did not complete properly");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AcquireGCLock();
  }
  this->ObjectKeepFlags = param_1;
  this->bPerformFullPurge = param_2;
  if ((param_2) || (GAllowIncrementalReachability == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  PerformReachabilityAnalysisAndConditionallyPurgeGarbage(this,bVar2);
  return;
}

// PerformReachabilityAnalysis @ 142065f80

void __thiscall
UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysis(FReachabilityAnalysisState *this)

{
  int iVar1;
  
  if (this->bIsSuspended == false) {
    Init(this);
    iVar1 = GDelayReachabilityIterations;
    if (GDelayReachabilityIterations < 0) {
      iVar1 = 0;
    }
    this->NumRechabilityIterationsToSkip = iVar1;
  }
  if (this->bPerformFullPurge != false) {
    CollectGarbageFull(this->ObjectKeepFlags);
    FinishIteration(this);
    return;
  }
  if (((this->NumRechabilityIterationsToSkip != 0) && (this->bIsSuspended != false)) &&
     (0.0 < this->IterationTimeLimit)) {
    this->NumRechabilityIterationsToSkip = this->NumRechabilityIterationsToSkip + -1;
    FinishIteration(this);
    return;
  }
  CollectGarbageIncremental(this->ObjectKeepFlags);
  FinishIteration(this);
  return;
}

// PerformReachabilityAnalysisAndConditionallyPurgeGarbage @ 142066490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EGCOptions": Some values do not have unique names */

void __thiscall
UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage
          (FReachabilityAnalysisState *this,bool param_1)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  uint uVar13;
  EGCOptions EVar14;
  double *pdVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_11_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis>
  FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_87_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun>
  FVar20;
  FStats *pFVar21;
  longlong lVar22;
  FNameEntryId FVar23;
  FName FVar24;
  FNameEntryId FVar25;
  bool bVar26;
  bool bVar27;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FName local_218;
  FStatMessage local_208;
  double local_1f8 [32];
  undefined4 local_f8;
  undefined1 local_f4;
  undefined2 local_f3;
  undefined1 local_f1;
  FRealtimeGC local_e8;
  
  FVar25.Value = 0;
  FLLMScope::FLLMScope(local_res8,GC,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,GC,true);
  if (GIsIncrementalReachabilityPending == false) {
    local_1f8[0xe] = 0.0;
    local_1f8[0x11] = 0.0;
    local_f3 = 0;
    local_f1 = 0;
    local_f8 = 0;
    lVar22 = 2;
    local_f4 = 0;
    local_1f8[0] = 0.0;
    local_1f8[1] = 0.0;
    local_1f8[0x14] = 0.0;
    local_1f8[2] = 0.0;
    local_1f8[3] = 0.0;
    local_1f8[0x17] = 0.0;
    local_1f8[4] = 0.0;
    local_1f8[5] = 0.0;
    local_1f8[6] = 0.0;
    local_1f8[7] = 0.0;
    local_1f8[8] = 0.0;
    local_1f8[9] = 0.0;
    local_1f8[10] = 0.0;
    local_1f8[0xb] = 0.0;
    local_1f8[0xc] = 0.0;
    local_1f8[0xd] = 0.0;
    local_1f8[0xf] = 0.0;
    local_1f8[0x10] = 0.0;
    local_1f8[0x12] = 0.0;
    local_1f8[0x13] = 0.0;
    local_1f8[0x15] = 0.0;
    local_1f8[0x16] = 0.0;
    local_1f8[0x18] = 0.0;
    local_1f8[0x19] = 0.0;
    local_1f8[0x1a] = 0.0;
    local_1f8[0x1b] = 0.0;
    local_1f8[0x1c] = 0.0;
    local_1f8[0x1d] = 0.0;
    local_1f8[0x1e] = 0.0;
    local_1f8[0x1f] = 0.0;
    pdVar15 = local_1f8;
    pFVar21 = &GGCStats;
    do {
      pdVar2 = &(pFVar21->ReferenceCollectionTime).Max;
      dVar6 = pdVar15[1];
      dVar7 = pdVar15[2];
      dVar5 = pdVar15[3];
      pdVar3 = pdVar15 + 0x10;
      pFVar21->TotalTime = *pdVar15;
      pFVar21->ReachabilityTimeLimit = dVar6;
      dVar6 = pdVar15[4];
      dVar8 = pdVar15[5];
      pFVar21->UnhashingTimeLimit = dVar7;
      pFVar21->DestroyGarbageTimeLimit = dVar5;
      dVar7 = pdVar15[6];
      dVar5 = pdVar15[7];
      pFVar21->VerifyTime = dVar6;
      pFVar21->VerifyNoUnreachableTime = dVar8;
      dVar6 = pdVar15[8];
      dVar8 = pdVar15[9];
      pFVar21->GarbageTrackingTime = dVar7;
      pFVar21->InitialReferenceCollectionTime = dVar5;
      dVar7 = pdVar15[10];
      dVar5 = pdVar15[0xb];
      pFVar21->MarkObjectsAsUnreachableTime = dVar6;
      pFVar21->TraceExternalRootsTime = dVar8;
      dVar6 = pdVar15[0xc];
      dVar8 = pdVar15[0xd];
      pFVar21->NotifyUnreachableTime = dVar7;
      pFVar21->DissolveUnreachableClustersTime = dVar5;
      dVar7 = pdVar15[0xe];
      dVar5 = pdVar15[0xf];
      (pFVar21->ReachabilityTime).Total = dVar6;
      (pFVar21->ReachabilityTime).Max = dVar8;
      *(double *)&(pFVar21->ReachabilityTime).NumIterations = dVar7;
      (pFVar21->ReferenceCollectionTime).Total = dVar5;
      fVar12 = GIncrementalReachabilityTimeLimit;
      lVar22 = lVar22 + -1;
      pdVar15 = pdVar3;
      pFVar21 = (FStats *)pdVar2;
    } while (lVar22 != 0);
    *pdVar2 = *pdVar3;
    GGCStats.bInProgress = true;
    GGCStats.bStartedAsFullPurge = this->bPerformFullPurge;
    GGCStats.NumObjects =
         (GUObjectArray.ObjObjects.NumElements - GUObjectArray.ObjAvailableListEstimateCount) -
         GUObjectArray.ObjFirstGCIndex;
    GGCStats.ReachabilityTimeLimit = (double)fVar12;
    GGCStats.NumClusters = GUObjectClusters.NumAllocatedClusters;
  }
  GGCStats.bFinishedAsFullPurge = this->bPerformFullPurge;
  if (this->bPerformFullPurge == false) {
    PreCollectGarbageImpl<0>(this->ObjectKeepFlags);
  }
  else {
    PreCollectGarbageImpl<1>(this->ObjectKeepFlags);
  }
  if ((GIsIncrementalReachabilityPending == false) &&
     ((this->bPerformFullPurge != false || (GAllowIncrementalReachability == 0)))) {
    bVar27 = true;
  }
  else {
    bVar27 = false;
  }
  QueryPerformanceCounter(&local_res18);
  dVar6 = __real_4170000000000000;
  dVar7 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (this->IterationStartTime == 0.0) {
    this->IterationStartTime = dVar7;
    if (param_1) {
      dVar5 = (double)GIncrementalReachabilityTimeLimit;
    }
    else {
      dVar5 = 0.0;
    }
    this->IterationTimeLimit = dVar5;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"FRealtimeGC_PerformReachabilityAnalysis");
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5887,"FRealtimeGC_PerformReachabilityAnalysis",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x16ff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5887);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_11_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis>
         )0x0) {
      pFVar16 = ::FName::FName((FName *)&local_res18.s,
                               "STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis,*pFVar16,
                 L"FRealtimeGC::PerformReachabilityAnalysis","STATGROUP_GC","STATCAT_Advanced",
                 L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis;
  if (StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_11_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis>
       )0x0) {
    pFVar16 = ::FName::FName((FName *)&local_208,
                             "STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis");
    FVar17 = (FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_11_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysis,*pFVar16,
                          L"FRealtimeGC::PerformReachabilityAnalysis","STATGROUP_GC",
                          "STATCAT_Advanced",L"Garbage Collection",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  bVar9 = false;
  bVar11 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar13 = FVar24.Number;
  if ((FVar23.Value == 0) && (uVar13 == 0)) {
LAB_142066884:
    bVar10 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar23.Value;
        local_res18.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x1700);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142066884;
    local_res18.s.LowPart = FVar23.Value;
    local_res18.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar10 = true;
    local_218 = FVar24;
  }
  if ((bVar27) || (GIsIncrementalReachabilityPending == false)) {
    this->IncrementalMarkPhaseTotalTime = 0.0;
    this->ReferenceProcessingTotalTime = 0.0;
  }
  PerformReachabilityAnalysis(this);
  GIsIncrementalReachabilityPending = GReachabilityState.bIsSuspended;
  QueryPerformanceCounter(&local_res18);
  dVar6 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle + dVar6;
  dVar7 = dVar6 - dVar7;
  this->ReferenceProcessingTotalTime = dVar7 + this->ReferenceProcessingTotalTime;
  this->IncrementalMarkPhaseTotalTime =
       (dVar6 - this->IterationStartTime) + this->IncrementalMarkPhaseTotalTime;
  iVar4 = GGCStats.ReachabilityTime.NumIterations + 1;
  GGCStats.ReachabilityTime.Total = GGCStats.ReachabilityTime.Total + dVar7;
  if (GGCStats.ReachabilityTime.Max < dVar7) {
    GGCStats.ReachabilityTime.SlowestIteration = GGCStats.ReachabilityTime.NumIterations;
    GGCStats.ReachabilityTime.Max = dVar7;
  }
  GGCStats.TotalTime = GGCStats.TotalTime + dVar7;
  GGCStats.ReachabilityTime.NumIterations = iVar4;
  if (4 < (byte)LogGarbage._0_1_) {
    if (GIsIncrementalReachabilityPending == false) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if (4 < (byte)LogGarbage._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      }
    }
    else {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    }
  }
  this->IterationTimeLimit = 0.0;
  this->IterationStartTime = 0.0;
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_218 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_208.NameAndInfo.Index.Value = local_218.ComparisonIndex.Value;
      local_208.NameAndInfo.Number = local_218.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_208.StatData.Pad[4] = '\0';
      local_208.StatData.Pad[5] = '\0';
      local_208.StatData.Pad[6] = '\0';
      local_208.StatData.Pad[7] = '\0';
      local_208.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_208.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_208.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_208.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_208);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (((GIsIncrementalReachabilityPending != false) || ((this->Stats).bFoundGarbageRef == false)) ||
     (GGarbageReferenceTrackingEnabled < 1)) goto LAB_142066f89;
  if (__CsvProfilerStat5950 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("GarbageCollectionDebug");
    __CsvProfilerStat5950 = true;
  }
  FCsvProfiler::BeginExclusiveStat("GarbageCollectionDebug","CSV_GarbageCollectionDebug");
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Orange,"FRealtimeGC_PerformReachabilityAnalysisRerun");
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5951,"FRealtimeGC_PerformReachabilityAnalysisRerun",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x173f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5951);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_87_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun>
         )0x0) {
      pFVar16 = ::FName::FName((FName *)&local_res18.s,
                               "STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun,*pFVar16,
                 L"FRealtimeGC::PerformReachabilityAnalysisRerun","STATGROUP_GC","STATCAT_Advanced",
                 L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    else {
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar20 = StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun;
  if (StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_87_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun>
       )0x0) {
    pFVar16 = ::FName::FName((FName *)&local_208,
                             "STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun");
    FVar20 = (FThreadSafeStaticStat<_public:_void___cdecl_UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage(bool)_::_87_::FStat_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FArchiveRealtimeGC_PerformReachabilityAnalysisRerun,*pFVar16
                          ,L"FRealtimeGC::PerformReachabilityAnalysisRerun","STATGROUP_GC",
                          "STATCAT_Advanced",L"Garbage Collection",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar24 = *(FName *)FVar20;
  bVar26 = false;
  bVar9 = false;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar13 = FVar24.Number;
  if ((FVar23.Value == 0) && (uVar13 == 0)) {
LAB_142066d81:
    bVar11 = false;
    FVar24.ComparisonIndex.Value = 0;
    FVar24.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar26 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar23.Value;
        local_res18.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x1740);
        bVar26 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142066d81;
    local_res18.s.LowPart = FVar23.Value;
    local_res18.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar11 = true;
    FVar25.Value = FVar23.Value;
  }
  QueryPerformanceCounter(&local_res18);
  dVar6 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  FRealtimeGC::FRealtimeGC(&local_e8);
  local_e8.Stats.NumObjects = (this->Stats).NumObjects;
  local_e8.Stats.NumReferences = (this->Stats).NumReferences;
  local_e8.Stats.NumVerseCells = (this->Stats).NumVerseCells;
  local_e8.Stats.bFoundGarbageRef = (this->Stats).bFoundGarbageRef;
  local_e8.Stats._13_3_ = *(undefined3 *)&(this->Stats).field_0xd;
  EVar14 = GetReferenceCollectorOptions(this->bPerformFullPurge);
  FRealtimeGC::PerformReachabilityAnalysis(&local_e8,this->ObjectKeepFlags,EVar14);
  if (local_e8.InitialObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.InitialObjects.AllocatorInstance.Data);
  }
  if (local_e8.InitialReferences.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.InitialReferences.AllocatorInstance.Data);
  }
  if (local_e8.InitialCollection != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_e8.InitialCollection + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_e8.InitialCollection)(local_e8.InitialCollection,1);
    }
  }
  QueryPerformanceCounter(&local_res18);
  GGCStats.GarbageTrackingTime =
       (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle - dVar6;
  GGCStats.TotalTime = GGCStats.TotalTime + GGCStats.GarbageTrackingTime;
  if (4 < (byte)LogGarbage._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_208.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      local_208.NameAndInfo.Index.Value = FVar25.Value;
      QueryPerformanceCounter(&local_res18);
      local_208.StatData.Pad[4] = '\0';
      local_208.StatData.Pad[5] = '\0';
      local_208.StatData.Pad[6] = '\0';
      local_208.StatData.Pad[7] = '\0';
      local_208.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_208.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_208.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_208.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_208);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FCsvProfiler::EndExclusiveStat("GarbageCollectionDebug");
LAB_142066f89:
  if (this->bPerformFullPurge == false) {
    PostCollectGarbageImpl<0>(this->ObjectKeepFlags);
  }
  else {
    PostCollectGarbageImpl<1>(this->ObjectKeepFlags);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CheckIfAnyContextIsSuspended @ 1421c1790

bool __thiscall
UE::GC::FReachabilityAnalysisState::CheckIfAnyContextIsSuspended(FReachabilityAnalysisState *this)

{
  char cVar1;
  FReachabilityAnalysisState *pFVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = '\0';
  this->bIsSuspended = false;
  if (0 < this->NumWorkers) {
    cVar1 = '\0';
    pFVar2 = this;
    do {
      pFVar2 = (FReachabilityAnalysisState *)pFVar2->Contexts;
      if (cVar1 != '\0') break;
      iVar3 = iVar3 + 1;
      cVar1 = (*(FWorkerContext **)pFVar2)->bIsSuspended;
      this->bIsSuspended = (bool)cVar1;
    } while (iVar3 < this->NumWorkers);
  }
  if (cVar1 == '\0') {
    this->bIsSuspended = false;
  }
  return (bool)cVar1;
}

// FinishIteration @ 1421cc0f0

void __thiscall
UE::GC::FReachabilityAnalysisState::FinishIteration(FReachabilityAnalysisState *this)

{
  this->NumIterations = this->NumIterations + 1;
  return;
}

// Init @ 1421d2c90

void __thiscall UE::GC::FReachabilityAnalysisState::Init(FReachabilityAnalysisState *this)

{
  this->NumIterations = 0;
  return;
}

// ResetWorkers @ 1421e16f0

void __thiscall UE::GC::FReachabilityAnalysisState::ResetWorkers(FReachabilityAnalysisState *this)

{
  this->NumWorkers = 0;
  return;
}

// SetupWorkers @ 1421e8b30

void __thiscall
UE::GC::FReachabilityAnalysisState::SetupWorkers(FReachabilityAnalysisState *this,int param_1)

{
  longlong lVar1;
  uint uStack_c;
  
  this->NumWorkers = param_1;
  uStack_c = uStack_c & 0xffffff00;
  lVar1 = (ulonglong)uStack_c << 0x20;
  this->bIsSuspended = false;
  (this->Stats).NumObjects = 0;
  (this->Stats).NumReferences = 0;
  (this->Stats).NumVerseCells = (int)lVar1;
  (this->Stats).bFoundGarbageRef = (bool)(char)((ulonglong)lVar1 >> 0x20);
  *(int3 *)&(this->Stats).field_0xd = (int3)((ulonglong)lVar1 >> 0x28);
  return;
}

// UpdateStats @ 1421ecc30

void __thiscall
UE::GC::FReachabilityAnalysisState::UpdateStats
          (FReachabilityAnalysisState *this,FProcessorStats *param_1)

{
  uint *puVar1;
  bool *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar3 = param_1->NumReferences;
  uVar4 = param_1->NumVerseCells;
  uVar5 = *(undefined4 *)&param_1->bFoundGarbageRef;
  (this->Stats).NumObjects = (this->Stats).NumObjects + param_1->NumObjects;
  puVar1 = &(this->Stats).NumReferences;
  *puVar1 = *puVar1 + uVar3;
  puVar1 = &(this->Stats).NumVerseCells;
  *puVar1 = *puVar1 + uVar4;
  pbVar2 = &(this->Stats).bFoundGarbageRef;
  *pbVar2 = (bool)(*pbVar2 | (byte)uVar5);
  return;
}

