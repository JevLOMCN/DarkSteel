// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FMallocLeakReporter @ 1483e1a10

FMallocLeakReporter * __thiscall FMallocLeakReporter::FMallocLeakReporter(FMallocLeakReporter *this)

{
  *(undefined8 *)&(this->ReportDelegate).field_0x18 = 2;
  (this->CheckpointTicker).Object = (FElement *)0x0;
  (this->CheckpointTicker).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ReportTicker).Object = (FElement *)0x0;
  (this->ReportTicker).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ReportDelegate = 0;
  *(undefined8 *)&(this->ReportDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ReportDelegate).field_0x10 = 0;
  this->ReportCount = 0;
  this->Enabled = false;
  (this->DefaultLeakReportOptions).SizeFilter = 0;
  (this->DefaultLeakReportOptions).RateFilter = 0.0;
  (this->DefaultLeakReportOptions).OnlyNonDeleters = false;
  *(undefined3 *)&(this->DefaultLeakReportOptions).field_0x9 = 0;
  (this->DefaultLeakReportOptions).FrameStart = 0;
  (this->DefaultLeakReportOptions).FrameEnd = 0;
  (this->DefaultLeakReportOptions).SortBy = SortSize;
  (this->DefaultLeakReportOptions).OutputDevice = (FOutputDevice *)0x0;
  (this->DefaultAllocReportOptions).RateFilter = 0.0;
  (this->DefaultAllocReportOptions).OnlyNonDeleters = false;
  *(undefined3 *)&(this->DefaultAllocReportOptions).field_0x9 = 0;
  (this->DefaultAllocReportOptions).FrameStart = 0;
  (this->DefaultAllocReportOptions).FrameEnd = 0;
  (this->DefaultAllocReportOptions).OutputDevice = (FOutputDevice *)0x0;
  (this->DefaultAllocReportOptions).SortBy = SortSize;
  (this->DefaultLeakReportOptions).OnlyNonDeleters = true;
  (this->DefaultLeakReportOptions).RateFilter = 0.1;
  (this->DefaultLeakReportOptions).SizeFilter = 0x80000;
  (this->DefaultLeakReportOptions).SortBy = SortRate;
  (this->DefaultAllocReportOptions).SizeFilter = 0x100000;
  return this;
}

// Checkpoint @ 1483f40f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocLeakReporter::Checkpoint(FMallocLeakReporter *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_protected:_void___cdecl_FMallocLeakReporter::Checkpoint(void)_::_2_::FStat_STAT_FMallocLeakDetection_Checkpoint>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FMallocLeakDetection_Checkpoint ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FMallocLeakReporter::Checkpoint(void)_::_2_::FStat_STAT_FMallocLeakDetection_Checkpoint>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res10.s,"STAT_FMallocLeakDetection_Checkpoint");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocLeakDetection_Checkpoint,
                   *pFVar4,L"STAT_FMallocLeakDetection_Checkpoint","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_FMallocLeakDetection_Checkpoint;
  if (StatPtr_STAT_FMallocLeakDetection_Checkpoint ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FMallocLeakReporter::Checkpoint(void)_::_2_::FStat_STAT_FMallocLeakDetection_Checkpoint>
       )0x0) {
    pFVar4 = ::FName::FName(local_res18,"STAT_FMallocLeakDetection_Checkpoint");
    FVar5 = (FThreadSafeStaticStat<_protected:_void___cdecl_FMallocLeakReporter::Checkpoint(void)_::_2_::FStat_STAT_FMallocLeakDetection_Checkpoint>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocLeakDetection_Checkpoint,
                         *pFVar4,L"STAT_FMallocLeakDetection_Checkpoint","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar7.Value;
        local_res10.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ProfilingDebugging\\MallocLeakReporter.cpp"
                   ,100);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar7.Value;
      local_res10.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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

// Clear @ 1483f4430

void __thiscall FMallocLeakReporter::Clear(FMallocLeakReporter *this)

{
  return;
}

// Get @ 148404e50

FMallocLeakReporter * __cdecl FMallocLeakReporter::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FMallocLeakReporter::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// Start @ 1484277b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocLeakReporter::Start(FMallocLeakReporter *this,int param_1,float param_2)

{
  if (1 < (byte)LogLeakDetector._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLeakDetector);
    return;
  }
  return;
}

// Stop @ 148427ad0

void __thiscall FMallocLeakReporter::Stop(FMallocLeakReporter *this)

{
  return;
}

// WriteReport @ 14842e9e0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FMallocLeakReporter::WriteReport
          (FMallocLeakReporter *this,wchar_t *param_1,FMallocLeakReportOptions *param_2)

{
  if (4 < (byte)LogLeakDetector._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLeakDetector);
  }
  return 0;
}

// WriteReports @ 14842ea10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FMallocLeakReporter::WriteReports(FMallocLeakReporter *this,uint param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UWorldProxy UVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_int___cdecl_FMallocLeakReporter::WriteReports(unsigned_int)_::_2_::FStat_STAT_FMallocLeakReporter_WriteReports>
  FVar7;
  FOutputDeviceRedirector *pFVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar9;
  TAlignedBytes<8,8> TVar10;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18 [2];
  FString local_88;
  FStatMessage local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FMallocLeakReporter_WriteReports ==
        (FThreadSafeStaticStat<_public:_int___cdecl_FMallocLeakReporter::WriteReports(unsigned_int)_::_2_::FStat_STAT_FMallocLeakReporter_WriteReports>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_FMallocLeakReporter_WriteReports");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocLeakReporter_WriteReports,*pFVar6
                 ,L"STAT_FMallocLeakReporter_WriteReports","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_FMallocLeakReporter_WriteReports;
  if (StatPtr_STAT_FMallocLeakReporter_WriteReports ==
      (FThreadSafeStaticStat<_public:_int___cdecl_FMallocLeakReporter::WriteReports(unsigned_int)_::_2_::FStat_STAT_FMallocLeakReporter_WriteReports>
       )0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_FMallocLeakReporter_WriteReports");
    FVar7 = (FThreadSafeStaticStat<_public:_int___cdecl_FMallocLeakReporter::WriteReports(unsigned_int)_::_2_::FStat_STAT_FMallocLeakReporter_WriteReports>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocLeakReporter_WriteReports
                         ,*pFVar6,L"STAT_FMallocLeakReporter_WriteReports","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar9 = *(LARGE_INTEGER *)FVar7;
  bVar2 = false;
  bVar4 = false;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ProfilingDebugging\\MallocLeakReporter.cpp"
                   ,0x6d);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar3 = true;
      goto LAB_14842eb70;
    }
  }
  bVar3 = false;
  LVar9._0_4_ = 0;
  LVar9._4_4_ = 0;
LAB_14842eb70:
  local_res8 = (LARGE_INTEGER)(GWorld.World)->_padding_;
  ::FName::ToString((FName *)&local_res8.s,(FString *)&local_78);
  FPaths::GetBaseFilename(&local_68,(FString *)&local_78,true);
  if (local_78.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_78.StatData.Pad);
  }
  this->ReportCount = this->ReportCount + 1;
  ::FString::PrintfImpl(&local_88,L"%03d_%s");
  ::FString::ConcatFC(&local_48,&local_88,L"_Leaks.txt");
  ::FString::ConcatFC(&local_58,&local_88,L"_Allocs.txt");
  if ((4 < (byte)LogLeakDetector._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLeakDetector),
     4 < (byte)LogLeakDetector._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLeakDetector);
  }
  if (((param_1 & 2) != 0) && (4 < (byte)LogLeakDetector._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLeakDetector);
  }
  if ((param_1 & 4) != 0) {
    ::FString::PrintfImpl((FString *)&local_78,L" -full -name=%s");
    UVar5 = GWorld;
    pFVar8 = GetGlobalLogSingleton();
    TVar10.Pad = (uchar  [8])L"";
    if (local_78.NameAndInfo.Index.Value != 0) {
      TVar10.Pad = local_78.StatData.Pad;
    }
    UEngine::HandleMemReportCommand
              (GEngine,(wchar_t *)TVar10.Pad,(FOutputDevice *)pFVar8,UVar5.World);
    if (local_78.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_78.StatData.Pad);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Index.Value = LVar9.s.LowPart;
      local_78.NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_78.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_78);
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
  return 0;
}

