// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FCanvasTextItemBase @ 1489060a0

FCanvasTextItemBase * __thiscall
FCanvasTextItemBase::FCanvasTextItemBase
          (FCanvasTextItemBase *this,TVector2<double> *param_1,FLinearColor *param_2)

{
  FFontRenderInfo *pFVar1;
  FDepthFieldGlowInfo *pFVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  FLinearColor FVar7;
  TVector2<double> TVar8;
  FTexture *pFVar9;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = 0;
  FVar7 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTextItemBase__6B_;
  this->HorizSpacingAdjust = 0.0;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar7.field0_0x0;
  pFVar1->bClipText = 0;
  pFVar1->bEnableShadow = 0;
  pFVar2->bEnableGlow = 0;
  *(undefined8 *)&(this->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 + 8) = 0;
  (this->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  (this->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  (this->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  (this->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  this->Depth = 1.0;
  (this->ShadowColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->ShadowOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar8 = UE::Math::TVector2<double>::ZeroVector;
  this->bCentreX = false;
  this->bCentreY = false;
  this->bOutlined = false;
  (this->DrawnSize).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar8.field0_0x0;
  FVar7 = FLinearColor::Black;
  this->bDontCorrectStereoscopic = true;
  (this->OutlineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar7.field0_0x0;
  (this->TileItem)._padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (this->TileItem)._padding_ = 0;
  *(undefined1 *)&(this->TileItem)._padding_ = 0;
  (this->TileItem)._padding_ = (longlong)dVar3;
  (this->TileItem)._padding_ = (longlong)dVar4;
  (this->TileItem)._padding_ = 0;
  FVar7 = FLinearColor::White;
  (this->TileItem)._padding_ = (longlong)&___7FCanvasTileItem__6B_;
  *(FLinearColor_u_0 *)&(this->TileItem)._padding_ = (FLinearColor_u_0_s_0)FVar7.field0_0x0;
  TVar8 = UE::Math::TVector2<double>::ZeroVector;
  (this->TileItem).Z = 1.0;
  (this->TileItem).Size.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar8.field0_0x0;
  (this->TileItem).UV0.field0_0x0._s_0.X = 0.0;
  (this->TileItem).UV0.field0_0x0._s_0.Y = 0.0;
  (this->TileItem).UV1.field0_0x0._s_0.X = 1.0;
  (this->TileItem).UV1.field0_0x0._s_0.Y = 1.0;
  pFVar9 = GWhiteTexture;
  (this->TileItem).Rotation.Pitch = 0.0;
  (this->TileItem).Rotation.Yaw = 0.0;
  (this->TileItem).Rotation.Roll = 0.0;
  (this->TileItem).Texture = pFVar9;
  (this->TileItem).MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  (this->TileItem).PivotPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  lVar5 = *(longlong *)((longlong)&param_2->field0_0x0 + 8);
  (this->TileItem)._padding_ = *(longlong *)&param_2->field0_0x0;
  (this->TileItem)._padding_ = lVar5;
  lVar5 = *(longlong *)&param_2->field0_0x0;
  lVar6 = *(longlong *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = lVar5;
  this->_padding_ = lVar6;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  return this;
}

// ~FCanvasTextItemBase @ 14890de00

void __thiscall FCanvasTextItemBase::~FCanvasTextItemBase(FCanvasTextItemBase *this)

{
  (this->TileItem)._padding_ = (longlong)&___7FCanvasItem__6B_;
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  return;
}

// Draw @ 14892b000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCanvasTextItemBase::Draw(FCanvasTextItemBase *this,FCanvas *param_1)

{
  FFontRenderInfo *pFVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  TVector2<double>_u_0 TVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  double dVar12;
  ForElementType<FCanvasTextItemBase::FTextEffect> *pFVar13;
  char cVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Canvas_TextItemTime> FVar20;
  FMaterialRenderProxy *pFVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar22;
  FNameEntryId FVar23;
  FName FVar24;
  undefined1 auStackY_268 [32];
  FColor_u_0 local_208 [2];
  LARGE_INTEGER local_200;
  undefined1 local_1f8 [16];
  FName local_1e8;
  FName local_1e0;
  undefined1 local_1d0 [8];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [28];
  uchar auStack_19c [12];
  uchar auStack_190 [8];
  undefined1 local_188 [28];
  uchar auStack_16c [12];
  uchar auStack_160 [8];
  double local_158;
  double dStack_150;
  uchar local_148 [4];
  uchar local_144 [4];
  uchar local_140 [4];
  float local_13c;
  FStatMessage local_138;
  undefined8 local_128;
  float fStack_120;
  uchar auStack_11c [4];
  FName local_118 [2];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uchar local_f8 [4];
  uchar auStack_f4 [4];
  float fStack_f0;
  uchar auStack_ec [4];
  ForElementType<FCanvasTextItemBase::FTextEffect> local_e8;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_268;
  fVar18 = 0.0;
  FVar20 = StatPtr_STAT_Canvas_TextItemTime;
  if (StatPtr_STAT_Canvas_TextItemTime == (FThreadSafeStaticStat<FStat_STAT_Canvas_TextItemTime>)0x0
     ) {
    pFVar19 = ::FName::FName(local_118,"STAT_Canvas_TextItemTime");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_Canvas_TextItemTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_TextItemTime,*pFVar19,
                        L"CanvasTextItem Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar20;
  bVar8 = false;
  bVar10 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar22 = FVar24.Number;
  if ((FVar23.Value == 0) && (uVar22 == 0)) {
LAB_14892b157:
    bVar9 = false;
    FVar24 = local_1e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8.ComparisonIndex.Value = FVar23.Value;
        local_1e8.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x35a);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14892b157;
    local_200.s.LowPart = FVar23.Value;
    local_200.s.HighPart = uVar22;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar9 = true;
  }
  if ((param_1 == (FCanvas *)0x0) ||
     (cVar14 = (**(code **)(this->_padding_ + 0x28))(this), cVar14 == '\0')) goto LAB_14892b927;
  pFVar1 = &this->FontRenderInfo;
  uVar17 = *(undefined4 *)pFVar1;
  if ((pFVar1->bEnableShadow != 0) &&
     (dVar3 = (this->ShadowOffset).field0_0x0._s_0.X, dVar4 = (this->ShadowOffset).field0_0x0._s_0.Y
     , dVar4 * dVar4 + dVar3 * dVar3 == 0.0)) {
    (this->ShadowOffset).field0_0x0._s_0.X = 1.0;
    (this->ShadowOffset).field0_0x0._s_0.Y = 1.0;
    (this->ShadowColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    dVar3 = (this->ShadowOffset).field0_0x0._s_0.X;
    dVar4 = (this->ShadowOffset).field0_0x0._s_0.Y;
    fVar16 = fVar18;
    if (dVar4 * dVar4 + dVar3 * dVar3 != 0.0) {
      fVar16 = 2.8026e-45;
    }
    *(uint *)&this->FontRenderInfo = uVar17 & 0xfffffffd | (uint)fVar16;
  }
  bVar15 = param_1->bWriteDestinationAlpha;
  uVar17 = (**(code **)(this->_padding_ + 0x30))(this,((undefined4 *)pFVar1)->bEnableShadow);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar17;
  if ((param_1->bUseInternalTexture != false) || (bVar15 != false)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xd;
  }
  fVar16 = __real_3f800000;
  if (param_1->bStereoRendering == false) {
    fVar16 = param_1->DPIScale;
  }
  dVar4 = (double)fVar16;
  dVar3 = (double)this->_padding_ * dVar4;
  local_1f8._8_4_ = SUB84(dVar3,0);
  local_1f8._0_8_ = (double)this->_padding_ * dVar4;
  local_1f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  if (((this->bCentreX != false) || (this->bCentreY != false)) ||
     (this->bDontCorrectStereoscopic == false)) {
    (**(code **)(this->_padding_ + 0x38))(this);
    if (this->bCentreX == false) {
      if (this->bCentreY != false) goto LAB_14892b2da;
    }
    else {
      local_1f8._0_8_ = (double)local_1f8._0_8_ + (double)(int)(local_158 * __real_bfe0000000000000)
      ;
LAB_14892b2da:
      if (this->bCentreY != false) {
        local_1f8._8_8_ =
             (double)local_1f8._8_8_ + (double)(int)(dStack_150 * __real_bfe0000000000000);
      }
    }
    if ((this->bDontCorrectStereoscopic == false) &&
       (bVar15 = UEngine::IsStereoscopic3D(GEngine,(FViewport *)0x0), bVar15)) {
      pFVar21 = (FMaterialRenderProxy *)
                (**(code **)(((GEngine->RemoveSurfaceMaterial).field0_0x0.DebugPtr)->_padding_ +
                            0x310))();
      dVar3 = _UNK_150689698;
      dVar12 = ___xmm_40000000000000004000000000000000;
      (this->TileItem).MaterialRenderProxy = pFVar21;
      auVar6._8_4_ = SUB84((double)local_1f8._8_8_ - dVar3,0);
      auVar6._0_8_ = (double)local_1f8._0_8_ - dVar12;
      auVar6._12_4_ = (int)((ulonglong)((double)local_1f8._8_8_ - dVar3) >> 0x20);
      (this->TileItem)._padding_ = (longlong)((double)local_1f8._0_8_ - dVar12);
      (this->TileItem)._padding_ = auVar6._8_8_;
      dVar3 = dStack_150 + dVar3 + dVar3;
      TVar7._8_4_ = SUB84(dVar3,0);
      TVar7._s_0.X = local_158 + dVar12 + dVar12;
      TVar7._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      (this->TileItem).Size.field0_0x0 = TVar7;
      *(undefined1 *)&(this->TileItem)._padding_ = 1;
      (**(code **)((this->TileItem)._padding_ + 0x18))(&this->TileItem,param_1);
    }
  }
  local_58 = 0.0;
  local_54 = 8.40779e-45;
  if (pFVar1->bEnableShadow != 0) {
    fStack_1c8 = (this->ShadowColor).field0_0x0._s_0.R;
    fStack_1c4 = (this->ShadowColor).field0_0x0._s_0.G;
    fStack_1c0 = (this->ShadowColor).field0_0x0._s_0.B;
    local_1d0._0_4_ = (undefined4)(dVar4 * (this->ShadowOffset).field0_0x0._s_0.X);
    local_1d0._4_4_ = (undefined4)(dVar4 * (this->ShadowOffset).field0_0x0._s_0.Y);
    fStack_1bc = *(float *)((longlong)&this->_padding_ + 4) * param_1->AlphaModulate;
    local_108 = fStack_1c8;
    fStack_104 = fStack_1c4;
    fStack_100 = fStack_1c0;
    fStack_fc = fStack_1bc;
    if ((&local_e8 <= (ForElementType<FCanvasTextItemBase::FTextEffect> *)local_1d0) &&
       (local_1d0 < &local_58)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar18 = local_58;
      if (local_58 == local_54) {
        fVar18 = (float)UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<6>::ForElementType<FCanvasTextItemBase::FTextEffect>_>
                                  (0x418,&local_e8,(int *)&local_54);
      }
    }
    local_58 = (float)((int)fVar18 + 1);
    *(ulonglong *)local_e8.InlineData[(int)fVar18].Pad = CONCAT44(local_1d0._4_4_,local_1d0._0_4_);
    *(ulonglong *)(local_e8.InlineData[(int)fVar18].Pad + 8) = CONCAT44(fStack_1c4,fStack_1c8);
    *(ulonglong *)(local_e8.InlineData[(int)fVar18].Pad + 0x10) = CONCAT44(fStack_1bc,fStack_1c0);
  }
  if (this->bOutlined != false) {
    local_1b8._8_8_ = *(undefined8 *)&(this->OutlineColor).field0_0x0;
    local_1b8._16_8_ = *(undefined8 *)((longlong)&(this->OutlineColor).field0_0x0 + 8);
    local_1b8[0] = '\0';
    local_1b8[1] = '\0';
    local_1b8[2] = 0x80;
    local_1b8[3] = 0xbf;
    local_1b8[4] = '\0';
    local_1b8[5] = '\0';
    local_1b8[6] = 0x80;
    local_1b8[7] = 0xbf;
    if (((&local_e8 <= (ForElementType<FCanvasTextItemBase::FTextEffect> *)local_1b8) &&
        (local_1b8 < local_e8.InlineData + (int)local_54)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar18 = local_58;
    if (local_58 == local_54) {
      fVar18 = (float)UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<6>::ForElementType<FCanvasTextItemBase::FTextEffect>_>
                                (0x418,&local_e8,(int *)&local_54);
    }
    local_58 = (float)((int)fVar18 + 1);
    local_1b8[0x18] = '\0';
    local_1b8[0x19] = '\0';
    local_1b8[0x1a] = 0x80;
    local_1b8[0x1b] = 0xbf;
    auStack_19c[0] = '\0';
    auStack_19c[1] = '\0';
    auStack_19c[2] = 0x80;
    auStack_19c[3] = '?';
    *(ulonglong *)local_e8.InlineData[(int)fVar18].Pad = CONCAT44(local_1b8._4_4_,local_1b8._0_4_);
    *(undefined8 *)(local_e8.InlineData[(int)fVar18].Pad + 8) = local_1b8._8_8_;
    auStack_19c._4_8_ = *(undefined8 *)&(this->OutlineColor).field0_0x0;
    auStack_190 = *(uchar (*) [8])((longlong)&(this->OutlineColor).field0_0x0 + 8);
    *(undefined8 *)(local_e8.InlineData[(int)fVar18].Pad + 0x10) = local_1b8._16_8_;
    if (((&local_e8 <= (ForElementType<FCanvasTextItemBase::FTextEffect> *)(local_1b8 + 0x18)) &&
        (local_1b8 + 0x18 < local_e8.InlineData + (int)local_54)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar18 = local_58;
    if (local_58 == local_54) {
      fVar18 = (float)UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<6>::ForElementType<FCanvasTextItemBase::FTextEffect>_>
                                (0x418,&local_e8,(int *)&local_54);
    }
    local_58 = (float)((int)fVar18 + 1);
    local_188[0] = '\0';
    local_188[1] = '\0';
    local_188[2] = 0x80;
    local_188[3] = '?';
    local_188[4] = '\0';
    local_188[5] = '\0';
    local_188[6] = 0x80;
    local_188[7] = '?';
    *(ulonglong *)local_e8.InlineData[(int)fVar18].Pad =
         CONCAT44(auStack_19c._0_4_,local_1b8._24_4_);
    *(undefined8 *)(local_e8.InlineData[(int)fVar18].Pad + 8) = auStack_19c._4_8_;
    local_188._8_8_ = *(undefined8 *)&(this->OutlineColor).field0_0x0;
    local_188._16_8_ = *(undefined8 *)((longlong)&(this->OutlineColor).field0_0x0 + 8);
    *(uchar (*) [8])(local_e8.InlineData[(int)fVar18].Pad + 0x10) = auStack_190;
    if (((&local_e8 <= (ForElementType<FCanvasTextItemBase::FTextEffect> *)local_188) &&
        (local_188 < local_e8.InlineData + (int)local_54)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar18 = local_58;
    if (local_58 == local_54) {
      fVar18 = (float)UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<6>::ForElementType<FCanvasTextItemBase::FTextEffect>_>
                                (0x418,&local_e8,(int *)&local_54);
    }
    local_58 = (float)((int)fVar18 + 1);
    local_188[0x18] = '\0';
    local_188[0x19] = '\0';
    local_188[0x1a] = 0x80;
    local_188[0x1b] = '?';
    auStack_16c[0] = '\0';
    auStack_16c[1] = '\0';
    auStack_16c[2] = 0x80;
    auStack_16c[3] = 0xbf;
    *(ulonglong *)local_e8.InlineData[(int)fVar18].Pad = CONCAT44(local_188._4_4_,local_188._0_4_);
    *(undefined8 *)(local_e8.InlineData[(int)fVar18].Pad + 8) = local_188._8_8_;
    auStack_16c._4_8_ = *(undefined8 *)&(this->OutlineColor).field0_0x0;
    auStack_160 = *(uchar (*) [8])((longlong)&(this->OutlineColor).field0_0x0 + 8);
    *(undefined8 *)(local_e8.InlineData[(int)fVar18].Pad + 0x10) = local_188._16_8_;
    if (((&local_e8 <= (ForElementType<FCanvasTextItemBase::FTextEffect> *)(local_188 + 0x18)) &&
        (local_188 + 0x18 < local_e8.InlineData + (int)local_54)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar18 = local_58;
    if (local_58 == local_54) {
      fVar18 = (float)UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<6>::ForElementType<FCanvasTextItemBase::FTextEffect>_>
                                (0x418,&local_e8,(int *)&local_54);
    }
    local_58 = (float)((int)fVar18 + 1);
    *(ulonglong *)local_e8.InlineData[(int)fVar18].Pad =
         CONCAT44(auStack_16c._0_4_,local_188._24_4_);
    *(undefined8 *)(local_e8.InlineData[(int)fVar18].Pad + 8) = auStack_16c._4_8_;
    *(uchar (*) [8])(local_e8.InlineData[(int)fVar18].Pad + 0x10) = auStack_160;
  }
  fVar18 = local_58;
  local_148 = *(uchar (*) [4])&this->_padding_;
  local_144 = *(uchar (*) [4])((longlong)&this->_padding_ + 4);
  local_140 = *(uchar (*) [4])&this->_padding_;
  pcVar5 = *(code **)(this->_padding_ + 0x40);
  local_128 = &local_e8;
  local_13c = *(float *)((longlong)&this->_padding_ + 4) * param_1->AlphaModulate;
  if (((int)local_58 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar13 = local_128;
  local_f8[0] = (uchar)local_128;
  local_f8[1] = local_128._1_1_;
  local_f8[2] = local_128._2_1_;
  local_f8[3] = local_128._3_1_;
  auStack_f4[0] = local_128._4_1_;
  auStack_f4[1] = local_128._5_1_;
  auStack_f4[2] = local_128._6_1_;
  auStack_f4[3] = local_128._7_1_;
  auStack_ec[0] = auStack_11c[0];
  auStack_ec[1] = auStack_11c[1];
  auStack_ec[2] = auStack_11c[2];
  auStack_ec[3] = auStack_11c[3];
  local_128 = pFVar13;
  fStack_120 = fVar18;
  fStack_f0 = fVar18;
  (*pcVar5)(this,param_1,local_1f8,local_148);
LAB_14892b927:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar24 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_138.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_138.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_138.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_138.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_138);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

