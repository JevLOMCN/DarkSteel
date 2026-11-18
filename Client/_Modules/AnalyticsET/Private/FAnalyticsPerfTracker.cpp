// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 7

// FAnalyticsPerfTracker @ 143192430

FAnalyticsPerfTracker * __thiscall
FAnalyticsPerfTracker::FAnalyticsPerfTracker(FAnalyticsPerfTracker *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FTSTicker *pFVar4;
  FString *pFVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  FDateTime this_00;
  FString *pFVar8;
  FEngineVersion *this_01;
  ForAnyElementType FVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  FString local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  TFunction<void___cdecl(wchar_t_const_*)> local_48;
  
  pFVar4 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar4);
  *(undefined ***)this = &___7FAnalyticsPerfTracker__6B_;
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar5 = FPaths::ProjectSavedDir();
  local_78.Size = 0;
  if ((pFVar5->Data).ArrayNum == 0) {
    local_78.DataPtr = L"";
  }
  else {
    local_78.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(local_78.DataPtr);
    local_78.Size = (int)sVar6;
  }
  local_60 = 0x13;
  local_68 = L"AnalyticsTiming.csv";
  FPaths::CombineInternal((FString *)&local_58,&local_78,2);
  FVar9.Data = (FScriptContainerElement *)L"";
  if ((uint)local_50 != 0) {
    FVar9.Data = local_58.Data;
  }
  FOutputDeviceFile::FOutputDeviceFile
            (&this->LogFile,(wchar_t *)FVar9.Data,false,false,true,&local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pFVar5 = &this->StartDate;
  local_58.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->CL;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartDate).Data.ArrayNum = 0;
  (this->StartDate).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CL).Data.ArrayNum = 0;
  (this->CL).Data.ArrayMax = 0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78.Size = 0;
  local_78._12_4_ = 0;
  FGuid::AppendString((FGuid *)&local_58,(FString *)&local_78,Digits);
  ::FString::ToLower((FString *)&local_78,&this->RunID);
  if (local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  this->LastSubmitTime = 0.0;
  this->TimeThisWindow = 0.0;
  this->BytesThisWindow = 0;
  this->NumEventsThisWindow = 0;
  this->FlushesThisWindow = 0;
  this->FramesThisWindow = 0;
  QueryPerformanceCounter(&local_res8);
  dVar10 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->bEnabled = false;
  this->StartTime = dVar10 + __real_4170000000000000;
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar7,L"ANALYTICSTRACKPERF");
  this->bEnabled = bVar3;
  if (bVar3) {
    *(undefined1 *)&(this->LogFile)._padding_ = 1;
    local_res8.QuadPart = 0;
    (**(code **)((this->LogFile)._padding_ + 0x10))
              (&this->LogFile,
               L"Date,CL,RunID,Time,WindowSeconds,ProfiledSeconds,Frames,Flushes,Events,Bytes,FrameCounter"
               ,5,&local_res8);
    this->LastSubmitTime = this->StartTime;
    this_00 = FDateTime::UtcNow();
    pFVar8 = FDateTime::ToIso8601((FDateTime *)this_00.Ticks,(FString *)&local_58);
    if (pFVar5 != pFVar8) {
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar5->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->StartDate).Data.ArrayNum = (pFVar8->Data).ArrayNum;
      (this->StartDate).Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    this_01 = FEngineVersion::Current();
    FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_01);
    ::FString::PrintfImpl(&local_88,L"%u");
    if (pFVar1 != &local_88) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (this->CL).Data.ArrayNum = local_88.Data.ArrayNum;
      (this->CL).Data.ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// IsEnabled @ 14319dea0

bool __thiscall FAnalyticsPerfTracker::IsEnabled(FAnalyticsPerfTracker *this)

{
  return this->bEnabled;
}

// RecordFlush @ 1431a0a60

void __thiscall
FAnalyticsPerfTracker::RecordFlush
          (FAnalyticsPerfTracker *this,ulong64 param_1,ulong64 param_2,double param_3)

{
  if (this->bEnabled != false) {
    this->FlushesThisWindow = this->FlushesThisWindow + 1;
    this->BytesThisWindow = this->BytesThisWindow + param_1;
    this->NumEventsThisWindow = this->NumEventsThisWindow + param_2;
    this->TimeThisWindow = param_3 + this->TimeThisWindow;
  }
  return;
}

// ResetWindow @ 1431a2660

void __thiscall FAnalyticsPerfTracker::ResetWindow(FAnalyticsPerfTracker *this,double param_1)

{
  this->LastSubmitTime = param_1;
  this->TimeThisWindow = 0.0;
  this->BytesThisWindow = 0;
  this->NumEventsThisWindow = 0;
  this->FlushesThisWindow = 0;
  this->FramesThisWindow = 0;
  return;
}

// SetRunID @ 1431a4420

void __thiscall FAnalyticsPerfTracker::SetRunID(FAnalyticsPerfTracker *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FDateTime this_00;
  FString *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  if (this->bEnabled != false) {
    ::FString::operator=(&this->RunID,param_1);
    this_00 = FDateTime::UtcNow();
    pFVar2 = FDateTime::ToIso8601((FDateTime *)this_00.Ticks,&local_18);
    pFVar3 = &this->StartDate;
    if (pFVar3 != pFVar2) {
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->StartDate).Data.ArrayNum = (pFVar2->Data).ArrayNum;
      (this->StartDate).Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Tick @ 1431a5d70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnalyticsPerfTracker::Tick(FAnalyticsPerfTracker *this,float param_1)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_virtual_bool___cdecl_FAnalyticsPerfTracker::Tick(float)_::_2_::FStat_STAT_IAnalyticsProviderET_Tick>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar9;
  bool bVar10;
  FNameEntryId FVar11;
  TAlignedBytes<8,8> TVar12;
  double dVar13;
  double dVar14;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  double dVar15;
  int iVar16;
  int iVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  FStatMessage local_58 [2];
  
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_IAnalyticsProviderET_Tick ==
        (FThreadSafeStaticStat<_private:_virtual_bool___cdecl_FAnalyticsPerfTracker::Tick(float)_::_2_::FStat_STAT_IAnalyticsProviderET_Tick>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_IAnalyticsProviderET_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IAnalyticsProviderET_Tick,*pFVar7,
                 L"STAT_IAnalyticsProviderET_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_IAnalyticsProviderET_Tick;
  if (StatPtr_STAT_IAnalyticsProviderET_Tick ==
      (FThreadSafeStaticStat<_private:_virtual_bool___cdecl_FAnalyticsPerfTracker::Tick(float)_::_2_::FStat_STAT_IAnalyticsProviderET_Tick>
       )0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_IAnalyticsProviderET_Tick");
    FVar8 = (FThreadSafeStaticStat<_private:_virtual_bool___cdecl_FAnalyticsPerfTracker::Tick(float)_::_2_::FStat_STAT_IAnalyticsProviderET_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IAnalyticsProviderET_Tick,
                         *pFVar7,L"STAT_IAnalyticsProviderET_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar9 = *(LARGE_INTEGER *)FVar8;
  bVar4 = false;
  bVar6 = false;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\AnalyticsPerfTracker.cpp"
                   ,0x33);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar5 = true;
      FVar11.Value = LVar9.s.LowPart;
      goto LAB_1431a5efc;
    }
  }
  bVar5 = false;
  LVar9._0_4_ = 0;
  LVar9._4_4_ = 0;
LAB_1431a5efc:
  if (this->bEnabled == false) {
    bVar10 = false;
  }
  else {
    this->FramesThisWindow = this->FramesThisWindow + 1;
    QueryPerformanceCounter(&local_res8);
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (this->LastSubmitTime + __real_404e000000000000 < dVar3) {
      uVar19 = this->BytesThisWindow;
      uVar18 = this->NumEventsThisWindow;
      iVar17 = this->FlushesThisWindow;
      dVar15 = this->TimeThisWindow;
      dVar14 = dVar3 - this->StartTime;
      pcVar2 = *(code **)((this->LogFile)._padding_ + 8);
      local_res8.s.LowPart = 0;
      local_res8.s.HighPart = 0;
      iVar16 = this->FramesThisWindow;
      dVar13 = dVar3 - this->LastSubmitTime;
      uVar20 = GFrameCounter;
      ::FString::PrintfImpl((FString *)local_58,L"%s,%s,%s,%f,%f,%f,%d,%d,%llu,%llu,%llu");
      TVar12.Pad = (uchar  [8])L"";
      if (local_58[0].NameAndInfo.Index.Value != 0) {
        TVar12.Pad = local_58[0].StatData.Pad;
      }
      (*pcVar2)(&this->LogFile,TVar12.Pad,5,&local_res8,dVar3,dVar14,dVar13,dVar15,iVar16,iVar17,
                uVar18,uVar19,uVar20);
      if (local_58[0].StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_58[0].StatData.Pad);
      }
      this->LastSubmitTime = dVar3;
      this->TimeThisWindow = 0.0;
      this->BytesThisWindow = 0;
      this->NumEventsThisWindow = 0;
      this->FlushesThisWindow = 0;
      this->FramesThisWindow = 0;
    }
    bVar10 = true;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      local_58[0].NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_58[0].StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar10;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar10;
}

// WindowExpired @ 1431a7820

bool __thiscall FAnalyticsPerfTracker::WindowExpired(FAnalyticsPerfTracker *this,double param_1)

{
  return this->LastSubmitTime + __real_404e000000000000 < param_1;
}

