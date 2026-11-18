// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// FToolWidgetsStyle @ 142d62b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FToolWidgetsStyle * __thiscall
UE::ToolWidgets::FToolWidgetsStyle::FToolWidgetsStyle(FToolWidgetsStyle *this)

{
  TOptional<FMargin> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  FName FVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  FName *pFVar13;
  FButtonStyle *pFVar14;
  FComboButtonStyle *pFVar15;
  FActionButtonStyle *pFVar16;
  FTextBlockStyle *pFVar17;
  ISlateStyle *pIVar18;
  FSlateBrush *pFVar19;
  FMargin *pFVar20;
  TOptional<FSlateBrush> *pTVar21;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_8778;
  float local_8768;
  float fStack_8764;
  float fStack_8760;
  float fStack_875c;
  float local_8758;
  float fStack_8754;
  float fStack_8750;
  float fStack_874c;
  float local_8748;
  float fStack_8744;
  float fStack_8740;
  float fStack_873c;
  float local_8738;
  float fStack_8734;
  float fStack_8730;
  float fStack_872c;
  float local_8728;
  float fStack_8724;
  float fStack_8720;
  float fStack_871c;
  float local_8718;
  float fStack_8714;
  float fStack_8710;
  float fStack_870c;
  FString local_8708;
  undefined8 local_86f8 [2];
  undefined4 local_86e8;
  undefined8 local_86e4 [2];
  undefined4 local_86d4;
  undefined8 local_86d0 [2];
  undefined4 local_86c0;
  FActionButtonStyle local_86b8;
  FActionButtonStyle local_75e8;
  FActionButtonStyle local_6518;
  FActionButtonStyle local_5448;
  FActionButtonStyle local_4378;
  FActionButtonStyle local_32a8;
  FActionButtonStyle local_21d8;
  FActionButtonStyle local_1108;
  
  local_1108.IconButtonStyle._920_8_ = 0x142d62b4d;
  FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)this,&StyleName);
  *(undefined ***)this = &___7FToolWidgetsStyle_ToolWidgets_UE__6B_;
  FVar11 = FAppStyle::GetAppStyleSetName();
  FSlateStyleSet::SetParentStyleName((FSlateStyleSet *)this,(FName *)FVar11);
  pTVar12 = &FPaths::EngineContentDir(&local_8708)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_8778,pTVar12,0xe - (uint)(pTVar12->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_8778,L"Editor/Slate",0xc);
  FSlateStyleSet::SetContentRoot((FSlateStyleSet *)this,(FString *)&local_8778);
  if (local_8778.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8778.AllocatorInstance.Data);
  }
  if (local_8708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8708.Data.AllocatorInstance.Data);
  }
  pTVar12 = &FPaths::EngineContentDir(&local_8708)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_8778,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_8778,L"Slate",5);
  FSlateStyleSet::SetCoreContentRoot((FSlateStyleSet *)this,(FString *)&local_8778);
  if (local_8778.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8778.AllocatorInstance.Data);
  }
  if (local_8708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8708.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FName::FName(&local_res8,"Button");
  pFVar14 = (FButtonStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FButtonStyle::TypeName,*pFVar13,0,1);
  if (pFVar14 == (FButtonStyle *)0x0) {
    pFVar14 = FButtonStyle::GetDefault();
  }
  pFVar13 = ::FName::FName(&local_res10,"ComboButton");
  pFVar15 = (FComboButtonStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FComboButtonStyle::TypeName,*pFVar13,0,1);
  if (pFVar15 == (FComboButtonStyle *)0x0) {
    pFVar15 = FComboButtonStyle::GetDefault();
  }
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&local_86b8);
  local_86b8._padding_ = (longlong)&___7FActionButtonStyle__6B_;
  FButtonStyle::FButtonStyle(&local_86b8.ButtonStyle);
  local_86b8.ButtonContentPadding.bIsSet = false;
  FComboButtonStyle::FComboButtonStyle(&local_86b8.ComboButtonStyle);
  local_86b8.bHasDownArrow = false;
  local_86b8.ComboButtonContentPadding.bIsSet = false;
  local_86b8.HorizontalContentAlignment.Value = '\x02';
  FTextBlockStyle::FTextBlockStyle(&local_86b8.TextBlockStyle);
  local_86b8.IconBrush.bIsSet = false;
  local_86b8.ActionButtonType.ComparisonIndex.Value = 0;
  local_86b8.ActionButtonType.Number = 0;
  local_86b8.IconButtonStyle.bIsSet = false;
  local_86b8.IconColorAndOpacity.bIsSet = false;
  local_86b8.IconNormalPadding.bIsSet = false;
  local_86b8.IconPressedPadding.bIsSet = false;
  pFVar16 = FActionButtonStyle::SetActionButtonType(&local_86b8,Default);
  FButtonStyle::operator=(&pFVar16->ButtonStyle,pFVar14);
  fVar4 = DefaultButtonContentPadding.Right;
  pTVar1 = &pFVar16->ButtonContentPadding;
  local_8768 = DefaultButtonContentPadding.Left;
  fStack_8764 = (pFVar14->NormalPadding).Top;
  fStack_8760 = DefaultButtonContentPadding.Right;
  if ((TOptional<FMargin> *)&local_8768 != pTVar1) {
    (pTVar1->TypedValue).Left = DefaultButtonContentPadding.Left;
    (pTVar1->TypedValue).Top = fStack_8764;
    (pFVar16->ButtonContentPadding).TypedValue.Right = fVar4;
    (pFVar16->ButtonContentPadding).TypedValue.Bottom = fStack_8764;
    (pFVar16->ButtonContentPadding).bIsSet = true;
  }
  fStack_875c = fStack_8764;
  FComboButtonStyle::operator=(&pFVar16->ComboButtonStyle,pFVar15);
  fVar4 = DefaultButtonContentPadding.Right;
  pTVar1 = &pFVar16->ComboButtonContentPadding;
  local_8758 = DefaultButtonContentPadding.Left;
  fStack_8754 = (pFVar14->NormalPadding).Top;
  fStack_8750 = DefaultButtonContentPadding.Right;
  if ((TOptional<FMargin> *)&local_8758 != pTVar1) {
    (pTVar1->TypedValue).Left = DefaultButtonContentPadding.Left;
    (pTVar1->TypedValue).Top = fStack_8754;
    (pFVar16->ComboButtonContentPadding).TypedValue.Right = fVar4;
    (pFVar16->ComboButtonContentPadding).TypedValue.Bottom = fStack_8754;
    (pFVar16->ComboButtonContentPadding).bIsSet = true;
  }
  (pFVar16->HorizontalContentAlignment).Value = '\x02';
  fStack_874c = fStack_8754;
  pFVar13 = ::FName::FName(&local_res18,"SmallButtonText");
  pFVar17 = (FTextBlockStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FTextBlockStyle::TypeName,*pFVar13,0,1);
  if (pFVar17 == (FTextBlockStyle *)0x0) {
    pFVar17 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::operator=(&pFVar16->TextBlockStyle,pFVar17);
  pFVar16->bHasDownArrow = false;
  pFVar13 = ::FName::FName(&local_res8,"ActionButton");
  FSlateStyleSet::Set<FActionButtonStyle>((FSlateStyleSet *)this,*pFVar13,&local_86b8);
  FActionButtonStyle::FActionButtonStyle(&local_1108,&local_86b8);
  pFVar16 = FActionButtonStyle::SetActionButtonType(&local_1108,Positive);
  pIVar18 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar13 = ::FName::FName(&local_res8,"Icons.Plus");
  pFVar19 = (FSlateBrush *)(*pcVar2)(pIVar18,*pFVar13,0,0);
  pTVar21 = &pFVar16->IconBrush;
  if ((TOptional<FSlateBrush> *)pFVar19 != pTVar21) {
    if ((pFVar16->IconBrush).bIsSet != false) {
      pTVar3 = (pFVar16->IconBrush).TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController;
      (pTVar21->TypedValue)._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    FSlateBrush::FSlateBrush(&pTVar21->TypedValue,pFVar19);
    (pFVar16->IconBrush).bIsSet = true;
  }
  if (&pFVar16->IconColorAndOpacity != (TOptional<FSlateColor> *)&FStyleColors::AccentGreen) {
    (pFVar16->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FStyleColors::AccentGreen.SpecifiedColor.field0_0x0;
    EVar8 = FStyleColors::AccentGreen.ColorTableId;
    uVar9 = FStyleColors::AccentGreen._18_2_;
    (pFVar16->IconColorAndOpacity).TypedValue.ColorUseRule = FStyleColors::AccentGreen.ColorUseRule;
    (pFVar16->IconColorAndOpacity).TypedValue.ColorTableId = EVar8;
    *(undefined2 *)&(pFVar16->IconColorAndOpacity).TypedValue.field_0x12 = uVar9;
    (pFVar16->IconColorAndOpacity).bIsSet = true;
  }
  pFVar13 = ::FName::FName(&local_res8,"PositiveActionButton");
  FSlateStyleSet::Set<FActionButtonStyle>((FSlateStyleSet *)this,*pFVar13,&local_1108);
  FActionButtonStyle::FActionButtonStyle(&local_21d8,&local_86b8);
  FActionButtonStyle::FActionButtonStyle(&local_6518,&local_21d8);
  pFVar16 = FActionButtonStyle::SetActionButtonType(&local_6518,Warning);
  pIVar18 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar13 = ::FName::FName(&local_res8,"Icons.Warning");
  pFVar19 = (FSlateBrush *)(*pcVar2)(pIVar18,*pFVar13,0,0);
  pTVar21 = &pFVar16->IconBrush;
  if ((TOptional<FSlateBrush> *)pFVar19 != pTVar21) {
    if ((pFVar16->IconBrush).bIsSet != false) {
      pTVar3 = (pFVar16->IconBrush).TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController;
      (pTVar21->TypedValue)._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    FSlateBrush::FSlateBrush(&pTVar21->TypedValue,pFVar19);
    (pFVar16->IconBrush).bIsSet = true;
  }
  pFVar13 = ::FName::FName(&local_res8,"NegativeActionButton.Warning");
  FSlateStyleSet::Set<FActionButtonStyle>((FSlateStyleSet *)this,*pFVar13,&local_6518);
  FActionButtonStyle::FActionButtonStyle(&local_75e8,&local_21d8);
  pFVar16 = FActionButtonStyle::SetActionButtonType(&local_75e8,Error);
  pIVar18 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar13 = ::FName::FName(&local_res8,"Icons.Error");
  pFVar19 = (FSlateBrush *)(*pcVar2)(pIVar18,*pFVar13,0,0);
  pTVar21 = &pFVar16->IconBrush;
  if ((TOptional<FSlateBrush> *)pFVar19 != pTVar21) {
    if ((pFVar16->IconBrush).bIsSet != false) {
      pTVar3 = (pFVar16->IconBrush).TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController;
      (pTVar21->TypedValue)._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    FSlateBrush::FSlateBrush(&pTVar21->TypedValue,pFVar19);
    (pFVar16->IconBrush).bIsSet = true;
  }
  pFVar13 = ::FName::FName(&local_res8,"NegativeActionButton.Error");
  FSlateStyleSet::Set<FActionButtonStyle>((FSlateStyleSet *)this,*pFVar13,&local_75e8);
  if (local_75e8.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_75e8.IconButtonStyle.TypedValue);
  }
  if (local_75e8.IconBrush.bIsSet != false) {
    local_75e8.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_75e8.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_75e8.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_75e8.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_75e8.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_75e8);
  if (local_6518.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_6518.IconButtonStyle.TypedValue);
  }
  if (local_6518.IconBrush.bIsSet != false) {
    local_6518.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6518.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_6518.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_6518.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_6518.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_6518);
  FActionButtonStyle::FActionButtonStyle(&local_32a8,&local_86b8);
  pFVar13 = ::FName::FName(&local_res8,"SimpleComboButton");
  pFVar15 = (FComboButtonStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FComboButtonStyle::TypeName,*pFVar13,0,1);
  if (pFVar15 == (FComboButtonStyle *)0x0) {
    pFVar15 = FComboButtonStyle::GetDefault();
  }
  pFVar16 = FActionButtonStyle::SetActionButtonType(&local_32a8,Simple);
  FComboButtonStyle::operator=(&pFVar16->ComboButtonStyle,pFVar15);
  FButtonStyle::operator=(&pFVar16->ButtonStyle,&pFVar15->ButtonStyle);
  fVar4 = DefaultButtonContentPadding.Right;
  pTVar1 = &pFVar16->ComboButtonContentPadding;
  local_8748 = DefaultButtonContentPadding.Left;
  fStack_8744 = (pFVar15->ButtonStyle).NormalPadding.Top;
  fStack_8740 = DefaultButtonContentPadding.Right;
  if ((TOptional<FMargin> *)&local_8748 != pTVar1) {
    (pTVar1->TypedValue).Left = DefaultButtonContentPadding.Left;
    (pTVar1->TypedValue).Top = fStack_8744;
    (pFVar16->ComboButtonContentPadding).TypedValue.Right = fVar4;
    (pFVar16->ComboButtonContentPadding).TypedValue.Bottom = fStack_8744;
    (pFVar16->ComboButtonContentPadding).bIsSet = true;
  }
  (pFVar16->HorizontalContentAlignment).Value = '\x01';
  fStack_873c = fStack_8744;
  pFVar13 = ::FName::FName(&local_res10,"SmallButtonText");
  pFVar17 = (FTextBlockStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FTextBlockStyle::TypeName,*pFVar13,0,1);
  if (pFVar17 == (FTextBlockStyle *)0x0) {
    pFVar17 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::operator=(&pFVar16->TextBlockStyle,pFVar17);
  uVar7 = _UNK_15090c6d8;
  local_86e8 = CONCAT22(local_86e8._2_2_,2);
  uVar10 = local_86e8;
  if ((TOptional<FSlateColor> *)local_86f8 != &pFVar16->IconColorAndOpacity) {
    *(undefined8 *)&(pFVar16->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 =
         ___xmm_3f8000003f800000000000003f800000;
    *(undefined8 *)
     ((longlong)&(pFVar16->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 + 8) = uVar7;
    local_86e8._0_1_ = (undefined1)2;
    local_86e8._1_1_ = (undefined1)(2 >> 8);
    (pFVar16->IconColorAndOpacity).TypedValue.ColorUseRule = (undefined1)local_86e8;
    (pFVar16->IconColorAndOpacity).TypedValue.ColorTableId = local_86e8._1_1_;
    *(undefined2 *)&(pFVar16->IconColorAndOpacity).TypedValue.field_0x12 = local_86e8._2_2_;
    (pFVar16->IconColorAndOpacity).bIsSet = true;
  }
  local_86e8 = uVar10;
  pFVar13 = ::FName::FName(&local_res8,"SimpleComboButton");
  FSlateStyleSet::Set<FActionButtonStyle>((FSlateStyleSet *)this,*pFVar13,&local_32a8);
  FActionButtonStyle::FActionButtonStyle(&local_4378,&local_86b8);
  pFVar13 = ::FName::FName(&local_res8,"SimpleButtonLabelAndIcon");
  pFVar14 = (FButtonStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FButtonStyle::TypeName,*pFVar13,0,1);
  if (pFVar14 == (FButtonStyle *)0x0) {
    pFVar14 = FButtonStyle::GetDefault();
  }
  pFVar16 = FActionButtonStyle::SetActionButtonType(&local_4378,Simple);
  FButtonStyle::operator=(&pFVar16->ButtonStyle,pFVar14);
  fVar4 = DefaultButtonContentPadding.Right;
  pTVar1 = &pFVar16->ButtonContentPadding;
  local_8738 = DefaultButtonContentPadding.Left;
  fStack_8734 = (pFVar14->NormalPadding).Top;
  fStack_8730 = DefaultButtonContentPadding.Right;
  if ((TOptional<FMargin> *)&local_8738 != pTVar1) {
    (pTVar1->TypedValue).Left = DefaultButtonContentPadding.Left;
    (pTVar1->TypedValue).Top = fStack_8734;
    (pFVar16->ButtonContentPadding).TypedValue.Right = fVar4;
    (pFVar16->ButtonContentPadding).TypedValue.Bottom = fStack_8734;
    (pFVar16->ButtonContentPadding).bIsSet = true;
  }
  (pFVar16->HorizontalContentAlignment).Value = '\x01';
  fStack_872c = fStack_8734;
  pFVar13 = ::FName::FName(&local_res10,"SmallButtonText");
  pFVar17 = (FTextBlockStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FTextBlockStyle::TypeName,*pFVar13,0,1);
  if (pFVar17 == (FTextBlockStyle *)0x0) {
    pFVar17 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::operator=(&pFVar16->TextBlockStyle,pFVar17);
  uVar7 = _UNK_15090c6d8;
  local_86d4 = CONCAT22(local_86d4._2_2_,2);
  uVar10 = local_86d4;
  if ((TOptional<FSlateColor> *)local_86e4 != &pFVar16->IconColorAndOpacity) {
    *(undefined8 *)&(pFVar16->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 =
         ___xmm_3f8000003f800000000000003f800000;
    *(undefined8 *)
     ((longlong)&(pFVar16->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 + 8) = uVar7;
    local_86d4._0_1_ = (undefined1)2;
    local_86d4._1_1_ = (undefined1)(2 >> 8);
    (pFVar16->IconColorAndOpacity).TypedValue.ColorUseRule = (undefined1)local_86d4;
    (pFVar16->IconColorAndOpacity).TypedValue.ColorTableId = local_86d4._1_1_;
    *(undefined2 *)&(pFVar16->IconColorAndOpacity).TypedValue.field_0x12 = local_86d4._2_2_;
    (pFVar16->IconColorAndOpacity).bIsSet = true;
  }
  local_86d4 = uVar10;
  pFVar13 = ::FName::FName(&local_res8,"SimpleButton");
  FSlateStyleSet::Set<FActionButtonStyle>((FSlateStyleSet *)this,*pFVar13,&local_4378);
  FActionButtonStyle::FActionButtonStyle(&local_5448,&local_86b8);
  pFVar13 = ::FName::FName(&local_res8,"PrimaryButton");
  pFVar14 = (FButtonStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FButtonStyle::TypeName,*pFVar13,0,1);
  if (pFVar14 == (FButtonStyle *)0x0) {
    pFVar14 = FButtonStyle::GetDefault();
  }
  pFVar16 = FActionButtonStyle::SetActionButtonType(&local_5448,Primary);
  FButtonStyle::operator=(&pFVar16->ButtonStyle,pFVar14);
  fVar4 = DefaultButtonContentPadding.Right;
  fStack_8724 = (pFVar14->NormalPadding).Top;
  pTVar1 = &pFVar16->ButtonContentPadding;
  local_8728 = DefaultButtonContentPadding.Left;
  fStack_8720 = DefaultButtonContentPadding.Right;
  if ((TOptional<FMargin> *)&local_8728 != pTVar1) {
    (pTVar1->TypedValue).Left = DefaultButtonContentPadding.Left;
    (pTVar1->TypedValue).Top = fStack_8724;
    (pFVar16->ButtonContentPadding).TypedValue.Right = fVar4;
    (pFVar16->ButtonContentPadding).TypedValue.Bottom = fStack_8724;
    (pFVar16->ButtonContentPadding).bIsSet = true;
  }
  fVar4 = DefaultButtonContentPadding.Right;
  fStack_8714 = (pFVar14->NormalPadding).Top;
  pTVar1 = &pFVar16->ComboButtonContentPadding;
  local_8718 = DefaultButtonContentPadding.Left;
  fStack_8710 = DefaultButtonContentPadding.Right;
  if ((TOptional<FMargin> *)&local_8718 != pTVar1) {
    (pTVar1->TypedValue).Left = DefaultButtonContentPadding.Left;
    (pTVar1->TypedValue).Top = fStack_8714;
    (pFVar16->ComboButtonContentPadding).TypedValue.Right = fVar4;
    (pFVar16->ComboButtonContentPadding).TypedValue.Bottom = fStack_8714;
    (pFVar16->ComboButtonContentPadding).bIsSet = true;
  }
  fStack_871c = fStack_8724;
  fStack_870c = fStack_8714;
  pFVar13 = ::FName::FName(&local_res10,"PrimaryButtonLabelAndIconNormalPadding");
  pFVar20 = FSlateStyleSet::GetMargin
                      ((FSlateStyleSet *)this,*pFVar13,(char *)0x0,&FStyleDefaults::DefaultMargin,
                       (ISlateStyle *)0x0);
  pTVar1 = &pFVar16->IconNormalPadding;
  if ((TOptional<FMargin> *)pFVar20 != pTVar1) {
    fVar4 = pFVar20->Top;
    fVar5 = pFVar20->Right;
    fVar6 = pFVar20->Bottom;
    (pTVar1->TypedValue).Left = pFVar20->Left;
    (pTVar1->TypedValue).Top = fVar4;
    (pFVar16->IconNormalPadding).TypedValue.Right = fVar5;
    (pFVar16->IconNormalPadding).TypedValue.Bottom = fVar6;
    (pFVar16->IconNormalPadding).bIsSet = true;
  }
  pFVar13 = ::FName::FName(&local_res18,"PrimaryButtonLabelAndIconPressedPadding");
  pFVar20 = FSlateStyleSet::GetMargin
                      ((FSlateStyleSet *)this,*pFVar13,(char *)0x0,&FStyleDefaults::DefaultMargin,
                       (ISlateStyle *)0x0);
  pTVar1 = &pFVar16->IconPressedPadding;
  if ((TOptional<FMargin> *)pFVar20 != pTVar1) {
    fVar4 = pFVar20->Top;
    fVar5 = pFVar20->Right;
    fVar6 = pFVar20->Bottom;
    (pTVar1->TypedValue).Left = pFVar20->Left;
    (pTVar1->TypedValue).Top = fVar4;
    (pFVar16->IconPressedPadding).TypedValue.Right = fVar5;
    (pFVar16->IconPressedPadding).TypedValue.Bottom = fVar6;
    (pFVar16->IconPressedPadding).bIsSet = true;
  }
  pFVar13 = ::FName::FName(&local_res20,"PrimaryButtonText");
  pFVar17 = (FTextBlockStyle *)
            (**(code **)(*(longlong *)this + 0xa0))(this,FTextBlockStyle::TypeName,*pFVar13,0,1);
  if (pFVar17 == (FTextBlockStyle *)0x0) {
    pFVar17 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::operator=(&pFVar16->TextBlockStyle,pFVar17);
  uVar7 = _UNK_15090c6d8;
  local_86c0 = CONCAT22(local_86c0._2_2_,2);
  uVar10 = local_86c0;
  if ((TOptional<FSlateColor> *)local_86d0 != &pFVar16->IconColorAndOpacity) {
    *(undefined8 *)&(pFVar16->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 =
         ___xmm_3f8000003f800000000000003f800000;
    *(undefined8 *)
     ((longlong)&(pFVar16->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 + 8) = uVar7;
    local_86c0._0_1_ = (undefined1)2;
    local_86c0._1_1_ = (undefined1)(2 >> 8);
    (pFVar16->IconColorAndOpacity).TypedValue.ColorUseRule = (undefined1)local_86c0;
    (pFVar16->IconColorAndOpacity).TypedValue.ColorTableId = local_86c0._1_1_;
    *(undefined2 *)&(pFVar16->IconColorAndOpacity).TypedValue.field_0x12 = local_86c0._2_2_;
    (pFVar16->IconColorAndOpacity).bIsSet = true;
  }
  local_86c0 = uVar10;
  pFVar13 = ::FName::FName(&local_res8,"PrimaryButton");
  FSlateStyleSet::Set<FActionButtonStyle>((FSlateStyleSet *)this,*pFVar13,&local_5448);
  if (local_5448.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_5448.IconButtonStyle.TypedValue);
  }
  if (local_5448.IconBrush.bIsSet != false) {
    local_5448.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5448.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_5448.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_5448.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_5448.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_5448);
  if (local_4378.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_4378.IconButtonStyle.TypedValue);
  }
  if (local_4378.IconBrush.bIsSet != false) {
    local_4378.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4378.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_4378.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_4378.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_4378.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_4378);
  if (local_32a8.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_32a8.IconButtonStyle.TypedValue);
  }
  if (local_32a8.IconBrush.bIsSet != false) {
    local_32a8.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32a8.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_32a8.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_32a8.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_32a8.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_32a8);
  if (local_21d8.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_21d8.IconButtonStyle.TypedValue);
  }
  if (local_21d8.IconBrush.bIsSet != false) {
    local_21d8.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21d8.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_21d8.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_21d8.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_21d8.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_21d8);
  if (local_1108.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_1108.IconButtonStyle.TypedValue);
  }
  if (local_1108.IconBrush.bIsSet != false) {
    local_1108.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1108.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_1108.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_1108.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_1108.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1108);
  if (local_86b8.IconButtonStyle.bIsSet != false) {
    FButtonStyle::~FButtonStyle(&local_86b8.IconButtonStyle.TypedValue);
  }
  if (local_86b8.IconBrush.bIsSet != false) {
    local_86b8.IconBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_86b8.IconBrush.TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_86b8.TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&local_86b8.ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&local_86b8.ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_86b8);
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)this);
  return this;
}

// ~FToolWidgetsStyle @ 142d670c0

void __thiscall UE::ToolWidgets::FToolWidgetsStyle::~FToolWidgetsStyle(FToolWidgetsStyle *this)

{
  *(undefined ***)this = &___7FToolWidgetsStyle_ToolWidgets_UE__6B_;
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)this);
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  return;
}

// Get @ 142daa5b0

FToolWidgetsStyle * __cdecl UE::ToolWidgets::FToolWidgetsStyle::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FToolWidgetsStyle(&::Instance);
      atexit(`UE::ToolWidgets::FToolWidgetsStyle::Get'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

