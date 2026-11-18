// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 13

// ~STextEditTest @ 1430623b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STextEditTest::~STextEditTest(STextEditTest *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pIVar3 = (this->InlineEditableText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TSharedPtr<SInlineEditableTextBlock,1>::~TSharedPtr<SInlineEditableTextBlock,1>
            (&this->InlineEditableTextBlock);
  pTVar4 = (this->PopupMenu).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TSharedPtr<STextEntryPopup,1>::~TSharedPtr<STextEntryPopup,1>(&this->PopupInput);
  TSharedPtr<SRichTextBlock,1>::~TSharedPtr<SRichTextBlock,1>(&this->RichTextBlock);
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&this->NumericInput);
  TSharedPtr<SErrorText,1>::~TSharedPtr<SErrorText,1>(&this->ErrorText);
  FCurveSequence::~FCurveSequence(&this->Animation);
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&this->SearchBox);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 1430a2060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STextEditTest::Construct(STextEditTest *this,FArguments *param_1)

{
  FText *pFVar1;
  FCurveSequence *pFVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FSlotArguments *pFVar4;
  FName *pFVar5;
  FSlateFontInfo *pFVar6;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SEditableText,1> *pTVar7;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SEditableTextBox,1> *pTVar9;
  TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SInlineEditableTextBlock,1> *pTVar10;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SSearchBox,1> *pTVar11;
  FSlotArguments *pFVar12;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SButton,1> *pTVar13;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar14;
  TSharedRef<SHorizontalBox,1> *pTVar15;
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SErrorText,1> *pTVar16;
  FMargin *pFVar17;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<STextBlock,1> *pTVar18;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SCheckBox,1> *pTVar19;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_07;
  TSharedRef<SVerticalBox,1> *pTVar20;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_08;
  TSharedRef<SScrollBox,1> *pTVar21;
  longlong lVar22;
  code **ppcVar23;
  undefined1 *puVar24;
  pmf_04a91e28 *ppVar25;
  pmf_a2378bc8 *ppVar26;
  pmf_8e34e566 *ppVar27;
  pmf_cd3b9fc0 *ppVar28;
  pmf_ab462235 *ppVar29;
  pmf_88422114 *ppVar30;
  pmf_e1860997 *ppVar31;
  pmf_9af90c4f *ppVar32;
  T0RequiredArgs local_8048;
  bool local_8047;
  T0RequiredArgs local_8046;
  T0RequiredArgs local_8045;
  bool local_8044;
  T0RequiredArgs local_8043;
  T0RequiredArgs local_8042;
  T0RequiredArgs local_8041;
  bool local_8040;
  T0RequiredArgs local_803f;
  T0RequiredArgs local_803e;
  T0RequiredArgs local_803d;
  T0RequiredArgs local_803c;
  bool local_803b;
  T0RequiredArgs local_803a;
  bool local_8039;
  T0RequiredArgs local_8038;
  bool local_8037;
  T0RequiredArgs local_8036;
  T0RequiredArgs local_8035;
  T0RequiredArgs local_8034;
  T0RequiredArgs local_8033;
  T0RequiredArgs local_8032;
  T0RequiredArgs local_8031;
  int local_8030 [2];
  longlong *local_8028;
  FCurveSequence *local_8020;
  undefined1 *local_8018;
  undefined1 *local_8010;
  TAttribute<FText> *local_8008;
  TAttribute<FText> *local_8000;
  FArguments *local_7ff8;
  FName *local_7ff0;
  FFontOutlineSettings *local_7fe8;
  FName local_7fe0;
  TAttribute<FSlateFontInfo> *local_7fd8;
  TAttribute<FSlateFontInfo> *local_7fd0;
  FArguments *local_7fc8;
  TAttribute<FText> *local_7fc0;
  TAttribute<FText> *local_7fb8;
  FArguments *local_7fb0;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *local_7fa8;
  FArguments *local_7fa0;
  FSlotArguments *local_7f98;
  FSlotArguments *local_7f90;
  FArguments *local_7f88;
  undefined1 *local_7f80;
  undefined1 *local_7f78;
  TAttribute<FText> *local_7f70;
  TAttribute<FText> *local_7f68;
  FArguments *local_7f60;
  FName *local_7f58;
  FFontOutlineSettings *local_7f50;
  FName local_7f48;
  TAttribute<FSlateFontInfo> *local_7f40;
  TAttribute<FSlateFontInfo> *local_7f38;
  FArguments *local_7f30;
  TAttribute<bool> *local_7f28;
  TAttribute<bool> *local_7f20;
  FArguments *local_7f18;
  TAttribute<FText> *local_7f10;
  TAttribute<FText> *local_7f08;
  FArguments *local_7f00;
  TAttribute<FText> *local_7ef8;
  TAttribute<FText> *local_7ef0;
  FArguments *local_7ee8;
  FArguments *local_7ee0;
  FSlotArguments *local_7ed8;
  FSlotArguments *local_7ed0;
  FArguments *local_7ec8;
  undefined1 *local_7ec0;
  undefined1 *local_7eb8;
  TAttribute<FText> *local_7eb0;
  TAttribute<FText> *local_7ea8;
  FArguments *local_7ea0;
  FName *local_7e98;
  FFontOutlineSettings *local_7e90;
  FName local_7e88;
  TAttribute<FSlateFontInfo> *local_7e80;
  TAttribute<FSlateFontInfo> *local_7e78;
  FArguments *local_7e70;
  TAttribute<FText> *local_7e68;
  TAttribute<FText> *local_7e60;
  FArguments *local_7e58;
  FArguments *local_7e50;
  FSlotArguments *local_7e48;
  FSlotArguments *local_7e40;
  FArguments *local_7e38;
  undefined1 *local_7e30;
  undefined1 *local_7e28;
  TAttribute<FText> *local_7e20;
  TAttribute<FText> *local_7e18;
  FArguments *local_7e10;
  FName *local_7e08;
  FFontOutlineSettings *local_7e00;
  FName local_7df8;
  TAttribute<FSlateFontInfo> *local_7df0;
  TAttribute<FSlateFontInfo> *local_7de8;
  FArguments *local_7de0;
  TAttribute<bool> *local_7dd8;
  TAttribute<bool> *local_7dd0;
  FArguments *local_7dc8;
  FArguments *local_7dc0;
  TAttribute<FText> *local_7db8;
  TAttribute<FText> *local_7db0;
  FArguments *local_7da8;
  FArguments *local_7da0;
  FSlotArguments *local_7d98;
  FSlotArguments *local_7d90;
  FArguments *local_7d88;
  undefined1 *local_7d80;
  undefined1 *local_7d78;
  FName *local_7d70;
  FFontOutlineSettings *local_7d68;
  FName local_7d60;
  TAttribute<FSlateFontInfo> *local_7d58;
  TAttribute<FSlateFontInfo> *local_7d50;
  FArguments *local_7d48;
  TAttribute<FText> *local_7d40;
  TAttribute<FText> *local_7d38;
  FArguments *local_7d30;
  FArguments *local_7d28;
  TAttribute<FText> *local_7d20;
  TAttribute<FText> *local_7d18;
  FArguments *local_7d10;
  TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *local_7d08;
  FArguments *local_7d00;
  FSlotArguments *local_7cf8;
  FSlotArguments *local_7cf0;
  FArguments *local_7ce8;
  undefined1 *local_7ce0;
  undefined1 *local_7cd8;
  undefined1 *local_7cd0;
  TAttribute<FText> *local_7cc8;
  TAttribute<FText> *local_7cc0;
  FArguments *local_7cb8;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *local_7cb0;
  FArguments *local_7ca8;
  FSlotArguments *local_7ca0;
  FSlotArguments *local_7c98;
  FArguments *local_7c90;
  undefined1 *local_7c88;
  undefined1 *local_7c80;
  undefined1 *local_7c78;
  TAttribute<FText> *local_7c70;
  TAttribute<FText> *local_7c68;
  FArguments *local_7c60;
  FArguments *local_7c58;
  TAttribute<bool> *local_7c50;
  TAttribute<bool> *local_7c48;
  FArguments *local_7c40;
  TAttribute<FText> *local_7c38;
  TAttribute<FText> *local_7c30;
  FArguments *local_7c28;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *local_7c20;
  FArguments *local_7c18;
  FSlotArguments *local_7c10;
  FSlotArguments *local_7c08;
  FArguments *local_7c00;
  undefined1 *local_7bf8;
  undefined1 *local_7bf0;
  undefined1 *local_7be8;
  undefined1 *local_7be0;
  TAttribute<FText> *local_7bd8;
  TAttribute<FText> *local_7bd0;
  FArguments *local_7bc8;
  FArguments *local_7bc0;
  FArguments *local_7bb8;
  FSlotArguments *local_7bb0;
  FSlotArguments *local_7ba8;
  FArguments *local_7ba0;
  FArguments *local_7b98;
  FSlotArguments *local_7b90;
  FSlotArguments *local_7b88;
  FArguments *local_7b80;
  undefined1 *local_7b78;
  undefined1 *local_7b70;
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *local_7b68;
  FArguments *local_7b60;
  FSlotArguments *local_7b58;
  FSlotArguments *local_7b50;
  FArguments *local_7b48;
  undefined1 *local_7b40;
  undefined1 *local_7b38;
  undefined1 *local_7b30;
  TAttribute<FText> *local_7b28;
  TAttribute<FText> *local_7b20;
  FArguments *local_7b18;
  TAttribute<bool> *local_7b10;
  TAttribute<bool> *local_7b08;
  FArguments *local_7b00;
  TAttribute<FText> *local_7af8;
  TAttribute<FText> *local_7af0;
  FArguments *local_7ae8;
  FArguments *local_7ae0;
  FArguments *local_7ad8;
  FSlotArguments *local_7ad0;
  FSlotArguments *local_7ac8;
  FArguments *local_7ac0;
  undefined1 *local_7ab8;
  undefined1 *local_7ab0;
  undefined1 *local_7aa8;
  TAttribute<FText> *local_7aa0;
  TAttribute<FText> *local_7a98;
  FArguments *local_7a90;
  TAttribute<bool> *local_7a88;
  TAttribute<bool> *local_7a80;
  FArguments *local_7a78;
  TAttribute<FText> *local_7a70;
  TAttribute<FText> *local_7a68;
  FArguments *local_7a60;
  FArguments *local_7a58;
  FArguments *local_7a50;
  FSlotArguments *local_7a48;
  FSlotArguments *local_7a40;
  FArguments *local_7a38;
  undefined1 *local_7a30;
  undefined1 *local_7a28;
  undefined1 *local_7a20;
  FArguments *local_7a18;
  TAttribute<bool> *local_7a10;
  TAttribute<bool> *local_7a08;
  FArguments *local_7a00;
  TAttribute<float> *local_79f8;
  TAttribute<float> *local_79f0;
  FArguments *local_79e8;
  TAttribute<FText> *local_79e0;
  TAttribute<FText> *local_79d8;
  FArguments *local_79d0;
  FArguments *local_79c8;
  FSlotArguments *local_79c0;
  FSlotArguments *local_79b8;
  FArguments *local_79b0;
  TAttribute<FMargin> *local_79a8;
  TAttribute<FMargin> *local_79a0;
  FSlotArgumentsMixin *local_7998;
  FArguments *local_7990;
  FArguments *local_7988;
  TAttribute<FText> *local_7980;
  TAttribute<FText> *local_7978;
  FArguments *local_7970;
  FArguments *local_7968;
  FArguments *local_7960;
  FArguments *local_7958;
  FSlotArguments *local_7950;
  FSlotArguments *local_7948;
  FArguments *local_7940;
  FArguments *local_7938;
  FSlotArguments *local_7930;
  FSlotArguments *local_7928;
  FArguments *local_7920;
  FArguments *local_7918;
  FSlotArguments *local_7910;
  FSlotArguments *local_7908;
  FArguments *local_7900;
  FArguments *local_78f8;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_78f0;
  TSharedRef<SWidget,1> local_78e8;
  TSharedRef<SWidget,1> local_78d8;
  TSharedRef<SWidget,1> local_78c8;
  TSharedRef<SWidget,1> local_78b8;
  TSharedRef<SWidget,1> local_78a8;
  code *local_7898;
  undefined4 local_7890;
  code *local_7888;
  undefined4 local_7880;
  code *local_7878;
  undefined4 local_7870;
  code *local_7868;
  undefined4 local_7860;
  code *local_7858;
  undefined4 local_7850;
  code *local_7848;
  undefined4 local_7840;
  code *local_7838;
  undefined4 local_7830;
  code *local_7828;
  undefined4 local_7820;
  code *local_7818;
  undefined4 local_7810;
  TSharedRef<SWidget,1> local_7808;
  TSharedRef<SWidget,1> local_77f8;
  TSharedRef<SWidget,1> local_77e8;
  TSharedRef<SWidget,1> local_77d8;
  TSharedRef<SWidget,1> local_77c8;
  TSharedRef<SWidget,1> local_77b8;
  TSharedRef<SWidget,1> local_77a8;
  TSharedRef<SWidget,1> local_7798;
  TSharedRef<SWidget,1> local_7788;
  TSharedRef<SWidget,1> local_7778;
  TSharedRef<SWidget,1> local_7768;
  TSharedRef<SWidget,1> local_7758;
  TSharedRef<SWidget,1> local_7748;
  FName local_7738;
  FName local_7730;
  FName local_7728;
  FName local_7720;
  FName local_7718;
  FText local_7710;
  TSharedRef<SWidget,1> local_7700;
  undefined1 local_76f0 [24];
  pmf_04a91e28 local_76d8;
  undefined1 local_76c8 [16];
  pmf_a2378bc8 local_76b8;
  undefined1 local_76a8 [16];
  pmf_8e34e566 local_7698;
  undefined1 local_7688 [16];
  pmf_cd3b9fc0 local_7678;
  undefined1 local_7668 [16];
  pmf_ab462235 local_7658;
  undefined1 local_7648 [16];
  pmf_ab462235 local_7638;
  undefined1 local_7628 [16];
  pmf_88422114 local_7618;
  undefined1 local_7608 [16];
  pmf_e1860997 local_75f8;
  undefined1 local_75e8 [16];
  pmf_9af90c4f local_75d8;
  TSharedRef<SScrollBox,1> local_75c8;
  TSharedRef<SVerticalBox,1> local_75b8;
  TSharedRef<SHorizontalBox,1> local_75a8;
  TSharedRef<SCheckBox,1> local_7598;
  TSharedRef<STextBlock,1> local_7588;
  FText local_7578;
  TSharedRef<SEditableTextBox,1> local_7568;
  FText local_7558;
  TSharedRef<SEditableTextBox,1> local_7548;
  FText local_7538;
  FText local_7528;
  TSharedRef<SEditableTextBox,1> local_7518;
  FText local_7508;
  FText local_74f8;
  TSharedRef<SErrorText,1> local_74e8;
  TSharedRef<SHorizontalBox,1> local_74d8;
  TSharedRef<SButton,1> local_74c8;
  FText local_74b8;
  TSharedRef<SEditableTextBox,1> local_74a8;
  FText local_7498;
  FText local_7488;
  TSharedRef<SSearchBox,1> local_7478;
  FText local_7468;
  TSharedRef<SInlineEditableTextBlock,1> local_7458;
  FText local_7448;
  TSharedRef<SEditableTextBox,1> local_7438;
  FText local_7428;
  FText local_7418;
  TSharedRef<SEditableTextBox,1> local_7408;
  FText local_73f8;
  FText local_73e8;
  TSharedRef<SEditableTextBox,1> local_73d8;
  FText local_73c8;
  FText local_73b8;
  FText local_73a8;
  TSharedRef<SEditableText,1> local_7398;
  FText local_7388;
  FText local_7378;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_7368;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_7350;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_7338;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_7320;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_7308;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_72f0;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_72d8;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_72c0;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_72a8;
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> local_7290;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_7278;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7260;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_7248;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_7230;
  TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> local_7218;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_7200;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_71e8;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_71d0;
  FMargin local_71b8;
  FFontOutlineSettings local_71a8;
  FFontOutlineSettings local_7188;
  TAttribute<bool> local_7168;
  FFontOutlineSettings local_7148;
  FFontOutlineSettings local_7128;
  TAttribute<bool> local_7108;
  FFontOutlineSettings local_70e8;
  TAttribute<bool> local_70c8;
  TAttribute<bool> local_70a8;
  TAttribute<bool> local_7088;
  TAttribute<bool> local_7068;
  TAttribute<float> local_7048;
  TAttribute<FText> local_7028;
  TAttribute<FText> local_6ff8;
  TAttribute<FText> local_6fc8;
  TAttribute<FText> local_6f98;
  TAttribute<FText> local_6f68;
  TAttribute<FText> local_6f38;
  TAttribute<FText> local_6f08;
  TAttribute<FText> local_6ed8;
  TAttribute<FText> local_6ea8;
  TAttribute<FText> local_6e78;
  TAttribute<FText> local_6e48;
  TAttribute<FText> local_6e18;
  TAttribute<FText> local_6de8;
  TAttribute<FText> local_6db8;
  TAttribute<FText> local_6d88;
  TAttribute<FText> local_6d58;
  TAttribute<FText> local_6d28;
  TAttribute<FText> local_6cf8;
  TAttribute<FText> local_6cc8;
  TAttribute<FText> local_6c98;
  TAttribute<FMargin> local_6c68;
  TAttribute<FText> local_6c38;
  FSlateFontInfo local_6c08;
  FSlateFontInfo local_6ba8;
  FSlateFontInfo local_6b48;
  FSlateFontInfo local_6ae8;
  FSlateFontInfo local_6a88;
  FCurveSequence local_6a28;
  FSlotArguments local_69b8;
  FSlotArguments local_68d0;
  FSlotArguments local_67e8;
  FSlotArguments local_6700;
  FSlotArguments local_6618;
  FSlotArguments local_6530;
  FSlotArguments local_6448;
  FSlotArguments local_6360;
  FSlotArguments local_6278;
  FSlotArguments local_6190;
  FSlotArguments local_60a8;
  FSlotArguments local_5fc0;
  FSlotArguments local_5ed8;
  FSlotArguments local_5df0;
  FSlotArguments local_5d08;
  FSlotArguments local_5c20;
  TAttribute<FSlateFontInfo> local_5b38;
  TAttribute<FSlateFontInfo> local_5ab8;
  TAttribute<FSlateFontInfo> local_5a38;
  TAttribute<FSlateFontInfo> local_59b8;
  TAttribute<FSlateFontInfo> local_5938;
  FArguments local_58b8;
  FArguments local_56b0;
  FArguments local_54a8;
  FArguments local_52a0;
  FArguments local_4fd8;
  FArguments local_4d00;
  FArguments local_4948;
  FArguments local_4568;
  FArguments local_4058;
  FArguments local_3b18;
  FArguments local_35c0;
  FArguments local_2f58;
  FArguments local_2898;
  FArguments local_21d8;
  FArguments local_1b18;
  FArguments local_1458;
  FArguments local_d98;
  FArguments local_6d8;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430a2076;
  this->bIsPassword = true;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7710,L"STestSuite",L"TestingInlineEditableTextBlock",
                      L"Testing inline editable text block!");
  FText::operator=(&this->InlineEditableText,pFVar1);
  FText::~FText(&local_7710);
  pFVar2 = FCurveSequence::FCurveSequence(&local_6a28,0.0,__real_40a00000,Linear);
  FCurveSequence::operator=(&this->Animation,pFVar2);
  FCurveSequence::~FCurveSequence(&local_6a28);
  local_8020 = &this->Animation;
  local_8028 = &this->_padding_;
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)local_8028,&local_7700);
  FCurveSequence::Play(local_8020,pTVar3,true,0.0,true);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7700);
  local_78f0 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_7900 = SScrollBox::FArguments::FArguments(&local_52a0);
  local_7910 = SScrollBox::Slot(&local_5c20);
  local_7f88 = SVerticalBox::FArguments::FArguments(&local_54a8);
  pFVar4 = SVerticalBox::Slot(&local_69b8);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_8018 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_8018,HAlign_Center);
  local_8010 = &pFVar4->field_0x18;
  local_7f98 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8010,__real_40a00000);
  local_7ff8 = SEditableText::FArguments::FArguments(&local_35c0);
  local_8008 = &local_7028;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7378,L"STestSuite",L"TestingTextControl",
                      L"Testing editable text control (no box)");
  local_8000 = TAttribute<FText>::TAttribute<FText>(local_8008,pFVar1);
  local_7fc8 = SEditableText::FArguments::Text(local_7ff8,local_8000);
  local_7fd8 = &local_59b8;
  local_7fe8 = FFontOutlineSettings::FFontOutlineSettings(&local_71a8);
  local_7ff0 = &local_7718;
  pFVar5 = ::FName::FName(local_7ff0,"Regular");
  local_7fe0 = *pFVar5;
  pFVar6 = FCoreStyle::GetDefaultFontStyle(&local_6a88,local_7fe0,__real_41400000,local_7fe8);
  local_7fd0 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_7fd8,pFVar6);
  local_7fb0 = SEditableText::FArguments::Font(local_7fc8,local_7fd0);
  local_7fc0 = &local_6ff8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7388,L"STestSuite",L"TestingTextControlHint",L"Hint Text");
  local_7fb8 = TAttribute<FText>::TAttribute<FText>(local_7fc0,pFVar1);
  local_7fa0 = SEditableText::FArguments::HintText(local_7fb0,local_7fb8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8048);
  local_7fa8 = MakeTDecl<SEditableText,RequiredArgs::T0RequiredArgs>
                         (&local_7368,"SEditableText",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0xa68,&local_8048);
  this_00 = TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::Expose<SEditableText>
                      (local_7fa8,&this->EditableText);
  pTVar7 = TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_7398,local_7fa0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableText>(&local_7778,pTVar7);
  local_7f90 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7f98,&local_7778);
  local_7ec8 = SVerticalBox::FArguments::operator+(local_7f88,local_7f90);
  pFVar4 = SVerticalBox::Slot(&local_6618);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7f80 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7f80,HAlign_Center);
  local_7f78 = &pFVar4->field_0x18;
  local_7ed8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7f78,__real_40a00000);
  local_7f60 = SEditableTextBox::FArguments::FArguments(&local_6d8);
  local_7f70 = &local_6fc8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_73a8,L"STestSuite",L"TestingReadOnlyTextBox",
                      L"Read only editable text box (with tool tip!)");
  local_7f68 = TAttribute<FText>::TAttribute<FText>(local_7f70,pFVar1);
  local_7f30 = SEditableTextBox::FArguments::Text(local_7f60,local_7f68);
  local_7f40 = &local_5938;
  local_7f50 = FFontOutlineSettings::FFontOutlineSettings(&local_7188);
  local_7f58 = &local_7738;
  pFVar5 = ::FName::FName(local_7f58,"Regular");
  local_7f48 = *pFVar5;
  pFVar6 = FCoreStyle::GetDefaultFontStyle(&local_6ae8,local_7f48,__real_41a00000,local_7f50);
  local_7f38 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_7f40,pFVar6);
  local_7f18 = SEditableTextBox::FArguments::Font(local_7f30,local_7f38);
  local_7f28 = &local_7168;
  local_8047 = true;
  local_7f20 = TAttribute<bool>::TAttribute<bool>(local_7f28,&local_8047);
  local_7f00 = SEditableTextBox::FArguments::IsReadOnly(local_7f18,local_7f20);
  local_7f10 = &local_6f98;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_73b8,L"STestSuite",L"TestingReadOnlyTextBox_Tooltip",
                      L"Testing tool tip for editable text!");
  local_7f08 = TAttribute<FText>::TAttribute<FText>(local_7f10,pFVar1);
  local_7ee8 = TSlateBaseNamedArgs<SEditableTextBox>::ToolTipText
                         ((TSlateBaseNamedArgs<SEditableTextBox> *)local_7f00,local_7f08);
  local_7ef8 = &local_6f68;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_73c8,L"STestSuite",L"TestingReadOnlyTextBoxHint",L"Hint Text");
  local_7ef0 = TAttribute<FText>::TAttribute<FText>(local_7ef8,pFVar1);
  local_7ee0 = SEditableTextBox::FArguments::HintText(local_7ee8,local_7ef0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8046);
  pTVar8 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_71d0,"SEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xa6f,&local_8046);
  pTVar9 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_73d8,local_7ee0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_78a8,pTVar9);
  local_7ed0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7ed8,&local_78a8);
  local_7e38 = SVerticalBox::FArguments::operator+(local_7ec8,local_7ed0);
  pFVar4 = SVerticalBox::Slot(&local_6700);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7ec0 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7ec0,HAlign_Center);
  local_7eb8 = &pFVar4->field_0x18;
  local_7e48 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7eb8,__real_40a00000);
  local_7ea0 = SEditableTextBox::FArguments::FArguments(&local_d98);
  local_7eb0 = &local_6f38;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_73e8,L"STestSuite",L"TestingLongText",
                      L"Here is an editable text box with a very long initial string.  Useful to test scrolling.  Remember, this editable text box has many features, such as cursor navigation, text selection with either the mouse or keyboard, and cut, copy and paste.  You can even undo and redo just how you\'d expect to."
                     );
  local_7ea8 = TAttribute<FText>::TAttribute<FText>(local_7eb0,pFVar1);
  local_7e70 = SEditableTextBox::FArguments::Text(local_7ea0,local_7ea8);
  local_7e80 = &local_5b38;
  local_7e90 = FFontOutlineSettings::FFontOutlineSettings(&local_7148);
  local_7e98 = &local_7730;
  pFVar5 = ::FName::FName(local_7e98,"Bold");
  local_7e88 = *pFVar5;
  pFVar6 = FCoreStyle::GetDefaultFontStyle(&local_6b48,local_7e88,__real_41500000,local_7e90);
  local_7e78 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_7e80,pFVar6);
  local_7e58 = SEditableTextBox::FArguments::Font(local_7e70,local_7e78);
  local_7e68 = &local_6f08;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_73f8,L"STestSuite",L"TestingLongTextHint",L"Hint Text");
  local_7e60 = TAttribute<FText>::TAttribute<FText>(local_7e68,pFVar1);
  local_7e50 = SEditableTextBox::FArguments::HintText(local_7e58,local_7e60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8045);
  pTVar8 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_71e8,"SEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xa78,&local_8045);
  pTVar9 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_7408,local_7e50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_78b8,pTVar9);
  local_7e40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7e48,&local_78b8);
  local_7d88 = SVerticalBox::FArguments::operator+(local_7e38,local_7e40);
  pFVar4 = SVerticalBox::Slot(&local_67e8);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7e30 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7e30,HAlign_Center);
  local_7e28 = &pFVar4->field_0x18;
  local_7d98 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7e28,__real_40a00000);
  local_7e10 = SEditableTextBox::FArguments::FArguments(&local_1458);
  local_7e20 = &local_6ed8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7418,L"STestSuite",L"TestingBigTextBigMargin",L"Big text, big margin!")
  ;
  local_7e18 = TAttribute<FText>::TAttribute<FText>(local_7e20,pFVar1);
  local_7de0 = SEditableTextBox::FArguments::Text(local_7e10,local_7e18);
  local_7df0 = &local_5ab8;
  local_7e00 = FFontOutlineSettings::FFontOutlineSettings(&local_7128);
  local_7e08 = &local_7728;
  pFVar5 = ::FName::FName(local_7e08,"Bold");
  local_7df8 = *pFVar5;
  pFVar6 = FCoreStyle::GetDefaultFontStyle(&local_6ba8,local_7df8,__real_42200000,local_7e00);
  local_7de8 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_7df0,pFVar6);
  local_7dc8 = SEditableTextBox::FArguments::Font(local_7de0,local_7de8);
  local_7dd8 = &local_7108;
  local_8044 = true;
  local_7dd0 = TAttribute<bool>::TAttribute<bool>(local_7dd8,&local_8044);
  local_7dc0 = SEditableTextBox::FArguments::RevertTextOnEscape(local_7dc8,local_7dd0);
  local_7898 = GetLoopingColor;
  local_7890 = 0;
  ppcVar23 = &local_7898;
  puVar24 = local_76f0;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_76f0;
  ppVar25 = &local_76d8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar25 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar25 = (pmf_04a91e28 *)&ppVar25->field_0x1;
  }
  local_7da8 = SEditableTextBox::FArguments::BackgroundColor<STextEditTest>
                         (local_7dc0,this,&local_76d8);
  local_7db8 = &local_6ea8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7428,L"STestSuite",L"TestingBigTextMarginHint",L"Hint Text");
  local_7db0 = TAttribute<FText>::TAttribute<FText>(local_7db8,pFVar1);
  local_7da0 = SEditableTextBox::FArguments::HintText(local_7da8,local_7db0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8043);
  pTVar8 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_7200,"SEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xa7f,&local_8043);
  pTVar9 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_7438,local_7da0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_78c8,pTVar9);
  local_7d90 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7d98,&local_78c8);
  local_7ce8 = SVerticalBox::FArguments::operator+(local_7d88,local_7d90);
  pFVar4 = SVerticalBox::Slot(&local_68d0);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7d80 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7d80,HAlign_Center);
  local_7d78 = &pFVar4->field_0x18;
  local_7cf8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7d78,__real_40a00000);
  local_7d48 = SInlineEditableTextBlock::FArguments::FArguments(&local_4568);
  local_7d58 = &local_5a38;
  local_7d68 = FFontOutlineSettings::FFontOutlineSettings(&local_70e8);
  local_7d70 = &local_7720;
  pFVar5 = ::FName::FName(local_7d70,"Regular");
  local_7d60 = *pFVar5;
  pFVar6 = FCoreStyle::GetDefaultFontStyle(&local_6c08,local_7d60,__real_41400000,local_7d68);
  local_7d50 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_7d58,pFVar6);
  local_7d30 = SInlineEditableTextBlock::FArguments::Font(local_7d48,local_7d50);
  local_7d40 = &local_6e78;
  local_7d38 = TAttribute<FText>::TAttribute<FText><FText>(local_7d40,&this->InlineEditableText);
  local_7d28 = SInlineEditableTextBlock::FArguments::Text(local_7d30,local_7d38);
  local_7888 = InlineEditableTextCommited;
  local_7880 = 0;
  ppcVar23 = &local_7888;
  puVar24 = local_76c8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_76c8;
  ppVar26 = &local_76b8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar26 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar26 = (pmf_a2378bc8 *)&ppVar26->field_0x1;
  }
  local_7d10 = SInlineEditableTextBlock::FArguments::OnTextCommitted<STextEditTest>
                         (local_7d28,this,&local_76b8);
  local_7d20 = &local_6e48;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7448,L"STestSuite",L"TestingInlineEditableTextBlock_Tooltip",
                      L"Testing tool tip for inline editable text block!");
  local_7d18 = TAttribute<FText>::TAttribute<FText>(local_7d20,pFVar1);
  local_7d00 = TSlateBaseNamedArgs<SInlineEditableTextBlock>::ToolTipText
                         ((TSlateBaseNamedArgs<SInlineEditableTextBlock> *)local_7d10,local_7d18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8042);
  local_7d08 = MakeTDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>
                         (&local_7218,"SInlineEditableTextBlock",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0xa88,&local_8042);
  this_01 = TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::
            Expose<SInlineEditableTextBlock>(local_7d08,&this->InlineEditableTextBlock);
  pTVar10 = TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_7458,local_7d00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInlineEditableTextBlock>(&local_78d8,pTVar10);
  local_7cf0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7cf8,&local_78d8);
  local_7c90 = SVerticalBox::FArguments::operator+(local_7ce8,local_7cf0);
  pFVar4 = SVerticalBox::Slot(&local_5d08);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7ce0 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7ce0,HAlign_Center);
  local_7cd8 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_7cd8,VAlign_Center);
  local_7cd0 = &pFVar4->field_0x18;
  local_7ca0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7cd0,__real_40a00000);
  local_7cb8 = SSearchBox::FArguments::FArguments(&local_4d00);
  local_7cc8 = &local_6e18;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7468,L"STestSuite",L"TestingSearchBox_Tooltip",L"Testing search boxes")
  ;
  local_7cc0 = TAttribute<FText>::TAttribute<FText>(local_7cc8,pFVar1);
  local_7ca8 = TSlateBaseNamedArgs<SSearchBox>::ToolTipText
                         ((TSlateBaseNamedArgs<SSearchBox> *)local_7cb8,local_7cc0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8041);
  local_7cb0 = MakeTDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
                         (&local_7230,"SSearchBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0xa90,&local_8041);
  this_02 = TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::Expose<SEditableTextBox>
                      (local_7cb0,&this->SearchBox);
  pTVar11 = TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_7478,local_7ca8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSearchBox>(&local_7748,pTVar11);
  local_7c98 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7ca0,&local_7748);
  local_7c00 = SVerticalBox::FArguments::operator+(local_7c90,local_7c98);
  pFVar4 = SVerticalBox::Slot(&local_5df0);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7c88 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7c88,HAlign_Center);
  local_7c80 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_7c80,VAlign_Center);
  local_7c78 = &pFVar4->field_0x18;
  local_7c10 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7c78,__real_40a00000);
  local_7c60 = SEditableTextBox::FArguments::FArguments(&local_1b18);
  local_7c70 = &local_6de8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7488,L"STestSuite",L"NumericInput",L"This should be a number");
  local_7c68 = TAttribute<FText>::TAttribute<FText>(local_7c70,pFVar1);
  local_7c58 = SEditableTextBox::FArguments::Text(local_7c60,local_7c68);
  local_7878 = OnNumericInputTextChanged;
  local_7870 = 0;
  ppcVar23 = &local_7878;
  puVar24 = local_76a8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_76a8;
  ppVar27 = &local_7698;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar27 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar27 = (pmf_8e34e566 *)&ppVar27->field_0x1;
  }
  local_7c40 = SEditableTextBox::FArguments::OnTextChanged<STextEditTest>
                         (local_7c58,this,&local_7698);
  local_7c50 = &local_70c8;
  local_8040 = true;
  local_7c48 = TAttribute<bool>::TAttribute<bool>(local_7c50,&local_8040);
  local_7c28 = SEditableTextBox::FArguments::RevertTextOnEscape(local_7c40,local_7c48);
  local_7c38 = &local_6db8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7498,L"STestSuite",L"NumericInputHint",L"Enter a number");
  local_7c30 = TAttribute<FText>::TAttribute<FText>(local_7c38,pFVar1);
  local_7c18 = SEditableTextBox::FArguments::HintText(local_7c28,local_7c30);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_803f);
  local_7c20 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                         (&local_7248,"SEditableTextBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0xa97,&local_803f);
  pTVar8 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::Expose<SEditableTextBox>
                     (local_7c20,&this->NumericInput);
  pTVar9 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_74a8,local_7c18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_7758,pTVar9);
  local_7c08 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7c10,&local_7758);
  local_7b80 = SVerticalBox::FArguments::operator+(local_7c00,local_7c08);
  pFVar4 = SVerticalBox::Slot(&local_5ed8);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7bf8 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7bf8,HAlign_Center);
  local_7bf0 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_7bf0,VAlign_Center);
  local_7be8 = &pFVar4->field_0x18;
  local_7b90 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7be8,__real_40a00000);
  local_7ba0 = SHorizontalBox::FArguments::FArguments(&local_56b0);
  pFVar12 = SHorizontalBox::Slot(&local_5fc0);
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar12);
  local_7be0 = &pFVar12->field_0x48;
  local_7bb0 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_7be0,HAlign_Center);
  local_7bc8 = SButton::FArguments::FArguments(&local_4058);
  local_7bd8 = &local_6d88;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_74b8,L"STestSuite",L"PopupTest",L"PopUp Test");
  local_7bd0 = TAttribute<FText>::TAttribute<FText>(local_7bd8,pFVar1);
  local_7bc0 = SButton::FArguments::Text(local_7bc8,local_7bd0);
  local_7868 = LaunchPopUp_OnClicked;
  local_7860 = 0;
  ppcVar23 = &local_7868;
  puVar24 = local_7688;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_7688;
  ppVar28 = &local_7678;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar28 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar28 = (pmf_cd3b9fc0 *)&ppVar28->field_0x1;
  }
  local_7bb8 = SButton::FArguments::OnClicked<STextEditTest>(local_7bc0,this,&local_7678);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_803e);
  this_03 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_7260,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xaa4,&local_803e);
  pTVar13 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_74c8,local_7bb8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7768,pTVar13);
  local_7ba8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7bb0,&local_7768);
  local_7b98 = SHorizontalBox::FArguments::operator+(local_7ba0,local_7ba8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_803d);
  pTVar14 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_7278,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xa9f,&local_803d);
  pTVar15 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_74d8,local_7b98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_78e8,pTVar15);
  local_7b88 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7b90,&local_78e8);
  local_7b48 = SVerticalBox::FArguments::operator+(local_7b80,local_7b88);
  pFVar4 = SVerticalBox::Slot(&local_60a8);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7b78 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_7b78,VAlign_Bottom);
  local_7b70 = &pFVar4->field_0x18;
  local_7b58 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7b70,0.0,__real_41a00000,0.0,0.0);
  local_7b60 = SErrorText::FArguments::FArguments(&local_4fd8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_803c);
  local_7b68 = MakeTDecl<SErrorText,RequiredArgs::T0RequiredArgs>
                         (&local_7290,"SErrorText",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0xaab,&local_803c);
  this_04 = TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::Expose<SErrorText>
                      (local_7b68,&this->ErrorText);
  pTVar16 = TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_74e8,local_7b60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SErrorText>(&local_7788,pTVar16);
  local_7b50 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7b58,&local_7788);
  local_7ac0 = SVerticalBox::FArguments::operator+(local_7b48,local_7b50);
  pFVar4 = SVerticalBox::Slot(&local_6190);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7b40 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7b40,HAlign_Center);
  local_7b38 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_7b38,VAlign_Center);
  local_7b30 = &pFVar4->field_0x18;
  local_7ad0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7b30,__real_40a00000);
  local_7b18 = SEditableTextBox::FArguments::FArguments(&local_21d8);
  local_7b28 = &local_6d58;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_74f8,L"STestSuite",L"CustomContextMenuInput",
                      L"This text box has a custom context menu");
  local_7b20 = TAttribute<FText>::TAttribute<FText>(local_7b28,pFVar1);
  local_7b00 = SEditableTextBox::FArguments::Text(local_7b18,local_7b20);
  local_7b10 = &local_70a8;
  local_803b = true;
  local_7b08 = TAttribute<bool>::TAttribute<bool>(local_7b10,&local_803b);
  local_7ae8 = SEditableTextBox::FArguments::RevertTextOnEscape(local_7b00,local_7b08);
  local_7af8 = &local_6d28;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7508,L"STestSuite",L"CustomContextMenuHint",L"Custom context menu...");
  local_7af0 = TAttribute<FText>::TAttribute<FText>(local_7af8,pFVar1);
  local_7ae0 = SEditableTextBox::FArguments::HintText(local_7ae8,local_7af0);
  local_7858 = OnCustomContextMenuOpening;
  local_7850 = 0;
  ppcVar23 = &local_7858;
  puVar24 = local_7668;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_7668;
  ppVar29 = &local_7658;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar29 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar29 = (pmf_ab462235 *)&ppVar29->field_0x1;
  }
  local_7ad8 = SEditableTextBox::FArguments::OnContextMenuOpening<STextEditTest>
                         (local_7ae0,this,&local_7658);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_803a);
  pTVar8 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_72a8,"SEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xaaf,&local_803a);
  pTVar9 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_7518,local_7ad8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_7798,pTVar9);
  local_7ac8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7ad0,&local_7798);
  local_7a38 = SVerticalBox::FArguments::operator+(local_7ac0,local_7ac8);
  pFVar4 = SVerticalBox::Slot(&local_6278);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7ab8 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7ab8,HAlign_Center);
  local_7ab0 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_7ab0,VAlign_Center);
  local_7aa8 = &pFVar4->field_0x18;
  local_7a48 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7aa8,__real_40a00000);
  local_7a90 = SEditableTextBox::FArguments::FArguments(&local_2898);
  local_7aa0 = &local_6cf8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7528,L"STestSuite",L"DisabledContextMenuInput",
                      L"This text box has no context menu");
  local_7a98 = TAttribute<FText>::TAttribute<FText>(local_7aa0,pFVar1);
  local_7a78 = SEditableTextBox::FArguments::Text(local_7a90,local_7a98);
  local_7a88 = &local_7088;
  local_8039 = true;
  local_7a80 = TAttribute<bool>::TAttribute<bool>(local_7a88,&local_8039);
  local_7a60 = SEditableTextBox::FArguments::RevertTextOnEscape(local_7a78,local_7a80);
  local_7a70 = &local_6cc8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7538,L"STestSuite",L"DisabledContextMenuHint",L"No context menu...");
  local_7a68 = TAttribute<FText>::TAttribute<FText>(local_7a70,pFVar1);
  local_7a58 = SEditableTextBox::FArguments::HintText(local_7a60,local_7a68);
  local_7848 = OnDisabledContextMenuOpening;
  local_7840 = 0;
  ppcVar23 = &local_7848;
  puVar24 = local_7648;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_7648;
  ppVar29 = &local_7638;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar29 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar29 = (pmf_ab462235 *)&ppVar29->field_0x1;
  }
  local_7a50 = SEditableTextBox::FArguments::OnContextMenuOpening<STextEditTest>
                         (local_7a58,this,&local_7638);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8038);
  pTVar8 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_72c0,"SEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xab7,&local_8038);
  pTVar9 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_7548,local_7a50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_77a8,pTVar9);
  local_7a40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7a48,&local_77a8);
  local_7920 = SVerticalBox::FArguments::operator+(local_7a38,local_7a40);
  pFVar4 = SVerticalBox::Slot(&local_6360);
  pFVar4 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_7a30 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_7a30,HAlign_Center);
  local_7a28 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_7a28,VAlign_Center);
  local_7a20 = &pFVar4->field_0x18;
  local_7930 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7a20,__real_40a00000);
  local_79b0 = SHorizontalBox::FArguments::FArguments(&local_58b8);
  pFVar12 = SHorizontalBox::Slot(&local_6448);
  local_79c0 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar12);
  local_7a18 = SEditableTextBox::FArguments::FArguments(&local_2f58);
  local_7838 = IsPassword;
  local_7830 = 0;
  ppcVar23 = &local_7838;
  puVar24 = local_7628;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_7628;
  ppVar30 = &local_7618;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar30 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar30 = (pmf_88422114 *)&ppVar30->field_0x1;
  }
  local_7a00 = SEditableTextBox::FArguments::IsPassword<STextEditTest>(local_7a18,this,&local_7618);
  local_7a10 = &local_7068;
  local_8037 = true;
  local_7a08 = TAttribute<bool>::TAttribute<bool>(local_7a10,&local_8037);
  local_79e8 = SEditableTextBox::FArguments::RevertTextOnEscape(local_7a00,local_7a08);
  local_79f8 = &local_7048;
  local_8030[0] = 400;
  local_79f0 = TAttribute<float>::TAttribute<float><int>(local_79f8,local_8030);
  local_79d0 = SEditableTextBox::FArguments::MinDesiredWidth(local_79e8,local_79f0);
  local_79e0 = &local_6c98;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7558,L"STestSuite",L"EditablePasswordHintText",
                      L"This text box can be a password");
  local_79d8 = TAttribute<FText>::TAttribute<FText>(local_79e0,pFVar1);
  local_79c8 = SEditableTextBox::FArguments::HintText(local_79d0,local_79d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8036);
  pTVar8 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_72d8,"SEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xac4,&local_8036);
  pTVar9 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_7568,local_79c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_77b8,pTVar9);
  local_79b8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_79c0,&local_77b8);
  local_7940 = SHorizontalBox::FArguments::operator+(local_79b0,local_79b8);
  pFVar12 = SHorizontalBox::Slot(&local_6530);
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar12);
  local_7998 = (FSlotArgumentsMixin *)&pFVar12->field_0x18;
  local_79a8 = &local_6c68;
  pFVar17 = FMargin::FMargin(&local_71b8,__real_40800000,0.0);
  local_79a0 = TAttribute<FMargin>::TAttribute<FMargin>(local_79a8,pFVar17);
  local_7950 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_7998,local_79a0);
  local_7990 = SCheckBox::FArguments::FArguments(&local_4948);
  local_7828 = GetPasswordCheckState;
  local_7820 = 0;
  ppcVar23 = &local_7828;
  puVar24 = local_7608;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_7608;
  ppVar31 = &local_75f8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar31 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar31 = (pmf_e1860997 *)&ppVar31->field_0x1;
  }
  local_7988 = SCheckBox::FArguments::IsChecked<STextEditTest>(local_7990,this,&local_75f8);
  local_7818 = OnPasswordCheckStateChanged;
  local_7810 = 0;
  ppcVar23 = &local_7818;
  puVar24 = local_75e8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *(undefined1 *)ppcVar23;
    ppcVar23 = (code **)((longlong)ppcVar23 + 1);
    puVar24 = puVar24 + 1;
  }
  puVar24 = local_75e8;
  ppVar32 = &local_75d8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar32 = *puVar24;
    puVar24 = puVar24 + 1;
    ppVar32 = (pmf_9af90c4f *)&ppVar32->field_0x1;
  }
  local_7960 = SCheckBox::FArguments::OnCheckStateChanged<STextEditTest>
                         (local_7988,this,&local_75d8);
  local_7970 = STextBlock::FArguments::FArguments(&local_3b18);
  local_7980 = &local_6c38;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_7578,L"STestSuite",L"PasswordCheckBoxText",L"Password?");
  local_7978 = TAttribute<FText>::TAttribute<FText>(local_7980,pFVar1);
  local_7968 = STextBlock::FArguments::Text(local_7970,local_7978);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8035);
  this_05 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_72f0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xad3,&local_8035);
  pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_7588,local_7968);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_77c8,pTVar18);
  local_7958 = SCheckBox::FArguments::operator[](local_7960,&local_77c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8034);
  this_06 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_7308,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xacf,&local_8034);
  pTVar19 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_7598,local_7958);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_77d8,pTVar19);
  local_7948 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7950,&local_77d8);
  local_7938 = SHorizontalBox::FArguments::operator+(local_7940,local_7948);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8033);
  pTVar14 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_7320,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xabf,&local_8033);
  pTVar15 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_75a8,local_7938);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_77e8,pTVar15);
  local_7928 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7930,&local_77e8);
  local_7918 = SVerticalBox::FArguments::operator+(local_7920,local_7928);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8032);
  this_07 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_7338,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xa65,&local_8032);
  pTVar20 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_07,&local_75b8,local_7918);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_77f8,pTVar20);
  local_7908 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_7910,&local_77f8);
  local_78f8 = SScrollBox::FArguments::operator+(local_7900,local_7908);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8031);
  this_08 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_7350,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xa62,&local_8031);
  pTVar21 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_08,&local_75c8,local_78f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_7808,pTVar21);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_78f0,&local_7808);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7808);
  TSharedRef<SScrollBox,1>::~TSharedRef<SScrollBox,1>(&local_75c8);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>(&local_7350);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_77f8);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_75b8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_7338);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_77e8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_75a8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_7320);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_77d8);
  TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_7598);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_7308);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_77c8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_7588);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_72f0);
  FText::~FText(&local_7578);
  STextBlock::FArguments::~FArguments(&local_3b18);
  SCheckBox::FArguments::~FArguments(&local_4948);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6530);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_77b8);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_7568);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_72d8);
  FText::~FText(&local_7558);
  SEditableTextBox::FArguments::~FArguments(&local_2f58);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6448);
  SHorizontalBox::FArguments::~FArguments(&local_58b8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6360);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_77a8);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_7548);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_72c0);
  FText::~FText(&local_7538);
  FText::~FText(&local_7528);
  SEditableTextBox::FArguments::~FArguments(&local_2898);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6278);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7798);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_7518);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_72a8);
  FText::~FText(&local_7508);
  FText::~FText(&local_74f8);
  SEditableTextBox::FArguments::~FArguments(&local_21d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6190);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7788);
  TSharedRef<SErrorText,1>::~TSharedRef<SErrorText,1>(&local_74e8);
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>(&local_7290);
  SErrorText::FArguments::~FArguments(&local_4fd8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_60a8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_78e8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_74d8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_7278);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7768);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_74c8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_7260);
  FText::~FText(&local_74b8);
  SButton::FArguments::~FArguments(&local_4058);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5fc0);
  SHorizontalBox::FArguments::~FArguments(&local_56b0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5ed8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7758);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_74a8);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_7248);
  FText::~FText(&local_7498);
  FText::~FText(&local_7488);
  SEditableTextBox::FArguments::~FArguments(&local_1b18);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5df0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7748);
  TSharedRef<SSearchBox,1>::~TSharedRef<SSearchBox,1>(&local_7478);
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>(&local_7230);
  FText::~FText(&local_7468);
  SSearchBox::FArguments::~FArguments(&local_4d00);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5d08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_78d8);
  TSharedRef<SInlineEditableTextBlock,1>::~TSharedRef<SInlineEditableTextBlock,1>(&local_7458);
  TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>(&local_7218);
  FText::~FText(&local_7448);
  FSlateFontInfo::~FSlateFontInfo(&local_6c08);
  SInlineEditableTextBlock::FArguments::~FArguments(&local_4568);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_68d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_78c8);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_7438);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_7200);
  FText::~FText(&local_7428);
  FSlateFontInfo::~FSlateFontInfo(&local_6ba8);
  FText::~FText(&local_7418);
  SEditableTextBox::FArguments::~FArguments(&local_1458);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_67e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_78b8);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_7408);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_71e8);
  FText::~FText(&local_73f8);
  FSlateFontInfo::~FSlateFontInfo(&local_6b48);
  FText::~FText(&local_73e8);
  SEditableTextBox::FArguments::~FArguments(&local_d98);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6700);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_78a8);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_73d8);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_71d0);
  FText::~FText(&local_73c8);
  FText::~FText(&local_73b8);
  FSlateFontInfo::~FSlateFontInfo(&local_6ae8);
  FText::~FText(&local_73a8);
  SEditableTextBox::FArguments::~FArguments(&local_6d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6618);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7778);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_7398);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>(&local_7368);
  FText::~FText(&local_7388);
  FSlateFontInfo::~FSlateFontInfo(&local_6a88);
  FText::~FText(&local_7378);
  SEditableText::FArguments::~FArguments(&local_35c0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_69b8);
  SVerticalBox::FArguments::~FArguments(&local_54a8);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_5c20);
  SScrollBox::FArguments::~FArguments(&local_52a0);
  return;
}

// GetLoopingColor @ 1430c9980

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
STextEditTest::GetLoopingColor(STextEditTest *this,FSlateColor *__return_storage_ptr__)

{
  FLinearColor *pFVar1;
  float fVar2;
  FLinearColor_u_0 local_30;
  FLinearColor local_20 [2];
  
  fVar2 = FCurveSequence::GetLerp(&this->Animation);
  local_30._s_0.R = __real_43b40000 * fVar2;
  local_30._s_0.G = __real_3f4ccccd;
  local_30._s_0.B = __real_3f800000;
  local_30._s_0.A = __real_3f800000;
  pFVar1 = FLinearColor::HSVToLinearRGB((FLinearColor *)&local_30._s_0,local_20);
  FSlateColor::FSlateColor(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPasswordCheckState @ 1430cc890

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall STextEditTest::GetPasswordCheckState(STextEditTest *this)

{
  return this->bIsPassword != false;
}

// InlineEditableTextCommited @ 1430d2e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STextEditTest::InlineEditableTextCommited(STextEditTest *this,FText *param_1,Type param_2)

{
  SInlineEditableTextBlock *this_00;
  TAttribute<FText> local_40;
  
  FText::operator=(&this->InlineEditableText,param_1);
  this_00 = TSharedPtr<SInlineEditableTextBlock,1>::operator->(&this->InlineEditableTextBlock);
  TAttribute<FText>::TAttribute<FText><FText>(&local_40,&this->InlineEditableText);
  SInlineEditableTextBlock::SetText(this_00,&local_40);
  TAttribute<FText>::~TAttribute<FText>(&local_40);
  return;
}

// IsPassword @ 1430d3bc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STextEditTest::IsPassword(STextEditTest *this)

{
  return this->bIsPassword;
}

// LaunchPopUp_OnClicked @ 1430d5f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STextEditTest::LaunchPopUp_OnClicked(STextEditTest *this,FReply *__return_storage_ptr__)

{
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *this_00;
  FDeprecateSlateVector2D *pFVar1;
  TSharedPtr<IMenu,1> *pTVar2;
  longlong lVar3;
  code **ppcVar4;
  undefined1 *puVar5;
  pmf_8e34e566 *ppVar6;
  pmf_a2378bc8 *ppVar7;
  undefined1 auStackY_6d8 [32];
  bool local_678;
  T0RequiredArgs local_677;
  undefined1 local_676 [6];
  FSlateApplication *local_670;
  FPopupTransitionEffect local_668 [2];
  FText *local_660;
  FText *local_658;
  FArguments *local_650;
  TAttribute<bool> *local_648;
  TAttribute<bool> *local_640;
  FArguments *local_638;
  FArguments *local_630;
  FArguments *local_628;
  TAttribute<FText> *local_620;
  TAttribute<FText> *local_618;
  FArguments *local_610;
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *local_608;
  FArguments *local_600;
  undefined1 *local_5f8;
  code *local_5f0;
  longlong *local_5e8;
  TOptional<EPopupMethod> *local_5e0;
  FDeprecateVector2DParameter local_5d8;
  FPopupTransitionEffect *local_5d0;
  FDeprecateVector2DParameter local_5c8;
  FWidgetPath *local_5c0;
  TSharedRef<SWidget,1> *local_5b8;
  FSlateApplication *local_5b0;
  FText local_5a8;
  code *local_598;
  undefined4 local_590;
  code *local_588;
  undefined4 local_580;
  TSharedRef<SWidget,1> local_578;
  TSharedRef<STextEntryPopup,1> local_568;
  undefined1 local_558 [8];
  undefined1 local_550 [24];
  pmf_8e34e566 local_538;
  undefined1 local_528 [16];
  pmf_a2378bc8 local_518;
  TSharedPtr<IMenu,1> local_508;
  TSharedRef<SWidget,1> local_4f8;
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> local_4e8;
  FText local_4d0;
  TAttribute<bool> local_4c0;
  TAttribute<FText> local_4a0;
  FArguments local_470;
  FWidgetPath local_180;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  FText::AsLocalizable_Advanced_LocText
            (&local_5a8,L"STestSuite",L"EnterThreeChars",L"Enter a three character string");
  local_650 = STextEntryPopup::FArguments::FArguments(&local_470);
  local_660 = &local_4d0;
  local_658 = FText::FText(local_660,&local_5a8);
  local_638 = STextEntryPopup::FArguments::Label(local_650,local_658);
  local_648 = &local_4c0;
  local_678 = false;
  local_640 = TAttribute<bool>::TAttribute<bool>(local_648,&local_678);
  local_630 = STextEntryPopup::FArguments::ClearKeyboardFocusOnCommit(local_638,local_640);
  local_598 = OnPopupTextChanged;
  local_590 = 0;
  ppcVar4 = &local_598;
  puVar5 = local_550;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_550;
  ppVar6 = &local_538;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar6 = (pmf_8e34e566 *)&ppVar6->field_0x1;
  }
  local_628 = STextEntryPopup::FArguments::OnTextChanged<STextEditTest>(local_630,this,&local_538);
  local_588 = OnPopupTextCommitted;
  local_580 = 0;
  ppcVar4 = &local_588;
  puVar5 = local_528;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_528;
  ppVar7 = &local_518;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar7 = (pmf_a2378bc8 *)&ppVar7->field_0x1;
  }
  local_610 = STextEntryPopup::FArguments::OnTextCommitted<STextEditTest>(local_628,this,&local_518)
  ;
  local_620 = &local_4a0;
  local_618 = TAttribute<FText>::TAttribute<FText><FText>(local_620,&local_5a8);
  local_600 = STextEntryPopup::FArguments::HintText(local_610,local_618);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_677);
  local_608 = MakeTDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>
                        (&local_4e8,"STextEntryPopup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0xb21,&local_677);
  this_00 = TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>::Expose<STextEntryPopup>
                      (local_608,&this->PopupInput);
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,&local_568,local_600);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4e8._Widget.SharedReferenceCount);
  STextEntryPopup::FArguments::~FArguments(&local_470);
  local_5b0 = FSlateApplication::Get();
  local_5f8 = local_676;
  local_5e0 = TOptional<enum_EPopupMethod>::TOptional<enum_EPopupMethod>(local_5f8);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_5d8,&UE::Math::TVector2<float>::ZeroVector);
  local_5d0 = FPopupTransitionEffect::FPopupTransitionEffect(local_668,TypeInPopup);
  local_670 = FSlateApplication::Get();
  local_5f0 = *(code **)(*(longlong *)local_670 + 0x68);
  pFVar1 = (FDeprecateSlateVector2D *)(*local_5f0)(local_670,local_558);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_5c8,pFVar1);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextEntryPopup>(&local_578,&local_568);
  local_5c0 = FWidgetPath::FWidgetPath(&local_180);
  local_5e8 = &this->_padding_;
  local_5b8 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)local_5e8,&local_4f8);
  pTVar2 = FSlateApplication::PushMenu
                     (local_5b0,&local_508,local_5b8,local_5c0,&local_578,&local_5c8,local_5d0,true,
                      &local_5d8,SUB82(local_5e0,0),true,-1);
  TWeakPtr<IMenu,1>::operator=<IMenu>(&this->PopupMenu,pTVar2);
  TSharedPtr<IMenu,1>::~TSharedPtr<IMenu,1>(&local_508);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4f8);
  FWidgetPath::~FWidgetPath(&local_180);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_578);
  FReply::Handled(__return_storage_ptr__);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_568.SharedReferenceCount);
  FText::~FText(&local_5a8);
  return __return_storage_ptr__;
}

// OnCustomContextMenuOpening @ 1430d9cf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
STextEditTest::OnCustomContextMenuOpening
          (STextEditTest *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  FName *pFVar1;
  FText *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar3;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBorder,1> *pTVar4;
  T0RequiredArgs local_a98;
  T0RequiredArgs local_a97 [7];
  ISlateStyle *local_a90;
  FArguments *local_a88;
  FName *local_a80;
  FName local_a78;
  code *local_a70;
  FSlateBrush *local_a68;
  TAttribute<FSlateBrush_const_*> *local_a60;
  TAttribute<FSlateBrush_const_*> *local_a58;
  FArguments *local_a50;
  TAttribute<FText> *local_a48;
  TAttribute<FText> *local_a40;
  FArguments *local_a38;
  FArguments *local_a30;
  FArguments *local_a28;
  FArguments *local_a20;
  TSharedRef<SWidget,1> local_a18;
  FName local_a08;
  TSharedRef<SBorder,1> local_a00;
  TSharedRef<STextBlock,1> local_9f0;
  FText local_9e0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_9d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9b8;
  TAttribute<FSlateBrush_const_*> local_9a0;
  TAttribute<FText> local_978;
  FArguments local_948;
  FArguments local_568;
  
  local_a88 = SBorder::FArguments::FArguments(&local_948);
  local_a50 = SBorder::FArguments::Padding(local_a88,__real_40a00000);
  local_a60 = &local_9a0;
  local_a90 = FCoreStyle::Get();
  local_a70 = *(code **)((longlong)*local_a90 + 0x50);
  local_a80 = &local_a08;
  pFVar1 = ::FName::FName(local_a80,"BoxShadow");
  local_a78 = *pFVar1;
  local_a68 = (FSlateBrush *)(*local_a70)(local_a90,local_a78,0,0);
  local_a58 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>(local_a60,&local_a68)
  ;
  local_a28 = SBorder::FArguments::BorderImage(local_a50,local_a58);
  local_a38 = STextBlock::FArguments::FArguments(&local_568);
  local_a48 = &local_978;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_9e0,L"STestSuite",L"CustomContextMenuContent",
                      L"This context menu content is just a text block");
  local_a40 = TAttribute<FText>::TAttribute<FText>(local_a48,pFVar2);
  local_a30 = STextBlock::FArguments::Text(local_a38,local_a40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a98);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_9b8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xafa,&local_a98);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_9f0,local_a30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a18,pTVar3);
  local_a20 = SBorder::FArguments::operator[](local_a28,&local_a18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_a97);
  this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_9d0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xaf6,local_a97);
  pTVar4 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_a00,local_a20);
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SBorder>(__return_storage_ptr__,pTVar4);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_a00.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_9d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a18);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_9f0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9b8);
  FText::~FText(&local_9e0);
  STextBlock::FArguments::~FArguments(&local_568);
  SBorder::FArguments::~FArguments(&local_948);
  return __return_storage_ptr__;
}

// OnDisabledContextMenuOpening @ 1430da050

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
STextEditTest::OnDisabledContextMenuOpening
          (STextEditTest *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1>(__return_storage_ptr__,(FNullTag *)0x0);
  return __return_storage_ptr__;
}

// OnNumericInputTextChanged @ 1430e06e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall STextEditTest::OnNumericInputTextChanged(STextEditTest *this,FText *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  SErrorText *pSVar5;
  SEditableTextBox *this_00;
  FText *local_b0;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  bVar1 = FText::IsNumeric(param_1);
  if (!bVar1) {
    pFVar2 = FText::FText(&local_28,param_1);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"STestSuite",L"NotANumberWarning",L"\'{0}\' is not a number");
    pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
    local_b0 = FText::Format<FText>(&local_58,pFVar4,pFVar2);
  }
  else {
    pFVar2 = FText::GetEmpty();
    local_b0 = FText::FText(&local_38,pFVar2);
  }
  FText::FText(&local_68,local_b0);
  if (!bVar1) {
    FText::~FText(&local_58);
    FText::~FText(&local_48);
  }
  else {
    FText::~FText(&local_38);
  }
  pSVar5 = TSharedPtr<SErrorText,1>::operator->(&this->ErrorText);
  (**(code **)pSVar5->_padding_)(&pSVar5->_padding_,&local_68);
  this_00 = TSharedPtr<SEditableTextBox,1>::operator->(&this->NumericInput);
  SEditableTextBox::SetError(this_00,&local_68);
  FText::~FText(&local_68);
  return;
}

// OnPasswordCheckStateChanged @ 1430e2030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STextEditTest::OnPasswordCheckStateChanged(STextEditTest *this,ECheckBoxState param_1)

{
  this->bIsPassword = param_1 == Checked;
  return;
}

// OnPopupTextChanged @ 1430e2070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall STextEditTest::OnPopupTextChanged(STextEditTest *this,FText *param_1)

{
  FString *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  SErrorText *pSVar5;
  STextEntryPopup *this_00;
  int local_d4;
  FText *local_b8;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  FText local_30;
  FTextFormat local_20 [2];
  
  pFVar1 = FText::ToString(param_1);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_d4 = 0;
  }
  else {
    local_d4 = (pFVar1->Data).ArrayNum + -1;
  }
  if (local_d4 != 3) {
    pFVar2 = FText::FText(&local_30,param_1);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"STestSuite",L"ThreeCharsError",
                        L"\'{0}\' is not three characters");
    pFVar4 = FTextFormat::FTextFormat(local_20,pFVar3,Default);
    local_b8 = FText::Format<FText>(&local_60,pFVar4,pFVar2);
  }
  else {
    pFVar2 = FText::GetEmpty();
    local_b8 = FText::FText(&local_40,pFVar2);
  }
  FText::FText(&local_70,local_b8);
  if (local_d4 != 3) {
    FText::~FText(&local_60);
    FText::~FText(&local_50);
  }
  else {
    FText::~FText(&local_40);
  }
  pSVar5 = TSharedPtr<SErrorText,1>::operator->(&this->ErrorText);
  (**(code **)pSVar5->_padding_)(&pSVar5->_padding_,&local_70);
  this_00 = TSharedPtr<STextEntryPopup,1>::operator->(&this->PopupInput);
  STextEntryPopup::SetError(this_00,&local_70);
  FText::~FText(&local_70);
  return;
}

// OnPopupTextCommitted @ 1430e22a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STextEditTest::OnPopupTextCommitted(STextEditTest *this,FText *param_1,Type param_2)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  FWeakReferencer<1> *pFVar4;
  IMenu *pIVar5;
  int local_54;
  TSharedPtr<IMenu,1> local_18;
  
  if (param_2 != OnEnter) {
    return;
  }
  pFVar3 = FText::ToString(param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_54 = 0;
  }
  else {
    local_54 = (pFVar3->Data).ArrayNum + -1;
  }
  if (local_54 != 3) {
    return;
  }
  if ((this->PopupMenu).Object != (IMenu *)0x0) {
    pFVar4 = &(this->PopupMenu).WeakReferenceCount;
    if ((pFVar4->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar4->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_1430e2397;
    }
  }
  bVar1 = false;
LAB_1430e2397:
  if (bVar1) {
    TSharedPtr<IMenu,1>::TSharedPtr<IMenu,1><IMenu>(&local_18,&this->PopupMenu);
    pIVar5 = TSharedPtr<IMenu,1>::operator->(&local_18);
    (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5);
    TSharedPtr<IMenu,1>::~TSharedPtr<IMenu,1>(&local_18);
  }
  return;
}

