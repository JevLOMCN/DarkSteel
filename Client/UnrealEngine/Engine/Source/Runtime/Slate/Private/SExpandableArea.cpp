// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 19

// ComputeDesiredSize @ 1428e0e90

TVector2<double> * __thiscall
SExpandableArea::ComputeDesiredSize
          (SExpandableArea *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FDeprecateSlateVector2D FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)&((SWidget *)this->_padding_)->VisibilityAttribute ==
      EVisibility::Collapsed.Value.Value) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  fVar3 = *(float *)&this->_padding_;
  fVar4 = *(float *)((longlong)&this->_padding_ + 4);
  FVar5 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
  dVar7 = (double)(fVar3 + fVar1 + *(float *)FVar5);
  dVar6 = (double)(fVar4 + fVar2 + *(float *)((longlong)FVar5 + 4));
  dVar8 = dVar7;
  if ((0.0 < this->MinWidth) && (dVar8 = (double)this->MinWidth, dVar8 <= dVar7)) {
    dVar8 = dVar7;
  }
  dVar7 = dVar6;
  if ((0.0 < this->MaxHeight) && (dVar7 = (double)this->MaxHeight, dVar6 <= dVar7)) {
    dVar7 = dVar6;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  return __return_storage_ptr__;
}

// Construct @ 1428f97a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SExpandableArea::Construct(SExpandableArea *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TSharedPtr<SBorder,1> *this_00;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  SBorder *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  FCurveSequence *pFVar14;
  FArguments *pFVar15;
  TAttribute<FText> *pTVar16;
  TAttribute<FSlateFontInfo> *pTVar17;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar18;
  FArguments *pFVar19;
  FSlot *pFVar20;
  FSlot *pFVar21;
  FSizeParam *pFVar22;
  FArguments *pFVar23;
  Type *pTVar24;
  ISlateStyle *pIVar25;
  FButtonStyle *pFVar26;
  undefined8 *puVar27;
  TSharedRef<SWidget,1> *pTVar28;
  ulong64 uVar29;
  TSharedRef<SButton,1> *pTVar30;
  TSharedRef<SBorder,1> *pTVar31;
  TSharedRef<SWidget_const_,1> *pTVar32;
  TAttribute<FSlateColor> *pTVar33;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar34;
  FSlotArguments *pFVar35;
  FArguments *pFVar36;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar37;
  Type TVar38;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *pTVar39;
  FLinearColor_u_0 *pFVar40;
  byte bVar41;
  TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar42;
  SWidget *pSVar43;
  byte bVar44;
  byte bVar45;
  longlong *this_03;
  SWidget *local_res8;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_22e8;
  T0RequiredArgs local_22e7 [7];
  code *local_22e0;
  FSharedReferencer<1> FStack_22d8;
  FArguments *local_22d0;
  FLLMScope local_22c8;
  FLLMScope local_22c4;
  FName local_22c0;
  TReferenceControllerBase<1> *local_22b8;
  FArguments *local_22b0;
  FArguments *local_22a8;
  FMemScope local_22a0;
  FArguments *local_2298;
  undefined8 local_2290;
  undefined8 uStack_2288;
  float local_2280;
  undefined1 local_227c;
  undefined1 local_2278 [8];
  ForAnyElementType FStack_2270;
  int local_2268;
  TSharedPtr<SBorder,1> *local_2260;
  undefined4 uStack_2258;
  uint uStack_2254;
  SButton *local_2250;
  TReferenceControllerBase<1> *pTStack_2248;
  SVerticalBox *local_2240;
  TReferenceControllerBase<1> *pTStack_2238;
  SBorder *local_2230;
  TReferenceControllerBase<1> *pTStack_2228;
  undefined1 local_2220 [8];
  undefined4 local_2218;
  uint uStack_2214;
  Type local_2210;
  undefined1 local_220c;
  char local_2208;
  undefined1 local_2200 [24];
  Type local_21e8;
  undefined1 local_21e4;
  undefined1 local_21e0;
  undefined1 local_21d8 [8];
  void *pvStack_21d0;
  undefined8 local_21c8;
  FSlateBrush *local_21c0;
  undefined1 local_21b8;
  undefined1 local_21b0 [24];
  Type local_2198;
  undefined1 local_2194;
  char local_2190;
  undefined1 local_2188 [24];
  undefined8 local_2170;
  undefined8 uStack_2168;
  float local_2160;
  undefined1 local_215c;
  undefined1 local_2158 [8];
  void *pvStack_2150;
  undefined4 local_2148;
  FName local_2140;
  FMemScope local_2138;
  FArguments *local_2130;
  TReferenceControllerBase<1> *local_2128;
  FName local_2120;
  TSharedRef<SWidget,1> local_2118;
  FSlateBrush *local_2108;
  undefined1 local_2100;
  undefined1 local_20f8 [8];
  void *pvStack_20f0;
  undefined8 local_20e8;
  FSlateBrush *local_20e0;
  undefined1 local_20d8;
  undefined1 local_20d0 [8];
  void *pvStack_20c8;
  undefined8 local_20c0;
  FLinearColor_u_0 local_20b8;
  undefined1 local_20a8;
  undefined1 local_20a4 [4];
  undefined1 local_20a0 [8];
  void *pvStack_2098;
  undefined8 local_2090;
  FLinearColor_u_0 local_2088;
  undefined1 local_2078;
  undefined1 local_2074 [4];
  undefined1 local_2070 [8];
  void *pvStack_2068;
  undefined8 local_2060;
  undefined8 local_2058;
  undefined8 uStack_2050;
  bool local_2048;
  undefined1 local_2040 [8];
  void *pvStack_2038;
  undefined4 local_2030;
  FSlateBrush *local_2028;
  undefined1 local_2020;
  undefined1 local_2018 [24];
  FSlateBrush *local_2000;
  undefined1 local_1ff8;
  undefined1 local_1ff0 [24];
  FSlateBrush *local_1fd8;
  bool local_1fd0;
  undefined1 local_1fc8 [24];
  FSlateBrush *local_1fb0;
  undefined1 local_1fa8;
  undefined1 local_1fa0 [24];
  FSlateBrush *local_1f88;
  bool local_1f80;
  undefined1 local_1f78 [24];
  TAttribute<float> local_1f60;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1f40;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1f28;
  FLinearColor_u_0 local_1f10;
  undefined4 local_1f00;
  undefined1 local_1efc;
  undefined1 local_1ef8 [8];
  void *pvStack_1ef0;
  undefined4 local_1ee8;
  FLinearColor_u_0 local_1ee0;
  undefined4 local_1ed0;
  undefined1 local_1ecc;
  undefined1 local_1ec8 [8];
  void *pvStack_1ec0;
  undefined4 local_1eb8;
  FName local_1eb0;
  TReferenceControllerBase<1> *local_1ea8;
  TAttribute<FSlateBrush_const_*> local_1ea0;
  FDestructionSentinel local_1e78;
  FLinearColor_u_0 local_1e60;
  undefined4 local_1e50;
  undefined1 local_1e4c;
  undefined8 local_1e48;
  undefined8 uStack_1e40;
  undefined8 local_1e38;
  FDestructionSentinel local_1e30;
  undefined1 *local_1e18;
  FDestructionSentinel local_1e10;
  longlong *local_1df8;
  FDestructionSentinel local_1df0;
  undefined1 *local_1dd8;
  undefined4 local_1dc0;
  FLinearColor_u_0 local_1db8;
  float local_1da8;
  undefined1 local_1da4;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1da0;
  FLinearColor_u_0 local_1d88;
  float local_1d78;
  undefined1 local_1d74;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1d70;
  TSharedRef<SBorder,1> local_1d58;
  TSharedRef<SBorder,1> local_1d48;
  TSharedRef<SButton,1> local_1d38;
  TSharedRef<SVerticalBox,1> local_1d28;
  undefined1 local_1d18 [8];
  TSharedRef<STextBlock,1> local_1d10;
  TSharedRef<SWidget,1> local_1d00;
  SWidget *local_1cf0;
  TReferenceControllerBase<1> *pTStack_1ce8;
  SButton *local_1ce0;
  TReferenceControllerBase<1> *pTStack_1cd8;
  SBorder *local_1cd0;
  TReferenceControllerBase<1> *pTStack_1cc8;
  TSharedRef<SWidget_const_,1> local_1cc0;
  TSharedRef<SWidget_const_,1> local_1cb0;
  SBorder *local_1ca0;
  TReferenceControllerBase<1> *pTStack_1c98;
  TSharedRef<SBorder,1> local_1c90;
  TAttribute<FMargin> local_1c80;
  undefined1 local_1c50 [16];
  undefined1 local_1c40 [32];
  undefined1 local_1c20 [24];
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1c08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1bf0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1bd8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1bc0;
  undefined8 *local_1ba8;
  SBorder *local_1ba0;
  FSharedReferencer<1> local_1b98 [4];
  undefined1 local_1b78 [40];
  FSlotArgumentsMixin local_1b50;
  undefined8 *local_1ac0 [2];
  TReferenceControllerBase<1> *local_1ab0;
  undefined1 local_1a90 [40];
  FSlotArgumentsMixin local_1a68;
  TAttribute<FText> local_19d8;
  TAttribute<FSlateColor> local_19a8;
  FCurveSequence local_1978;
  FArguments local_1908;
  TAttribute<FSlateFontInfo> local_1700;
  FArguments local_1680;
  FArguments local_12a0;
  FArguments local_ec0;
  FArguments local_ae0;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1428f97bf;
  pFVar21 = (FSlot *)0x0;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_Style == (FExpandableAreaStyle *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                          ,0x10,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->WidgetStyle = param_1->_Style;
  this->bAreaCollapsed = param_1->_InitiallyCollapsed;
  this->MinWidth = param_1->_MinWidth;
  this->MaxHeight = param_1->_MaxHeight;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnAreaExpansionChanged,&param_1->_OnAreaExpansionChanged);
  this->CollapsedImage = &param_1->_Style->CollapsedImage;
  this->ExpandedImage = &param_1->_Style->ExpandedImage;
  pFVar14 = FCurveSequence::FCurveSequence
                      (&local_1978,0.0,param_1->_Style->RolloutAnimationSeconds,CubicOut);
  FCurveSequence::operator=(&this->RolloutCurve,pFVar14);
  FCurveSequence::~FCurveSequence(&local_1978);
  if (this->bAreaCollapsed == false) {
    FCurveSequence::JumpToEnd(&this->RolloutCurve);
  }
  pTVar3 = (param_1->_HeaderContent).Widget.SharedReferenceCount.ReferenceController;
  local_22c0 = (FName)(param_1->_HeaderContent).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_22b8 = pTVar3;
  if (local_22c0 == (FName)SNullWidget::NullWidget.Object) {
    pFVar15 = STextBlock::FArguments::FArguments(&local_5a0);
    pTVar16 = TAttribute<FText>::TAttribute<FText>(&local_19d8,&param_1->_AreaTitle);
    pFVar15 = STextBlock::FArguments::Text(pFVar15,pTVar16);
    pTVar17 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>
                        (&local_1700,&param_1->_AreaTitleFont);
    pFVar15 = STextBlock::FArguments::Font(pFVar15,pTVar17);
    this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1bc0,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                         ,0x26,(T0RequiredArgs *)&local_res8);
    pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_1d10,pFVar15);
    local_22b8 = (pTVar18->SharedReferenceCount).ReferenceController;
    local_22c0 = (FName)pTVar18->Object;
    if (local_22b8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_22b8->SharedReferenceCount = (atomic<int>)((int)local_22b8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d10.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1bc0._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  if ((param_1->_BodyBorderImage == (FSlateBrush *)0x0) &&
     ((param_1->_BodyBorderBackgroundColor).bIsSet == false)) {
    local_2028 = (param_1->_BorderImage).Value;
    local_2020 = (param_1->_BorderImage).bIsSet;
    bVar13 = false;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_2018
               ,&(param_1->_BorderImage).Getter);
    local_21c0 = local_2028;
    local_21b8 = local_2020;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_21b0
               ,(TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                local_2018);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2018);
    if ((void *)local_2018._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2018._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2018);
  }
  else {
    bVar13 = true;
    local_21c0 = FStyleDefaults::GetNoBrush();
    local_20d8 = 1;
    local_20c0 = 0;
    local_20d0 = (undefined1  [8])0x0;
    pvStack_20c8 = (void *)0x0;
    local_21b8 = 1;
    local_20e0 = local_21c0;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_21b0
               ,(TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                local_20d0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20d0);
    if (pvStack_20c8 != (void *)0x0) {
      FMemory::Free(pvStack_20c8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_20d0);
  }
  if (bVar13) {
    local_2078 = 0;
    local_2088 = FLinearColor::Transparent.field0_0x0;
    local_2074[0] = 1;
    pFVar40 = &local_2088;
    local_2070 = (undefined1  [8])0x0;
    pvStack_2068 = (void *)0x0;
    local_2060 = 0;
    bVar45 = 4;
  }
  else {
    local_1f10._0_8_ =
         *(undefined8 *)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0;
    local_1f10._8_8_ =
         *(undefined8 *)
          ((longlong)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
    local_1f00._0_1_ = (param_1->_BorderBackgroundColor).Value.ColorUseRule;
    local_1f00._1_1_ = (param_1->_BorderBackgroundColor).Value.ColorTableId;
    local_1f00._2_2_ = *(undefined2 *)&(param_1->_BorderBackgroundColor).Value.field_0x12;
    local_1efc = (param_1->_BorderBackgroundColor).bIsSet;
    local_1ee8 = 0;
    local_1ef8 = (undefined1  [8])0x0;
    pvStack_1ef0 = (void *)0x0;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ef8,
               &(param_1->_BorderBackgroundColor).Getter);
    pFVar40 = &local_1f10;
    bVar45 = 8;
  }
  local_2290 = *(undefined8 *)pFVar40;
  uStack_2288 = *(undefined8 *)((longlong)pFVar40 + 8);
  local_2280 = pFVar40[1]._s_0.R;
  local_227c = *(undefined1 *)((longlong)pFVar40 + 0x14);
  local_2268 = 0;
  local_2278 = (undefined1  [8])0x0;
  FStack_2270.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_2278,
             (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)pFVar40 + 0x18));
  if ((bVar45 & 8) != 0) {
    bVar45 = bVar45 & 0xf7;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ef8);
    if (pvStack_1ef0 != (void *)0x0) {
      FMemory::Free(pvStack_1ef0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1ef8);
  }
  if ((bVar45 & 4) != 0) {
    bVar45 = bVar45 & 0xfb;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2070);
    if (pvStack_2068 != (void *)0x0) {
      FMemory::Free(pvStack_2068);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2070);
  }
  if (bVar13) {
    local_2000 = (param_1->_BorderImage).Value;
    local_1ff8 = (param_1->_BorderImage).bIsSet;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ff0
               ,&(param_1->_BorderImage).Getter);
    pTVar39 = (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ff0;
    bVar41 = 0x20;
    local_1fb0 = local_2000;
    local_1fa8 = local_1ff8;
  }
  else {
    local_2108 = FStyleDefaults::GetNoBrush();
    local_20e8 = 0;
    pTVar39 = (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_20f8;
    local_2100 = 1;
    local_20f8 = (undefined1  [8])0x0;
    pvStack_20f0 = (void *)0x0;
    bVar41 = 0x10;
    local_1fb0 = local_2108;
    local_1fa8 = 1;
  }
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1fa0,
             pTVar39);
  if ((bVar41 & 0x20) != 0) {
    bVar41 = bVar41 & 0xdf;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ff0);
    if ((void *)local_1ff0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1ff0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1ff0);
  }
  if ((bVar41 & 0x10) != 0) {
    bVar41 = bVar41 & 0xef;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20f8);
    if (pvStack_20f0 != (void *)0x0) {
      FMemory::Free(pvStack_20f0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_20f8);
  }
  if (bVar13) {
    local_1ee0._0_8_ =
         *(undefined8 *)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0;
    local_1ee0._8_8_ =
         *(undefined8 *)
          ((longlong)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
    local_1ed0._0_1_ = (param_1->_BorderBackgroundColor).Value.ColorUseRule;
    local_1ed0._1_1_ = (param_1->_BorderBackgroundColor).Value.ColorTableId;
    local_1ed0._2_2_ = *(undefined2 *)&(param_1->_BorderBackgroundColor).Value.field_0x12;
    local_1ecc = (param_1->_BorderBackgroundColor).bIsSet;
    local_1eb8 = 0;
    local_1ec8 = (undefined1  [8])0x0;
    pvStack_1ec0 = (void *)0x0;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ec8,
               &(param_1->_BorderBackgroundColor).Getter);
    pFVar40 = &local_1ee0;
    bVar44 = 0x80;
  }
  else {
    local_20a8 = 0;
    local_20b8 = FLinearColor::Transparent.field0_0x0;
    local_20a4[0] = 1;
    pFVar40 = &local_20b8;
    local_20a0 = (undefined1  [8])0x0;
    pvStack_2098 = (void *)0x0;
    local_2090 = 0;
    bVar44 = 0x40;
  }
  local_2170 = *(undefined8 *)pFVar40;
  uStack_2168 = *(undefined8 *)((longlong)pFVar40 + 8);
  local_2160 = pFVar40[1]._s_0.R;
  bVar45 = bVar44 | bVar41 | bVar45;
  local_215c = *(undefined1 *)((longlong)pFVar40 + 0x14);
  local_2148 = 0;
  local_2158 = (undefined1  [8])0x0;
  pvStack_2150 = (void *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_2158,
             (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)pFVar40 + 0x18));
  if ((char)bVar45 < '\0') {
    bVar45 = bVar44 & 0x7f;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ec8);
    if (pvStack_1ec0 != (void *)0x0) {
      FMemory::Free(pvStack_1ec0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1ec8);
  }
  if ((bVar45 & 0x40) != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20a0);
    if (pvStack_2098 != (void *)0x0) {
      FMemory::Free(pvStack_2098);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_20a0);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  this->bAllowAnimatedTransition = param_1->_AllowAnimatedTransition;
  pFVar19 = SBorder::FArguments::FArguments(&local_ec0);
  local_1fd8 = local_21c0;
  local_1fd0 = (bool)local_21b8;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1fc8,
             (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_21b0);
  (pFVar19->_BorderImage).Value = local_1fd8;
  (pFVar19->_BorderImage).bIsSet = local_1fd0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fc8);
  if ((void *)local_1fc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1fc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fc8);
  local_1da8 = local_2280;
  local_1db8._0_8_ = local_2290;
  local_1db8._8_8_ = uStack_2288;
  local_1da4 = local_227c;
  local_1da0._16_4_ = 0;
  local_1da0._0_8_ = 0;
  local_1da0._8_8_ = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1da0,
             (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_2278);
  pFVar19 = SBorder::FArguments::BorderBackgroundColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_1db8._s_0);
  local_2130 = SBorder::FArguments::Padding(pFVar19,0.0);
  local_2298 = SVerticalBox::FArguments::FArguments(&local_1908);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    pFVar21 = SVerticalBox::FSlot::FSlot(pFVar20);
  }
  local_22b0 = (FArguments *)pFVar21;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1ba8,(FSlot *)&local_22b0);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1c50);
  TOptional<FSizeParam>::operator=(&local_1b50._SizeParam,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c20);
  if ((void *)local_1c20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c40);
  if ((void *)local_1c40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c40);
  pFVar19 = SBorder::FArguments::FArguments(&local_12a0);
  local_1f88 = local_1fb0;
  local_1f80 = (bool)local_1fa8;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f78,
             (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1fa0);
  (pFVar19->_BorderImage).Value = local_1f88;
  (pFVar19->_BorderImage).bIsSet = local_1f80;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f78);
  if ((void *)local_1f78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1f78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f78);
  local_1d78 = local_2160;
  local_1d88._0_8_ = local_2170;
  local_1d88._8_8_ = uStack_2168;
  local_1d74 = local_215c;
  local_1d70._16_4_ = 0;
  local_1d70._0_8_ = 0;
  local_1d70._8_8_ = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1d70,
             (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_2158);
  pFVar19 = SBorder::FArguments::BorderBackgroundColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_1d88._s_0);
  local_22a8 = SBorder::FArguments::Padding(pFVar19,0.0);
  pFVar23 = SButton::FArguments::FArguments(&local_ae0);
  bVar2 = (param_1->_HeaderCursor).bIsSet;
  if (bVar2 == false) {
    pTVar24 = (Type *)(**(code **)(this->_padding_ + 0x1d8))(this,local_1d18);
    local_220c = (undefined1)pTVar24[1];
    if (local_220c != None) {
      local_21e8 = *pTVar24;
    }
    local_2208 = '\x01';
    local_21c8 = 0;
    pTVar42 = (TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *)
              local_21d8;
    local_21e0 = 1;
    bVar11 = false;
    bVar2 = true;
    local_21d8 = (undefined1  [8])0x0;
    pvStack_21d0 = (void *)0x0;
    TVar38 = local_21e8;
    local_21e4 = local_220c;
  }
  else {
    local_2194 = (param_1->_HeaderCursor).Value.bIsSet;
    if ((bool)local_2194 != false) {
      local_2198 = (param_1->_HeaderCursor).Value.TypedValue;
    }
    local_2190 = bVar2;
    TDelegate<TOptional<enum_EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<TOptional<enum_EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy>
              (local_2188,&(param_1->_HeaderCursor).Getter);
    pTVar42 = (TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *)
              local_2188;
    bVar11 = true;
    bVar2 = false;
    TVar38 = local_2198;
    local_220c = local_2194;
    local_2208 = local_2190;
  }
  if (local_220c != None) {
    local_2210 = TVar38;
  }
  TDelegate<TOptional<enum_EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TOptional<enum_EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2200,pTVar42);
  if (&local_2210 != (Type *)&pFVar23->_padding_) {
    if (local_220c == None) {
      if (*(char *)((longlong)&pFVar23->_padding_ + 4) != '\0') {
        *(undefined1 *)((longlong)&pFVar23->_padding_ + 4) = 0;
      }
    }
    else {
      *(Type *)&pFVar23->_padding_ = local_2210;
      *(undefined1 *)((longlong)&pFVar23->_padding_ + 4) = 1;
    }
  }
  *(char *)&pFVar23->_padding_ = local_2208;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar23->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2200);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2200);
  if ((void *)local_2200._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2200._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2200);
  ::FName::FName(&local_2140,"NoBorder");
  pIVar25 = FAppStyle::Get();
  pFVar26 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar25 + 0xa0))(pIVar25,FButtonStyle::TypeName,local_2140,0,1);
  if (pFVar26 == (FButtonStyle *)0x0) {
    pFVar26 = FButtonStyle::GetDefault();
  }
  pFVar23->_ButtonStyle = pFVar26;
  local_2058._0_4_ = (param_1->_HeaderPadding).Value.Left;
  local_2058._4_4_ = (param_1->_HeaderPadding).Value.Top;
  uStack_2050._0_4_ = (param_1->_HeaderPadding).Value.Right;
  uStack_2050._4_4_ = (param_1->_HeaderPadding).Value.Bottom;
  local_2048 = (param_1->_HeaderPadding).bIsSet;
  local_2030 = 0;
  local_2040 = (undefined1  [8])0x0;
  pvStack_2038 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2040,
             &(param_1->_HeaderPadding).Getter);
  (pFVar23->_ContentPadding).Value.Left = (float)(undefined4)local_2058;
  (pFVar23->_ContentPadding).Value.Top = (float)local_2058._4_4_;
  (pFVar23->_ContentPadding).Value.Right = (float)(undefined4)uStack_2050;
  (pFVar23->_ContentPadding).Value.Bottom = (float)uStack_2050._4_4_;
  (pFVar23->_ContentPadding).bIsSet = local_2048;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2040);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2040);
  if (pvStack_2038 != (void *)0x0) {
    FMemory::Free(pvStack_2038);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2040);
  local_1dc0 = CONCAT22(local_1dc0._2_2_,2);
  local_1e50 = local_1dc0;
  local_1e38 = 0;
  local_1e60._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_1e60._8_8_ = _UNK_15090c6d8;
  local_1e4c = 1;
  local_1e48 = 0;
  uStack_1e40 = 0;
  pFVar23 = SButton::FArguments::ForegroundColor
                      (pFVar23,(TAttribute<FSlateColor> *)&local_1e60._s_0);
  local_22b0 = pFVar23;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_OnClicked,
             (FWriteAccessScope *)&local_1e30);
  local_1e18 = &(pFVar23->_OnClicked).field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1e18);
  pSVar43 = local_res8;
  if (puVar27 != (undefined8 *)0x0) {
    uStack_2254 = uStack_2214;
    local_2260 = (TSharedPtr<SBorder,1> *)OnHeaderClicked;
    uStack_2258 = 0;
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d00);
    pSVar43 = (SWidget *)(pTVar28->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar28->Object;
    if (pSVar43 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar43->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar43->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->_padding_ + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSExpandableArea___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = local_res8;
    puVar27[4] = pSVar43;
    if (pSVar43 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar43->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar43->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar27[5] = local_2260;
    puVar27[6] = CONCAT44(uStack_2254,uStack_2258);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d00.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_1e30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e30.Accessor,&local_1e30);
  }
  lVar4 = this->_padding_;
  local_1eb0 = local_22c0;
  local_1ea8 = local_22b8;
  if (local_22b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_22b8->SharedReferenceCount = (atomic<int>)((int)local_22b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar27 = (undefined8 *)(**(code **)(lVar4 + 0x268))(this,local_2220);
  pFVar23 = local_22b0;
  pTVar3 = (TReferenceControllerBase<1> *)puVar27[1];
  pSVar43 = (SWidget *)*puVar27;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1cf0 = (local_22b0->_Content).Widget.Object;
  pTStack_1ce8 = (local_22b0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_22b0->_Content).Widget.Object = pSVar43;
  (local_22b0->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1ce8);
  FLLMScope::FLLMScope(&local_22c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_22c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2138,&local_22c0,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1f28,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x46,local_res10);
  FMemScope::~FMemScope(&local_2138);
  FLLMScope::~FLLMScope(&local_22c8);
  if (local_1f28._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f28._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f28._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1ce0 = (this->ExpandingButton).Object;
  pTStack_1cd8 = (this->ExpandingButton).SharedReferenceCount.ReferenceController;
  (this->ExpandingButton).Object = local_1f28._Widget.Object;
  (this->ExpandingButton).SharedReferenceCount.ReferenceController =
       local_1f28._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1cd8);
  pTVar30 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1f28,&local_1d38,pFVar23);
  pFVar19 = local_22a8;
  local_2250 = pTVar30->Object;
  pTStack_2248 = (pTVar30->SharedReferenceCount).ReferenceController;
  if (pTStack_2248 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2248->SharedReferenceCount = (atomic<int>)((int)pTStack_2248->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_2248->SharedReferenceCount = (atomic<int>)((int)pTStack_2248->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (local_22a8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_22a8->_Content).Widget.Object = (SWidget *)local_2250;
  (local_22a8->_Content).Widget.SharedReferenceCount.ReferenceController = pTStack_2248;
  local_2128 = pTStack_2248;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(&local_22c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2120 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_22a0,&local_2120,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1f40,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x41,local_res18);
  FMemScope::~FMemScope(&local_22a0);
  FLLMScope::~FLLMScope(&local_22c4);
  local_2260 = &this->TitleBorder;
  if (local_1f40._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f40._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f40._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1cd0 = local_2260->Object;
  pTStack_1cc8 = (this->TitleBorder).SharedReferenceCount.ReferenceController;
  local_2260->Object = local_1f40._Widget.Object;
  (this->TitleBorder).SharedReferenceCount.ReferenceController =
       local_1f40._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1cc8);
  pTVar31 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1f40,&local_1d48,pFVar19);
  local_1ba0 = pTVar31->Object;
  FStack_22d8.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
  if (FStack_22d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_22d8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_22d8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FStack_22d8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_22d8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar20 = (FSlot *)0x0;
  local_22e0 = (code *)0x0;
  local_22a8 = (FArguments *)FStack_22d8.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1b98,&FStack_22d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_22d8.ReferenceController);
  local_22a0 = (FMemScope)
               SVerticalBox::FArguments::operator+(local_2298,(FSlotArguments *)&local_1ba8);
  pFVar21 = ::operator_new(0x58);
  if (pFVar21 != (FSlot *)0x0) {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    pFVar20 = SVerticalBox::FSlot::FSlot(pFVar21);
  }
  local_22d0 = (FArguments *)pFVar20;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1ac0,(FSlot *)&local_22d0);
  local_1f60.Value = 1.0;
  local_1f60.Getter._16_8_ = 0;
  local_1f60.bIsSet = true;
  local_1f60.Getter._0_8_ = 0;
  local_1f60.Getter._8_8_ = 0;
  local_2298 = (FArguments *)
               SVerticalBox::FSlot::FSlotArguments::FillHeight
                         ((FSlotArguments *)local_1ac0,&local_1f60);
  pFVar19 = SBorder::FArguments::FArguments(&local_1680);
  *(undefined1 *)((longlong)&pFVar19->_padding_ + 1) = 1;
  local_22d0 = pFVar19;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar19->_padding_,
             (FWriteAccessScope *)&local_1e10);
  local_1df8 = &pFVar19->_padding_;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1df8);
  pSVar43 = local_res8;
  if (puVar27 != (undefined8 *)0x0) {
    local_22e0 = _vcall__624__flat______;
    FStack_22d8.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)uStack_2214 << 0x20);
    pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1cc0);
    pSVar43 = (SWidget *)(pTVar32->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar32->Object;
    if (pSVar43 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar43->_padding_ = (int)pSVar43->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar43->_padding_ = (int)pSVar43->_padding_ + 1;
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSExpandableArea___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = local_res8;
    puVar27[4] = pSVar43;
    if (pSVar43 != (SWidget *)0x0) {
      LOCK();
      puVar1 = (undefined1 *)((longlong)&pSVar43->_padding_ + 4);
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
    }
    puVar27[5] = local_22e0;
    puVar27[6] = FStack_22d8.ReferenceController;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1cc0.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_1e10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e10.Accessor,&local_1e10);
  }
  local_1ea0.Value = param_1->_BodyBorderImage;
  local_1ea0.bIsSet = true;
  local_1ea0.Getter._16_8_ = 0;
  local_1ea0.Getter._0_8_ = 0;
  local_1ea0.Getter._8_8_ = 0;
  pFVar19 = SBorder::FArguments::BorderImage(local_22d0,&local_1ea0);
  pTVar33 = TAttribute<FSlateColor>::TAttribute<FSlateColor>
                      (&local_19a8,&param_1->_BodyBorderBackgroundColor);
  pFVar19 = SBorder::FArguments::BorderBackgroundColor(pFVar19,pTVar33);
  local_1c80.Value.Left = (param_1->_Padding).Value.Left;
  local_1c80.Value.Top = (param_1->_Padding).Value.Top;
  local_1c80.Value.Right = (param_1->_Padding).Value.Right;
  local_1c80.Value.Bottom = (param_1->_Padding).Value.Bottom;
  local_1c80.bIsSet = (param_1->_Padding).bIsSet;
  local_1c80.Getter._16_4_ = 0;
  local_1c80.Getter._0_8_ = 0;
  local_1c80.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1c80.Getter,&(param_1->_Padding).Getter);
  pFVar19 = SBorder::FArguments::Padding(pFVar19,&local_1c80);
  (pFVar19->_DesiredSizeScale).bIsSet = true;
  local_22d0 = pFVar19;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar19->_DesiredSizeScale).Getter,(FWriteAccessScope *)&local_1df0);
  local_1dd8 = &(pFVar19->_DesiredSizeScale).Getter.field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1dd8);
  pSVar43 = local_res8;
  if (puVar27 != (undefined8 *)0x0) {
    local_22e0 = _vcall__648__flat______;
    FStack_22d8.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)uStack_2214 << 0x20);
    pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1cb0);
    pSVar43 = (SWidget *)(pTVar32->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar32->Object;
    if (pSVar43 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar43->_padding_ = (int)pSVar43->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar43->_padding_ = (int)pSVar43->_padding_ + 1;
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSExpandableArea___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = local_res8;
    puVar27[4] = pSVar43;
    if (pSVar43 != (SWidget *)0x0) {
      LOCK();
      puVar1 = (undefined1 *)((longlong)&pSVar43->_padding_ + 4);
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
    }
    puVar27[5] = local_22e0;
    puVar27[6] = FStack_22d8.ReferenceController;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1cb0.SharedReferenceCount.ReferenceController);
  }
  if (local_1df0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1df0.Accessor,&local_1df0);
  }
  pFVar19 = local_22d0;
  TSharedRef<SWidget,1>::operator=(&(local_22d0->_Content).Widget,&(param_1->_BodyContent).Widget);
  pTVar34 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1bd8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x54,local_res20);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SBorder>
                      (pTVar34,&this->BodyBorder);
  pTVar31 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar34,&local_1d58,pFVar19);
  local_2118.Object = (SWidget *)pTVar31->Object;
  local_2118.SharedReferenceCount.ReferenceController =
       (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_2118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar35 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2298,&local_2118);
  pFVar36 = SVerticalBox::FArguments::operator+((FArguments *)local_22a0,pFVar35);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1bf0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x3d,&local_22e8);
  pTVar37 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_1d28,pFVar36);
  pFVar19 = local_2130;
  pTVar3 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_2240 = pTVar37->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (local_2130->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2130->_Content).Widget.Object = (SWidget *)local_2240;
  (local_2130->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  pTStack_2238 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar34 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1c08,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x38,local_22e7);
  this_00 = &this->WidgetBorder;
  pSVar5 = (pTVar34->_Widget).Object;
  pTVar6 = (pTVar34->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1ca0 = this_00->Object;
  pTStack_1c98 = (this->WidgetBorder).SharedReferenceCount.ReferenceController;
  this_00->Object = pSVar5;
  (this->WidgetBorder).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c98);
  pTVar31 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar34,&local_1c90,pFVar19);
  this_03 = &this->_padding_;
  pTVar6 = (pTVar31->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar31->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_03);
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_03);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar6;
  local_2230 = pSVar5;
  pTStack_2228 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_03);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bf0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2118.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bd8._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_1680);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1a68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a90);
  if ((void *)local_1a90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ab0);
  if (local_1ac0[0] != (undefined8 *)0x0) {
    (**(code **)*local_1ac0[0])(local_1ac0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_22a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f40._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_2214,local_2218));
  if (bVar2) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_21d8);
    if (pvStack_21d0 != (void *)0x0) {
      FMemory::Free(pvStack_21d0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_21d8);
  }
  if (bVar11) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2188);
    if ((void *)local_2188._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2188._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2188);
  }
  SButton::FArguments::~FArguments(&local_ae0);
  SBorder::FArguments::~FArguments(&local_12a0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1b50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b78);
  if ((void *)local_1b78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b98[0].ReferenceController);
  if (local_1ba8 != (undefined8 *)0x0) {
    (**(code **)*local_1ba8)(local_1ba8,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1908._Slots.AllocatorInstance.Data,local_1908._Slots.ArrayNum);
  if ((FSlotArguments *)local_1908._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1908._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1908);
  SBorder::FArguments::~FArguments(&local_ec0);
  if (bVar13) {
    TSharedPtr<SBorder,1>::operator=(this_00,local_2260);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2158);
  if (pvStack_2150 != (void *)0x0) {
    FMemory::Free(pvStack_2150);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2158);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fa0);
  if ((void *)local_1fa0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1fa0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2278,
             (FWriteAccessScope *)&local_1e78);
  if ((local_2268 != 0) && (FStack_2270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2270,0,0,0x10);
    local_2268 = 0;
  }
  if (local_1e78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e78.Accessor,&local_1e78);
  }
  if (FStack_2270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2278);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_21b0);
  if ((void *)local_21b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_21b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_21b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22b8);
  return;
}

// ConstructHeaderWidget @ 14290dbe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SExpandableArea::ConstructHeaderWidget
          (SExpandableArea *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FArguments *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  FArguments *pFVar5;
  FSlot *pFVar6;
  FSizeParam *pFVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget_const_,1> *pTVar10;
  ulong64 uVar11;
  TSharedRef<SImage,1> *pTVar12;
  FName FVar13;
  TSharedRef<SHorizontalBox,1> *pTVar14;
  FName FVar15;
  SWidget *pSVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_808 [2];
  FDestructionSentinel local_800;
  TSharedRef<SWidget_const_,1> local_7e8;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  bool local_7c8;
  undefined3 uStack_7c7;
  undefined1 local_7c4;
  undefined1 local_7c0 [8];
  ForAnyElementType FStack_7b8;
  ulonglong local_7b0;
  SWidget *local_7a8;
  FSharedReferencer<1> local_7a0 [4];
  undefined1 local_780 [8];
  ForAnyElementType FStack_778;
  int local_770;
  undefined4 local_768 [2];
  FDestructionSentinel local_760;
  undefined1 *local_748;
  TAttribute<float> local_740;
  TSharedRef<SImage,1> local_720;
  TSharedRef<SHorizontalBox,1> local_710;
  undefined1 local_700 [16];
  undefined1 local_6f0 [32];
  undefined1 local_6d0 [24];
  undefined8 *local_6b8;
  SImage *local_6b0;
  FSharedReferencer<1> local_6a8 [4];
  undefined1 local_688 [32];
  undefined4 local_668;
  undefined1 local_664;
  FSlotArgumentsMixin local_660;
  undefined8 *local_5d0 [2];
  TReferenceControllerBase<1> *local_5c0;
  undefined1 local_5a0 [40];
  FSlotArgumentsMixin local_578;
  FArguments local_4e8;
  FArguments local_2e0;
  
  pSVar16 = (SWidget *)0x0;
  local_res18[0] = 0;
  pFVar5 = SHorizontalBox::FArguments::FArguments(&local_4e8);
  pFVar6 = ::operator_new(0x58);
  local_7e8.Object = pSVar16;
  if (pFVar6 != (FSlot *)0x0) {
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined8 *)&pFVar6->field_0x18 = 0;
    *(undefined8 *)&pFVar6->field_0x20 = 0;
    *(undefined8 *)&pFVar6->field_0x28 = 0;
    *(undefined8 *)&pFVar6->field_0x30 = 0;
    *(undefined8 *)&pFVar6->field_0x38 = 0;
    *(undefined8 *)&pFVar6->field_0x40 = 0;
    *(undefined8 *)&pFVar6->field_0x48 = 0;
    *(undefined8 *)&pFVar6->field_0x50 = 0;
    local_7e8.Object = (SWidget *)SHorizontalBox::FSlot::FSlot(pFVar6);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_6b8,(FSlot *)&local_7e8);
  pFVar7 = (FSizeParam *)FAuto::FAuto((FAuto *)local_700);
  TOptional<FSizeParam>::operator=(&local_660._SizeParam,pFVar7);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  if ((void *)local_6d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  if ((void *)local_6f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6f0);
  local_7a0[1].ReferenceController._0_4_ = (param_1->_AreaTitlePadding).Value.Left;
  local_7a0[1].ReferenceController._4_4_ = (param_1->_AreaTitlePadding).Value.Top;
  local_7a0[2].ReferenceController._0_4_ = (param_1->_AreaTitlePadding).Value.Right;
  local_7a0[2].ReferenceController._4_4_ = (param_1->_AreaTitlePadding).Value.Bottom;
  local_7a0[3].ReferenceController._0_1_ = (param_1->_AreaTitlePadding).bIsSet;
  local_770 = 0;
  local_780 = (undefined1  [8])0x0;
  FStack_778.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_780,
             &(param_1->_AreaTitlePadding).Getter);
  local_6a8[3].ReferenceController._0_1_ = local_7a0[3].ReferenceController._0_1_;
  local_6a8[1].ReferenceController = local_7a0[1].ReferenceController;
  local_6a8[2].ReferenceController = local_7a0[2].ReferenceController;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_688,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_780);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_780,
             (FWriteAccessScope *)&local_800);
  if ((local_770 != 0) && (FStack_778.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_778.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_778,0,0,0x10);
    local_770 = 0;
  }
  if (local_800.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_800.Accessor,&local_800);
  }
  if (FStack_778.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_778.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_780);
  local_668 = 2;
  local_664 = 1;
  pFVar8 = SImage::FArguments::FArguments(&local_2e0);
  (pFVar8->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Image).Getter,
             (FWriteAccessScope *)&local_760);
  local_748 = &(pFVar8->_Image).Getter.field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_748);
  pTVar17 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if (puVar9 != (undefined8 *)0x0) {
    local_800._0_8_ = _vcall__640__flat______;
    local_800.Accessor =
         (FMRSWRecursiveAccessDetector *)
         ((ulonglong)local_720.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7e8);
    pTVar17 = (pTVar10->SharedReferenceCount).ReferenceController;
    pSVar16 = pTVar10->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar11;
    *puVar9 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSExpandableArea___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = pSVar16;
    puVar9[4] = pTVar17;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    pSVar16 = (SWidget *)0x7;
    ((FName *)(puVar9 + 5))->ComparisonIndex = (FNameEntryId)local_800.AccessType;
    ((FName *)(puVar9 + 5))->Number = local_800._4_4_;
    puVar9[6] = local_800.Accessor;
  }
  if (((ulonglong)pSVar16 & 4) != 0) {
    pSVar16 = (SWidget *)(ulonglong)((uint)pSVar16 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (((ulonglong)pSVar16 & 2) != 0) {
    pSVar16 = (SWidget *)(ulonglong)((uint)pSVar16 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (((ulonglong)pSVar16 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e8.SharedReferenceCount.ReferenceController);
  }
  if (local_760.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_760.Accessor,&local_760);
  }
  uVar4 = local_800._18_2_;
  uVar2 = _UNK_15090c6d8;
  local_7c4 = 1;
  local_7d8 = ___xmm_3f8000003f800000000000003f800000;
  uStack_7d0 = _UNK_15090c6d8;
  local_800._16_2_ = 2;
  uVar3 = local_800._16_4_;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  local_800.bDestroyed = SUB21(2,0);
  local_800._17_3_ = SUB43(uVar3,1);
  local_7c8 = local_800.bDestroyed;
  uStack_7c7 = local_800._17_3_;
  local_7b0 = 0;
  local_7c0 = (undefined1  [8])0x0;
  FStack_7b8.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar8->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar8->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar2
  ;
  local_800.bDestroyed = SUB21(2,0);
  local_800._17_1_ = SUB21(2 >> 8,0);
  (pFVar8->_ColorAndOpacity).Value.ColorUseRule = local_800.bDestroyed;
  (pFVar8->_ColorAndOpacity).Value.ColorTableId = local_800._17_1_;
  *(undefined2 *)&(pFVar8->_ColorAndOpacity).Value.field_0x12 = uVar4;
  (pFVar8->_ColorAndOpacity).bIsSet = true;
  local_800._16_4_ = uVar3;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c0,
             (FWriteAccessScope *)&local_800);
  if (((int)local_7b0 != 0) && (FStack_7b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7b8,0,0,0x10);
    local_7b0 = local_7b0 & 0xffffffff00000000;
  }
  if (local_800.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_800.Accessor,&local_800);
  }
  if (FStack_7b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7c0);
  FLLMScope::FLLMScope(local_808,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7e8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_800,(FName *)&local_7e8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_760,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x9b,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_800);
  FLLMScope::~FLLMScope(local_808);
  pTVar12 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_760,&local_720,
                       pFVar8);
  pTVar17 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_6b0 = pTVar12->Object;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_800.AccessType = 0;
  local_800._4_4_ = 0;
  local_800.Accessor = (FMRSWRecursiveAccessDetector *)pTVar17;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (local_6a8,(FSharedReferencer<1> *)&local_800.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_800.Accessor);
  pFVar5 = SHorizontalBox::FArguments::operator+(pFVar5,(FSlotArguments *)&local_6b8);
  pFVar6 = ::operator_new(0x58);
  FVar13 = FVar15;
  if (pFVar6 != (FSlot *)0x0) {
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined8 *)&pFVar6->field_0x18 = 0;
    *(undefined8 *)&pFVar6->field_0x20 = 0;
    *(undefined8 *)&pFVar6->field_0x28 = 0;
    *(undefined8 *)&pFVar6->field_0x30 = 0;
    *(undefined8 *)&pFVar6->field_0x38 = 0;
    *(undefined8 *)&pFVar6->field_0x40 = 0;
    *(undefined8 *)&pFVar6->field_0x48 = 0;
    *(undefined8 *)&pFVar6->field_0x50 = 0;
    FVar13 = (FName)SHorizontalBox::FSlot::FSlot(pFVar6);
  }
  local_800._0_8_ = FVar13;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_5d0,(FSlot *)&local_800);
  local_740.Value = 1.0;
  local_740.Getter._16_8_ = 0;
  local_740.bIsSet = true;
  local_740.Getter._0_8_ = 0;
  local_740.Getter._8_8_ = 0;
  FVar13 = (FName)SHorizontalBox::FSlot::FSlotArguments::FillWidth
                            ((FSlotArguments *)local_5d0,&local_740);
  if (local_768 != (undefined4 *)((longlong)FVar13 + 0x50)) {
    *(undefined4 *)((longlong)FVar13 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar13 + 0x54) = 1;
  }
  local_7a0[0].ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_7a8 = param_2->Object;
  if (FVar13 != (FName)0xffffffffffffffb8) {
    FVar15 = FVar13;
  }
  if (local_7a0[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7a0[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7a0[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)((longlong)FVar15 + 8) != &local_7a8) {
    *(SWidget **)((longlong)FVar15 + 8) = local_7a8;
    local_7a8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar15 + 0x10),local_7a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a0[0].ReferenceController);
  pFVar5 = SHorizontalBox::FArguments::operator+(pFVar5,(FSlotArguments *)FVar15);
  FLLMScope::FLLMScope(local_808,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_800.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_800._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_7e8,(FName *)&local_800,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_800,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x95,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_7e8);
  FLLMScope::~FLLMScope(local_808);
  pTVar14 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_800,
                       &local_710,pFVar5);
  __return_storage_ptr__->Object = (SWidget *)pTVar14->Object;
  pTVar1 = (pTVar14->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_710.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_800.Accessor);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_578);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
  if ((void *)local_5a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5c0);
  if (local_5d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_5d0[0])(local_5d0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_720.SharedReferenceCount.ReferenceController._4_4_,
                      local_720.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_760.Accessor);
  SImage::FArguments::~FArguments(&local_2e0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_660);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_688);
  if ((void *)local_688._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_688._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_688);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6a8[0].ReferenceController);
  if (local_6b8 != (undefined8 *)0x0) {
    (**(code **)*local_6b8)(local_6b8,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_4e8._Slots.AllocatorInstance.Data,local_4e8._Slots.ArrayNum);
  if ((FSlotArguments *)local_4e8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_4e8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetSectionScale @ 142947df0

TVector2<double> * __thiscall
SExpandableArea::GetSectionScale(SExpandableArea *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = FCurveSequence::GetLerp(&this->RolloutCurve);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// InvalidateBorderBrush @ 142952e80

void __thiscall SExpandableArea::InvalidateBorderBrush(SExpandableArea *this)

{
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// InvalidateStyle @ 142952f50

void __thiscall SExpandableArea::InvalidateStyle(SExpandableArea *this)

{
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// IsTitleHovered @ 142957020

bool __thiscall SExpandableArea::IsTitleHovered(SExpandableArea *this)

{
  SBorder *pSVar1;
  
  pSVar1 = (this->TitleBorder).Object;
  if ((pSVar1 != (SBorder *)0x0) && (*(char *)((longlong)&pSVar1->_padding_ + 3) != '\0')) {
    return true;
  }
  return false;
}

// OnGetCollapseImage @ 142965b70

FSlateBrush * __thiscall SExpandableArea::OnGetCollapseImage(SExpandableArea *this)

{
  if (this->bAreaCollapsed != false) {
    return this->CollapsedImage;
  }
  return this->ExpandedImage;
}

// OnGetContentVisibility @ 142965b90

EVisibility __thiscall SExpandableArea::OnGetContentVisibility(SExpandableArea *this)

{
  EVisibility EVar1;
  longlong lVar2;
  uchar *in_RDX;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)(this->_padding_ + 0x288))(this,local_18);
  EVar1 = EVisibility::Collapsed;
  if (0.0 < (float)*(double *)(lVar2 + 8)) {
    EVar1 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnHeaderClicked @ 1429660d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SExpandableArea::OnHeaderClicked(SExpandableArea *this,FReply *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x278))();
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnToggleContentVisibility @ 1429828e0

void __thiscall SExpandableArea::OnToggleContentVisibility(SExpandableArea *this)

{
  if (this->bAllowAnimatedTransition != false) {
                    /* WARNING: Could not recover jumptable at 0x0001429828f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 600))(this,this->bAreaCollapsed != false);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142982904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x250))(this,this->bAreaCollapsed != false);
  return;
}

// SetAreaPadding @ 14298e3f0

void __thiscall SExpandableArea::SetAreaPadding(SExpandableArea *this,FMargin *param_1)

{
  SBorder *pSVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FSlotBase *this_00;
  longlong *this_01;
  FDestructionSentinel local_88;
  FMargin local_70;
  undefined1 local_60;
  undefined1 local_58 [8];
  ForAnyElementType FStack_50;
  ulonglong local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  if ((this->BodyBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BodyBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x112,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->BodyBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_70.Left = param_1->Left;
  local_70.Top = param_1->Top;
  local_70.Right = param_1->Right;
  local_70.Bottom = param_1->Bottom;
  pSVar1 = (this->BodyBorder).Object;
  local_60 = 1;
  local_48 = 0;
  this_01 = &pSVar1->_padding_;
  local_40[0x10] = true;
  local_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  local_40._0_8_ = local_70._0_8_;
  local_40._8_8_ = local_70._8_8_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  this_00 = (FSlotBase *)&pSVar1->_padding_;
  if (this_01 == (longlong *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  pSVar4 = FSlotBase::GetOwnerWidget(this_00);
  if (pSVar4 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this_01,pSVar4,(TAttribute<FMargin> *)local_40,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  if ((void *)local_28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_88);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// SetBorderBackgroundColor @ 14298e870

void __thiscall
SExpandableArea::SetBorderBackgroundColor(SExpandableArea *this,FSlateColor *param_1)

{
  SBorder *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((this->WidgetBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x106,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->WidgetBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->WidgetBorder).Object;
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->BorderBackgroundColorAttribute,(SWidget *)pSVar1,
           (TAttribute<FSlateColor> *)&local_40._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetBorderBrush @ 14298e9b0

void __thiscall SExpandableArea::SetBorderBrush(SExpandableArea *this,FSlateBrush *param_1)

{
  SBorder *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  if ((this->WidgetBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0xf6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->WidgetBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->WidgetBorder).Object;
  local_30[8] = true;
  local_10 = 0;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_30._0_8_ = param_1;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->BorderImageAttribute,(SWidget *)pSVar1,
           (TAttribute<FSlateBrush_const_*> *)local_30,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)&local_48);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  return;
}

// SetExpanded @ 142990860

void __thiscall SExpandableArea::SetExpanded(SExpandableArea *this,bool param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bAreaCollapsed == param_1) {
    this->bAreaCollapsed = !param_1;
    if (param_1) {
      FCurveSequence::JumpToEnd(&this->RolloutCurve);
    }
    else {
      FCurveSequence::JumpToStart(&this->RolloutCurve);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnAreaExpansionChanged,&local_28);
    if ((*(int *)&(this->OnAreaExpansionChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnAreaExpansionChanged).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// SetExpanded_Animated @ 1429908f0

void __thiscall SExpandableArea::SetExpanded_Animated(SExpandableArea *this,bool param_1)

{
  FCurveSequence *this_00;
  longlong *plVar1;
  FSlateCurve *pFVar2;
  FCurveSequence *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  bool bVar5;
  FReadAccessScope local_98;
  FCurveSequence local_80;
  
  bVar5 = !param_1;
  if (this->bAreaCollapsed != bVar5) {
    this_00 = &this->RolloutCurve;
    this->bAreaCollapsed = bVar5;
    if (bVar5) {
      pFVar2 = FCurveSequence::GetCurve(this_00,0);
      pFVar3 = FCurveSequence::FCurveSequence(&local_80,0.0,pFVar2->DurationSeconds,CubicIn);
      FCurveSequence::operator=(this_00,pFVar3);
      FCurveSequence::~FCurveSequence(&local_80);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_98);
      FCurveSequence::PlayReverse(this_00,pTVar4,false,0.0,true);
    }
    else {
      pFVar2 = FCurveSequence::GetCurve(this_00,0);
      pFVar3 = FCurveSequence::FCurveSequence(&local_80,0.0,pFVar2->DurationSeconds,CubicOut);
      FCurveSequence::operator=(this_00,pFVar3);
      FCurveSequence::~FCurveSequence(&local_80);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_98);
      FCurveSequence::Play(this_00,pTVar4,false,0.0,true);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_98.DestructionSentinel.Accessor);
    bVar5 = this->bAreaCollapsed;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnAreaExpansionChanged,&local_98);
    if ((*(int *)&(this->OnAreaExpansionChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnAreaExpansionChanged).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))(plVar1,bVar5 == false);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
  }
  return;
}

// SetHeaderPadding @ 142990d20

void __thiscall SExpandableArea::SetHeaderPadding(SExpandableArea *this,FMargin *param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<FMargin> local_38;
  
  if ((this->ExpandingButton).Object == (SButton *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExpandingButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x10c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ExpandingButton).Object == (SButton *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SButton::SetContentPadding((this->ExpandingButton).Object,&local_38);
  return;
}

// SetMaxHeight @ 142994cb0

void __thiscall SExpandableArea::SetMaxHeight(SExpandableArea *this,float param_1)

{
  if (param_1 != this->MaxHeight) {
    this->MaxHeight = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetStyle @ 14299a410

void __thiscall SExpandableArea::SetStyle(SExpandableArea *this,FExpandableAreaStyle *param_1)

{
  this->WidgetStyle = param_1;
  return;
}

