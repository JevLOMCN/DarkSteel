// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 9

// AnimTime_OnChanged @ 14306e730

void __thiscall SAnimTest::AnimTime_OnChanged(SAnimTest *this,float param_1)

{
  FCurveSequence *pFVar1;
  FCurveHandle *pFVar2;
  longlong lVar3;
  FCurveHandle *pFVar4;
  FCurveHandle local_a8;
  FCurveHandle local_98;
  FCurveSequence local_88;
  
  this->AnimTime = param_1;
  pFVar1 = FCurveSequence::FCurveSequence(&local_88);
  FCurveSequence::operator=(&this->SpawnAnimation,pFVar1);
  FCurveSequence::~FCurveSequence(&local_88);
  pFVar2 = FCurveSequence::AddCurve(&this->SpawnAnimation,&local_a8,0.0,this->AnimTime,Linear);
  pFVar4 = &this->ZoomCurve;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->OwnerSequence = *(undefined1 *)&pFVar2->OwnerSequence;
    pFVar2 = (FCurveHandle *)((longlong)&pFVar2->OwnerSequence + 1);
    pFVar4 = (FCurveHandle *)((longlong)&pFVar4->OwnerSequence + 1);
  }
  pFVar2 = FCurveSequence::AddCurve
                     (&this->SpawnAnimation,&local_98,this->AnimTime,this->AnimTime,Linear);
  pFVar4 = &this->FadeCurve;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->OwnerSequence = *(undefined1 *)&pFVar2->OwnerSequence;
    pFVar2 = (FCurveHandle *)((longlong)&pFVar2->OwnerSequence + 1);
    pFVar4 = (FCurveHandle *)((longlong)&pFVar4->OwnerSequence + 1);
  }
  return;
}

// Construct @ 143074ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAnimTest::Construct(SAnimTest *this,FArguments *param_1)

{
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar1;
  FSlotArguments *pFVar2;
  FSlotArguments *pFVar3;
  FText *pFVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SSpinBox<float>,1> *pTVar7;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SButton,1> *pTVar9;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SHorizontalBox,1> *pTVar11;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar12;
  TSharedRef<SBorder,1> *pTVar13;
  FMargin *pFVar14;
  FName *pFVar15;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar16;
  TSharedRef<SImage,1> *pTVar17;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar18;
  TSharedRef<SVerticalBox,1> *pTVar19;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SSpacer,1> *pTVar20;
  longlong lVar21;
  code **ppcVar22;
  undefined1 *puVar23;
  pmf_a1463baf *ppVar24;
  pmf_4dbb4a0b *ppVar25;
  pmf_f4efc5ba *ppVar26;
  pmf_2a52f584 *ppVar27;
  pmf_7e893a6e *ppVar28;
  pmf_76d03210 *ppVar29;
  T0RequiredArgs local_7928;
  T0RequiredArgs local_7927;
  T0RequiredArgs local_7926;
  T0RequiredArgs local_7925;
  T0RequiredArgs local_7924;
  T0RequiredArgs local_7923;
  T0RequiredArgs local_7922;
  T0RequiredArgs local_7921;
  T0RequiredArgs local_7920;
  T0RequiredArgs local_791f;
  T0RequiredArgs local_791e;
  T0RequiredArgs local_791d;
  T0RequiredArgs local_791c;
  T0RequiredArgs local_791b;
  T0RequiredArgs local_791a;
  T0RequiredArgs local_7919;
  T0RequiredArgs local_7918;
  T0RequiredArgs local_7917;
  T0RequiredArgs local_7916;
  T0RequiredArgs local_7915;
  T0RequiredArgs local_7914;
  T0RequiredArgs local_7913;
  T0RequiredArgs local_7912 [2];
  float local_7910;
  float local_790c;
  float local_7908;
  int local_7904 [5];
  ISlateStyle *local_78f0;
  ISlateStyle *local_78e8;
  ISlateStyle *local_78e0;
  longlong *local_78d8;
  undefined1 *local_78d0;
  undefined1 *local_78c8;
  TAttribute<FText> *local_78c0;
  TAttribute<FText> *local_78b8;
  FArguments *local_78b0;
  FArguments *local_78a8;
  FSlotArguments *local_78a0;
  FSlotArguments *local_7898;
  FArguments *local_7890;
  undefined1 *local_7888;
  TAttribute<TOptional<float>_> *local_7880;
  TAttribute<TOptional<float>_> *local_7878;
  FArguments *local_7870;
  TAttribute<TOptional<float>_> *local_7868;
  TAttribute<TOptional<float>_> *local_7860;
  FArguments *local_7858;
  TAttribute<float> *local_7850;
  TAttribute<float> *local_7848;
  FArguments *local_7840;
  FArguments *local_7838;
  FArguments *local_7830;
  FArguments *local_7828;
  FSlotArguments *local_7820;
  FSlotArguments *local_7818;
  FArguments *local_7810;
  TAttribute<FText> *local_7808;
  TAttribute<FText> *local_7800;
  FArguments *local_77f8;
  FArguments *local_77f0;
  FArguments *local_77e8;
  FSlotArguments *local_77e0;
  FSlotArguments *local_77d8;
  FArguments *local_77d0;
  TAttribute<FText> *local_77c8;
  TAttribute<FText> *local_77c0;
  FArguments *local_77b8;
  FArguments *local_77b0;
  FArguments *local_77a8;
  FSlotArguments *local_77a0;
  FSlotArguments *local_7798;
  FArguments *local_7790;
  TAttribute<FText> *local_7788;
  TAttribute<FText> *local_7780;
  FArguments *local_7778;
  FArguments *local_7770;
  FArguments *local_7768;
  FSlotArguments *local_7760;
  FSlotArguments *local_7758;
  FArguments *local_7750;
  FArguments *local_7748;
  FSlotArguments *local_7740;
  FSlotArguments *local_7738;
  FArguments *local_7730;
  TAttribute<float> *local_7728;
  TAttribute<float> *local_7720;
  FSlotArguments *local_7718;
  FArguments *local_7710;
  FArguments *local_7708;
  FArguments *local_7700;
  undefined1 *local_76f8;
  undefined1 *local_76f0;
  undefined1 *local_76e8;
  TAttribute<TOptional<EMouseCursor::Type>_> *local_76e0;
  FArguments *local_76d8;
  FArguments *local_76d0;
  FArguments *local_76c8;
  TAttribute<FText> *local_76c0;
  TAttribute<FText> *local_76b8;
  FArguments *local_76b0;
  FArguments *local_76a8;
  FArguments *local_76a0;
  FArguments *local_7698;
  FArguments *local_7690;
  FSlotArguments *local_7688;
  FSlotArguments *local_7680;
  FArguments *local_7678;
  TAttribute<float> *local_7670;
  TAttribute<float> *local_7668;
  FSlotArguments *local_7660;
  undefined1 *local_7658;
  undefined1 *local_7650;
  FArguments *local_7648;
  FArguments *local_7640;
  TAttribute<FMargin> *local_7638;
  TAttribute<FMargin> *local_7630;
  FArguments *local_7628;
  FArguments *local_7620;
  undefined1 *local_7618;
  undefined1 *local_7610;
  FName *local_7608;
  FName local_7600;
  code *local_75f8;
  FSlateBrush *local_75f0;
  TAttribute<FSlateBrush_const_*> *local_75e8;
  TAttribute<FSlateBrush_const_*> *local_75e0;
  FArguments *local_75d8;
  FArguments *local_75d0;
  FSlotArguments *local_75c8;
  FSlotArguments *local_75c0;
  FArguments *local_75b8;
  TAttribute<FText> *local_75b0;
  TAttribute<FText> *local_75a8;
  FArguments *local_75a0;
  FArguments *local_7598;
  FSlotArguments *local_7590;
  FSlotArguments *local_7588;
  FArguments *local_7580;
  TAttribute<FText> *local_7578;
  TAttribute<FText> *local_7570;
  FArguments *local_7568;
  FArguments *local_7560;
  FSlotArguments *local_7558;
  FSlotArguments *local_7550;
  FArguments *local_7548;
  FName *local_7540;
  FName local_7538;
  code *local_7530;
  FSlateBrush *local_7528;
  TAttribute<FSlateBrush_const_*> *local_7520;
  TAttribute<FSlateBrush_const_*> *local_7518;
  FArguments *local_7510;
  FArguments *local_7508;
  FSlotArguments *local_7500;
  FSlotArguments *local_74f8;
  FArguments *local_74f0;
  TAttribute<FText> *local_74e8;
  TAttribute<FText> *local_74e0;
  FArguments *local_74d8;
  FArguments *local_74d0;
  FSlotArguments *local_74c8;
  FSlotArguments *local_74c0;
  FArguments *local_74b8;
  FArguments *local_74b0;
  FArguments *local_74a8;
  FArguments *local_74a0;
  FSlotArguments *local_7498;
  FSlotArguments *local_7490;
  FArguments *local_7488;
  FArguments *local_7480;
  FSlotArguments *local_7478;
  FSlotArguments *local_7470;
  FArguments *local_7468;
  TAttribute<float> *local_7460;
  TAttribute<float> *local_7458;
  FSlotArguments *local_7450;
  undefined1 *local_7448;
  FArguments *local_7440;
  FSlotArguments *local_7438;
  FSlotArguments *local_7430;
  FArguments *local_7428;
  undefined1 *local_7420;
  FName *local_7418;
  FName local_7410;
  code *local_7408;
  FSlateBrush *local_7400;
  TAttribute<FSlateBrush_const_*> *local_73f8;
  TAttribute<FSlateBrush_const_*> *local_73f0;
  FArguments *local_73e8;
  FArguments *local_73e0;
  FSlotArguments *local_73d8;
  FSlotArguments *local_73d0;
  FArguments *local_73c8;
  FArguments *local_73c0;
  FArguments *local_73b8;
  FArguments *local_73b0;
  FSlotArguments *local_73a8;
  FSlotArguments *local_73a0;
  FArguments *local_7398;
  FArguments *local_7390;
  FArguments *local_7388;
  FArguments *local_7380;
  FSlotArguments *local_7378;
  FSlotArguments *local_7370;
  FArguments *local_7368;
  FArguments *local_7360;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_7358;
  TSharedRef<SWidget,1> local_7350;
  TSharedRef<SWidget,1> local_7340;
  TSharedRef<SWidget,1> local_7330;
  code *local_7320;
  undefined4 local_7318;
  code *local_7310;
  undefined4 local_7308;
  code *local_7300;
  undefined4 local_72f8;
  code *local_72f0;
  undefined4 local_72e8;
  code *local_72e0;
  undefined4 local_72d8;
  code *local_72d0;
  undefined4 local_72c8;
  code *local_72c0;
  undefined4 local_72b8;
  code *local_72b0;
  undefined4 local_72a8;
  TSharedRef<SWidget,1> local_72a0;
  TSharedRef<SWidget,1> local_7290;
  TSharedRef<SWidget,1> local_7280;
  TSharedRef<SWidget,1> local_7270;
  TSharedRef<SWidget,1> local_7260;
  TSharedRef<SWidget,1> local_7250;
  TSharedRef<SWidget,1> local_7240;
  TSharedRef<SWidget,1> local_7230;
  TSharedRef<SWidget,1> local_7220;
  TSharedRef<SWidget,1> local_7210;
  TSharedRef<SWidget,1> local_7200;
  TSharedRef<SWidget,1> local_71f0;
  TSharedRef<SWidget,1> local_71e0;
  TSharedRef<SWidget,1> local_71d0;
  TSharedRef<SWidget,1> local_71c0;
  TSharedRef<SWidget,1> local_71b0;
  TSharedRef<SWidget,1> local_71a0;
  TSharedRef<SWidget,1> local_7190;
  TSharedRef<SWidget,1> local_7180;
  TSharedRef<SWidget,1> local_7170;
  FName local_7160;
  FName local_7158;
  FName local_7150;
  undefined1 local_7148 [16];
  pmf_a1463baf local_7138;
  undefined1 local_7128 [16];
  pmf_4dbb4a0b local_7118;
  undefined1 local_7108 [16];
  pmf_f4efc5ba local_70f8;
  undefined1 local_70e8 [16];
  pmf_f4efc5ba local_70d8;
  undefined1 local_70c8 [16];
  pmf_f4efc5ba local_70b8;
  undefined1 local_70a8 [16];
  pmf_2a52f584 local_7098;
  undefined1 local_7088 [16];
  pmf_7e893a6e local_7078;
  undefined1 local_7068 [16];
  pmf_76d03210 local_7058;
  TSharedRef<SVerticalBox,1> local_7048;
  TSharedRef<SBorder,1> local_7038;
  TSharedRef<SVerticalBox,1> local_7028;
  TSharedRef<SBorder,1> local_7018;
  TSharedRef<SHorizontalBox,1> local_7008;
  TSharedRef<SImage,1> local_6ff8;
  TSharedRef<SSpacer,1> local_6fe8;
  TSharedRef<SVerticalBox,1> local_6fd8;
  TSharedRef<SButton,1> local_6fc8;
  TSharedRef<SHorizontalBox,1> local_6fb8;
  TSharedRef<STextBlock,1> local_6fa8;
  FText local_6f98;
  TSharedRef<SImage,1> local_6f88;
  TSharedRef<STextBlock,1> local_6f78;
  FText local_6f68;
  TSharedRef<SButton,1> local_6f58;
  FText local_6f48;
  TSharedRef<SImage,1> local_6f38;
  TSharedRef<SBorder,1> local_6f28;
  TSharedRef<STextBlock,1> local_6f18;
  FText local_6f08;
  TSharedRef<SHorizontalBox,1> local_6ef8;
  TSharedRef<SButton,1> local_6ee8;
  FText local_6ed8;
  TSharedRef<SButton,1> local_6ec8;
  FText local_6eb8;
  TSharedRef<SButton,1> local_6ea8;
  FText local_6e98;
  TSharedRef<SSpinBox<float>,1> local_6e88;
  TSharedRef<STextBlock,1> local_6e78;
  FText local_6e68;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6e58;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_6e40;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_6e28;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_6e10;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_6df8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6de0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_6dc8;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_6db0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_6d98;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_6d80;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6d68;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6d50;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_6d38;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6d20;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_6d08;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_6cf0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_6cd8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6cc0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6ca8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_6c90;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_6c78;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_6c60;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_6c48;
  FMargin local_6c30;
  TAttribute<float> local_6c20;
  TAttribute<float> local_6c00;
  TAttribute<float> local_6be0;
  TAttribute<float> local_6bc0;
  TAttribute<TOptional<float>_> local_6ba0;
  TAttribute<TOptional<float>_> local_6b78;
  undefined1 local_6b50 [40];
  TAttribute<FSlateBrush_const_*> local_6b28;
  TAttribute<FSlateBrush_const_*> local_6b00;
  TAttribute<FSlateBrush_const_*> local_6ad8;
  TAttribute<FText> local_6ab0;
  TAttribute<FText> local_6a80;
  TAttribute<FText> local_6a50;
  TAttribute<FText> local_6a20;
  TAttribute<FText> local_69f0;
  TAttribute<FMargin> local_69c0;
  TAttribute<FText> local_6990;
  TAttribute<FText> local_6960;
  TAttribute<FText> local_6930;
  FSlotArguments local_6900;
  FSlotArguments local_6818;
  FSlotArguments local_6730;
  FSlotArguments local_6648;
  FSlotArguments local_6560;
  FSlotArguments local_6478;
  FSlotArguments local_6390;
  FSlotArguments local_62a8;
  FSlotArguments local_61c0;
  FSlotArguments local_60d8;
  FSlotArguments local_5ff0;
  FSlotArguments local_5f08;
  FSlotArguments local_5e20;
  FSlotArguments local_5d38;
  FSlotArguments local_5c50;
  FSlotArguments local_5b68;
  FSlotArguments local_5a80;
  FSlotArguments local_5998;
  FArguments local_58b0;
  FArguments local_56a8;
  FArguments local_54a0;
  FArguments local_5298;
  FArguments local_5090;
  FArguments local_4e88;
  FArguments local_4c80;
  FArguments local_4a58;
  FArguments local_47b0;
  FArguments local_4508;
  FArguments local_4260;
  FArguments local_3e80;
  FArguments local_3aa0;
  FArguments local_36c0;
  FArguments local_3180;
  FArguments local_2c40;
  FArguments local_2700;
  FArguments local_21c0;
  FArguments local_1c80;
  FArguments local_1728;
  FArguments local_11d0;
  FArguments local_c78;
  FArguments local_720;
  undefined8 uStack_18;
  
  uStack_18 = 0x143074af6;
  local_78d8 = &this->_padding_;
  pTVar1 = TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::HAlign
                     ((TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>
                       *)local_78d8,HAlign_Fill);
  local_78d0 = &pTVar1->field_0x50;
  local_7358 = TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::VAlign
                         ((TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>
                           *)local_78d0,VAlign_Fill);
  local_7730 = SVerticalBox::FArguments::FArguments(&local_4e88);
  pFVar2 = SVerticalBox::Slot(&local_5998);
  pFVar2 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar2);
  local_78c8 = &pFVar2->field_0x18;
  local_7740 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_78c8,__real_40400000);
  local_7890 = SHorizontalBox::FArguments::FArguments(&local_5090);
  pFVar3 = SHorizontalBox::Slot(&local_5a80);
  local_78a0 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_78b0 = STextBlock::FArguments::FArguments(&local_c78);
  local_78c0 = &local_6ab0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6e68,L"STestSuite",L"AnimTestDurationLabel",L"Duration: ");
  local_78b8 = TAttribute<FText>::TAttribute<FText>(local_78c0,pFVar4);
  local_78a8 = STextBlock::FArguments::Text(local_78b0,local_78b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7928);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6e58,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xfd4,&local_7928);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6e78,local_78a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7210,pTVar6);
  local_7898 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_78a0,&local_7210);
  local_7810 = SHorizontalBox::FArguments::operator+(local_7890,local_7898);
  pFVar3 = SHorizontalBox::Slot(&local_5b68);
  pFVar3 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_7888 = &pFVar3->field_0x18;
  local_7820 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7888,0.0,0.0,__real_40a00000,0.0);
  local_7870 = SSpinBox<float>::FArguments::FArguments(&local_720);
  local_7880 = &local_6ba0;
  local_7910 = 0.0;
  local_7878 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_7880,&local_7910);
  local_7858 = SSpinBox<float>::FArguments::MinValue(local_7870,local_7878);
  local_7868 = &local_6b78;
  local_790c = __real_40000000;
  local_7860 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_7868,&local_790c);
  local_7840 = SSpinBox<float>::FArguments::MaxValue(local_7858,local_7860);
  local_7850 = &local_6c20;
  local_7908 = __real_3c23d70a;
  local_7848 = TAttribute<float>::TAttribute<float>(local_7850,&local_7908);
  local_7838 = SSpinBox<float>::FArguments::Delta(local_7840,local_7848);
  local_7320 = GetAnimTime;
  local_7318 = 0;
  ppcVar22 = &local_7320;
  puVar23 = local_7148;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_7148;
  ppVar24 = &local_7138;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar24 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar24 = (pmf_a1463baf *)&ppVar24->field_0x1;
  }
  local_7830 = SSpinBox<float>::FArguments::Value<SAnimTest>(local_7838,this,&local_7138);
  local_7310 = AnimTime_OnChanged;
  local_7308 = 0;
  ppcVar22 = &local_7310;
  puVar23 = local_7128;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_7128;
  ppVar25 = &local_7118;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar25 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar25 = (pmf_4dbb4a0b *)&ppVar25->field_0x1;
  }
  local_7828 = SSpinBox<float>::FArguments::OnValueChanged<SAnimTest>(local_7830,this,&local_7118);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7927);
  this_00 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                      (&local_6c48,"SSpinBox<float>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xfdb,&local_7927);
  pTVar7 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_6e88,local_7828);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_7330,pTVar7);
  local_7818 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7820,&local_7330);
  local_77d0 = SHorizontalBox::FArguments::operator+(local_7810,local_7818);
  pFVar3 = SHorizontalBox::Slot(&local_5c50);
  local_77e0 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_77f8 = SButton::FArguments::FArguments(&local_21c0);
  local_7808 = &local_6a80;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6e98,L"STestSuite",L"AnimTestPlayButtonLabel",L"Play Animation");
  local_7800 = TAttribute<FText>::TAttribute<FText>(local_7808,pFVar4);
  local_77f0 = SButton::FArguments::Text(local_77f8,local_7800);
  local_7300 = PlayAnimation_OnClicked;
  local_72f8 = 0;
  ppcVar22 = &local_7300;
  puVar23 = local_7108;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_7108;
  ppVar26 = &local_70f8;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar26 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar26 = (pmf_f4efc5ba *)&ppVar26->field_0x1;
  }
  local_77e8 = SButton::FArguments::OnClicked<SAnimTest>(local_77f0,this,&local_70f8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7926);
  pTVar8 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_6c60,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xfe5,&local_7926);
  pTVar9 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_6ea8,local_77e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7340,pTVar9);
  local_77d8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_77e0,&local_7340);
  local_7790 = SHorizontalBox::FArguments::operator+(local_77d0,local_77d8);
  pFVar3 = SHorizontalBox::Slot(&local_5d38);
  local_77a0 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_77b8 = SButton::FArguments::FArguments(&local_2700);
  local_77c8 = &local_6a50;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6eb8,L"STestSuite",L"AnimTestReverseButtonLabel",L"Reverse");
  local_77c0 = TAttribute<FText>::TAttribute<FText>(local_77c8,pFVar4);
  local_77b0 = SButton::FArguments::Text(local_77b8,local_77c0);
  local_72f0 = Reverse_OnClicked;
  local_72e8 = 0;
  ppcVar22 = &local_72f0;
  puVar23 = local_70e8;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_70e8;
  ppVar26 = &local_70d8;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar26 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar26 = (pmf_f4efc5ba *)&ppVar26->field_0x1;
  }
  local_77a8 = SButton::FArguments::OnClicked<SAnimTest>(local_77b0,this,&local_70d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7925);
  pTVar8 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_6c78,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xfec,&local_7925);
  pTVar9 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_6ec8,local_77a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7170,pTVar9);
  local_7798 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_77a0,&local_7170);
  local_7750 = SHorizontalBox::FArguments::operator+(local_7790,local_7798);
  pFVar3 = SHorizontalBox::Slot(&local_5e20);
  local_7760 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_7778 = SButton::FArguments::FArguments(&local_2c40);
  local_7788 = &local_6a20;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6ed8,L"STestSuite",L"AnimTestPlayReverseButtonLabel",L"PlayReverse");
  local_7780 = TAttribute<FText>::TAttribute<FText>(local_7788,pFVar4);
  local_7770 = SButton::FArguments::Text(local_7778,local_7780);
  local_72e0 = PlayReverse_OnClicked;
  local_72d8 = 0;
  ppcVar22 = &local_72e0;
  puVar23 = local_70c8;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_70c8;
  ppVar26 = &local_70b8;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar26 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar26 = (pmf_f4efc5ba *)&ppVar26->field_0x1;
  }
  local_7768 = SButton::FArguments::OnClicked<SAnimTest>(local_7770,this,&local_70b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7924);
  pTVar8 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_6c90,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xff3,&local_7924);
  pTVar9 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_6ee8,local_7768);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7180,pTVar9);
  local_7758 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7760,&local_7180);
  local_7748 = SHorizontalBox::FArguments::operator+(local_7750,local_7758);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7923);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6ca8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xfd0,&local_7923);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_6ef8,local_7748);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_7190,pTVar11);
  local_7738 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7740,&local_7190);
  local_7368 = SVerticalBox::FArguments::operator+(local_7730,local_7738);
  local_7718 = SVerticalBox::Slot(&local_5f08);
  local_7728 = &local_6c00;
  local_7904[0] = 1;
  local_7720 = TAttribute<float>::TAttribute<float><int>(local_7728,local_7904);
  local_7378 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_7718,local_7720);
  local_7710 = SBorder::FArguments::FArguments(&local_3aa0);
  local_72d0 = GetContentScale;
  local_72c8 = 0;
  ppcVar22 = &local_72d0;
  puVar23 = local_70a8;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_70a8;
  ppVar27 = &local_7098;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar27 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar27 = (pmf_2a52f584 *)&ppVar27->field_0x1;
  }
  local_7708 = SBorder::FArguments::ContentScale<SAnimTest>(local_7710,this,&local_7098);
  local_7700 = SBorder::FArguments::HAlign(local_7708,HAlign_Center);
  local_7388 = SBorder::FArguments::VAlign(local_7700,VAlign_Center);
  local_7678 = SVerticalBox::FArguments::FArguments(&local_5298);
  pFVar2 = SVerticalBox::Slot(&local_5ff0);
  pFVar2 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar2);
  local_76f8 = &pFVar2->field_0x48;
  pFVar2 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_76f8,HAlign_Fill);
  local_76f0 = &pFVar2->field_0x48;
  local_7688 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_76f0,VAlign_Top);
  local_76d8 = SBorder::FArguments::FArguments(&local_3e80);
  local_76e8 = local_6b50;
  local_7904[1] = 7;
  local_76e0 = TAttribute<TOptional<enum_EMouseCursor::Type>_>::
               TAttribute<TOptional<enum_EMouseCursor::Type>_><enum_EMouseCursor::Type>
                         (local_76e8,(Type *)(local_7904 + 1));
  local_76d0 = TSlateBaseNamedArgs<SBorder>::Cursor
                         ((TSlateBaseNamedArgs<SBorder> *)local_76d8,local_76e0);
  local_76c8 = SBorder::FArguments::Padding(local_76d0,__real_40400000);
  local_7698 = SBorder::FArguments::HAlign(local_76c8,HAlign_Center);
  local_76b0 = STextBlock::FArguments::FArguments(&local_11d0);
  local_76c0 = &local_69f0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6f08,L"STestSuite",L"AnimTestLabel",L"Animation Testing");
  local_76b8 = TAttribute<FText>::TAttribute<FText>(local_76c0,pFVar4);
  local_76a8 = STextBlock::FArguments::Text(local_76b0,local_76b8);
  local_72c0 = GetContentColor;
  local_72b8 = 0;
  ppcVar22 = &local_72c0;
  puVar23 = local_7088;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_7088;
  ppVar28 = &local_7078;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar28 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar28 = (pmf_7e893a6e *)&ppVar28->field_0x1;
  }
  local_76a0 = STextBlock::FArguments::ColorAndOpacity<SAnimTest>(local_76a8,this,&local_7078);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7922);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6cc0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x100c,&local_7922);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6f18,local_76a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_71a0,pTVar6);
  local_7690 = SBorder::FArguments::operator[](local_7698,&local_71a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7921);
  pTVar12 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_6cd8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1007,&local_7921);
  pTVar13 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar12,&local_6f28,local_7690);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_71b0,pTVar13);
  local_7680 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7688,&local_71b0);
  local_7398 = SVerticalBox::FArguments::operator+(local_7678,local_7680);
  local_7660 = SVerticalBox::Slot(&local_60d8);
  local_7670 = &local_6be0;
  local_7904[2] = 1;
  local_7668 = TAttribute<float>::TAttribute<float><int>(local_7670,local_7904 + 2);
  pFVar2 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_7660,local_7668);
  local_7658 = &pFVar2->field_0x48;
  pFVar2 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7658,HAlign_Fill);
  local_7650 = &pFVar2->field_0x48;
  local_73a8 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_7650,VAlign_Fill);
  local_7648 = SBorder::FArguments::FArguments(&local_4260);
  local_7640 = SBorder::FArguments::HAlign(local_7648,HAlign_Fill);
  local_7628 = SBorder::FArguments::VAlign(local_7640,VAlign_Fill);
  local_7638 = &local_69c0;
  pFVar14 = FMargin::FMargin(&local_6c30,__real_40400000);
  local_7630 = TAttribute<FMargin>::TAttribute<FMargin>(local_7638,pFVar14);
  local_7620 = SBorder::FArguments::Padding(local_7628,local_7630);
  local_72b0 = GetContentColorAsLinearColor;
  local_72a8 = 0;
  ppcVar22 = &local_72b0;
  puVar23 = local_7068;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar23 = *(undefined1 *)ppcVar22;
    ppcVar22 = (code **)((longlong)ppcVar22 + 1);
    puVar23 = puVar23 + 1;
  }
  puVar23 = local_7068;
  ppVar29 = &local_7058;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined1 *)ppVar29 = *puVar23;
    puVar23 = puVar23 + 1;
    ppVar29 = (pmf_76d03210 *)&ppVar29->field_0x1;
  }
  local_73b8 = SBorder::FArguments::ColorAndOpacity<SAnimTest>(local_7620,this,&local_7058);
  local_7468 = SHorizontalBox::FArguments::FArguments(&local_54a0);
  pFVar3 = SHorizontalBox::Slot(&local_61c0);
  pFVar3 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_7618 = &pFVar3->field_0x48;
  local_7478 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_7618,HAlign_Left);
  local_75b8 = SVerticalBox::FArguments::FArguments(&local_56a8);
  pFVar2 = SVerticalBox::Slot(&local_62a8);
  pFVar2 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar2);
  local_7610 = &pFVar2->field_0x48;
  local_75c8 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_7610,HAlign_Center);
  local_75d8 = SImage::FArguments::FArguments(&local_4508);
  local_75e8 = &local_6b28;
  local_78f0 = FCoreStyle::Get();
  local_75f8 = *(code **)((longlong)*local_78f0 + 0x50);
  local_7608 = &local_7150;
  pFVar15 = ::FName::FName(local_7608,L"AppIcon");
  local_7600 = *pFVar15;
  local_75f0 = (FSlateBrush *)(*local_75f8)(local_78f0,local_7600,0,0);
  local_75e0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_75e8,&local_75f0);
  local_75d0 = SImage::FArguments::Image(local_75d8,local_75e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7920);
  pTVar16 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_6cf0,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1028,&local_7920);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_6f38,local_75d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_71c0,pTVar17);
  local_75c0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_75c8,&local_71c0);
  local_7580 = SVerticalBox::FArguments::operator+(local_75b8,local_75c0);
  pFVar2 = SVerticalBox::Slot(&local_6390);
  local_7590 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar2);
  local_75a0 = SButton::FArguments::FArguments(&local_3180);
  local_75b0 = &local_6990;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6f48,L"STestSuite",L"ButtonTestLabel",L"Button Test");
  local_75a8 = TAttribute<FText>::TAttribute<FText>(local_75b0,pFVar4);
  local_7598 = SButton::FArguments::Text(local_75a0,local_75a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_791f);
  pTVar8 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_6d08,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x102e,&local_791f);
  pTVar9 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_6f58,local_7598);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_71d0,pTVar9);
  local_7588 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7590,&local_71d0);
  local_7548 = SVerticalBox::FArguments::operator+(local_7580,local_7588);
  pFVar2 = SVerticalBox::Slot(&local_6478);
  local_7558 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar2);
  local_7568 = STextBlock::FArguments::FArguments(&local_1728);
  local_7578 = &local_6960;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6f68,L"STestSuite",L"GenericTextItemTestLabel",L"Generic Text Item");
  local_7570 = TAttribute<FText>::TAttribute<FText>(local_7578,pFVar4);
  local_7560 = STextBlock::FArguments::Text(local_7568,local_7570);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_791e);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6d20,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1034,&local_791e);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6f78,local_7560);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_71e0,pTVar6);
  local_7550 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7558,&local_71e0);
  local_7488 = SVerticalBox::FArguments::operator+(local_7548,local_7550);
  pFVar2 = SVerticalBox::Slot(&local_6560);
  local_7498 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar2);
  local_74a8 = SButton::FArguments::FArguments(&local_36c0);
  local_74f0 = SHorizontalBox::FArguments::FArguments(&local_58b0);
  pFVar3 = SHorizontalBox::Slot(&local_6648);
  local_7500 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_7510 = SImage::FArguments::FArguments(&local_47b0);
  local_7520 = &local_6b00;
  local_78e8 = FCoreStyle::Get();
  local_7530 = *(code **)((longlong)*local_78e8 + 0x50);
  local_7540 = &local_7160;
  pFVar15 = ::FName::FName(local_7540,L"AppIcon");
  local_7538 = *pFVar15;
  local_7528 = (FSlateBrush *)(*local_7530)(local_78e8,local_7538,0,0);
  local_7518 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_7520,&local_7528);
  local_7508 = SImage::FArguments::Image(local_7510,local_7518);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_791d);
  pTVar16 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_6d38,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1040,&local_791d);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_6f88,local_7508);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_71f0,pTVar17);
  local_74f8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7500,&local_71f0);
  local_74b8 = SHorizontalBox::FArguments::operator+(local_74f0,local_74f8);
  pFVar3 = SHorizontalBox::Slot(&local_6730);
  local_74c8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_74d8 = STextBlock::FArguments::FArguments(&local_1c80);
  local_74e8 = &local_6930;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6f98,L"STestSuite",L"ButtonTextLabel",L"Button with content");
  local_74e0 = TAttribute<FText>::TAttribute<FText>(local_74e8,pFVar4);
  local_74d0 = STextBlock::FArguments::Text(local_74d8,local_74e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_791c);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6d50,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1045,&local_791c);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6fa8,local_74d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7200,pTVar6);
  local_74c0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_74c8,&local_7200);
  local_74b0 = SHorizontalBox::FArguments::operator+(local_74b8,local_74c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_791b);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6d68,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x103c,&local_791b);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_6fb8,local_74b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_7350,pTVar11);
  local_74a0 = SButton::FArguments::operator[](local_74a8,&local_7350);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_791a);
  pTVar8 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_6d80,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x103a,&local_791a);
  pTVar9 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_6fc8,local_74a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7220,pTVar9);
  local_7490 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7498,&local_7220);
  local_7480 = SVerticalBox::FArguments::operator+(local_7488,local_7490);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7919);
  pTVar18 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6d98,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1023,&local_7919);
  pTVar19 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_6fd8,local_7480);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_7230,pTVar19);
  local_7470 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7478,&local_7230);
  local_7428 = SHorizontalBox::FArguments::operator+(local_7468,local_7470);
  local_7450 = SHorizontalBox::Slot(&local_6818);
  local_7460 = &local_6bc0;
  local_7904[3] = 1;
  local_7458 = TAttribute<float>::TAttribute<float><int>(local_7460,local_7904 + 3);
  pFVar3 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_7450,local_7458);
  local_7448 = &pFVar3->field_0x18;
  local_7438 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7448,__real_40a00000);
  local_7440 = SSpacer::FArguments::FArguments(&local_4c80);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7918);
  this_01 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_6db0,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1050,&local_7918);
  pTVar20 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_6fe8,local_7440);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>(&local_7240,pTVar20);
  local_7430 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7438,&local_7240);
  local_73c8 = SHorizontalBox::FArguments::operator+(local_7428,local_7430);
  pFVar3 = SHorizontalBox::Slot(&local_6900);
  pFVar3 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar3);
  local_7420 = &pFVar3->field_0x48;
  local_73d8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_7420,HAlign_Right);
  local_73e8 = SImage::FArguments::FArguments(&local_4a58);
  local_73f8 = &local_6ad8;
  local_78e0 = FTestStyle::Get();
  local_7408 = *(code **)((longlong)*local_78e0 + 0x50);
  local_7418 = &local_7158;
  pFVar15 = ::FName::FName(local_7418,L"GammaReference");
  local_7410 = *pFVar15;
  local_7400 = (FSlateBrush *)(*local_7408)(local_78e0,local_7410,0,0);
  local_73f0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_73f8,&local_7400);
  local_73e0 = SImage::FArguments::Image(local_73e8,local_73f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7917);
  pTVar16 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_6dc8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1057,&local_7917);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_6ff8,local_73e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_7250,pTVar17);
  local_73d0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_73d8,&local_7250);
  local_73c0 = SHorizontalBox::FArguments::operator+(local_73c8,local_73d0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7916);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6de0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x101d,&local_7916);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_7008,local_73c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_7260,pTVar11);
  local_73b0 = SBorder::FArguments::operator[](local_73b8,&local_7260);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7915);
  pTVar12 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_6df8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1017,&local_7915);
  pTVar13 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar12,&local_7018,local_73b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7270,pTVar13);
  local_73a0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_73a8,&local_7270);
  local_7390 = SVerticalBox::FArguments::operator+(local_7398,local_73a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7914);
  pTVar18 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6e10,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1000,&local_7914);
  pTVar19 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_7028,local_7390);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_7280,pTVar19);
  local_7380 = SBorder::FArguments::operator[](local_7388,&local_7280);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7913);
  pTVar12 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_6e28,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xffb,&local_7913);
  pTVar13 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar12,&local_7038,local_7380);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7290,pTVar13);
  local_7370 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7378,&local_7290);
  local_7360 = SVerticalBox::FArguments::operator+(local_7368,local_7370);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_7912);
  pTVar18 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6e40,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xfca,local_7912);
  pTVar19 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_7048,local_7360);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_72a0,pTVar19);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_7358,&local_72a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_72a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7048.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_6e40._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7290);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7038.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_6e28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7280);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7028.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_6e10._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7270);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7018.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_6df8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7260);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7008.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_6de0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7250);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_6ff8.SharedReferenceCount);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_6dc8);
  SImage::FArguments::~FArguments(&local_4a58);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6900);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7240);
  TSharedRef<SSpacer,1>::~TSharedRef<SSpacer,1>(&local_6fe8);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>(&local_6db0);
  SSpacer::FArguments::~FArguments(&local_4c80);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6818);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7230);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_6fd8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_6d98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7220);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_6fc8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_6d80);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7350);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_6fb8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_6d68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7200);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6fa8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6d50);
  FText::~FText(&local_6f98);
  STextBlock::FArguments::~FArguments(&local_1c80);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6730);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_71f0);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_6f88);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_6d38);
  SImage::FArguments::~FArguments(&local_47b0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6648);
  SHorizontalBox::FArguments::~FArguments(&local_58b0);
  SButton::FArguments::~FArguments(&local_36c0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6560);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_71e0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6f78);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6d20);
  FText::~FText(&local_6f68);
  STextBlock::FArguments::~FArguments(&local_1728);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6478);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_71d0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_6f58);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_6d08);
  FText::~FText(&local_6f48);
  SButton::FArguments::~FArguments(&local_3180);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6390);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_71c0);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_6f38);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_6cf0);
  SImage::FArguments::~FArguments(&local_4508);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_62a8);
  SVerticalBox::FArguments::~FArguments(&local_56a8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_61c0);
  SHorizontalBox::FArguments::~FArguments(&local_54a0);
  SBorder::FArguments::~FArguments(&local_4260);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_60d8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_71b0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_6f28);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_6cd8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_71a0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6f18);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6cc0);
  FText::~FText(&local_6f08);
  STextBlock::FArguments::~FArguments(&local_11d0);
  SBorder::FArguments::~FArguments(&local_3e80);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5ff0);
  SVerticalBox::FArguments::~FArguments(&local_5298);
  SBorder::FArguments::~FArguments(&local_3aa0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5f08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7190);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_6ef8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_6ca8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7180);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_6ee8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_6c90);
  FText::~FText(&local_6ed8);
  SButton::FArguments::~FArguments(&local_2c40);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5e20);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7170);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_6ec8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_6c78);
  FText::~FText(&local_6eb8);
  SButton::FArguments::~FArguments(&local_2700);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5d38);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7340);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_6ea8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_6c60);
  FText::~FText(&local_6e98);
  SButton::FArguments::~FArguments(&local_21c0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5c50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7330);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_6e88);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_6c48);
  SSpinBox<float>::FArguments::~FArguments(&local_720);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5b68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7210);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6e78);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6e58);
  FText::~FText(&local_6e68);
  STextBlock::FArguments::~FArguments(&local_c78);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5a80);
  SHorizontalBox::FArguments::~FArguments(&local_5090);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5998);
  SVerticalBox::FArguments::~FArguments(&local_4e88);
  AnimTime_OnChanged(this,__real_3e19999a);
  return;
}

// GetAnimTime @ 1430c7490

float __thiscall SAnimTest::GetAnimTime(SAnimTest *this)

{
  return this->AnimTime;
}

// GetContentColor @ 1430c8810

FSlateColor * __thiscall
SAnimTest::GetContentColor(SAnimTest *this,FSlateColor *__return_storage_ptr__)

{
  FLinearColor *pFVar1;
  FLinearColor local_18;
  
  pFVar1 = GetContentColorAsLinearColor(this,&local_18);
  FSlateColor::FSlateColor(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetContentColorAsLinearColor @ 1430c8850

FLinearColor * __thiscall
SAnimTest::GetContentColorAsLinearColor(SAnimTest *this,FLinearColor *__return_storage_ptr__)

{
  float fVar1;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 *local_48;
  FLinearColor_u_0 *local_40;
  FLinearColor_u_0 *local_38;
  FLinearColor *local_30;
  FLinearColor local_28;
  FLinearColor local_18;
  
  fVar1 = FCurveHandle::GetLerp(&this->FadeCurve);
  local_68._s_0.R = __real_3f800000;
  local_68._s_0.G = __real_3f800000;
  local_68._s_0.B = __real_3f800000;
  local_68._s_0.A = __real_3f800000;
  local_48 = &local_68;
  local_58._s_0.R = __real_3f800000;
  local_58._s_0.G = __real_3f800000;
  local_58._s_0.B = __real_3f800000;
  local_58._s_0.A = 0.0;
  local_40 = &local_58;
  local_38 = local_48;
  local_30 = FLinearColor::operator-
                       ((FLinearColor *)&local_48->_s_0,&local_18,(FLinearColor *)&local_58._s_0);
  FLinearColor::operator*(local_30,&local_28,fVar1);
  FLinearColor::operator+((FLinearColor *)&local_58._s_0,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetContentScale @ 1430c8980

TVector2<double> * __thiscall
SAnimTest::GetContentScale(SAnimTest *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = FCurveHandle::GetLerp(&this->ZoomCurve);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// PlayAnimation_OnClicked @ 1430e4700

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAnimTest::PlayAnimation_OnClicked(SAnimTest *this,FReply *__return_storage_ptr__)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FCurveSequence::Play(&this->SpawnAnimation,pTVar1,false,0.0,true);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_18);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PlayReverse_OnClicked @ 1430e4780

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SAnimTest::PlayReverse_OnClicked(SAnimTest *this,FReply *__return_storage_ptr__)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FCurveSequence::PlayReverse(&this->SpawnAnimation,pTVar1,false,0.0,true);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_18);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Reverse_OnClicked @ 1430eb340

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SAnimTest::Reverse_OnClicked(SAnimTest *this,FReply *__return_storage_ptr__)

{
  FCurveSequence::Reverse(&this->SpawnAnimation);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

