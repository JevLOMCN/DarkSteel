// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 14892acf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCanvasLineItem::Draw(FCanvasLineItem *this,FCanvas *param_1)

{
  int *piVar1;
  HHitProxy *pHVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Canvas_LineItemTime> FVar7;
  FBatchedElements *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar8;
  FHitProxyId FVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_78;
  FDepthFieldGlowInfo local_68;
  
  FVar12.Value = 0;
  FVar7 = StatPtr_STAT_Canvas_LineItemTime;
  if (StatPtr_STAT_Canvas_LineItemTime == (FThreadSafeStaticStat<FStat_STAT_Canvas_LineItemTime>)0x0
     ) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_Canvas_LineItemTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Canvas_LineItemTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_LineItemTime,*pFVar6,
                       L"CanvasLineItem Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x62e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14892ae4f;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14892ae4f:
  local_68.bEnableGlow = 0;
  local_68.GlowColor.field0_0x0._0_8_ = 0;
  local_68.GlowColor.field0_0x0._8_8_ = 0;
  local_68.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_68.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_68.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_68.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  this_00 = FCanvas::GetBatchedElements
                      (param_1,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,SE_BLEND_MAX
                       ,&local_68,true);
  pHVar2 = (param_1->CurrentHitProxy).Reference;
  if (pHVar2 == (HHitProxy *)0x0) {
    FVar9.Index = -1;
  }
  else {
    FVar9.Index = (pHVar2->Id).Index;
  }
  FBatchedElements::AddLine
            (this_00,&this->Origin,&this->EndPos,(FLinearColor *)&this->_padding_,FVar9,
             this->LineThickness,0.0,false);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_78.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_78);
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

