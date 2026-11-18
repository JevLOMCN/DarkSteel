// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// Construct @ 1430778f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDPIScalingTest::Construct(SDPIScalingTest *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SSpinBox<float>,1> *pTVar2;
  FText *pFVar3;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<STextBlock,1> *pTVar5;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SCheckBox,1> *pTVar6;
  FName *pFVar7;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBorder,1> *pTVar8;
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SDPIScaler,1> *pTVar9;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar10;
  longlong lVar11;
  code **ppcVar12;
  undefined1 *puVar13;
  pmf_7ce022c4 *ppVar14;
  pmf_c8be0d04 *ppVar15;
  pmf_74791c82 *ppVar16;
  pmf_9906c656 *ppVar17;
  T0RequiredArgs local_2528;
  T0RequiredArgs local_2527;
  T0RequiredArgs local_2526;
  T0RequiredArgs local_2525;
  T0RequiredArgs local_2524;
  T0RequiredArgs local_2523;
  T0RequiredArgs local_2522 [2];
  ISlateStyle *local_2520;
  longlong *local_2518;
  undefined1 *local_2510;
  FArguments *local_2508;
  FArguments *local_2500;
  FArguments *local_24f8;
  FSlotArguments *local_24f0;
  FSlotArguments *local_24e8;
  FArguments *local_24e0;
  undefined1 *local_24d8;
  FArguments *local_24d0;
  FArguments *local_24c8;
  TAttribute<FText> *local_24c0;
  TAttribute<FText> *local_24b8;
  FArguments *local_24b0;
  FArguments *local_24a8;
  FArguments *local_24a0;
  FArguments *local_2498;
  FSlotArguments *local_2490;
  FSlotArguments *local_2488;
  FArguments *local_2480;
  undefined1 *local_2478;
  undefined1 *local_2470;
  undefined1 *local_2468;
  FSlotArguments *local_2460;
  FArguments *local_2458;
  FName *local_2450;
  FName local_2448;
  code *local_2440;
  FSlateBrush *local_2438;
  TAttribute<FSlateBrush_const_*> *local_2430;
  TAttribute<FSlateBrush_const_*> *local_2428;
  FArguments *local_2420;
  FArguments *local_2418;
  TAttribute<FText> *local_2410;
  TAttribute<FText> *local_2408;
  FArguments *local_2400;
  FArguments *local_23f8;
  FArguments *local_23f0;
  FArguments *local_23e8;
  FArguments *local_23e0;
  FArguments *local_23d8;
  FSlotArguments *local_23d0;
  FSlotArguments *local_23c8;
  FArguments *local_23c0;
  FArguments *local_23b8;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_23b0;
  TSharedRef<SWidget,1> local_23a8;
  code *local_2398;
  undefined4 local_2390;
  code *local_2388;
  undefined4 local_2380;
  code *local_2378;
  undefined4 local_2370;
  code *local_2368;
  undefined4 local_2360;
  code *local_2358;
  undefined4 local_2350;
  TSharedRef<SWidget,1> local_2348;
  TSharedRef<SWidget,1> local_2338;
  TSharedRef<SWidget,1> local_2328;
  TSharedRef<SWidget,1> local_2318;
  TSharedRef<SWidget,1> local_2308;
  TSharedRef<SWidget,1> local_22f8;
  FName local_22e8;
  undefined1 local_22e0 [24];
  pmf_9906c656 local_22c8;
  undefined1 local_22b8 [16];
  pmf_7ce022c4 local_22a8;
  undefined1 local_2298 [16];
  pmf_c8be0d04 local_2288;
  undefined1 local_2278 [16];
  pmf_74791c82 local_2268;
  undefined1 local_2258 [16];
  pmf_9906c656 local_2248;
  TSharedRef<SVerticalBox,1> local_2238;
  TSharedRef<SDPIScaler,1> local_2228;
  TSharedRef<SBorder,1> local_2218;
  TSharedRef<STextBlock,1> local_2208;
  FText local_21f8;
  TSharedRef<SCheckBox,1> local_21e8;
  TSharedRef<STextBlock,1> local_21d8;
  FText local_21c8;
  TSharedRef<SSpinBox<float>,1> local_21b8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_21a8;
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> local_2190;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2178;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2160;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_2148;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2130;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_2118;
  TAttribute<FSlateBrush_const_*> local_2100;
  TAttribute<FText> local_20d8;
  TAttribute<FText> local_20a8;
  FSlotArguments local_2078;
  FSlotArguments local_1f90;
  FSlotArguments local_1ea8;
  FArguments local_1dc0;
  FArguments local_1b98;
  FArguments local_1990;
  FArguments local_15b0;
  FArguments local_11d0;
  FArguments local_c78;
  FArguments local_720;
  undefined8 uStack_18;
  
  uStack_18 = 0x143077906;
  this->DPIScale = __real_3f800000;
  local_2518 = &this->_padding_;
  local_23b0 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                         ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                           *)local_2518,__real_41200000);
  local_24e0 = SVerticalBox::FArguments::FArguments(&local_1b98);
  pFVar1 = SVerticalBox::Slot(&local_1ea8);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_2510 = &pFVar1->field_0x18;
  local_24f0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_2510,__real_40a00000);
  local_2508 = SSpinBox<float>::FArguments::FArguments(&local_720);
  local_2398 = GetDPIScale;
  local_2390 = 0;
  ppcVar12 = &local_2398;
  puVar13 = local_22e0;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_22e0;
  ppVar17 = &local_22c8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar17 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar17 = (pmf_9906c656 *)&ppVar17->field_0x1;
  }
  local_2500 = SSpinBox<float>::FArguments::Value<SDPIScalingTest>(local_2508,this,&local_22c8);
  local_2388 = SetDPIScale;
  local_2380 = 0;
  ppcVar12 = &local_2388;
  puVar13 = local_22b8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_22b8;
  ppVar14 = &local_22a8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_7ce022c4 *)&ppVar14->field_0x1;
  }
  local_24f8 = SSpinBox<float>::FArguments::OnValueChanged<SDPIScalingTest>
                         (local_2500,this,&local_22a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2528);
  this_00 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                      (&local_2118,"SSpinBox<float>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1173,&local_2528);
  pTVar2 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_21b8,local_24f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_2348,pTVar2);
  local_24e8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_24f0,&local_2348);
  local_2480 = SVerticalBox::FArguments::operator+(local_24e0,local_24e8);
  pFVar1 = SVerticalBox::Slot(&local_1f90);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_24d8 = &pFVar1->field_0x18;
  local_2490 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_24d8,__real_40a00000);
  local_24d0 = SCheckBox::FArguments::FArguments(&local_15b0);
  local_2378 = IsFillChecked;
  local_2370 = 0;
  ppcVar12 = &local_2378;
  puVar13 = local_2298;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_2298;
  ppVar15 = &local_2288;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_c8be0d04 *)&ppVar15->field_0x1;
  }
  local_24c8 = SCheckBox::FArguments::IsChecked<SDPIScalingTest>(local_24d0,this,&local_2288);
  local_2368 = OnFillChecked;
  local_2360 = 0;
  ppcVar12 = &local_2368;
  puVar13 = local_2278;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_2278;
  ppVar16 = &local_2268;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar16 = (pmf_74791c82 *)&ppVar16->field_0x1;
  }
  local_24a0 = SCheckBox::FArguments::OnCheckStateChanged<SDPIScalingTest>
                         (local_24c8,this,&local_2268);
  local_24b0 = STextBlock::FArguments::FArguments(&local_c78);
  local_24c0 = &local_20d8;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_21c8,L"STestSuite",L"DpiScalingFillSpaceLabel",L"Fill Space");
  local_24b8 = TAttribute<FText>::TAttribute<FText>(local_24c0,pFVar3);
  local_24a8 = STextBlock::FArguments::Text(local_24b0,local_24b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2527);
  pTVar4 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_2130,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x117e,&local_2527);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_21d8,local_24a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_22f8,pTVar5);
  local_2498 = SCheckBox::FArguments::operator[](local_24a0,&local_22f8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2526);
  this_01 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_2148,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x117a,&local_2526);
  pTVar6 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_21e8,local_2498);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2308,pTVar6);
  local_2488 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2490,&local_2308);
  local_23c0 = SVerticalBox::FArguments::operator+(local_2480,local_2488);
  pFVar1 = SVerticalBox::Slot(&local_2078);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_2478 = &pFVar1->field_0x18;
  pFVar1 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_2478,__real_40a00000);
  local_2470 = &pFVar1->field_0x48;
  pFVar1 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_2470,HAlign_Center);
  local_2468 = &pFVar1->field_0x48;
  local_2460 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_2468,VAlign_Center);
  local_23d0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::Expose
                         ((FSlotArguments *)local_2460,&this->ScalerSlot);
  local_2458 = SDPIScaler::FArguments::FArguments(&local_1dc0);
  local_2358 = GetDPIScale;
  local_2350 = 0;
  ppcVar12 = &local_2358;
  puVar13 = local_2258;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_2258;
  ppVar17 = &local_2248;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar17 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar17 = (pmf_9906c656 *)&ppVar17->field_0x1;
  }
  local_23e0 = SDPIScaler::FArguments::DPIScale<SDPIScalingTest>(local_2458,this,&local_2248);
  local_2420 = SBorder::FArguments::FArguments(&local_1990);
  local_2430 = &local_2100;
  local_2520 = FCoreStyle::Get();
  local_2440 = *(code **)((longlong)*local_2520 + 0x50);
  local_2450 = &local_22e8;
  pFVar7 = ::FName::FName(local_2450,"ToolPanel.GroupBorder");
  local_2448 = *pFVar7;
  local_2438 = (FSlateBrush *)(*local_2440)(local_2520,local_2448,0,0);
  local_2428 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_2430,&local_2438);
  local_2418 = SBorder::FArguments::BorderImage(local_2420,local_2428);
  local_23f0 = SBorder::FArguments::Padding(local_2418,__real_40a00000);
  local_2400 = STextBlock::FArguments::FArguments(&local_11d0);
  local_2410 = &local_20a8;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_21f8,L"STestSuite",L"DpiScalingTextLabel",L"I am DPI scaled!");
  local_2408 = TAttribute<FText>::TAttribute<FText>(local_2410,pFVar3);
  local_23f8 = STextBlock::FArguments::Text(local_2400,local_2408);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2525);
  pTVar4 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_2160,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1192,&local_2525);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_2208,local_23f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_2318,pTVar5);
  local_23e8 = SBorder::FArguments::operator[](local_23f0,&local_2318);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2524);
  this_02 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_2178,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x118e,&local_2524);
  pTVar8 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_2218,local_23e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_2328,pTVar8);
  local_23d8 = SDPIScaler::FArguments::operator[](local_23e0,&local_2328);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2523);
  this_03 = MakeTDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
                      (&local_2190,"SDPIScaler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x118b,&local_2523);
  pTVar9 = TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_2228,local_23d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDPIScaler>(&local_2338,pTVar9);
  local_23c8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_23d0,&local_2338);
  local_23b8 = SVerticalBox::FArguments::operator+(local_23c0,local_23c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_2522);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_21a8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1170,local_2522);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_2238,local_23b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_23a8,pTVar10);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_23b0,&local_23a8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_23a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2238.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_21a8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2338);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2228.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2190._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2328);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2218.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_2178);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2318);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_2208);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_2160);
  FText::~FText(&local_21f8);
  STextBlock::FArguments::~FArguments(&local_11d0);
  SBorder::FArguments::~FArguments(&local_1990);
  TAlwaysValidWidget::~TAlwaysValidWidget(&local_1dc0._Content);
  TAttribute<float>::~TAttribute<float>(&local_1dc0._DPIScale);
  TSlateBaseNamedArgs<SDPIScaler>::~TSlateBaseNamedArgs<SDPIScaler>
            ((TSlateBaseNamedArgs<SDPIScaler> *)&local_1dc0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2078);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2308);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_21e8.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_2148);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_22f8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_21d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_2130);
  FText::~FText(&local_21c8);
  STextBlock::FArguments::~FArguments(&local_c78);
  SCheckBox::FArguments::~FArguments(&local_15b0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1f90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2348);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_21b8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2118._Widget.SharedReferenceCount);
  SSpinBox<float>::FArguments::~FArguments(&local_720);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1ea8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1b98._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_1b98);
  return;
}

// GetDPIScale @ 1430c89e0

float __thiscall SDPIScalingTest::GetDPIScale(SDPIScalingTest *this)

{
  return this->DPIScale;
}

// IsFillChecked @ 1430d3290

ECheckBoxState __thiscall SDPIScalingTest::IsFillChecked(SDPIScalingTest *this)

{
  EHorizontalAlignment EVar1;
  
  EVar1 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::GetHorizontalAlignment
                    ((TAlignmentWidgetSlotMixin<SVerticalBox::FSlot> *)&this->ScalerSlot->field_0x38
                    );
  return EVar1 == HAlign_Fill;
}

// OnFillChecked @ 1430daec0

void __thiscall SDPIScalingTest::OnFillChecked(SDPIScalingTest *this,ECheckBoxState param_1)

{
  EHorizontalAlignment local_28;
  EVerticalAlignment local_24;
  
  if (param_1 == Checked) {
    local_28 = HAlign_Fill;
  }
  else {
    local_28 = HAlign_Center;
  }
  TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::SetHorizontalAlignment
            ((TAlignmentWidgetSlotMixin<SVerticalBox::FSlot> *)&this->ScalerSlot->field_0x38,
             local_28);
  if (param_1 == Checked) {
    local_24 = VAlign_Fill;
  }
  else {
    local_24 = VAlign_Center;
  }
  TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::SetVerticalAlignment
            ((TAlignmentWidgetSlotMixin<SVerticalBox::FSlot> *)&this->ScalerSlot->field_0x38,
             local_24);
  return;
}

// SetDPIScale @ 1430edef0

void __thiscall SDPIScalingTest::SetDPIScale(SDPIScalingTest *this,float param_1)

{
  this->DPIScale = param_1;
  return;
}

