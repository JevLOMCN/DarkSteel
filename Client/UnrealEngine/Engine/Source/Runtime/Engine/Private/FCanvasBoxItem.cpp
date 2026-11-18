// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Draw @ 148929b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCanvasBoxItem::Draw(FCanvasBoxItem *this,FCanvas *param_1)

{
  int *piVar1;
  float fVar2;
  HHitProxy *pHVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_Canvas_BoxItemTime> FVar15;
  FBatchedElements *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  LARGE_INTEGER local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_138;
  FStatMessage local_118;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  FName local_a8;
  FDepthFieldGlowInfo local_a0;
  
  uVar17 = 0;
  FVar15 = StatPtr_STAT_Canvas_BoxItemTime;
  if (StatPtr_STAT_Canvas_BoxItemTime == (FThreadSafeStaticStat<FStat_STAT_Canvas_BoxItemTime>)0x0)
  {
    pFVar14 = ::FName::FName(&local_a8,"STAT_Canvas_BoxItemTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_Canvas_BoxItemTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_BoxItemTime,*pFVar14,
                        L"CanvasBoxItem Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  local_138 = *(FName *)FVar15;
  bVar7 = false;
  bVar10 = false;
  bVar12 = false;
  bVar8 = false;
  if ((local_138.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar7, bVar9 = bVar10, local_138.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar10 = true;
      bVar12 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = local_138.ComparisonIndex.Value.Value;
        local_res20.Number = local_138.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x638);
        bVar7 = true;
        bVar10 = true;
        bVar12 = true;
        bVar8 = true;
      }
    }
    bVar6 = bVar7;
    bVar9 = bVar10;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_138,CycleScopeStart);
      bVar12 = true;
      bVar8 = true;
      goto LAB_148929ccb;
    }
  }
  bVar10 = bVar8;
  bVar7 = bVar12;
  bVar12 = false;
  bVar8 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
LAB_148929ccb:
  piVar1 = &(this->Corners).ArrayMax;
  (this->Corners).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Corners).AllocatorInstance,0,piVar1);
  }
  local_108._s_0.X = (double)this->_padding_;
  local_108._s_0.Y = (double)this->_padding_;
  local_108._s_0.Z = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_108._s_0);
  local_f0._s_0.X = (this->Size).field0_0x0._s_0.X + (double)this->_padding_;
  local_f0._s_0.Z = 0.0;
  local_f0._s_0.Y = (double)this->_padding_;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_f0._s_0);
  local_d8._s_0.X = (this->Size).field0_0x0._s_0.X + (double)this->_padding_;
  local_d8._s_0.Y = (this->Size).field0_0x0._s_0.Y + (double)this->_padding_;
  local_d8._s_0.Z = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_d8._s_0);
  local_c0._s_0.Y = (this->Size).field0_0x0._s_0.Y + (double)this->_padding_;
  local_c0._s_0.X = (double)this->_padding_;
  local_c0._s_0.Z = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_c0._s_0);
  local_a0.bEnableGlow = 0;
  local_a0.GlowColor.field0_0x0._0_8_ = 0;
  local_a0.GlowColor.field0_0x0._8_8_ = 0;
  local_a0.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_a0.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_a0.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_a0.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  this_00 = FCanvas::GetBatchedElements
                      (param_1,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,SE_BLEND_MAX
                       ,&local_a0,true);
  pHVar3 = (param_1->CurrentHitProxy).Reference;
  if (pHVar3 == (HHitProxy *)0x0) {
    local_res10.s.LowPart = 0xffffffff;
  }
  else {
    local_res10.s.LowPart = (pHVar3->Id).Index;
  }
  uVar11 = local_res10.s.LowPart;
  iVar18 = (this->Corners).ArrayNum;
  if (0 < iVar18) {
    do {
      fVar2 = this->LineThickness;
      uVar19 = uVar17 + 1;
      uVar16 = (int)uVar19 % iVar18;
      uVar13 = 0;
      if ((int)uVar16 < iVar18) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->Corners).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar17 < (this->Corners).ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)
                         ((this->Corners).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x18),
                 (TVector<double> *)(pFVar4 + (longlong)(int)uVar16 * 0x18),
                 (FLinearColor *)&this->_padding_,(FHitProxyId)uVar11,fVar2,0.0,false);
      iVar18 = (this->Corners).ArrayNum;
      uVar17 = uVar19;
      bVar6 = bVar7;
      bVar12 = bVar8;
      bVar9 = bVar10;
    } while ((int)uVar19 < iVar18);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (local_138 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_118.NameAndInfo.Index = local_138.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = local_138.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_118);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SetupBox @ 14897fff0

void __thiscall FCanvasBoxItem::SetupBox(FCanvasBoxItem *this)

{
  int *piVar1;
  TVector<double>_u_0 local_38 [2];
  
  piVar1 = &(this->Corners).ArrayMax;
  (this->Corners).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Corners).AllocatorInstance,0,piVar1);
  }
  local_38[0]._0_8_ = this->_padding_;
  local_38[0]._8_8_ = this->_padding_;
  local_38[0]._s_0.Z = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_38[0]._s_0);
  local_38[0]._0_8_ = (double)this->_padding_ + (this->Size).field0_0x0._s_0.X;
  local_38[0]._s_0.Z = 0.0;
  local_38[0]._8_8_ = this->_padding_;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_38[0]._s_0);
  local_38[0]._0_8_ = (double)this->_padding_ + (this->Size).field0_0x0._s_0.X;
  local_38[0]._8_8_ = (double)this->_padding_ + (this->Size).field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_38[0]._s_0);
  local_38[0]._8_8_ = (double)this->_padding_ + (this->Size).field0_0x0._s_0.Y;
  local_38[0]._0_8_ = this->_padding_;
  local_38[0]._s_0.Z = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector<double>_>(&this->Corners,(TVector<double> *)&local_38[0]._s_0);
  return;
}

