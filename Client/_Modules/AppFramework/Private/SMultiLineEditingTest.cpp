// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 6

// Construct @ 143086c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditingTest::Construct(SMultiLineEditingTest *this,FArguments *param_1)

{
  FText *pFVar1;
  FSlotArguments *pFVar2;
  FSlotArguments *pFVar3;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<STextBlock,1> *pTVar5;
  FName *pFVar6;
  FSlateFontInfo *pFVar7;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SMultiLineEditableTextBox,1> *pTVar9;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SVerticalBox,1> *pTVar11;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SCheckBox,1> *pTVar12;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar13;
  TSharedRef<SHorizontalBox,1> *pTVar14;
  longlong lVar15;
  code **ppcVar16;
  undefined1 *puVar17;
  pmf_64bfa12e *ppVar18;
  pmf_5307bb7c *ppVar19;
  pmf_07bf8763 *ppVar20;
  pmf_a7fe2203 *ppVar21;
  pmf_1cfc37e0 *ppVar22;
  T0RequiredArgs local_5e08;
  T0RequiredArgs local_5e07;
  T0RequiredArgs local_5e06;
  T0RequiredArgs local_5e05;
  T0RequiredArgs local_5e04;
  T0RequiredArgs local_5e03;
  T0RequiredArgs local_5e02;
  bool local_5e01;
  T0RequiredArgs local_5e00;
  T0RequiredArgs local_5dff;
  T0RequiredArgs local_5dfe;
  T0RequiredArgs local_5dfd;
  T0RequiredArgs local_5dfc;
  T0RequiredArgs local_5dfb;
  T0RequiredArgs local_5dfa;
  T0RequiredArgs local_5df9;
  T0RequiredArgs local_5df8 [4];
  int local_5df4 [2];
  float local_5dec;
  float local_5de8;
  int local_5de4 [3];
  TAttribute<float> *local_5dd8;
  TAttribute<float> *local_5dd0;
  FSlotArguments *local_5dc8;
  undefined1 *local_5dc0;
  undefined1 *local_5db8;
  TAttribute<FText> *local_5db0;
  TAttribute<FText> *local_5da8;
  FArguments *local_5da0;
  FArguments *local_5d98;
  FSlotArguments *local_5d90;
  FSlotArguments *local_5d88;
  FArguments *local_5d80;
  FArguments *local_5d78;
  FName *local_5d70;
  FFontOutlineSettings *local_5d68;
  FName local_5d60;
  TAttribute<FSlateFontInfo> *local_5d58;
  TAttribute<FSlateFontInfo> *local_5d50;
  FArguments *local_5d48;
  undefined1 *local_5d40;
  TAttribute<ETextJustify::Type> *local_5d38;
  FArguments *local_5d30;
  TAttribute<float> *local_5d28;
  TAttribute<float> *local_5d20;
  FArguments *local_5d18;
  FArguments *local_5d10;
  TAttribute<float> *local_5d08;
  TAttribute<float> *local_5d00;
  FArguments *local_5cf8;
  FArguments *local_5cf0;
  FSlotArguments *local_5ce8;
  FSlotArguments *local_5ce0;
  FArguments *local_5cd8;
  FArguments *local_5cd0;
  FSlotArguments *local_5cc8;
  FSlotArguments *local_5cc0;
  FArguments *local_5cb8;
  TAttribute<float> *local_5cb0;
  TAttribute<float> *local_5ca8;
  FSlotArguments *local_5ca0;
  undefined1 *local_5c98;
  TAttribute<FText> *local_5c90;
  TAttribute<FText> *local_5c88;
  FArguments *local_5c80;
  FArguments *local_5c78;
  FSlotArguments *local_5c70;
  FSlotArguments *local_5c68;
  FArguments *local_5c60;
  undefined1 *local_5c58;
  FArguments *local_5c50;
  FArguments *local_5c48;
  TAttribute<FText> *local_5c40;
  TAttribute<FText> *local_5c38;
  FArguments *local_5c30;
  FArguments *local_5c28;
  FArguments *local_5c20;
  FArguments *local_5c18;
  FSlotArguments *local_5c10;
  FSlotArguments *local_5c08;
  FArguments *local_5c00;
  FArguments *local_5bf8;
  FSlotArguments *local_5bf0;
  FSlotArguments *local_5be8;
  FArguments *local_5be0;
  TAttribute<FMargin> *local_5bd8;
  TAttribute<FMargin> *local_5bd0;
  FArguments *local_5bc8;
  TAttribute<FText> *local_5bc0;
  TAttribute<FText> *local_5bb8;
  FArguments *local_5bb0;
  FArguments *local_5ba8;
  FName *local_5ba0;
  FFontOutlineSettings *local_5b98;
  FName local_5b90;
  TAttribute<FSlateFontInfo> *local_5b88;
  TAttribute<FSlateFontInfo> *local_5b80;
  FArguments *local_5b78;
  TAttribute<bool> *local_5b70;
  TAttribute<bool> *local_5b68;
  FArguments *local_5b60;
  TAttribute<FText> *local_5b58;
  TAttribute<FText> *local_5b50;
  FArguments *local_5b48;
  FArguments *local_5b40;
  FSlotArguments *local_5b38;
  FSlotArguments *local_5b30;
  FArguments *local_5b28;
  FArguments *local_5b20;
  FSlotArguments *local_5b18;
  FSlotArguments *local_5b10;
  FArguments *local_5b08;
  FArguments *local_5b00;
  FSlotArguments *local_5af8;
  FSlotArguments *local_5af0;
  FArguments *local_5ae8;
  undefined1 *local_5ae0;
  undefined1 *local_5ad8;
  TAttribute<FText> *local_5ad0;
  TAttribute<FText> *local_5ac8;
  FArguments *local_5ac0;
  FArguments *local_5ab8;
  FSlotArguments *local_5ab0;
  FSlotArguments *local_5aa8;
  FArguments *local_5aa0;
  FName *local_5a98;
  FFontOutlineSettings *local_5a90;
  FName local_5a88;
  TAttribute<FSlateFontInfo> *local_5a80;
  TAttribute<FSlateFontInfo> *local_5a78;
  FArguments *local_5a70;
  TAttribute<FText> *local_5a68;
  TAttribute<FText> *local_5a60;
  FArguments *local_5a58;
  FArguments *local_5a50;
  FSlotArguments *local_5a48;
  FSlotArguments *local_5a40;
  FArguments *local_5a38;
  FArguments *local_5a30;
  FSlotArguments *local_5a28;
  FSlotArguments *local_5a20;
  FArguments *local_5a18;
  FArguments *local_5a10;
  FSlotArguments *local_5a08;
  FSlotArguments *local_5a00;
  FArguments *local_59f8;
  FArguments *local_59f0;
  FSlotArguments *local_59e8;
  FSlotArguments *local_59e0;
  FArguments *local_59d8;
  FArguments *local_59d0;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_59c8;
  TSharedRef<SWidget,1> local_59c0;
  TSharedRef<SWidget,1> local_59b0;
  TSharedRef<SWidget,1> local_59a0;
  code *local_5990;
  undefined4 local_5988;
  code *local_5980;
  undefined4 local_5978;
  code *local_5970;
  undefined4 local_5968;
  code *local_5960;
  undefined4 local_5958;
  code *local_5950;
  undefined4 local_5948;
  TSharedRef<SWidget,1> local_5940;
  TSharedRef<SWidget,1> local_5930;
  TSharedRef<SWidget,1> local_5920;
  TSharedRef<SWidget,1> local_5910;
  TSharedRef<SWidget,1> local_5900;
  TSharedRef<SWidget,1> local_58f0;
  TSharedRef<SWidget,1> local_58e0;
  TSharedRef<SWidget,1> local_58d0;
  TSharedRef<SWidget,1> local_58c0;
  TSharedRef<SWidget,1> local_58b0;
  TSharedRef<SWidget,1> local_58a0;
  TSharedRef<SWidget,1> local_5890;
  TSharedRef<SWidget,1> local_5880;
  FName local_5870;
  FName local_5868;
  FName local_5860;
  FText local_5858;
  undefined1 local_5848 [16];
  pmf_64bfa12e local_5838;
  undefined1 local_5828 [16];
  pmf_5307bb7c local_5818;
  undefined1 local_5808 [16];
  pmf_07bf8763 local_57f8;
  undefined1 local_57e8 [16];
  pmf_a7fe2203 local_57d8;
  undefined1 local_57c8 [16];
  pmf_1cfc37e0 local_57b8;
  TSharedRef<SVerticalBox,1> local_57a8;
  TSharedRef<SHorizontalBox,1> local_5798;
  TSharedRef<SVerticalBox,1> local_5788;
  TSharedRef<SHorizontalBox,1> local_5778;
  TSharedRef<SMultiLineEditableTextBox,1> local_5768;
  FText local_5758;
  TSharedRef<STextBlock,1> local_5748;
  FText local_5738;
  TSharedRef<SHorizontalBox,1> local_5728;
  TSharedRef<SVerticalBox,1> local_5718;
  TSharedRef<SMultiLineEditableTextBox,1> local_5708;
  FText local_56f8;
  TSharedRef<SHorizontalBox,1> local_56e8;
  TSharedRef<SCheckBox,1> local_56d8;
  TSharedRef<STextBlock,1> local_56c8;
  FText local_56b8;
  TSharedRef<STextBlock,1> local_56a8;
  FText local_5698;
  TSharedRef<SVerticalBox,1> local_5688;
  TSharedRef<SMultiLineEditableTextBox,1> local_5678;
  TSharedRef<STextBlock,1> local_5668;
  FText local_5658;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5648;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5630;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5618;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5600;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_55e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_55d0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_55b8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_55a0;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_5588;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5570;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5558;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5540;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5528;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5510;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_54f8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_54e0;
  TAttribute<float> local_54c8;
  FFontOutlineSettings local_54a8;
  undefined1 local_5488 [32];
  TAttribute<float> local_5468;
  TAttribute<float> local_5448;
  TAttribute<float> local_5428;
  FFontOutlineSettings local_5408;
  TAttribute<bool> local_53e8;
  FFontOutlineSettings local_53c8;
  TAttribute<FText> local_53a8;
  TAttribute<FText> local_5378;
  TAttribute<FText> local_5348;
  TAttribute<FMargin> local_5318;
  TAttribute<FText> local_52e8;
  TAttribute<FText> local_52b8;
  TAttribute<FText> local_5288;
  TAttribute<FText> local_5258;
  FSlateFontInfo local_5228;
  FSlateFontInfo local_51c8;
  FSlateFontInfo local_5168;
  FSlotArguments local_5108;
  FSlotArguments local_5020;
  FSlotArguments local_4f38;
  FSlotArguments local_4e50;
  FSlotArguments local_4d68;
  FSlotArguments local_4c80;
  FSlotArguments local_4b98;
  FSlotArguments local_4ab0;
  FSlotArguments local_49c8;
  FSlotArguments local_48e0;
  FSlotArguments local_47f8;
  FSlotArguments local_4710;
  FSlotArguments local_4628;
  FSlotArguments local_4540;
  TAttribute<FSlateFontInfo> local_4458;
  TAttribute<FSlateFontInfo> local_43d8;
  TAttribute<FSlateFontInfo> local_4358;
  FArguments local_42d8;
  FArguments local_40d0;
  FArguments local_3ec8;
  FArguments local_3cc0;
  FArguments local_3ab8;
  FArguments local_38b0;
  FArguments local_36a8;
  FArguments local_34a0;
  FArguments local_3298;
  FArguments local_2eb8;
  FArguments local_2960;
  FArguments local_2408;
  FArguments local_1eb0;
  FArguments local_1958;
  FArguments local_10f0;
  FArguments local_888;
  undefined8 uStack_18;
  
  uStack_18 = 0x143086c46;
  this->bIsReadOnly = false;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_5858,L"STestSuite",L"MultiLineTextTest",
                      L"He has refused his Assent to Laws, the most wholesome and necessary for the public good.\nHe has forbidden his Governors to pass Laws of immediate and pressing importance, unless suspended in their operation till his Assent should be obtained; and when so suspended, he has utterly neglected to attend to them.\nHe has refused to pass other Laws for the accommodation of large districts of people, unless those people would relinquish the right of Representation in the Legislature, a right inestimable to them and formidable to tyrants only.\n\nHe has called together legislative bodies at places unusual, uncomfortable, and distant from the depository of their public Records, for the sole purpose of fatiguing them into compliance with his measures.\nHe has dissolved Representative Houses repeatedly, for opposing with manly firmness his invasions on the rights of the people.\nHe has refused for a long time, after such dissolutions, to cause others to be elected; whereby the Legislative powers, incapable of Annihilation, have returned to the People at large for their exercise; the State remaining in the mean time exposed to all the dangers of invasion from without, and convulsions within.\nHe has endeavoured to prevent the population of these States; for that purpose obstructing the Laws for Naturalization of Foreigners; refusing to pass others to encourage their migrations hither, and raising the conditions of new Appropriations of Lands.\n"
                     );
  FText::operator=(&this->MultilineEditableText,pFVar1);
  FText::~FText(&local_5858);
  local_59c8 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_5ae8 = SVerticalBox::FArguments::FArguments(&local_34a0);
  local_5dc8 = SVerticalBox::Slot(&local_4f38);
  local_5dd8 = &local_54c8;
  local_5df4[0] = 1;
  local_5dd0 = TAttribute<float>::TAttribute<float><int>(local_5dd8,local_5df4);
  local_5af8 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_5dc8,local_5dd0);
  local_5cb8 = SHorizontalBox::FArguments::FArguments(&local_36a8);
  pFVar2 = SHorizontalBox::Slot(&local_5020);
  pFVar2 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_5dc0 = &pFVar2->field_0x48;
  pFVar2 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_5dc0,VAlign_Top);
  local_5db8 = &pFVar2->field_0x18;
  local_5cc8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_5db8,__real_40000000);
  local_5d80 = SVerticalBox::FArguments::FArguments(&local_38b0);
  pFVar3 = SVerticalBox::Slot(&local_4540);
  local_5d90 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_5da0 = STextBlock::FArguments::FArguments(&local_1eb0);
  local_5db0 = &local_53a8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_5658,L"STestSuite",L"MultiLineTextWrapAt600px",
                      L"Multi-line editable text wrapping at 600px");
  local_5da8 = TAttribute<FText>::TAttribute<FText>(local_5db0,pFVar1);
  local_5d98 = STextBlock::FArguments::Text(local_5da0,local_5da8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e08);
  pTVar4 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_54e0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x6e1,&local_5e08);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5668,local_5d98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_58d0,pTVar5);
  local_5d88 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5d90,&local_58d0);
  local_5cd8 = SVerticalBox::FArguments::operator+(local_5d80,local_5d88);
  local_5ce8 = SVerticalBox::Slot(&local_4628);
  local_5d78 = SMultiLineEditableTextBox::FArguments::FArguments(&local_888);
  local_5990 = GetMultilineEditableText;
  local_5988 = 0;
  ppcVar16 = &local_5990;
  puVar17 = local_5848;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5848;
  ppVar18 = &local_5838;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar18 = (pmf_64bfa12e *)&ppVar18->field_0x1;
  }
  local_5d48 = SMultiLineEditableTextBox::FArguments::Text<SMultiLineEditingTest>
                         (local_5d78,this,&local_5838);
  local_5d58 = &local_4358;
  local_5d68 = FFontOutlineSettings::FFontOutlineSettings(&local_54a8);
  local_5d70 = &local_5860;
  pFVar6 = ::FName::FName(local_5d70,"Regular");
  local_5d60 = *pFVar6;
  pFVar7 = FCoreStyle::GetDefaultFontStyle(&local_5168,local_5d60,__real_41400000,local_5d68);
  local_5d50 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_5d58,pFVar7);
  local_5d30 = SMultiLineEditableTextBox::FArguments::Font(local_5d48,local_5d50);
  local_5d40 = local_5488;
  local_5df4[1] = 1;
  local_5d38 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                         (local_5d40,(Type *)(local_5df4 + 1));
  local_5d18 = SMultiLineEditableTextBox::FArguments::Justification(local_5d30,local_5d38);
  local_5d28 = &local_5468;
  local_5dec = __real_40000000;
  local_5d20 = TAttribute<float>::TAttribute<float>(local_5d28,&local_5dec);
  local_5d10 = SMultiLineEditableTextBox::FArguments::LineHeightPercentage(local_5d18,local_5d20);
  local_5980 = HandleMultilineEditableTextCommitted;
  local_5978 = 0;
  ppcVar16 = &local_5980;
  puVar17 = local_5828;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5828;
  ppVar19 = &local_5818;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar19 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar19 = (pmf_5307bb7c *)&ppVar19->field_0x1;
  }
  local_5cf8 = SMultiLineEditableTextBox::FArguments::OnTextCommitted<SMultiLineEditingTest>
                         (local_5d10,this,&local_5818);
  local_5d08 = &local_5448;
  local_5de8 = __real_44160000;
  local_5d00 = TAttribute<float>::TAttribute<float>(local_5d08,&local_5de8);
  local_5cf0 = SMultiLineEditableTextBox::FArguments::WrapTextAt(local_5cf8,local_5d00);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e07);
  pTVar8 = MakeTDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_54f8,"SMultiLineEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x6e6,&local_5e07);
  pTVar9 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_5678,local_5cf0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableTextBox>(&local_59a0,pTVar9);
  local_5ce0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5ce8,&local_59a0);
  local_5cd0 = SVerticalBox::FArguments::operator+(local_5cd8,local_5ce0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e06);
  pTVar10 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5510,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x6dd,&local_5e06);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_5688,local_5cd0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_59b0,pTVar11);
  local_5cc0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5cc8,&local_59b0);
  local_5b08 = SHorizontalBox::FArguments::operator+(local_5cb8,local_5cc0);
  local_5ca0 = SHorizontalBox::Slot(&local_4b98);
  local_5cb0 = &local_5428;
  local_5de4[0] = 1;
  local_5ca8 = TAttribute<float>::TAttribute<float><int>(local_5cb0,local_5de4);
  pFVar2 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5ca0,local_5ca8);
  local_5c98 = &pFVar2->field_0x18;
  local_5b18 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_5c98,__real_40000000);
  local_5be0 = SVerticalBox::FArguments::FArguments(&local_3ab8);
  pFVar3 = SVerticalBox::Slot(&local_4710);
  local_5bf0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_5c60 = SHorizontalBox::FArguments::FArguments(&local_3cc0);
  pFVar2 = SHorizontalBox::Slot(&local_47f8);
  local_5c70 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_5c80 = STextBlock::FArguments::FArguments(&local_2408);
  local_5c90 = &local_5378;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_5698,L"STestSuite",L"MultiLineTextAutoWrap",
                      L"Multi-line editable text auto-wrapping");
  local_5c88 = TAttribute<FText>::TAttribute<FText>(local_5c90,pFVar1);
  local_5c78 = STextBlock::FArguments::Text(local_5c80,local_5c88);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e05);
  pTVar4 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_5528,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x6fc,&local_5e05);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_56a8,local_5c78);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5880,pTVar5);
  local_5c68 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5c70,&local_5880);
  local_5c00 = SHorizontalBox::FArguments::operator+(local_5c60,local_5c68);
  pFVar2 = SHorizontalBox::Slot(&local_48e0);
  local_5c58 = &pFVar2->field_0x48;
  local_5c10 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_5c58,HAlign_Right);
  local_5c50 = SCheckBox::FArguments::FArguments(&local_3298);
  local_5970 = IsReadOnlyChecked;
  local_5968 = 0;
  ppcVar16 = &local_5970;
  puVar17 = local_5808;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_5808;
  ppVar20 = &local_57f8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar20 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar20 = (pmf_07bf8763 *)&ppVar20->field_0x1;
  }
  local_5c48 = SCheckBox::FArguments::IsChecked<SMultiLineEditingTest>(local_5c50,this,&local_57f8);
  local_5960 = OnReadOnlyCheckedStateChanged;
  local_5958 = 0;
  ppcVar16 = &local_5960;
  puVar17 = local_57e8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_57e8;
  ppVar21 = &local_57d8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar21 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar21 = (pmf_a7fe2203 *)&ppVar21->field_0x1;
  }
  local_5c20 = SCheckBox::FArguments::OnCheckStateChanged<SMultiLineEditingTest>
                         (local_5c48,this,&local_57d8);
  local_5c30 = STextBlock::FArguments::FArguments(&local_2960);
  local_5c40 = &local_5348;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_56b8,L"STestSuite",L"MultiLineTextReadOnly",L"Read-only?");
  local_5c38 = TAttribute<FText>::TAttribute<FText>(local_5c40,pFVar1);
  local_5c28 = STextBlock::FArguments::Text(local_5c30,local_5c38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e04);
  pTVar4 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_5540,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x707,&local_5e04);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_56c8,local_5c28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5890,pTVar5);
  local_5c18 = SCheckBox::FArguments::operator[](local_5c20,&local_5890);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e03);
  this_00 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_5558,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x703,&local_5e03);
  pTVar12 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_56d8,local_5c18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_58a0,pTVar12);
  local_5c08 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5c10,&local_58a0);
  local_5bf8 = SHorizontalBox::FArguments::operator+(local_5c00,local_5c08);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e02);
  pTVar13 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5570,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x6f7,&local_5e02);
  pTVar14 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_56e8,local_5bf8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_58b0,pTVar14);
  local_5be8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5bf0,&local_58b0);
  local_5b28 = SVerticalBox::FArguments::operator+(local_5be0,local_5be8);
  local_5b38 = SVerticalBox::Slot(&local_49c8);
  local_5bc8 = SMultiLineEditableTextBox::FArguments::FArguments(&local_10f0);
  local_5bd8 = &local_5318;
  local_5de4[1] = 10;
  local_5bd0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_5bd8,local_5de4 + 1);
  local_5bb0 = SMultiLineEditableTextBox::FArguments::Margin(local_5bc8,local_5bd0);
  local_5bc0 = &local_52e8;
  local_5bb8 = TAttribute<FText>::TAttribute<FText><FText>(local_5bc0,&this->MultilineEditableText);
  local_5ba8 = SMultiLineEditableTextBox::FArguments::Text(local_5bb0,local_5bb8);
  local_5950 = IsReadOnly;
  local_5948 = 0;
  ppcVar16 = &local_5950;
  puVar17 = local_57c8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *(undefined1 *)ppcVar16;
    ppcVar16 = (code **)((longlong)ppcVar16 + 1);
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_57c8;
  ppVar22 = &local_57b8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)ppVar22 = *puVar17;
    puVar17 = puVar17 + 1;
    ppVar22 = (pmf_1cfc37e0 *)&ppVar22->field_0x1;
  }
  local_5b78 = SMultiLineEditableTextBox::FArguments::IsReadOnly<SMultiLineEditingTest>
                         (local_5ba8,this,&local_57b8);
  local_5b88 = &local_4458;
  local_5b98 = FFontOutlineSettings::FFontOutlineSettings(&local_5408);
  local_5ba0 = &local_5870;
  pFVar6 = ::FName::FName(local_5ba0,"Regular");
  local_5b90 = *pFVar6;
  pFVar7 = FCoreStyle::GetDefaultFontStyle(&local_51c8,local_5b90,__real_41400000,local_5b98);
  local_5b80 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_5b88,pFVar7);
  local_5b60 = SMultiLineEditableTextBox::FArguments::Font(local_5b78,local_5b80);
  local_5b70 = &local_53e8;
  local_5e01 = true;
  local_5b68 = TAttribute<bool>::TAttribute<bool>(local_5b70,&local_5e01);
  local_5b48 = SMultiLineEditableTextBox::FArguments::AutoWrapText(local_5b60,local_5b68);
  local_5b58 = &local_52b8;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_56f8,L"STestSuite",L"TypehereTextHint",L"Type Here");
  local_5b50 = TAttribute<FText>::TAttribute<FText>(local_5b58,pFVar1);
  local_5b40 = SMultiLineEditableTextBox::FArguments::HintText(local_5b48,local_5b50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5e00);
  pTVar8 = MakeTDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_5588,"SMultiLineEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x70e,&local_5e00);
  pTVar9 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_5708,local_5b40);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableTextBox>(&local_58c0,pTVar9);
  local_5b30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5b38,&local_58c0);
  local_5b20 = SVerticalBox::FArguments::operator+(local_5b28,local_5b30);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5dff);
  pTVar10 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_55a0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x6f3,&local_5dff);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_5718,local_5b20);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_59c0,pTVar11);
  local_5b10 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5b18,&local_59c0);
  local_5b00 = SHorizontalBox::FArguments::operator+(local_5b08,local_5b10);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5dfe);
  pTVar13 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_55b8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x6d7,&local_5dfe);
  pTVar14 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_5728,local_5b00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_58e0,pTVar14);
  local_5af0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5af8,&local_58e0);
  local_59d8 = SVerticalBox::FArguments::operator+(local_5ae8,local_5af0);
  pFVar3 = SVerticalBox::Slot(&local_4ab0);
  local_59e8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_59f8 = SHorizontalBox::FArguments::FArguments(&local_3ec8);
  pFVar2 = SHorizontalBox::Slot(&local_5108);
  local_5ae0 = &pFVar2->field_0x48;
  pFVar2 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_5ae0,VAlign_Top);
  local_5ad8 = &pFVar2->field_0x18;
  local_5a08 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_5ad8,__real_40000000);
  local_5aa0 = SVerticalBox::FArguments::FArguments(&local_40d0);
  pFVar3 = SVerticalBox::Slot(&local_4c80);
  local_5ab0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_5ac0 = STextBlock::FArguments::FArguments(&local_2eb8);
  local_5ad0 = &local_5288;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_5738,L"STestSuite",L"MultiLineTextNoWrap",
                      L"Multi-line editable text without wrapping");
  local_5ac8 = TAttribute<FText>::TAttribute<FText>(local_5ad0,pFVar1);
  local_5ab8 = STextBlock::FArguments::Text(local_5ac0,local_5ac8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5dfd);
  pTVar4 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_55d0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x725,&local_5dfd);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_5748,local_5ab8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_58f0,pTVar5);
  local_5aa8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5ab0,&local_58f0);
  local_5a18 = SVerticalBox::FArguments::operator+(local_5aa0,local_5aa8);
  pFVar3 = SVerticalBox::Slot(&local_4d68);
  local_5a28 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_5a38 = SHorizontalBox::FArguments::FArguments(&local_42d8);
  local_5a48 = SHorizontalBox::Slot(&local_4e50);
  local_5a70 = SMultiLineEditableTextBox::FArguments::FArguments(&local_1958);
  local_5a80 = &local_43d8;
  local_5a90 = FFontOutlineSettings::FFontOutlineSettings(&local_53c8);
  local_5a98 = &local_5868;
  pFVar6 = ::FName::FName(local_5a98,"Regular");
  local_5a88 = *pFVar6;
  pFVar7 = FCoreStyle::GetDefaultFontStyle(&local_5228,local_5a88,__real_41400000,local_5a90);
  local_5a78 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_5a80,pFVar7);
  local_5a58 = SMultiLineEditableTextBox::FArguments::Font(local_5a70,local_5a78);
  local_5a68 = &local_5258;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_5758,L"STestSuite",L"MultiLineHintText",
                      L"This is hint line 1\nThis is hint line 2");
  local_5a60 = TAttribute<FText>::TAttribute<FText>(local_5a68,pFVar1);
  local_5a50 = SMultiLineEditableTextBox::FArguments::HintText(local_5a58,local_5a60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5dfc);
  pTVar8 = MakeTDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
                     (&local_55e8,"SMultiLineEditableTextBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x72e,&local_5dfc);
  pTVar9 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_5768,local_5a50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableTextBox>(&local_5900,pTVar9);
  local_5a40 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5a48,&local_5900);
  local_5a30 = SHorizontalBox::FArguments::operator+(local_5a38,local_5a40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5dfb);
  pTVar13 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5600,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x72b,&local_5dfb);
  pTVar14 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_5778,local_5a30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5910,pTVar14);
  local_5a20 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5a28,&local_5910);
  local_5a10 = SVerticalBox::FArguments::operator+(local_5a18,local_5a20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5dfa);
  pTVar10 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5618,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x721,&local_5dfa);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_5788,local_5a10);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_5920,pTVar11);
  local_5a00 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5a08,&local_5920);
  local_59f0 = SHorizontalBox::FArguments::operator+(local_59f8,local_5a00);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5df9);
  pTVar13 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5630,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x71c,&local_5df9);
  pTVar14 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_5798,local_59f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5930,pTVar14);
  local_59e0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_59e8,&local_5930);
  local_59d0 = SVerticalBox::FArguments::operator+(local_59d8,local_59e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_5df8);
  pTVar10 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5648,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x6d3,local_5df8);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_57a8,local_59d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_5940,pTVar11);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_59c8,&local_5940);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5940);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_57a8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5648._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5930);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5798.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_5630);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5920);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5788.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5618._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5910);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5778.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_5600);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5900);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5768.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_55e8._Widget.SharedReferenceCount);
  FText::~FText(&local_5758);
  FSlateFontInfo::~FSlateFontInfo(&local_5228);
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_1958);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4e50);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_42d8._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_42d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4d68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58f0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5748);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_55d0);
  FText::~FText(&local_5738);
  STextBlock::FArguments::~FArguments(&local_2eb8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4c80);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_40d0._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_40d0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5108);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3ec8._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_3ec8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4ab0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58e0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5728.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_55b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_59c0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5718.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_55a0._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58c0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5708.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5588._Widget.SharedReferenceCount);
  FText::~FText(&local_56f8);
  FSlateFontInfo::~FSlateFontInfo(&local_51c8);
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_10f0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_49c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58b0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_56e8.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_5570);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_56d8.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5558);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5890);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_56c8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5540);
  FText::~FText(&local_56b8);
  STextBlock::FArguments::~FArguments(&local_2960);
  SCheckBox::FArguments::~FArguments(&local_3298);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_48e0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5880);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_56a8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5528);
  FText::~FText(&local_5698);
  STextBlock::FArguments::~FArguments(&local_2408);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_47f8);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3cc0._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_3cc0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4710);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3ab8._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_3ab8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4b98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_59b0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5688.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5510._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_59a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5678.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_54f8._Widget.SharedReferenceCount);
  FSlateFontInfo::~FSlateFontInfo(&local_5168);
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_888);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4628);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58d0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5668);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_54e0);
  FText::~FText(&local_5658);
  STextBlock::FArguments::~FArguments(&local_1eb0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4540);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_38b0._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_38b0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5020);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_36a8._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_36a8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4f38);
  SVerticalBox::FArguments::~FArguments(&local_34a0);
  return;
}

// GetMultilineEditableText @ 1430c9a30

FText * __thiscall
SMultiLineEditingTest::GetMultilineEditableText
          (SMultiLineEditingTest *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__,&this->MultilineEditableText);
  return __return_storage_ptr__;
}

// HandleMultilineEditableTextCommitted @ 1430cf980

void __thiscall
SMultiLineEditingTest::HandleMultilineEditableTextCommitted
          (SMultiLineEditingTest *this,FText *param_1,Type param_2)

{
  FText::operator=(&this->MultilineEditableText,param_1);
  return;
}

// IsReadOnly @ 1430d3c50

bool __thiscall SMultiLineEditingTest::IsReadOnly(SMultiLineEditingTest *this)

{
  return this->bIsReadOnly;
}

// IsReadOnlyChecked @ 1430d3c70

ECheckBoxState __thiscall SMultiLineEditingTest::IsReadOnlyChecked(SMultiLineEditingTest *this)

{
  return this->bIsReadOnly != false;
}

// OnReadOnlyCheckedStateChanged @ 1430e2410

void __thiscall
SMultiLineEditingTest::OnReadOnlyCheckedStateChanged
          (SMultiLineEditingTest *this,ECheckBoxState param_1)

{
  this->bIsReadOnly = param_1 == Checked;
  return;
}

