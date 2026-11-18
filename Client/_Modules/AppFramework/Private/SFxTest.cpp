// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 18

// Construct @ 14307cd20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFxTest::Construct(SFxTest *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  Layer *pLVar2;
  FSlotArguments *pFVar3;
  FText *pFVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<SSpinBox<float>,1> *pTVar8;
  FSlotArguments *pFVar9;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SHorizontalBox,1> *pTVar11;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SCheckBox,1> *pTVar12;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SGridPanel,1> *pTVar13;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar14;
  TSharedRef<SButton,1> *pTVar15;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SUniformGridPanel,1> *pTVar16;
  FName *pFVar17;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SImage,1> *pTVar18;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar19;
  TSharedRef<SBorder,1> *pTVar20;
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SFxWidget,1> *pTVar21;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SVerticalBox,1> *pTVar22;
  longlong lVar23;
  undefined8 *puVar24;
  TVector2<double> *pTVar25;
  code **ppcVar26;
  undefined1 *puVar27;
  TVector2<double> *pTVar28;
  pmf_e3f0b32c *ppVar29;
  pmf_b0dcde9c *ppVar30;
  pmf_6fd9c6ea *ppVar31;
  pmf_fbb1cb59 *ppVar32;
  pmf_2c29edee *ppVar33;
  pmf_8a5f2fc3 *ppVar34;
  T0RequiredArgs local_ae78;
  T0RequiredArgs local_ae77;
  T0RequiredArgs local_ae76;
  T0RequiredArgs local_ae75;
  T0RequiredArgs local_ae74;
  T0RequiredArgs local_ae73;
  T0RequiredArgs local_ae72;
  T0RequiredArgs local_ae71;
  T0RequiredArgs local_ae70;
  T0RequiredArgs local_ae6f;
  T0RequiredArgs local_ae6e;
  T0RequiredArgs local_ae6d;
  T0RequiredArgs local_ae6c;
  T0RequiredArgs local_ae6b;
  T0RequiredArgs local_ae6a;
  T0RequiredArgs local_ae69;
  T0RequiredArgs local_ae68;
  T0RequiredArgs local_ae67;
  T0RequiredArgs local_ae66;
  T0RequiredArgs local_ae65;
  T0RequiredArgs local_ae64;
  T0RequiredArgs local_ae63;
  T0RequiredArgs local_ae62;
  T0RequiredArgs local_ae61;
  T0RequiredArgs local_ae60;
  T0RequiredArgs local_ae5f;
  T0RequiredArgs local_ae5e;
  T0RequiredArgs local_ae5d;
  T0RequiredArgs local_ae5c;
  T0RequiredArgs local_ae5b [3];
  float local_ae58;
  float local_ae54;
  float local_ae50;
  float local_ae4c;
  float local_ae48;
  float local_ae44;
  float local_ae40;
  float local_ae3c;
  float local_ae38;
  float local_ae34;
  float local_ae30;
  float local_ae2c;
  float local_ae28 [2];
  ISlateStyle *local_ae20;
  Layer local_ae18;
  Layer local_ae14;
  Layer local_ae10;
  Layer local_ae0c;
  Layer local_ae08;
  Layer local_ae04;
  Layer local_ae00;
  Layer local_adfc;
  Layer local_adf8 [2];
  undefined8 *local_adf0;
  FArguments *local_ade8;
  longlong *local_ade0;
  TAttribute<FText> *local_add8;
  TAttribute<FText> *local_add0;
  FArguments *local_adc8;
  FArguments *local_adc0;
  FSlotArguments *local_adb8;
  FSlotArguments *local_adb0;
  FArguments *local_ada8;
  longlong *local_ada0;
  TAttribute<TOptional<float>_> *local_ad98;
  TAttribute<TOptional<float>_> *local_ad90;
  FArguments *local_ad88;
  TAttribute<TOptional<float>_> *local_ad80;
  TAttribute<TOptional<float>_> *local_ad78;
  FArguments *local_ad70;
  FArguments *local_ad68;
  FArguments *local_ad60;
  FArguments *local_ad58;
  FSlotArguments *local_ad50;
  FSlotArguments *local_ad48;
  FArguments *local_ad40;
  longlong *local_ad38;
  TAttribute<FText> *local_ad30;
  TAttribute<FText> *local_ad28;
  FArguments *local_ad20;
  FArguments *local_ad18;
  FSlotArguments *local_ad10;
  FSlotArguments *local_ad08;
  FArguments *local_ad00;
  undefined1 *local_acf8;
  TAttribute<TOptional<float>_> *local_acf0;
  TAttribute<TOptional<float>_> *local_ace8;
  FArguments *local_ace0;
  TAttribute<TOptional<float>_> *local_acd8;
  TAttribute<TOptional<float>_> *local_acd0;
  FArguments *local_acc8;
  FArguments *local_acc0;
  FArguments *local_acb8;
  FArguments *local_acb0;
  FSlotArguments *local_aca8;
  FSlotArguments *local_aca0;
  FArguments *local_ac98;
  undefined1 *local_ac90;
  TAttribute<TOptional<float>_> *local_ac88;
  TAttribute<TOptional<float>_> *local_ac80;
  FArguments *local_ac78;
  TAttribute<TOptional<float>_> *local_ac70;
  TAttribute<TOptional<float>_> *local_ac68;
  FArguments *local_ac60;
  FArguments *local_ac58;
  FArguments *local_ac50;
  FArguments *local_ac48;
  FSlotArguments *local_ac40;
  FSlotArguments *local_ac38;
  FArguments *local_ac30;
  FArguments *local_ac28;
  FSlotArguments *local_ac20;
  FSlotArguments *local_ac18;
  FArguments *local_ac10;
  longlong *local_ac08;
  TAttribute<FText> *local_ac00;
  TAttribute<FText> *local_abf8;
  FArguments *local_abf0;
  FArguments *local_abe8;
  FSlotArguments *local_abe0;
  FSlotArguments *local_abd8;
  FArguments *local_abd0;
  longlong *local_abc8;
  TAttribute<TOptional<float>_> *local_abc0;
  TAttribute<TOptional<float>_> *local_abb8;
  FArguments *local_abb0;
  TAttribute<TOptional<float>_> *local_aba8;
  TAttribute<TOptional<float>_> *local_aba0;
  FArguments *local_ab98;
  FArguments *local_ab90;
  FArguments *local_ab88;
  FArguments *local_ab80;
  FSlotArguments *local_ab78;
  FSlotArguments *local_ab70;
  FArguments *local_ab68;
  longlong *local_ab60;
  TAttribute<FText> *local_ab58;
  TAttribute<FText> *local_ab50;
  FArguments *local_ab48;
  FArguments *local_ab40;
  FSlotArguments *local_ab38;
  FSlotArguments *local_ab30;
  FArguments *local_ab28;
  undefined1 *local_ab20;
  TAttribute<TOptional<float>_> *local_ab18;
  TAttribute<TOptional<float>_> *local_ab10;
  FArguments *local_ab08;
  TAttribute<TOptional<float>_> *local_ab00;
  TAttribute<TOptional<float>_> *local_aaf8;
  FArguments *local_aaf0;
  FArguments *local_aae8;
  FArguments *local_aae0;
  FArguments *local_aad8;
  FSlotArguments *local_aad0;
  FSlotArguments *local_aac8;
  FArguments *local_aac0;
  undefined1 *local_aab8;
  TAttribute<TOptional<float>_> *local_aab0;
  TAttribute<TOptional<float>_> *local_aaa8;
  FArguments *local_aaa0;
  TAttribute<TOptional<float>_> *local_aa98;
  TAttribute<TOptional<float>_> *local_aa90;
  FArguments *local_aa88;
  FArguments *local_aa80;
  FArguments *local_aa78;
  FArguments *local_aa70;
  FSlotArguments *local_aa68;
  FSlotArguments *local_aa60;
  FArguments *local_aa58;
  FArguments *local_aa50;
  FSlotArguments *local_aa48;
  FSlotArguments *local_aa40;
  FArguments *local_aa38;
  longlong *local_aa30;
  FArguments *local_aa28;
  FArguments *local_aa20;
  TAttribute<FText> *local_aa18;
  TAttribute<FText> *local_aa10;
  FArguments *local_aa08;
  FArguments *local_aa00;
  FArguments *local_a9f8;
  FArguments *local_a9f0;
  FSlotArguments *local_a9e8;
  FSlotArguments *local_a9e0;
  FArguments *local_a9d8;
  FArguments *local_a9d0;
  FSlotArguments *local_a9c8;
  FSlotArguments *local_a9c0;
  FArguments *local_a9b8;
  TAttribute<FText> *local_a9b0;
  TAttribute<FText> *local_a9a8;
  FArguments *local_a9a0;
  FArguments *local_a998;
  FArguments *local_a990;
  FArguments *local_a988;
  FSlotArguments *local_a980;
  FSlotArguments *local_a978;
  FArguments *local_a970;
  TAttribute<FText> *local_a968;
  TAttribute<FText> *local_a960;
  FArguments *local_a958;
  FArguments *local_a950;
  FArguments *local_a948;
  FArguments *local_a940;
  FSlotArguments *local_a938;
  FSlotArguments *local_a930;
  FArguments *local_a928;
  TAttribute<FText> *local_a920;
  TAttribute<FText> *local_a918;
  FArguments *local_a910;
  FArguments *local_a908;
  FArguments *local_a900;
  FArguments *local_a8f8;
  FSlotArguments *local_a8f0;
  FSlotArguments *local_a8e8;
  FArguments *local_a8e0;
  FArguments *local_a8d8;
  FSlotArguments *local_a8d0;
  FSlotArguments *local_a8c8;
  FArguments *local_a8c0;
  FArguments *local_a8b8;
  FSlotArguments *local_a8b0;
  FSlotArguments *local_a8a8;
  FArguments *local_a8a0;
  undefined1 *local_a898;
  undefined1 *local_a890;
  FArguments *local_a888;
  FArguments *local_a880;
  FArguments *local_a878;
  FArguments *local_a870;
  FArguments *local_a868;
  FName *local_a860;
  FName local_a858;
  code *local_a850;
  FSlateBrush *local_a848;
  TAttribute<FSlateBrush_const_*> *local_a840;
  TAttribute<FSlateBrush_const_*> *local_a838;
  FArguments *local_a830;
  FArguments *local_a828;
  FSlotArguments *local_a820;
  FSlotArguments *local_a818;
  FArguments *local_a810;
  TAttribute<FText> *local_a808;
  TAttribute<FText> *local_a800;
  FArguments *local_a7f8;
  FArguments *local_a7f0;
  FSlotArguments *local_a7e8;
  FSlotArguments *local_a7e0;
  FArguments *local_a7d8;
  FArguments *local_a7d0;
  FArguments *local_a7c8;
  FArguments *local_a7c0;
  FArguments *local_a7b8;
  FArguments *local_a7b0;
  FArguments *local_a7a8;
  FArguments *local_a7a0;
  FSlotArguments *local_a798;
  FSlotArguments *local_a790;
  FArguments *local_a788;
  FArguments *local_a780;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_a778;
  TSharedRef<SWidget,1> local_a770;
  undefined8 local_a760;
  undefined8 local_a758;
  code *local_a750;
  undefined4 local_a748;
  code *local_a740;
  undefined4 local_a738;
  code *local_a730;
  undefined4 local_a728;
  code *local_a720;
  undefined4 local_a718;
  code *local_a710;
  undefined4 local_a708;
  code *local_a700;
  undefined4 local_a6f8;
  code *local_a6f0;
  undefined4 local_a6e8;
  code *local_a6e0;
  undefined4 local_a6d8;
  code *local_a6d0;
  undefined4 local_a6c8;
  code *local_a6c0;
  undefined4 local_a6b8;
  code *local_a6b0;
  undefined4 local_a6a8;
  code *local_a6a0;
  undefined4 local_a698;
  code *local_a690;
  undefined4 local_a688;
  code *local_a680;
  undefined4 local_a678;
  code *local_a670;
  undefined4 local_a668;
  code *local_a660;
  undefined4 local_a658;
  code *local_a650;
  undefined4 local_a648;
  code *local_a640;
  undefined4 local_a638;
  code *local_a630;
  undefined4 local_a628;
  TSharedRef<SWidget,1> local_a620;
  TSharedRef<SWidget,1> local_a610;
  TSharedRef<SWidget,1> local_a600;
  TSharedRef<SWidget,1> local_a5f0;
  TSharedRef<SWidget,1> local_a5e0;
  TSharedRef<SWidget,1> local_a5d0;
  TSharedRef<SWidget,1> local_a5c0;
  TSharedRef<SWidget,1> local_a5b0;
  TSharedRef<SWidget,1> local_a5a0;
  TSharedRef<SWidget,1> local_a590;
  TSharedRef<SWidget,1> local_a580;
  TSharedRef<SWidget,1> local_a570;
  TSharedRef<SWidget,1> local_a560;
  TSharedRef<SWidget,1> local_a550;
  TSharedRef<SWidget,1> local_a540;
  TSharedRef<SWidget,1> local_a530;
  TSharedRef<SWidget,1> local_a520;
  TSharedRef<SWidget,1> local_a510;
  TSharedRef<SWidget,1> local_a500;
  TSharedRef<SWidget,1> local_a4f0;
  TSharedRef<SWidget,1> local_a4e0;
  TSharedRef<SWidget,1> local_a4d0;
  TSharedRef<SWidget,1> local_a4c0;
  TSharedRef<SWidget,1> local_a4b0;
  TSharedRef<SWidget,1> local_a4a0;
  TSharedRef<SWidget,1> local_a490;
  TSharedRef<SWidget,1> local_a480;
  TSharedRef<SWidget,1> local_a470;
  TSharedRef<SWidget,1> local_a460;
  FName local_a450;
  undefined1 local_a448 [16];
  pmf_2c29edee local_a438;
  undefined1 local_a428 [16];
  pmf_e3f0b32c local_a418;
  undefined1 local_a408 [16];
  pmf_2c29edee local_a3f8;
  undefined1 local_a3e8 [16];
  pmf_e3f0b32c local_a3d8;
  undefined1 local_a3c8 [16];
  pmf_2c29edee local_a3b8;
  undefined1 local_a3a8 [16];
  pmf_e3f0b32c local_a398;
  undefined1 local_a388 [16];
  pmf_2c29edee local_a378;
  undefined1 local_a368 [16];
  pmf_e3f0b32c local_a358;
  undefined1 local_a348 [16];
  pmf_2c29edee local_a338;
  undefined1 local_a328 [16];
  pmf_e3f0b32c local_a318;
  undefined1 local_a308 [16];
  pmf_2c29edee local_a2f8;
  undefined1 local_a2e8 [16];
  pmf_e3f0b32c local_a2d8;
  undefined1 local_a2c8 [16];
  pmf_b0dcde9c local_a2b8;
  undefined1 local_a2a8 [16];
  pmf_6fd9c6ea local_a298;
  undefined1 local_a288 [16];
  pmf_fbb1cb59 local_a278;
  undefined1 local_a268 [16];
  pmf_2c29edee local_a258;
  undefined1 local_a248 [16];
  pmf_8a5f2fc3 local_a238;
  undefined1 local_a228 [16];
  pmf_2c29edee local_a218;
  undefined1 local_a208 [16];
  pmf_8a5f2fc3 local_a1f8;
  TSharedRef<SVerticalBox,1> local_a1e8;
  TSharedRef<SBorder,1> local_a1d8;
  TSharedRef<SFxWidget,1> local_a1c8;
  TSharedRef<SBorder,1> local_a1b8;
  TSharedRef<SHorizontalBox,1> local_a1a8;
  TSharedRef<SButton,1> local_a198;
  FText local_a188;
  TSharedRef<SImage,1> local_a178;
  TSharedRef<SHorizontalBox,1> local_a168;
  TSharedRef<SUniformGridPanel,1> local_a158;
  TSharedRef<SButton,1> local_a148;
  TSharedRef<STextBlock,1> local_a138;
  FText local_a128;
  TSharedRef<SButton,1> local_a118;
  TSharedRef<STextBlock,1> local_a108;
  FText local_a0f8;
  TSharedRef<SButton,1> local_a0e8;
  TSharedRef<STextBlock,1> local_a0d8;
  FText local_a0c8;
  TSharedRef<SGridPanel,1> local_a0b8;
  TSharedRef<SCheckBox,1> local_a0a8;
  TSharedRef<STextBlock,1> local_a098;
  FText local_a088;
  TSharedRef<SHorizontalBox,1> local_a078;
  TSharedRef<SSpinBox<float>,1> local_a068;
  TSharedRef<SSpinBox<float>,1> local_a058;
  TSharedRef<STextBlock,1> local_a048;
  FText local_a038;
  TSharedRef<SSpinBox<float>,1> local_a028;
  TSharedRef<STextBlock,1> local_a018;
  FText local_a008;
  TSharedRef<SHorizontalBox,1> local_9ff8;
  TSharedRef<SSpinBox<float>,1> local_9fe8;
  TSharedRef<SSpinBox<float>,1> local_9fd8;
  TSharedRef<STextBlock,1> local_9fc8;
  FText local_9fb8;
  TSharedRef<SSpinBox<float>,1> local_9fa8;
  TSharedRef<STextBlock,1> local_9f98;
  FText local_9f88;
  TAttribute<float> local_9f78;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_9f58;
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> local_9f40;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_9f28;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_9f10;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_9ef8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_9ee0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_9ec8;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_9eb0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_9e98;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9e80;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_9e68;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9e50;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_9e38;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9e20;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_9e08;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_9df0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9dd8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_9dc0;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_9da8;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_9d90;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9d78;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_9d60;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9d48;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_9d30;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_9d18;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_9d00;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9ce8;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_9cd0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9cb8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_9ca0;
  FSlotArguments local_9c88;
  FSlotArguments local_9c60;
  FSlotArguments local_9c38;
  TAttribute<TOptional<float>_> local_9c10;
  TAttribute<TOptional<float>_> local_9be8;
  TAttribute<TOptional<float>_> local_9bc0;
  TAttribute<TOptional<float>_> local_9b98;
  TAttribute<TOptional<float>_> local_9b70;
  TAttribute<TOptional<float>_> local_9b48;
  TAttribute<TOptional<float>_> local_9b20;
  TAttribute<TOptional<float>_> local_9af8;
  TAttribute<TOptional<float>_> local_9ad0;
  TAttribute<TOptional<float>_> local_9aa8;
  TAttribute<TOptional<float>_> local_9a80;
  TAttribute<TOptional<float>_> local_9a58;
  TAttribute<FSlateBrush_const_*> local_9a30;
  TAttribute<FText> local_9a08;
  TAttribute<FText> local_99d8;
  TAttribute<FText> local_99a8;
  TAttribute<FText> local_9978;
  TAttribute<FText> local_9948;
  TAttribute<FText> local_9918;
  TAttribute<FText> local_98e8;
  TAttribute<FText> local_98b8;
  TAttribute<FText> local_9888;
  FSlotArguments local_9858;
  FSlotArguments local_97c0;
  FSlotArguments local_9728;
  FSlotArguments local_9690;
  FSlotArguments local_95f8;
  FSlotArguments local_9560;
  FSlotArguments local_94c8;
  FSlotArguments local_9430;
  FSlotArguments local_9398;
  FSlotArguments local_9300;
  FSlotArguments local_9218;
  FSlotArguments local_9130;
  FSlotArguments local_9048;
  FSlotArguments local_8f60;
  FSlotArguments local_8e78;
  FSlotArguments local_8d90;
  FSlotArguments local_8ca8;
  FSlotArguments local_8bc0;
  FSlotArguments local_8ad8;
  FArguments local_89f0;
  FArguments local_87e8;
  FArguments local_85e0;
  FArguments local_83d8;
  FArguments local_81d0;
  FArguments local_7fc8;
  FArguments local_7da0;
  FArguments local_7b28;
  FArguments local_7880;
  FArguments local_7580;
  FArguments local_71a0;
  FArguments local_6dc0;
  FArguments local_69e0;
  FArguments local_64a0;
  FArguments local_5f60;
  FArguments local_5a20;
  FArguments local_54e0;
  FArguments local_4f88;
  FArguments local_4a30;
  FArguments local_44d8;
  FArguments local_3f80;
  FArguments local_3a28;
  FArguments local_34d0;
  FArguments local_2f78;
  FArguments local_2a20;
  FArguments local_2320;
  FArguments local_1c20;
  FArguments local_1520;
  FArguments local_e20;
  FArguments local_720;
  undefined8 uStack_18;
  
  uStack_18 = 0x14307cd36;
  this->RenderScale = __real_3f800000;
  local_a760 = __real_3fe0000000000000;
  local_a758 = __real_3fe0000000000000;
  local_adf0 = &local_a760;
  puVar24 = local_adf0;
  pTVar25 = &this->RenderScaleOrigin;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)&pTVar25->field0_0x0 = *(undefined1 *)puVar24;
    puVar24 = (undefined8 *)((longlong)puVar24 + 1);
    pTVar25 = (TVector2<double> *)((longlong)&pTVar25->field0_0x0 + 1);
  }
  this->LayoutScale = __real_3f800000;
  pTVar25 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar28 = &this->VisualOffset;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)&pTVar28->field0_0x0 = *(undefined1 *)&pTVar25->field0_0x0;
    pTVar25 = (TVector2<double> *)((longlong)&pTVar25->field0_0x0 + 1);
    pTVar28 = (TVector2<double> *)((longlong)&pTVar28->field0_0x0 + 1);
  }
  this->FxWidgetIgnoreClippingState = Checked;
  local_a778 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_a8a0 = SVerticalBox::FArguments::FArguments(&local_81d0);
  pFVar1 = SVerticalBox::Slot(&local_8ad8);
  local_a8b0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_a9b8 = SHorizontalBox::FArguments::FArguments(&local_83d8);
  local_a9c8 = SHorizontalBox::Slot(&local_8bc0);
  local_ade8 = SGridPanel::FArguments::FArguments(&local_7fc8);
  local_ae58 = __real_3f800000;
  TAttribute<float>::TAttribute<float>(&local_9f78,&local_ae58);
  local_ada8 = SGridPanel::FArguments::FillColumn(local_ade8,1,&local_9f78);
  pLVar2 = SGridPanel::Layer::Layer(&local_ae18,0);
  pFVar3 = SGridPanel::Slot(&local_9398,0,0,(Layer)pLVar2->TheLayer);
  local_ade0 = &pFVar3->_padding_;
  local_adb8 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_ade0,HAlign_Right);
  local_adc8 = STextBlock::FArguments::FArguments(&local_2f78);
  local_add8 = &local_9a08;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_9f88,L"STestSuite",L"FxTextVisualScaleLabel",L"Visual Scale:");
  local_add0 = TAttribute<FText>::TAttribute<FText>(local_add8,pFVar4);
  local_adc0 = STextBlock::FArguments::Text(local_adc8,local_add0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae78);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9cb8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10bc,&local_ae78);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_9f98,local_adc0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a5a0,pTVar6);
  local_adb0 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_adb8,&local_a5a0);
  local_ad40 = SGridPanel::FArguments::operator+(local_ada8,local_adb0);
  pLVar2 = SGridPanel::Layer::Layer(&local_ae14,0);
  pFVar3 = SGridPanel::Slot(&local_9430,1,0,(Layer)pLVar2->TheLayer);
  local_ada0 = &pFVar3->_padding_;
  local_ad50 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_ada0,__real_40000000);
  local_ad88 = SSpinBox<float>::FArguments::FArguments(&local_720);
  local_ad98 = &local_9c10;
  local_ae54 = __real_3dcccccd;
  local_ad90 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_ad98,&local_ae54);
  local_ad70 = SSpinBox<float>::FArguments::MinValue(local_ad88,local_ad90);
  local_ad80 = &local_9be8;
  local_ae50 = __real_41a00000;
  local_ad78 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_ad80,&local_ae50);
  local_ad68 = SSpinBox<float>::FArguments::MaxValue(local_ad70,local_ad78);
  local_a750 = GetRenderScale;
  local_a748 = 0;
  ppcVar26 = &local_a750;
  puVar27 = local_a448;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a448;
  ppVar33 = &local_a438;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_ad60 = SSpinBox<float>::FArguments::Value<SFxTest>(local_ad68,this,&local_a438);
  local_a740 = OnRenderScaleChanged;
  local_a738 = 0;
  ppcVar26 = &local_a740;
  puVar27 = local_a428;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a428;
  ppVar29 = &local_a418;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar29 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar29 = (pmf_e3f0b32c *)&ppVar29->field_0x1;
  }
  local_ad58 = SSpinBox<float>::FArguments::OnValueChanged<SFxTest>(local_ad60,this,&local_a418);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae77);
  pTVar7 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_9cd0,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10c1,&local_ae77);
  pTVar8 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_9fa8,local_ad58);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_a460,pTVar8);
  local_ad48 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ad50,&local_a460);
  local_ad00 = SGridPanel::FArguments::operator+(local_ad40,local_ad48);
  pLVar2 = SGridPanel::Layer::Layer(&local_ae10,0);
  pFVar3 = SGridPanel::Slot(&local_94c8,0,1,(Layer)pLVar2->TheLayer);
  local_ad38 = &pFVar3->_padding_;
  local_ad10 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_ad38,HAlign_Right);
  local_ad20 = STextBlock::FArguments::FArguments(&local_34d0);
  local_ad30 = &local_99d8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_9fb8,L"STestSuite",L"FxTextVisualScaleOriginLabel",
                      L"Visual Scale Origin:");
  local_ad28 = TAttribute<FText>::TAttribute<FText>(local_ad30,pFVar4);
  local_ad18 = STextBlock::FArguments::Text(local_ad20,local_ad28);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae76);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9ce8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10c8,&local_ae76);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_9fc8,local_ad18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a470,pTVar6);
  local_ad08 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ad10,&local_a470);
  local_ac10 = SGridPanel::FArguments::operator+(local_ad00,local_ad08);
  pLVar2 = SGridPanel::Layer::Layer(&local_ae0c,0);
  local_ac20 = SGridPanel::Slot(&local_9560,1,1,(Layer)pLVar2->TheLayer);
  local_ac98 = SHorizontalBox::FArguments::FArguments(&local_85e0);
  pFVar9 = SHorizontalBox::Slot(&local_8ca8);
  local_acf8 = &pFVar9->field_0x18;
  local_aca8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_acf8,__real_40000000);
  local_ace0 = SSpinBox<float>::FArguments::FArguments(&local_e20);
  local_acf0 = &local_9bc0;
  local_ae4c = 0.0;
  local_ace8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_acf0,&local_ae4c);
  local_acc8 = SSpinBox<float>::FArguments::MinValue(local_ace0,local_ace8);
  local_acd8 = &local_9b98;
  local_ae48 = __real_3f800000;
  local_acd0 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_acd8,&local_ae48);
  local_acc0 = SSpinBox<float>::FArguments::MaxValue(local_acc8,local_acd0);
  local_a730 = GetRenderScaleOriginX;
  local_a728 = 0;
  ppcVar26 = &local_a730;
  puVar27 = local_a408;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a408;
  ppVar33 = &local_a3f8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_acb8 = SSpinBox<float>::FArguments::Value<SFxTest>(local_acc0,this,&local_a3f8);
  local_a720 = OnRenderScaleChangedX;
  local_a718 = 0;
  ppcVar26 = &local_a720;
  puVar27 = local_a3e8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a3e8;
  ppVar29 = &local_a3d8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar29 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar29 = (pmf_e3f0b32c *)&ppVar29->field_0x1;
  }
  local_acb0 = SSpinBox<float>::FArguments::OnValueChanged<SFxTest>(local_acb8,this,&local_a3d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae75);
  pTVar7 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_9d00,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10d0,&local_ae75);
  pTVar8 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_9fd8,local_acb0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_a480,pTVar8);
  local_aca0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_aca8,&local_a480);
  local_ac30 = SHorizontalBox::FArguments::operator+(local_ac98,local_aca0);
  pFVar9 = SHorizontalBox::Slot(&local_8d90);
  local_ac90 = &pFVar9->field_0x18;
  local_ac40 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_ac90,__real_40000000);
  local_ac78 = SSpinBox<float>::FArguments::FArguments(&local_1520);
  local_ac88 = &local_9b70;
  local_ae44 = 0.0;
  local_ac80 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_ac88,&local_ae44);
  local_ac60 = SSpinBox<float>::FArguments::MinValue(local_ac78,local_ac80);
  local_ac70 = &local_9b48;
  local_ae40 = __real_3f800000;
  local_ac68 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_ac70,&local_ae40);
  local_ac58 = SSpinBox<float>::FArguments::MaxValue(local_ac60,local_ac68);
  local_a710 = GetRenderScaleOriginY;
  local_a708 = 0;
  ppcVar26 = &local_a710;
  puVar27 = local_a3c8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a3c8;
  ppVar33 = &local_a3b8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_ac50 = SSpinBox<float>::FArguments::Value<SFxTest>(local_ac58,this,&local_a3b8);
  local_a700 = OnRenderScaleChangedY;
  local_a6f8 = 0;
  ppcVar26 = &local_a700;
  puVar27 = local_a3a8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a3a8;
  ppVar29 = &local_a398;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar29 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar29 = (pmf_e3f0b32c *)&ppVar29->field_0x1;
  }
  local_ac48 = SSpinBox<float>::FArguments::OnValueChanged<SFxTest>(local_ac50,this,&local_a398);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae74);
  pTVar7 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_9d18,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10d7,&local_ae74);
  pTVar8 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_9fe8,local_ac48);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_a490,pTVar8);
  local_ac38 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ac40,&local_a490);
  local_ac28 = SHorizontalBox::FArguments::operator+(local_ac30,local_ac38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae73);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_9d30,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x10cd,&local_ae73);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_9ff8,local_ac28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_a4a0,pTVar11);
  local_ac18 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ac20,&local_a4a0);
  local_abd0 = SGridPanel::FArguments::operator+(local_ac10,local_ac18);
  pLVar2 = SGridPanel::Layer::Layer(&local_ae08,0);
  pFVar3 = SGridPanel::Slot(&local_95f8,0,2,(Layer)pLVar2->TheLayer);
  local_ac08 = &pFVar3->_padding_;
  local_abe0 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_ac08,HAlign_Right);
  local_abf0 = STextBlock::FArguments::FArguments(&local_3a28);
  local_ac00 = &local_99a8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a008,L"STestSuite",L"FxTextLayoutScaleLabel",L"Layout Scale:");
  local_abf8 = TAttribute<FText>::TAttribute<FText>(local_ac00,pFVar4);
  local_abe8 = STextBlock::FArguments::Text(local_abf0,local_abf8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae72);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9d48,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10df,&local_ae72);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_a018,local_abe8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a4b0,pTVar6);
  local_abd8 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_abe0,&local_a4b0);
  local_ab68 = SGridPanel::FArguments::operator+(local_abd0,local_abd8);
  pLVar2 = SGridPanel::Layer::Layer(&local_ae04,0);
  pFVar3 = SGridPanel::Slot(&local_9690,1,2,(Layer)pLVar2->TheLayer);
  local_abc8 = &pFVar3->_padding_;
  local_ab78 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_abc8,__real_40000000);
  local_abb0 = SSpinBox<float>::FArguments::FArguments(&local_1c20);
  local_abc0 = &local_9b20;
  local_ae3c = __real_3dcccccd;
  local_abb8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_abc0,&local_ae3c);
  local_ab98 = SSpinBox<float>::FArguments::MinValue(local_abb0,local_abb8);
  local_aba8 = &local_9af8;
  local_ae38 = __real_41a00000;
  local_aba0 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_aba8,&local_ae38);
  local_ab90 = SSpinBox<float>::FArguments::MaxValue(local_ab98,local_aba0);
  local_a6f0 = GetLayoutScale;
  local_a6e8 = 0;
  ppcVar26 = &local_a6f0;
  puVar27 = local_a388;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a388;
  ppVar33 = &local_a378;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_ab88 = SSpinBox<float>::FArguments::Value<SFxTest>(local_ab90,this,&local_a378);
  local_a6e0 = OnLayoutScaleChanged;
  local_a6d8 = 0;
  ppcVar26 = &local_a6e0;
  puVar27 = local_a368;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a368;
  ppVar29 = &local_a358;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar29 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar29 = (pmf_e3f0b32c *)&ppVar29->field_0x1;
  }
  local_ab80 = SSpinBox<float>::FArguments::OnValueChanged<SFxTest>(local_ab88,this,&local_a358);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae71);
  pTVar7 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_9d60,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10e4,&local_ae71);
  pTVar8 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_a028,local_ab80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_a4c0,pTVar8);
  local_ab70 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ab78,&local_a4c0);
  local_ab28 = SGridPanel::FArguments::operator+(local_ab68,local_ab70);
  pLVar2 = SGridPanel::Layer::Layer(&local_ae00,0);
  pFVar3 = SGridPanel::Slot(&local_9728,0,3,(Layer)pLVar2->TheLayer);
  local_ab60 = &pFVar3->_padding_;
  local_ab38 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_ab60,HAlign_Right);
  local_ab48 = STextBlock::FArguments::FArguments(&local_3f80);
  local_ab58 = &local_9978;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a038,L"STestSuite",L"FxTextVisualOffsetLabel",L"Visual Offset:");
  local_ab50 = TAttribute<FText>::TAttribute<FText>(local_ab58,pFVar4);
  local_ab40 = STextBlock::FArguments::Text(local_ab48,local_ab50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae70);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9d78,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10eb,&local_ae70);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_a048,local_ab40);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a4d0,pTVar6);
  local_ab30 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ab38,&local_a4d0);
  local_aa38 = SGridPanel::FArguments::operator+(local_ab28,local_ab30);
  pLVar2 = SGridPanel::Layer::Layer(&local_adfc,0);
  local_aa48 = SGridPanel::Slot(&local_97c0,1,3,(Layer)pLVar2->TheLayer);
  local_aac0 = SHorizontalBox::FArguments::FArguments(&local_87e8);
  pFVar9 = SHorizontalBox::Slot(&local_8e78);
  local_ab20 = &pFVar9->field_0x18;
  local_aad0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_ab20,__real_40000000);
  local_ab08 = SSpinBox<float>::FArguments::FArguments(&local_2320);
  local_ab18 = &local_9ad0;
  local_ae34 = __real_c1200000;
  local_ab10 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_ab18,&local_ae34);
  local_aaf0 = SSpinBox<float>::FArguments::MinValue(local_ab08,local_ab10);
  local_ab00 = &local_9aa8;
  local_ae30 = __real_41200000;
  local_aaf8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_ab00,&local_ae30);
  local_aae8 = SSpinBox<float>::FArguments::MaxValue(local_aaf0,local_aaf8);
  local_a6d0 = GetVisualOffsetOriginX;
  local_a6c8 = 0;
  ppcVar26 = &local_a6d0;
  puVar27 = local_a348;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a348;
  ppVar33 = &local_a338;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_aae0 = SSpinBox<float>::FArguments::Value<SFxTest>(local_aae8,this,&local_a338);
  local_a6c0 = OnVisualOffsetChangedX;
  local_a6b8 = 0;
  ppcVar26 = &local_a6c0;
  puVar27 = local_a328;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a328;
  ppVar29 = &local_a318;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar29 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar29 = (pmf_e3f0b32c *)&ppVar29->field_0x1;
  }
  local_aad8 = SSpinBox<float>::FArguments::OnValueChanged<SFxTest>(local_aae0,this,&local_a318);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae6f);
  pTVar7 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_9d90,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10f3,&local_ae6f);
  pTVar8 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_a058,local_aad8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_a4e0,pTVar8);
  local_aac8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_aad0,&local_a4e0);
  local_aa58 = SHorizontalBox::FArguments::operator+(local_aac0,local_aac8);
  pFVar9 = SHorizontalBox::Slot(&local_8f60);
  local_aab8 = &pFVar9->field_0x18;
  local_aa68 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_aab8,__real_40000000);
  local_aaa0 = SSpinBox<float>::FArguments::FArguments(&local_2a20);
  local_aab0 = &local_9a80;
  local_ae2c = __real_c1200000;
  local_aaa8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_aab0,&local_ae2c);
  local_aa88 = SSpinBox<float>::FArguments::MinValue(local_aaa0,local_aaa8);
  local_aa98 = &local_9a58;
  local_ae28[0] = __real_41200000;
  local_aa90 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_aa98,local_ae28);
  local_aa80 = SSpinBox<float>::FArguments::MaxValue(local_aa88,local_aa90);
  local_a6b0 = GetVisualOffsetOriginY;
  local_a6a8 = 0;
  ppcVar26 = &local_a6b0;
  puVar27 = local_a308;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a308;
  ppVar33 = &local_a2f8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_aa78 = SSpinBox<float>::FArguments::Value<SFxTest>(local_aa80,this,&local_a2f8);
  local_a6a0 = OnVisualOffsetChangedY;
  local_a698 = 0;
  ppcVar26 = &local_a6a0;
  puVar27 = local_a2e8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a2e8;
  ppVar29 = &local_a2d8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar29 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar29 = (pmf_e3f0b32c *)&ppVar29->field_0x1;
  }
  local_aa70 = SSpinBox<float>::FArguments::OnValueChanged<SFxTest>(local_aa78,this,&local_a2d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae6e);
  pTVar7 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_9da8,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x10fa,&local_ae6e);
  pTVar8 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_a068,local_aa70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_a4f0,pTVar8);
  local_aa60 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_aa68,&local_a4f0);
  local_aa50 = SHorizontalBox::FArguments::operator+(local_aa58,local_aa60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae6d);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_9dc0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x10f0,&local_ae6d);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_a078,local_aa50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_a500,pTVar11);
  local_aa40 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_aa48,&local_a500);
  local_a9d8 = SGridPanel::FArguments::operator+(local_aa38,local_aa40);
  pLVar2 = SGridPanel::Layer::Layer(local_adf8,0);
  pFVar3 = SGridPanel::Slot(&local_9858,0,4,(Layer)pLVar2->TheLayer);
  local_aa30 = &pFVar3->_padding_;
  local_a9e8 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_aa30,__real_40000000);
  local_aa28 = SCheckBox::FArguments::FArguments(&local_6dc0);
  local_a690 = GetFxWidgetIgnoreClippingState;
  local_a688 = 0;
  ppcVar26 = &local_a690;
  puVar27 = local_a2c8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a2c8;
  ppVar30 = &local_a2b8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar30 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar30 = (pmf_b0dcde9c *)&ppVar30->field_0x1;
  }
  local_aa20 = SCheckBox::FArguments::IsChecked<SFxTest>(local_aa28,this,&local_a2b8);
  local_a680 = OnFxWidgetIgnoreClippingChanged;
  local_a678 = 0;
  ppcVar26 = &local_a680;
  puVar27 = local_a2a8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a2a8;
  ppVar31 = &local_a298;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar31 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar31 = (pmf_6fd9c6ea *)&ppVar31->field_0x1;
  }
  local_a9f8 = SCheckBox::FArguments::OnCheckStateChanged<SFxTest>(local_aa20,this,&local_a298);
  local_aa08 = STextBlock::FArguments::FArguments(&local_44d8);
  local_aa18 = &local_9948;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a088,L"STestSuite",L"IgnoreClipping",L"Ignore Clipping");
  local_aa10 = TAttribute<FText>::TAttribute<FText>(local_aa18,pFVar4);
  local_aa00 = STextBlock::FArguments::Text(local_aa08,local_aa10);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae6c);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9dd8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1106,&local_ae6c);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_a098,local_aa00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a510,pTVar6);
  local_a9f0 = SCheckBox::FArguments::operator[](local_a9f8,&local_a510);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae6b);
  this_00 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_9df0,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1102,&local_ae6b);
  pTVar12 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_a0a8,local_a9f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_a520,pTVar12);
  local_a9e0 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a9e8,&local_a520);
  local_a9d0 = SGridPanel::FArguments::operator+(local_a9d8,local_a9e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae6a);
  this_01 = MakeTDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
                      (&local_9e08,"SGridPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x10b8,&local_ae6a);
  pTVar13 = TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_a0b8,local_a9d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanel>(&local_a530,pTVar13);
  local_a9c0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a9c8,&local_a530);
  local_a8c0 = SHorizontalBox::FArguments::operator+(local_a9b8,local_a9c0);
  local_a8d0 = SHorizontalBox::Slot(&local_9048);
  local_a970 = SUniformGridPanel::FArguments::FArguments(&local_7da0);
  local_a980 = SUniformGridPanel::Slot(&local_9c38,0,0);
  local_a990 = SButton::FArguments::FArguments(&local_5a20);
  local_a9a0 = STextBlock::FArguments::FArguments(&local_4a30);
  local_a9b0 = &local_9918;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a0c8,L"STestSuite",L"FxTextZoomFadeOutLabel",L"Zoom Fade Out");
  local_a9a8 = TAttribute<FText>::TAttribute<FText>(local_a9b0,pFVar4);
  local_a998 = STextBlock::FArguments::Text(local_a9a0,local_a9a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae69);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9e20,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1112,&local_ae69);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_a0d8,local_a998);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a540,pTVar6);
  local_a988 = SButton::FArguments::operator[](local_a990,&local_a540);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae68);
  pTVar14 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_9e38,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1110,&local_ae68);
  pTVar15 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_a0e8,local_a988);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_a550,pTVar15);
  local_a978 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a980,&local_a550);
  local_a928 = SUniformGridPanel::FArguments::operator+(local_a970,local_a978);
  local_a938 = SUniformGridPanel::Slot(&local_9c60,1,0);
  local_a948 = SButton::FArguments::FArguments(&local_5f60);
  local_a958 = STextBlock::FArguments::FArguments(&local_4f88);
  local_a968 = &local_98e8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a0f8,L"STestSuite",L"FxTextFadeInFromLeftLabel",L"Fade in From Left");
  local_a960 = TAttribute<FText>::TAttribute<FText>(local_a968,pFVar4);
  local_a950 = STextBlock::FArguments::Text(local_a958,local_a960);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae67);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9e50,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1119,&local_ae67);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_a108,local_a950);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a560,pTVar6);
  local_a940 = SButton::FArguments::operator[](local_a948,&local_a560);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae66);
  pTVar14 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_9e68,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1117,&local_ae66);
  pTVar15 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_a118,local_a940);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_a570,pTVar15);
  local_a930 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a938,&local_a570);
  local_a8e0 = SUniformGridPanel::FArguments::operator+(local_a928,local_a930);
  local_a8f0 = SUniformGridPanel::Slot(&local_9c88,1,1);
  local_a900 = SButton::FArguments::FArguments(&local_64a0);
  local_a910 = STextBlock::FArguments::FArguments(&local_54e0);
  local_a920 = &local_98b8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a128,L"STestSuite",L"FxTextFadeInFromRightLabel",L"Fade in From Right")
  ;
  local_a918 = TAttribute<FText>::TAttribute<FText>(local_a920,pFVar4);
  local_a908 = STextBlock::FArguments::Text(local_a910,local_a918);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae65);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_9e80,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1120,&local_ae65);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_a138,local_a908);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a580,pTVar6);
  local_a8f8 = SButton::FArguments::operator[](local_a900,&local_a580);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae64);
  pTVar14 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_9e98,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x111e,&local_ae64);
  pTVar15 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_a148,local_a8f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_a590,pTVar15);
  local_a8e8 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a8f0,&local_a590);
  local_a8d8 = SUniformGridPanel::FArguments::operator+(local_a8e0,local_a8e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae63);
  this_02 = MakeTDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
                      (&local_9eb0,"SUniformGridPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x110d,&local_ae63);
  pTVar16 = TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_a158,local_a8d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformGridPanel>(&local_a770,pTVar16);
  local_a8c8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a8d0,&local_a770);
  local_a8b8 = SHorizontalBox::FArguments::operator+(local_a8c0,local_a8c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae62);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_9ec8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x10b5,&local_ae62);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_a168,local_a8b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_a5b0,pTVar11);
  local_a8a8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a8b0,&local_a5b0);
  local_a788 = SVerticalBox::FArguments::operator+(local_a8a0,local_a8a8);
  pFVar1 = SVerticalBox::Slot(&local_9130);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_a898 = &pFVar1->field_0x48;
  pFVar1 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_a898,HAlign_Center);
  local_a890 = &pFVar1->field_0x18;
  local_a798 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_a890,__real_41a00000);
  local_a7a8 = SBorder::FArguments::FArguments(&local_71a0);
  local_a888 = SFxWidget::FArguments::FArguments(&local_7880);
  local_a670 = GetFxWidgetIgnoreClipping;
  local_a668 = 0;
  ppcVar26 = &local_a670;
  puVar27 = local_a288;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a288;
  ppVar32 = &local_a278;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar32 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar32 = (pmf_fbb1cb59 *)&ppVar32->field_0x1;
  }
  local_a880 = SFxWidget::FArguments::IgnoreClipping<SFxTest>(local_a888,this,&local_a278);
  local_a660 = GetRenderScale;
  local_a658 = 0;
  ppcVar26 = &local_a660;
  puVar27 = local_a268;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a268;
  ppVar33 = &local_a258;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_a878 = SFxWidget::FArguments::RenderScale<SFxTest>(local_a880,this,&local_a258);
  local_a650 = GetRenderScaleOrigin;
  local_a648 = 0;
  ppcVar26 = &local_a650;
  puVar27 = local_a248;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a248;
  ppVar34 = &local_a238;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar34 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar34 = (pmf_8a5f2fc3 *)&ppVar34->field_0x1;
  }
  local_a870 = SFxWidget::FArguments::RenderScaleOrigin<SFxTest>(local_a878,this,&local_a238);
  local_a640 = GetLayoutScale;
  local_a638 = 0;
  ppcVar26 = &local_a640;
  puVar27 = local_a228;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a228;
  ppVar33 = &local_a218;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_2c29edee *)&ppVar33->field_0x1;
  }
  local_a868 = SFxWidget::FArguments::LayoutScale<SFxTest>(local_a870,this,&local_a218);
  local_a630 = GetVisualOffset;
  local_a628 = 0;
  ppcVar26 = &local_a630;
  puVar27 = local_a208;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_a208;
  ppVar34 = &local_a1f8;
  for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined1 *)ppVar34 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar34 = (pmf_8a5f2fc3 *)&ppVar34->field_0x1;
  }
  local_a7b8 = SFxWidget::FArguments::VisualOffset<SFxTest>(local_a868,this,&local_a1f8);
  local_a7c8 = SBorder::FArguments::FArguments(&local_7580);
  local_a810 = SHorizontalBox::FArguments::FArguments(&local_89f0);
  pFVar9 = SHorizontalBox::Slot(&local_9218);
  local_a820 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar9);
  local_a830 = SImage::FArguments::FArguments(&local_7b28);
  local_a840 = &local_9a30;
  local_ae20 = FTestStyle::Get();
  local_a850 = *(code **)((longlong)*local_ae20 + 0x50);
  local_a860 = &local_a450;
  pFVar17 = ::FName::FName(local_a860,"UEIcon");
  local_a858 = *pFVar17;
  local_a848 = (FSlateBrush *)(*local_a850)(local_ae20,local_a858,0,0);
  local_a838 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_a840,&local_a848);
  local_a828 = SImage::FArguments::Image(local_a830,local_a838);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae61);
  this_03 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_9ee0,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1136,&local_ae61);
  pTVar18 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_a178,local_a828);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_a5c0,pTVar18);
  local_a818 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a820,&local_a5c0);
  local_a7d8 = SHorizontalBox::FArguments::operator+(local_a810,local_a818);
  pFVar9 = SHorizontalBox::Slot(&local_9300);
  local_a7e8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar9);
  local_a7f8 = SButton::FArguments::FArguments(&local_69e0);
  local_a808 = &local_9888;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a188,L"STestSuite",L"FxTextContentLabel",L"Click Me!");
  local_a800 = TAttribute<FText>::TAttribute<FText>(local_a808,pFVar4);
  local_a7f0 = SButton::FArguments::Text(local_a7f8,local_a800);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae60);
  pTVar14 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_9ef8,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x113b,&local_ae60);
  pTVar15 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_a198,local_a7f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_a5d0,pTVar15);
  local_a7e0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a7e8,&local_a5d0);
  local_a7d0 = SHorizontalBox::FArguments::operator+(local_a7d8,local_a7e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae5f);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_9f10,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1133,&local_ae5f);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_a1a8,local_a7d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_a5e0,pTVar11);
  local_a7c0 = SBorder::FArguments::operator[](local_a7c8,&local_a5e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae5e);
  pTVar19 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_9f28,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1131,&local_ae5e);
  pTVar20 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar19,&local_a1b8,local_a7c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_a5f0,pTVar20);
  local_a7b0 = SFxWidget::FArguments::operator[](local_a7b8,&local_a5f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae5d);
  this_04 = MakeTDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
                      (&local_9f40,"SFxWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x112a,&local_ae5d);
  pTVar21 = TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_a1c8,local_a7b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SFxWidget>(&local_a600,pTVar21);
  local_a7a0 = SBorder::FArguments::operator[](local_a7a8,&local_a600);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_ae5c);
  pTVar19 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_9f58,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1128,&local_ae5c);
  pTVar20 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar19,&local_a1d8,local_a7a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_a610,pTVar20);
  local_a790 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a798,&local_a610);
  local_a780 = SVerticalBox::FArguments::operator+(local_a788,local_a790);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_ae5b);
  this_05 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_9ca0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x10b2,local_ae5b);
  pTVar22 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_a1e8,local_a780);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_a620,pTVar22);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_a778,&local_a620);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a620);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_a1e8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_9ca0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a610);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_a1d8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_9f58);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a600);
  TSharedRef<SFxWidget,1>::~TSharedRef<SFxWidget,1>(&local_a1c8);
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>(&local_9f40);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a5f0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_a1b8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_9f28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a5e0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_a1a8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_9f10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a5d0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_a198);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_9ef8);
  FText::~FText(&local_a188);
  SButton::FArguments::~FArguments(&local_69e0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9300);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a5c0);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_a178);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_9ee0);
  SImage::FArguments::~FArguments(&local_7b28);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9218);
  SHorizontalBox::FArguments::~FArguments(&local_89f0);
  SBorder::FArguments::~FArguments(&local_7580);
  SFxWidget::FArguments::~FArguments(&local_7880);
  SBorder::FArguments::~FArguments(&local_71a0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9130);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a5b0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_a168);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_9ec8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a770);
  TSharedRef<SUniformGridPanel,1>::~TSharedRef<SUniformGridPanel,1>(&local_a158);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>(&local_9eb0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a590);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_a148);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_9e98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a580);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_a138);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9e80);
  FText::~FText(&local_a128);
  STextBlock::FArguments::~FArguments(&local_54e0);
  SButton::FArguments::~FArguments(&local_64a0);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9c88);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a570);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_a118);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_9e68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a560);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_a108);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9e50);
  FText::~FText(&local_a0f8);
  STextBlock::FArguments::~FArguments(&local_4f88);
  SButton::FArguments::~FArguments(&local_5f60);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9c60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a550);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_a0e8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_9e38);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a540);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_a0d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9e20);
  FText::~FText(&local_a0c8);
  STextBlock::FArguments::~FArguments(&local_4a30);
  SButton::FArguments::~FArguments(&local_5a20);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9c38);
  SUniformGridPanel::FArguments::~FArguments(&local_7da0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9048);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a530);
  TSharedRef<SGridPanel,1>::~TSharedRef<SGridPanel,1>(&local_a0b8);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>(&local_9e08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a520);
  TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_a0a8);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_9df0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a510);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_a098);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9dd8);
  FText::~FText(&local_a088);
  STextBlock::FArguments::~FArguments(&local_44d8);
  SCheckBox::FArguments::~FArguments(&local_6dc0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9858);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a500);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_a078);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_9dc0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a4f0);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_a068);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_9da8);
  SSpinBox<float>::FArguments::~FArguments(&local_2a20);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8f60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a4e0);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_a058);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_9d90);
  SSpinBox<float>::FArguments::~FArguments(&local_2320);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8e78);
  SHorizontalBox::FArguments::~FArguments(&local_87e8);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_97c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a4d0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_a048);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9d78);
  FText::~FText(&local_a038);
  STextBlock::FArguments::~FArguments(&local_3f80);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9728);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a4c0);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_a028);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_9d60);
  SSpinBox<float>::FArguments::~FArguments(&local_1c20);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9690);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a4b0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_a018);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9d48);
  FText::~FText(&local_a008);
  STextBlock::FArguments::~FArguments(&local_3a28);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_95f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a4a0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_9ff8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_9d30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a490);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_9fe8);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_9d18);
  SSpinBox<float>::FArguments::~FArguments(&local_1520);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8d90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a480);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_9fd8);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_9d00);
  SSpinBox<float>::FArguments::~FArguments(&local_e20);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8ca8);
  SHorizontalBox::FArguments::~FArguments(&local_85e0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9560);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a470);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_9fc8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9ce8);
  FText::~FText(&local_9fb8);
  STextBlock::FArguments::~FArguments(&local_34d0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_94c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a460);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_9fa8);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_9cd0);
  SSpinBox<float>::FArguments::~FArguments(&local_720);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9430);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a5a0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_9f98);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9cb8);
  FText::~FText(&local_9f88);
  STextBlock::FArguments::~FArguments(&local_2f78);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_9398);
  TAttribute<float>::~TAttribute<float>(&local_9f78);
  SGridPanel::FArguments::~FArguments(&local_7fc8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8bc0);
  SHorizontalBox::FArguments::~FArguments(&local_83d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8ad8);
  SVerticalBox::FArguments::~FArguments(&local_81d0);
  return;
}

// GetFxWidgetIgnoreClipping @ 1430c9160

bool __thiscall SFxTest::GetFxWidgetIgnoreClipping(SFxTest *this)

{
  return this->FxWidgetIgnoreClippingState == Checked;
}

// GetFxWidgetIgnoreClippingState @ 1430c91a0

ECheckBoxState __thiscall SFxTest::GetFxWidgetIgnoreClippingState(SFxTest *this)

{
  return this->FxWidgetIgnoreClippingState;
}

// GetLayoutScale @ 1430c9910

float __thiscall SFxTest::GetLayoutScale(SFxTest *this)

{
  return this->LayoutScale;
}

// GetRenderScale @ 1430cc930

float __thiscall SFxTest::GetRenderScale(SFxTest *this)

{
  return this->RenderScale;
}

// GetRenderScaleOrigin @ 1430cc950

TVector2<double> * __thiscall
SFxTest::GetRenderScaleOrigin(SFxTest *this,TVector2<double> *__return_storage_ptr__)

{
  longlong lVar1;
  TVector2<double> *pTVar2;
  TVector2<double> *pTVar3;
  
  pTVar2 = &this->RenderScaleOrigin;
  pTVar3 = __return_storage_ptr__;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar3->field0_0x0 = *(undefined1 *)&pTVar2->field0_0x0;
    pTVar2 = (TVector2<double> *)((longlong)&pTVar2->field0_0x0 + 1);
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
  }
  return __return_storage_ptr__;
}

// GetRenderScaleOriginX @ 1430cc990

float __thiscall SFxTest::GetRenderScaleOriginX(SFxTest *this)

{
  return (float)(this->RenderScaleOrigin).field0_0x0._s_0.X;
}

// GetRenderScaleOriginY @ 1430cc9b0

float __thiscall SFxTest::GetRenderScaleOriginY(SFxTest *this)

{
  return (float)(this->RenderScaleOrigin).field0_0x0._s_0.Y;
}

// GetVisualOffset @ 1430ceb40

TVector2<double> * __thiscall
SFxTest::GetVisualOffset(SFxTest *this,TVector2<double> *__return_storage_ptr__)

{
  longlong lVar1;
  TVector2<double> *pTVar2;
  TVector2<double> *pTVar3;
  
  pTVar2 = &this->VisualOffset;
  pTVar3 = __return_storage_ptr__;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar3->field0_0x0 = *(undefined1 *)&pTVar2->field0_0x0;
    pTVar2 = (TVector2<double> *)((longlong)&pTVar2->field0_0x0 + 1);
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
  }
  return __return_storage_ptr__;
}

// GetVisualOffsetOriginX @ 1430ceb80

float __thiscall SFxTest::GetVisualOffsetOriginX(SFxTest *this)

{
  return (float)(this->VisualOffset).field0_0x0._s_0.X;
}

// GetVisualOffsetOriginY @ 1430ceba0

float __thiscall SFxTest::GetVisualOffsetOriginY(SFxTest *this)

{
  return (float)(this->VisualOffset).field0_0x0._s_0.Y;
}

// OnFxWidgetIgnoreClippingChanged @ 1430db1a0

void __thiscall SFxTest::OnFxWidgetIgnoreClippingChanged(SFxTest *this,ECheckBoxState param_1)

{
  this->FxWidgetIgnoreClippingState = param_1;
  return;
}

// OnLayoutScaleChanged @ 1430dd670

void __thiscall SFxTest::OnLayoutScaleChanged(SFxTest *this,float param_1)

{
  this->LayoutScale = param_1;
  return;
}

// OnRenderScaleChanged @ 1430e2450

void __thiscall SFxTest::OnRenderScaleChanged(SFxTest *this,float param_1)

{
  this->RenderScale = param_1;
  return;
}

// OnRenderScaleChangedX @ 1430e2480

void __thiscall SFxTest::OnRenderScaleChangedX(SFxTest *this,float param_1)

{
  (this->RenderScaleOrigin).field0_0x0._s_0.X = (double)param_1;
  return;
}

// OnRenderScaleChangedY @ 1430e24b0

void __thiscall SFxTest::OnRenderScaleChangedY(SFxTest *this,float param_1)

{
  (this->RenderScaleOrigin).field0_0x0._s_0.Y = (double)param_1;
  return;
}

// OnVisualOffsetChangedX @ 1430e3150

void __thiscall SFxTest::OnVisualOffsetChangedX(SFxTest *this,float param_1)

{
  (this->VisualOffset).field0_0x0._s_0.X = (double)param_1;
  return;
}

// OnVisualOffsetChangedY @ 1430e3180

void __thiscall SFxTest::OnVisualOffsetChangedY(SFxTest *this,float param_1)

{
  (this->VisualOffset).field0_0x0._s_0.Y = (double)param_1;
  return;
}

