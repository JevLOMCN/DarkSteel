// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 147940640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParallelAnimationCompletionTask::DoTask
          (FParallelAnimationCompletionTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2
          )

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  FNameEntryId FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AnimGameThreadTime> FVar5;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar6;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FName local_48;
  byte local_40;
  LARGE_INTEGER local_38;
  byte local_30;
  FStatMessage local_28;
  
  FVar5 = StatPtr_STAT_AnimGameThreadTime;
  if (StatPtr_STAT_AnimGameThreadTime == (FThreadSafeStaticStat<FStat_STAT_AnimGameThreadTime>)0x0)
  {
    pFVar4 = ::FName::FName(&local_res20,"STAT_AnimGameThreadTime");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AnimGameThreadTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimGameThreadTime,*pFVar4,
                       L"AnimGameThreadTime","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  local_38.s.LowPart = 0;
  local_38.s.HighPart = 0;
  local_30 = 0;
  LVar2 = *(LARGE_INTEGER *)FVar5;
  if ((LVar2.s.LowPart != 0) || (LVar2.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      local_30 = local_30 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar2;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkeletalMeshComponent.cpp"
                   ,0x196);
        local_30 = local_30 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar2;
      local_38 = LVar2;
      FThreadStats::AddMessage((FName)LVar2.s,CycleScopeStart);
      local_30 = local_30 | 4;
    }
  }
  if (`public:_void___cdecl_FParallelAnimationCompletionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat407 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Animation");
    `public:_void___cdecl_FParallelAnimationCompletionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat407 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Animation","CSV_Animation");
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  FVar3.Value = MXCSR.Value;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    local_res8.QuadPart = CONCAT44(local_res8.s.HighPart,MXCSR.Value) | 0x8000;
    MXCSR.Value = MXCSR.Value | 0x8000;
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_28,(UObjectBaseUtility *)this_00);
    pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_48,(UObjectBaseUtility *)pUVar6);
    if ((this_00->ParallelAnimationEvaluationTask).Reference != (FBaseGraphTask *)0x0) {
      (**(code **)(this_00->_padding_ + 0xce0))(this_00,1);
    }
    if ((local_40 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_40 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_40 & 4) != 0) {
      FThreadStats::AddMessage(local_48,CycleScopeEnd);
    }
    local_40 = 0;
    if ((local_28.NameAndInfo.Index.Value & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (((byte)local_28.NameAndInfo.Index.Value & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((byte)local_28.NameAndInfo.Index.Value & 4) != 0) {
      FThreadStats::AddMessage((FName)local_28.StatData.Pad,CycleScopeEnd);
    }
    local_res8.s.LowPart = FVar3.Value;
  }
  MXCSR.Value = FVar3.Value;
  FCsvProfiler::EndExclusiveStat("Animation");
  if ((local_30 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_30 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  LVar2 = local_38;
  if (((((local_30 & 4) != 0) && ((FName)local_38.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_28.NameAndInfo.Index.Value = LVar2.s.LowPart;
      local_28.NameAndInfo.Number = LVar2.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_28);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

