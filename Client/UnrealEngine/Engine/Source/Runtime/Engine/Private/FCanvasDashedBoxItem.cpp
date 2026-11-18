// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 14892a060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCanvasDashedBoxItem::Draw(FCanvasDashedBoxItem *this,FCanvas *param_1)

{
  double *pdVar1;
  HHitProxy *pHVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_Canvas_DashedBoxItemTime> FVar18;
  longlong lVar19;
  ForElementType<UE::Math::TVector<double>_> FVar20;
  ForElementType<UE::Math::TVector<double>_> FVar21;
  FNameEntryId FVar22;
  FName FVar23;
  ulonglong uVar24;
  double dVar25;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined1 auStackY_2e8 [32];
  FHitProxyId local_284;
  FColor_u_0 local_280;
  int local_27c;
  uint local_278;
  uint uStack_274;
  TVector<double>_u_0 local_270;
  FName local_258;
  FName local_250;
  TVector<double>_u_0 local_248;
  FName local_230;
  undefined1 local_220 [16];
  uchar local_210 [8];
  double local_208;
  double dStack_200;
  uchar local_1f8 [8];
  double local_1f0;
  double dStack_1e8;
  uchar local_1e0 [8];
  double local_1d8;
  double dStack_1d0;
  uchar local_1c8 [8];
  ForElementType<UE::Math::TVector<double>_> local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  double local_1a8;
  FName local_1a0;
  double local_198;
  FDepthFieldGlowInfo local_190;
  ForElementType<UE::Math::TVector<double>_> local_158;
  uint local_f0;
  uint local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FVar18 = StatPtr_STAT_Canvas_DashedBoxItemTime;
  if (StatPtr_STAT_Canvas_DashedBoxItemTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_DashedBoxItemTime>)0x0) {
    pFVar17 = ::FName::FName(&local_1a0,"STAT_Canvas_DashedBoxItemTime");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Canvas_DashedBoxItemTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_DashedBoxItemTime,*pFVar17
                        ,L"CanvasDashedBoxItem Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar18;
  bVar8 = false;
  bVar9 = false;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  bVar11 = false;
  bVar12 = false;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar15 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_258.ComparisonIndex.Value = FVar22.Value;
        local_258.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_258,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x656);
        bVar8 = true;
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_278 = FVar22.Value;
      uStack_274 = uVar15;
      local_250 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar11 = true;
      goto LAB_14892a1da;
    }
  }
  bVar9 = bVar12;
  bVar8 = bVar11;
  bVar11 = false;
  local_250 = local_230;
  FVar23 = local_230;
LAB_14892a1da:
  if ((0.0 < this->DashLength) && (0.0 < this->DashGap)) {
    local_190.bEnableGlow = 0;
    local_190.GlowColor.field0_0x0._0_8_ = 0;
    local_190.GlowColor.field0_0x0._8_8_ = 0;
    local_190.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
    local_190.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
    local_190.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
    local_190.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
    local_1c0 = (ForElementType<UE::Math::TVector<double>_>)
                FCanvas::GetBatchedElements
                          (param_1,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,
                           SE_BLEND_MAX,&local_190,true);
    pHVar2 = (param_1->CurrentHitProxy).Reference;
    if (pHVar2 == (HHitProxy *)0x0) {
      local_284.Index = -1;
    }
    else {
      local_284.Index = (pHVar2->Id).Index;
    }
    local_220._0_8_ = this->_padding_;
    local_220._8_8_ = this->_padding_;
    local_158.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
    local_ec = 4;
    local_210[0] = '\0';
    local_210[1] = '\0';
    local_210[2] = '\0';
    local_210[3] = '\0';
    local_210[4] = '\0';
    local_210[5] = '\0';
    local_210[6] = '\0';
    local_210[7] = '\0';
    local_f0 = 0;
    uVar15 = 0;
    if ((&local_158 <= (ForElementType<UE::Math::TVector<double>_> *)local_220) &&
       (local_220 < &local_158.SecondaryData)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = local_f0;
      if (local_f0 == local_ec) {
        uVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                           (0x818,&local_158,(int *)&local_ec);
      }
    }
    local_1f8[0] = '\0';
    local_1f8[1] = '\0';
    local_1f8[2] = '\0';
    local_1f8[3] = '\0';
    local_1f8[4] = '\0';
    local_1f8[5] = '\0';
    local_1f8[6] = '\0';
    local_1f8[7] = '\0';
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    local_f0 = uVar15 + 1;
    pdVar1 = (double *)((longlong)FVar20 + (longlong)(int)uVar15 * 0x18);
    *pdVar1 = (double)local_220._0_8_;
    pdVar1[1] = (double)local_220._8_8_;
    *(uchar (*) [8])((uchar *)((longlong)FVar20 + 0x10) + (longlong)(int)uVar15 * 0x18) = local_210;
    uVar24 = (ulonglong)(int)local_f0;
    local_208 = (this->Size).field0_0x0._s_0.X + (double)this->_padding_;
    dStack_200 = (double)this->_padding_;
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    for (FVar21 = FVar20;
        FVar21 != (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar20 + uVar24 * 0x18);
        FVar21 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar21 + 0x18)) {
      if (((local_208 == *(double *)FVar21) && (dStack_200 == *(double *)((longlong)FVar21 + 8))) &&
         (*(double *)((longlong)FVar21 + 0x10) == 0.0)) {
        if ((int)(((longlong)FVar21 - (longlong)FVar20) / 0x18) != -1) goto LAB_14892a4fe;
        break;
      }
    }
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    if ((ulonglong)FVar20 <= &local_208) {
      FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
      if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar20 = local_158.SecondaryData;
      }
      if ((&local_208 < (double *)((longlong)FVar20 + (longlong)(int)local_ec * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_f0 == local_ec) {
      local_f0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                           (0x818,&local_158,(int *)&local_ec);
    }
    lVar19 = (longlong)(int)local_f0;
    local_f0 = local_f0 + 1;
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    pdVar1 = (double *)((longlong)FVar20 + lVar19 * 0x18);
    *pdVar1 = local_208;
    pdVar1[1] = dStack_200;
    *(uchar (*) [8])((uchar *)((longlong)FVar20 + 0x10) + lVar19 * 0x18) = local_1f8;
    uVar24 = (ulonglong)local_f0;
LAB_14892a4fe:
    uVar15 = (uint)uVar24;
    local_1f0 = (this->Size).field0_0x0._s_0.X + (double)this->_padding_;
    dStack_1e8 = (this->Size).field0_0x0._s_0.Y + (double)this->_padding_;
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    local_1e0[0] = '\0';
    local_1e0[1] = '\0';
    local_1e0[2] = '\0';
    local_1e0[3] = '\0';
    local_1e0[4] = '\0';
    local_1e0[5] = '\0';
    local_1e0[6] = '\0';
    local_1e0[7] = '\0';
    for (FVar21 = FVar20;
        FVar21 != (ForElementType<UE::Math::TVector<double>_>)
                  ((longlong)FVar20 + (longlong)(int)uVar15 * 0x18);
        FVar21 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar21 + 0x18)) {
      if (((local_1f0 == *(double *)FVar21) && (dStack_1e8 == *(double *)((longlong)FVar21 + 8))) &&
         (*(double *)((longlong)FVar21 + 0x10) == 0.0)) {
        if ((int)(((longlong)FVar21 - (longlong)FVar20) / 0x18) != -1) goto LAB_14892a690;
        break;
      }
    }
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    if ((ulonglong)FVar20 <= &local_1f0) {
      FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
      if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar20 = local_158.SecondaryData;
      }
      if ((&local_1f0 < (double *)((longlong)FVar20 + (longlong)(int)local_ec * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar15 = local_f0, bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar15 == local_ec) {
      uVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,&local_158,(int *)&local_ec);
    }
    local_f0 = uVar15 + 1;
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    pdVar1 = (double *)((longlong)FVar20 + (longlong)(int)uVar15 * 0x18);
    *pdVar1 = local_1f0;
    pdVar1[1] = dStack_1e8;
    *(uchar (*) [8])((uchar *)((longlong)FVar20 + 0x10) + (longlong)(int)uVar15 * 0x18) = local_1e0;
    uVar24 = (ulonglong)local_f0;
LAB_14892a690:
    dStack_1d0 = (this->Size).field0_0x0._s_0.Y + (double)this->_padding_;
    local_1d8 = (double)this->_padding_;
    uVar15 = (uint)uVar24;
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    local_1c8[0] = '\0';
    local_1c8[1] = '\0';
    local_1c8[2] = '\0';
    local_1c8[3] = '\0';
    local_1c8[4] = '\0';
    local_1c8[5] = '\0';
    local_1c8[6] = '\0';
    local_1c8[7] = '\0';
    for (FVar21 = FVar20;
        FVar21 != (ForElementType<UE::Math::TVector<double>_>)
                  ((longlong)FVar20 + (longlong)(int)uVar15 * 0x18);
        FVar21 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar21 + 0x18)) {
      if (((local_1d8 == *(double *)FVar21) && (dStack_1d0 == *(double *)((longlong)FVar21 + 8))) &&
         (*(double *)((longlong)FVar21 + 0x10) == 0.0)) {
        if ((int)(((longlong)FVar21 - (longlong)FVar20) / 0x18) != -1) goto LAB_14892a81e;
        break;
      }
    }
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    if ((ulonglong)FVar20 <= &local_1d8) {
      FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
      if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar20 = local_158.SecondaryData;
      }
      if ((&local_1d8 < (double *)((longlong)FVar20 + (longlong)(int)local_ec * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar15 = local_f0, bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar15 == local_ec) {
      uVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,&local_158,(int *)&local_ec);
    }
    local_f0 = uVar15 + 1;
    FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
    if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    pdVar1 = (double *)((longlong)FVar20 + (longlong)(int)uVar15 * 0x18);
    *pdVar1 = local_1d8;
    pdVar1[1] = dStack_1d0;
    *(uchar (*) [8])((uchar *)((longlong)FVar20 + 0x10) + (longlong)(int)uVar15 * 0x18) = local_1c8;
    uVar24 = (ulonglong)local_f0;
LAB_14892a81e:
    dVar10 = __real_3ff0000000000000;
    FVar20 = local_158.SecondaryData;
    if (1 < (int)uVar24) {
      fVar40 = this->DashLength;
      FVar21 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
      if (local_158.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar21 = local_158.SecondaryData;
      }
      bVar12 = true;
      local_270._s_0.X = (double)*(undefined8 *)FVar21;
      local_270._s_0.Y = (double)*(undefined8 *)((longlong)FVar21 + 8);
      local_270._s_0.Z = (double)*(undefined8 *)((longlong)FVar21 + 0x10);
      if (0 < (int)uVar24) {
        uVar27 = (undefined4)__real_3e45798ee0000000;
        uVar28 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar37 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_27c = 0;
        do {
          local_27c = local_27c + 1;
          bVar14 = false;
          uVar15 = local_27c % (int)uVar24;
          lVar19 = (longlong)(int)uVar15;
          do {
            uVar16 = 0;
            if ((int)uVar15 < (int)uVar24) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if (uVar16 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar27 = (undefined4)__real_3e45798ee0000000;
              uVar28 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
              uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar37 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar24 = (ulonglong)local_f0;
              FVar20 = local_158.SecondaryData;
              uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            }
            FVar21 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
            if (FVar20 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
              FVar21 = FVar20;
            }
            dVar6 = *(double *)((longlong)FVar21 + lVar19 * 0x18) - local_270._s_0.X;
            dVar35 = *(double *)((uchar *)((longlong)FVar21 + 8) + lVar19 * 0x18) - local_270._s_0.Y
            ;
            dVar25 = *(double *)((uchar *)((longlong)FVar21 + 0x10) + lVar19 * 0x18) -
                     local_270._s_0.Z;
            auVar26._0_8_ = (double)(fVar40 * fVar40);
            auVar26._8_8_ = 0;
            dVar5 = dVar35 * dVar35 + dVar6 * dVar6 + dVar25 * dVar25;
            if (auVar26._0_8_ <= dVar5) {
              uStack_1b0 = dVar35;
              local_1a8 = dVar25;
              if (dVar5 != dVar10) {
                if ((double)CONCAT44(uVar28,uVar27) <= dVar5) {
                  local_198 = dVar10 / SQRT(dVar5);
                  uStack_1b0 = dVar35 * local_198;
                  local_1a8 = dVar25 * local_198;
                  dVar6 = dVar6 * local_198;
                }
                else {
                  uStack_1b0 = (double)CONCAT44(uVar34,uVar33);
                  dVar6 = (double)CONCAT44(uVar39,uVar38);
                  local_1b8 = uVar31;
                  uStack_1b4 = uVar32;
                  local_1a8 = (double)CONCAT44(uVar37,uVar36);
                }
              }
              dVar25 = (double)fVar40;
              local_248._s_0.X = dVar25 * dVar6 + local_270._s_0.X;
              local_248._s_0.Y = dVar25 * uStack_1b0 + local_270._s_0.Y;
              local_248._s_0.Z = dVar25 * local_1a8 + local_270._s_0.Z;
              if (bVar12) {
                fVar40 = this->DashGap;
                bVar13 = true;
                goto LAB_14892ab45;
              }
              fVar40 = this->DashLength;
              local_270._s_0.X = local_248._s_0.X;
              local_270._s_0.Y = local_248._s_0.Y;
LAB_14892abd7:
              bVar12 = !bVar12;
            }
            else {
              uVar16 = 0;
              if ((int)uVar15 < (int)uVar24) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if (uVar16 == 0) {
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar14) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar37 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                uVar24 = (ulonglong)local_f0;
                FVar20 = local_158.SecondaryData;
                auVar26 = extraout_XMM0;
                uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              }
              auVar4._8_8_ = 0;
              auVar4._0_8_ = dVar5;
              auVar26 = sqrtpd(auVar26,auVar4);
              bVar14 = true;
              FVar21 = (ForElementType<UE::Math::TVector<double>_>)&local_158;
              if (FVar20 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
                FVar21 = FVar20;
              }
              pdVar1 = (double *)((longlong)FVar21 + lVar19 * 0x18);
              local_248._0_8_ = *pdVar1;
              local_248._s_0.Y = pdVar1[1];
              local_248._s_0.Z =
                   (double)*(undefined8 *)((uchar *)((longlong)FVar21 + 0x10) + lVar19 * 0x18);
              bVar7 = false;
              fVar40 = (float)((double)fVar40 - auVar26._0_8_);
              uVar27 = *(undefined4 *)pdVar1;
              uVar28 = *(undefined4 *)((longlong)pdVar1 + 4);
              uVar29 = *(undefined4 *)(pdVar1 + 1);
              uVar30 = *(undefined4 *)((longlong)pdVar1 + 0xc);
              bVar13 = false;
              if (bVar12) {
LAB_14892ab45:
                bVar7 = bVar13;
                FBatchedElements::AddLine
                          ((FBatchedElements *)local_1c0,(TVector<double> *)&local_270._s_0,
                           (TVector<double> *)&local_248._s_0,(FLinearColor *)&this->_padding_,
                           local_284,this->DashThickness,0.0,false);
                uVar24 = (ulonglong)local_f0;
                uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar37 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                FVar20 = local_158.SecondaryData;
                uVar27 = local_248._0_4_;
                uVar28 = local_248._4_4_;
                uVar29 = local_248._8_4_;
                uVar30 = local_248._12_4_;
                uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              }
              local_270._4_4_ = uVar28;
              local_270._0_4_ = uVar27;
              local_270._12_4_ = uVar30;
              local_270._8_4_ = uVar29;
              if (bVar7) goto LAB_14892abd7;
            }
            uVar27 = (undefined4)__real_3e45798ee0000000;
            uVar28 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
            local_270._s_0.Z = local_248._s_0.Z;
          } while (!bVar14);
          FVar23 = local_250;
        } while (local_27c < (int)uVar24);
      }
    }
    if (FVar20 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FMemory::Free((void *)FVar20);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

