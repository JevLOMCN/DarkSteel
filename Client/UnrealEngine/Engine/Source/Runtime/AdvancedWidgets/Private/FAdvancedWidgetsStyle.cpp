// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// Create @ 14d8527b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::AdvancedWidgets::FAdvancedWidgetsStyle::Create(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  longlong *plVar6;
  float fVar7;
  TUniquePtr<FSlateStyleSet,TDefaultDelete<FSlateStyleSet>_> TVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FSlateStyleSet *pFVar13;
  TUniquePtr<FSlateStyleSet,TDefaultDelete<FSlateStyleSet>_> TVar14;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar15;
  FName *pFVar16;
  ISlateStyle *pIVar17;
  FSpinBoxStyle *pFVar18;
  FString *pFVar19;
  FSlateBrush *pFVar20;
  FButtonStyle *pFVar21;
  FComboButtonStyle *pFVar22;
  FSlateStyleSet *pFVar23;
  FEditableTextBoxStyle *pFVar24;
  FSlateRoundedBoxBrush *this;
  FSlateStyleSet *pFVar25;
  FColorGradingSpinBoxStyle *pFVar26;
  UScriptStruct *pUVar27;
  FTopLevelAssetPath *pFVar28;
  wchar_t *pwVar29;
  longlong lVar30;
  wchar_t *pwVar31;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_res20;
  undefined4 uStackX_24;
  FName local_2558;
  TVector2<float>_u_0 local_2550;
  TVector2<float>_u_0 local_2548;
  TVector2<float>_u_0 local_2540;
  TVector2<float>_u_0 local_2538;
  TVector2<float>_u_0 local_2530;
  FDeprecateVector2DParameter local_2528;
  FDeprecateVector2DParameter local_2520;
  TVector2<float>_u_0 local_2518;
  TVector2<float>_u_0 local_2510;
  TVector2<float>_u_0 local_2508;
  TVector2<float>_u_0 local_2500;
  FString *local_24f8;
  FString *local_24f0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_24e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_24d8;
  FLinearColor_u_0 local_24c8;
  undefined2 local_24b8;
  undefined8 local_24b4;
  undefined8 uStack_24ac;
  undefined4 local_24a4;
  undefined8 local_24a0;
  undefined8 uStack_2498;
  undefined2 local_2490;
  undefined2 uStack_248e;
  undefined8 local_248c;
  undefined8 uStack_2484;
  undefined2 local_247c;
  undefined2 uStack_247a;
  FName local_2478;
  FName local_2470;
  FName local_2468;
  FName local_2460;
  FName local_2458;
  FName local_2450;
  FName local_2448;
  FName local_2440;
  FName local_2438;
  FName local_2430;
  FName local_2428;
  FName local_2420;
  FName local_2418;
  FName local_2410;
  FName local_2408;
  FString local_2400;
  FString local_23f0;
  FMargin local_23e0;
  void *local_23d0 [2];
  FLinearColor_u_0 local_23c0;
  void *local_23b0 [2];
  FLinearColor_u_0 local_23a0;
  void *local_2390 [2];
  FLinearColor_u_0 local_2380;
  FMargin local_2370;
  void *local_2360 [2];
  FString local_2350;
  FString local_2340;
  FName local_2330;
  FName local_2328;
  FName local_2320;
  FName local_2318;
  FTopLevelAssetPath local_2310;
  undefined8 local_2300;
  undefined8 uStack_22f8;
  undefined8 local_22f0;
  undefined8 uStack_22e8;
  undefined8 local_22e0;
  undefined8 uStack_22d8;
  FTopLevelAssetPath local_22d0;
  FSlateFontInfo local_22c0;
  FButtonStyle local_2258;
  undefined **local_1ec8 [20];
  TReferenceControllerBase<1> *local_1e28;
  undefined **local_1e18 [20];
  TReferenceControllerBase<1> *local_1d78;
  undefined **local_1d68 [20];
  TReferenceControllerBase<1> *local_1cc8;
  undefined **local_1cb8 [20];
  TReferenceControllerBase<1> *local_1c18;
  undefined **local_1c08 [20];
  TReferenceControllerBase<1> *local_1b68;
  undefined **local_1b58 [20];
  TReferenceControllerBase<1> *local_1ab8;
  undefined **local_1aa8 [20];
  TReferenceControllerBase<1> *local_1a08;
  undefined **local_19f8 [20];
  TReferenceControllerBase<1> *local_1958;
  undefined **local_1948 [20];
  TReferenceControllerBase<1> *local_18a8;
  undefined **local_1898 [20];
  TReferenceControllerBase<1> *local_17f8;
  FColorGradingSpinBoxStyle local_17e8;
  FSpinBoxStyle local_1508;
  FSpinBoxStyle local_fe8;
  FSpinBoxStyle local_ac8;
  FComboButtonStyle local_5a8;
  
  pFVar25 = (FSlateStyleSet *)0x0;
  iVar12 = 0;
  local_res8[0] = 0;
  pFVar13 = ::operator_new(0x400);
  TVar14.Ptr = pFVar25;
  if (pFVar13 != (FSlateStyleSet *)0x0) {
    ::FName::FName(&local_2558,"AdvancedWidgets");
    TVar14.Ptr = FSlateStyleSet::FSlateStyleSet(pFVar13,&local_2558);
  }
  TVar8.Ptr = Instance.Ptr;
  if (Instance.Ptr != (FSlateStyleSet *)0x0) {
    plVar6 = &(Instance.Ptr)->_padding_;
    Instance.Ptr = TVar14.Ptr;
    (**(code **)*plVar6)(TVar8.Ptr,1);
    TVar14.Ptr = Instance.Ptr;
  }
  Instance.Ptr = TVar14.Ptr;
  TVar14.Ptr = Instance.Ptr;
  pcVar4 = *(code **)((Instance.Ptr)->_padding_ + 0xc0);
  pTVar15 = &FPaths::EngineContentDir(&local_2400)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_24d8,pTVar15,7 - (uint)(pTVar15->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_24d8,L"Slate",5);
  (*pcVar4)(TVar14.Ptr,&local_24d8);
  if (local_24d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_24d8.AllocatorInstance.Data);
  }
  if (local_2400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2400.Data.AllocatorInstance.Data);
  }
  TVar14.Ptr = Instance.Ptr;
  pcVar4 = *(code **)((Instance.Ptr)->_padding_ + 0xf8);
  pTVar15 = &FPaths::EngineContentDir(&local_23f0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_24e8,pTVar15,7 - (uint)(pTVar15->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_24e8,L"Slate",5);
  (*pcVar4)(TVar14.Ptr,&local_24e8);
  if (local_24e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_24e8.AllocatorInstance.Data);
  }
  if (local_23f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_23f0.Data.AllocatorInstance.Data);
  }
  TVar14.Ptr = Instance.Ptr;
  pFVar16 = ::FName::FName(&local_2330,"SpinBox");
  FVar5 = *pFVar16;
  pIVar17 = FAppStyle::Get();
  pFVar18 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))(pIVar17,FSpinBoxStyle::TypeName,FVar5,0,1);
  if (pFVar18 == (FSpinBoxStyle *)0x0) {
    pFVar18 = FSpinBoxStyle::GetDefault();
  }
  pFVar18 = FSpinBoxStyle::FSpinBoxStyle(&local_fe8,pFVar18);
  local_2300 = 0;
  uStack_22f8 = 0;
  (pFVar18->TextPadding).Left = 0.0;
  (pFVar18->TextPadding).Top = 0.0;
  (pFVar18->TextPadding).Right = 0.0;
  (pFVar18->TextPadding).Bottom = 0.0;
  local_24c8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_24c8._8_8_ = _UNK_15090c6d8;
  local_24b8 = 3;
  local_23e0.Left = ___xmm_3e400000000000000000000000000000;
  local_23e0.Top = _UNK_150925124;
  local_23e0.Right = _UNK_150925128;
  local_23e0.Bottom = _UNK_15092512c;
  pFVar19 = (FString *)
            (**(code **)((Instance.Ptr)->_padding_ + 0xf0))
                      (Instance.Ptr,local_23d0,"Old/HyperlinkDotted",L".png");
  pFVar20 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_1c08,pFVar19,&local_23e0,
                       (FSlateColor *)&local_24c8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar18->BackgroundBrush,pFVar20);
  local_2550 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar20 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1cb8,
                       (FDeprecateVector2DParameter *)&local_2550._s_0);
  FSlateBrush::operator=(&pFVar18->HoveredBackgroundBrush,pFVar20);
  local_2548 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar20 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1d68,
                       (FDeprecateVector2DParameter *)&local_2548._s_0);
  FSlateBrush::operator=(&pFVar18->InactiveFillBrush,pFVar20);
  local_2540 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar20 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1e18,
                       (FDeprecateVector2DParameter *)&local_2540._s_0);
  FSlateBrush::operator=(&pFVar18->ActiveFillBrush,pFVar20);
  uStack_24ac = _UNK_15090c6d8;
  local_24b4 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)&(pFVar18->ForegroundColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar18->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uStack_24ac
  ;
  local_24a4 = CONCAT22(local_24a4._2_2_,3);
  uVar9 = local_24a4;
  local_24a4._0_1_ = (undefined1)3;
  local_24a4._1_1_ = (undefined1)(3 >> 8);
  (pFVar18->ForegroundColor).ColorUseRule = (undefined1)local_24a4;
  (pFVar18->ForegroundColor).ColorTableId = local_24a4._1_1_;
  *(undefined2 *)&(pFVar18->ForegroundColor).field_0x12 = local_24a4._2_2_;
  local_2538 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_24a4 = uVar9;
  pFVar20 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1ec8,
                       (FDeprecateVector2DParameter *)&local_2538._s_0);
  FSlateBrush::operator=(&pFVar18->ArrowsImage,pFVar20);
  pFVar16 = ::FName::FName(&local_2328,"PropertyValue.SpinBox");
  FSlateStyleSet::Set<FSpinBoxStyle>(TVar14.Ptr,*pFVar16,pFVar18);
  local_1ec8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e28);
  local_1e18[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d78);
  local_1d68[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1cc8);
  local_1cb8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c18);
  local_1c08[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b68);
  if (local_23d0[0] != (void *)0x0) {
    FMemory::Free(local_23d0[0]);
  }
  FSpinBoxStyle::~FSpinBoxStyle(&local_fe8);
  pFVar16 = ::FName::FName(&local_2320,"Button");
  FVar5 = *pFVar16;
  pIVar17 = FAppStyle::Get();
  pFVar21 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))(pIVar17,FButtonStyle::TypeName,FVar5,0,1);
  if (pFVar21 == (FButtonStyle *)0x0) {
    pFVar21 = FButtonStyle::GetDefault();
  }
  FButtonStyle::FButtonStyle(&local_2258,pFVar21);
  TVar14 = Instance;
  pFVar16 = ::FName::FName(&local_2318,"ComboButton");
  FVar5 = *pFVar16;
  pIVar17 = FAppStyle::Get();
  pFVar22 = (FComboButtonStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))(pIVar17,FComboButtonStyle::TypeName,FVar5,0,1);
  if (pFVar22 == (FComboButtonStyle *)0x0) {
    pFVar22 = FComboButtonStyle::GetDefault();
  }
  pFVar22 = FComboButtonStyle::FComboButtonStyle(&local_5a8,pFVar22);
  local_2530 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar20 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1b58,
                       (FDeprecateVector2DParameter *)&local_2530._s_0);
  FSlateBrush::operator=(&local_2258.Normal,pFVar20);
  local_24a0 = ___xmm_3f8000003f800000000000003f800000;
  uStack_2498 = _UNK_15090c6d8;
  local_2490._0_1_ = UseColor_Foreground_Subdued;
  local_2490._1_1_ = Black;
  local_2258.NormalForeground.SpecifiedColor.field0_0x0._0_8_ =
       ___xmm_3f8000003f800000000000003f800000;
  local_2258.NormalForeground.SpecifiedColor.field0_0x0._8_8_ = _UNK_15090c6d8;
  local_248c = ___xmm_3f8000003f800000000000003f800000;
  uStack_2484 = _UNK_15090c6d8;
  local_2258.NormalForeground.ColorUseRule = UseColor_Foreground_Subdued;
  local_2258.NormalForeground.ColorTableId = Black;
  local_2258.NormalForeground._18_2_ = uStack_248e;
  local_2258.DisabledForeground.SpecifiedColor.field0_0x0._0_8_ =
       ___xmm_3f8000003f800000000000003f800000;
  local_2258.DisabledForeground.SpecifiedColor.field0_0x0._8_8_ = _UNK_15090c6d8;
  local_247c._0_1_ = UseColor_Foreground_Subdued;
  local_247c._1_1_ = Black;
  local_2258.NormalPadding.Left = 0.0;
  local_2258.NormalPadding.Top = 0.0;
  local_2258.NormalPadding.Right = 0.0;
  local_2258.NormalPadding.Bottom = 0.0;
  local_2258.DisabledForeground.ColorUseRule = UseColor_Foreground_Subdued;
  local_2258.DisabledForeground.ColorTableId = Black;
  local_2258.DisabledForeground._18_2_ = uStack_247a;
  local_2258.PressedPadding.Left = 0.0;
  local_2258.PressedPadding.Top = 0.0;
  local_2258.PressedPadding.Right = 0.0;
  local_2258.PressedPadding.Bottom = 0.0;
  FSlateBrush::operator=(&(pFVar22->ButtonStyle).Normal,&local_2258.Normal);
  FSlateBrush::operator=(&(pFVar22->ButtonStyle).Hovered,&local_2258.Hovered);
  FSlateBrush::operator=(&(pFVar22->ButtonStyle).Pressed,&local_2258.Pressed);
  FSlateBrush::operator=(&(pFVar22->ButtonStyle).Disabled,&local_2258.Disabled);
  *(undefined8 *)&(pFVar22->ButtonStyle).NormalForeground.SpecifiedColor.field0_0x0 =
       local_2258.NormalForeground.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar22->ButtonStyle).NormalForeground.SpecifiedColor.field0_0x0 + 8)
       = local_2258.NormalForeground.SpecifiedColor.field0_0x0._8_8_;
  (pFVar22->ButtonStyle).NormalForeground.ColorUseRule = local_2258.NormalForeground.ColorUseRule;
  (pFVar22->ButtonStyle).NormalForeground.ColorTableId = local_2258.NormalForeground.ColorTableId;
  *(undefined2 *)&(pFVar22->ButtonStyle).NormalForeground.field_0x12 =
       local_2258.NormalForeground._18_2_;
  *(undefined8 *)&(pFVar22->ButtonStyle).HoveredForeground.SpecifiedColor.field0_0x0 =
       local_2258.HoveredForeground.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar22->ButtonStyle).HoveredForeground.SpecifiedColor.field0_0x0 + 8)
       = local_2258.HoveredForeground.SpecifiedColor.field0_0x0._8_8_;
  (pFVar22->ButtonStyle).HoveredForeground.ColorUseRule = local_2258.HoveredForeground.ColorUseRule;
  (pFVar22->ButtonStyle).HoveredForeground.ColorTableId = local_2258.HoveredForeground.ColorTableId;
  *(undefined2 *)&(pFVar22->ButtonStyle).HoveredForeground.field_0x12 =
       local_2258.HoveredForeground._18_2_;
  *(undefined8 *)&(pFVar22->ButtonStyle).PressedForeground.SpecifiedColor.field0_0x0 =
       local_2258.PressedForeground.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar22->ButtonStyle).PressedForeground.SpecifiedColor.field0_0x0 + 8)
       = local_2258.PressedForeground.SpecifiedColor.field0_0x0._8_8_;
  (pFVar22->ButtonStyle).PressedForeground.ColorUseRule = local_2258.PressedForeground.ColorUseRule;
  (pFVar22->ButtonStyle).PressedForeground.ColorTableId = local_2258.PressedForeground.ColorTableId;
  *(undefined2 *)&(pFVar22->ButtonStyle).PressedForeground.field_0x12 =
       local_2258.PressedForeground._18_2_;
  *(undefined8 *)&(pFVar22->ButtonStyle).DisabledForeground.SpecifiedColor.field0_0x0 =
       local_2258.DisabledForeground.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)
   ((longlong)&(pFVar22->ButtonStyle).DisabledForeground.SpecifiedColor.field0_0x0 + 8) =
       local_2258.DisabledForeground.SpecifiedColor.field0_0x0._8_8_;
  (pFVar22->ButtonStyle).DisabledForeground.ColorUseRule =
       local_2258.DisabledForeground.ColorUseRule;
  (pFVar22->ButtonStyle).DisabledForeground.ColorTableId =
       local_2258.DisabledForeground.ColorTableId;
  *(undefined2 *)&(pFVar22->ButtonStyle).DisabledForeground.field_0x12 =
       local_2258.DisabledForeground._18_2_;
  (pFVar22->ButtonStyle).NormalPadding.Left = local_2258.NormalPadding.Left;
  (pFVar22->ButtonStyle).NormalPadding.Top = local_2258.NormalPadding.Top;
  (pFVar22->ButtonStyle).NormalPadding.Right = local_2258.NormalPadding.Right;
  (pFVar22->ButtonStyle).NormalPadding.Bottom = local_2258.NormalPadding.Bottom;
  (pFVar22->ButtonStyle).PressedPadding.Left = local_2258.PressedPadding.Left;
  (pFVar22->ButtonStyle).PressedPadding.Top = local_2258.PressedPadding.Top;
  (pFVar22->ButtonStyle).PressedPadding.Right = local_2258.PressedPadding.Right;
  (pFVar22->ButtonStyle).PressedPadding.Bottom = local_2258.PressedPadding.Bottom;
  FSlateSound::operator=(&(pFVar22->ButtonStyle).PressedSlateSound,&local_2258.PressedSlateSound);
  FSlateSound::operator=(&(pFVar22->ButtonStyle).ClickedSlateSound,&local_2258.ClickedSlateSound);
  FSlateSound::operator=(&(pFVar22->ButtonStyle).HoveredSlateSound,&local_2258.HoveredSlateSound);
  (pFVar22->MenuBorderPadding).Left = 0.0;
  (pFVar22->MenuBorderPadding).Top = 0.0;
  (pFVar22->MenuBorderPadding).Right = 0.0;
  (pFVar22->MenuBorderPadding).Bottom = 0.0;
  (pFVar22->DownArrowPadding).Left = 0.0;
  (pFVar22->DownArrowPadding).Top = 0.0;
  (pFVar22->DownArrowPadding).Right = 0.0;
  (pFVar22->DownArrowPadding).Bottom = 0.0;
  local_22f0 = 0;
  uStack_22e8 = 0;
  local_22e0 = 0;
  uStack_22d8 = 0;
  pFVar16 = ::FName::FName(&local_2478,"PropertyValue.ComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>(TVar14.Ptr,*pFVar16,pFVar22);
  local_1b58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ab8);
  FComboButtonStyle::~FComboButtonStyle(&local_5a8);
  TVar14 = Instance;
  pFVar23 = ::operator_new(0xb0);
  pFVar13 = pFVar25;
  if (pFVar23 != (FSlateStyleSet *)0x0) {
    local_23c0._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_23c0._8_8_ = _UNK_15076b1f8;
    local_res18 = 0x43a80000;
    uStackX_1c = 0x43a80000;
    local_2528 = (FDeprecateVector2DParameter)0x43a8000043a80000;
    pFVar19 = (FString *)
              (**(code **)((Instance.Ptr)->_padding_ + 0xf0))
                        (Instance.Ptr,local_23b0,"Starship/Common/color-grading-cross",L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)pFVar23,pFVar19,&local_2528,(FLinearColor *)&local_23c0._s_0,
               NoTile,Vector);
    pFVar23->_padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar23;
  }
  pFVar16 = ::FName::FName(&local_2470,"ColorGradingWheel.Cross");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(TVar14.Ptr,*pFVar16,(FSlateVectorImageBrush *)pFVar13)
  ;
  if ((pFVar23 != (FSlateStyleSet *)0x0) && (local_23b0[0] != (void *)0x0)) {
    FMemory::Free(local_23b0[0]);
  }
  TVar14.Ptr = Instance.Ptr;
  pFVar23 = ::operator_new(0xb0);
  pFVar13 = pFVar25;
  if (pFVar23 != (FSlateStyleSet *)0x0) {
    local_23a0._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_23a0._8_8_ = _UNK_15076b1f8;
    local_res20 = 0x41800000;
    uStackX_24 = 0x41800000;
    local_2520 = (FDeprecateVector2DParameter)0x4180000041800000;
    pFVar19 = (FString *)
              (**(code **)((Instance.Ptr)->_padding_ + 0xf0))
                        (Instance.Ptr,local_2390,"Starship/Common/color-grading-selector",L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)pFVar23,pFVar19,&local_2520,(FLinearColor *)&local_23a0._s_0,
               NoTile,Vector);
    pFVar23->_padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar23;
  }
  pFVar16 = ::FName::FName(&local_2468,"ColorGradingWheel.Selector");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(TVar14.Ptr,*pFVar16,(FSlateVectorImageBrush *)pFVar13)
  ;
  if ((pFVar23 != (FSlateStyleSet *)0x0) && (local_2390[0] != (void *)0x0)) {
    FMemory::Free(local_2390[0]);
  }
  pIVar17 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar17 + 0x50);
  pFVar16 = ::FName::FName(&local_2460,"NoBrush");
  pFVar20 = (FSlateBrush *)(*pcVar4)(pIVar17,*pFVar16,0,0);
  pwVar31 = L"";
  if ((pFVar20 == (FSlateBrush *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NoBrush",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Styling\\AdvancedWidgetsStyle.cpp"
                          ,0x43,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar17 = FAppStyle::Get();
  pFVar16 = ::FName::FName(&local_2458,"NumericEntrySpinBox");
  pFVar18 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))(pIVar17,FSpinBoxStyle::TypeName,*pFVar16,0,1);
  if (pFVar18 == (FSpinBoxStyle *)0x0) {
    pFVar18 = FSpinBoxStyle::GetDefault();
  }
  FSpinBoxStyle::FSpinBoxStyle(&local_1508,pFVar18);
  FSlateBrush::operator=(&local_1508.ActiveFillBrush,pFVar20);
  FSlateBrush::operator=(&local_1508.HoveredFillBrush,pFVar20);
  FSlateBrush::operator=(&local_1508.InactiveFillBrush,pFVar20);
  TVar14 = Instance;
  pFVar16 = ::FName::FName(&local_2450,"ColorGradingComponentViewer.NumericEntry");
  FSlateStyleSet::Set<FSpinBoxStyle>(TVar14.Ptr,*pFVar16,&local_1508);
  TVar14 = Instance;
  pIVar17 = FAppStyle::Get();
  pFVar16 = ::FName::FName(&local_2448,"NormalEditableTextBox");
  pFVar24 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))
                      (pIVar17,FEditableTextBoxStyle::TypeName,*pFVar16,0,1);
  if (pFVar24 == (FEditableTextBoxStyle *)0x0) {
    pFVar24 = FEditableTextBoxStyle::GetDefault();
  }
  pFVar16 = ::FName::FName(&local_2440,"ColorGradingComponentViewer.NumericEntry.TextBox");
  FSlateStyleSet::Set<FEditableTextBoxStyle>(TVar14.Ptr,*pFVar16,pFVar24);
  TVar14 = Instance;
  this = ::operator_new(0xb0);
  if (this != (FSlateRoundedBoxBrush *)0x0) {
    local_2518 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar25 = (FSlateStyleSet *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                        (this,&FStyleColors::Input,CoreStyleConstants::InputFocusRadius,
                         &FStyleColors::Secondary,CoreStyleConstants::InputFocusThickness,
                         (FDeprecateVector2DParameter *)&local_2518._s_0);
  }
  pFVar16 = ::FName::FName(&local_2438,"ColorGradingSlider.Border");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>(TVar14.Ptr,*pFVar16,(FSlateRoundedBoxBrush *)pFVar25);
  FSpinBoxStyle::~FSpinBoxStyle(&local_1508);
  pIVar17 = FAppStyle::Get();
  pFVar16 = ::FName::FName(&local_2430,"SpinBox");
  pFVar18 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))(pIVar17,FSpinBoxStyle::TypeName,*pFVar16,0,1);
  if (pFVar18 == (FSpinBoxStyle *)0x0) {
    pFVar18 = FSpinBoxStyle::GetDefault();
  }
  FSpinBoxStyle::FSpinBoxStyle(&local_ac8,pFVar18);
  TVar14 = Instance;
  pFVar26 = FColorGradingSpinBoxStyle::FColorGradingSpinBoxStyle(&local_17e8);
  local_2510 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar20 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_1898,&FStyleColors::Transparent,
                       CoreStyleConstants::InputFocusRadius,&FStyleColors::InputOutline,
                       CoreStyleConstants::InputFocusThickness,
                       (FDeprecateVector2DParameter *)&local_2510._s_0);
  FSlateBrush::operator=(&pFVar26->BorderBrush,pFVar20);
  local_2508 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar20 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_1948,&FStyleColors::Transparent,
                       CoreStyleConstants::InputFocusRadius,&FStyleColors::Primary,
                       CoreStyleConstants::InputFocusThickness,
                       (FDeprecateVector2DParameter *)&local_2508._s_0);
  FSlateBrush::operator=(&pFVar26->ActiveBorderBrush,pFVar20);
  local_2500 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar20 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_19f8,&FStyleColors::Transparent,
                       CoreStyleConstants::InputFocusRadius,&FStyleColors::Hover,
                       CoreStyleConstants::InputFocusThickness,
                       (FDeprecateVector2DParameter *)&local_2500._s_0);
  FSlateBrush::operator=(&pFVar26->HoveredBorderBrush,pFVar20);
  local_2380._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_2380._8_8_ = _UNK_15076b1f8;
  local_2370.Left = ___xmm_000000003eaaaaab000000003eaaaaab;
  local_2370.Top = _UNK_152c06d44;
  local_2370.Right = _UNK_152c06d48;
  local_2370.Bottom = _UNK_152c06d4c;
  pFVar19 = (FString *)
            (**(code **)((Instance.Ptr)->_padding_ + 0xf0))
                      (Instance.Ptr,local_2360,"Starship/Common/color-grading-spinbox-selector",
                       L".png");
  pFVar20 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_1aa8,pFVar19,&local_2370,
                       (FLinearColor *)&local_2380._s_0,FullColor);
  FSlateBrush::operator=(&pFVar26->SelectorBrush,pFVar20);
  pFVar26->SelectorWidth = 3.0;
  pFVar16 = ::FName::FName(&local_2428,"ColorGradingSpinBox");
  FSlateStyleSet::Set<FColorGradingSpinBoxStyle>(TVar14.Ptr,*pFVar16,pFVar26);
  local_1aa8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a08);
  if (local_2360[0] != (void *)0x0) {
    FMemory::Free(local_2360[0]);
  }
  local_19f8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1958);
  local_1948[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18a8);
  local_1898[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17f8);
  local_17e8._0_8_ = &___7FColorGradingSpinBoxStyle__6B_;
  local_17e8.SelectorBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17e8.SelectorBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_17e8.HoveredBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17e8.HoveredBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_17e8.ActiveBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17e8.ActiveBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_17e8.BorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17e8.BorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_17e8);
  FSpinBoxStyle::~FSpinBoxStyle(&local_ac8);
  TVar14 = Instance;
  pIVar17 = FAppStyle::Get();
  pFVar16 = ::FName::FName(&local_2420,"DarkEditableTextBox");
  pFVar24 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))
                      (pIVar17,FEditableTextBoxStyle::TypeName,*pFVar16,0,1);
  if (pFVar24 == (FEditableTextBoxStyle *)0x0) {
    pFVar24 = FEditableTextBoxStyle::GetDefault();
  }
  pFVar16 = ::FName::FName(&local_2418,"ColorGradingPicker.NumericEntry.TextBox");
  FSlateStyleSet::Set<FEditableTextBoxStyle>(TVar14.Ptr,*pFVar16,pFVar24);
  TVar14 = Instance;
  pFVar16 = ::FName::FName(&local_2410,"PropertyWindow.NormalFont");
  FVar5 = *pFVar16;
  pIVar17 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar17 + 0x88))(pIVar17,&local_22c0,FVar5,0);
  pFVar16 = ::FName::FName(&local_2408,"ColorGrading.NormalFont");
  FSlateStyleSet::Set(TVar14.Ptr,*pFVar16,&local_22c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_22c0.CompositeFont.SharedReferenceCount.ReferenceController);
  pUVar27 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  pFVar28 = UStruct::GetStructPathName((UStruct *)pUVar27,&local_22d0);
  pFVar19 = FTopLevelAssetPath::ToString(pFVar28,&local_2350);
  iVar3 = (pFVar19->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar29 = L"";
  }
  else {
    pwVar29 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    iVar12 = iVar3 + -1;
  }
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar29);
  iVar12 = TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
                       *)&ColorSettings.StructColors,uVar11,pFVar19);
  if ((iVar12 == -1) ||
     (lVar30 = ColorSettings.StructColors._0_8_ + (longlong)iVar12 * 0x28, lVar30 == 0)) {
    local_24f8 = pFVar19;
    TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
                *)&ColorSettings.StructColors,(uint)local_res8,
               (TKeyInitializer<FString_&&> *)(ulonglong)uVar11,(bool *)&local_24f8);
    lVar30 = ColorSettings.StructColors._0_8_ + (longlong)local_res8[0] * 0x28;
  }
  if (local_2350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2350.Data.AllocatorInstance.Data);
  }
  fVar7 = __real_3b808081;
  fVar1 = FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.B];
  uVar11 = (uint)FColorList::Yellow.field0_0x0._s_0.A;
  *(float *)(lVar30 + 0x10) = FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.R];
  *(float *)(lVar30 + 0x14) = fVar1;
  *(float *)(lVar30 + 0x18) = fVar2;
  *(float *)(lVar30 + 0x1c) = (float)uVar11 * fVar7;
  pUVar27 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  pFVar28 = UStruct::GetStructPathName((UStruct *)pUVar27,&local_2310);
  pFVar19 = FTopLevelAssetPath::ToString(pFVar28,&local_2340);
  iVar3 = (pFVar19->Data).ArrayNum;
  iVar12 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar12 = 0;
  }
  else {
    pwVar31 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar31);
  iVar12 = TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
                       *)&ColorSettings.StructColors,uVar11,pFVar19);
  if ((iVar12 == -1) ||
     (lVar30 = ColorSettings.StructColors._0_8_ + (longlong)iVar12 * 0x28, lVar30 == 0)) {
    local_24f0 = pFVar19;
    TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
                *)&ColorSettings.StructColors,(uint)local_res10,
               (TKeyInitializer<FString_&&> *)(ulonglong)uVar11,(bool *)&local_24f0);
    lVar30 = ColorSettings.StructColors._0_8_ + (longlong)local_res10[0] * 0x28;
  }
  if (local_2340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2340.Data.AllocatorInstance.Data);
  }
  fVar1 = FLinearColor::sRGBToLinearTable[FColorList::DarkTurquoise.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable[FColorList::DarkTurquoise.field0_0x0._s_0.B];
  uVar11 = (uint)FColorList::DarkTurquoise.field0_0x0._s_0.A;
  *(float *)(lVar30 + 0x10) =
       FLinearColor::sRGBToLinearTable[FColorList::DarkTurquoise.field0_0x0._s_0.R];
  *(float *)(lVar30 + 0x14) = fVar1;
  *(float *)(lVar30 + 0x18) = fVar2;
  *(float *)(lVar30 + 0x1c) = (float)uVar11 * fVar7;
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)Instance.Ptr);
  FButtonStyle::~FButtonStyle(&local_2258);
  return;
}

// Destroy @ 14d85bf10

void __cdecl UE::AdvancedWidgets::FAdvancedWidgetsStyle::Destroy(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  FName aFStackX_8 [4];
  
  if (Instance.Ptr == (FSlateStyleSet *)0x0) {
    return;
  }
  pFVar5 = (FName *)(**(code **)((Instance.Ptr)->_padding_ + 8))();
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)(pFVar5->ComparisonIndex).Value);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateStyleName.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateStyleRegistry.cpp"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = *pFVar5;
  if (FSlateStyleRegistry::SlateStyleRepository._8_4_ !=
      FSlateStyleRegistry::SlateStyleRepository._52_4_) {
    aFStackX_8[0] = FVar1;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
                         *)&FSlateStyleRegistry::SlateStyleRepository,FVar1.Number + uVar4,
                        aFStackX_8);
  }
  return;
}

// Get @ 14d865950

ISlateStyle * __cdecl UE::AdvancedWidgets::FAdvancedWidgetsStyle::Get(void)

{
  return (ISlateStyle *)Instance.Ptr;
}

