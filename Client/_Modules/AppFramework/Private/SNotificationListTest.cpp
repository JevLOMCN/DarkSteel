// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 19

// Construct @ 1430887e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationListTest::Construct(SNotificationListTest *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  FSlotArguments *pFVar2;
  FText *pFVar3;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<SButton,1> *pTVar5;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar6;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SCheckBox,1> *pTVar10;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar11;
  FSlotArguments *pFVar12;
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SNotificationList,1> *pTVar13;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SOverlay,1> *pTVar14;
  longlong lVar15;
  code **ppcVar16;
  undefined1 *puVar17;
  pmf_3900d752 *ppVar18;
  pmf_74f1e6c5 *ppVar19;
  pmf_2bfa4461 *ppVar20;
  T0RequiredArgs local_6418;
  T0RequiredArgs local_6417;
  T0RequiredArgs local_6416;
  T0RequiredArgs local_6415;
  T0RequiredArgs local_6414;
  T0RequiredArgs local_6413;
  T0RequiredArgs local_6412;
  T0RequiredArgs local_6411;
  T0RequiredArgs local_6410;
  T0RequiredArgs local_640f;
  T0RequiredArgs local_640e;
  T0RequiredArgs local_640d;
  T0RequiredArgs local_640c;
  T0RequiredArgs local_640b;
  T0RequiredArgs local_640a;
  T0RequiredArgs local_6409;
  T0RequiredArgs local_6408;
  T0RequiredArgs local_6407 [7];
  FArguments *local_6400;
  TAttribute<FText> *local_63f8;
  TAttribute<FText> *local_63f0;
  FArguments *local_63e8;
  FArguments *local_63e0;
  FSlotArguments *local_63d8;
  FSlotArguments *local_63d0;
  FArguments *local_63c8;
  FArguments *local_63c0;
  TAttribute<FText> *local_63b8;
  TAttribute<FText> *local_63b0;
  FArguments *local_63a8;
  FArguments *local_63a0;
  FSlotArguments *local_6398;
  FSlotArguments *local_6390;
  FArguments *local_6388;
  FArguments *local_6380;
  TAttribute<FText> *local_6378;
  TAttribute<FText> *local_6370;
  FArguments *local_6368;
  FArguments *local_6360;
  FSlotArguments *local_6358;
  FSlotArguments *local_6350;
  FArguments *local_6348;
  FArguments *local_6340;
  TAttribute<FText> *local_6338;
  TAttribute<FText> *local_6330;
  FArguments *local_6328;
  FArguments *local_6320;
  FSlotArguments *local_6318;
  FSlotArguments *local_6310;
  FArguments *local_6308;
  FArguments *local_6300;
  TAttribute<FText> *local_62f8;
  TAttribute<FText> *local_62f0;
  FArguments *local_62e8;
  FArguments *local_62e0;
  FSlotArguments *local_62d8;
  FSlotArguments *local_62d0;
  FArguments *local_62c8;
  FArguments *local_62c0;
  TAttribute<FText> *local_62b8;
  TAttribute<FText> *local_62b0;
  FArguments *local_62a8;
  FArguments *local_62a0;
  FSlotArguments *local_6298;
  FSlotArguments *local_6290;
  FArguments *local_6288;
  FArguments *local_6280;
  FSlotArguments *local_6278;
  FSlotArguments *local_6270;
  FArguments *local_6268;
  FArguments *local_6260;
  FArguments *local_6258;
  TAttribute<FText> *local_6250;
  TAttribute<FText> *local_6248;
  FArguments *local_6240;
  FArguments *local_6238;
  FArguments *local_6230;
  FArguments *local_6228;
  FSlotArguments *local_6220;
  FSlotArguments *local_6218;
  FArguments *local_6210;
  FArguments *local_6208;
  FArguments *local_6200;
  TAttribute<FText> *local_61f8;
  TAttribute<FText> *local_61f0;
  FArguments *local_61e8;
  FArguments *local_61e0;
  FArguments *local_61d8;
  FArguments *local_61d0;
  FSlotArguments *local_61c8;
  FSlotArguments *local_61c0;
  FArguments *local_61b8;
  FArguments *local_61b0;
  FArguments *local_61a8;
  TAttribute<FText> *local_61a0;
  TAttribute<FText> *local_6198;
  FArguments *local_6190;
  FArguments *local_6188;
  FArguments *local_6180;
  FArguments *local_6178;
  FSlotArguments *local_6170;
  FSlotArguments *local_6168;
  FArguments *local_6160;
  FArguments *local_6158;
  FArguments *local_6150;
  TAttribute<FText> *local_6148;
  TAttribute<FText> *local_6140;
  FArguments *local_6138;
  FArguments *local_6130;
  FArguments *local_6128;
  FArguments *local_6120;
  FSlotArguments *local_6118;
  FSlotArguments *local_6110;
  FArguments *local_6108;
  FArguments *local_6100;
  FSlotArguments *local_60f8;
  FSlotArguments *local_60f0;
  FArguments *local_60e8;
  longlong *local_60e0;
  longlong *local_60d8;
  longlong *local_60d0;
  TAttribute<EVisibility> *local_60c8;
  TAttribute<EVisibility> *local_60c0;
  TSlateBaseNamedArgs<SNotificationList> *local_60b8;
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> *local_60b0;
  FArguments *local_60a8;
  FSlotArguments *local_60a0;
  FSlotArguments *local_6098;
  FArguments *local_6090;
  FArguments *local_6088;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_6080;
  code *local_6078;
  undefined4 local_6070;
  code *local_6068;
  undefined4 local_6060;
  code *local_6058;
  undefined4 local_6050;
  code *local_6048;
  undefined4 local_6040;
  code *local_6038;
  undefined4 local_6030;
  code *local_6028;
  undefined4 local_6020;
  code *local_6018;
  undefined4 local_6010;
  code *local_6008;
  undefined4 local_6000;
  code *local_5ff8;
  undefined4 local_5ff0;
  code *local_5fe8;
  undefined4 local_5fe0;
  code *local_5fd8;
  undefined4 local_5fd0;
  code *local_5fc8;
  undefined4 local_5fc0;
  code *local_5fb8;
  undefined4 local_5fb0;
  code *local_5fa8;
  undefined4 local_5fa0;
  TSharedRef<SWidget,1> local_5f98;
  TSharedRef<SWidget,1> local_5f88;
  TSharedRef<SWidget,1> local_5f78;
  TSharedRef<SWidget,1> local_5f68;
  TSharedRef<SWidget,1> local_5f58;
  TSharedRef<SWidget,1> local_5f48;
  TSharedRef<SWidget,1> local_5f38;
  TSharedRef<SWidget,1> local_5f28;
  TSharedRef<SWidget,1> local_5f18;
  TSharedRef<SWidget,1> local_5f08;
  TSharedRef<SWidget,1> local_5ef8;
  TSharedRef<SWidget,1> local_5ee8;
  TSharedRef<SWidget,1> local_5ed8;
  TSharedRef<SWidget,1> local_5ec8;
  TSharedRef<SWidget,1> local_5eb8;
  TSharedRef<SWidget,1> local_5ea8;
  TSharedRef<SWidget,1> local_5e98;
  TSharedRef<SWidget,1> local_5e88;
  undefined1 local_5e78 [16];
  pmf_3900d752 local_5e68;
  undefined1 local_5e58 [16];
  pmf_3900d752 local_5e48;
  undefined1 local_5e38 [16];
  pmf_3900d752 local_5e28;
  undefined1 local_5e18 [16];
  pmf_3900d752 local_5e08;
  undefined1 local_5df8 [16];
  pmf_3900d752 local_5de8;
  undefined1 local_5dd8 [16];
  pmf_3900d752 local_5dc8;
  undefined1 local_5db8 [16];
  pmf_74f1e6c5 local_5da8;
  undefined1 local_5d98 [16];
  pmf_2bfa4461 local_5d88;
  undefined1 local_5d78 [16];
  pmf_74f1e6c5 local_5d68;
  undefined1 local_5d58 [16];
  pmf_2bfa4461 local_5d48;
  undefined1 local_5d38 [16];
  pmf_74f1e6c5 local_5d28;
  undefined1 local_5d18 [16];
  pmf_2bfa4461 local_5d08;
  undefined1 local_5cf8 [16];
  pmf_74f1e6c5 local_5ce8;
  undefined1 local_5cd8 [16];
  pmf_2bfa4461 local_5cc8;
  TSharedRef<SOverlay,1> local_5cb8;
  TSharedRef<SNotificationList,1> local_5ca8;
  TSharedRef<SVerticalBox,1> local_5c98;
  TSharedRef<SCheckBox,1> local_5c88;
  TSharedRef<STextBlock,1> local_5c78;
  FText local_5c68;
  TSharedRef<SCheckBox,1> local_5c58;
  TSharedRef<STextBlock,1> local_5c48;
  FText local_5c38;
  TSharedRef<SCheckBox,1> local_5c28;
  TSharedRef<STextBlock,1> local_5c18;
  FText local_5c08;
  TSharedRef<SCheckBox,1> local_5bf8;
  TSharedRef<STextBlock,1> local_5be8;
  FText local_5bd8;
  TSharedRef<SHorizontalBox,1> local_5bc8;
  TSharedRef<SButton,1> local_5bb8;
  FText local_5ba8;
  TSharedRef<SButton,1> local_5b98;
  FText local_5b88;
  TSharedRef<SButton,1> local_5b78;
  FText local_5b68;
  TSharedRef<SButton,1> local_5b58;
  FText local_5b48;
  TSharedRef<SButton,1> local_5b38;
  FText local_5b28;
  TSharedRef<SButton,1> local_5b18;
  FText local_5b08;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_5af8;
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> local_5ae0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5ac8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5ab0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a98;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5a80;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a68;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5a50;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a38;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5a20;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a08;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_59f0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_59d8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_59c0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_59a8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5990;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5978;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5960;
  TAttribute<EVisibility> local_5948;
  TAttribute<FText> local_5928;
  TAttribute<FText> local_58f8;
  TAttribute<FText> local_58c8;
  TAttribute<FText> local_5898;
  TAttribute<FText> local_5868;
  TAttribute<FText> local_5838;
  TAttribute<FText> local_5808;
  TAttribute<FText> local_57d8;
  TAttribute<FText> local_57a8;
  TAttribute<FText> local_5778;
  FSlotArguments local_5748;
  FSlotArguments local_56e8;
  FSlotArguments local_5688;
  FSlotArguments local_55a0;
  FSlotArguments local_54b8;
  FSlotArguments local_53d0;
  FSlotArguments local_52e8;
  FSlotArguments local_5200;
  FSlotArguments local_5118;
  FSlotArguments local_5030;
  FSlotArguments local_4f48;
  FSlotArguments local_4e60;
  FSlotArguments local_4d78;
  FArguments local_4c90;
  FArguments local_4a88;
  FArguments local_4890;
  FArguments local_4688;
  FArguments local_4480;
  FArguments local_40a0;
  FArguments local_3cc0;
  FArguments local_38e0;
  FArguments local_3500;
  FArguments local_2fc0;
  FArguments local_2a80;
  FArguments local_2540;
  FArguments local_2000;
  FArguments local_1ac0;
  FArguments local_1580;
  FArguments local_1028;
  FArguments local_ad0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430887f6;
  this->bUseLargeFont = true;
  this->bAddDummyButtons = false;
  this->bAddDummyCheckBox = false;
  this->bAddDummyHyperlink = false;
  this->DummyCheckBoxState = Unchecked;
  local_6080 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_60e8 = SOverlay::FArguments::FArguments(&local_4688);
  local_60f8 = SOverlay::Slot(&local_56e8,0);
  local_6268 = SVerticalBox::FArguments::FArguments(&local_4890);
  pFVar1 = SVerticalBox::Slot(&local_4d78);
  local_6278 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_63c8 = SHorizontalBox::FArguments::FArguments(&local_4c90);
  pFVar2 = SHorizontalBox::Slot(&local_4e60);
  local_63d8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_6400 = SButton::FArguments::FArguments(&local_1ac0);
  local_6078 = SpawnNotification1;
  local_6070 = 0;
  ppcVar16 = &local_6078;
  puVar17 = local_5e78;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5e78;
  ppVar18 = &local_5e68;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_3900d752 *)&ppVar18->field_0x1;
  }
  local_63e8 = SButton::FArguments::OnClicked<SNotificationListTest>(local_6400,this,&local_5e68);
  local_63f8 = &local_5928;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5b08,L"STestSuite",L"NotificationListTest-SpawnNotification1Label",
                      L"Spawn Notification1");
  local_63f0 = TAttribute<FText>::TAttribute<FText>(local_63f8,pFVar3);
  local_63e0 = SButton::FArguments::Text(local_63e8,local_63f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6418);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_5960,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1349,&local_6418);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5b18,local_63e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5e88,pTVar5);
  local_63d0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_63d8,&local_5e88);
  local_6388 = SHorizontalBox::FArguments::operator+(local_63c8,local_63d0);
  pFVar2 = SHorizontalBox::Slot(&local_4f48);
  local_6398 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_63c0 = SButton::FArguments::FArguments(&local_2000);
  local_6068 = SpawnNotification2;
  local_6060 = 0;
  ppcVar16 = &local_6068;
  puVar17 = local_5e58;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5e58;
  ppVar18 = &local_5e48;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_3900d752 *)&ppVar18->field_0x1;
  }
  local_63a8 = SButton::FArguments::OnClicked<SNotificationListTest>(local_63c0,this,&local_5e48);
  local_63b8 = &local_58f8;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5b28,L"STestSuite",L"NotificationListTest-SpawnNotification2Label",
                      L"Spawn Notification2");
  local_63b0 = TAttribute<FText>::TAttribute<FText>(local_63b8,pFVar3);
  local_63a0 = SButton::FArguments::Text(local_63a8,local_63b0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6417);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_5978,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1350,&local_6417);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5b38,local_63a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5e98,pTVar5);
  local_6390 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6398,&local_5e98);
  local_6348 = SHorizontalBox::FArguments::operator+(local_6388,local_6390);
  pFVar2 = SHorizontalBox::Slot(&local_5030);
  local_6358 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_6380 = SButton::FArguments::FArguments(&local_2540);
  local_6058 = SpawnCustomNotification;
  local_6050 = 0;
  ppcVar16 = &local_6058;
  puVar17 = local_5e38;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5e38;
  ppVar18 = &local_5e28;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_3900d752 *)&ppVar18->field_0x1;
  }
  local_6368 = SButton::FArguments::OnClicked<SNotificationListTest>(local_6380,this,&local_5e28);
  local_6378 = &local_58c8;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5b48,L"STestSuite",L"NotificationListTest-SpawnCustomNotificationLabel"
                      ,L"Spawn Custom Notification");
  local_6370 = TAttribute<FText>::TAttribute<FText>(local_6378,pFVar3);
  local_6360 = SButton::FArguments::Text(local_6368,local_6370);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6416);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_5990,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1357,&local_6416);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5b58,local_6360);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5ea8,pTVar5);
  local_6350 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6358,&local_5ea8);
  local_6308 = SHorizontalBox::FArguments::operator+(local_6348,local_6350);
  pFVar2 = SHorizontalBox::Slot(&local_5118);
  local_6318 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_6340 = SButton::FArguments::FArguments(&local_2a80);
  local_6048 = SpawnPendingNotification;
  local_6040 = 0;
  ppcVar16 = &local_6048;
  puVar17 = local_5e18;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5e18;
  ppVar18 = &local_5e08;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_3900d752 *)&ppVar18->field_0x1;
  }
  local_6328 = SButton::FArguments::OnClicked<SNotificationListTest>(local_6340,this,&local_5e08);
  local_6338 = &local_5898;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5b68,L"STestSuite",
                      L"NotificationListTest-SpawnPendingNotificationLabel",
                      L"Spawn Pending Notification");
  local_6330 = TAttribute<FText>::TAttribute<FText>(local_6338,pFVar3);
  local_6320 = SButton::FArguments::Text(local_6328,local_6330);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6415);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_59a8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x135e,&local_6415);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5b78,local_6320);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5eb8,pTVar5);
  local_6310 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6318,&local_5eb8);
  local_62c8 = SHorizontalBox::FArguments::operator+(local_6308,local_6310);
  pFVar2 = SHorizontalBox::Slot(&local_5200);
  local_62d8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_6300 = SButton::FArguments::FArguments(&local_2fc0);
  local_6038 = FinishPendingNotification_Success;
  local_6030 = 0;
  ppcVar16 = &local_6038;
  puVar17 = local_5df8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5df8;
  ppVar18 = &local_5de8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_3900d752 *)&ppVar18->field_0x1;
  }
  local_62e8 = SButton::FArguments::OnClicked<SNotificationListTest>(local_6300,this,&local_5de8);
  local_62f8 = &local_5868;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5b88,L"STestSuite",
                      L"NotificationListTest-FinishPendingNotificationSuccessLabel",
                      L"Finish Pending Notification - Success");
  local_62f0 = TAttribute<FText>::TAttribute<FText>(local_62f8,pFVar3);
  local_62e0 = SButton::FArguments::Text(local_62e8,local_62f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6414);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_59c0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1365,&local_6414);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5b98,local_62e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5ec8,pTVar5);
  local_62d0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_62d8,&local_5ec8);
  local_6288 = SHorizontalBox::FArguments::operator+(local_62c8,local_62d0);
  pFVar2 = SHorizontalBox::Slot(&local_52e8);
  local_6298 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_62c0 = SButton::FArguments::FArguments(&local_3500);
  local_6028 = FinishPendingNotification_Fail;
  local_6020 = 0;
  ppcVar16 = &local_6028;
  puVar17 = local_5dd8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5dd8;
  ppVar18 = &local_5dc8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_3900d752 *)&ppVar18->field_0x1;
  }
  local_62a8 = SButton::FArguments::OnClicked<SNotificationListTest>(local_62c0,this,&local_5dc8);
  local_62b8 = &local_5838;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5ba8,L"STestSuite",
                      L"NotificationListTest-FinishPendingNotificationFailLabel",
                      L"Finish Pending Notification - Fail");
  local_62b0 = TAttribute<FText>::TAttribute<FText>(local_62b8,pFVar3);
  local_62a0 = SButton::FArguments::Text(local_62a8,local_62b0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6413);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_59d8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x136c,&local_6413);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5bb8,local_62a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5ed8,pTVar5);
  local_6290 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6298,&local_5ed8);
  local_6280 = SHorizontalBox::FArguments::operator+(local_6288,local_6290);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6412);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_59f0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1346,&local_6412);
  pTVar6 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_5bc8,local_6280);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5ee8,pTVar6);
  local_6270 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6278,&local_5ee8);
  local_6210 = SVerticalBox::FArguments::operator+(local_6268,local_6270);
  pFVar1 = SVerticalBox::Slot(&local_53d0);
  local_6220 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_6260 = SCheckBox::FArguments::FArguments(&local_38e0);
  local_6018 = IsUseLargeFontChecked;
  local_6010 = 0;
  ppcVar16 = &local_6018;
  puVar17 = local_5db8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5db8;
  ppVar19 = &local_5da8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar19 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar19 = (pmf_74f1e6c5 *)&ppVar19->field_0x1;
  }
  local_6258 = SCheckBox::FArguments::IsChecked<SNotificationListTest>(local_6260,this,&local_5da8);
  local_6008 = OnUseLargeFontCheckStateChanged;
  local_6000 = 0;
  ppcVar16 = &local_6008;
  puVar17 = local_5d98;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5d98;
  ppVar20 = &local_5d88;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar20 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar20 = (pmf_2bfa4461 *)&ppVar20->field_0x1;
  }
  local_6230 = SCheckBox::FArguments::OnCheckStateChanged<SNotificationListTest>
                         (local_6258,this,&local_5d88);
  local_6240 = STextBlock::FArguments::FArguments(&local_578);
  local_6250 = &local_5808;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5bd8,L"STestSuite",L"NotificationListTest-UseLargeFont",
                      L"Use Large Font");
  local_6248 = TAttribute<FText>::TAttribute<FText>(local_6250,pFVar3);
  local_6238 = STextBlock::FArguments::Text(local_6240,local_6248);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6411);
  pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_5a08,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1379,&local_6411);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_5be8,local_6238);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5ef8,pTVar8);
  local_6228 = SCheckBox::FArguments::operator[](local_6230,&local_5ef8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6410);
  pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                     (&local_5a20,"SCheckBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1375,&local_6410);
  pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_5bf8,local_6228);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5f08,pTVar10);
  local_6218 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6220,&local_5f08);
  local_61b8 = SVerticalBox::FArguments::operator+(local_6210,local_6218);
  pFVar1 = SVerticalBox::Slot(&local_54b8);
  local_61c8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_6208 = SCheckBox::FArguments::FArguments(&local_3cc0);
  local_5ff8 = IsAddDummyButtonsChecked;
  local_5ff0 = 0;
  ppcVar16 = &local_5ff8;
  puVar17 = local_5d78;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5d78;
  ppVar19 = &local_5d68;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar19 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar19 = (pmf_74f1e6c5 *)&ppVar19->field_0x1;
  }
  local_6200 = SCheckBox::FArguments::IsChecked<SNotificationListTest>(local_6208,this,&local_5d68);
  local_5fe8 = OnAddDummyButtonsCheckStateChanged;
  local_5fe0 = 0;
  ppcVar16 = &local_5fe8;
  puVar17 = local_5d58;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5d58;
  ppVar20 = &local_5d48;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar20 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar20 = (pmf_2bfa4461 *)&ppVar20->field_0x1;
  }
  local_61d8 = SCheckBox::FArguments::OnCheckStateChanged<SNotificationListTest>
                         (local_6200,this,&local_5d48);
  local_61e8 = STextBlock::FArguments::FArguments(&local_ad0);
  local_61f8 = &local_57d8;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5c08,L"STestSuite",L"NotificationListTest-AddDummyButtons",
                      L"Add Dummy Buttons");
  local_61f0 = TAttribute<FText>::TAttribute<FText>(local_61f8,pFVar3);
  local_61e0 = STextBlock::FArguments::Text(local_61e8,local_61f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_640f);
  pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_5a38,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1385,&local_640f);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_5c18,local_61e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5f18,pTVar8);
  local_61d0 = SCheckBox::FArguments::operator[](local_61d8,&local_5f18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_640e);
  pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                     (&local_5a50,"SCheckBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1381,&local_640e);
  pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_5c28,local_61d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5f28,pTVar10);
  local_61c0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_61c8,&local_5f28);
  local_6160 = SVerticalBox::FArguments::operator+(local_61b8,local_61c0);
  pFVar1 = SVerticalBox::Slot(&local_55a0);
  local_6170 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_61b0 = SCheckBox::FArguments::FArguments(&local_40a0);
  local_5fd8 = IsAddDummyCheckBoxChecked;
  local_5fd0 = 0;
  ppcVar16 = &local_5fd8;
  puVar17 = local_5d38;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5d38;
  ppVar19 = &local_5d28;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar19 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar19 = (pmf_74f1e6c5 *)&ppVar19->field_0x1;
  }
  local_61a8 = SCheckBox::FArguments::IsChecked<SNotificationListTest>(local_61b0,this,&local_5d28);
  local_5fc8 = OnAddDummyCheckBoxCheckStateChanged;
  local_5fc0 = 0;
  ppcVar16 = &local_5fc8;
  puVar17 = local_5d18;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5d18;
  ppVar20 = &local_5d08;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar20 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar20 = (pmf_2bfa4461 *)&ppVar20->field_0x1;
  }
  local_6180 = SCheckBox::FArguments::OnCheckStateChanged<SNotificationListTest>
                         (local_61a8,this,&local_5d08);
  local_6190 = STextBlock::FArguments::FArguments(&local_1028);
  local_61a0 = &local_57a8;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5c38,L"STestSuite",L"NotificationListTest-AddDummyCheckBox",
                      L"Add Dummy Check Box");
  local_6198 = TAttribute<FText>::TAttribute<FText>(local_61a0,pFVar3);
  local_6188 = STextBlock::FArguments::Text(local_6190,local_6198);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_640d);
  pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_5a68,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1391,&local_640d);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_5c48,local_6188);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5f38,pTVar8);
  local_6178 = SCheckBox::FArguments::operator[](local_6180,&local_5f38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_640c);
  pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                     (&local_5a80,"SCheckBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x138d,&local_640c);
  pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_5c58,local_6178);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5f48,pTVar10);
  local_6168 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6170,&local_5f48);
  local_6108 = SVerticalBox::FArguments::operator+(local_6160,local_6168);
  pFVar1 = SVerticalBox::Slot(&local_5688);
  local_6118 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_6158 = SCheckBox::FArguments::FArguments(&local_4480);
  local_5fb8 = IsAddDummyHyperlinkChecked;
  local_5fb0 = 0;
  ppcVar16 = &local_5fb8;
  puVar17 = local_5cf8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5cf8;
  ppVar19 = &local_5ce8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar19 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar19 = (pmf_74f1e6c5 *)&ppVar19->field_0x1;
  }
  local_6150 = SCheckBox::FArguments::IsChecked<SNotificationListTest>(local_6158,this,&local_5ce8);
  local_5fa8 = OnAddDummyHyperlinkCheckStateChanged;
  local_5fa0 = 0;
  ppcVar16 = &local_5fa8;
  puVar17 = local_5cd8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5cd8;
  ppVar20 = &local_5cc8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar20 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar20 = (pmf_2bfa4461 *)&ppVar20->field_0x1;
  }
  local_6128 = SCheckBox::FArguments::OnCheckStateChanged<SNotificationListTest>
                         (local_6150,this,&local_5cc8);
  local_6138 = STextBlock::FArguments::FArguments(&local_1580);
  local_6148 = &local_5778;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_5c68,L"STestSuite",L"NotificationListTest-AddDummyHyperlink",
                      L"Add Dummy Hyperlink");
  local_6140 = TAttribute<FText>::TAttribute<FText>(local_6148,pFVar3);
  local_6130 = STextBlock::FArguments::Text(local_6138,local_6140);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_640b);
  pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_5a98,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x139d,&local_640b);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_5c78,local_6130);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5f58,pTVar8);
  local_6120 = SCheckBox::FArguments::operator[](local_6128,&local_5f58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_640a);
  pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                     (&local_5ab0,"SCheckBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1399,&local_640a);
  pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_5c88,local_6120);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5f68,pTVar10);
  local_6110 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6118,&local_5f68);
  local_6100 = SVerticalBox::FArguments::operator+(local_6108,local_6110);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6409);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5ac8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1342,&local_6409);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_5c98,local_6100);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_5f78,pTVar11);
  local_60f0 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_60f8,&local_5f78);
  local_6090 = SOverlay::FArguments::operator+(local_60e8,local_60f0);
  pFVar12 = SOverlay::Slot(&local_5748,0);
  local_60e0 = &pFVar12->_padding_;
  pFVar12 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)local_60e0,HAlign_Right);
  local_60d8 = &pFVar12->_padding_;
  pFVar12 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                      ((FSlotArgumentsMixin *)local_60d8,VAlign_Bottom);
  local_60d0 = &pFVar12->_padding_;
  local_60a0 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_60d0,__real_41700000);
  local_60b8 = (TSlateBaseNamedArgs<SNotificationList> *)
               SNotificationList::FArguments::FArguments(&local_4a88);
  local_60c8 = &local_5948;
  local_60c0 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                         (local_60c8,&EVisibility::SelfHitTestInvisible);
  local_60a8 = TSlateBaseNamedArgs<SNotificationList>::Visibility(local_60b8,local_60c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6408);
  local_60b0 = MakeTDecl<SNotificationList,RequiredArgs::T0RequiredArgs>
                         (&local_5ae0,"SNotificationList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x13a8,&local_6408);
  this_02 = TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>::Expose<SNotificationList>
                      (local_60b0,&this->NotificationListPtr);
  pTVar13 = TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_5ca8,local_60a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNotificationList>(&local_5f88,pTVar13);
  local_6098 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_60a0,&local_5f88);
  local_6088 = SOverlay::FArguments::operator+(local_6090,local_6098);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_6407);
  this_03 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_5af8,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x133f,local_6407);
  pTVar14 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_5cb8,local_6088);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_5f98,pTVar14);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_6080,&local_5f98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f98);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5cb8.SharedReferenceCount);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>(&local_5af8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f88);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5ca8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5ae0._Widget.SharedReferenceCount);
  TSlateBaseNamedArgs<SNotificationList>::~TSlateBaseNamedArgs<SNotificationList>
            ((TSlateBaseNamedArgs<SNotificationList> *)&local_4a88);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_5748);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f78);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5c98.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5ac8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f68);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5c88.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5ab0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f58);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5c78);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5a98);
  FText::~FText(&local_5c68);
  STextBlock::FArguments::~FArguments(&local_1580);
  SCheckBox::FArguments::~FArguments(&local_4480);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5688);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f48);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5c58.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5a80);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f38);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5c48);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5a68);
  FText::~FText(&local_5c38);
  STextBlock::FArguments::~FArguments(&local_1028);
  SCheckBox::FArguments::~FArguments(&local_40a0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_55a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f28);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5c28.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5a50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f18);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5c18);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5a38);
  FText::~FText(&local_5c08);
  STextBlock::FArguments::~FArguments(&local_ad0);
  SCheckBox::FArguments::~FArguments(&local_3cc0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_54b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f08);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5bf8.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5a20);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ef8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5be8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5a08);
  FText::~FText(&local_5bd8);
  STextBlock::FArguments::~FArguments(&local_578);
  SCheckBox::FArguments::~FArguments(&local_38e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_53d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ee8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5bc8.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_59f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ed8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5bb8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_59d8._Widget.SharedReferenceCount);
  FText::~FText(&local_5ba8);
  SButton::FArguments::~FArguments(&local_3500);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_52e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ec8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5b98.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_59c0._Widget.SharedReferenceCount);
  FText::~FText(&local_5b88);
  SButton::FArguments::~FArguments(&local_2fc0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5200);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5eb8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5b78.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_59a8._Widget.SharedReferenceCount);
  FText::~FText(&local_5b68);
  SButton::FArguments::~FArguments(&local_2a80);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5118);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ea8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5b58.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5990._Widget.SharedReferenceCount);
  FText::~FText(&local_5b48);
  SButton::FArguments::~FArguments(&local_2540);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5030);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5e98);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5b38.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5978._Widget.SharedReferenceCount);
  FText::~FText(&local_5b28);
  SButton::FArguments::~FArguments(&local_2000);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4f48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5e88);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5b18.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5960._Widget.SharedReferenceCount);
  FText::~FText(&local_5b08);
  SButton::FArguments::~FArguments(&local_1ac0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4e60);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_4c90._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_4c90);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4d78);
  SVerticalBox::FArguments::~FArguments(&local_4890);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_56e8);
  SOverlay::FArguments::~FArguments(&local_4688);
  return;
}

// Dummy @ 1430b5eb0

void __cdecl `SNotificationListTest::SetNotificationInfoFlags'::__l2::Local::Dummy(void)

{
  return;
}

// FinishPendingNotification_Fail @ 1430c4530

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationListTest::FinishPendingNotification_Fail
          (SNotificationListTest *this,FReply *__return_storage_ptr__)

{
  SNotificationItem *pSVar1;
  FText *pFVar2;
  TWeakPtr<SNotificationItem,1> *pTVar3;
  TSharedPtr<SNotificationItem,1> local_88;
  TWeakPtr<SNotificationItem,1> *local_78;
  code *local_70;
  code *local_68;
  FText local_60;
  TWeakPtr<SNotificationItem,1> local_50;
  TAttribute<FText> local_40;
  
  local_78 = &this->PendingProgressPtr;
  TSharedPtr<SNotificationItem,1>::TSharedPtr<SNotificationItem,1><SNotificationItem>
            (&local_88,local_78);
  if (local_88.Object != (SNotificationItem *)0x0) {
    pSVar1 = TSharedPtr<SNotificationItem,1>::operator->(&local_88);
    local_70 = *(code **)(*(longlong *)pSVar1 + 0x248);
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"STestSuite",L"TestNotificationFailure",L"Operation Failed...");
    TAttribute<FText>::TAttribute<FText>(&local_40,pFVar2);
    (*local_70)(pSVar1,&local_40);
    TAttribute<FText>::~TAttribute<FText>(&local_40);
    FText::~FText(&local_60);
    pSVar1 = TSharedPtr<SNotificationItem,1>::operator->(&local_88);
    local_68 = *(code **)(*(longlong *)pSVar1 + 0x280);
    (*local_68)(pSVar1);
    pSVar1 = TSharedPtr<SNotificationItem,1>::operator->(&local_88);
    (**(code **)(*(longlong *)pSVar1 + 0x288))(pSVar1);
    pTVar3 = TWeakPtr<SNotificationItem,1>::TWeakPtr<SNotificationItem,1>(&local_50,(FNullTag *)0x0)
    ;
    TWeakPtr<SNotificationItem,1>::operator=(&this->PendingProgressPtr,pTVar3);
    TWeakPtr<SNotificationItem,1>::~TWeakPtr<SNotificationItem,1>(&local_50);
  }
  FReply::Handled(__return_storage_ptr__);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_88.SharedReferenceCount);
  return __return_storage_ptr__;
}

// FinishPendingNotification_Success @ 1430c46c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationListTest::FinishPendingNotification_Success
          (SNotificationListTest *this,FReply *__return_storage_ptr__)

{
  SNotificationItem *pSVar1;
  FText *pFVar2;
  TWeakPtr<SNotificationItem,1> *pTVar3;
  TSharedPtr<SNotificationItem,1> local_88;
  TWeakPtr<SNotificationItem,1> *local_78;
  code *local_70;
  code *local_68;
  FText local_60;
  TWeakPtr<SNotificationItem,1> local_50;
  TAttribute<FText> local_40;
  
  local_78 = &this->PendingProgressPtr;
  TSharedPtr<SNotificationItem,1>::TSharedPtr<SNotificationItem,1><SNotificationItem>
            (&local_88,local_78);
  if (local_88.Object != (SNotificationItem *)0x0) {
    pSVar1 = TSharedPtr<SNotificationItem,1>::operator->(&local_88);
    local_70 = *(code **)(*(longlong *)pSVar1 + 0x248);
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"STestSuite",L"TestNotificationSuccess",L"Operation Successful!")
    ;
    TAttribute<FText>::TAttribute<FText>(&local_40,pFVar2);
    (*local_70)(pSVar1,&local_40);
    TAttribute<FText>::~TAttribute<FText>(&local_40);
    FText::~FText(&local_60);
    pSVar1 = TSharedPtr<SNotificationItem,1>::operator->(&local_88);
    local_68 = *(code **)(*(longlong *)pSVar1 + 0x280);
    (*local_68)(pSVar1);
    pSVar1 = TSharedPtr<SNotificationItem,1>::operator->(&local_88);
    (**(code **)(*(longlong *)pSVar1 + 0x288))(pSVar1);
    pTVar3 = TWeakPtr<SNotificationItem,1>::TWeakPtr<SNotificationItem,1>(&local_50,(FNullTag *)0x0)
    ;
    TWeakPtr<SNotificationItem,1>::operator=(&this->PendingProgressPtr,pTVar3);
    TWeakPtr<SNotificationItem,1>::~TWeakPtr<SNotificationItem,1>(&local_50);
  }
  FReply::Handled(__return_storage_ptr__);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_88.SharedReferenceCount);
  return __return_storage_ptr__;
}

// GetDummyCheckBoxState @ 1430c8cc0

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall SNotificationListTest::GetDummyCheckBoxState(SNotificationListTest *this)

{
  return this->DummyCheckBoxState;
}

// IsAddDummyButtonsChecked @ 1430d3070

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall
SNotificationListTest::IsAddDummyButtonsChecked(SNotificationListTest *this)

{
  return this->bAddDummyButtons != false;
}

// IsAddDummyCheckBoxChecked @ 1430d30b0

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall
SNotificationListTest::IsAddDummyCheckBoxChecked(SNotificationListTest *this)

{
  return this->bAddDummyCheckBox != false;
}

// IsAddDummyHyperlinkChecked @ 1430d30f0

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall
SNotificationListTest::IsAddDummyHyperlinkChecked(SNotificationListTest *this)

{
  return this->bAddDummyHyperlink != false;
}

// IsUseLargeFontChecked @ 1430d5280

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall SNotificationListTest::IsUseLargeFontChecked(SNotificationListTest *this)

{
  return this->bUseLargeFont != false;
}

// OnAddDummyButtonsCheckStateChanged @ 1430d8ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationListTest::OnAddDummyButtonsCheckStateChanged
          (SNotificationListTest *this,ECheckBoxState param_1)

{
  this->bAddDummyButtons = param_1 == Checked;
  return;
}

// OnAddDummyCheckBoxCheckStateChanged @ 1430d9030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationListTest::OnAddDummyCheckBoxCheckStateChanged
          (SNotificationListTest *this,ECheckBoxState param_1)

{
  this->bAddDummyCheckBox = param_1 == Checked;
  return;
}

// OnAddDummyHyperlinkCheckStateChanged @ 1430d9070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationListTest::OnAddDummyHyperlinkCheckStateChanged
          (SNotificationListTest *this,ECheckBoxState param_1)

{
  this->bAddDummyHyperlink = param_1 == Checked;
  return;
}

// OnDummyCheckBoxStateChanged @ 1430dae40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationListTest::OnDummyCheckBoxStateChanged
          (SNotificationListTest *this,ECheckBoxState param_1)

{
  this->DummyCheckBoxState = param_1;
  return;
}

// OnUseLargeFontCheckStateChanged @ 1430e3110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationListTest::OnUseLargeFontCheckStateChanged
          (SNotificationListTest *this,ECheckBoxState param_1)

{
  this->bUseLargeFont = param_1 == Checked;
  return;
}

// SetNotificationInfoFlags @ 1430ee040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationListTest::SetNotificationInfoFlags
          (SNotificationListTest *this,FNotificationInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FText *pFVar5;
  FNotificationButtonInfo *pFVar6;
  TAttribute<ECheckBoxState> *pTVar7;
  TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *pTVar8;
  longlong lVar9;
  code **ppcVar10;
  pmf_74f1e6c5 *ppVar11;
  pmf_2bfa4461 *ppVar12;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_1018;
  int local_1000;
  int local_ffc;
  int local_ff8;
  int local_ff4;
  int local_ff0;
  int local_fec;
  int local_fe8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_fe0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_fd8;
  FNotificationButtonInfo *local_fd0;
  FNotificationButtonInfo *local_fc8;
  FNotificationButtonInfo *local_fc0;
  FScriptContainerElement *local_fb8;
  FScriptContainerElement *local_fb0;
  FScriptContainerElement *local_fa8;
  undefined4 local_fa0;
  undefined4 local_f9c;
  FScriptContainerElement *local_f98;
  FScriptContainerElement *local_f90;
  FScriptContainerElement *local_f88;
  longlong local_f80;
  longlong local_f78;
  FScriptContainerElement *local_f70;
  FScriptContainerElement *local_f68;
  FScriptContainerElement *local_f60;
  FNotificationButtonInfo *local_f58;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_f50;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_f48;
  FNotificationButtonInfo *local_f40;
  FNotificationButtonInfo *local_f38;
  FNotificationButtonInfo *local_f30;
  FScriptContainerElement *local_f28;
  FScriptContainerElement *local_f20;
  FScriptContainerElement *local_f18;
  undefined4 local_f10;
  undefined4 local_f0c;
  FScriptContainerElement *local_f08;
  FScriptContainerElement *local_f00;
  FScriptContainerElement *local_ef8;
  longlong local_ef0;
  longlong local_ee8;
  FScriptContainerElement *local_ee0;
  FScriptContainerElement *local_ed8;
  FScriptContainerElement *local_ed0;
  FNotificationButtonInfo *local_ec8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_ec0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_eb8;
  FNotificationButtonInfo *local_eb0;
  FNotificationButtonInfo *local_ea8;
  FNotificationButtonInfo *local_ea0;
  FScriptContainerElement *local_e98;
  FScriptContainerElement *local_e90;
  FScriptContainerElement *local_e88;
  undefined4 local_e80;
  undefined4 local_e7c;
  FScriptContainerElement *local_e78;
  FScriptContainerElement *local_e70;
  FScriptContainerElement *local_e68;
  longlong local_e60;
  longlong local_e58;
  FScriptContainerElement *local_e50;
  FScriptContainerElement *local_e48;
  FScriptContainerElement *local_e40;
  FNotificationButtonInfo *local_e38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_e30;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_e28;
  FNotificationButtonInfo *local_e20;
  FNotificationButtonInfo *local_e18;
  FNotificationButtonInfo *local_e10;
  FScriptContainerElement *local_e08;
  FScriptContainerElement *local_e00;
  FScriptContainerElement *local_df8;
  undefined4 local_df0;
  undefined4 local_dec;
  FScriptContainerElement *local_de8;
  FScriptContainerElement *local_de0;
  FScriptContainerElement *local_dd8;
  longlong local_dd0;
  longlong local_dc8;
  FScriptContainerElement *local_dc0;
  FScriptContainerElement *local_db8;
  FScriptContainerElement *local_db0;
  FNotificationButtonInfo *local_da8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_da0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_d98;
  FNotificationButtonInfo *local_d90;
  FNotificationButtonInfo *local_d88;
  FNotificationButtonInfo *local_d80;
  FScriptContainerElement *local_d78;
  FScriptContainerElement *local_d70;
  FScriptContainerElement *local_d68;
  undefined4 local_d60;
  undefined4 local_d5c;
  FScriptContainerElement *local_d58;
  FScriptContainerElement *local_d50;
  FScriptContainerElement *local_d48;
  longlong local_d40;
  longlong local_d38;
  FScriptContainerElement *local_d30;
  FScriptContainerElement *local_d28;
  FScriptContainerElement *local_d20;
  FNotificationButtonInfo *local_d18;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_d10;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_d08;
  FNotificationButtonInfo *local_d00;
  FNotificationButtonInfo *local_cf8;
  FNotificationButtonInfo *local_cf0;
  FScriptContainerElement *local_ce8;
  FScriptContainerElement *local_ce0;
  FScriptContainerElement *local_cd8;
  undefined4 local_cd0;
  undefined4 local_ccc;
  FScriptContainerElement *local_cc8;
  FScriptContainerElement *local_cc0;
  FScriptContainerElement *local_cb8;
  longlong local_cb0;
  longlong local_ca8;
  FScriptContainerElement *local_ca0;
  FScriptContainerElement *local_c98;
  FScriptContainerElement *local_c90;
  FNotificationButtonInfo *local_c88;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_c80;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_c78;
  FNotificationButtonInfo *local_c70;
  FNotificationButtonInfo *local_c68;
  FNotificationButtonInfo *local_c60;
  FScriptContainerElement *local_c58;
  FScriptContainerElement *local_c50;
  FScriptContainerElement *local_c48;
  undefined4 local_c40;
  undefined4 local_c3c;
  FScriptContainerElement *local_c38;
  FScriptContainerElement *local_c30;
  FScriptContainerElement *local_c28;
  longlong local_c20;
  longlong local_c18;
  FScriptContainerElement *local_c10;
  FScriptContainerElement *local_c08;
  FScriptContainerElement *local_c00;
  FNotificationButtonInfo *local_bf8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_bf0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_be8;
  FNotificationButtonInfo *local_be0;
  FNotificationButtonInfo *local_bd8;
  FNotificationButtonInfo *local_bd0;
  FScriptContainerElement *local_bc8;
  FScriptContainerElement *local_bc0;
  FScriptContainerElement *local_bb8;
  undefined4 local_bb0;
  undefined4 local_bac;
  FScriptContainerElement *local_ba8;
  FScriptContainerElement *local_ba0;
  FScriptContainerElement *local_b98;
  longlong local_b90;
  longlong local_b88;
  FScriptContainerElement *local_b80;
  FScriptContainerElement *local_b78;
  FScriptContainerElement *local_b70;
  FNotificationButtonInfo *local_b68;
  int local_b60;
  code *local_b58;
  undefined4 local_b50;
  code *local_b48;
  undefined4 local_b40;
  FText local_b38;
  FText local_b28;
  FText local_b18;
  FText local_b08;
  FText local_af8;
  FText local_ae8;
  FText local_ad8;
  FText local_ac8;
  FText local_ab8;
  FText local_aa8;
  FText local_a98;
  FText local_a88;
  FText local_a78;
  FText local_a68;
  FText local_a58;
  FText local_a48;
  pmf_74f1e6c5 local_a38;
  pmf_2bfa4461 local_a28;
  FText local_a18;
  FText local_a08;
  TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> local_9f8;
  TAttribute<FText> local_9e0;
  TAttribute<FText> local_9b0;
  TAttribute<FText> local_980;
  TAttribute<FText> local_950;
  TAttribute<FText> local_920;
  TAttribute<FText> local_8f0;
  TAttribute<FText> local_8c0;
  undefined1 local_890 [32];
  TAttribute<FText> local_870;
  TAttribute<FText> local_840;
  TAttribute<FText> local_810;
  TAttribute<FText> local_7e0;
  TAttribute<FText> local_7b0;
  TAttribute<FText> local_780;
  TAttribute<FText> local_750;
  TAttribute<FText> local_720;
  TAttribute<FText> local_6f0;
  TAttribute<FText> local_6c0;
  TAttribute<FText> local_690;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_660;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_648;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_630;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_618;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_600;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_5e8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_5d0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_5b8;
  FNotificationButtonInfo local_5a0;
  FNotificationButtonInfo local_4f0;
  FNotificationButtonInfo local_440;
  FNotificationButtonInfo local_390;
  FNotificationButtonInfo local_2e0;
  FNotificationButtonInfo local_230;
  FNotificationButtonInfo local_180;
  FNotificationButtonInfo local_d0;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430ee056;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<>
            (&local_1018,`SNotificationListTest::SetNotificationInfoFlags'::__l2::Local::Dummy);
  param_1->bUseLargeFont = this->bUseLargeFont;
  if (this->bAddDummyButtons != false) {
    pTVar4 = &param_1->ButtonDetails;
    local_fe0 = &local_660;
    local_fd8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_fe0,&local_1018);
    pFVar5 = FText::FText(&local_b28);
    TAttribute<FText>::TAttribute<FText>(&local_840,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b38,L"STestSuite",L"NotificationListTest-DummyButton1Text",
                        L"Dummy Button 1");
    TAttribute<FText>::TAttribute<FText>(&local_870,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_5a0,&local_870,&local_840,local_fd8,CS_None);
    local_fd0 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_fc8 = local_fd0;
    local_fc0 = local_fd0;
    if ((local_fd0 <= pFVar6) &&
       (local_fb8 = (pTVar4->AllocatorInstance).Data, local_fb0 = local_fb8, local_fa8 = local_fb8,
       pFVar6 < (FNotificationButtonInfo *)
                (local_fb8 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_fa0 = 0;
      local_f9c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_f80 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_f78 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_f98 = (pTVar4->AllocatorInstance).Data;
      local_f90 = local_f98;
      local_f88 = local_f98;
      local_f70 = local_f98;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_f68 = (pTVar4->AllocatorInstance).Data;
    local_f60 = local_f68 + (longlong)iVar3 * 0xb0;
    local_f58 = ::operator_new(0xb0,local_f60);
    FNotificationButtonInfo::FNotificationButtonInfo(local_f58,pFVar6);
    local_b60 = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_5a0);
    TAttribute<FText>::~TAttribute<FText>(&local_870);
    FText::~FText(&local_b38);
    TAttribute<FText>::~TAttribute<FText>(&local_840);
    FText::~FText(&local_b28);
    pTVar4 = &param_1->ButtonDetails;
    local_f50 = &local_648;
    local_f48 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_f50,&local_1018);
    pFVar5 = FText::FText(&local_b08);
    TAttribute<FText>::TAttribute<FText>(&local_7e0,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b18,L"STestSuite",L"NotificationListTest-DummyButton2Text",
                        L"Dummy Button 2");
    TAttribute<FText>::TAttribute<FText>(&local_810,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_4f0,&local_810,&local_7e0,local_f48,CS_None);
    local_f40 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_f38 = local_f40;
    local_f30 = local_f40;
    if ((local_f40 <= pFVar6) &&
       (local_f28 = (pTVar4->AllocatorInstance).Data, local_f20 = local_f28, local_f18 = local_f28,
       pFVar6 < (FNotificationButtonInfo *)
                (local_f28 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_f10 = 0;
      local_f0c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_ef0 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_ee8 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_f08 = (pTVar4->AllocatorInstance).Data;
      local_f00 = local_f08;
      local_ef8 = local_f08;
      local_ee0 = local_f08;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_ed8 = (pTVar4->AllocatorInstance).Data;
    local_ed0 = local_ed8 + (longlong)iVar3 * 0xb0;
    local_ec8 = ::operator_new(0xb0,local_ed0);
    FNotificationButtonInfo::FNotificationButtonInfo(local_ec8,pFVar6);
    local_1000 = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_4f0);
    TAttribute<FText>::~TAttribute<FText>(&local_810);
    FText::~FText(&local_b18);
    TAttribute<FText>::~TAttribute<FText>(&local_7e0);
    FText::~FText(&local_b08);
    pTVar4 = &param_1->ButtonDetails;
    local_ec0 = &local_630;
    local_eb8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_ec0,&local_1018);
    pFVar5 = FText::FText(&local_ae8);
    TAttribute<FText>::TAttribute<FText>(&local_7b0,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_af8,L"STestSuite",L"NotificationListTest-DummyPendingButton1Text",
                        L"Dummy Pending Button 1");
    TAttribute<FText>::TAttribute<FText>(&local_8c0,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_440,&local_8c0,&local_7b0,local_eb8,CS_Pending);
    local_eb0 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_ea8 = local_eb0;
    local_ea0 = local_eb0;
    if ((local_eb0 <= pFVar6) &&
       (local_e98 = (pTVar4->AllocatorInstance).Data, local_e90 = local_e98, local_e88 = local_e98,
       pFVar6 < (FNotificationButtonInfo *)
                (local_e98 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_e80 = 0;
      local_e7c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_e60 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_e58 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_e78 = (pTVar4->AllocatorInstance).Data;
      local_e70 = local_e78;
      local_e68 = local_e78;
      local_e50 = local_e78;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_e48 = (pTVar4->AllocatorInstance).Data;
    local_e40 = local_e48 + (longlong)iVar3 * 0xb0;
    local_e38 = ::operator_new(0xb0,local_e40);
    FNotificationButtonInfo::FNotificationButtonInfo(local_e38,pFVar6);
    local_ffc = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_440);
    TAttribute<FText>::~TAttribute<FText>(&local_8c0);
    FText::~FText(&local_af8);
    TAttribute<FText>::~TAttribute<FText>(&local_7b0);
    FText::~FText(&local_ae8);
    pTVar4 = &param_1->ButtonDetails;
    local_e30 = &local_618;
    local_e28 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_e30,&local_1018);
    pFVar5 = FText::FText(&local_ac8);
    TAttribute<FText>::TAttribute<FText>(&local_750,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_ad8,L"STestSuite",L"NotificationListTest-DummyPendingButton2Text",
                        L"Dummy Pending Button 2");
    TAttribute<FText>::TAttribute<FText>(&local_780,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_390,&local_780,&local_750,local_e28,CS_Pending);
    local_e20 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_e18 = local_e20;
    local_e10 = local_e20;
    if ((local_e20 <= pFVar6) &&
       (local_e08 = (pTVar4->AllocatorInstance).Data, local_e00 = local_e08, local_df8 = local_e08,
       pFVar6 < (FNotificationButtonInfo *)
                (local_e08 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_df0 = 0;
      local_dec = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_dd0 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_dc8 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_de8 = (pTVar4->AllocatorInstance).Data;
      local_de0 = local_de8;
      local_dd8 = local_de8;
      local_dc0 = local_de8;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_db8 = (pTVar4->AllocatorInstance).Data;
    local_db0 = local_db8 + (longlong)iVar3 * 0xb0;
    local_da8 = ::operator_new(0xb0,local_db0);
    FNotificationButtonInfo::FNotificationButtonInfo(local_da8,pFVar6);
    local_ff8 = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_390);
    TAttribute<FText>::~TAttribute<FText>(&local_780);
    FText::~FText(&local_ad8);
    TAttribute<FText>::~TAttribute<FText>(&local_750);
    FText::~FText(&local_ac8);
    pTVar4 = &param_1->ButtonDetails;
    local_da0 = &local_600;
    local_d98 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_da0,&local_1018);
    pFVar5 = FText::FText(&local_aa8);
    TAttribute<FText>::TAttribute<FText>(&local_6f0,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_ab8,L"STestSuite",L"NotificationListTest-DummySuccessButton1Text",
                        L"Dummy Success Button 1");
    TAttribute<FText>::TAttribute<FText>(&local_720,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_2e0,&local_720,&local_6f0,local_d98,CS_Success);
    local_d90 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_d88 = local_d90;
    local_d80 = local_d90;
    if ((local_d90 <= pFVar6) &&
       (local_d78 = (pTVar4->AllocatorInstance).Data, local_d70 = local_d78, local_d68 = local_d78,
       pFVar6 < (FNotificationButtonInfo *)
                (local_d78 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_d60 = 0;
      local_d5c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_d40 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_d38 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_d58 = (pTVar4->AllocatorInstance).Data;
      local_d50 = local_d58;
      local_d48 = local_d58;
      local_d30 = local_d58;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_d28 = (pTVar4->AllocatorInstance).Data;
    local_d20 = local_d28 + (longlong)iVar3 * 0xb0;
    local_d18 = ::operator_new(0xb0,local_d20);
    FNotificationButtonInfo::FNotificationButtonInfo(local_d18,pFVar6);
    local_ff4 = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_2e0);
    TAttribute<FText>::~TAttribute<FText>(&local_720);
    FText::~FText(&local_ab8);
    TAttribute<FText>::~TAttribute<FText>(&local_6f0);
    FText::~FText(&local_aa8);
    pTVar4 = &param_1->ButtonDetails;
    local_d10 = &local_5e8;
    local_d08 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_d10,&local_1018);
    pFVar5 = FText::FText(&local_a88);
    TAttribute<FText>::TAttribute<FText>(&local_690,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_a98,L"STestSuite",L"NotificationListTest-DummySuccessButton2Text",
                        L"Dummy Success Button 2");
    TAttribute<FText>::TAttribute<FText>(&local_6c0,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_230,&local_6c0,&local_690,local_d08,CS_Success);
    local_d00 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_cf8 = local_d00;
    local_cf0 = local_d00;
    if ((local_d00 <= pFVar6) &&
       (local_ce8 = (pTVar4->AllocatorInstance).Data, local_ce0 = local_ce8, local_cd8 = local_ce8,
       pFVar6 < (FNotificationButtonInfo *)
                (local_ce8 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_cd0 = 0;
      local_ccc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_cb0 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_ca8 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_cc8 = (pTVar4->AllocatorInstance).Data;
      local_cc0 = local_cc8;
      local_cb8 = local_cc8;
      local_ca0 = local_cc8;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_c98 = (pTVar4->AllocatorInstance).Data;
    local_c90 = local_c98 + (longlong)iVar3 * 0xb0;
    local_c88 = ::operator_new(0xb0,local_c90);
    FNotificationButtonInfo::FNotificationButtonInfo(local_c88,pFVar6);
    local_ff0 = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_230);
    TAttribute<FText>::~TAttribute<FText>(&local_6c0);
    FText::~FText(&local_a98);
    TAttribute<FText>::~TAttribute<FText>(&local_690);
    FText::~FText(&local_a88);
    pTVar4 = &param_1->ButtonDetails;
    local_c80 = &local_5d0;
    local_c78 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_c80,&local_1018);
    pFVar5 = FText::FText(&local_a68);
    TAttribute<FText>::TAttribute<FText>(&local_9b0,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_a78,L"STestSuite",L"NotificationListTest-DummyFailButton1Text",
                        L"Dummy Fail Button 1");
    TAttribute<FText>::TAttribute<FText>(&local_9e0,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_180,&local_9e0,&local_9b0,local_c78,CS_Fail);
    local_c70 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_c68 = local_c70;
    local_c60 = local_c70;
    if ((local_c70 <= pFVar6) &&
       (local_c58 = (pTVar4->AllocatorInstance).Data, local_c50 = local_c58, local_c48 = local_c58,
       pFVar6 < (FNotificationButtonInfo *)
                (local_c58 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_c40 = 0;
      local_c3c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_c20 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_c18 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_c38 = (pTVar4->AllocatorInstance).Data;
      local_c30 = local_c38;
      local_c28 = local_c38;
      local_c10 = local_c38;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_c08 = (pTVar4->AllocatorInstance).Data;
    local_c00 = local_c08 + (longlong)iVar3 * 0xb0;
    local_bf8 = ::operator_new(0xb0,local_c00);
    FNotificationButtonInfo::FNotificationButtonInfo(local_bf8,pFVar6);
    local_fec = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_180);
    TAttribute<FText>::~TAttribute<FText>(&local_9e0);
    FText::~FText(&local_a78);
    TAttribute<FText>::~TAttribute<FText>(&local_9b0);
    FText::~FText(&local_a68);
    pTVar4 = &param_1->ButtonDetails;
    local_bf0 = &local_5b8;
    local_be8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(local_bf0,&local_1018);
    pFVar5 = FText::FText(&local_a48);
    TAttribute<FText>::TAttribute<FText>(&local_950,pFVar5);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_a58,L"STestSuite",L"NotificationListTest-DummyFailButton2Text",
                        L"Dummy Fail Button 2");
    TAttribute<FText>::TAttribute<FText>(&local_980,pFVar5);
    pFVar6 = FNotificationButtonInfo::FNotificationButtonInfo
                       (&local_d0,&local_980,&local_950,local_be8,CS_Fail);
    local_be0 = (FNotificationButtonInfo *)(pTVar4->AllocatorInstance).Data;
    local_bd8 = local_be0;
    local_bd0 = local_be0;
    if ((local_be0 <= pFVar6) &&
       (local_bc8 = (pTVar4->AllocatorInstance).Data, local_bc0 = local_bc8, local_bb8 = local_bc8,
       pFVar6 < (FNotificationButtonInfo *)
                (local_bc8 + (longlong)(param_1->ButtonDetails).ArrayMax * 0xb0))) {
      local_bb0 = 0;
      local_bac = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b90 = (longlong)(param_1->ButtonDetails).ArrayNum;
      local_b88 = (longlong)(param_1->ButtonDetails).ArrayMax;
      local_ba8 = (pTVar4->AllocatorInstance).Data;
      local_ba0 = local_ba8;
      local_b98 = local_ba8;
      local_b80 = local_ba8;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->ButtonDetails).ArrayNum == (param_1->ButtonDetails).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b0,&pTVar4->AllocatorInstance,&(param_1->ButtonDetails).ArrayMax);
      (param_1->ButtonDetails).ArrayNum = iVar3;
    }
    iVar3 = (param_1->ButtonDetails).ArrayNum;
    (param_1->ButtonDetails).ArrayNum = (param_1->ButtonDetails).ArrayNum + 1;
    local_b78 = (pTVar4->AllocatorInstance).Data;
    local_b70 = local_b78 + (longlong)iVar3 * 0xb0;
    local_b68 = ::operator_new(0xb0,local_b70);
    FNotificationButtonInfo::FNotificationButtonInfo(local_b68,pFVar6);
    local_fe8 = iVar3;
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_d0);
    TAttribute<FText>::~TAttribute<FText>(&local_980);
    FText::~FText(&local_a58);
    TAttribute<FText>::~TAttribute<FText>(&local_950);
    FText::~FText(&local_a48);
  }
  if (this->bAddDummyCheckBox != false) {
    local_b48 = GetDummyCheckBoxState;
    local_b40 = 0;
    ppcVar10 = &local_b48;
    ppVar11 = &local_a38;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)ppVar11 = *(undefined1 *)ppcVar10;
      ppcVar10 = (code **)((longlong)ppcVar10 + 1);
      ppVar11 = (pmf_74f1e6c5 *)&ppVar11->field_0x1;
    }
    pTVar7 = TAttribute<enum_ECheckBoxState>::TAttribute<enum_ECheckBoxState><SNotificationListTest>
                       (local_890,this,&local_a38);
    TAttribute<enum_ECheckBoxState>::operator=(&param_1->CheckBoxState,pTVar7);
    TAttribute<enum_ECheckBoxState>::~TAttribute<enum_ECheckBoxState>(local_890);
    local_b58 = OnDummyCheckBoxStateChanged;
    local_b50 = 0;
    ppcVar10 = &local_b58;
    ppVar12 = &local_a28;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)ppVar12 = *(undefined1 *)ppcVar10;
      ppcVar10 = (code **)((longlong)ppcVar10 + 1);
      ppVar12 = (pmf_2bfa4461 *)&ppVar12->field_0x1;
    }
    pTVar8 = TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
             CreateSP<SNotificationListTest>(&local_9f8,this,&local_a28);
    TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::operator=
              (&param_1->CheckBoxStateChanged,pTVar8);
    TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&local_9f8);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_a18,L"STestSuite",L"NotificationListTest-DummyCheckBoxText",
                        L"Dummy Check Box");
    TAttribute<FText>::TAttribute<FText>(&local_920,pFVar5);
    TAttribute<FText>::operator=(&param_1->CheckBoxText,&local_920);
    TAttribute<FText>::~TAttribute<FText>(&local_920);
    FText::~FText(&local_a18);
  }
  if (this->bAddDummyHyperlink != false) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
              (&param_1->Hyperlink,&local_1018);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_a08,L"STestSuite",L"NotificationListTest-DummyHyperlinkText",
                        L"Dummy Hyperlink");
    TAttribute<FText>::TAttribute<FText>(&local_8f0,pFVar5);
    TAttribute<FText>::operator=(&param_1->HyperlinkText,&local_8f0);
    TAttribute<FText>::~TAttribute<FText>(&local_8f0);
    FText::~FText(&local_a08);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_1018);
  return;
}

// SpawnCustomNotification @ 1430f04c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationListTest::SpawnCustomNotification
          (SNotificationListTest *this,FReply *__return_storage_ptr__)

{
  TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STestNotificationWidget,1> *pTVar1;
  TSharedPtr<INotificationWidget,1> *pTVar2;
  T0RequiredArgs local_3d8 [8];
  SNotificationList *local_3d0;
  FArguments *local_3c8;
  TSharedPtr<INotificationWidget,1> *local_3c0;
  code *local_3b8;
  TSharedRef<STestNotificationWidget,1> local_3b0;
  undefined1 local_3a0 [8];
  FSharedReferencer<1> local_398;
  TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> local_390;
  TSharedPtr<INotificationWidget,1> local_378;
  FNotificationInfo local_368;
  FSlateBaseNamedArgs local_200;
  
  local_3c0 = &local_378;
  local_3c8 = STestNotificationWidget::FArguments::FArguments((FArguments *)&local_200);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_3d8);
  this_00 = MakeTDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>
                      (&local_390,"STestNotificationWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x141d,local_3d8);
  pTVar1 = TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_3b0,local_3c8);
  pTVar2 = TSharedPtr<INotificationWidget,1>::
           TSharedPtr<INotificationWidget,1><STestNotificationWidget>(local_3c0,pTVar1);
  FNotificationInfo::FNotificationInfo(&local_368,pTVar2);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3b0.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_390._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_200);
  local_368.bFireAndForget = true;
  local_368.ExpireDuration = __real_40400000;
  local_368.FadeOutDuration = __real_40400000;
  SetNotificationInfoFlags(this,&local_368);
  local_3d0 = TSharedPtr<SNotificationList,1>::operator->(&this->NotificationListPtr);
  local_3b8 = *(code **)(local_3d0->_padding_ + 0x248);
  (*local_3b8)(local_3d0,local_3a0,&local_368);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&local_398);
  FReply::Handled(__return_storage_ptr__);
  FNotificationInfo::~FNotificationInfo(&local_368);
  return __return_storage_ptr__;
}

// SpawnNotification1 @ 1430f0650

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationListTest::SpawnNotification1
          (SNotificationListTest *this,FReply *__return_storage_ptr__)

{
  FText *pFVar1;
  SNotificationList *pSVar2;
  FText local_198;
  undefined1 local_188 [8];
  FSharedReferencer<1> local_180;
  FNotificationInfo local_178;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_198,L"STestSuite",L"TestNotification01",L"A Notification");
  FNotificationInfo::FNotificationInfo(&local_178,pFVar1);
  FText::~FText(&local_198);
  SetNotificationInfoFlags(this,&local_178);
  pSVar2 = TSharedPtr<SNotificationList,1>::operator->(&this->NotificationListPtr);
  (**(code **)(pSVar2->_padding_ + 0x248))(pSVar2,local_188,&local_178);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&local_180);
  FReply::Handled(__return_storage_ptr__);
  FNotificationInfo::~FNotificationInfo(&local_178);
  return __return_storage_ptr__;
}

// SpawnNotification2 @ 1430f0730

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationListTest::SpawnNotification2
          (SNotificationListTest *this,FReply *__return_storage_ptr__)

{
  FText *pFVar1;
  SNotificationList *pSVar2;
  FText local_198;
  undefined1 local_188 [8];
  FSharedReferencer<1> local_180;
  FNotificationInfo local_178;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_198,L"STestSuite",L"TestNotification02",L"Another Notification");
  FNotificationInfo::FNotificationInfo(&local_178,pFVar1);
  FText::~FText(&local_198);
  SetNotificationInfoFlags(this,&local_178);
  pSVar2 = TSharedPtr<SNotificationList,1>::operator->(&this->NotificationListPtr);
  (**(code **)(pSVar2->_padding_ + 0x248))(pSVar2,local_188,&local_178);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&local_180);
  FReply::Handled(__return_storage_ptr__);
  FNotificationInfo::~FNotificationInfo(&local_178);
  return __return_storage_ptr__;
}

// SpawnPendingNotification @ 1430f0810

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationListTest::SpawnPendingNotification
          (SNotificationListTest *this,FReply *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  SNotificationItem *pSVar4;
  FText *pFVar5;
  SNotificationList *pSVar6;
  TSharedRef<SNotificationItem,1> *pTVar7;
  TSharedPtr<SNotificationItem,1> local_1b8;
  TSharedPtr<SNotificationItem,1> local_1a8;
  FText local_198;
  undefined1 local_188 [8];
  FSharedReferencer<1> local_180;
  FNotificationInfo local_178;
  
  if ((this->PendingProgressPtr).Object != (SNotificationItem *)0x0) {
    pFVar3 = &(this->PendingProgressPtr).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_1430f0870:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_1430f0870;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_1430f089c;
    }
  }
  bVar1 = false;
LAB_1430f089c:
  if (bVar1) {
    TSharedPtr<SNotificationItem,1>::TSharedPtr<SNotificationItem,1><SNotificationItem>
              (&local_1b8,&this->PendingProgressPtr);
    pSVar4 = TSharedPtr<SNotificationItem,1>::operator->(&local_1b8);
    (**(code **)(*(longlong *)pSVar4 + 0x288))(pSVar4);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1b8.SharedReferenceCount);
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_198,L"STestSuite",L"TestNotificationInProgress",
                      L"Operation In Progress");
  FNotificationInfo::FNotificationInfo(&local_178,pFVar5);
  FText::~FText(&local_198);
  SetNotificationInfoFlags(this,&local_178);
  local_178.bFireAndForget = false;
  pSVar6 = TSharedPtr<SNotificationList,1>::operator->(&this->NotificationListPtr);
  pTVar7 = (TSharedRef<SNotificationItem,1> *)
           (**(code **)(pSVar6->_padding_ + 0x248))(pSVar6,local_188,&local_178);
  TWeakPtr<SNotificationItem,1>::operator=<SNotificationItem>(&this->PendingProgressPtr,pTVar7);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&local_180);
  TSharedPtr<SNotificationItem,1>::TSharedPtr<SNotificationItem,1><SNotificationItem>
            (&local_1a8,&this->PendingProgressPtr);
  pSVar4 = TSharedPtr<SNotificationItem,1>::operator->(&local_1a8);
  (**(code **)(*(longlong *)pSVar4 + 0x280))(pSVar4,1);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1a8.SharedReferenceCount);
  FReply::Handled(__return_storage_ptr__);
  FNotificationInfo::~FNotificationInfo(&local_178);
  return __return_storage_ptr__;
}

