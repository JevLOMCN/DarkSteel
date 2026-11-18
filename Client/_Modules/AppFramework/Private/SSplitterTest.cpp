// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// SSplitterTest @ 14305ce30

SSplitterTest * __thiscall SSplitterTest::SSplitterTest(SSplitterTest *this)

{
  FVisibilityCycler *local_b8;
  FVisibilityCycler *local_b0;
  FVisibilityCycler *local_a8;
  FVisibilityCycler *local_a0;
  FVisibilityCycler *local_98;
  FVisibilityCycler *local_90;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SSplitterTest__6B_;
  local_b8 = ::operator_new(1);
  if (local_b8 == (FVisibilityCycler *)0x0) {
    local_b8 = (FVisibilityCycler *)0x0;
  }
  else {
    (local_b8->TheVisibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  }
  TSharedRef<SSplitterTest::FVisibilityCycler,1>::
  TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler>
            (&this->Col0Row0Vis,local_b8);
  local_b0 = ::operator_new(1);
  if (local_b0 == (FVisibilityCycler *)0x0) {
    local_b0 = (FVisibilityCycler *)0x0;
  }
  else {
    (local_b0->TheVisibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  }
  TSharedRef<SSplitterTest::FVisibilityCycler,1>::
  TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler>
            (&this->Col0Row1Vis,local_b0);
  local_a8 = ::operator_new(1);
  if (local_a8 == (FVisibilityCycler *)0x0) {
    local_a8 = (FVisibilityCycler *)0x0;
  }
  else {
    (local_a8->TheVisibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  }
  TSharedRef<SSplitterTest::FVisibilityCycler,1>::
  TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler>
            (&this->Col0Row2Vis,local_a8);
  local_a0 = ::operator_new(1);
  if (local_a0 == (FVisibilityCycler *)0x0) {
    local_a0 = (FVisibilityCycler *)0x0;
  }
  else {
    (local_a0->TheVisibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  }
  TSharedRef<SSplitterTest::FVisibilityCycler,1>::
  TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler>
            (&this->CenterVis,local_a0);
  local_98 = ::operator_new(1);
  if (local_98 == (FVisibilityCycler *)0x0) {
    local_98 = (FVisibilityCycler *)0x0;
  }
  else {
    (local_98->TheVisibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  }
  TSharedRef<SSplitterTest::FVisibilityCycler,1>::
  TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler>
            (&this->Col2Row0Vis,local_98);
  local_90 = ::operator_new(1);
  if (local_90 == (FVisibilityCycler *)0x0) {
    local_90 = (FVisibilityCycler *)0x0;
  }
  else {
    (local_90->TheVisibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  }
  TSharedRef<SSplitterTest::FVisibilityCycler,1>::
  TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler>
            (&this->Col2Row1Vis,local_90);
  TSharedPtr<SSplitter,1>::TSharedPtr<SSplitter,1>(&this->TopLeveSplitter,(FNullTag *)0x0);
  TSharedPtr<SSplitter,1>::TSharedPtr<SSplitter,1>(&this->Nested0,(FNullTag *)0x0);
  TSharedPtr<SSplitter,1>::TSharedPtr<SSplitter,1>(&this->Nested1,(FNullTag *)0x0);
  return this;
}

// ~SSplitterTest @ 1430622d0

void __thiscall SSplitterTest::~SSplitterTest(SSplitterTest *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Nested1).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Nested0).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->TopLeveSplitter).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Col2Row1Vis).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Col2Row0Vis).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->CenterVis).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Col0Row2Vis).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Col0Row1Vis).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Col0Row0Vis).SharedReferenceCount);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14309f430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSplitterTest::Construct(SSplitterTest *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  FSlotArguments *pFVar2;
  FText *pFVar3;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<SButton,1> *pTVar5;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar6;
  TSharedRef<SVerticalBox,1> *pTVar7;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar11;
  TSharedRef<SBorder,1> *pTVar12;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *pTVar13;
  TSharedRef<SSplitter,1> *pTVar14;
  longlong lVar15;
  code **ppcVar16;
  undefined1 *puVar17;
  pmf_5a2813b0 *ppVar18;
  T0RequiredArgs local_83c8;
  T0RequiredArgs local_83c7;
  T0RequiredArgs local_83c6;
  T0RequiredArgs local_83c5;
  T0RequiredArgs local_83c4;
  T0RequiredArgs local_83c3;
  T0RequiredArgs local_83c2;
  T0RequiredArgs local_83c1;
  T0RequiredArgs local_83c0;
  T0RequiredArgs local_83bf;
  T0RequiredArgs local_83be;
  T0RequiredArgs local_83bd;
  T0RequiredArgs local_83bc;
  T0RequiredArgs local_83bb;
  T0RequiredArgs local_83ba;
  T0RequiredArgs local_83b9;
  T0RequiredArgs local_83b8;
  T0RequiredArgs local_83b7;
  T0RequiredArgs local_83b6;
  T0RequiredArgs local_83b5;
  T0RequiredArgs local_83b4;
  T0RequiredArgs local_83b3;
  T0RequiredArgs local_83b2;
  T0RequiredArgs local_83b1;
  T0RequiredArgs local_83b0 [4];
  int local_83ac [3];
  undefined1 *local_83a0;
  undefined1 *local_8398;
  TAttribute<FText> *local_8390;
  TAttribute<FText> *local_8388;
  FArguments *local_8380;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8378;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8370;
  FArguments *local_8368;
  FArguments *local_8360;
  FSlotArguments *local_8358;
  FSlotArguments *local_8350;
  FArguments *local_8348;
  TAttribute<FText> *local_8340;
  TAttribute<FText> *local_8338;
  FArguments *local_8330;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8328;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8320;
  FArguments *local_8318;
  FArguments *local_8310;
  FSlotArguments *local_8308;
  FSlotArguments *local_8300;
  FArguments *local_82f8;
  TAttribute<FText> *local_82f0;
  TAttribute<FText> *local_82e8;
  FArguments *local_82e0;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_82d8;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_82d0;
  FArguments *local_82c8;
  FArguments *local_82c0;
  FSlotArguments *local_82b8;
  FSlotArguments *local_82b0;
  FArguments *local_82a8;
  FArguments *local_82a0;
  FSlotArguments *local_8298;
  FSlotArguments *local_8290;
  FArguments *local_8288;
  TAttribute<FText> *local_8280;
  TAttribute<FText> *local_8278;
  FArguments *local_8270;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8268;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8260;
  FArguments *local_8258;
  FArguments *local_8250;
  FSlotArguments *local_8248;
  FSlotArguments *local_8240;
  FArguments *local_8238;
  TAttribute<FText> *local_8230;
  TAttribute<FText> *local_8228;
  FArguments *local_8220;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8218;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8210;
  FArguments *local_8208;
  FArguments *local_8200;
  FSlotArguments *local_81f8;
  FSlotArguments *local_81f0;
  FArguments *local_81e8;
  TAttribute<FText> *local_81e0;
  TAttribute<FText> *local_81d8;
  FArguments *local_81d0;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_81c8;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_81c0;
  FArguments *local_81b8;
  FArguments *local_81b0;
  FSlotArguments *local_81a8;
  FSlotArguments *local_81a0;
  FArguments *local_8198;
  FArguments *local_8190;
  FSlotArguments *local_8188;
  FSlotArguments *local_8180;
  FArguments *local_8178;
  FArguments *local_8170;
  FSlotArguments *local_8168;
  FSlotArguments *local_8160;
  FArguments *local_8158;
  TAttribute<float> *local_8150;
  TAttribute<float> *local_8148;
  FSlotArguments *local_8140;
  FArguments *local_8138;
  FArguments *local_8130;
  FArguments *local_8128;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8120;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8118;
  FArguments *local_8110;
  TAttribute<FText> *local_8108;
  TAttribute<FText> *local_8100;
  FArguments *local_80f8;
  FArguments *local_80f0;
  FArguments *local_80e8;
  FArguments *local_80e0;
  FSlotArguments *local_80d8;
  FSlotArguments *local_80d0;
  FArguments *local_80c8;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_80c0;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_80b8;
  FArguments *local_80b0;
  TAttribute<FText> *local_80a8;
  TAttribute<FText> *local_80a0;
  FArguments *local_8098;
  FArguments *local_8090;
  FArguments *local_8088;
  FArguments *local_8080;
  FSlotArguments *local_8078;
  FSlotArguments *local_8070;
  FArguments *local_8068;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8060;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_8058;
  FArguments *local_8050;
  TAttribute<FText> *local_8048;
  TAttribute<FText> *local_8040;
  FArguments *local_8038;
  FArguments *local_8030;
  FArguments *local_8028;
  FArguments *local_8020;
  FSlotArguments *local_8018;
  FSlotArguments *local_8010;
  FArguments *local_8008;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *local_8000;
  FArguments *local_7ff8;
  FSlotArguments *local_7ff0;
  FSlotArguments *local_7fe8;
  FArguments *local_7fe0;
  undefined1 *local_7fd8;
  TAttribute<SSplitter::ESizeRule> *local_7fd0;
  FSlotArguments *local_7fc8;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_7fc0;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_7fb8;
  FArguments *local_7fb0;
  FArguments *local_7fa8;
  FArguments *local_7fa0;
  TAttribute<FText> *local_7f98;
  TAttribute<FText> *local_7f90;
  FArguments *local_7f88;
  FArguments *local_7f80;
  FArguments *local_7f78;
  FArguments *local_7f70;
  FSlotArguments *local_7f68;
  FSlotArguments *local_7f60;
  FArguments *local_7f58;
  FArguments *local_7f50;
  FArguments *local_7f48;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_7f40;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_7f38;
  FArguments *local_7f30;
  TAttribute<FText> *local_7f28;
  TAttribute<FText> *local_7f20;
  FArguments *local_7f18;
  FArguments *local_7f10;
  FArguments *local_7f08;
  FArguments *local_7f00;
  FSlotArguments *local_7ef8;
  FSlotArguments *local_7ef0;
  FArguments *local_7ee8;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_7ee0;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *local_7ed8;
  FArguments *local_7ed0;
  TAttribute<FText> *local_7ec8;
  TAttribute<FText> *local_7ec0;
  FArguments *local_7eb8;
  FArguments *local_7eb0;
  FArguments *local_7ea8;
  FArguments *local_7ea0;
  FSlotArguments *local_7e98;
  FSlotArguments *local_7e90;
  FArguments *local_7e88;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *local_7e80;
  FArguments *local_7e78;
  FSlotArguments *local_7e70;
  FSlotArguments *local_7e68;
  FArguments *local_7e60;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *local_7e58;
  FArguments *local_7e50;
  FSlotArguments *local_7e48;
  FSlotArguments *local_7e40;
  FArguments *local_7e38;
  FArguments *local_7e30;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_7e28;
  code *local_7e20;
  undefined4 local_7e18;
  TSharedRef<SWidget,1> local_7e10;
  TSharedRef<SWidget,1> local_7e00;
  TSharedRef<SWidget,1> local_7df0;
  TSharedRef<SWidget,1> local_7de0;
  TSharedRef<SWidget,1> local_7dd0;
  TSharedRef<SWidget,1> local_7dc0;
  TSharedRef<SWidget,1> local_7db0;
  TSharedRef<SWidget,1> local_7da0;
  TSharedRef<SWidget,1> local_7d90;
  TSharedRef<SWidget,1> local_7d80;
  TSharedRef<SWidget,1> local_7d70;
  TSharedRef<SWidget,1> local_7d60;
  TSharedRef<SWidget,1> local_7d50;
  TSharedRef<SWidget,1> local_7d40;
  TSharedRef<SWidget,1> local_7d30;
  TSharedRef<SWidget,1> local_7d20;
  TSharedRef<SWidget,1> local_7d10;
  TSharedRef<SWidget,1> local_7d00;
  TSharedRef<SWidget,1> local_7cf0;
  TSharedRef<SWidget,1> local_7ce0;
  TSharedRef<SWidget,1> local_7cd0;
  TSharedRef<SWidget,1> local_7cc0;
  TSharedRef<SWidget,1> local_7cb0;
  TSharedRef<SWidget,1> local_7ca0;
  TSharedRef<SWidget,1> local_7c90;
  undefined1 local_7c80 [24];
  pmf_5a2813b0 local_7c68;
  TSharedRef<SVerticalBox,1> local_7c58;
  TSharedRef<SSplitter,1> local_7c48;
  TSharedRef<SSplitter,1> local_7c38;
  TSharedRef<SBorder,1> local_7c28;
  TSharedRef<STextBlock,1> local_7c18;
  FText local_7c08;
  TSharedRef<SBorder,1> local_7bf8;
  TSharedRef<STextBlock,1> local_7be8;
  FText local_7bd8;
  TSharedRef<SBorder,1> local_7bc8;
  TSharedRef<SButton,1> local_7bb8;
  FText local_7ba8;
  TSharedRef<SSplitter,1> local_7b98;
  TSharedRef<SBorder,1> local_7b88;
  TSharedRef<STextBlock,1> local_7b78;
  FText local_7b68;
  TSharedRef<SBorder,1> local_7b58;
  TSharedRef<STextBlock,1> local_7b48;
  FText local_7b38;
  TSharedRef<SBorder,1> local_7b28;
  TSharedRef<STextBlock,1> local_7b18;
  FText local_7b08;
  TSharedRef<SHorizontalBox,1> local_7af8;
  TSharedRef<SVerticalBox,1> local_7ae8;
  TSharedRef<SButton,1> local_7ad8;
  FText local_7ac8;
  TSharedRef<SButton,1> local_7ab8;
  FText local_7aa8;
  TSharedRef<SButton,1> local_7a98;
  FText local_7a88;
  TSharedRef<SVerticalBox,1> local_7a78;
  TSharedRef<SButton,1> local_7a68;
  FText local_7a58;
  TSharedRef<SButton,1> local_7a48;
  FText local_7a38;
  TSharedRef<SButton,1> local_7a28;
  FText local_7a18;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7a08;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_79f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_79d8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_79c0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_79a8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7990;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7978;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7960;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_7948;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7930;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7918;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7900;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_78e8;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_78d0;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_78b8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_78a0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7888;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_7870;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7858;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_7840;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7828;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_7810;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_77f8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_77e0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_77c8;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_77b0;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_77a0;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7790;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7780;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7770;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7760;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7750;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7740;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7730;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7720;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7710;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> local_7700;
  TAttribute<float> local_76f0;
  undefined1 local_76d0 [32];
  TAttribute<FText> local_76b0;
  TAttribute<FText> local_7680;
  TAttribute<FText> local_7650;
  TAttribute<FText> local_7620;
  TAttribute<FText> local_75f0;
  TAttribute<FText> local_75c0;
  TAttribute<FText> local_7590;
  TAttribute<FText> local_7560;
  TAttribute<FText> local_7530;
  TAttribute<FText> local_7500;
  TAttribute<FText> local_74d0;
  TAttribute<FText> local_74a0;
  FSlotArguments local_7470;
  FSlotArguments local_73d8;
  FSlotArguments local_7340;
  FSlotArguments local_72a8;
  FSlotArguments local_7210;
  FSlotArguments local_7178;
  FSlotArguments local_70e0;
  FSlotArguments local_7048;
  FSlotArguments local_6fb0;
  FSlotArguments local_6ec8;
  FSlotArguments local_6de0;
  FSlotArguments local_6cf8;
  FSlotArguments local_6c10;
  FSlotArguments local_6b28;
  FSlotArguments local_6a40;
  FSlotArguments local_6958;
  FSlotArguments local_6870;
  FSlotArguments local_6788;
  FArguments local_66a0;
  FArguments local_6498;
  FArguments local_6290;
  FArguments local_6088;
  FArguments local_5e80;
  FArguments local_5bf0;
  FArguments local_5960;
  FArguments local_56d0;
  FArguments local_52f0;
  FArguments local_4f10;
  FArguments local_4b30;
  FArguments local_4750;
  FArguments local_4370;
  FArguments local_3f90;
  FArguments local_3a50;
  FArguments local_3510;
  FArguments local_2fd0;
  FArguments local_2a90;
  FArguments local_2550;
  FArguments local_2010;
  FArguments local_1ad0;
  FArguments local_1578;
  FArguments local_1020;
  FArguments local_ac8;
  FArguments local_570;
  undefined8 uStack_18;
  
  uStack_18 = 0x14309f446;
  local_7e28 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_8158 = SVerticalBox::FArguments::FArguments(&local_6088);
  pFVar1 = SVerticalBox::Slot(&local_6788);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_83a0 = &pFVar1->field_0x18;
  pFVar1 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_83a0,__real_40a00000);
  local_8398 = &pFVar1->field_0x48;
  local_8168 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_8398,HAlign_Center);
  local_8288 = SHorizontalBox::FArguments::FArguments(&local_6290);
  pFVar2 = SHorizontalBox::Slot(&local_6870);
  local_8298 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_8348 = SVerticalBox::FArguments::FArguments(&local_6498);
  pFVar1 = SVerticalBox::Slot(&local_6958);
  local_8358 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8380 = SButton::FArguments::FArguments(&local_2010);
  local_8390 = &local_76b0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7a18,L"STestSuite",L"Col0Row0Visibility",L"Col0Row0 Visibility");
  local_8388 = TAttribute<FText>::TAttribute<FText>(local_8390,pFVar3);
  local_8368 = SButton::FArguments::Text(local_8380,local_8388);
  local_8378 = &local_77b0;
  local_8370 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_8378,&this->Col0Row0Vis);
  local_8360 = SButton::FArguments::OnClicked<SSplitterTest::FVisibilityCycler>
                         (local_8368,local_8370,(pmf_0b8fe600)0x1430b4850);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c8);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_7900,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x626,&local_83c8);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_7a28,local_8360);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7c90,pTVar5);
  local_8350 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8358,&local_7c90);
  local_82f8 = SVerticalBox::FArguments::operator+(local_8348,local_8350);
  pFVar1 = SVerticalBox::Slot(&local_6a40);
  local_8308 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8330 = SButton::FArguments::FArguments(&local_2550);
  local_8340 = &local_7680;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7a38,L"STestSuite",L"Col0Row1Visibility",L"Col0Row1 Visibility");
  local_8338 = TAttribute<FText>::TAttribute<FText>(local_8340,pFVar3);
  local_8318 = SButton::FArguments::Text(local_8330,local_8338);
  local_8328 = &local_77a0;
  local_8320 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_8328,&this->Col0Row1Vis);
  local_8310 = SButton::FArguments::OnClicked<SSplitterTest::FVisibilityCycler>
                         (local_8318,local_8320,(pmf_0b8fe600)0x1430b4850);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c7);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_7918,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x62d,&local_83c7);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_7a48,local_8310);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7ca0,pTVar5);
  local_8300 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8308,&local_7ca0);
  local_82a8 = SVerticalBox::FArguments::operator+(local_82f8,local_8300);
  pFVar1 = SVerticalBox::Slot(&local_6b28);
  local_82b8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_82e0 = SButton::FArguments::FArguments(&local_2a90);
  local_82f0 = &local_7650;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7a58,L"STestSuite",L"Col0Row2Visibility",L"Col0Row2 Visibility");
  local_82e8 = TAttribute<FText>::TAttribute<FText>(local_82f0,pFVar3);
  local_82c8 = SButton::FArguments::Text(local_82e0,local_82e8);
  local_82d8 = &local_7790;
  local_82d0 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_82d8,&this->Col0Row2Vis);
  local_82c0 = SButton::FArguments::OnClicked<SSplitterTest::FVisibilityCycler>
                         (local_82c8,local_82d0,(pmf_0b8fe600)0x1430b4850);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c6);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_7930,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x634,&local_83c6);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_7a68,local_82c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7cb0,pTVar5);
  local_82b0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_82b8,&local_7cb0);
  local_82a0 = SVerticalBox::FArguments::operator+(local_82a8,local_82b0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c5);
  pTVar6 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_7948,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x622,&local_83c5);
  pTVar7 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_7a78,local_82a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_7cc0,pTVar7);
  local_8290 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8298,&local_7cc0);
  local_8238 = SHorizontalBox::FArguments::operator+(local_8288,local_8290);
  pFVar2 = SHorizontalBox::Slot(&local_6c10);
  local_8248 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_8270 = SButton::FArguments::FArguments(&local_2fd0);
  local_8280 = &local_7620;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7a88,L"STestSuite",L"CenterVisibility",L"CenterVis Visibility");
  local_8278 = TAttribute<FText>::TAttribute<FText>(local_8280,pFVar3);
  local_8258 = SButton::FArguments::Text(local_8270,local_8278);
  local_8268 = &local_7780;
  local_8260 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_8268,&this->CenterVis);
  local_8250 = SButton::FArguments::OnClicked<SSplitterTest::FVisibilityCycler>
                         (local_8258,local_8260,(pmf_0b8fe600)0x1430b4850);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c4);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_7960,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x63d,&local_83c4);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_7a98,local_8250);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7cd0,pTVar5);
  local_8240 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8248,&local_7cd0);
  local_8178 = SHorizontalBox::FArguments::operator+(local_8238,local_8240);
  pFVar2 = SHorizontalBox::Slot(&local_6cf8);
  local_8188 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_81e8 = SVerticalBox::FArguments::FArguments(&local_66a0);
  pFVar1 = SVerticalBox::Slot(&local_6de0);
  local_81f8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8220 = SButton::FArguments::FArguments(&local_3510);
  local_8230 = &local_75f0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7aa8,L"STestSuite",L"Col2Row0Visibility",L"Col2Row0 Visibility");
  local_8228 = TAttribute<FText>::TAttribute<FText>(local_8230,pFVar3);
  local_8208 = SButton::FArguments::Text(local_8220,local_8228);
  local_8218 = &local_7770;
  local_8210 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_8218,&this->Col2Row0Vis);
  local_8200 = SButton::FArguments::OnClicked<SSplitterTest::FVisibilityCycler>
                         (local_8208,local_8210,(pmf_0b8fe600)0x1430b4850);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c3);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_7978,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x648,&local_83c3);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_7ab8,local_8200);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7ce0,pTVar5);
  local_81f0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_81f8,&local_7ce0);
  local_8198 = SVerticalBox::FArguments::operator+(local_81e8,local_81f0);
  pFVar1 = SVerticalBox::Slot(&local_6ec8);
  local_81a8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_81d0 = SButton::FArguments::FArguments(&local_3a50);
  local_81e0 = &local_75c0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7ac8,L"STestSuite",L"Col2Row1Visibility",L"Col2Row1 Visibility");
  local_81d8 = TAttribute<FText>::TAttribute<FText>(local_81e0,pFVar3);
  local_81b8 = SButton::FArguments::Text(local_81d0,local_81d8);
  local_81c8 = &local_7760;
  local_81c0 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_81c8,&this->Col2Row1Vis);
  local_81b0 = SButton::FArguments::OnClicked<SSplitterTest::FVisibilityCycler>
                         (local_81b8,local_81c0,(pmf_0b8fe600)0x1430b4850);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c2);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_7990,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x64f,&local_83c2);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_7ad8,local_81b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7cf0,pTVar5);
  local_81a0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_81a8,&local_7cf0);
  local_8190 = SVerticalBox::FArguments::operator+(local_8198,local_81a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c1);
  pTVar6 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_79a8,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x644,&local_83c1);
  pTVar7 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_7ae8,local_8190);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_7d00,pTVar7);
  local_8180 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8188,&local_7d00);
  local_8170 = SHorizontalBox::FArguments::operator+(local_8178,local_8180);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83c0);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_79c0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x61e,&local_83c0);
  pTVar8 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_7af8,local_8170);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_7d10,pTVar8);
  local_8160 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8168,&local_7d10);
  local_7e38 = SVerticalBox::FArguments::operator+(local_8158,local_8160);
  local_8140 = SVerticalBox::Slot(&local_6fb0);
  local_8150 = &local_76f0;
  local_83ac[0] = 1;
  local_8148 = TAttribute<float>::TAttribute<float><int>(local_8150,local_83ac);
  local_7e48 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_8140,local_8148);
  local_8138 = SSplitter::FArguments::FArguments(&local_5960);
  local_7fe0 = SSplitter::FArguments::ResizeMode(local_8138,Fill);
  local_7ff0 = SSplitter::Slot(&local_7048);
  local_8130 = SSplitter::FArguments::FArguments(&local_5bf0);
  local_8128 = SSplitter::FArguments::Orientation(local_8130,Orient_Vertical);
  local_80c8 = SSplitter::FArguments::ResizeMode(local_8128,Fill);
  local_80d8 = SSplitter::Slot(&local_70e0);
  local_8110 = SBorder::FArguments::FArguments(&local_4370);
  local_8120 = &local_7750;
  local_8118 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_8120,&this->Col0Row0Vis);
  local_80e8 = TSlateBaseNamedArgs<SBorder>::Visibility<SSplitterTest::FVisibilityCycler>
                         ((TSlateBaseNamedArgs<SBorder> *)local_8110,local_8118,
                          (pmf_d575089b)0x1430ceb10);
  local_80f8 = STextBlock::FArguments::FArguments(&local_570);
  local_8108 = &local_7590;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7b08,L"STestSuite",L"Col0Row0",L"Col 0 Row 0");
  local_8100 = TAttribute<FText>::TAttribute<FText>(local_8108,pFVar3);
  local_80f0 = STextBlock::FArguments::Text(local_80f8,local_8100);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83bf);
  pTVar9 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_79d8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x665,&local_83bf);
  pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_7b18,local_80f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7d20,pTVar10);
  local_80e0 = SBorder::FArguments::operator[](local_80e8,&local_7d20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83be);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_79f0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x662,&local_83be);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_7b28,local_80e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7d30,pTVar12);
  local_80d0 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_80d8,&local_7d30);
  local_8068 = SSplitter::FArguments::operator+(local_80c8,local_80d0);
  local_8078 = SSplitter::Slot(&local_7178);
  local_80b0 = SBorder::FArguments::FArguments(&local_4750);
  local_80c0 = &local_7740;
  local_80b8 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_80c0,&this->Col0Row1Vis);
  local_8088 = TSlateBaseNamedArgs<SBorder>::Visibility<SSplitterTest::FVisibilityCycler>
                         ((TSlateBaseNamedArgs<SBorder> *)local_80b0,local_80b8,
                          (pmf_d575089b)0x1430ceb10);
  local_8098 = STextBlock::FArguments::FArguments(&local_ac8);
  local_80a8 = &local_7560;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7b38,L"STestSuite",L"Col0Row1",L"Col 0 Row 1");
  local_80a0 = TAttribute<FText>::TAttribute<FText>(local_80a8,pFVar3);
  local_8090 = STextBlock::FArguments::Text(local_8098,local_80a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83bd);
  pTVar9 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_7a08,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x66e,&local_83bd);
  pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_7b48,local_8090);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7d40,pTVar10);
  local_8080 = SBorder::FArguments::operator[](local_8088,&local_7d40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83bc);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_77c8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x66b,&local_83bc);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_7b58,local_8080);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7d50,pTVar12);
  local_8070 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8078,&local_7d50);
  local_8008 = SSplitter::FArguments::operator+(local_8068,local_8070);
  local_8018 = SSplitter::Slot(&local_7210);
  local_8050 = SBorder::FArguments::FArguments(&local_4b30);
  local_8060 = &local_7730;
  local_8058 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_8060,&this->Col0Row2Vis);
  local_8028 = TSlateBaseNamedArgs<SBorder>::Visibility<SSplitterTest::FVisibilityCycler>
                         ((TSlateBaseNamedArgs<SBorder> *)local_8050,local_8058,
                          (pmf_d575089b)0x1430ceb10);
  local_8038 = STextBlock::FArguments::FArguments(&local_1020);
  local_8048 = &local_7530;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7b68,L"STestSuite",L"Col0Row2",L"Col 0 Row 2");
  local_8040 = TAttribute<FText>::TAttribute<FText>(local_8048,pFVar3);
  local_8030 = STextBlock::FArguments::Text(local_8038,local_8040);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83bb);
  pTVar9 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_77e0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x676,&local_83bb);
  pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_7b78,local_8030);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7d60,pTVar10);
  local_8020 = SBorder::FArguments::operator[](local_8028,&local_7d60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83ba);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_77f8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x673,&local_83ba);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_7b88,local_8020);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7d70,pTVar12);
  local_8010 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8018,&local_7d70);
  local_7ff8 = SSplitter::FArguments::operator+(local_8008,local_8010);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b9);
  local_8000 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                         (&local_7810,"SSplitter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x65d,&local_83b9);
  pTVar13 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::Expose<SSplitter>
                      (local_8000,&this->Nested0);
  pTVar14 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_7b98,local_7ff8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&local_7d80,pTVar14);
  local_7fe8 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7ff0,&local_7d80);
  local_7f58 = SSplitter::FArguments::operator+(local_7fe0,local_7fe8);
  local_7fc8 = SSplitter::Slot(&local_72a8);
  local_7fd8 = local_76d0;
  local_83ac[1] = 0;
  local_7fd0 = TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule>
                         (local_7fd8,(ESizeRule *)(local_83ac + 1));
  local_7f68 = SSplitter::FSlot::FSlotArguments::SizeRule(local_7fc8,local_7fd0);
  local_7fb0 = SBorder::FArguments::FArguments(&local_4f10);
  local_7fc0 = &local_7720;
  local_7fb8 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_7fc0,&this->CenterVis);
  local_7fa8 = TSlateBaseNamedArgs<SBorder>::Visibility<SSplitterTest::FVisibilityCycler>
                         ((TSlateBaseNamedArgs<SBorder> *)local_7fb0,local_7fb8,
                          (pmf_d575089b)0x1430ceb10);
  local_7f78 = SBorder::FArguments::Padding(local_7fa8,__real_40a00000);
  local_7fa0 = SButton::FArguments::FArguments(&local_3f90);
  local_7e20 = FlipTopLevelSplitter;
  local_7e18 = 0;
  ppcVar16 = &local_7e20;
  puVar17 = local_7c80;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_7c80;
  ppVar18 = &local_7c68;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_5a2813b0 *)&ppVar18->field_0x1;
  }
  local_7f88 = SButton::FArguments::OnClicked<SSplitterTest>(local_7fa0,this,&local_7c68);
  local_7f98 = &local_7500;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7ba8,L"STestSuite",L"Re-orient",L"Re-orient");
  local_7f90 = TAttribute<FText>::TAttribute<FText>(local_7f98,pFVar3);
  local_7f80 = SButton::FArguments::Text(local_7f88,local_7f90);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b8);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_7828,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x681,&local_83b8);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_7bb8,local_7f80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7d90,pTVar5);
  local_7f70 = SBorder::FArguments::operator[](local_7f78,&local_7d90);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b7);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_7840,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x67d,&local_83b7);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_7bc8,local_7f70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7da0,pTVar12);
  local_7f60 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7f68,&local_7da0);
  local_7e60 = SSplitter::FArguments::operator+(local_7f58,local_7f60);
  local_7e70 = SSplitter::Slot(&local_7340);
  local_7f50 = SSplitter::FArguments::FArguments(&local_5e80);
  local_7f48 = SSplitter::FArguments::Orientation(local_7f50,Orient_Vertical);
  local_7ee8 = SSplitter::FArguments::ResizeMode(local_7f48,Fill);
  local_7ef8 = SSplitter::Slot(&local_73d8);
  local_7f30 = SBorder::FArguments::FArguments(&local_52f0);
  local_7f40 = &local_7710;
  local_7f38 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_7f40,&this->Col2Row0Vis);
  local_7f08 = TSlateBaseNamedArgs<SBorder>::Visibility<SSplitterTest::FVisibilityCycler>
                         ((TSlateBaseNamedArgs<SBorder> *)local_7f30,local_7f38,
                          (pmf_d575089b)0x1430ceb10);
  local_7f18 = STextBlock::FArguments::FArguments(&local_1578);
  local_7f28 = &local_74d0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7bd8,L"STestSuite",L"Col2Row0",L"Col 2 Row 0");
  local_7f20 = TAttribute<FText>::TAttribute<FText>(local_7f28,pFVar3);
  local_7f10 = STextBlock::FArguments::Text(local_7f18,local_7f20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b6);
  pTVar9 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_7858,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x690,&local_83b6);
  pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_7be8,local_7f10);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7db0,pTVar10);
  local_7f00 = SBorder::FArguments::operator[](local_7f08,&local_7db0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b5);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_7870,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x68d,&local_83b5);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_7bf8,local_7f00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7dc0,pTVar12);
  local_7ef0 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7ef8,&local_7dc0);
  local_7e88 = SSplitter::FArguments::operator+(local_7ee8,local_7ef0);
  local_7e98 = SSplitter::Slot(&local_7470);
  local_7ed0 = SBorder::FArguments::FArguments(&local_56d0);
  local_7ee0 = &local_7700;
  local_7ed8 = TSharedRef<SSplitterTest::FVisibilityCycler,1>::
               TSharedRef<SSplitterTest::FVisibilityCycler,1>(local_7ee0,&this->Col2Row1Vis);
  local_7ea8 = TSlateBaseNamedArgs<SBorder>::Visibility<SSplitterTest::FVisibilityCycler>
                         ((TSlateBaseNamedArgs<SBorder> *)local_7ed0,local_7ed8,
                          (pmf_d575089b)0x1430ceb10);
  local_7eb8 = STextBlock::FArguments::FArguments(&local_1ad0);
  local_7ec8 = &local_74a0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_7c08,L"STestSuite",L"Col2Row1",L"Col 1 Row 1");
  local_7ec0 = TAttribute<FText>::TAttribute<FText>(local_7ec8,pFVar3);
  local_7eb0 = STextBlock::FArguments::Text(local_7eb8,local_7ec0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b4);
  pTVar9 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_7888,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x698,&local_83b4);
  pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_7c18,local_7eb0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7dd0,pTVar10);
  local_7ea0 = SBorder::FArguments::operator[](local_7ea8,&local_7dd0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b3);
  pTVar11 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_78a0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x695,&local_83b3);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_7c28,local_7ea0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_7de0,pTVar12);
  local_7e90 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7e98,&local_7de0);
  local_7e78 = SSplitter::FArguments::operator+(local_7e88,local_7e90);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b2);
  local_7e80 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                         (&local_78b8,"SSplitter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x688,&local_83b2);
  pTVar13 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::Expose<SSplitter>
                      (local_7e80,&this->Nested1);
  pTVar14 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_7c38,local_7e78);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&local_7df0,pTVar14);
  local_7e68 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7e70,&local_7df0);
  local_7e50 = SSplitter::FArguments::operator+(local_7e60,local_7e68);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_83b1);
  local_7e58 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                         (&local_78d0,"SSplitter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x659,&local_83b1);
  pTVar13 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::Expose<SSplitter>
                      (local_7e58,&this->TopLeveSplitter);
  pTVar14 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_7c48,local_7e50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&local_7e00,pTVar14);
  local_7e40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7e48,&local_7e00);
  local_7e30 = SVerticalBox::FArguments::operator+(local_7e38,local_7e40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_83b0);
  pTVar6 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_78e8,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x616,local_83b0);
  pTVar7 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_7c58,local_7e30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_7e10,pTVar7);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_7e28,&local_7e10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7e10);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_7c58);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_78e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7e00);
  TSharedRef<SSplitter,1>::~TSharedRef<SSplitter,1>(&local_7c48);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>(&local_78d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7df0);
  TSharedRef<SSplitter,1>::~TSharedRef<SSplitter,1>(&local_7c38);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>(&local_78b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7de0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_7c28);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_78a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7dd0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_7c18);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_7888);
  FText::~FText(&local_7c08);
  STextBlock::FArguments::~FArguments(&local_1ad0);
  SBorder::FArguments::~FArguments(&local_56d0);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_7470);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7dc0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_7bf8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_7870);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7db0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_7be8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_7858);
  FText::~FText(&local_7bd8);
  STextBlock::FArguments::~FArguments(&local_1578);
  SBorder::FArguments::~FArguments(&local_52f0);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_73d8);
  SSplitter::FArguments::~FArguments(&local_5e80);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_7340);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7da0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_7bc8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_7840);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d90);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_7bb8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7828);
  FText::~FText(&local_7ba8);
  SButton::FArguments::~FArguments(&local_3f90);
  SBorder::FArguments::~FArguments(&local_4f10);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_72a8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d80);
  TSharedRef<SSplitter,1>::~TSharedRef<SSplitter,1>(&local_7b98);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>(&local_7810);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d70);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_7b88);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_77f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d60);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_7b78);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_77e0);
  FText::~FText(&local_7b68);
  STextBlock::FArguments::~FArguments(&local_1020);
  SBorder::FArguments::~FArguments(&local_4b30);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_7210);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d50);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_7b58);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_77c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d40);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_7b48);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_7a08);
  FText::~FText(&local_7b38);
  STextBlock::FArguments::~FArguments(&local_ac8);
  SBorder::FArguments::~FArguments(&local_4750);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_7178);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d30);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_7b28);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_79f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d20);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_7b18);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_79d8);
  FText::~FText(&local_7b08);
  STextBlock::FArguments::~FArguments(&local_570);
  SBorder::FArguments::~FArguments(&local_4370);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_70e0);
  SSplitter::FArguments::~FArguments(&local_5bf0);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_7048);
  SSplitter::FArguments::~FArguments(&local_5960);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6fb0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d10);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_7af8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_79c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7d00);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_7ae8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_79a8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7cf0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_7ad8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7990);
  FText::~FText(&local_7ac8);
  SButton::FArguments::~FArguments(&local_3a50);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6ec8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7ce0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_7ab8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7978);
  FText::~FText(&local_7aa8);
  SButton::FArguments::~FArguments(&local_3510);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6de0);
  SVerticalBox::FArguments::~FArguments(&local_66a0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6cf8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7cd0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_7a98);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7960);
  FText::~FText(&local_7a88);
  SButton::FArguments::~FArguments(&local_2fd0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6c10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7cc0);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_7a78);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_7948);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7cb0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_7a68);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7930);
  FText::~FText(&local_7a58);
  SButton::FArguments::~FArguments(&local_2a90);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6b28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7ca0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_7a48);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7918);
  FText::~FText(&local_7a38);
  SButton::FArguments::~FArguments(&local_2550);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6a40);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7c90);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_7a28);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7900);
  FText::~FText(&local_7a18);
  SButton::FArguments::~FArguments(&local_2010);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6958);
  SVerticalBox::FArguments::~FArguments(&local_6498);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6870);
  SHorizontalBox::FArguments::~FArguments(&local_6290);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6788);
  SVerticalBox::FArguments::~FArguments(&local_6088);
  return;
}

// FlipTopLevelSplitter @ 1430c4850

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitterTest::FlipTopLevelSplitter(SSplitterTest *this,FReply *__return_storage_ptr__)

{
  EOrientation EVar1;
  SSplitter *pSVar2;
  SSplitter *pSVar3;
  EOrientation local_38;
  EOrientation local_34;
  EOrientation local_30;
  
  pSVar2 = TSharedPtr<SSplitter,1>::operator->(&this->TopLeveSplitter);
  pSVar3 = TSharedPtr<SSplitter,1>::operator->(&this->TopLeveSplitter);
  EVar1 = SSplitter::GetOrientation(pSVar3);
  local_38 = (EOrientation)(EVar1 == Orient_Horizontal);
  SSplitter::SetOrientation(pSVar2,local_38);
  pSVar2 = TSharedPtr<SSplitter,1>::operator->(&this->Nested0);
  pSVar3 = TSharedPtr<SSplitter,1>::operator->(&this->Nested0);
  EVar1 = SSplitter::GetOrientation(pSVar3);
  local_34 = (EOrientation)(EVar1 == Orient_Horizontal);
  SSplitter::SetOrientation(pSVar2,local_34);
  pSVar2 = TSharedPtr<SSplitter,1>::operator->(&this->Nested1);
  pSVar3 = TSharedPtr<SSplitter,1>::operator->(&this->Nested1);
  EVar1 = SSplitter::GetOrientation(pSVar3);
  local_30 = (EOrientation)(EVar1 == Orient_Horizontal);
  SSplitter::SetOrientation(pSVar2,local_30);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

