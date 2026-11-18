// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// SetActivity @ 14897d460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FUserActivityTracking::SetActivity(FUserActivity *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FUserActivityTracking::SetActivity(FUserActivity_const_&)_::_5_::FStat_STAT_FUserActivityTracking_SetActivity>
  FVar11;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  uint uVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FStatMessage local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  
  if (param_1->Context != ContextFilter) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FUserActivityTracking_SetActivity ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FUserActivityTracking::SetActivity(FUserActivity_const_&)_::_5_::FStat_STAT_FUserActivityTracking_SetActivity>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_FUserActivityTracking_SetActivity");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FUserActivityTracking_SetActivity,
                 *pFVar10,L"STAT_FUserActivityTracking_SetActivity","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_FUserActivityTracking_SetActivity;
  if (StatPtr_STAT_FUserActivityTracking_SetActivity ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FUserActivityTracking::SetActivity(FUserActivity_const_&)_::_5_::FStat_STAT_FUserActivityTracking_SetActivity>
       )0x0) {
    pFVar10 = ::FName::FName(&local_98,"STAT_FUserActivityTracking_SetActivity");
    FVar11 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FUserActivityTracking::SetActivity(FUserActivity_const_&)_::_5_::FStat_STAT_FUserActivityTracking_SetActivity>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FUserActivityTracking_SetActivity,*pFVar10,
                          L"STAT_FUserActivityTracking_SetActivity","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar15 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserActivityTracking.cpp"
                   ,0x16);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_14897d5fb;
    }
  }
  bVar5 = false;
  FVar13 = local_90;
LAB_14897d5fb:
  ::FString::operator=(&UserActivity.ActionName,&param_1->ActionName);
  UserActivity.Context = param_1->Context;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnActivityChanged,
             (FWriteAccessScope *)&local_70);
  bVar3 = false;
  OnActivityChanged._28_4_ = OnActivityChanged._28_4_ + 1;
  uVar15 = OnActivityChanged._16_4_ - 1;
  if (-1 < (int)uVar15) {
    lVar14 = (longlong)(int)uVar15 << 4;
    bVar3 = false;
    do {
      uVar9 = 0;
      if ((int)uVar15 < (int)OnActivityChanged._16_4_) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar14 + 8 + OnActivityChanged._8_8_) == 0) ||
          (*(longlong **)(lVar14 + OnActivityChanged._8_8_) == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)(lVar14 + OnActivityChanged._8_8_) + 0x68))(),
         cVar8 == '\0')) {
        bVar3 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  OnActivityChanged._28_4_ = OnActivityChanged._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnActivityChanged,false);
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::UserActivityStringChanged,(FWriteAccessScope *)&local_58);
  bVar3 = false;
  FCoreDelegates::UserActivityStringChanged._28_4_ =
       FCoreDelegates::UserActivityStringChanged._28_4_ + 1;
  uVar15 = FCoreDelegates::UserActivityStringChanged._16_4_ - 1;
  if (-1 < (int)uVar15) {
    lVar14 = (longlong)(int)uVar15 << 4;
    bVar3 = false;
    do {
      uVar9 = 0;
      if ((int)uVar15 < (int)FCoreDelegates::UserActivityStringChanged._16_4_) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar14 + 8 + FCoreDelegates::UserActivityStringChanged._8_8_) == 0) ||
          (*(longlong **)(lVar14 + FCoreDelegates::UserActivityStringChanged._8_8_) ==
           (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)
                                 (lVar14 + FCoreDelegates::UserActivityStringChanged._8_8_) + 0x68))
                            (), cVar8 == '\0')) {
        bVar3 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  FCoreDelegates::UserActivityStringChanged._28_4_ =
       FCoreDelegates::UserActivityStringChanged._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::UserActivityStringChanged,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_80.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_80);
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
  return;
}

// SetContextFilter @ 14897e980

void __cdecl FUserActivityTracking::SetContextFilter(EUserActivityContext param_1)

{
  ContextFilter = param_1;
  return;
}

