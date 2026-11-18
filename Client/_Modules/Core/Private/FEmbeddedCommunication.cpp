// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// AllowSleep @ 1418c7a60

void __cdecl FEmbeddedCommunication::AllowSleep(FName param_1)

{
  return;
}

// ForceTick @ 1418db100

void __cdecl FEmbeddedCommunication::ForceTick(int param_1,float param_2,float param_3)

{
  return;
}

// GetDebugInfo @ 1418deda0

FString * __cdecl FEmbeddedCommunication::GetDebugInfo(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"---");
  return __return_storage_ptr__;
}

// Init @ 1418e2850

void __cdecl FEmbeddedCommunication::Init(void)

{
  return;
}

// IsAwakeForRendering @ 1418e2960

bool __cdecl FEmbeddedCommunication::IsAwakeForRendering(void)

{
  return true;
}

// IsAwakeForTicking @ 1418e2970

bool __cdecl FEmbeddedCommunication::IsAwakeForTicking(void)

{
  return true;
}

// KeepAwake @ 1418e3e50

void __cdecl FEmbeddedCommunication::KeepAwake(FName param_1,bool param_2)

{
  return;
}

// RunOnGameThread @ 1418f3a30

void __cdecl
FEmbeddedCommunication::RunOnGameThread(int param_1,TFunction<void___cdecl(void)> *param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001418f3a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// TickGameThread @ 1418fab40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FEmbeddedCommunication::TickGameThread(float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_static_bool___cdecl_FEmbeddedCommunication::TickGameThread(float)_::_2_::FStat_STAT_FEmbeddedCommunication_TickGameThread>
  FVar5;
  FThreadStats *this;
  FThreadStatsPool *this_00;
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
      if (StatPtr_STAT_FEmbeddedCommunication_TickGameThread ==
          (FThreadSafeStaticStat<_public:_static_bool___cdecl_FEmbeddedCommunication::TickGameThread(float)_::_2_::FStat_STAT_FEmbeddedCommunication_TickGameThread>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res10.s,"STAT_FEmbeddedCommunication_TickGameThread"
                               );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FEmbeddedCommunication_TickGameThread,
                   *pFVar4,L"STAT_FEmbeddedCommunication_TickGameThread","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_FEmbeddedCommunication_TickGameThread;
  if (StatPtr_STAT_FEmbeddedCommunication_TickGameThread ==
      (FThreadSafeStaticStat<_public:_static_bool___cdecl_FEmbeddedCommunication::TickGameThread(float)_::_2_::FStat_STAT_FEmbeddedCommunication_TickGameThread>
       )0x0) {
    pFVar4 = ::FName::FName(local_res18,"STAT_FEmbeddedCommunication_TickGameThread");
    FVar5 = (FThreadSafeStaticStat<_public:_static_bool___cdecl_FEmbeddedCommunication::TickGameThread(float)_::_2_::FStat_STAT_FEmbeddedCommunication_TickGameThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FEmbeddedCommunication_TickGameThread,*pFVar4,
                         L"STAT_FEmbeddedCommunication_TickGameThread","STATGROUP_Quick",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EmbeddedCommunication.cpp"
                   ,0x156);
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
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
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
  return true;
}

// UELogDisplay @ 1418fdf00

void __cdecl FEmbeddedCommunication::UELogDisplay(wchar_t *param_1)

{
  return;
}

// UELogError @ 1418fdf10

void __cdecl FEmbeddedCommunication::UELogError(wchar_t *param_1)

{
  return;
}

// UELogFatal @ 1418fdf20

void __cdecl FEmbeddedCommunication::UELogFatal(wchar_t *param_1)

{
  return;
}

// UELogLog @ 1418fdf30

void __cdecl FEmbeddedCommunication::UELogLog(wchar_t *param_1)

{
  return;
}

// UELogVerbose @ 1418fdf40

void __cdecl FEmbeddedCommunication::UELogVerbose(wchar_t *param_1)

{
  return;
}

// UELogWarning @ 1418fdf50

void __cdecl FEmbeddedCommunication::UELogWarning(wchar_t *param_1)

{
  return;
}

// WakeGameThread @ 1419002f0

void __cdecl FEmbeddedCommunication::WakeGameThread(void)

{
  return;
}

