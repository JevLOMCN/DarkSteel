// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// EndUpdate @ 1489d9790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAdaptiveAddToWorld::EndUpdate(FAdaptiveAddToWorld *this)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  char *pcVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_58 [4];
  
  if (this->bEnabled == false) {
    return;
  }
  FVar15.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2
                           ::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_LevelStreamingAdaptiveUpdate = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_LevelStreamingAdaptiveUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2::
                StatPtr_STAT_LevelStreamingAdaptiveUpdate,*pFVar9,
               L"STAT_LevelStreamingAdaptiveUpdate","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2::
                         _thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_LevelStreamingAdaptiveUpdate;
  if (_StatPtr_STAT_LevelStreamingAdaptiveUpdate == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_LevelStreamingAdaptiveUpdate");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2
                          ::StatPtr_STAT_LevelStreamingAdaptiveUpdate,*pFVar9,
                         L"STAT_LevelStreamingAdaptiveUpdate","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)&pTVar10->Name;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar11 == 0)) {
LAB_1489d992c:
    bVar6 = false;
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                   ,0x1b8);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1489d992c;
    local_res8.s.LowPart = FVar13.Value;
    local_res8.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
    FVar15.Value = FVar13.Value;
  }
  if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2::
      __CsvProfilerStat441 == false) {
    FCsvProfilerTrace::OutputInlineStat("Update",_GCsvCategory_LevelStreamingAdaptiveDetail.Index);
    `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l2::__CsvProfilerStat441
         = true;
  }
  uVar11 = _GCsvCategory_LevelStreamingAdaptiveDetail.Index;
  FCsvProfiler::BeginStat("Update",_GCsvCategory_LevelStreamingAdaptiveDetail.Index,"CSV_Update");
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  fVar18 = (float)(dVar3 - this->LastUpdateTimestamp);
  fVar16 = GAdaptiveAddToWorldTimeSliceMin;
  if (0 < this->TotalWorkUnitsRemaining) {
    iVar2 = this->HistoryFrameIndex;
    this->UpdateHistory[iVar2].WorkUnitsProcessed = this->WorkUnitsProcessedThisUpdate;
    this->UpdateHistory[iVar2].DeltaT = fVar18;
    this->UpdateHistory[iVar2].TimeSlice = this->ExtraTimeSlice + this->BaseTimeSlice;
    uVar8 = this->HistoryFrameIndex + 1U & 0x8000000f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
    }
    this->HistoryFrameIndex = uVar8;
    fVar16 = GAdaptiveAddToWorldTimeSliceMin;
    if (0xf < this->ValidFrameCount) {
      fVar16 = (float)(this->UpdateHistory[0xf].WorkUnitsProcessed +
                       this->UpdateHistory[0xe].WorkUnitsProcessed +
                       this->UpdateHistory[0xd].WorkUnitsProcessed +
                       this->UpdateHistory[0xc].WorkUnitsProcessed +
                       this->UpdateHistory[0xb].WorkUnitsProcessed +
                       this->UpdateHistory[10].WorkUnitsProcessed +
                       this->UpdateHistory[9].WorkUnitsProcessed +
                       this->UpdateHistory[8].WorkUnitsProcessed +
                       this->UpdateHistory[7].WorkUnitsProcessed +
                       this->UpdateHistory[6].WorkUnitsProcessed +
                       this->UpdateHistory[5].WorkUnitsProcessed +
                       this->UpdateHistory[4].WorkUnitsProcessed +
                       this->UpdateHistory[3].WorkUnitsProcessed +
                       this->UpdateHistory[2].WorkUnitsProcessed +
                       this->UpdateHistory[1].WorkUnitsProcessed +
                      this->UpdateHistory[0].WorkUnitsProcessed) /
               ((this->UpdateHistory[1].TimeSlice + this->UpdateHistory[0].TimeSlice +
                 this->UpdateHistory[2].TimeSlice + this->UpdateHistory[3].TimeSlice +
                 this->UpdateHistory[4].TimeSlice + this->UpdateHistory[5].TimeSlice +
                 this->UpdateHistory[6].TimeSlice + this->UpdateHistory[7].TimeSlice +
                 this->UpdateHistory[8].TimeSlice + this->UpdateHistory[9].TimeSlice +
                 this->UpdateHistory[10].TimeSlice + this->UpdateHistory[0xb].TimeSlice +
                 this->UpdateHistory[0xc].TimeSlice + this->UpdateHistory[0xd].TimeSlice +
                 this->UpdateHistory[0xe].TimeSlice + this->UpdateHistory[0xf].TimeSlice) *
                __real_3d800000 *
               (this->UpdateHistory[1].DeltaT + this->UpdateHistory[0].DeltaT +
                this->UpdateHistory[2].DeltaT + this->UpdateHistory[3].DeltaT +
                this->UpdateHistory[4].DeltaT + this->UpdateHistory[5].DeltaT +
                this->UpdateHistory[6].DeltaT + this->UpdateHistory[7].DeltaT +
                this->UpdateHistory[8].DeltaT + this->UpdateHistory[9].DeltaT +
                this->UpdateHistory[10].DeltaT + this->UpdateHistory[0xb].DeltaT +
                this->UpdateHistory[0xc].DeltaT + this->UpdateHistory[0xd].DeltaT +
                this->UpdateHistory[0xe].DeltaT + this->UpdateHistory[0xf].DeltaT));
      if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l19::
          __CsvProfilerStat476 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AverageWorkUnitsPerSecondWith1MsTimeSlice",
                   _GCsvCategory_LevelStreamingAdaptiveDetail.Index);
        `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l19::
        __CsvProfilerStat476 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AverageWorkUnitsPerSecondWith1MsTimeSlice",
                 _GCsvCategory_LevelStreamingAdaptiveDetail.Index,fVar16,Set);
      fVar16 = __real_3f800000 / fVar16;
      if (GAdaptiveAddToWorldMethod == 1) {
        iVar2 = this->TotalWorkUnitsForLevelsInFlight;
        if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l26::
            __CsvProfilerStat483 == false) {
          FCsvProfilerTrace::OutputInlineStat
                    ("EstimatedTotalTimeForCurrentLevelsWith1MsTimeSlice",
                     _GCsvCategory_LevelStreamingAdaptiveDetail.Index);
          `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l26::
          __CsvProfilerStat483 = true;
        }
        pcVar12 = "EstimatedTotalTimeForCurrentLevelsWith1MsTimeSlice";
      }
      else {
        iVar2 = this->TotalWorkUnitsRemaining;
        if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l32::
            __CsvProfilerStat489 == false) {
          FCsvProfilerTrace::OutputInlineStat
                    ("EstimatedTimeRemainingWith1MsTimeSlice",
                     _GCsvCategory_LevelStreamingAdaptiveDetail.Index);
          `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l32::
          __CsvProfilerStat489 = true;
        }
        pcVar12 = "EstimatedTimeRemainingWith1MsTimeSlice";
      }
      fVar16 = (float)iVar2 * fVar16;
      FCsvProfiler::RecordCustomStat
                (pcVar12,_GCsvCategory_LevelStreamingAdaptiveDetail.Index,fVar16,Set);
      fVar17 = fVar16 / GAdaptiveAddToWorldTargetMaxTimeRemaining - this->ExtraTimeSlice;
      fVar16 = this->BaseTimeSlice;
      fVar4 = GAdaptiveAddToWorldTimeSliceMax;
      if (fVar17 <= GAdaptiveAddToWorldTimeSliceMax) {
        fVar4 = fVar17;
      }
      if (fVar4 <= GAdaptiveAddToWorldTimeSliceMin) {
        fVar4 = GAdaptiveAddToWorldTimeSliceMin;
      }
      fVar17 = fVar4;
      if (fVar4 <= fVar16) {
        if (((fVar4 < fVar16) && (0.0 < GAdaptiveAddToWorldTimeSliceMaxReducePerSecond)) &&
           (fVar17 = fVar16 - GAdaptiveAddToWorldTimeSliceMaxReducePerSecond * fVar18,
           fVar17 <= fVar4)) {
          fVar17 = fVar4;
        }
      }
      else if (0.0 < GAdaptiveAddToWorldTimeSliceMaxIncreasePerSecond) {
        fVar16 = GAdaptiveAddToWorldTimeSliceMaxIncreasePerSecond * fVar18 + fVar16;
        if (fVar4 <= fVar16) {
          fVar16 = fVar4;
        }
        this->BaseTimeSlice = fVar16;
        goto LAB_1489d9cb2;
      }
      this->BaseTimeSlice = fVar17;
      goto LAB_1489d9cb2;
    }
    this->ValidFrameCount = this->ValidFrameCount + 1;
  }
  this->BaseTimeSlice = fVar16;
LAB_1489d9cb2:
  if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l44::
      __CsvProfilerStat513 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("WorkUnitsProcessedPerSecond",_GCsvCategory_LevelStreamingAdaptiveDetail.Index);
    `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l44::__CsvProfilerStat513
         = true;
  }
  FCsvProfiler::RecordCustomStat
            ("WorkUnitsProcessedPerSecond",_GCsvCategory_LevelStreamingAdaptiveDetail.Index,
             (float)this->WorkUnitsProcessedThisUpdate / fVar18,Set);
  if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l48::
      __CsvProfilerStat514 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("WorkUnitsProcessedThisUpdate",_GCsvCategory_LevelStreamingAdaptiveDetail.Index);
    `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l48::__CsvProfilerStat514
         = true;
  }
  FCsvProfiler::RecordCustomStat
            ("WorkUnitsProcessedThisUpdate",_GCsvCategory_LevelStreamingAdaptiveDetail.Index,
             this->WorkUnitsProcessedThisUpdate,Set);
  if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l52::
      __CsvProfilerStat515 == false) {
    FCsvProfilerTrace::OutputInlineStat("TimeSlice",_GCsvCategory_LevelStreamingAdaptive.Index);
    `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l52::__CsvProfilerStat515
         = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TimeSlice",_GCsvCategory_LevelStreamingAdaptive.Index,
             this->ExtraTimeSlice + this->BaseTimeSlice,Set);
  if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l56::
      __CsvProfilerStat516 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("WorkUnitsRemaining",_GCsvCategory_LevelStreamingAdaptive.Index);
    `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l56::__CsvProfilerStat516
         = true;
  }
  FCsvProfiler::RecordCustomStat
            ("WorkUnitsRemaining",_GCsvCategory_LevelStreamingAdaptive.Index,
             this->TotalWorkUnitsRemaining,Set);
  if (`public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l60::
      __CsvProfilerStat517 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("TotalWorkUnitsForLevelsInFlight",_GCsvCategory_LevelStreamingAdaptive.Index);
    `public:_void___cdecl_FAdaptiveAddToWorld::EndUpdate(void)___ptr64'::__l60::__CsvProfilerStat517
         = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalWorkUnitsForLevelsInFlight",_GCsvCategory_LevelStreamingAdaptive.Index,
             this->TotalWorkUnitsForLevelsInFlight,Set);
  this->LastUpdateTimestamp = dVar3;
  FCsvProfiler::EndStat("Update",uVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_58[0].NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
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
  return;
}

