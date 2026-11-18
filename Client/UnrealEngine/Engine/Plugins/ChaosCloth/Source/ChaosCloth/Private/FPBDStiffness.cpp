// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// ApplyXPBDValues @ 14dbbee50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::Softs::FPBDStiffness::ApplyXPBDValues(FPBDStiffness *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18 [2];
  FStatMessage local_48 [2];
  
  FVar10.Value = 0;
  FVar6 = ::StatPtr_STAT_PBD_StiffnessApplyValues;
  if (::StatPtr_STAT_PBD_StiffnessApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_PBD_StiffnessApplyValues");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_PBD_StiffnessApplyValues,*pFVar5
                       ,L"Chaos PBD Stiffness Apply Values","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDStiffness.h"
                   ,0xa6);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14dbbefac;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14dbbefac:
  if (param_1 != this->PrevDtOrMaxStiffness) {
    this->PrevDtOrMaxStiffness = param_1;
    *(undefined1 *)&this->_padding_ = 1;
  }
  local_48[0].StatData.Pad = (uchar  [8])this;
  local_48[0].NameAndInfo.Index.Value = (uint)param_1;
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDStiffness::ApplyXPBDValues_::__l2::<lambda_1>_&>
            ((FPBDWeightMap *)this,(<lambda_1> *)local_48,(bool *)0x0);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_48);
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

