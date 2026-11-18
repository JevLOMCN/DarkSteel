// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// operator() @ 1430640f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SInvalidationTest::Construct'::__l2::<lambda_1>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  FDeprecateVector2DParameter *pFVar1;
  TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SGlobalInvalidationTest,1> *pTVar2;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *this_01;
  T0RequiredArgs local_608;
  T0RequiredArgs local_607 [7];
  FSlateApplication *local_600;
  TVector2<double>_u_0 *local_5f8;
  FDeprecateVector2DParameter *local_5f0;
  FDeprecateVector2DParameter local_5e8;
  FArguments *local_5e0;
  FArguments *local_5d8;
  FArguments *local_5d0;
  FArguments *local_5c8;
  FArguments *local_5c0;
  SWindow *local_5b8;
  TSharedRef<SWindow,1> *local_5b0;
  TSharedRef<SWindow,1> *local_5a8;
  code *local_5a0;
  TSharedRef<SWindow,1> local_598;
  TVector2<double>_u_0 local_588;
  TSharedRef<SWidget,1> local_578;
  FDeprecateVector2DParameter local_568;
  TSharedRef<SGlobalInvalidationTest,1> local_560;
  TSharedRef<SWindow,1> local_550;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_540;
  TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> local_528;
  TSharedRef<SWindow,1> local_510;
  FSlateBaseNamedArgs local_500;
  FArguments local_308;
  
  local_5e0 = SWindow::FArguments::FArguments(&local_308);
  local_5f0 = &local_568;
  local_588._s_0.X = __real_4084000000000000;
  local_588._s_0.Y = __real_407e000000000000;
  local_5f8 = &local_588;
  pFVar1 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_5f0,(TVector2<double> *)&local_5f8->_s_0);
  local_5e8 = *pFVar1;
  local_5d8 = SWindow::FArguments::ClientSize(local_5e0,local_5e8);
  local_5c8 = SWindow::FArguments::AutoCenter(local_5d8,PrimaryWorkArea);
  local_5d0 = SGlobalInvalidationTest::FArguments::FArguments((FArguments *)&local_500);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_608);
  this_00 = MakeTDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>
                      (&local_528,"SGlobalInvalidationTest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1204,&local_608);
  pTVar2 = TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_560,local_5d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGlobalInvalidationTest>(&local_578,pTVar2);
  local_5c0 = SWindow::FArguments::operator[](local_5c8,&local_578);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_607);
  this_01 = MakeTDecl<SWindow,RequiredArgs::T0RequiredArgs>
                      (&local_540,"SWindow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1200,local_607);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=(this_01,&local_598,local_5c0);
  TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(&local_540._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_578);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_560.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_528._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_500);
  SWindow::FArguments::~FArguments(&local_308);
  local_5b8 = TSharedRef<SWindow,1>::operator->(&local_598);
  SWindow::SetAllowFastUpdate(local_5b8,true);
  local_600 = FSlateApplication::Get();
  local_5a0 = *(code **)(*(longlong *)local_600 + 0x10);
  local_5b0 = &local_510;
  local_5a8 = TSharedRef<SWindow,1>::TSharedRef<SWindow,1>(local_5b0,&local_598);
  (*local_5a0)(local_600,&local_550,local_5a8,1);
  TSharedRef<SWindow,1>::~TSharedRef<SWindow,1>(&local_550);
  FReply::Handled(__return_storage_ptr__);
  TSharedRef<SWindow,1>::~TSharedRef<SWindow,1>(&local_598);
  return __return_storage_ptr__;
}

// Construct @ 143083c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SInvalidationTest::Construct(SInvalidationTest *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  FText *pFVar2;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar3;
  TSharedRef<SButton,1> *pTVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<SVerticalBox,1> *pTVar8;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SInvalidationPanel,1> *pTVar10;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar11;
  TSharedRef<SBorder,1> *pTVar12;
  longlong lVar13;
  code **ppcVar14;
  undefined1 *puVar15;
  pmf_795463a7 *ppVar16;
  T0RequiredArgs local_53e8;
  T0RequiredArgs local_53e7;
  T0RequiredArgs local_53e6;
  T0RequiredArgs local_53e5;
  T0RequiredArgs local_53e4;
  T0RequiredArgs local_53e3;
  T0RequiredArgs local_53e2;
  T0RequiredArgs local_53e1;
  T0RequiredArgs local_53e0;
  T0RequiredArgs local_53df;
  T0RequiredArgs local_53de;
  T0RequiredArgs local_53dd;
  T0RequiredArgs local_53dc;
  T0RequiredArgs local_53db;
  T0RequiredArgs local_53da;
  T0RequiredArgs local_53d9;
  T0RequiredArgs local_53d8 [8];
  longlong *local_53d0;
  TAttribute<FText> *local_53c8;
  TAttribute<FText> *local_53c0;
  FArguments *local_53b8;
  <lambda_1> local_53b0;
  <lambda_1> *local_53a8;
  <lambda_1> *local_53a0;
  FArguments *local_5398;
  FArguments *local_5390;
  FSlotArguments *local_5388;
  FSlotArguments *local_5380;
  FArguments *local_5378;
  TAttribute<FText> *local_5370;
  TAttribute<FText> *local_5368;
  FArguments *local_5360;
  FArguments *local_5358;
  FSlotArguments *local_5350;
  FSlotArguments *local_5348;
  FArguments *local_5340;
  TAttribute<EVisibility> *local_5338;
  TAttribute<EVisibility> *local_5330;
  FArguments *local_5328;
  TAttribute<FText> *local_5320;
  TAttribute<FText> *local_5318;
  FArguments *local_5310;
  FArguments *local_5308;
  FSlotArguments *local_5300;
  FSlotArguments *local_52f8;
  FArguments *local_52f0;
  FArguments *local_52e8;
  FArguments *local_52e0;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *local_52d8;
  FArguments *local_52d0;
  FSlotArguments *local_52c8;
  FSlotArguments *local_52c0;
  FArguments *local_52b8;
  TAttribute<FText> *local_52b0;
  TAttribute<FText> *local_52a8;
  FArguments *local_52a0;
  FArguments *local_5298;
  FArguments *local_5290;
  FSlotArguments *local_5288;
  FSlotArguments *local_5280;
  FArguments *local_5278;
  TAttribute<EVisibility> *local_5270;
  TAttribute<EVisibility> *local_5268;
  FArguments *local_5260;
  TAttribute<FText> *local_5258;
  TAttribute<FText> *local_5250;
  FArguments *local_5248;
  FArguments *local_5240;
  FSlotArguments *local_5238;
  FSlotArguments *local_5230;
  FArguments *local_5228;
  FArguments *local_5220;
  TAttribute<FText> *local_5218;
  TAttribute<FText> *local_5210;
  FArguments *local_5208;
  FArguments *local_5200;
  FArguments *local_51f8;
  FArguments *local_51f0;
  FSlotArguments *local_51e8;
  FSlotArguments *local_51e0;
  FArguments *local_51d8;
  FArguments *local_51d0;
  FArguments *local_51c8;
  TAttribute<FText> *local_51c0;
  TAttribute<FText> *local_51b8;
  FArguments *local_51b0;
  FArguments *local_51a8;
  FArguments *local_51a0;
  FArguments *local_5198;
  FSlotArguments *local_5190;
  FSlotArguments *local_5188;
  FArguments *local_5180;
  FArguments *local_5178;
  FArguments *local_5170;
  FArguments *local_5168;
  FSlotArguments *local_5160;
  FSlotArguments *local_5158;
  FArguments *local_5150;
  TAttribute<FText> *local_5148;
  TAttribute<FText> *local_5140;
  FArguments *local_5138;
  FArguments *local_5130;
  FSlotArguments *local_5128;
  FSlotArguments *local_5120;
  FArguments *local_5118;
  FArguments *local_5110;
  FArguments *local_5108;
  FArguments *local_5100;
  FSlotArguments *local_50f8;
  FSlotArguments *local_50f0;
  FArguments *local_50e8;
  FArguments *local_50e0;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_50d8;
  code *local_50d0;
  undefined4 local_50c8;
  TSharedRef<SWidget,1> local_50c0;
  TSharedRef<SWidget,1> local_50b0;
  TSharedRef<SWidget,1> local_50a0;
  TSharedRef<SWidget,1> local_5090;
  TSharedRef<SWidget,1> local_5080;
  TSharedRef<SWidget,1> local_5070;
  TSharedRef<SWidget,1> local_5060;
  TSharedRef<SWidget,1> local_5050;
  TSharedRef<SWidget,1> local_5040;
  TSharedRef<SWidget,1> local_5030;
  TSharedRef<SWidget,1> local_5020;
  TSharedRef<SWidget,1> local_5010;
  TSharedRef<SWidget,1> local_5000;
  TSharedRef<SWidget,1> local_4ff0;
  TSharedRef<SWidget,1> local_4fe0;
  TSharedRef<SWidget,1> local_4fd0;
  TSharedRef<SWidget,1> local_4fc0;
  undefined1 local_4fb0 [24];
  pmf_795463a7 local_4f98;
  TSharedRef<SVerticalBox,1> local_4f88;
  TSharedRef<SInvalidationPanel,1> local_4f78;
  TSharedRef<SVerticalBox,1> local_4f68;
  TSharedRef<STextBlock,1> local_4f58;
  FText local_4f48;
  TSharedRef<SInvalidationPanel,1> local_4f38;
  TSharedRef<SVerticalBox,1> local_4f28;
  TSharedRef<SBorder,1> local_4f18;
  TSharedRef<SButton,1> local_4f08;
  FText local_4ef8;
  TSharedRef<SBorder,1> local_4ee8;
  TSharedRef<SButton,1> local_4ed8;
  FText local_4ec8;
  TSharedRef<STextBlock,1> local_4eb8;
  FText local_4ea8;
  TSharedRef<SButton,1> local_4e98;
  FText local_4e88;
  TSharedRef<SInvalidationPanel,1> local_4e78;
  TSharedRef<SVerticalBox,1> local_4e68;
  TSharedRef<STextBlock,1> local_4e58;
  FText local_4e48;
  TSharedRef<STextBlock,1> local_4e38;
  FText local_4e28;
  TSharedRef<SButton,1> local_4e18;
  FText local_4e08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4df8;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> local_4de0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4dc8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4db0;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> local_4d98;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4d80;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4d68;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4d50;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4d38;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4d20;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4d08;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4cf0;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> local_4cd8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4cc0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4ca8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4c90;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4c78;
  TAttribute<EVisibility> local_4c60;
  TAttribute<EVisibility> local_4c40;
  TAttribute<FText> local_4c20;
  TAttribute<FText> local_4bf0;
  TAttribute<FText> local_4bc0;
  TAttribute<FText> local_4b90;
  TAttribute<FText> local_4b60;
  TAttribute<FText> local_4b30;
  TAttribute<FText> local_4b00;
  TAttribute<FText> local_4ad0;
  FSlotArguments local_4aa0;
  FSlotArguments local_49b8;
  FSlotArguments local_48d0;
  FSlotArguments local_47e8;
  FSlotArguments local_4700;
  FSlotArguments local_4618;
  FSlotArguments local_4530;
  FSlotArguments local_4448;
  FSlotArguments local_4360;
  FSlotArguments local_4278;
  FSlotArguments local_4190;
  FArguments local_40a8;
  FArguments local_3ea0;
  FArguments local_3c98;
  FArguments local_3a90;
  FArguments local_3888;
  FArguments local_3670;
  FArguments local_3458;
  FArguments local_3240;
  FArguments local_2e60;
  FArguments local_2a80;
  FArguments local_2540;
  FArguments local_2000;
  FArguments local_1ac0;
  FArguments local_1580;
  FArguments local_1028;
  FArguments local_ad0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x143083ca6;
  local_53d0 = &this->_padding_;
  local_50d8 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                         ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                           *)local_53d0,__real_41200000);
  local_5378 = SVerticalBox::FArguments::FArguments(&local_3a90);
  pFVar1 = SVerticalBox::Slot(&local_4190);
  local_5388 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_53b8 = SButton::FArguments::FArguments(&local_1ac0);
  local_53c8 = &local_4c20;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4e08,L"STestSuite",L"OpenSlateGlobalInvalidationTestWindow",
                      L"Open Slate Global Invalidation Test Window");
  local_53c0 = TAttribute<FText>::TAttribute<FText>(local_53c8,pFVar2);
  local_5398 = SButton::FArguments::Text(local_53b8,local_53c0);
  local_53a8 = &local_53b0;
  local_53b0.__this = this;
  local_53a0 = local_53a8;
  local_5390 = SButton::FArguments::
               OnClicked_Lambda<_SInvalidationTest::Construct_::__l2::<lambda_1>_>
                         (local_5398,local_53a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e8);
  pTVar3 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4c78,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11fc,&local_53e8);
  pTVar4 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_4e18,local_5390);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_4fc0,pTVar4);
  local_5380 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5388,&local_4fc0);
  local_5340 = SVerticalBox::FArguments::operator+(local_5378,local_5380);
  pFVar1 = SVerticalBox::Slot(&local_4278);
  local_5350 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5360 = STextBlock::FArguments::FArguments(&local_578);
  local_5370 = &local_4bf0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4e28,L"STestSuite",L"Invalidation Panels",L"INVALIDATION PANELS");
  local_5368 = TAttribute<FText>::TAttribute<FText>(local_5370,pFVar2);
  local_5358 = STextBlock::FArguments::Text(local_5360,local_5368);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e7);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_4c90,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1211,&local_53e7);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_4e38,local_5358);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_4fd0,pTVar6);
  local_5348 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5350,&local_4fd0);
  local_52b8 = SVerticalBox::FArguments::operator+(local_5340,local_5348);
  pFVar1 = SVerticalBox::Slot(&local_4360);
  local_52c8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5328 = SInvalidationPanel::FArguments::FArguments(&local_3458);
  local_5338 = &local_4c60;
  local_5330 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                         (local_5338,&EVisibility::Visible);
  local_52e0 = TSlateBaseNamedArgs<SInvalidationPanel>::Visibility
                         ((TSlateBaseNamedArgs<SInvalidationPanel> *)local_5328,local_5330);
  local_52f0 = SVerticalBox::FArguments::FArguments(&local_3c98);
  pFVar1 = SVerticalBox::Slot(&local_4448);
  local_5300 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5310 = STextBlock::FArguments::FArguments(&local_ad0);
  local_5320 = &local_4bc0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4e48,L"STestSuite",L"StaticText",L"This text is static and cached.");
  local_5318 = TAttribute<FText>::TAttribute<FText>(local_5320,pFVar2);
  local_5308 = STextBlock::FArguments::Text(local_5310,local_5318);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e6);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_4ca8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1220,&local_53e6);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_4e58,local_5308);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_4fe0,pTVar6);
  local_52f8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5300,&local_4fe0);
  local_52e8 = SVerticalBox::FArguments::operator+(local_52f0,local_52f8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e5);
  pTVar7 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_4cc0,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x121b,&local_53e5);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_4e68,local_52e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_4ff0,pTVar8);
  local_52d0 = SInvalidationPanel::FArguments::operator[](local_52e0,&local_4ff0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e4);
  local_52d8 = MakeTDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
                         (&local_4cd8,"SInvalidationPanel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x1218,&local_53e4);
  pTVar9 = TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::Expose<SInvalidationPanel>
                     (local_52d8,&this->CachePanel1);
  pTVar10 = TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_4e78,local_52d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInvalidationPanel>(&local_5000,pTVar10);
  local_52c0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_52c8,&local_5000);
  local_5278 = SVerticalBox::FArguments::operator+(local_52b8,local_52c0);
  pFVar1 = SVerticalBox::Slot(&local_4530);
  local_5288 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_52a0 = SButton::FArguments::FArguments(&local_2000);
  local_52b0 = &local_4b90;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4e88,L"STestSuite",L"InvalidateManually",L"Manually Invalidate");
  local_52a8 = TAttribute<FText>::TAttribute<FText>(local_52b0,pFVar2);
  local_5298 = SButton::FArguments::Text(local_52a0,local_52a8);
  local_50d0 = ManuallyInvalidatePanel1;
  local_50c8 = 0;
  ppcVar14 = &local_50d0;
  puVar15 = local_4fb0;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *(undefined1 *)ppcVar14;
    ppcVar14 = (code **)((longlong)ppcVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_4fb0;
  ppVar16 = &local_4f98;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined1 *)ppVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    ppVar16 = (pmf_795463a7 *)&ppVar16->field_0x1;
  }
  local_5290 = SButton::FArguments::OnClicked<SInvalidationTest>(local_5298,this,&local_4f98);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e3);
  pTVar3 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4cf0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1229,&local_53e3);
  pTVar4 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_4e98,local_5290);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5010,pTVar4);
  local_5280 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5288,&local_5010);
  local_5150 = SVerticalBox::FArguments::operator+(local_5278,local_5280);
  pFVar1 = SVerticalBox::Slot(&local_4618);
  local_5160 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5260 = SInvalidationPanel::FArguments::FArguments(&local_3670);
  local_5270 = &local_4c40;
  local_5268 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                         (local_5270,&EVisibility::Visible);
  local_5170 = TSlateBaseNamedArgs<SInvalidationPanel>::Visibility
                         ((TSlateBaseNamedArgs<SInvalidationPanel> *)local_5260,local_5268);
  local_5228 = SVerticalBox::FArguments::FArguments(&local_3ea0);
  pFVar1 = SVerticalBox::Slot(&local_4700);
  local_5238 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5248 = STextBlock::FArguments::FArguments(&local_1028);
  local_5258 = &local_4b60;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4ea8,L"STestSuite",L"StaticTextSupportInput",L"Support Input");
  local_5250 = TAttribute<FText>::TAttribute<FText>(local_5258,pFVar2);
  local_5240 = STextBlock::FArguments::Text(local_5248,local_5250);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e2);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_4d08,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1239,&local_53e2);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_4eb8,local_5240);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5020,pTVar6);
  local_5230 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5238,&local_5020);
  local_51d8 = SVerticalBox::FArguments::operator+(local_5228,local_5230);
  pFVar1 = SVerticalBox::Slot(&local_47e8);
  local_51e8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5220 = SBorder::FArguments::FArguments(&local_2e60);
  local_51f8 = SBorder::FArguments::Padding(local_5220,__real_41200000);
  local_5208 = SButton::FArguments::FArguments(&local_2540);
  local_5218 = &local_4b30;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4ec8,L"STestSuite",L"CachedClickable",L"I\'m Cached - But Clickable");
  local_5210 = TAttribute<FText>::TAttribute<FText>(local_5218,pFVar2);
  local_5200 = SButton::FArguments::Text(local_5208,local_5210);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e1);
  pTVar3 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4d20,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1243,&local_53e1);
  pTVar4 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_4ed8,local_5200);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5030,pTVar4);
  local_51f0 = SBorder::FArguments::operator[](local_51f8,&local_5030);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53e0);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_4d38,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1240,&local_53e0);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_4ee8,local_51f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5040,pTVar12);
  local_51e0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_51e8,&local_5040);
  local_5180 = SVerticalBox::FArguments::operator+(local_51d8,local_51e0);
  pFVar1 = SVerticalBox::Slot(&local_48d0);
  local_5190 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_51d0 = SBorder::FArguments::FArguments(&local_3240);
  local_51a0 = SBorder::FArguments::Padding(local_51d0,__real_41200000);
  local_51c8 = SButton::FArguments::FArguments(&local_2a80);
  local_51b0 = TSlateBaseNamedArgs<SButton>::ForceVolatile
                         ((TSlateBaseNamedArgs<SButton> *)local_51c8,true);
  local_51c0 = &local_4b00;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4ef8,L"STestSuite",L"VolatileClickable",L"Volatile - But Clickable");
  local_51b8 = TAttribute<FText>::TAttribute<FText>(local_51c0,pFVar2);
  local_51a8 = SButton::FArguments::Text(local_51b0,local_51b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53df);
  pTVar3 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4d50,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x124e,&local_53df);
  pTVar4 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_4f08,local_51a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5050,pTVar4);
  local_5198 = SBorder::FArguments::operator[](local_51a0,&local_5050);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53de);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_4d68,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x124b,&local_53de);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_4f18,local_5198);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5060,pTVar12);
  local_5188 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5190,&local_5060);
  local_5178 = SVerticalBox::FArguments::operator+(local_5180,local_5188);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53dd);
  pTVar7 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_4d80,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1234,&local_53dd);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_4f28,local_5178);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_5070,pTVar8);
  local_5168 = SInvalidationPanel::FArguments::operator[](local_5170,&local_5070);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53dc);
  pTVar9 = MakeTDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
                     (&local_4d98,"SInvalidationPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1231,&local_53dc);
  pTVar10 = TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_4f38,local_5168);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInvalidationPanel>(&local_5080,pTVar10);
  local_5158 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5160,&local_5080);
  local_50e8 = SVerticalBox::FArguments::operator+(local_5150,local_5158);
  pFVar1 = SVerticalBox::Slot(&local_49b8);
  local_50f8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5108 = SInvalidationPanel::FArguments::FArguments(&local_3888);
  local_5118 = SVerticalBox::FArguments::FArguments(&local_40a8);
  pFVar1 = SVerticalBox::Slot(&local_4aa0);
  local_5128 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5138 = STextBlock::FArguments::FArguments(&local_1580);
  local_5148 = &local_4ad0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_4f48,L"STestSuite",L"RelativeCacheMessage",
                      L"I cache relative transforms.  Moving the window has no effect on me, woo!");
  local_5140 = TAttribute<FText>::TAttribute<FText>(local_5148,pFVar2);
  local_5130 = STextBlock::FArguments::Text(local_5138,local_5140);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53db);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_4db0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1260,&local_53db);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_4f58,local_5130);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5090,pTVar6);
  local_5120 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5128,&local_5090);
  local_5110 = SVerticalBox::FArguments::operator+(local_5118,local_5120);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53da);
  pTVar7 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_4dc8,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x125b,&local_53da);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_4f68,local_5110);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_50a0,pTVar8);
  local_5100 = SInvalidationPanel::FArguments::operator[](local_5108,&local_50a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_53d9);
  pTVar9 = MakeTDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
                     (&local_4de0,"SInvalidationPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1259,&local_53d9);
  pTVar10 = TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_4f78,local_5100);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInvalidationPanel>(&local_50b0,pTVar10);
  local_50f0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_50f8,&local_50b0);
  local_50e0 = SVerticalBox::FArguments::operator+(local_50e8,local_50f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_53d8);
  pTVar7 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_4df8,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11f7,local_53d8);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_4f88,local_50e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_50c0,pTVar8);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_50d8,&local_50c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_50c0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f88.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4df8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_50b0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f78.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4de0._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_50a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f68.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4dc8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5090);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_4f58);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4db0);
  FText::~FText(&local_4f48);
  STextBlock::FArguments::~FArguments(&local_1580);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4aa0);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_40a8._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_40a8);
  SInvalidationPanel::FArguments::~FArguments(&local_3888);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_49b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5080);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f38.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4d98._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5070);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f28.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4d80._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5060);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f18.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_4d68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5050);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f08.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4d50._Widget.SharedReferenceCount);
  FText::~FText(&local_4ef8);
  SButton::FArguments::~FArguments(&local_2a80);
  SBorder::FArguments::~FArguments(&local_3240);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_48d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5040);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4ee8.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_4d38);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5030);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4ed8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4d20._Widget.SharedReferenceCount);
  FText::~FText(&local_4ec8);
  SButton::FArguments::~FArguments(&local_2540);
  SBorder::FArguments::~FArguments(&local_2e60);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_47e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5020);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_4eb8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4d08);
  FText::~FText(&local_4ea8);
  STextBlock::FArguments::~FArguments(&local_1028);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4700);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3ea0._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_3ea0);
  SInvalidationPanel::FArguments::~FArguments(&local_3670);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4618);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5010);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4e98.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4cf0._Widget.SharedReferenceCount);
  FText::~FText(&local_4e88);
  SButton::FArguments::~FArguments(&local_2000);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4530);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5000);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4e78.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4cd8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4ff0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4e68.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4cc0._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4fe0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_4e58);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4ca8);
  FText::~FText(&local_4e48);
  STextBlock::FArguments::~FArguments(&local_ad0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4448);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3c98._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_3c98);
  SInvalidationPanel::FArguments::~FArguments(&local_3458);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4360);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4fd0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_4e38);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4c90);
  FText::~FText(&local_4e28);
  STextBlock::FArguments::~FArguments(&local_578);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4278);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4fc0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4e18.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4c78._Widget.SharedReferenceCount);
  FText::~FText(&local_4e08);
  SButton::FArguments::~FArguments(&local_1ac0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4190);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3a90._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_3a90);
  return;
}

// ManuallyInvalidatePanel1 @ 1430d7b50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInvalidationTest::ManuallyInvalidatePanel1(SInvalidationTest *this,FReply *__return_storage_ptr__)

{
  SInvalidationPanel *pSVar1;
  
  pSVar1 = TSharedPtr<SInvalidationPanel,1>::operator->(&this->CachePanel1);
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&pSVar1->_padding_,(SWidget *)0x0);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

