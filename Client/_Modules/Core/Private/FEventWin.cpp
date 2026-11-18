// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~FEventWin @ 141a9cec0

void __thiscall FEventWin::~FEventWin(FEventWin *this)

{
  this->_padding_ = (longlong)&___7FEventWin__6B_;
  if (this->Event != (HANDLE)0x0) {
    CloseHandle(this->Event);
  }
  this->_padding_ = (longlong)&___7FEvent__6B_;
  return;
}

// Create @ 141aa2560

bool __thiscall FEventWin::Create(FEventWin *this,bool param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,(uint)param_1,0,(LPCWSTR)0x0);
  this->Event = pvVar1;
  this->ManualReset = param_1;
  return pvVar1 != (HANDLE)0x0;
}

// IsManualReset @ 141ab2f20

bool __thiscall FEventWin::IsManualReset(FEventWin *this)

{
  return this->ManualReset;
}

// Reset @ 141abe970

void __thiscall FEventWin::Reset(FEventWin *this)

{
  code *pcVar1;
  bool bVar2;
  
  FEvent::ResetForStats((FEvent *)this);
  if (this->Event == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x796,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141abe9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetEvent(this->Event);
  return;
}

// Trigger @ 141ac3070

void __thiscall FEventWin::Trigger(FEventWin *this)

{
  code *pcVar1;
  bool bVar2;
  
  FEvent::TriggerForStats((FEvent *)this);
  if (this->Event == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x78f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141ac30b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(this->Event);
  return;
}

// Wait @ 141ac4d80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FEventWin::Wait(FEventWin *this,uint param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  DWORD DVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_EventWait> FVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FOversubscriptionScope local_res8 [4];
  undefined1 local_res10 [8];
  FColor_u_0 local_res20 [2];
  FScopeIdle local_98;
  FName local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  code *local_50;
  undefined1 *local_48;
  
  FEvent::WaitForStats((FEvent *)this);
  bVar3 = false;
  FVar11 = StatPtr_STAT_EventWait;
  if (StatPtr_STAT_EventWait == (FThreadSafeStaticStat<FStat_STAT_EventWait>)0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_EventWait");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_EventWait>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EventWait,*pFVar10,
                        L"CPU Stall - Wait For Event","STATGROUP_CPUStalls","STATCAT_Advanced",
                        L"CPU Stalls",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar15.Value;
        local_90.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                   ,0x783);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.s.LowPart = FVar15.Value;
      local_88.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_141ac4ecf;
    }
  }
  bVar5 = false;
  FVar16 = local_70;
LAB_141ac4ecf:
  if (param_1 != 0) {
    bVar7 = FCsvProfiler::IsWaitTrackingEnabledOnCurrentThread();
    if (bVar7) {
      bVar3 = true;
      FCsvProfiler::BeginWait();
    }
  }
  if (this->Event == (void *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x785,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
  }
  local_res8[0].bIncrementOversubscriptionEmitted = false;
  local_res8[0].bCpuBeginEventEmitted = false;
  if (param_1 != 0) {
    LowLevelTasks::FOversubscriptionScope::TryIncrementOversubscription(local_res8);
  }
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_98,param_2);
  DVar9 = WaitForSingleObject(this->Event,param_1);
  if (local_98.bIgnore == false) {
    puVar12 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_48 = local_res10;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar13 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar12);
    QueryPerformanceCounter(&local_88);
    *(DWORD *)(pFVar13 + 2) = *(int *)(pFVar13 + 2) + (local_88.s.LowPart - local_98.Start);
    if (0 < *(int *)(pFVar13 + 3)) {
      *(DWORD *)&pFVar13[2].field_0x4 =
           *(int *)&pFVar13[2].field_0x4 + (local_88.s.LowPart - local_98.Start);
    }
    pFVar13[3].field_0x4 = 0;
  }
  if (local_98.TraceEventScope.bEnabled != false) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_res8[0].bIncrementOversubscriptionEmitted != false) {
    LowLevelTasks::FOversubscriptionScope::DecrementOversubscription(local_res8);
  }
  if (bVar3) {
    FCsvProfiler::EndWait();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
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
  return DVar9 == 0;
}

