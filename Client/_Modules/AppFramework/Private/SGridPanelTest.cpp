// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// Construct @ 1430818c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SGridPanelTest::Construct(SGridPanelTest *this,FArguments *param_1)

{
  Layer *pLVar1;
  FText *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<SBorder,1> *pTVar6;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<SGridPanel,1> *pTVar8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SVerticalBox,1> *pTVar9;
  T0RequiredArgs local_8f18;
  T0RequiredArgs local_8f17;
  T0RequiredArgs local_8f16;
  T0RequiredArgs local_8f15;
  T0RequiredArgs local_8f14;
  T0RequiredArgs local_8f13;
  T0RequiredArgs local_8f12;
  T0RequiredArgs local_8f11;
  T0RequiredArgs local_8f10;
  T0RequiredArgs local_8f0f;
  T0RequiredArgs local_8f0e;
  T0RequiredArgs local_8f0d;
  T0RequiredArgs local_8f0c;
  T0RequiredArgs local_8f0b;
  T0RequiredArgs local_8f0a;
  T0RequiredArgs local_8f09;
  T0RequiredArgs local_8f08;
  T0RequiredArgs local_8f07;
  T0RequiredArgs local_8f06;
  T0RequiredArgs local_8f05;
  T0RequiredArgs local_8f04;
  T0RequiredArgs local_8f03;
  T0RequiredArgs local_8f02;
  T0RequiredArgs local_8f01;
  T0RequiredArgs local_8f00 [4];
  int local_8efc;
  float local_8ef8;
  float local_8ef4;
  int local_8ef0 [2];
  float local_8ee8;
  float local_8ee4;
  int local_8ee0 [2];
  Layer local_8ed8;
  Layer local_8ed4;
  Layer local_8ed0;
  Layer local_8ecc;
  Layer local_8ec8;
  Layer local_8ec4;
  Layer local_8ec0;
  Layer local_8ebc;
  Layer local_8eb8;
  Layer local_8eb4;
  Layer local_8eb0;
  Layer local_8eac;
  Layer local_8ea8;
  Layer local_8ea4;
  Layer local_8ea0;
  Layer local_8e9c;
  TAttribute<float> *local_8e98;
  TAttribute<float> *local_8e90;
  FSlotArguments *local_8e88;
  FArguments *local_8e80;
  FArguments *local_8e78;
  TAttribute<FText> *local_8e70;
  TAttribute<FText> *local_8e68;
  FArguments *local_8e60;
  FArguments *local_8e58;
  FSlotArguments *local_8e50;
  FSlotArguments *local_8e48;
  FArguments *local_8e40;
  TAttribute<FText> *local_8e38;
  TAttribute<FText> *local_8e30;
  FArguments *local_8e28;
  FArguments *local_8e20;
  FSlotArguments *local_8e18;
  FSlotArguments *local_8e10;
  FArguments *local_8e08;
  TAttribute<FText> *local_8e00;
  TAttribute<FText> *local_8df8;
  FArguments *local_8df0;
  FArguments *local_8de8;
  FSlotArguments *local_8de0;
  FSlotArguments *local_8dd8;
  FArguments *local_8dd0;
  TAttribute<FText> *local_8dc8;
  TAttribute<FText> *local_8dc0;
  FArguments *local_8db8;
  FArguments *local_8db0;
  FSlotArguments *local_8da8;
  FSlotArguments *local_8da0;
  FArguments *local_8d98;
  TAttribute<FText> *local_8d90;
  TAttribute<FText> *local_8d88;
  FArguments *local_8d80;
  FArguments *local_8d78;
  FSlotArguments *local_8d70;
  FSlotArguments *local_8d68;
  FArguments *local_8d60;
  TOptional<int> *local_8d58;
  TOptional<int> local_8d50;
  FSlotArguments *local_8d48;
  TAttribute<FText> *local_8d40;
  TAttribute<FText> *local_8d38;
  FArguments *local_8d30;
  FArguments *local_8d28;
  FArguments *local_8d20;
  FArguments *local_8d18;
  FSlotArguments *local_8d10;
  FSlotArguments *local_8d08;
  FArguments *local_8d00;
  TAttribute<FText> *local_8cf8;
  TAttribute<FText> *local_8cf0;
  FArguments *local_8ce8;
  FArguments *local_8ce0;
  FArguments *local_8cd8;
  FArguments *local_8cd0;
  FSlotArguments *local_8cc8;
  FSlotArguments *local_8cc0;
  FArguments *local_8cb8;
  TAttribute<FText> *local_8cb0;
  TAttribute<FText> *local_8ca8;
  FArguments *local_8ca0;
  FArguments *local_8c98;
  FArguments *local_8c90;
  FArguments *local_8c88;
  FSlotArguments *local_8c80;
  FSlotArguments *local_8c78;
  FArguments *local_8c70;
  FArguments *local_8c68;
  FSlotArguments *local_8c60;
  FSlotArguments *local_8c58;
  FArguments *local_8c50;
  TAttribute<float> *local_8c48;
  TAttribute<float> *local_8c40;
  FSlotArguments *local_8c38;
  FArguments *local_8c30;
  FArguments *local_8c28;
  TAttribute<FText> *local_8c20;
  TAttribute<FText> *local_8c18;
  FArguments *local_8c10;
  FArguments *local_8c08;
  FSlotArguments *local_8c00;
  FSlotArguments *local_8bf8;
  FArguments *local_8bf0;
  TAttribute<FText> *local_8be8;
  TAttribute<FText> *local_8be0;
  FArguments *local_8bd8;
  FArguments *local_8bd0;
  FSlotArguments *local_8bc8;
  FSlotArguments *local_8bc0;
  FArguments *local_8bb8;
  TAttribute<FText> *local_8bb0;
  TAttribute<FText> *local_8ba8;
  FArguments *local_8ba0;
  FArguments *local_8b98;
  FSlotArguments *local_8b90;
  FSlotArguments *local_8b88;
  FArguments *local_8b80;
  TAttribute<FText> *local_8b78;
  TAttribute<FText> *local_8b70;
  FArguments *local_8b68;
  FArguments *local_8b60;
  FSlotArguments *local_8b58;
  FSlotArguments *local_8b50;
  FArguments *local_8b48;
  TAttribute<FText> *local_8b40;
  TAttribute<FText> *local_8b38;
  FArguments *local_8b30;
  FArguments *local_8b28;
  FSlotArguments *local_8b20;
  FSlotArguments *local_8b18;
  FArguments *local_8b10;
  TOptional<int> *local_8b08;
  TOptional<int> local_8b00;
  FSlotArguments *local_8af8;
  TAttribute<FText> *local_8af0;
  TAttribute<FText> *local_8ae8;
  FArguments *local_8ae0;
  FArguments *local_8ad8;
  FArguments *local_8ad0;
  FArguments *local_8ac8;
  FSlotArguments *local_8ac0;
  FSlotArguments *local_8ab8;
  FArguments *local_8ab0;
  TAttribute<FText> *local_8aa8;
  TAttribute<FText> *local_8aa0;
  FArguments *local_8a98;
  FArguments *local_8a90;
  FArguments *local_8a88;
  FArguments *local_8a80;
  FSlotArguments *local_8a78;
  FSlotArguments *local_8a70;
  FArguments *local_8a68;
  TAttribute<FText> *local_8a60;
  TAttribute<FText> *local_8a58;
  FArguments *local_8a50;
  FArguments *local_8a48;
  FArguments *local_8a40;
  FArguments *local_8a38;
  FSlotArguments *local_8a30;
  FSlotArguments *local_8a28;
  FArguments *local_8a20;
  FArguments *local_8a18;
  FSlotArguments *local_8a10;
  FSlotArguments *local_8a08;
  FArguments *local_8a00;
  TAttribute<float> *local_89f8;
  TAttribute<float> *local_89f0;
  FSlotArguments *local_89e8;
  FSlotArguments *local_89e0;
  FArguments *local_89d8;
  FArguments *local_89d0;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_89c8;
  TSharedRef<SWidget,1> local_89c0;
  TSharedRef<SWidget,1> local_89b0;
  TSharedRef<SWidget,1> local_89a0;
  TSharedRef<SWidget,1> local_8990;
  TSharedRef<SWidget,1> local_8980;
  TSharedRef<SWidget,1> local_8970;
  TSharedRef<SWidget,1> local_8960;
  TSharedRef<SWidget,1> local_8950;
  TSharedRef<SWidget,1> local_8940;
  TSharedRef<SWidget,1> local_8930;
  TSharedRef<SWidget,1> local_8920;
  TSharedRef<SWidget,1> local_8910;
  TSharedRef<SWidget,1> local_8900;
  TSharedRef<SWidget,1> local_88f0;
  TSharedRef<SWidget,1> local_88e0;
  TSharedRef<SWidget,1> local_88d0;
  TSharedRef<SWidget,1> local_88c0;
  TSharedRef<SWidget,1> local_88b0;
  TSharedRef<SWidget,1> local_88a0;
  TSharedRef<SWidget,1> local_8890;
  TSharedRef<SWidget,1> local_8880;
  TSharedRef<SWidget,1> local_8870;
  TSharedRef<SWidget,1> local_8860;
  TSharedRef<SWidget,1> local_8850;
  TSharedRef<SWidget,1> local_8840;
  TOptional<int> local_8830;
  TOptional<int> local_8828;
  TSharedRef<SVerticalBox,1> local_8820;
  TSharedRef<SGridPanel,1> local_8810;
  TSharedRef<SBorder,1> local_8800;
  TSharedRef<STextBlock,1> local_87f0;
  FText local_87e0;
  TSharedRef<SBorder,1> local_87d0;
  TSharedRef<STextBlock,1> local_87c0;
  FText local_87b0;
  TSharedRef<SBorder,1> local_87a0;
  TSharedRef<STextBlock,1> local_8790;
  FText local_8780;
  TSharedRef<STextBlock,1> local_8770;
  FText local_8760;
  TSharedRef<STextBlock,1> local_8750;
  FText local_8740;
  TSharedRef<STextBlock,1> local_8730;
  FText local_8720;
  TSharedRef<STextBlock,1> local_8710;
  FText local_8700;
  TSharedRef<STextBlock,1> local_86f0;
  FText local_86e0;
  TSharedRef<SGridPanel,1> local_86d0;
  TSharedRef<SBorder,1> local_86c0;
  TSharedRef<STextBlock,1> local_86b0;
  FText local_86a0;
  TSharedRef<SBorder,1> local_8690;
  TSharedRef<STextBlock,1> local_8680;
  FText local_8670;
  TSharedRef<SBorder,1> local_8660;
  TSharedRef<STextBlock,1> local_8650;
  FText local_8640;
  TSharedRef<STextBlock,1> local_8630;
  FText local_8620;
  TSharedRef<STextBlock,1> local_8610;
  FText local_8600;
  TSharedRef<STextBlock,1> local_85f0;
  FText local_85e0;
  TSharedRef<STextBlock,1> local_85d0;
  FText local_85c0;
  TSharedRef<STextBlock,1> local_85b0;
  FText local_85a0;
  TAttribute<float> local_8590;
  TAttribute<float> local_8570;
  TAttribute<float> local_8550;
  TAttribute<float> local_8530;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_8510;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_84f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_84e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_84c8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_84b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8498;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8480;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8468;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8450;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_8438;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_8420;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8408;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_83f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_83d8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_83c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_83a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8390;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8378;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8360;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8348;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8330;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_8318;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_8300;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_82e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_82d0;
  TAttribute<float> local_82b8;
  TAttribute<float> local_8298;
  TAttribute<float> local_8278;
  TAttribute<FText> local_8258;
  TAttribute<FText> local_8228;
  TAttribute<FText> local_81f8;
  TAttribute<FText> local_81c8;
  TAttribute<FText> local_8198;
  TAttribute<FText> local_8168;
  TAttribute<FText> local_8138;
  TAttribute<FText> local_8108;
  TAttribute<FText> local_80d8;
  TAttribute<FText> local_80a8;
  TAttribute<FText> local_8078;
  TAttribute<FText> local_8048;
  TAttribute<FText> local_8018;
  TAttribute<FText> local_7fe8;
  TAttribute<FText> local_7fb8;
  TAttribute<FText> local_7f88;
  FSlotArguments local_7f58;
  FSlotArguments local_7ec0;
  FSlotArguments local_7e28;
  FSlotArguments local_7d90;
  FSlotArguments local_7cf8;
  FSlotArguments local_7c60;
  FSlotArguments local_7bc8;
  FSlotArguments local_7b30;
  FSlotArguments local_7a98;
  FSlotArguments local_7a00;
  FSlotArguments local_7968;
  FSlotArguments local_78d0;
  FSlotArguments local_7838;
  FSlotArguments local_77a0;
  FSlotArguments local_7708;
  FSlotArguments local_7670;
  FSlotArguments local_75d8;
  FSlotArguments local_74f0;
  FSlotArguments local_7408;
  FArguments local_7320;
  FArguments local_7118;
  FArguments local_6ef0;
  FArguments local_6cc8;
  FArguments local_68e8;
  FArguments local_6508;
  FArguments local_6128;
  FArguments local_5d48;
  FArguments local_5968;
  FArguments local_5588;
  FArguments local_5030;
  FArguments local_4ad8;
  FArguments local_4580;
  FArguments local_4028;
  FArguments local_3ad0;
  FArguments local_3578;
  FArguments local_3020;
  FArguments local_2ac8;
  FArguments local_2570;
  FArguments local_2018;
  FArguments local_1ac0;
  FArguments local_1568;
  FArguments local_1010;
  FArguments local_ab8;
  FArguments local_560;
  undefined8 uStack_8;
  
  uStack_8 = 0x1430818d4;
  local_89c8 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->field_0x218;
  local_8c50 = SVerticalBox::FArguments::FArguments(&local_7320);
  local_8e88 = SVerticalBox::Slot(&local_7408);
  local_8e98 = &local_82b8;
  local_8efc = 1;
  local_8e90 = TAttribute<float>::TAttribute<float><int>(local_8e98,&local_8efc);
  local_8c60 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_8e88,local_8e90);
  local_8e80 = SGridPanel::FArguments::FArguments(&local_6ef0);
  local_8ef8 = __real_3f800000;
  TAttribute<float>::TAttribute<float>(&local_8530,&local_8ef8);
  local_8e78 = SGridPanel::FArguments::FillColumn(local_8e80,1,&local_8530);
  local_8ef4 = __real_40000000;
  TAttribute<float>::TAttribute<float>(&local_8550,&local_8ef4);
  local_8e40 = SGridPanel::FArguments::FillColumn(local_8e78,2,&local_8550);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ed8,0);
  local_8e50 = SGridPanel::Slot(&local_7670,0,0,(Layer)pLVar1->TheLayer);
  local_8e60 = STextBlock::FArguments::FArguments(&local_560);
  local_8e70 = &local_8258;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_85a0,L"STestSuite",L"GridPanelTest-Label01",
                      L"There once was a man from Nantucket");
  local_8e68 = TAttribute<FText>::TAttribute<FText>(local_8e70,pFVar2);
  local_8e58 = STextBlock::FArguments::Text(local_8e60,local_8e68);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f18);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8330,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1481,&local_8f18);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_85b0,local_8e58);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8880,pTVar4);
  local_8e48 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8e50,&local_8880);
  local_8e08 = SGridPanel::FArguments::operator+(local_8e40,local_8e48);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ed4,0);
  local_8e18 = SGridPanel::Slot(&local_7708,0,1,(Layer)pLVar1->TheLayer);
  local_8e28 = STextBlock::FArguments::FArguments(&local_ab8);
  local_8e38 = &local_8228;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_85c0,L"STestSuite",L"GridPanelTest-Label02",
                      L"who kept all his cash in a bucket.");
  local_8e30 = TAttribute<FText>::TAttribute<FText>(local_8e38,pFVar2);
  local_8e20 = STextBlock::FArguments::Text(local_8e28,local_8e30);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f17);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8348,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1486,&local_8f17);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_85d0,local_8e20);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_89b0,pTVar4);
  local_8e10 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8e18,&local_89b0);
  local_8dd0 = SGridPanel::FArguments::operator+(local_8e08,local_8e10);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ed0,0);
  local_8de0 = SGridPanel::Slot(&local_77a0,0,2,(Layer)pLVar1->TheLayer);
  local_8df0 = STextBlock::FArguments::FArguments(&local_1010);
  local_8e00 = &local_81f8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_85e0,L"STestSuite",L"GridPanelTest-Label03",
                      L"But his daughter, named Nan,");
  local_8df8 = TAttribute<FText>::TAttribute<FText>(local_8e00,pFVar2);
  local_8de8 = STextBlock::FArguments::Text(local_8df0,local_8df8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f16);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8360,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x148b,&local_8f16);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_85f0,local_8de8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8840,pTVar4);
  local_8dd8 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8de0,&local_8840);
  local_8d98 = SGridPanel::FArguments::operator+(local_8dd0,local_8dd8);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ecc,0);
  local_8da8 = SGridPanel::Slot(&local_7838,0,3,(Layer)pLVar1->TheLayer);
  local_8db8 = STextBlock::FArguments::FArguments(&local_1568);
  local_8dc8 = &local_81c8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8600,L"STestSuite",L"GridPanelTest-Label04",L"Ran away with a man");
  local_8dc0 = TAttribute<FText>::TAttribute<FText>(local_8dc8,pFVar2);
  local_8db0 = STextBlock::FArguments::Text(local_8db8,local_8dc0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f15);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8378,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1490,&local_8f15);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8610,local_8db0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8850,pTVar4);
  local_8da0 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8da8,&local_8850);
  local_8d60 = SGridPanel::FArguments::operator+(local_8d98,local_8da0);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ec8,0);
  local_8d70 = SGridPanel::Slot(&local_78d0,0,4,(Layer)pLVar1->TheLayer);
  local_8d80 = STextBlock::FArguments::FArguments(&local_1ac0);
  local_8d90 = &local_8198;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8620,L"STestSuite",L"GridPanelTest-Label05",
                      L"And as for the bucket, Nantucket.");
  local_8d88 = TAttribute<FText>::TAttribute<FText>(local_8d90,pFVar2);
  local_8d78 = STextBlock::FArguments::Text(local_8d80,local_8d88);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f14);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8390,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1495,&local_8f14);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8630,local_8d78);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8860,pTVar4);
  local_8d68 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8d70,&local_8860);
  local_8d00 = SGridPanel::FArguments::operator+(local_8d60,local_8d68);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ec4,0);
  local_8d48 = SGridPanel::Slot(&local_7968,1,1,(Layer)pLVar1->TheLayer);
  local_8d58 = &local_8828;
  local_8ef0[0] = 2;
  local_8d50 = (TOptional<int>)TOptional<int>::TOptional<int>(local_8d58,local_8ef0);
  local_8d10 = SGridPanel::FSlot::FSlotArguments::ColumnSpan(local_8d48,local_8d50);
  local_8d20 = SBorder::FArguments::FArguments(&local_5968);
  local_8d30 = STextBlock::FArguments::FArguments(&local_2018);
  local_8d40 = &local_8168;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8640,L"STestSuite",L"GridPanelTest-Colspan1Label",L"Colspan = 1");
  local_8d38 = TAttribute<FText>::TAttribute<FText>(local_8d40,pFVar2);
  local_8d28 = STextBlock::FArguments::Text(local_8d30,local_8d38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f13);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_83a8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x149d,&local_8f13);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8650,local_8d28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8870,pTVar4);
  local_8d18 = SBorder::FArguments::operator[](local_8d20,&local_8870);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f12);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_83c0,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x149b,&local_8f12);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_8660,local_8d18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_89c0,pTVar6);
  local_8d08 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8d10,&local_89c0);
  local_8cb8 = SGridPanel::FArguments::operator+(local_8d00,local_8d08);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ec0,0);
  local_8cc8 = SGridPanel::Slot(&local_7a00,1,2,(Layer)pLVar1->TheLayer);
  local_8cd8 = SBorder::FArguments::FArguments(&local_5d48);
  local_8ce8 = STextBlock::FArguments::FArguments(&local_2570);
  local_8cf8 = &local_8138;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8670,L"STestSuite",L"GridPanelTest-Stretch1Label",L"Stretch = 1");
  local_8cf0 = TAttribute<FText>::TAttribute<FText>(local_8cf8,pFVar2);
  local_8ce0 = STextBlock::FArguments::Text(local_8ce8,local_8cf0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f11);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_83d8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14a4,&local_8f11);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8680,local_8ce0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8890,pTVar4);
  local_8cd0 = SBorder::FArguments::operator[](local_8cd8,&local_8890);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f10);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_83f0,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14a2,&local_8f10);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_8690,local_8cd0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_88a0,pTVar6);
  local_8cc0 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8cc8,&local_88a0);
  local_8c70 = SGridPanel::FArguments::operator+(local_8cb8,local_8cc0);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ebc,0);
  local_8c80 = SGridPanel::Slot(&local_7a98,2,3,(Layer)pLVar1->TheLayer);
  local_8c90 = SBorder::FArguments::FArguments(&local_6128);
  local_8ca0 = STextBlock::FArguments::FArguments(&local_2ac8);
  local_8cb0 = &local_8108;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_86a0,L"STestSuite",L"GridPanelTest-Stretch2Label",L"Stretch = 2");
  local_8ca8 = TAttribute<FText>::TAttribute<FText>(local_8cb0,pFVar2);
  local_8c98 = STextBlock::FArguments::Text(local_8ca0,local_8ca8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f0f);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8408,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14ab,&local_8f0f);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_86b0,local_8c98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_88b0,pTVar4);
  local_8c88 = SBorder::FArguments::operator[](local_8c90,&local_88b0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f0e);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_8420,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14a9,&local_8f0e);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_86c0,local_8c88);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_88c0,pTVar6);
  local_8c78 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8c80,&local_88c0);
  local_8c68 = SGridPanel::FArguments::operator+(local_8c70,local_8c78);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f0d);
  pTVar7 = MakeTDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
                     (&local_8438,"SGridPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x147c,&local_8f0d);
  pTVar8 = TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_86d0,local_8c68);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanel>(&local_88d0,pTVar8);
  local_8c58 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8c60,&local_88d0);
  local_8a00 = SVerticalBox::FArguments::operator+(local_8c50,local_8c58);
  local_8c38 = SVerticalBox::Slot(&local_74f0);
  local_8c48 = &local_8298;
  local_8ef0[1] = 1;
  local_8c40 = TAttribute<float>::TAttribute<float><int>(local_8c48,local_8ef0 + 1);
  local_8a10 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_8c38,local_8c40);
  local_8c30 = SGridPanel::FArguments::FArguments(&local_7118);
  local_8ee8 = __real_3f800000;
  TAttribute<float>::TAttribute<float>(&local_8570,&local_8ee8);
  local_8c28 = SGridPanel::FArguments::FillRow(local_8c30,1,&local_8570);
  local_8ee4 = __real_40000000;
  TAttribute<float>::TAttribute<float>(&local_8590,&local_8ee4);
  local_8bf0 = SGridPanel::FArguments::FillRow(local_8c28,2,&local_8590);
  pLVar1 = SGridPanel::Layer::Layer(&local_8eb8,0);
  local_8c00 = SGridPanel::Slot(&local_7b30,0,0,(Layer)pLVar1->TheLayer);
  local_8c10 = STextBlock::FArguments::FArguments(&local_3020);
  local_8c20 = &local_80d8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_86e0,L"STestSuite",L"GridPanelTest-Label01",
                      L"There once was a man from Nantucket");
  local_8c18 = TAttribute<FText>::TAttribute<FText>(local_8c20,pFVar2);
  local_8c08 = STextBlock::FArguments::Text(local_8c10,local_8c18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f0c);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8450,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14b7,&local_8f0c);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_86f0,local_8c08);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_88e0,pTVar4);
  local_8bf8 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8c00,&local_88e0);
  local_8bb8 = SGridPanel::FArguments::operator+(local_8bf0,local_8bf8);
  pLVar1 = SGridPanel::Layer::Layer(&local_8eb4,0);
  local_8bc8 = SGridPanel::Slot(&local_7bc8,0,1,(Layer)pLVar1->TheLayer);
  local_8bd8 = STextBlock::FArguments::FArguments(&local_3578);
  local_8be8 = &local_80a8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8700,L"STestSuite",L"GridPanelTest-Label02",
                      L"who kept all his cash in a bucket.");
  local_8be0 = TAttribute<FText>::TAttribute<FText>(local_8be8,pFVar2);
  local_8bd0 = STextBlock::FArguments::Text(local_8bd8,local_8be0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f0b);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8468,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14bc,&local_8f0b);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8710,local_8bd0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_88f0,pTVar4);
  local_8bc0 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8bc8,&local_88f0);
  local_8b80 = SGridPanel::FArguments::operator+(local_8bb8,local_8bc0);
  pLVar1 = SGridPanel::Layer::Layer(&local_8eb0,0);
  local_8b90 = SGridPanel::Slot(&local_7c60,0,2,(Layer)pLVar1->TheLayer);
  local_8ba0 = STextBlock::FArguments::FArguments(&local_3ad0);
  local_8bb0 = &local_8078;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8720,L"STestSuite",L"GridPanelTest-Label03",
                      L"But his daughter, named Nan,");
  local_8ba8 = TAttribute<FText>::TAttribute<FText>(local_8bb0,pFVar2);
  local_8b98 = STextBlock::FArguments::Text(local_8ba0,local_8ba8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f0a);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8480,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14c1,&local_8f0a);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8730,local_8b98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8900,pTVar4);
  local_8b88 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8b90,&local_8900);
  local_8b48 = SGridPanel::FArguments::operator+(local_8b80,local_8b88);
  pLVar1 = SGridPanel::Layer::Layer(&local_8eac,0);
  local_8b58 = SGridPanel::Slot(&local_7cf8,0,3,(Layer)pLVar1->TheLayer);
  local_8b68 = STextBlock::FArguments::FArguments(&local_4028);
  local_8b78 = &local_8048;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8740,L"STestSuite",L"GridPanelTest-Label04",L"Ran away with a man");
  local_8b70 = TAttribute<FText>::TAttribute<FText>(local_8b78,pFVar2);
  local_8b60 = STextBlock::FArguments::Text(local_8b68,local_8b70);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f09);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8498,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14c6,&local_8f09);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8750,local_8b60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8910,pTVar4);
  local_8b50 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8b58,&local_8910);
  local_8b10 = SGridPanel::FArguments::operator+(local_8b48,local_8b50);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ea8,0);
  local_8b20 = SGridPanel::Slot(&local_7d90,0,4,(Layer)pLVar1->TheLayer);
  local_8b30 = STextBlock::FArguments::FArguments(&local_4580);
  local_8b40 = &local_8018;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8760,L"STestSuite",L"GridPanelTest-Label05",
                      L"And as for the bucket, Nantucket.");
  local_8b38 = TAttribute<FText>::TAttribute<FText>(local_8b40,pFVar2);
  local_8b28 = STextBlock::FArguments::Text(local_8b30,local_8b38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f08);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_84b0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14cb,&local_8f08);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8770,local_8b28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8920,pTVar4);
  local_8b18 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8b20,&local_8920);
  local_8ab0 = SGridPanel::FArguments::operator+(local_8b10,local_8b18);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ea4,0);
  local_8af8 = SGridPanel::Slot(&local_7e28,1,1,(Layer)pLVar1->TheLayer);
  local_8b08 = &local_8830;
  local_8ee0[0] = 2;
  local_8b00 = (TOptional<int>)TOptional<int>::TOptional<int>(local_8b08,local_8ee0);
  local_8ac0 = SGridPanel::FSlot::FSlotArguments::RowSpan(local_8af8,local_8b00);
  local_8ad0 = SBorder::FArguments::FArguments(&local_6508);
  local_8ae0 = STextBlock::FArguments::FArguments(&local_4ad8);
  local_8af0 = &local_7fe8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8780,L"STestSuite",L"GridPanelTest-Rowspan2Label",L"RowSpan = 2!");
  local_8ae8 = TAttribute<FText>::TAttribute<FText>(local_8af0,pFVar2);
  local_8ad8 = STextBlock::FArguments::Text(local_8ae0,local_8ae8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f07);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_84c8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14d3,&local_8f07);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_8790,local_8ad8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8930,pTVar4);
  local_8ac8 = SBorder::FArguments::operator[](local_8ad0,&local_8930);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f06);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_84e0,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14d1,&local_8f06);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_87a0,local_8ac8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_8940,pTVar6);
  local_8ab8 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8ac0,&local_8940);
  local_8a68 = SGridPanel::FArguments::operator+(local_8ab0,local_8ab8);
  pLVar1 = SGridPanel::Layer::Layer(&local_8ea0,0);
  local_8a78 = SGridPanel::Slot(&local_7ec0,2,1,(Layer)pLVar1->TheLayer);
  local_8a88 = SBorder::FArguments::FArguments(&local_68e8);
  local_8a98 = STextBlock::FArguments::FArguments(&local_5030);
  local_8aa8 = &local_7fb8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_87b0,L"STestSuite",L"GridPanelTest-Stretch1Label",L"Stretch = 1");
  local_8aa0 = TAttribute<FText>::TAttribute<FText>(local_8aa8,pFVar2);
  local_8a90 = STextBlock::FArguments::Text(local_8a98,local_8aa0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f05);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_84f8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14da,&local_8f05);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_87c0,local_8a90);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8950,pTVar4);
  local_8a80 = SBorder::FArguments::operator[](local_8a88,&local_8950);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f04);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_8510,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14d8,&local_8f04);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_87d0,local_8a80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_8960,pTVar6);
  local_8a70 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8a78,&local_8960);
  local_8a20 = SGridPanel::FArguments::operator+(local_8a68,local_8a70);
  pLVar1 = SGridPanel::Layer::Layer(&local_8e9c,0);
  local_8a30 = SGridPanel::Slot(&local_7f58,3,2,(Layer)pLVar1->TheLayer);
  local_8a40 = SBorder::FArguments::FArguments(&local_6cc8);
  local_8a50 = STextBlock::FArguments::FArguments(&local_5588);
  local_8a60 = &local_7f88;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_87e0,L"STestSuite",L"GridPanelTest-Stretch2Label",L"Stretch = 2");
  local_8a58 = TAttribute<FText>::TAttribute<FText>(local_8a60,pFVar2);
  local_8a48 = STextBlock::FArguments::Text(local_8a50,local_8a58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f03);
  pTVar3 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_82d0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14e1,&local_8f03);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_87f0,local_8a48);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8970,pTVar4);
  local_8a38 = SBorder::FArguments::operator[](local_8a40,&local_8970);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f02);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_82e8,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14df,&local_8f02);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_8800,local_8a38);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_8980,pTVar6);
  local_8a28 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8a30,&local_8980);
  local_8a18 = SGridPanel::FArguments::operator+(local_8a20,local_8a28);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8f01);
  pTVar7 = MakeTDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
                     (&local_8300,"SGridPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x14b2,&local_8f01);
  pTVar8 = TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_8810,local_8a18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanel>(&local_8990,pTVar8);
  local_8a08 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8a10,&local_8990);
  local_89d8 = SVerticalBox::FArguments::operator+(local_8a00,local_8a08);
  local_89e8 = SVerticalBox::Slot(&local_75d8);
  local_89f8 = &local_8278;
  local_8ee0[1] = 1;
  local_89f0 = TAttribute<float>::TAttribute<float><int>(local_89f8,local_8ee0 + 1);
  local_89e0 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_89e8,local_89f0);
  local_89d0 = SVerticalBox::FArguments::operator+(local_89d8,local_89e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_8f00);
  this_00 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8318,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1478,local_8f00);
  pTVar9 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_8820,local_89d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_89a0,pTVar9);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_89c8,&local_89a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_89a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8820.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8318._Widget.SharedReferenceCount);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_75d8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8990);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8810.SharedReferenceCount);
  TSharedPtr<SGridPanel,1>::~TSharedPtr<SGridPanel,1>(&local_8300._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8980);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8800.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_82e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8970);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_87f0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_82d0);
  FText::~FText(&local_87e0);
  STextBlock::FArguments::~FArguments(&local_5588);
  SBorder::FArguments::~FArguments(&local_6cc8);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7f58);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8960);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_87d0.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_8510);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8950);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_87c0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_84f8);
  FText::~FText(&local_87b0);
  STextBlock::FArguments::~FArguments(&local_5030);
  SBorder::FArguments::~FArguments(&local_68e8);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7ec0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8940);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_87a0);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_84e0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8930);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8790);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_84c8);
  FText::~FText(&local_8780);
  STextBlock::FArguments::~FArguments(&local_4ad8);
  SBorder::FArguments::~FArguments(&local_6508);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7e28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8920);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8770);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_84b0);
  FText::~FText(&local_8760);
  STextBlock::FArguments::~FArguments(&local_4580);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7d90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8910);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8750);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8498);
  FText::~FText(&local_8740);
  STextBlock::FArguments::~FArguments(&local_4028);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7cf8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8900);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8730);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8480);
  FText::~FText(&local_8720);
  STextBlock::FArguments::~FArguments(&local_3ad0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7c60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_88f0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8710);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8468);
  FText::~FText(&local_8700);
  STextBlock::FArguments::~FArguments(&local_3578);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7bc8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_88e0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_86f0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8450);
  FText::~FText(&local_86e0);
  STextBlock::FArguments::~FArguments(&local_3020);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7b30);
  TAttribute<float>::~TAttribute<float>(&local_8590);
  TAttribute<float>::~TAttribute<float>(&local_8570);
  SGridPanel::FArguments::~FArguments(&local_7118);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_74f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_88d0);
  TSharedRef<SGridPanel,1>::~TSharedRef<SGridPanel,1>(&local_86d0);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>(&local_8438);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_88c0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_86c0);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_8420);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_88b0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_86b0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8408);
  FText::~FText(&local_86a0);
  STextBlock::FArguments::~FArguments(&local_2ac8);
  SBorder::FArguments::~FArguments(&local_6128);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7a98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_88a0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_8690);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_83f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8890);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8680);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_83d8);
  FText::~FText(&local_8670);
  STextBlock::FArguments::~FArguments(&local_2570);
  SBorder::FArguments::~FArguments(&local_5d48);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7a00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_89c0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_8660);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_83c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8870);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8650);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_83a8);
  FText::~FText(&local_8640);
  STextBlock::FArguments::~FArguments(&local_2018);
  SBorder::FArguments::~FArguments(&local_5968);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7968);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8860);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8630);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8390);
  FText::~FText(&local_8620);
  STextBlock::FArguments::~FArguments(&local_1ac0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_78d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8850);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8610);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8378);
  FText::~FText(&local_8600);
  STextBlock::FArguments::~FArguments(&local_1568);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7838);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8840);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_85f0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8360);
  FText::~FText(&local_85e0);
  STextBlock::FArguments::~FArguments(&local_1010);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_77a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_89b0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_85d0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8348);
  FText::~FText(&local_85c0);
  STextBlock::FArguments::~FArguments(&local_ab8);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7708);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8880);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_85b0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8330);
  FText::~FText(&local_85a0);
  STextBlock::FArguments::~FArguments(&local_560);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_7670);
  TAttribute<float>::~TAttribute<float>(&local_8550);
  TAttribute<float>::~TAttribute<float>(&local_8530);
  SGridPanel::FArguments::~FArguments(&local_6ef0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7408);
  SVerticalBox::FArguments::~FArguments(&local_7320);
  return;
}

