// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 23

// ~SRichTextEditTest @ 143062170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SRichTextEditTest::~SRichTextEditTest(SRichTextEditTest *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>
            (&this->ActiveFontFamily);
  DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int>
            ((TSharedPtr<FTextStyles::FFontFamily,1> *)
             (this->TextStyles).AvailableFontFamilies.AllocatorInstance.Data,
             (this->TextStyles).AvailableFontFamilies.ArrayNum);
  pFVar1 = (this->TextStyles).AvailableFontFamilies.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&this->HyperlinkURLTextBox);
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&this->HyperlinkNameTextBox);
  TSharedPtr<SComboButton,1>::~TSharedPtr<SComboButton,1>(&this->HyperlinkComboButton);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHyperlinkClicked);
  pvVar2 = *(void **)&(this->OnHyperlinkClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHyperlinkClicked);
  TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::
  ~TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>(&this->SyntaxHighlighterMarshaller);
  TSharedPtr<SMultiLineEditableTextBox,1>::~TSharedPtr<SMultiLineEditableTextBox,1>
            (&this->RichEditableTextBox);
  pIVar3 = (this->RichEditableText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 143090340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001430905e2) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SRichTextEditTest::Construct(SRichTextEditTest *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FText *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<FHyperlinkDecorator,1> *pTVar7;
  TSharedRef<FTextStyleDecoratorTest,1> *pTVar8;
  FSyntaxTextStyle *pFVar9;
  TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> *pTVar10;
  FSlotArguments *pFVar11;
  FMargin *pFVar12;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *pTVar13;
  TSharedRef<SRichTextBlock,1> *pTVar14;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar15;
  TSharedRef<SBorder,1> *pTVar16;
  FSlotArguments *pFVar17;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar20;
  TSharedRef<SBox,1> *pTVar21;
  TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
  *this_00;
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar22;
  TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SNumericEntryBox<unsigned_short>,1> *pTVar23;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar24;
  TSharedRef<SCheckBox,1> *pTVar25;
  FSlotArguments *pFVar26;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SColorBlock,1> *pTVar27;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SOverlay,1> *pTVar28;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar29;
  TSharedRef<SButton,1> *pTVar30;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SImage,1> *pTVar31;
  Layer *pLVar32;
  FSlotArguments *pFVar33;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *pTVar34;
  TSharedRef<SEditableTextBox,1> *pTVar35;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SGridPanel,1> *pTVar36;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SComboButton,1> *pTVar37;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_07;
  TSharedRef<SHorizontalBox,1> *pTVar38;
  FTextBlockStyle *pFVar39;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> *pTVar40;
  TSharedRef<SMultiLineEditableTextBox,1> *pTVar41;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar42;
  TSharedRef<SVerticalBox,1> *pTVar43;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_08;
  TSharedRef<SScrollBox,1> *pTVar44;
  longlong lVar45;
  FLinearColor *pFVar46;
  code **ppcVar47;
  undefined1 *puVar48;
  FLinearColor *pFVar49;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar50;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar51;
  pmf_3b51c06c *ppVar52;
  pmf_de41996d *ppVar53;
  pmf_1a3cded7 *ppVar54;
  pmf_17d67a20 *ppVar55;
  pmf_ee6c244e *ppVar56;
  pmf_dc118204 *ppVar57;
  pmf_869368bc *ppVar58;
  pmf_b9e212c2 *ppVar59;
  pmf_f4cef8e6 *ppVar60;
  pmf_3b8787f2 *ppVar61;
  pmf_f92091c4 *ppVar62;
  pmf_bb09059b *ppVar63;
  pmf_abb7684b *ppVar64;
  bool bStack_10bc8;
  T0RequiredArgs TStack_10bc7;
  T0RequiredArgs TStack_10bc6;
  bool bStack_10bc5;
  T0RequiredArgs TStack_10bc4;
  T0RequiredArgs TStack_10bc3;
  T0RequiredArgs TStack_10bc2;
  T0RequiredArgs TStack_10bc1;
  T0RequiredArgs TStack_10bc0;
  T0RequiredArgs TStack_10bbf;
  T0RequiredArgs TStack_10bbe;
  T0RequiredArgs TStack_10bbd;
  T0RequiredArgs TStack_10bbc;
  T0RequiredArgs TStack_10bbb;
  T0RequiredArgs TStack_10bba;
  T0RequiredArgs TStack_10bb9;
  T0RequiredArgs TStack_10bb8;
  T0RequiredArgs TStack_10bb7;
  T0RequiredArgs TStack_10bb6;
  T0RequiredArgs TStack_10bb5;
  T0RequiredArgs TStack_10bb4;
  T0RequiredArgs TStack_10bb3;
  T0RequiredArgs TStack_10bb2;
  T0RequiredArgs TStack_10bb1;
  T0RequiredArgs TStack_10bb0;
  T0RequiredArgs TStack_10baf;
  T0RequiredArgs TStack_10bae;
  T0RequiredArgs TStack_10bad;
  T0RequiredArgs TStack_10bac;
  T0RequiredArgs TStack_10bab;
  T0RequiredArgs TStack_10baa;
  T0RequiredArgs TStack_10ba9;
  T0RequiredArgs TStack_10ba8;
  T0RequiredArgs TStack_10ba7;
  bool bStack_10ba6;
  bool bStack_10ba5;
  T0RequiredArgs TStack_10ba4;
  T0RequiredArgs TStack_10ba3;
  T0RequiredArgs TStack_10ba2;
  T0RequiredArgs TStack_10ba1;
  bool bStack_10ba0;
  T0RequiredArgs TStack_10b9f;
  T0RequiredArgs TStack_10b9e;
  T0RequiredArgs TStack_10b9d;
  T0RequiredArgs TStack_10b9c;
  T0RequiredArgs TStack_10b9b;
  T0RequiredArgs TStack_10b9a;
  T0RequiredArgs TStack_10b99;
  T0RequiredArgs TStack_10b98;
  T0RequiredArgs TStack_10b97;
  T0RequiredArgs aTStack_10b96 [2];
  uint uStack_10b94;
  FTextStyles *pFStack_10b90;
  uint uStack_10b88;
  undefined4 uStack_10b84;
  FText *pFStack_10b80;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *pTStack_10b78;
  int aiStack_10b70 [4];
  float fStack_10b60;
  int aiStack_10b5c [3];
  float fStack_10b50;
  int iStack_10b4c;
  float fStack_10b48;
  int iStack_10b44;
  int iStack_10b40;
  Type TStack_10b3c;
  FTextStyles *pFStack_10b38;
  ISlateStyle *pIStack_10b30;
  ISlateStyle *pIStack_10b28;
  ISlateStyle *pIStack_10b20;
  ISlateStyle *pIStack_10b18;
  ISlateStyle *pIStack_10b10;
  FText *pFStack_10b08;
  FText *pFStack_10b00;
  ISlateStyle *pIStack_10af8;
  ISlateStyle *pIStack_10af0;
  ISlateStyle *pIStack_10ae8;
  ISlateStyle *pIStack_10ae0;
  TSharedRef<FRichTextLayoutMarshaller,1> TStack_10ad8;
  Layer LStack_10ac8;
  Layer LStack_10ac4;
  Layer LStack_10ac0;
  Layer LStack_10abc;
  FName *pFStack_10ab8;
  FName FStack_10ab0;
  FName FStack_10aa8;
  FText *pFStack_10aa0;
  FText *pFStack_10a98;
  FName FStack_10a90;
  TSharedRef<FCompositeFont_const_,1> *pTStack_10a88;
  uint *puStack_10a80;
  FText *pFStack_10a78;
  FScriptContainerElement *pFStack_10a70;
  FScriptContainerElement *pFStack_10a68;
  FFontFamily *pFStack_10a60;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTStack_10a58;
  undefined4 uStack_10a50;
  undefined4 uStack_10a4c;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTStack_10a48;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTStack_10a40;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTStack_10a38;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *pTStack_10a30;
  ISlateStyle *pIStack_10a28;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *pTStack_10a20;
  longlong *plStack_10a18;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTStack_10a10;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTStack_10a08;
  FString *pFStack_10a00;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTStack_109f8;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTStack_109f0;
  FString *pFStack_109e8;
  FRichTextLayoutMarshaller *pFStack_109e0;
  FRichTextLayoutMarshaller *pFStack_109d8;
  FName *pFStack_109d0;
  FName FStack_109c8;
  code *pcStack_109c0;
  FSlateBrush *pFStack_109b8;
  TAttribute<FSlateBrush_const_*> *pTStack_109b0;
  TAttribute<FSlateBrush_const_*> *pTStack_109a8;
  FArguments *pFStack_109a0;
  undefined1 *puStack_10998;
  FName *pFStack_10990;
  FName FStack_10988;
  code *pcStack_10980;
  FSlateBrush *pFStack_10978;
  TAttribute<FSlateBrush_const_*> *pTStack_10970;
  TAttribute<FSlateBrush_const_*> *pTStack_10968;
  FArguments *pFStack_10960;
  FArguments *pFStack_10958;
  TAttribute<FText> *pTStack_10950;
  TAttribute<FText> *pTStack_10948;
  FArguments *pFStack_10940;
  FName FStack_10938;
  ISlateStyle *pIStack_10930;
  FArguments *pFStack_10928;
  ISlateStyle *pIStack_10920;
  FArguments *pFStack_10918;
  TAttribute<bool> *pTStack_10910;
  TAttribute<bool> *pTStack_10908;
  FArguments *pFStack_10900;
  undefined1 *puStack_108f8;
  TAttribute<ETextJustify::Type> *pTStack_108f0;
  FArguments *pFStack_108e8;
  TAttribute<FMargin> *pTStack_108e0;
  TAttribute<FMargin> *pTStack_108d8;
  FArguments *pFStack_108d0;
  FArguments *pFStack_108c8;
  FArguments *pFStack_108c0;
  FArguments *pFStack_108b8;
  FSlotArguments *pFStack_108b0;
  FSlotArguments *pFStack_108a8;
  FArguments *pFStack_108a0;
  undefined1 *puStack_10898;
  TAttribute<FText> *pTStack_10890;
  TAttribute<FText> *pTStack_10888;
  FArguments *pFStack_10880;
  FName FStack_10878;
  ISlateStyle *pIStack_10870;
  FArguments *pFStack_10868;
  ISlateStyle *pIStack_10860;
  FArguments *pFStack_10858;
  TAttribute<bool> *pTStack_10850;
  TAttribute<bool> *pTStack_10848;
  FArguments *pFStack_10840;
  TAttribute<FMargin> *pTStack_10838;
  TAttribute<FMargin> *pTStack_10830;
  FArguments *pFStack_10828;
  FArguments *pFStack_10820;
  FSlotArguments *pFStack_10818;
  FSlotArguments *pFStack_10810;
  FArguments *pFStack_10808;
  TAttribute<FMargin> *pTStack_10800;
  TAttribute<FMargin> *pTStack_107f8;
  FSlotArgumentsMixin *pFStack_107f0;
  FArguments *pFStack_107e8;
  FName *pFStack_107e0;
  FName FStack_107d8;
  code *pcStack_107d0;
  FSlateBrush *pFStack_107c8;
  TAttribute<FSlateBrush_const_*> *pTStack_107c0;
  TAttribute<FSlateBrush_const_*> *pTStack_107b8;
  FArguments *pFStack_107b0;
  FName *pFStack_107a8;
  FName FStack_107a0;
  code *pcStack_10798;
  FSlateBrush *pFStack_10790;
  TAttribute<FSlateBrush_const_*> *pTStack_10788;
  TAttribute<FSlateBrush_const_*> *pTStack_10780;
  FArguments *pFStack_10778;
  TAttribute<FMargin> *pTStack_10770;
  TAttribute<FMargin> *pTStack_10768;
  FArguments *pFStack_10760;
  TAttribute<FMargin> *pTStack_10758;
  TAttribute<FMargin> *pTStack_10750;
  FSlotArgumentsMixin *pFStack_10748;
  FName *pFStack_10740;
  FName FStack_10738;
  code *pcStack_10730;
  FSlateBrush *pFStack_10728;
  TAttribute<FSlateBrush_const_*> *pTStack_10720;
  TAttribute<FSlateBrush_const_*> *pTStack_10718;
  FArguments *pFStack_10710;
  TAttribute<FMargin> *pTStack_10708;
  TAttribute<FMargin> *pTStack_10700;
  FArguments *pFStack_106f8;
  FName FStack_106f0;
  ISlateStyle *pIStack_106e8;
  FArguments *pFStack_106e0;
  FArguments *pFStack_106d8;
  FArguments *pFStack_106d0;
  FArguments *pFStack_106c8;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTStack_106c0;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTStack_106b8;
  FArguments *pFStack_106b0;
  TAttribute<FMargin> *pTStack_106a8;
  TAttribute<FMargin> *pTStack_106a0;
  FArguments *pFStack_10698;
  FArguments *pFStack_10690;
  FArguments *pFStack_10688;
  FArguments *pFStack_10680;
  FArguments *pFStack_10678;
  FArguments *pFStack_10670;
  FArguments *pFStack_10668;
  FSlotArguments *pFStack_10660;
  FSlotArguments *pFStack_10658;
  FArguments *pFStack_10650;
  TAttribute<FOptionalSize> *pTStack_10648;
  TAttribute<FOptionalSize> *pTStack_10640;
  FArguments *pFStack_10638;
  FArguments *pFStack_10630;
  FArguments *pFStack_10628;
  FArguments *pFStack_10620;
  FArguments *pFStack_10618;
  FArguments *pFStack_10610;
  FSlotArguments *pFStack_10608;
  FSlotArguments *pFStack_10600;
  FArguments *pFStack_105f8;
  TAttribute<FMargin> *pTStack_105f0;
  TAttribute<FMargin> *pTStack_105e8;
  FSlotArgumentsMixin *pFStack_105e0;
  FName FStack_105d8;
  ISlateStyle *pIStack_105d0;
  FArguments *pFStack_105c8;
  FArguments *pFStack_105c0;
  FArguments *pFStack_105b8;
  TAttribute<FOptionalSize> *pTStack_105b0;
  TAttribute<FOptionalSize> *pTStack_105a8;
  FArguments *pFStack_105a0;
  FArguments *pFStack_10598;
  FArguments *pFStack_10590;
  FName FStack_10588;
  ISlateStyle *pIStack_10580;
  FArguments *pFStack_10578;
  TAttribute<FText> *pTStack_10570;
  TAttribute<FText> *pTStack_10568;
  FArguments *pFStack_10560;
  FArguments *pFStack_10558;
  FArguments *pFStack_10550;
  FArguments *pFStack_10548;
  FArguments *pFStack_10540;
  FArguments *pFStack_10538;
  FSlotArguments *pFStack_10530;
  FSlotArguments *pFStack_10528;
  FArguments *pFStack_10520;
  FName FStack_10518;
  ISlateStyle *pIStack_10510;
  FArguments *pFStack_10508;
  FArguments *pFStack_10500;
  FArguments *pFStack_104f8;
  TAttribute<FOptionalSize> *pTStack_104f0;
  TAttribute<FOptionalSize> *pTStack_104e8;
  FArguments *pFStack_104e0;
  FArguments *pFStack_104d8;
  FArguments *pFStack_104d0;
  FName FStack_104c8;
  ISlateStyle *pIStack_104c0;
  FArguments *pFStack_104b8;
  TAttribute<FText> *pTStack_104b0;
  TAttribute<FText> *pTStack_104a8;
  FArguments *pFStack_104a0;
  FArguments *pFStack_10498;
  FArguments *pFStack_10490;
  FArguments *pFStack_10488;
  FArguments *pFStack_10480;
  FArguments *pFStack_10478;
  FSlotArguments *pFStack_10470;
  FSlotArguments *pFStack_10468;
  FArguments *pFStack_10460;
  TAttribute<FMargin> *pTStack_10458;
  TAttribute<FMargin> *pTStack_10450;
  FSlotArgumentsMixin *pFStack_10448;
  FName FStack_10440;
  ISlateStyle *pIStack_10438;
  FArguments *pFStack_10430;
  FArguments *pFStack_10428;
  TAttribute<FMargin> *pTStack_10420;
  TAttribute<FMargin> *pTStack_10418;
  longlong *plStack_10410;
  longlong *plStack_10408;
  longlong *plStack_10400;
  FName FStack_103f8;
  ISlateStyle *pIStack_103f0;
  FArguments *pFStack_103e8;
  TAttribute<FText> *pTStack_103e0;
  TAttribute<FText> *pTStack_103d8;
  FArguments *pFStack_103d0;
  FArguments *pFStack_103c8;
  FSlotArguments *pFStack_103c0;
  FSlotArguments *pFStack_103b8;
  FArguments *pFStack_103b0;
  longlong *plStack_103a8;
  longlong *plStack_103a0;
  FArguments *pFStack_10398;
  TVector2<double>_u_0 *pTStack_10390;
  TAttribute<UE::Math::TVector2<double>_> *pTStack_10388;
  TAttribute<UE::Math::TVector2<double>_> *pTStack_10380;
  FArguments *pFStack_10378;
  FArguments *pFStack_10370;
  FSlotArguments *pFStack_10368;
  FSlotArguments *pFStack_10360;
  FArguments *pFStack_10358;
  FArguments *pFStack_10350;
  FArguments *pFStack_10348;
  FArguments *pFStack_10340;
  FSlotArguments *pFStack_10338;
  FSlotArguments *pFStack_10330;
  FArguments *pFStack_10328;
  TAttribute<FMargin> *pTStack_10320;
  TAttribute<FMargin> *pTStack_10318;
  FSlotArgumentsMixin *pFStack_10310;
  FName FStack_10308;
  ISlateStyle *pIStack_10300;
  FArguments *pFStack_102f8;
  FArguments *pFStack_102f0;
  FArguments *pFStack_102e8;
  FArguments *pFStack_102e0;
  TAttribute<FOptionalSize> *pTStack_102d8;
  TAttribute<FOptionalSize> *pTStack_102d0;
  FArguments *pFStack_102c8;
  FArguments *pFStack_102c0;
  FArguments *pFStack_102b8;
  FName *pFStack_102b0;
  FName FStack_102a8;
  code *pcStack_102a0;
  FSlateBrush *pFStack_10298;
  TAttribute<FSlateBrush_const_*> *pTStack_10290;
  TAttribute<FSlateBrush_const_*> *pTStack_10288;
  FArguments *pFStack_10280;
  FArguments *pFStack_10278;
  FArguments *pFStack_10270;
  FArguments *pFStack_10268;
  NamedSlotProperty<SComboButton::FArguments> *pNStack_10260;
  FArguments *pFStack_10258;
  FArguments *pFStack_10250;
  longlong *plStack_10248;
  TAttribute<FMargin> *pTStack_10240;
  TAttribute<FMargin> *pTStack_10238;
  longlong *plStack_10230;
  FName FStack_10228;
  ISlateStyle *pIStack_10220;
  FArguments *pFStack_10218;
  TAttribute<FText> *pTStack_10210;
  TAttribute<FText> *pTStack_10208;
  FArguments *pFStack_10200;
  FArguments *pFStack_101f8;
  FSlotArguments *pFStack_101f0;
  FSlotArguments *pFStack_101e8;
  FArguments *pFStack_101e0;
  TAttribute<FMargin> *pTStack_101d8;
  TAttribute<FMargin> *pTStack_101d0;
  longlong *plStack_101c8;
  TAttribute<FOptionalSize> *pTStack_101c0;
  TAttribute<FOptionalSize> *pTStack_101b8;
  FArguments *pFStack_101b0;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *pTStack_101a8;
  FArguments *pFStack_101a0;
  FArguments *pFStack_10198;
  FArguments *pFStack_10190;
  FSlotArguments *pFStack_10188;
  FSlotArguments *pFStack_10180;
  FArguments *pFStack_10178;
  longlong *plStack_10170;
  TAttribute<FMargin> *pTStack_10168;
  TAttribute<FMargin> *pTStack_10160;
  longlong *plStack_10158;
  FName FStack_10150;
  ISlateStyle *pIStack_10148;
  FArguments *pFStack_10140;
  TAttribute<FText> *pTStack_10138;
  TAttribute<FText> *pTStack_10130;
  FArguments *pFStack_10128;
  FArguments *pFStack_10120;
  FSlotArguments *pFStack_10118;
  FSlotArguments *pFStack_10110;
  FArguments *pFStack_10108;
  TAttribute<FMargin> *pTStack_10100;
  TAttribute<FMargin> *pTStack_100f8;
  longlong *plStack_100f0;
  TAttribute<FOptionalSize> *pTStack_100e8;
  TAttribute<FOptionalSize> *pTStack_100e0;
  FArguments *pFStack_100d8;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *pTStack_100d0;
  FArguments *pFStack_100c8;
  FArguments *pFStack_100c0;
  FArguments *pFStack_100b8;
  FSlotArguments *pFStack_100b0;
  FSlotArguments *pFStack_100a8;
  FArguments *pFStack_100a0;
  longlong *plStack_10098;
  TAttribute<FMargin> *pTStack_10090;
  TAttribute<FMargin> *pTStack_10088;
  longlong *plStack_10080;
  TOptional<int> *pTStack_10078;
  TOptional<int> TStack_10070;
  FSlotArguments *pFStack_10068;
  FName FStack_10060;
  ISlateStyle *pIStack_10058;
  FArguments *pFStack_10050;
  FArguments *pFStack_10048;
  FName FStack_10040;
  ISlateStyle *pIStack_10038;
  FArguments *pFStack_10030;
  TAttribute<FText> *pTStack_10028;
  TAttribute<FText> *pTStack_10020;
  FArguments *pFStack_10018;
  FArguments *pFStack_10010;
  FArguments *pFStack_10008;
  FArguments *local_10000;
  FSlotArguments *local_fff8;
  FSlotArguments *local_fff0;
  FArguments *local_ffe8;
  FArguments *local_ffe0;
  NamedSlotProperty<SComboButton::FArguments> *local_ffd8;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *local_ffd0;
  FArguments *local_ffc8;
  FSlotArguments *local_ffc0;
  FSlotArguments *local_ffb8;
  FArguments *local_ffb0;
  FArguments *local_ffa8;
  FArguments *local_ffa0;
  FArguments *local_ff98;
  FSlotArguments *local_ff90;
  FSlotArguments *local_ff88;
  FArguments *local_ff80;
  TAttribute<FMargin> *local_ff78;
  TAttribute<FMargin> *local_ff70;
  FSlotArgumentsMixin *local_ff68;
  FName *local_ff60;
  FName local_ff58;
  ISlateStyle *local_ff50;
  TAttribute<FSlateFontInfo> *local_ff48;
  TAttribute<FSlateFontInfo> *local_ff40;
  FArguments *local_ff38;
  FArguments *local_ff30;
  FArguments *local_ff28;
  FArguments *local_ff20;
  FArguments *local_ff18;
  TSharedPtr<ITextLayoutMarshaller,1> *local_ff10;
  TSharedPtr<ITextLayoutMarshaller,1> *local_ff08;
  FArguments *local_ff00;
  TAttribute<bool> *local_fef8;
  TAttribute<bool> *local_fef0;
  FArguments *local_fee8;
  TAttribute<bool> *local_fee0;
  TAttribute<bool> *local_fed8;
  FArguments *local_fed0;
  TAttribute<FMargin> *local_fec8;
  TAttribute<FMargin> *local_fec0;
  FArguments *local_feb8;
  TAttribute<float> *local_feb0;
  TAttribute<float> *local_fea8;
  FArguments *local_fea0;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> *local_fe98;
  FArguments *local_fe90;
  FSlotArguments *local_fe88;
  FSlotArguments *local_fe80;
  FArguments *local_fe78;
  FArguments *local_fe70;
  FArguments *local_fe68;
  FArguments *local_fe60;
  FArguments *local_fe58;
  FArguments *local_fe50;
  FSlotArguments *local_fe48;
  FSlotArguments *local_fe40;
  FArguments *local_fe38;
  TAttribute<FMargin> *local_fe30;
  TAttribute<FMargin> *local_fe28;
  FSlotArgumentsMixin *local_fe20;
  FArguments *local_fe18;
  FName *local_fe10;
  FName local_fe08;
  code *local_fe00;
  FSlateBrush *local_fdf8;
  TAttribute<FSlateBrush_const_*> *local_fdf0;
  TAttribute<FSlateBrush_const_*> *local_fde8;
  FArguments *local_fde0;
  FName *local_fdd8;
  FName local_fdd0;
  code *local_fdc8;
  FSlateBrush *local_fdc0;
  TAttribute<FSlateBrush_const_*> *local_fdb8;
  TAttribute<FSlateBrush_const_*> *local_fdb0;
  FArguments *local_fda8;
  TAttribute<FMargin> *local_fda0;
  TAttribute<FMargin> *local_fd98;
  FArguments *local_fd90;
  TAttribute<FMargin> *local_fd88;
  TAttribute<FMargin> *local_fd80;
  FSlotArgumentsMixin *local_fd78;
  FArguments *local_fd70;
  FArguments *local_fd68;
  FArguments *local_fd60;
  TSharedPtr<ITextLayoutMarshaller,1> *local_fd58;
  TSharedPtr<ITextLayoutMarshaller,1> *local_fd50;
  FArguments *local_fd48;
  TAttribute<bool> *local_fd40;
  TAttribute<bool> *local_fd38;
  FArguments *local_fd30;
  TAttribute<FMargin> *local_fd28;
  TAttribute<FMargin> *local_fd20;
  FArguments *local_fd18;
  TAttribute<float> *local_fd10;
  TAttribute<float> *local_fd08;
  FArguments *local_fd00;
  FArguments *local_fcf8;
  FSlotArguments *local_fcf0;
  FSlotArguments *local_fce8;
  FArguments *local_fce0;
  FName *local_fcd8;
  FName local_fcd0;
  code *local_fcc8;
  FSlateBrush *local_fcc0;
  TAttribute<FSlateBrush_const_*> *local_fcb8;
  TAttribute<FSlateBrush_const_*> *local_fcb0;
  FArguments *local_fca8;
  TAttribute<FMargin> *local_fca0;
  TAttribute<FMargin> *local_fc98;
  FArguments *local_fc90;
  FArguments *local_fc88;
  FName local_fc80;
  ISlateStyle *local_fc78;
  FArguments *local_fc70;
  FArguments *local_fc68;
  FArguments *local_fc60;
  FName local_fc58;
  ISlateStyle *local_fc50;
  FArguments *local_fc48;
  TAttribute<FText> *local_fc40;
  TAttribute<FText> *local_fc38;
  FArguments *local_fc30;
  FArguments *local_fc28;
  FArguments *local_fc20;
  FArguments *local_fc18;
  FArguments *local_fc10;
  FArguments *local_fc08;
  FSlotArguments *local_fc00;
  FSlotArguments *local_fbf8;
  FArguments *local_fbf0;
  FArguments *local_fbe8;
  FArguments *local_fbe0;
  FArguments *local_fbd8;
  FArguments *local_fbd0;
  FArguments *local_fbc8;
  FSlotArguments *local_fbc0;
  FSlotArguments *local_fbb8;
  FArguments *local_fbb0;
  FArguments *local_fba8;
  FArguments *local_fba0;
  FArguments *local_fb98;
  FSlotArguments *local_fb90;
  FSlotArguments *local_fb88;
  FArguments *local_fb80;
  FArguments *local_fb78;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_fb70;
  Layer local_fb68 [2];
  TSharedRef<SWidget,1> local_fb60;
  TSharedRef<SWidget,1> local_fb50;
  TSharedRef<SWidget,1> local_fb40;
  TSharedRef<SWidget,1> local_fb30;
  TSharedRef<SWidget,1> local_fb20;
  TSharedRef<SWidget,1> local_fb10;
  TSharedRef<SWidget,1> local_fb00;
  TSharedRef<SWidget,1> local_faf0;
  TSharedRef<SWidget,1> local_fae0;
  TSharedRef<SWidget,1> local_fad0;
  TSharedRef<SWidget,1> local_fac0;
  TSharedRef<SWidget,1> local_fab0;
  TSharedRef<SWidget,1> local_faa0;
  TSharedRef<ITextDecorator,1> local_fa90;
  TSharedRef<ITextDecorator,1> local_fa80;
  TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> local_fa70;
  code *local_fa60;
  undefined4 local_fa58;
  code *local_fa50;
  undefined4 local_fa48;
  code *local_fa40;
  undefined4 local_fa38;
  code *local_fa30;
  undefined4 local_fa28;
  code *local_fa20;
  undefined4 local_fa18;
  code *local_fa10;
  undefined4 local_fa08;
  code *local_fa00;
  undefined4 local_f9f8;
  code *local_f9f0;
  undefined4 local_f9e8;
  code *local_f9e0;
  undefined4 local_f9d8;
  code *local_f9d0;
  undefined4 local_f9c8;
  code *local_f9c0;
  undefined4 local_f9b8;
  TVector2<double>_u_0 local_f9b0;
  code *local_f9a0;
  undefined4 local_f998;
  code *local_f990;
  undefined4 local_f988;
  code *local_f980;
  undefined4 local_f978;
  code *local_f970;
  undefined4 local_f968;
  code *local_f960;
  undefined4 local_f958;
  code *local_f950;
  undefined4 local_f948;
  code *local_f940;
  undefined4 local_f938;
  code *local_f930;
  undefined4 local_f928;
  code *local_f920;
  undefined4 local_f918;
  code *local_f910;
  undefined4 local_f908;
  code *local_f900;
  undefined4 local_f8f8;
  TSharedRef<SWidget,1> local_f8f0;
  TSharedRef<SWidget,1> local_f8e0;
  TSharedRef<SWidget,1> local_f8d0;
  TSharedRef<SWidget,1> local_f8c0;
  TSharedRef<SWidget,1> local_f8b0;
  TSharedRef<SWidget,1> local_f8a0;
  TSharedRef<SWidget,1> local_f890;
  TSharedRef<SWidget,1> local_f880;
  TSharedRef<SWidget,1> local_f870;
  TSharedRef<SWidget,1> local_f860;
  TSharedRef<SWidget,1> local_f850;
  TSharedRef<SWidget,1> local_f840;
  TSharedRef<SWidget,1> local_f830;
  TSharedRef<SWidget,1> local_f820;
  TSharedRef<SWidget,1> local_f810;
  TSharedRef<SWidget,1> local_f800;
  TSharedRef<SWidget,1> local_f7f0;
  TSharedRef<SWidget,1> local_f7e0;
  TSharedRef<SWidget,1> local_f7d0;
  TSharedRef<SWidget,1> local_f7c0;
  TSharedRef<SWidget,1> local_f7b0;
  TSharedRef<SWidget,1> local_f7a0;
  TSharedRef<SWidget,1> local_f790;
  TSharedRef<SWidget,1> local_f780;
  TSharedRef<SWidget,1> local_f770;
  TSharedRef<SWidget,1> local_f760;
  TSharedRef<SWidget,1> local_f750;
  TSharedRef<SWidget,1> local_f740;
  TSharedRef<SWidget,1> local_f730;
  TSharedRef<SWidget,1> local_f720;
  TSharedRef<SWidget,1> local_f710;
  TSharedRef<SWidget,1> local_f700;
  TSharedRef<SWidget,1> local_f6f0;
  FName local_f6e0;
  FName local_f6d8;
  FName local_f6d0;
  FName local_f6c8;
  FName local_f6c0;
  FName local_f6b8;
  TOptional<int> local_f6b0;
  FName local_f6a8;
  FName local_f6a0;
  FName local_f698;
  FName local_f690;
  FName local_f688;
  FFontFamily local_f680;
  TSharedRef<SWidget,1> local_f658;
  TSharedRef<FHyperlinkDecorator,1> local_f648;
  TSharedRef<FTextStyleDecoratorTest,1> local_f638;
  TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> local_f628;
  undefined1 local_f618 [16];
  pmf_3b51c06c local_f608;
  undefined1 local_f5f8 [16];
  pmf_de41996d local_f5e8;
  undefined1 local_f5d8 [16];
  pmf_f4cef8e6 local_f5c8;
  undefined1 local_f5b8 [16];
  pmf_1a3cded7 local_f5a8;
  undefined1 local_f598 [16];
  pmf_17d67a20 local_f588;
  undefined1 local_f578 [16];
  pmf_bb09059b local_f568;
  undefined1 local_f558 [16];
  pmf_abb7684b local_f548;
  undefined1 local_f538 [16];
  pmf_bb09059b local_f528;
  undefined1 local_f518 [16];
  pmf_abb7684b local_f508;
  undefined1 local_f4f8 [16];
  pmf_869368bc local_f4e8;
  undefined1 local_f4d8 [16];
  pmf_ee6c244e local_f4c8;
  undefined1 local_f4b8 [16];
  pmf_dc118204 local_f4a8;
  undefined1 local_f498 [16];
  pmf_869368bc local_f488;
  undefined1 local_f478 [16];
  pmf_f4cef8e6 local_f468;
  undefined1 local_f458 [16];
  pmf_3b8787f2 local_f448;
  undefined1 local_f438 [16];
  pmf_f92091c4 local_f428;
  undefined1 local_f418 [16];
  pmf_b9e212c2 local_f408;
  undefined1 local_f3f8 [16];
  pmf_f4cef8e6 local_f3e8;
  undefined1 local_f3d8 [16];
  pmf_3b8787f2 local_f3c8;
  undefined1 local_f3b8 [16];
  pmf_f92091c4 local_f3a8;
  undefined1 local_f398 [16];
  pmf_bb09059b local_f388;
  undefined1 local_f378 [16];
  pmf_abb7684b local_f368;
  TSharedRef<SScrollBox,1> local_f358;
  TSharedRef<SBorder,1> local_f348;
  TSharedRef<SVerticalBox,1> local_f338;
  TSharedRef<SBorder,1> local_f328;
  TSharedRef<SBorder,1> local_f318;
  TSharedRef<SVerticalBox,1> local_f308;
  TSharedRef<SBorder,1> local_f2f8;
  TSharedRef<SCheckBox,1> local_f2e8;
  TSharedRef<STextBlock,1> local_f2d8;
  FText local_f2c8;
  TSharedRef<SMultiLineEditableTextBox,1> local_f2b8;
  TSharedRef<SBorder,1> local_f2a8;
  TSharedRef<SBorder,1> local_f298;
  TSharedRef<SVerticalBox,1> local_f288;
  TSharedRef<SMultiLineEditableTextBox,1> local_f278;
  TSharedRef<SBorder,1> local_f268;
  TSharedRef<SHorizontalBox,1> local_f258;
  TSharedRef<SComboButton,1> local_f248;
  TSharedRef<SGridPanel,1> local_f238;
  TSharedRef<SButton,1> local_f228;
  TSharedRef<STextBlock,1> local_f218;
  FText local_f208;
  TSharedRef<SBox,1> local_f1f8;
  TSharedRef<SEditableTextBox,1> local_f1e8;
  TSharedRef<STextBlock,1> local_f1d8;
  FText local_f1c8;
  TSharedRef<SBox,1> local_f1b8;
  TSharedRef<SEditableTextBox,1> local_f1a8;
  TSharedRef<STextBlock,1> local_f198;
  FText local_f188;
  TSharedRef<SBox,1> local_f178;
  TSharedRef<SImage,1> local_f168;
  TSharedRef<SButton,1> local_f158;
  TSharedRef<SOverlay,1> local_f148;
  TSharedRef<SColorBlock,1> local_f138;
  TSharedRef<STextBlock,1> local_f128;
  FText local_f118;
  TSharedRef<SCheckBox,1> local_f108;
  TSharedRef<SBox,1> local_f0f8;
  TSharedRef<STextBlock,1> local_f0e8;
  FText local_f0d8;
  TSharedRef<SCheckBox,1> local_f0c8;
  TSharedRef<SBox,1> local_f0b8;
  TSharedRef<STextBlock,1> local_f0a8;
  FText local_f098;
  TSharedRef<SBox,1> local_f088;
  TSharedRef<SNumericEntryBox<unsigned_short>,1> local_f078;
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_f068;
  TSharedRef<SBox,1> local_f058;
  TSharedRef<STextBlock,1> local_f048;
  TSharedRef<SRichTextBlock,1> local_f038;
  FText local_f028;
  TSharedRef<SBorder,1> local_f018;
  TSharedRef<SRichTextBlock,1> local_f008;
  FText local_eff8;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_efe8;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_efd0;
  TAttribute<float> local_efb8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ef98;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_ef80;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_ef68;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_ef50;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_ef38;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_ef20;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_ef08;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_eef0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_eed8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_eec0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_eea8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_ee90;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_ee78;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_ee60;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ee48;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_ee30;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_ee18;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_ee00;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_ede8;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_edd0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_edb8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_eda0;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_ed88;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_ed70;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_ed58;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ed40;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ed28;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_ed10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ecf8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ece0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ecc8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ecb0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_ec98;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_ec80;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_ec68;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_ec50;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ec38;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_ec20;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ec08;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ebf0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_ebd8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ebc0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_eba8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_eb90;
  TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> local_eb78;
  TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
  local_eb60;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_eb48;
  FText local_eb30;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> local_eb20;
  FString local_eb10;
  FMargin local_eb00;
  FMargin local_eaf0;
  TSharedPtr<FTextStyles::FFontFamily,1> local_eae0;
  FMargin local_ead0;
  FMargin local_eac0;
  FMargin local_eab0;
  FMargin local_eaa0;
  FMargin local_ea90;
  FMargin local_ea80;
  NamedSlotProperty<SComboButton::FArguments> local_ea70;
  NamedSlotProperty<SComboButton::FArguments> local_ea60;
  FMargin local_ea50;
  FMargin local_ea40;
  FMargin local_ea30;
  FMargin local_ea20;
  FMargin local_ea10;
  FMargin local_ea00;
  TSharedPtr<ITextLayoutMarshaller,1> local_e9f0;
  FMargin local_e9e0;
  FMargin local_e9d0;
  FMargin local_e9c0;
  TSharedPtr<ITextLayoutMarshaller,1> local_e9b0;
  FMargin local_e9a0;
  FMargin local_e990;
  FMargin local_e980;
  FMargin local_e970;
  TAttribute<bool> local_e960;
  undefined1 local_e940 [32];
  TAttribute<bool> local_e920;
  TAttribute<FOptionalSize> local_e900;
  TAttribute<FOptionalSize> local_e8e0;
  TAttribute<FOptionalSize> local_e8c0;
  TAttribute<FOptionalSize> local_e8a0;
  TAttribute<FOptionalSize> local_e880;
  TAttribute<FOptionalSize> local_e860;
  TAttribute<bool> local_e840;
  TAttribute<bool> local_e820;
  TAttribute<float> local_e800;
  TAttribute<bool> local_e7e0;
  TAttribute<float> local_e7c0;
  TAttribute<FSlateBrush_const_*> local_e7a0;
  TAttribute<FSlateBrush_const_*> local_e778;
  TAttribute<FSlateBrush_const_*> local_e750;
  TAttribute<FSlateBrush_const_*> local_e728;
  TAttribute<FSlateBrush_const_*> local_e700;
  TAttribute<FSlateBrush_const_*> local_e6d8;
  TAttribute<FSlateBrush_const_*> local_e6b0;
  TAttribute<FSlateBrush_const_*> local_e688;
  TAttribute<FSlateBrush_const_*> local_e660;
  TAttribute<FText> local_e638;
  TAttribute<FMargin> local_e608;
  TAttribute<FText> local_e5d8;
  TAttribute<FMargin> local_e5a8;
  TAttribute<FMargin> local_e578;
  TAttribute<FMargin> local_e548;
  TAttribute<FMargin> local_e518;
  TAttribute<FMargin> local_e4e8;
  TAttribute<FMargin> local_e4b8;
  TAttribute<FMargin> local_e488;
  TAttribute<FText> local_e458;
  TAttribute<FText> local_e428;
  TAttribute<FMargin> local_e3f8;
  TAttribute<FMargin> local_e3c8;
  TAttribute<FText> local_e398;
  TAttribute<UE::Math::TVector2<double>_> local_e368;
  TAttribute<FMargin> local_e338;
  TAttribute<FMargin> local_e308;
  TAttribute<FText> local_e2d8;
  TAttribute<FMargin> local_e2a8;
  TAttribute<FMargin> local_e278;
  TAttribute<FText> local_e248;
  TAttribute<FMargin> local_e218;
  TAttribute<FMargin> local_e1e8;
  TAttribute<FText> local_e1b8;
  TAttribute<FMargin> local_e188;
  TAttribute<FMargin> local_e158;
  TAttribute<FMargin> local_e128;
  TAttribute<FMargin> local_e0f8;
  TAttribute<FMargin> local_e0c8;
  TAttribute<FMargin> local_e098;
  TAttribute<FMargin> local_e068;
  TAttribute<FText> local_e038;
  FSlotArguments local_e008;
  FSlotArguments local_dfa8;
  FSlotArguments local_df48;
  FSlotArguments local_deb0;
  FSlotArguments local_de18;
  FSlotArguments local_dd80;
  FSlotArguments local_dce8;
  FSlotArguments local_dc50;
  FSlotArguments local_db68;
  FSlotArguments local_da80;
  FSlotArguments local_d998;
  FSlotArguments local_d8b0;
  FSlotArguments local_d7c8;
  FSlotArguments local_d6e0;
  FSlotArguments local_d5f8;
  FSlotArguments local_d510;
  FSlotArguments local_d428;
  FSlotArguments local_d340;
  FSlotArguments local_d258;
  FSlotArguments local_d170;
  FSlotArguments local_d088;
  FSlotArguments local_cfa0;
  TAttribute<FSlateFontInfo> local_ceb8;
  FArguments local_ce38;
  FArguments local_cc30;
  FArguments local_ca28;
  FArguments local_c820;
  FArguments local_c618;
  FArguments local_c410;
  FArguments local_c1e8;
  FArguments local_bf40;
  FArguments local_bc78;
  FArguments local_b940;
  FArguments local_b600;
  FArguments local_b2c0;
  FArguments local_af80;
  FArguments local_ac40;
  FArguments local_a900;
  FArguments local_a5c0;
  FArguments local_a278;
  FArguments local_9f18;
  FArguments local_9bb8;
  FArguments local_97d8;
  FArguments local_93f8;
  FArguments local_9018;
  FArguments local_8c38;
  FArguments local_8858;
  FArguments local_8478;
  FArguments local_8098;
  FArguments local_7cb8;
  FArguments local_78d8;
  FArguments local_74f8;
  FArguments local_7118;
  FArguments local_6d18;
  FArguments local_6918;
  FArguments local_63d8;
  FArguments local_5e98;
  FArguments local_5940;
  FArguments local_53e8;
  FArguments local_4e90;
  FArguments local_4938;
  FArguments local_43e0;
  FArguments local_3e88;
  FArguments local_3930;
  FArguments local_33d8;
  FArguments local_2d18;
  FArguments local_2658;
  FArguments local_1f48;
  FArguments local_16e0;
  FSyntaxTextStyle local_e78;
  undefined8 uStack_18;
  
  uStack_18 = 0x143090356;
  uStack_10b94 = 0;
  pFStack_10b90 = &this->TextStyles;
  pFStack_10b80 = ::operator_new(0x28);
  if (pFStack_10b80 == (FText *)0x0) {
    pFStack_10b00 = (FText *)0x0;
  }
  else {
    uStack_10b94 = uStack_10b94 | 1;
    pTStack_10a88 =
         FCoreStyle::GetDefaultFont
                   ((TSharedRef<FCompositeFont_const_,1> *)&local_f680.DisplayName.Flags);
    pFStack_10ab8 = &local_f688;
    pFVar4 = ::FName::FName(pFStack_10ab8,L"Roboto");
    FStack_10ab0 = *pFVar4;
    pFStack_10aa0 = &local_eb30;
    FStack_10aa8 = FStack_10ab0;
    FStack_10a90 = FStack_10ab0;
    pFStack_10b08 =
         FText::AsLocalizable_Advanced_LocText
                   (pFStack_10aa0,L"STestSuite",L"RobotoFontFamily",L"Roboto");
    pFStack_10a98 = pFStack_10b80;
    FText::FText(pFStack_10b80,pFStack_10b08);
    pFStack_10b80[1].TextData.Reference = (ITextData *)FStack_10a90;
    puStack_10a80 = &pFStack_10b80[1].Flags;
    TSharedRef<FCompositeFont_const_,1>::TSharedRef<FCompositeFont_const_,1>
              ((TSharedRef<FCompositeFont_const_,1> *)puStack_10a80,pTStack_10a88);
    FText::~FText(pFStack_10b08);
    pFStack_10a78 = pFStack_10b80;
    pFStack_10b00 = pFStack_10b80;
  }
  pFStack_10a60 = (FFontFamily *)MakeShareable<FTextStyles::FFontFamily>(&local_f680);
  if ((pFStack_10b90->AvailableFontFamilies).ArrayNum ==
      (pFStack_10b90->AvailableFontFamilies).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFStack_10b90,
                       &(pFStack_10b90->AvailableFontFamilies).ArrayMax);
    (pFStack_10b90->AvailableFontFamilies).ArrayNum = iVar3;
  }
  iStack_10b40 = (pFStack_10b90->AvailableFontFamilies).ArrayNum;
  (pFStack_10b90->AvailableFontFamilies).ArrayNum =
       (pFStack_10b90->AvailableFontFamilies).ArrayNum + 1;
  pFStack_10a70 = (pFStack_10b90->AvailableFontFamilies).AllocatorInstance.Data;
  pFStack_10a68 = pFStack_10a70 + (longlong)iStack_10b40 * 0x10;
  pTStack_10a58 = ::operator_new(0x10,pFStack_10a68);
  TSharedPtr<FTextStyles::FFontFamily,1>::
  TSharedPtr<FTextStyles::FFontFamily,1><FTextStyles::FFontFamily>
            (pTStack_10a58,(TRawPtrProxy<FTextStyles::FFontFamily> *)pFStack_10a60);
  if ((uStack_10b94 & 1) != 0) {
    uStack_10b94 = uStack_10b94 & 0xfffffffe;
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              ((FSharedReferencer<1> *)&local_f680.FamilyName);
  }
  pFStack_10b38 = &this->TextStyles;
  uStack_10b84 = 1;
  uStack_10b88 = (uint)(0 < (this->TextStyles).AvailableFontFamilies.ArrayNum);
  if (uStack_10b88 == 0) {
    uStack_10a50 = 0;
    uStack_10a4c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTStack_10a48 =
       (TSharedPtr<FTextStyles::FFontFamily,1> *)
       (pFStack_10b38->AvailableFontFamilies).AllocatorInstance.Data;
  pTStack_10a40 = pTStack_10a48;
  pTStack_10a38 = pTStack_10a48;
  TSharedPtr<FTextStyles::FFontFamily,1>::operator=(&this->ActiveFontFamily,pTStack_10a48);
  this->FontSize = 0xb;
  this->FontStyle = '\0';
  pFVar46 = &FLinearColor::Black;
  pFVar49 = &this->FontColor;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)&pFVar49->field0_0x0 = *(undefined1 *)&pFVar46->field0_0x0;
    pFVar46 = (FLinearColor *)((longlong)&pFVar46->field0_0x0 + 1);
    pFVar49 = (FLinearColor *)((longlong)&pFVar49->field0_0x0 + 1);
  }
  pFVar5 = FText::FromString((FText *)&local_f680.CompositeFont,
                             L"<TextStyle FontFamily=\"Roboto\" FontSize=\"11\" FontStyle=\"Regular\" FontColor=\"(R=0.000000,G=0.000000,B=0.000000,A=1.000000)\">This is some regular text!</>\n<TextStyle FontFamily=\"Roboto\" FontSize=\"11\" FontStyle=\"Italic\" FontColor=\"(R=0.000000,G=0.000000,B=0.000000,A=1.000000)\">This is some italic text!</>\n<TextStyle FontFamily=\"Roboto\" FontSize=\"11\" FontStyle=\"Bold\" FontColor=\"(R=0.000000,G=0.000000,B=0.000000,A=1.000000)\">This is some bold text!</>\n<TextStyle FontFamily=\"Roboto\" FontSize=\"11\" FontStyle=\"BoldItalic\" FontColor=\"(R=0.000000,G=0.000000,B=0.000000,A=1.000000)\">This is some bold-italic text!</>\n<TextStyle FontFamily=\"Roboto\" FontSize=\"26\" FontStyle=\"BoldItalic\" FontColor=\"(R=1.000000,G=0.457315,B=0.164297,A=1.000000)\">This </><TextStyle FontFamily=\"Roboto\" FontSize=\"21\" FontStyle=\"Italic\" FontColor=\"(R=0.331120,G=0.348415,B=1.000000,A=1.000000)\">is </><TextStyle FontFamily=\"Roboto\" FontSize=\"21\" FontStyle=\"Bold\" FontColor=\"(R=1.000000,G=0.195252,B=0.137910,A=1.000000)\">some </><TextStyle FontFamily=\"Roboto\" FontSize=\"18\" FontStyle=\"BoldItalic\" FontColor=\"(R=1.000000,G=0.167594,B=0.566043,A=1.000000)\">crazy </><TextStyle FontFamily=\"Roboto\" FontSize=\"14\" FontStyle=\"Italic\" FontColor=\"(R=0.175489,G=0.695000,B=0.169137,A=1.000000)\">text!</>\n<TextStyle FontFamily=\"Roboto\" FontSize=\"11\" FontStyle=\"Regular\" FontColor=\"(R=0.000000,G=0.000000,B=0.000000,A=1.000000)\">This is a hyperlink: </><a id=\"browser\" href=\"https://www.unrealengine.com/\" style=\"RichText.Editor.Hyperlink\">Unreal Engine</><TextStyle FontFamily=\"Roboto\" FontSize=\"11\" FontStyle=\"Regular\" FontColor=\"(R=0.000000,G=0.000000,B=0.000000,A=1.000000)\"></>"
                            );
  FText::operator=(&this->RichEditableText,pFVar5);
  FText::~FText((FText *)&local_f680.CompositeFont);
  pIStack_10a28 = FTestStyle::Get();
  pTStack_10b78 = &local_eb20;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&pTStack_10b78->AllocatorInstance);
  pTStack_10b78->ArrayNum = 0;
  iVar3 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&pTStack_10b78->AllocatorInstance);
  pTStack_10b78->ArrayMax = iVar3;
  pTStack_10a30 = pTStack_10b78;
  pTStack_10a20 = pTStack_10b78;
  FRichTextLayoutMarshaller::Create(&TStack_10ad8,pTStack_10b78,pIStack_10a28);
  plStack_10a18 = &this->_padding_;
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)plStack_10a18,&local_f658);
  pTStack_10a10 =
       TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
       ::CreateStatic<TSharedRef<SWidget,1>_>
                 (&local_ef20,RichTextHelper::OnBrowserLinkClicked,pTVar6);
  pTStack_10a08 = &this->OnHyperlinkClicked;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTStack_10a08,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTStack_10a10);
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&local_ef20);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f658);
  pFStack_109e0 = TSharedRef<FRichTextLayoutMarshaller,1>::operator->(&TStack_10ad8);
  pTVar50 = &local_efd0;
  for (lVar45 = 0x18; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)pTVar50 = 0;
    pTVar50 = (TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
               *)&pTVar50->field_0x1;
  }
  pTStack_109f8 =
       TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
       ::
       TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                 (&local_efd0);
  pTVar51 = &local_efe8;
  for (lVar45 = 0x18; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)pTVar51 = 0;
    pTVar51 = (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
               *)&pTVar51->field_0x1;
  }
  pTStack_109f0 =
       TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
       ::
       TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                 (&local_efe8);
  pFStack_10a00 = &local_eb10;
  pFStack_109e8 = ::FString::FString(pFStack_10a00,L"browser");
  pTVar7 = FHyperlinkDecorator::Create
                     (&local_f648,pFStack_109e8,&this->OnHyperlinkClicked,pTStack_109f0,
                      pTStack_109f8);
  TSharedRef<ITextDecorator,1>::TSharedRef<ITextDecorator,1><FHyperlinkDecorator>
            (&local_fa90,pTVar7);
  FRichTextLayoutMarshaller::AppendInlineDecorator(pFStack_109e0,&local_fa90);
  TSharedRef<ITextDecorator,1>::~TSharedRef<ITextDecorator,1>(&local_fa90);
  TSharedRef<FHyperlinkDecorator,1>::~TSharedRef<FHyperlinkDecorator,1>(&local_f648);
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&local_efe8);
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&local_efd0);
  pFStack_109d8 = TSharedRef<FRichTextLayoutMarshaller,1>::operator->(&TStack_10ad8);
  pTVar8 = FTextStyleDecoratorTest::Create(&local_f638,&this->TextStyles);
  TSharedRef<ITextDecorator,1>::TSharedRef<ITextDecorator,1><FTextStyleDecoratorTest>
            (&local_fa80,pTVar8);
  FRichTextLayoutMarshaller::AppendInlineDecorator(pFStack_109d8,&local_fa80);
  TSharedRef<ITextDecorator,1>::~TSharedRef<ITextDecorator,1>(&local_fa80);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_f638.SharedReferenceCount);
  pFVar9 = FRichTextSyntaxHighlighterTextLayoutMarshaller::FSyntaxTextStyle::FSyntaxTextStyle
                     (&local_e78);
  pTVar10 = FRichTextSyntaxHighlighterTextLayoutMarshaller::Create(&local_f628,pFVar9);
  TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::
  TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1><FRichTextSyntaxHighlighterTextLayoutMarshaller>
            (&local_fa70,pTVar10);
  TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::operator=
            (&this->SyntaxHighlighterMarshaller,&local_fa70);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_fa70.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_f628.SharedReferenceCount);
  FRichTextSyntaxHighlighterTextLayoutMarshaller::FSyntaxTextStyle::~FSyntaxTextStyle(&local_e78);
  local_fb70 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_fb80 = SScrollBox::FArguments::FArguments(&local_bf40);
  local_fb90 = SScrollBox::Slot(&local_cfa0);
  pFStack_109a0 = SBorder::FArguments::FArguments(&local_74f8);
  pTStack_109b0 = &local_e7a0;
  pIStack_10af8 = FTestStyle::Get();
  pcStack_109c0 = *(code **)((longlong)*pIStack_10af8 + 0x50);
  pFStack_109d0 = &local_f6e0;
  pFVar4 = ::FName::FName(pFStack_109d0,"RichText.Background");
  FStack_109c8 = *pFVar4;
  pFStack_109b8 = (FSlateBrush *)(*pcStack_109c0)(pIStack_10af8,FStack_109c8,0,0);
  pTStack_109a8 =
       TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                 (pTStack_109b0,&pFStack_109b8);
  local_fba0 = SBorder::FArguments::BorderImage(pFStack_109a0,pTStack_109a8);
  pFStack_108a0 = SVerticalBox::FArguments::FArguments(&local_c618);
  pFVar11 = SVerticalBox::Slot(&local_d088);
  pFVar11 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  puStack_10998 = &pFVar11->field_0x18;
  pFStack_108b0 =
       TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                 ((FSlotArgumentsMixin *)puStack_10998,0.0);
  pFStack_10960 = SBorder::FArguments::FArguments(&local_78d8);
  pTStack_10970 = &local_e778;
  pIStack_10af0 = FTestStyle::Get();
  pcStack_10980 = *(code **)((longlong)*pIStack_10af0 + 0x50);
  pFStack_10990 = &local_f6d8;
  pFVar4 = ::FName::FName(pFStack_10990,"RichText.Tagline.Background");
  FStack_10988 = *pFVar4;
  pFStack_10978 = (FSlateBrush *)(*pcStack_10980)(pIStack_10af0,FStack_10988,0,0);
  pTStack_10968 =
       TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                 (pTStack_10970,&pFStack_10978);
  pFStack_10958 = SBorder::FArguments::BorderImage(pFStack_10960,pTStack_10968);
  pFStack_108c0 = SBorder::FArguments::Padding(pFStack_10958,0.0);
  pFStack_10940 = SRichTextBlock::FArguments::FArguments(&local_6d18);
  pTStack_10950 = &local_e638;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_eff8,L"STestSuite",L"RichTextEdit.Header01",
                      L"This WYSIWYG editor has been created to show the flexibility of Slate\'s <RichText.Tagline.TextHighlight>SMultiLineEditableText</>"
                     );
  pTStack_10948 = TAttribute<FText>::TAttribute<FText>(pTStack_10950,pFVar5);
  pFStack_10928 = SRichTextBlock::FArguments::Text(pFStack_10940,pTStack_10948);
  ::FName::FName(&FStack_10938,"RichText.Tagline.Text");
  pIStack_10930 = FTestStyle::Get();
  pFStack_10918 =
       SRichTextBlock::FArguments::TextStyle(pFStack_10928,pIStack_10930,&FStack_10938,(char *)0x0);
  pIStack_10920 = FTestStyle::Get();
  pFStack_10900 = SRichTextBlock::FArguments::DecoratorStyleSet(pFStack_10918,pIStack_10920);
  pTStack_10910 = &local_e960;
  bStack_10bc8 = true;
  pTStack_10908 = TAttribute<bool>::TAttribute<bool>(pTStack_10910,&bStack_10bc8);
  pFStack_108e8 = SRichTextBlock::FArguments::AutoWrapText(pFStack_10900,pTStack_10908);
  puStack_108f8 = local_e940;
  TStack_10b3c = Center;
  pTStack_108f0 =
       TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                 (puStack_108f8,&TStack_10b3c);
  pFStack_108d0 = SRichTextBlock::FArguments::Justification(pFStack_108e8,pTStack_108f0);
  pTStack_108e0 = &local_e608;
  pFVar12 = FMargin::FMargin(&local_eb00,__real_41a00000);
  pTStack_108d8 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_108e0,pFVar12);
  pFStack_108c8 = SRichTextBlock::FArguments::Margin(pFStack_108d0,pTStack_108d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bc7);
  pTVar13 = MakeTDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ef50,"SRichTextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xc80,&TStack_10bc7);
  pTVar14 = TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_f008,pFStack_108c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextBlock>(&local_f850,pTVar14);
  pFStack_108b8 = SBorder::FArguments::operator[](pFStack_108c0,&local_f850);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bc6);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_ef68,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xc7c,&TStack_10bc6);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f018,pFStack_108b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_faa0,pTVar16);
  pFStack_108a8 =
       TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_108b0,&local_faa0);
  pFStack_10808 = SVerticalBox::FArguments::operator+(pFStack_108a0,pFStack_108a8);
  pFVar11 = SVerticalBox::Slot(&local_d170);
  pFVar11 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  puStack_10898 = &pFVar11->field_0x18;
  pFStack_10818 =
       TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                 ((FSlotArgumentsMixin *)puStack_10898,0.0);
  pFStack_10880 = SRichTextBlock::FArguments::FArguments(&local_7118);
  pTStack_10890 = &local_e5d8;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_f028,L"STestSuite",L"RichTextEdit.HowItWorks",
                      L"<RichText.TextHighlight>SMultiLineEditableText</> utilizes the power of text marshallers to control how the source text is displayed, and the two editors below are demonstrating the <RichText.TextHighlight>FRichTextLayoutMarshaller</> and <RichText.TextHighlight>FRichTextSyntaxHighlighterTextLayoutMarshaller</> implementations.\n\nYou can use the toolbar to control the style of the text in the rich-text editor, or you can directly edit the source text (demonstrating live injection of style information) to update the rich-text view."
                     );
  pTStack_10888 = TAttribute<FText>::TAttribute<FText>(pTStack_10890,pFVar5);
  pFStack_10868 = SRichTextBlock::FArguments::Text(pFStack_10880,pTStack_10888);
  ::FName::FName(&FStack_10878,"RichText.Text");
  pIStack_10870 = FTestStyle::Get();
  pFStack_10858 =
       SRichTextBlock::FArguments::TextStyle(pFStack_10868,pIStack_10870,&FStack_10878,(char *)0x0);
  pIStack_10860 = FTestStyle::Get();
  pFStack_10840 = SRichTextBlock::FArguments::DecoratorStyleSet(pFStack_10858,pIStack_10860);
  pTStack_10850 = &local_e920;
  bStack_10bc5 = true;
  pTStack_10848 = TAttribute<bool>::TAttribute<bool>(pTStack_10850,&bStack_10bc5);
  pFStack_10828 = SRichTextBlock::FArguments::AutoWrapText(pFStack_10840,pTStack_10848);
  pTStack_10838 = &local_e5a8;
  pFVar12 = FMargin::FMargin(&local_e970,__real_42200000,__real_41a00000);
  pTStack_10830 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10838,pFVar12);
  pFStack_10820 = SRichTextBlock::FArguments::Margin(pFStack_10828,pTStack_10830);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bc4);
  pTVar13 = MakeTDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ef80,"SRichTextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xc8f,&TStack_10bc4);
  pTVar14 = TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_f038,pFStack_10820);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextBlock>(&local_fab0,pTVar14);
  pFStack_10810 =
       TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10818,&local_fab0);
  local_fe38 = SVerticalBox::FArguments::operator+(pFStack_10808,pFStack_10810);
  pFVar11 = SVerticalBox::Slot(&local_d258);
  pFVar11 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  pFStack_107f0 = (FSlotArgumentsMixin *)&pFVar11->field_0x18;
  pTStack_10800 = &local_e578;
  pFVar12 = FMargin::FMargin(&local_e980,__real_41c80000,0.0);
  pTStack_107f8 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10800,pFVar12);
  local_fe48 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (pFStack_107f0,pTStack_107f8);
  pFStack_107e8 = SBorder::FArguments::FArguments(&local_7cb8);
  pFStack_107b0 = SBorder::FArguments::Padding(pFStack_107e8,__real_40a00000);
  pTStack_107c0 = &local_e750;
  pIStack_10ae8 = FCoreStyle::Get();
  pcStack_107d0 = *(code **)((longlong)*pIStack_10ae8 + 0x50);
  pFStack_107e0 = &local_f6d0;
  pFVar4 = ::FName::FName(pFStack_107e0,"BoxShadow");
  FStack_107d8 = *pFVar4;
  pFStack_107c8 = (FSlateBrush *)(*pcStack_107d0)(pIStack_10ae8,FStack_107d8,0);
  pTStack_107b8 =
       TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                 (pTStack_107c0,&pFStack_107c8);
  local_fe58 = SBorder::FArguments::BorderImage(pFStack_107b0,pTStack_107b8);
  pFStack_10778 = SBorder::FArguments::FArguments(&local_8098);
  pTStack_10788 = &local_e728;
  pIStack_10ae0 = FTestStyle::Get();
  pcStack_10798 = *(code **)((longlong)*pIStack_10ae0 + 0x50);
  pFStack_107a8 = &local_f6c8;
  pFVar4 = ::FName::FName(pFStack_107a8,"RichText.Interactive.Details.Background");
  FStack_107a0 = *pFVar4;
  pFStack_10790 = (FSlateBrush *)(*pcStack_10798)(pIStack_10ae0,FStack_107a0,0);
  pTStack_10780 =
       TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                 (pTStack_10788,&pFStack_10790);
  pFStack_10760 = SBorder::FArguments::BorderImage(pFStack_10778,pTStack_10780);
  pTStack_10770 = &local_e548;
  pFVar12 = FMargin::FMargin(&local_e990,__real_40800000);
  pTStack_10768 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10770,pFVar12);
  local_fe68 = SBorder::FArguments::Padding(pFStack_10760,pTStack_10768);
  local_ff80 = SVerticalBox::FArguments::FArguments(&local_c820);
  pFVar11 = SVerticalBox::Slot(&local_d998);
  pFVar11 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  pFStack_10748 = (FSlotArgumentsMixin *)&pFVar11->field_0x18;
  pTStack_10758 = &local_e518;
  pFVar12 = FMargin::FMargin(&local_ead0,0.0,0.0,0.0,__real_4010000000000000);
  pTStack_10750 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10758,pFVar12);
  local_ff90 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (pFStack_10748,pTStack_10750);
  pFStack_10710 = SBorder::FArguments::FArguments(&local_8478);
  pTStack_10720 = &local_e700;
  pIStack_10b28 = FTestStyle::Get();
  pcStack_10730 = *(code **)((longlong)*pIStack_10b28 + 0x50);
  pFStack_10740 = &local_f6c0;
  pFVar4 = ::FName::FName(pFStack_10740,"RichText.RoundedBackground");
  FStack_10738 = *pFVar4;
  pFStack_10728 = (FSlateBrush *)(*pcStack_10730)(pIStack_10b28,FStack_10738,0);
  pTStack_10718 =
       TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                 (pTStack_10720,&pFStack_10728);
  pFStack_106f8 = SBorder::FArguments::BorderImage(pFStack_10710,pTStack_10718);
  pTStack_10708 = &local_e4e8;
  pFVar12 = FMargin::FMargin(&local_eaf0,__real_40800000);
  pTStack_10700 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10708,pFVar12);
  local_ffa0 = SBorder::FArguments::Padding(pFStack_106f8,pTStack_10700);
  pFStack_10650 = SHorizontalBox::FArguments::FArguments(&local_ca28);
  pFVar17 = SHorizontalBox::Slot(&local_d340);
  pFStack_10660 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar17);
  pFStack_106e0 =
       SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments(&local_9f18);
  ::FName::FName(&FStack_106f0,"RichText.Toolbar.ComboBox");
  pIStack_106e8 = FTestStyle::Get();
  pFStack_106d8 =
       SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::ComboBoxStyle
                 (pFStack_106e0,pIStack_106e8,&FStack_106f0,(char *)0x0);
  pFStack_106d0 =
       SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::OptionsSource
                 (pFStack_106d8,&(this->TextStyles).AvailableFontFamilies);
  local_fa60 = OnActiveFontFamilyChanged;
  local_fa58 = 0;
  ppcVar47 = &local_fa60;
  puVar48 = local_f618;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f618;
  ppVar52 = &local_f608;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar52 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar52 = (pmf_3b51c06c *)&ppVar52->field_0x1;
  }
  pFStack_106c8 =
       SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::
       OnSelectionChanged<SRichTextEditTest>(pFStack_106d0,this,&local_f608);
  local_fa50 = GenerateFontFamilyComboEntry;
  local_fa48 = 0;
  ppcVar47 = &local_fa50;
  puVar48 = local_f5f8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f5f8;
  ppVar53 = &local_f5e8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar53 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar53 = (pmf_de41996d *)&ppVar53->field_0x1;
  }
  pFStack_106b0 =
       SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::
       OnGenerateWidget<SRichTextEditTest>(pFStack_106c8,this,&local_f5e8);
  pTStack_106c0 = &local_eae0;
  pTStack_106b8 =
       TSharedPtr<FTextStyles::FFontFamily,1>::TSharedPtr<FTextStyles::FFontFamily,1>
                 (pTStack_106c0,&this->ActiveFontFamily);
  pFStack_10670 =
       SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::InitiallySelectedItem
                 (pFStack_106b0,pTStack_106b8);
  pFStack_10698 = SBox::FArguments::FArguments(&local_a5c0);
  pTStack_106a8 = &local_e4b8;
  pFVar12 = FMargin::FMargin(&local_eac0,0.0,0.0,__real_4000000000000000,0.0);
  pTStack_106a0 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_106a8,pFVar12);
  pFStack_10680 = SBox::FArguments::Padding(pFStack_10698,pTStack_106a0);
  pFStack_10690 = STextBlock::FArguments::FArguments(&local_3930);
  local_fa40 = GetActiveFontFamilyName;
  local_fa38 = 0;
  ppcVar47 = &local_fa40;
  puVar48 = local_f5d8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f5d8;
  ppVar60 = &local_f5c8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar60 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar60 = (pmf_f4cef8e6 *)&ppVar60->field_0x1;
  }
  pFStack_10688 = STextBlock::FArguments::Text<SRichTextEditTest>(pFStack_10690,this,&local_f5c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bc3);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ef98,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcbe,&TStack_10bc3);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f048,pFStack_10688);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_fac0,pTVar19);
  pFStack_10678 = SBox::FArguments::operator[](pFStack_10680,&local_fac0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bc2);
  pTVar20 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_eb48,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcbb,&TStack_10bc2);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar20,&local_f058,pFStack_10678);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_fad0,pTVar21);
  pFStack_10668 =
       SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::operator[]
                 (pFStack_10670,&local_fad0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bc1);
  this_00 = MakeTDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_eb60,"SComboBox<TSharedPtr<FTextStyles::FFontFamily>>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcb4,&TStack_10bc1);
  pTVar22 = TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(this_00,&local_f068,pFStack_10668);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>_>
            (&local_fae0,pTVar22);
  pFStack_10658 =
       TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10660,&local_fae0);
  pFStack_105f8 = SHorizontalBox::FArguments::operator+(pFStack_10650,pFStack_10658);
  pFVar17 = SHorizontalBox::Slot(&local_d428);
  pFStack_10608 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar17);
  pFStack_10638 = SBox::FArguments::FArguments(&local_a900);
  pTStack_10648 = &local_e900;
  aiStack_10b70[0] = 0x18;
  pTStack_10640 =
       TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(pTStack_10648,aiStack_10b70);
  pFStack_10618 = SBox::FArguments::MinDesiredWidth(pFStack_10638,pTStack_10640);
  pFStack_10630 = SNumericEntryBox<unsigned_short>::FArguments::FArguments(&local_2658);
  local_fa30 = GetFontSize;
  local_fa28 = 0;
  ppcVar47 = &local_fa30;
  puVar48 = local_f5b8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f5b8;
  ppVar54 = &local_f5a8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar54 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar54 = (pmf_1a3cded7 *)&ppVar54->field_0x1;
  }
  pFStack_10628 =
       SNumericEntryBox<unsigned_short>::FArguments::Value<SRichTextEditTest>
                 (pFStack_10630,this,&local_f5a8);
  local_fa20 = SetFontSize;
  local_fa18 = 0;
  ppcVar47 = &local_fa20;
  puVar48 = local_f598;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f598;
  ppVar55 = &local_f588;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar55 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar55 = (pmf_17d67a20 *)&ppVar55->field_0x1;
  }
  pFStack_10620 =
       SNumericEntryBox<unsigned_short>::FArguments::OnValueCommitted<SRichTextEditTest>
                 (pFStack_10628,this,&local_f588);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bc0);
  this_01 = MakeTDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
                      (&local_eb78,"SNumericEntryBox<uint16>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcca,&TStack_10bc0);
  pTVar23 = TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_f078,pFStack_10620);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNumericEntryBox<unsigned_short>_>
            (&local_faf0,pTVar23);
  pFStack_10610 = SBox::FArguments::operator[](pFStack_10618,&local_faf0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bbf);
  pTVar20 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_eb90,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcc7,&TStack_10bbf);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar20,&local_f088,pFStack_10610);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_fb00,pTVar21);
  pFStack_10600 =
       TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10608,&local_fb00);
  pFStack_10520 = SHorizontalBox::FArguments::operator+(pFStack_105f8,pFStack_10600);
  pFVar17 = SHorizontalBox::Slot(&local_d510);
  pFVar17 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar17);
  pFStack_105e0 = (FSlotArgumentsMixin *)&pFVar17->field_0x18;
  pTStack_105f0 = &local_e488;
  pFVar12 = FMargin::FMargin(&local_eab0,__real_4010000000000000,0.0,0.0,0.0);
  pTStack_105e8 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_105f0,pFVar12);
  pFStack_10530 =
       TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                 (pFStack_105e0,pTStack_105e8);
  pFStack_105c8 = SCheckBox::FArguments::FArguments(&local_8858);
  ::FName::FName(&FStack_105d8,"RichText.Toolbar.ToggleButtonCheckbox");
  pIStack_105d0 = FTestStyle::Get();
  pFStack_105c0 =
       SCheckBox::FArguments::Style(pFStack_105c8,pIStack_105d0,&FStack_105d8,(char *)0x0);
  local_fa10 = IsFontStyleBold;
  local_fa08 = 0;
  ppcVar47 = &local_fa10;
  puVar48 = local_f578;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f578;
  ppVar63 = &local_f568;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar63 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar63 = (pmf_bb09059b *)&ppVar63->field_0x1;
  }
  pFStack_105b8 =
       SCheckBox::FArguments::IsChecked<SRichTextEditTest>(pFStack_105c0,this,&local_f568);
  local_fa00 = OnFontStyleBoldChanged;
  local_f9f8 = 0;
  ppcVar47 = &local_fa00;
  puVar48 = local_f558;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f558;
  ppVar64 = &local_f548;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar64 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar64 = (pmf_abb7684b *)&ppVar64->field_0x1;
  }
  pFStack_10540 =
       SCheckBox::FArguments::OnCheckStateChanged<SRichTextEditTest>(pFStack_105b8,this,&local_f548)
  ;
  pFStack_105a0 = SBox::FArguments::FArguments(&local_ac40);
  pTStack_105b0 = &local_e8e0;
  aiStack_10b70[1] = 0x18;
  pTStack_105a8 =
       TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(pTStack_105b0,aiStack_10b70 + 1);
  pFStack_10598 = SBox::FArguments::WidthOverride(pFStack_105a0,pTStack_105a8);
  pFStack_10590 = SBox::FArguments::HAlign(pFStack_10598,HAlign_Center);
  pFStack_10550 = SBox::FArguments::VAlign(pFStack_10590,VAlign_Center);
  pFStack_10578 = STextBlock::FArguments::FArguments(&local_3e88);
  ::FName::FName(&FStack_10588,"RichText.Toolbar.BoldText");
  pIStack_10580 = FTestStyle::Get();
  pFStack_10560 =
       STextBlock::FArguments::TextStyle(pFStack_10578,pIStack_10580,&FStack_10588,(char *)0x0);
  pTStack_10570 = &local_e458;
  pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_f098,L"STestSuite",L"BoldLabel",L"B");
  pTStack_10568 = TAttribute<FText>::TAttribute<FText>(pTStack_10570,pFVar5);
  pFStack_10558 = STextBlock::FArguments::Text(pFStack_10560,pTStack_10568);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bbe);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_eba8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcde,&TStack_10bbe);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f0a8,pFStack_10558);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_fb10,pTVar19);
  pFStack_10548 = SBox::FArguments::operator[](pFStack_10550,&local_fb10);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bbd);
  pTVar20 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_ebc0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcd9,&TStack_10bbd);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar20,&local_f0b8,pFStack_10548);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_fb20,pTVar21);
  pFStack_10538 = SCheckBox::FArguments::operator[](pFStack_10540,&local_fb20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bbc);
  pTVar24 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_ebd8,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcd4,&TStack_10bbc);
  pTVar25 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_f0c8,pFStack_10538);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_fb30,pTVar25);
  pFStack_10528 =
       TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10530,&local_fb30);
  pFStack_10460 = SHorizontalBox::FArguments::operator+(pFStack_10520,pFStack_10528);
  pFVar17 = SHorizontalBox::Slot(&local_d5f8);
  pFStack_10470 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar17);
  pFStack_10508 = SCheckBox::FArguments::FArguments(&local_8c38);
  ::FName::FName(&FStack_10518,"RichText.Toolbar.ToggleButtonCheckbox");
  pIStack_10510 = FTestStyle::Get();
  pFStack_10500 =
       SCheckBox::FArguments::Style(pFStack_10508,pIStack_10510,&FStack_10518,(char *)0x0);
  local_f9f0 = IsFontStyleItalic;
  local_f9e8 = 0;
  ppcVar47 = &local_f9f0;
  puVar48 = local_f538;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f538;
  ppVar63 = &local_f528;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar63 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar63 = (pmf_bb09059b *)&ppVar63->field_0x1;
  }
  pFStack_104f8 =
       SCheckBox::FArguments::IsChecked<SRichTextEditTest>(pFStack_10500,this,&local_f528);
  local_f9e0 = OnFontStyleItalicChanged;
  local_f9d8 = 0;
  ppcVar47 = &local_f9e0;
  puVar48 = local_f518;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f518;
  ppVar64 = &local_f508;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar64 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar64 = (pmf_abb7684b *)&ppVar64->field_0x1;
  }
  pFStack_10480 =
       SCheckBox::FArguments::OnCheckStateChanged<SRichTextEditTest>(pFStack_104f8,this,&local_f508)
  ;
  pFStack_104e0 = SBox::FArguments::FArguments(&local_af80);
  pTStack_104f0 = &local_e8c0;
  aiStack_10b70[2] = 0x18;
  pTStack_104e8 =
       TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(pTStack_104f0,aiStack_10b70 + 2);
  pFStack_104d8 = SBox::FArguments::WidthOverride(pFStack_104e0,pTStack_104e8);
  pFStack_104d0 = SBox::FArguments::HAlign(pFStack_104d8,HAlign_Center);
  pFStack_10490 = SBox::FArguments::VAlign(pFStack_104d0,VAlign_Center);
  pFStack_104b8 = STextBlock::FArguments::FArguments(&local_43e0);
  ::FName::FName(&FStack_104c8,"RichText.Toolbar.ItalicText");
  pIStack_104c0 = FTestStyle::Get();
  pFStack_104a0 =
       STextBlock::FArguments::TextStyle(pFStack_104b8,pIStack_104c0,&FStack_104c8,(char *)0x0);
  pTStack_104b0 = &local_e428;
  pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_f0d8,L"STestSuite",L"ItalicLabel",L"I");
  pTStack_104a8 = TAttribute<FText>::TAttribute<FText>(pTStack_104b0,pFVar5);
  pFStack_10498 = STextBlock::FArguments::Text(pFStack_104a0,pTStack_104a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bbb);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ebf0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcf2,&TStack_10bbb);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f0e8,pFStack_10498);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_fb40,pTVar19);
  pFStack_10488 = SBox::FArguments::operator[](pFStack_10490,&local_fb40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bba);
  pTVar20 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_ec08,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xced,&TStack_10bba);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar20,&local_f0f8,pFStack_10488);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_fb50,pTVar21);
  pFStack_10478 = SCheckBox::FArguments::operator[](pFStack_10480,&local_fb50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb9);
  pTVar24 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_ec20,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xce8,&TStack_10bb9);
  pTVar25 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_f108,pFStack_10478);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_f6f0,pTVar25);
  pFStack_10468 =
       TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10470,&local_f6f0);
  pFStack_10328 = SHorizontalBox::FArguments::operator+(pFStack_10460,pFStack_10468);
  pFVar17 = SHorizontalBox::Slot(&local_d6e0);
  pFStack_10448 = (FSlotArgumentsMixin *)&pFVar17->field_0x18;
  pTStack_10458 = &local_e3f8;
  pFVar12 = FMargin::FMargin(&local_eaa0,__real_4010000000000000,0.0,0.0,0.0);
  pTStack_10450 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10458,pFVar12);
  pFVar17 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      (pFStack_10448,pTStack_10450);
  pFStack_10338 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar17);
  pFStack_10430 = SButton::FArguments::FArguments(&local_63d8);
  ::FName::FName(&FStack_10440,"RichText.Toolbar.Button");
  pIStack_10438 = FTestStyle::Get();
  pFStack_10428 =
       SButton::FArguments::ButtonStyle(pFStack_10430,pIStack_10438,&FStack_10440,(char *)0x0);
  local_f9d0 = OpenFontColorPicker;
  local_f9c8 = 0;
  ppcVar47 = &local_f9d0;
  puVar48 = local_f4f8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f4f8;
  ppVar58 = &local_f4e8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar58 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar58 = (pmf_869368bc *)&ppVar58->field_0x1;
  }
  pFStack_10348 = SButton::FArguments::OnClicked<SRichTextEditTest>(pFStack_10428,this,&local_f4e8);
  pFStack_103b0 = SOverlay::FArguments::FArguments(&local_cc30);
  pFVar26 = SOverlay::Slot(&local_dfa8,0);
  plStack_10410 = &pFVar26->_padding_;
  pTStack_10420 = &local_e3c8;
  pFVar12 = FMargin::FMargin(&local_ea90,0.0,0.0,0.0,__real_4010000000000000);
  pTStack_10418 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10420,pFVar12);
  pFVar26 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)plStack_10410,pTStack_10418);
  plStack_10408 = &pFVar26->_padding_;
  pFVar26 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)plStack_10408,HAlign_Center);
  plStack_10400 = &pFVar26->_padding_;
  pFStack_103c0 =
       TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                 ((FSlotArgumentsMixin *)plStack_10400,VAlign_Bottom);
  pFStack_103e8 = STextBlock::FArguments::FArguments(&local_4938);
  ::FName::FName(&FStack_103f8,"RichText.Toolbar.BoldText");
  pIStack_103f0 = FTestStyle::Get();
  pFStack_103d0 =
       STextBlock::FArguments::TextStyle(pFStack_103e8,pIStack_103f0,&FStack_103f8,(char *)0x0);
  pTStack_103e0 = &local_e398;
  pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_f118,L"STestSuite",L"ColorLabel",L"A");
  pTStack_103d8 = TAttribute<FText>::TAttribute<FText>(pTStack_103e0,pFVar5);
  pFStack_103c8 = STextBlock::FArguments::Text(pFStack_103d0,pTStack_103d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb8);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ec38,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd08,&TStack_10bb8);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f128,pFStack_103c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_f700,pTVar19);
  pFStack_103b8 =
       TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_103c0,&local_f700);
  pFStack_10358 = SOverlay::FArguments::operator+(pFStack_103b0,pFStack_103b8);
  pFVar26 = SOverlay::Slot(&local_e008,0);
  plStack_103a8 = &pFVar26->_padding_;
  pFVar26 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)plStack_103a8,HAlign_Center);
  plStack_103a0 = &pFVar26->_padding_;
  pFStack_10368 =
       TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                 ((FSlotArgumentsMixin *)plStack_103a0,VAlign_Bottom);
  pFStack_10398 = SColorBlock::FArguments::FArguments(&local_a278);
  local_f9c0 = GetFontColor;
  local_f9b8 = 0;
  ppcVar47 = &local_f9c0;
  puVar48 = local_f4d8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f4d8;
  ppVar56 = &local_f4c8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar56 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar56 = (pmf_ee6c244e *)&ppVar56->field_0x1;
  }
  pFStack_10378 = SColorBlock::FArguments::Color<SRichTextEditTest>(pFStack_10398,this,&local_f4c8);
  pTStack_10388 = &local_e368;
  local_f9b0._s_0.X = __real_4034000000000000;
  local_f9b0._s_0.Y = __real_4018000000000000;
  pTStack_10390 = &local_f9b0;
  pTStack_10380 =
       TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                 (pTStack_10388,(TVector2<double> *)&pTStack_10390->_s_0);
  pFStack_10370 = SColorBlock::FArguments::Size(pFStack_10378,pTStack_10380);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb7);
  this_02 = MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ec50,"SColorBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd11,&TStack_10bb7);
  pTVar27 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_f138,pFStack_10370);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorBlock>(&local_f710,pTVar27);
  pFStack_10360 =
       TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10368,&local_f710);
  pFStack_10350 = SOverlay::FArguments::operator+(pFStack_10358,pFStack_10360);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb6);
  this_03 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_ec68,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd01,&TStack_10bb6);
  pTVar28 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_f148,pFStack_10350);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_f720,pTVar28);
  pFStack_10340 = SButton::FArguments::operator[](pFStack_10348,&local_f720);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb5);
  pTVar29 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_ec80,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcfd,&TStack_10bb5);
  pTVar30 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar29,&local_f158,pFStack_10340);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_f730,pTVar30);
  pFStack_10330 =
       TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10338,&local_f730);
  local_ffb0 = SHorizontalBox::FArguments::operator+(pFStack_10328,pFStack_10330);
  pFVar17 = SHorizontalBox::Slot(&local_d7c8);
  pFStack_10310 = (FSlotArgumentsMixin *)&pFVar17->field_0x18;
  pTStack_10320 = &local_e338;
  pFVar12 = FMargin::FMargin(&local_ea80,__real_4010000000000000,0.0,0.0,0.0);
  pTStack_10318 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10320,pFVar12);
  pFVar17 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      (pFStack_10310,pTStack_10318);
  local_ffc0 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar17);
  pFStack_102f8 = SComboButton::FArguments::FArguments(&local_bc78);
  ::FName::FName(&FStack_10308,"RichText.Toolbar.ComboButton");
  pIStack_10300 = FTestStyle::Get();
  pFStack_102f0 =
       SComboButton::FArguments::ComboButtonStyle
                 (pFStack_102f8,pIStack_10300,&FStack_10308,(char *)0x0);
  pFStack_102e8 = SComboButton::FArguments::HasDownArrow(pFStack_102f0,false);
  local_f9a0 = HandleHyperlinkComboOpened;
  local_f998 = 0;
  ppcVar47 = &local_f9a0;
  puVar48 = local_f4b8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f4b8;
  ppVar57 = &local_f4a8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar57 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar57 = (pmf_dc118204 *)&ppVar57->field_0x1;
  }
  pFStack_102e0 =
       SComboButton::FArguments::OnComboBoxOpened<SRichTextEditTest>(pFStack_102e8,this,&local_f4a8)
  ;
  pNStack_10260 = SComboButton::FArguments::ButtonContent(pFStack_102e0,&local_ea70);
  pFStack_102c8 = SBox::FArguments::FArguments(&local_b2c0);
  pTStack_102d8 = &local_e8a0;
  aiStack_10b70[3] = 0x14;
  pTStack_102d0 =
       TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(pTStack_102d8,aiStack_10b70 + 3);
  pFStack_102c0 = SBox::FArguments::WidthOverride(pFStack_102c8,pTStack_102d0);
  pFStack_102b8 = SBox::FArguments::HAlign(pFStack_102c0,HAlign_Center);
  pFStack_10270 = SBox::FArguments::VAlign(pFStack_102b8,VAlign_Center);
  pFStack_10280 = SImage::FArguments::FArguments(&local_c1e8);
  pTStack_10290 = &local_e6d8;
  pIStack_10b20 = FTestStyle::Get();
  pcStack_102a0 = *(code **)((longlong)*pIStack_10b20 + 0x50);
  pFStack_102b0 = &local_f6b8;
  pFVar4 = ::FName::FName(pFStack_102b0,"RichText.Toolbar.HyperlinkImage");
  FStack_102a8 = *pFVar4;
  pFStack_10298 = (FSlateBrush *)(*pcStack_102a0)(pIStack_10b20,FStack_102a8,0,0);
  pTStack_10288 =
       TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                 (pTStack_10290,&pFStack_10298);
  pFStack_10278 = SImage::FArguments::Image(pFStack_10280,pTStack_10288);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb4);
  this_04 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_ec98,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd27,&TStack_10bb4);
  pTVar31 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_f168,pFStack_10278);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_f740,pTVar31);
  pFStack_10268 = SBox::FArguments::operator[](pFStack_10270,&local_f740);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb3);
  pTVar20 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_ecb0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd22,&TStack_10bb3);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar20,&local_f178,pFStack_10268);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_f750,pTVar21);
  pFStack_10258 = NamedSlotProperty<SComboButton::FArguments>::operator[](pNStack_10260,&local_f750)
  ;
  local_ffd8 = SComboButton::FArguments::MenuContent(pFStack_10258,&local_ea60);
  pFStack_10250 = SGridPanel::FArguments::FArguments(&local_c410);
  fStack_10b60 = __real_3f800000;
  TAttribute<float>::TAttribute<float>(&local_efb8,&fStack_10b60);
  pFStack_101e0 = SGridPanel::FArguments::FillColumn(pFStack_10250,1,&local_efb8);
  pLVar32 = SGridPanel::Layer::Layer(local_fb68,0);
  pFVar33 = SGridPanel::Slot(&local_dce8,0,0,(Layer)pLVar32->TheLayer);
  plStack_10248 = &pFVar33->_padding_;
  pFVar33 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)plStack_10248,HAlign_Right);
  plStack_10230 = &pFVar33->_padding_;
  pTStack_10240 = &local_e308;
  pFVar12 = FMargin::FMargin(&local_ea50,__real_40000000);
  pTStack_10238 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10240,pFVar12);
  pFStack_101f0 =
       TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                 ((FSlotArgumentsMixin *)plStack_10230,pTStack_10238);
  pFStack_10218 = STextBlock::FArguments::FArguments(&local_4e90);
  ::FName::FName(&FStack_10228,"RichText.Toolbar.Text");
  pIStack_10220 = FTestStyle::Get();
  pFStack_10200 =
       STextBlock::FArguments::TextStyle(pFStack_10218,pIStack_10220,&FStack_10228,(char *)0x0);
  pTStack_10210 = &local_e2d8;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_f188,L"STestSuite",L"HyperlinkNameLabel",L"Name:");
  pTStack_10208 = TAttribute<FText>::TAttribute<FText>(pTStack_10210,pFVar5);
  pFStack_101f8 = STextBlock::FArguments::Text(pFStack_10200,pTStack_10208);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb2);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ecc8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd34,&TStack_10bb2);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f198,pFStack_101f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_f760,pTVar19);
  pFStack_101e8 =
       TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_101f0,&local_f760);
  pFStack_10178 = SGridPanel::FArguments::operator+(pFStack_101e0,pFStack_101e8);
  pLVar32 = SGridPanel::Layer::Layer(&LStack_10ac8,0);
  pFVar33 = SGridPanel::Slot(&local_dd80,1,0,(Layer)pLVar32->TheLayer);
  plStack_101c8 = &pFVar33->_padding_;
  pTStack_101d8 = &local_e2a8;
  pFVar12 = FMargin::FMargin(&local_ea40,__real_40000000);
  pTStack_101d0 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_101d8,pFVar12);
  pFStack_10188 =
       TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                 ((FSlotArgumentsMixin *)plStack_101c8,pTStack_101d0);
  pFStack_101b0 = SBox::FArguments::FArguments(&local_b600);
  pTStack_101c0 = &local_e880;
  aiStack_10b5c[0] = 300;
  pTStack_101b8 =
       TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(pTStack_101c0,aiStack_10b5c);
  pFStack_10198 = SBox::FArguments::WidthOverride(pFStack_101b0,pTStack_101b8);
  pFStack_101a0 = SEditableTextBox::FArguments::FArguments(&local_2d18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb1);
  pTStack_101a8 =
       MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                 (&local_ef38,"SEditableTextBox",
                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                  ,0xd3e,&TStack_10bb1);
  pTVar34 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::Expose<SEditableTextBox>
                      (pTStack_101a8,&this->HyperlinkNameTextBox);
  pTVar35 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar34,&local_f1a8,pFStack_101a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_f770,pTVar35);
  pFStack_10190 = SBox::FArguments::operator[](pFStack_10198,&local_f770);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bb0);
  pTVar20 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_ece0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd3b,&TStack_10bb0);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar20,&local_f1b8,pFStack_10190);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_f780,pTVar21);
  pFStack_10180 =
       TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10188,&local_f780);
  pFStack_10108 = SGridPanel::FArguments::operator+(pFStack_10178,pFStack_10180);
  pLVar32 = SGridPanel::Layer::Layer(&LStack_10ac4,0);
  pFVar33 = SGridPanel::Slot(&local_de18,0,1,(Layer)pLVar32->TheLayer);
  plStack_10170 = &pFVar33->_padding_;
  pFVar33 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)plStack_10170,HAlign_Right);
  plStack_10158 = &pFVar33->_padding_;
  pTStack_10168 = &local_e278;
  pFVar12 = FMargin::FMargin(&local_ea30,__real_40000000);
  pTStack_10160 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10168,pFVar12);
  pFStack_10118 =
       TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                 ((FSlotArgumentsMixin *)plStack_10158,pTStack_10160);
  pFStack_10140 = STextBlock::FArguments::FArguments(&local_53e8);
  ::FName::FName(&FStack_10150,"RichText.Toolbar.Text");
  pIStack_10148 = FTestStyle::Get();
  pFStack_10128 =
       STextBlock::FArguments::TextStyle(pFStack_10140,pIStack_10148,&FStack_10150,(char *)0x0);
  pTStack_10138 = &local_e248;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_f1c8,L"STestSuite",L"HyperlinkURLLabel",L"URL:");
  pTStack_10130 = TAttribute<FText>::TAttribute<FText>(pTStack_10138,pFVar5);
  pFStack_10120 = STextBlock::FArguments::Text(pFStack_10128,pTStack_10130);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10baf);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ecf8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd46,&TStack_10baf);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f1d8,pFStack_10120);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_f790,pTVar19);
  pFStack_10110 =
       TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_10118,&local_f790);
  pFStack_100a0 = SGridPanel::FArguments::operator+(pFStack_10108,pFStack_10110);
  pLVar32 = SGridPanel::Layer::Layer(&LStack_10ac0,0);
  pFVar33 = SGridPanel::Slot(&local_deb0,1,1,(Layer)pLVar32->TheLayer);
  plStack_100f0 = &pFVar33->_padding_;
  pTStack_10100 = &local_e218;
  pFVar12 = FMargin::FMargin(&local_ea20,__real_40000000);
  pTStack_100f8 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10100,pFVar12);
  pFStack_100b0 =
       TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                 ((FSlotArgumentsMixin *)plStack_100f0,pTStack_100f8);
  pFStack_100d8 = SBox::FArguments::FArguments(&local_b940);
  pTStack_100e8 = &local_e860;
  aiStack_10b5c[1] = 300;
  pTStack_100e0 =
       TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(pTStack_100e8,aiStack_10b5c + 1);
  pFStack_100c0 = SBox::FArguments::WidthOverride(pFStack_100d8,pTStack_100e0);
  pFStack_100c8 = SEditableTextBox::FArguments::FArguments(&local_33d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bae);
  pTStack_100d0 =
       MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                 (&local_ed10,"SEditableTextBox",
                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                  ,0xd50,&TStack_10bae);
  pTVar34 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::Expose<SEditableTextBox>
                      (pTStack_100d0,&this->HyperlinkURLTextBox);
  pTVar35 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar34,&local_f1e8,pFStack_100c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_f7a0,pTVar35);
  pFStack_100b8 = SBox::FArguments::operator[](pFStack_100c0,&local_f7a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bad);
  pTVar20 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_ed28,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd4d,&TStack_10bad);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar20,&local_f1f8,pFStack_100b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_f7b0,pTVar21);
  pFStack_100a8 =
       TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                 ((FSlotArguments *)pFStack_100b0,&local_f7b0);
  local_ffe8 = SGridPanel::FArguments::operator+(pFStack_100a0,pFStack_100a8);
  pLVar32 = SGridPanel::Layer::Layer(&LStack_10abc,0);
  pFVar33 = SGridPanel::Slot(&local_df48,0,2,(Layer)pLVar32->TheLayer);
  plStack_10098 = &pFVar33->_padding_;
  pFVar33 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)plStack_10098,HAlign_Right);
  plStack_10080 = &pFVar33->_padding_;
  pTStack_10090 = &local_e1e8;
  pFVar12 = FMargin::FMargin(&local_ea10,__real_40000000);
  pTStack_10088 = TAttribute<FMargin>::TAttribute<FMargin>(pTStack_10090,pFVar12);
  pFStack_10068 =
       TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                 ((FSlotArgumentsMixin *)plStack_10080,pTStack_10088);
  pTStack_10078 = &local_f6b0;
  iStack_10b44 = 2;
  TStack_10070 = (TOptional<int>)TOptional<int>::TOptional<int>(pTStack_10078,&iStack_10b44);
  local_fff8 = SGridPanel::FSlot::FSlotArguments::ColumnSpan(pFStack_10068,TStack_10070);
  pFStack_10050 = SButton::FArguments::FArguments(&local_6918);
  ::FName::FName(&FStack_10060,"RichText.Toolbar.Button");
  pIStack_10058 = FTestStyle::Get();
  pFStack_10048 =
       SButton::FArguments::ButtonStyle(pFStack_10050,pIStack_10058,&FStack_10060,(char *)0x0);
  local_f990 = HandleInsertHyperlinkClicked;
  local_f988 = 0;
  ppcVar47 = &local_f990;
  puVar48 = local_f498;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f498;
  ppVar58 = &local_f488;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar58 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar58 = (pmf_869368bc *)&ppVar58->field_0x1;
  }
  pFStack_10008 = SButton::FArguments::OnClicked<SRichTextEditTest>(pFStack_10048,this,&local_f488);
  pFStack_10030 = STextBlock::FArguments::FArguments(&local_5940);
  ::FName::FName(&FStack_10040,"RichText.Toolbar.Text");
  pIStack_10038 = FTestStyle::Get();
  pFStack_10018 =
       STextBlock::FArguments::TextStyle(pFStack_10030,pIStack_10038,&FStack_10040,(char *)0x0);
  pTStack_10028 = &local_e1b8;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_f208,L"STestSuite",L"HyperlinkInsertLabel",L"Insert Hyperlink");
  pTStack_10020 = TAttribute<FText>::TAttribute<FText>(pTStack_10028,pFVar5);
  pFStack_10010 = STextBlock::FArguments::Text(pFStack_10018,pTStack_10020);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bac);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ed40,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd5d,&TStack_10bac);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f218,pFStack_10010);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_f7c0,pTVar19);
  local_10000 = SButton::FArguments::operator[](pFStack_10008,&local_f7c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10bab);
  pTVar29 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_ed58,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd59,&TStack_10bab);
  pTVar30 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar29,&local_f228,local_10000);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_f7d0,pTVar30);
  local_fff0 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_fff8,&local_f7d0);
  local_ffe0 = SGridPanel::FArguments::operator+(local_ffe8,local_fff0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10baa);
  this_05 = MakeTDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
                      (&local_ed70,"SGridPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd2d,&TStack_10baa);
  pTVar36 = TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_f238,local_ffe0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanel>(&local_f7e0,pTVar36);
  local_ffc8 = NamedSlotProperty<SComboButton::FArguments>::operator[](local_ffd8,&local_f7e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10ba9);
  local_ffd0 = MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
                         (&local_ed88,"SComboButton",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0xd1c,&TStack_10ba9);
  this_06 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::Expose<SComboButton>
                      (local_ffd0,&this->HyperlinkComboButton);
  pTVar37 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_f248,local_ffc8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboButton>(&local_f7f0,pTVar37);
  local_ffb8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ffc0,&local_f7f0);
  local_ffa8 = SHorizontalBox::FArguments::operator+(local_ffb0,local_ffb8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10ba8);
  this_07 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_eda0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcaf,&TStack_10ba8);
  pTVar38 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_07,&local_f258,local_ffa8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_f800,pTVar38);
  local_ff98 = SBorder::FArguments::operator[](local_ffa0,&local_f800);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10ba7);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_edb8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xcab,&TStack_10ba7);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f268,local_ff98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_f810,pTVar16);
  local_ff88 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_ff90,&local_f810);
  local_fe78 = SVerticalBox::FArguments::operator+(local_ff80,local_ff88);
  pFVar11 = SVerticalBox::Slot(&local_d8b0);
  pFVar11 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  local_ff68 = (FSlotArgumentsMixin *)&pFVar11->field_0x18;
  local_ff78 = &local_e188;
  pFVar12 = FMargin::FMargin(&local_ea00,0.0,0.0,0.0,0.0);
  local_ff70 = TAttribute<FMargin>::TAttribute<FMargin>(local_ff78,pFVar12);
  local_fe88 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_ff68,local_ff70);
  local_ff38 = SMultiLineEditableTextBox::FArguments::FArguments(&local_16e0);
  local_ff48 = &local_ceb8;
  local_ff50 = FTestStyle::Get();
  local_ff60 = &local_f6a8;
  pFVar4 = ::FName::FName(local_ff60,"RichText.Editor.Text");
  local_ff58 = *pFVar4;
  pFVar39 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                      (local_ff50,local_ff58,(char *)0x0,(FTextBlockStyle *)0x0);
  local_ff40 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                         (local_ff48,&pFVar39->Font);
  local_ff30 = SMultiLineEditableTextBox::FArguments::Font(local_ff38,local_ff40);
  local_f980 = GetRichEditableText;
  local_f978 = 0;
  ppcVar47 = &local_f980;
  puVar48 = local_f478;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f478;
  ppVar60 = &local_f468;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar60 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar60 = (pmf_f4cef8e6 *)&ppVar60->field_0x1;
  }
  local_ff28 = SMultiLineEditableTextBox::FArguments::Text<SRichTextEditTest>
                         (local_ff30,this,&local_f468);
  local_f970 = HandleRichEditableTextChanged;
  local_f968 = 0;
  ppcVar47 = &local_f970;
  puVar48 = local_f458;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f458;
  ppVar61 = &local_f448;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar61 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar61 = (pmf_3b8787f2 *)&ppVar61->field_0x1;
  }
  local_ff20 = SMultiLineEditableTextBox::FArguments::OnTextChanged<SRichTextEditTest>
                         (local_ff28,this,&local_f448);
  local_f960 = HandleRichEditableTextCommitted;
  local_f958 = 0;
  ppcVar47 = &local_f960;
  puVar48 = local_f438;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f438;
  ppVar62 = &local_f428;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar62 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar62 = (pmf_f92091c4 *)&ppVar62->field_0x1;
  }
  local_ff18 = SMultiLineEditableTextBox::FArguments::OnTextCommitted<SRichTextEditTest>
                         (local_ff20,this,&local_f428);
  local_f950 = HandleRichEditableTextCursorMoved;
  local_f948 = 0;
  ppcVar47 = &local_f950;
  puVar48 = local_f418;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f418;
  ppVar59 = &local_f408;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar59 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar59 = (pmf_b9e212c2 *)&ppVar59->field_0x1;
  }
  local_ff00 = SMultiLineEditableTextBox::FArguments::OnCursorMoved<SRichTextEditTest>
                         (local_ff18,this,&local_f408);
  local_ff10 = &local_e9f0;
  local_ff08 = TSharedPtr<ITextLayoutMarshaller,1>::
               TSharedPtr<ITextLayoutMarshaller,1><FRichTextLayoutMarshaller>
                         (local_ff10,&TStack_10ad8);
  local_fee8 = SMultiLineEditableTextBox::FArguments::Marshaller(local_ff00,local_ff08);
  local_fef8 = &local_e840;
  bStack_10ba6 = false;
  local_fef0 = TAttribute<bool>::TAttribute<bool>(local_fef8,&bStack_10ba6);
  local_fed0 = SMultiLineEditableTextBox::FArguments::ClearTextSelectionOnFocusLoss
                         (local_fee8,local_fef0);
  local_fee0 = &local_e820;
  bStack_10ba5 = true;
  local_fed8 = TAttribute<bool>::TAttribute<bool>(local_fee0,&bStack_10ba5);
  local_feb8 = SMultiLineEditableTextBox::FArguments::AutoWrapText(local_fed0,local_fed8);
  local_fec8 = &local_e158;
  aiStack_10b5c[2] = 4;
  local_fec0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_fec8,aiStack_10b5c + 2);
  local_fea0 = SMultiLineEditableTextBox::FArguments::Margin(local_feb8,local_fec0);
  local_feb0 = &local_e800;
  fStack_10b50 = __real_3f8ccccd;
  local_fea8 = TAttribute<float>::TAttribute<float>(local_feb0,&fStack_10b50);
  local_fe90 = SMultiLineEditableTextBox::FArguments::LineHeightPercentage(local_fea0,local_fea8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10ba4);
  local_fe98 = MakeTDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
                         (&local_edd0,"SMultiLineEditableTextBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0xd6b,&TStack_10ba4);
  pTVar40 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
            Expose<SMultiLineEditableTextBox>(local_fe98,&this->RichEditableTextBox);
  pTVar41 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar40,&local_f278,local_fe90);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableTextBox>(&local_f820,pTVar41);
  local_fe80 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_fe88,&local_f820);
  local_fe70 = SVerticalBox::FArguments::operator+(local_fe78,local_fe80);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10ba3);
  pTVar42 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_ede8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xca5,&TStack_10ba3);
  pTVar43 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_f288,local_fe70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_f830,pTVar43);
  local_fe60 = SBorder::FArguments::operator[](local_fe68,&local_f830);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10ba2);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_ee00,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xca0,&TStack_10ba2);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f298,local_fe60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_f840,pTVar16);
  local_fe50 = SBorder::FArguments::operator[](local_fe58,&local_f840);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10ba1);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_ee18,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xc9c,&TStack_10ba1);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f2a8,local_fe50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_fb60,pTVar16);
  local_fe40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_fe48,&local_fb60);
  local_fbb0 = SVerticalBox::FArguments::operator+(local_fe38,local_fe40);
  pFVar11 = SVerticalBox::Slot(&local_dc50);
  pFVar11 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  local_fe20 = (FSlotArgumentsMixin *)&pFVar11->field_0x18;
  local_fe30 = &local_e128;
  pFVar12 = FMargin::FMargin(&local_e9e0,__real_4039000000000000,0.0,__real_4039000000000000,
                             __real_4039000000000000);
  local_fe28 = TAttribute<FMargin>::TAttribute<FMargin>(local_fe30,pFVar12);
  local_fbc0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_fe20,local_fe28);
  local_fe18 = SBorder::FArguments::FArguments(&local_9018);
  local_fde0 = SBorder::FArguments::Padding(local_fe18,__real_40a00000);
  local_fdf0 = &local_e6b0;
  pIStack_10b18 = FCoreStyle::Get();
  local_fe00 = *(code **)((longlong)*pIStack_10b18 + 0x50);
  local_fe10 = &local_f6a0;
  pFVar4 = ::FName::FName(local_fe10,"BoxShadow");
  local_fe08 = *pFVar4;
  local_fdf8 = (FSlateBrush *)(*local_fe00)(pIStack_10b18,local_fe08);
  local_fde8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_fdf0,&local_fdf8);
  local_fbd0 = SBorder::FArguments::BorderImage(local_fde0,local_fde8);
  local_fda8 = SBorder::FArguments::FArguments(&local_93f8);
  local_fdb8 = &local_e688;
  pIStack_10b10 = FTestStyle::Get();
  local_fdc8 = *(code **)((longlong)*pIStack_10b10 + 0x50);
  local_fdd8 = &local_f698;
  pFVar4 = ::FName::FName(local_fdd8,"RichText.Interactive.Details.Background");
  local_fdd0 = *pFVar4;
  local_fdc0 = (FSlateBrush *)(*local_fdc8)(pIStack_10b10,local_fdd0,0,0);
  local_fdb0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_fdb8,&local_fdc0);
  local_fd90 = SBorder::FArguments::BorderImage(local_fda8,local_fdb0);
  local_fda0 = &local_e0f8;
  pFVar12 = FMargin::FMargin(&local_e9d0,__real_40800000);
  local_fd98 = TAttribute<FMargin>::TAttribute<FMargin>(local_fda0,pFVar12);
  local_fbe0 = SBorder::FArguments::Padding(local_fd90,local_fd98);
  local_fce0 = SVerticalBox::FArguments::FArguments(&local_ce38);
  pFVar11 = SVerticalBox::Slot(&local_da80);
  pFVar11 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  local_fd78 = (FSlotArgumentsMixin *)&pFVar11->field_0x18;
  local_fd88 = &local_e0c8;
  pFVar12 = FMargin::FMargin(&local_e9c0,0.0,0.0,0.0,__real_4010000000000000);
  local_fd80 = TAttribute<FMargin>::TAttribute<FMargin>(local_fd88,pFVar12);
  local_fcf0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_fd78,local_fd80);
  local_fd70 = SMultiLineEditableTextBox::FArguments::FArguments(&local_1f48);
  local_f940 = GetRichEditableText;
  local_f938 = 0;
  ppcVar47 = &local_f940;
  puVar48 = local_f3f8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f3f8;
  ppVar60 = &local_f3e8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar60 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar60 = (pmf_f4cef8e6 *)&ppVar60->field_0x1;
  }
  local_fd68 = SMultiLineEditableTextBox::FArguments::Text<SRichTextEditTest>
                         (local_fd70,this,&local_f3e8);
  local_f930 = HandleRichEditableTextChanged;
  local_f928 = 0;
  ppcVar47 = &local_f930;
  puVar48 = local_f3d8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f3d8;
  ppVar61 = &local_f3c8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar61 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar61 = (pmf_3b8787f2 *)&ppVar61->field_0x1;
  }
  local_fd60 = SMultiLineEditableTextBox::FArguments::OnTextChanged<SRichTextEditTest>
                         (local_fd68,this,&local_f3c8);
  local_f920 = HandleRichEditableTextCommitted;
  local_f918 = 0;
  ppcVar47 = &local_f920;
  puVar48 = local_f3b8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f3b8;
  ppVar62 = &local_f3a8;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar62 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar62 = (pmf_f92091c4 *)&ppVar62->field_0x1;
  }
  local_fd48 = SMultiLineEditableTextBox::FArguments::OnTextCommitted<SRichTextEditTest>
                         (local_fd60,this,&local_f3a8);
  local_fd58 = &local_e9b0;
  local_fd50 = TSharedPtr<ITextLayoutMarshaller,1>::
               TSharedPtr<ITextLayoutMarshaller,1><FSyntaxHighlighterTextLayoutMarshaller>
                         (local_fd58,&this->SyntaxHighlighterMarshaller);
  local_fd30 = SMultiLineEditableTextBox::FArguments::Marshaller(local_fd48,local_fd50);
  local_fd40 = &local_e7e0;
  bStack_10ba0 = true;
  local_fd38 = TAttribute<bool>::TAttribute<bool>(local_fd40,&bStack_10ba0);
  local_fd18 = SMultiLineEditableTextBox::FArguments::AutoWrapText(local_fd30,local_fd38);
  local_fd28 = &local_e098;
  iStack_10b4c = 4;
  local_fd20 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_fd28,&iStack_10b4c);
  local_fd00 = SMultiLineEditableTextBox::FArguments::Margin(local_fd18,local_fd20);
  local_fd10 = &local_e7c0;
  fStack_10b48 = __real_3f8ccccd;
  local_fd08 = TAttribute<float>::TAttribute<float>(local_fd10,&fStack_10b48);
  local_fcf8 = SMultiLineEditableTextBox::FArguments::LineHeightPercentage(local_fd00,local_fd08);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b9f);
  pTVar40 = MakeTDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
                      (&local_ee30,"SMultiLineEditableTextBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd8e,&TStack_10b9f);
  pTVar41 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar40,&local_f2b8,local_fcf8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableTextBox>(&local_f860,pTVar41);
  local_fce8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_fcf0,&local_f860);
  local_fbf0 = SVerticalBox::FArguments::operator+(local_fce0,local_fce8);
  pFVar11 = SVerticalBox::Slot(&local_db68);
  local_fc00 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  local_fca8 = SBorder::FArguments::FArguments(&local_97d8);
  local_fcb8 = &local_e660;
  pIStack_10b30 = FTestStyle::Get();
  local_fcc8 = *(code **)((longlong)*pIStack_10b30 + 0x50);
  local_fcd8 = &local_f690;
  pFVar4 = ::FName::FName(local_fcd8,"RichText.RoundedBackground");
  local_fcd0 = *pFVar4;
  local_fcc0 = (FSlateBrush *)(*local_fcc8)(pIStack_10b30,local_fcd0,0);
  local_fcb0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_fcb8,&local_fcc0);
  local_fc90 = SBorder::FArguments::BorderImage(local_fca8,local_fcb0);
  local_fca0 = &local_e068;
  pFVar12 = FMargin::FMargin(&local_e9a0,__real_40800000);
  local_fc98 = TAttribute<FMargin>::TAttribute<FMargin>(local_fca0,pFVar12);
  local_fc88 = SBorder::FArguments::Padding(local_fc90,local_fc98);
  local_fc10 = SBorder::FArguments::HAlign(local_fc88,HAlign_Right);
  local_fc70 = SCheckBox::FArguments::FArguments(&local_9bb8);
  ::FName::FName(&local_fc80,"RichText.Toolbar.Checkbox");
  local_fc78 = FTestStyle::Get();
  local_fc68 = SCheckBox::FArguments::Style(local_fc70,local_fc78,&local_fc80,(char *)0x0);
  local_f910 = IsEnableSyntaxHighlightingChecked;
  local_f908 = 0;
  ppcVar47 = &local_f910;
  puVar48 = local_f398;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f398;
  ppVar63 = &local_f388;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar63 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar63 = (pmf_bb09059b *)&ppVar63->field_0x1;
  }
  local_fc60 = SCheckBox::FArguments::IsChecked<SRichTextEditTest>(local_fc68,this,&local_f388);
  local_f900 = OnEnableSyntaxHighlightingChanged;
  local_f8f8 = 0;
  ppcVar47 = &local_f900;
  puVar48 = local_f378;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *puVar48 = *(undefined1 *)ppcVar47;
    ppcVar47 = (code **)((longlong)ppcVar47 + 1);
    puVar48 = puVar48 + 1;
  }
  puVar48 = local_f378;
  ppVar64 = &local_f368;
  for (lVar45 = 0x10; lVar45 != 0; lVar45 = lVar45 + -1) {
    *(undefined1 *)ppVar64 = *puVar48;
    puVar48 = puVar48 + 1;
    ppVar64 = (pmf_abb7684b *)&ppVar64->field_0x1;
  }
  local_fc20 = SCheckBox::FArguments::OnCheckStateChanged<SRichTextEditTest>
                         (local_fc60,this,&local_f368);
  local_fc48 = STextBlock::FArguments::FArguments(&local_5e98);
  ::FName::FName(&local_fc58,"RichText.Toolbar.Text");
  local_fc50 = FTestStyle::Get();
  local_fc30 = STextBlock::FArguments::TextStyle(local_fc48,local_fc50,&local_fc58,(char *)0x0);
  local_fc40 = &local_e038;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_f2c8,L"STestSuite",L"EnableSyntaxHighlightingLabel",
                      L"Enable Syntax Highlighting");
  local_fc38 = TAttribute<FText>::TAttribute<FText>(local_fc40,pFVar5);
  local_fc28 = STextBlock::FArguments::Text(local_fc30,local_fc38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b9e);
  pTVar18 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_ee48,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xda5,&TStack_10b9e);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar18,&local_f2d8,local_fc28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_f870,pTVar19);
  local_fc18 = SCheckBox::FArguments::operator[](local_fc20,&local_f870);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b9d);
  pTVar24 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_ee60,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xda0,&TStack_10b9d);
  pTVar25 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_f2e8,local_fc18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_f880,pTVar25);
  local_fc08 = SBorder::FArguments::operator[](local_fc10,&local_f880);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b9c);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_ee78,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd9b,&TStack_10b9c);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f2f8,local_fc08);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_f890,pTVar16);
  local_fbf8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_fc00,&local_f890);
  local_fbe8 = SVerticalBox::FArguments::operator+(local_fbf0,local_fbf8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b9b);
  pTVar42 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_ee90,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd88,&TStack_10b9b);
  pTVar43 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_f308,local_fbe8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_f8a0,pTVar43);
  local_fbd8 = SBorder::FArguments::operator[](local_fbe0,&local_f8a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b9a);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_eea8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd84,&TStack_10b9a);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f318,local_fbd8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_f8b0,pTVar16);
  local_fbc8 = SBorder::FArguments::operator[](local_fbd0,&local_f8b0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b99);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_eec0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xd80,&TStack_10b99);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f328,local_fbc8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_f8c0,pTVar16);
  local_fbb8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_fbc0,&local_f8c0);
  local_fba8 = SVerticalBox::FArguments::operator+(local_fbb0,local_fbb8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b98);
  pTVar42 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_eed8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xc75,&TStack_10b98);
  pTVar43 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_f338,local_fba8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_f8d0,pTVar43);
  local_fb98 = SBorder::FArguments::operator[](local_fba0,&local_f8d0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&TStack_10b97);
  pTVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_eef0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xc72,&TStack_10b97);
  pTVar16 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_f348,local_fb98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_f8e0,pTVar16);
  local_fb88 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_fb90,&local_f8e0);
  local_fb78 = SScrollBox::FArguments::operator+(local_fb80,local_fb88);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(aTStack_10b96);
  this_08 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_ef08,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xc6f,aTStack_10b96);
  pTVar44 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_08,&local_f358,local_fb78);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_f8f0,pTVar44);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_fb70,&local_f8f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f8f0);
  TSharedRef<SScrollBox,1>::~TSharedRef<SScrollBox,1>(&local_f358);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>(&local_ef08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f8e0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f348);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_eef0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f8d0);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_f338);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_eed8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f8c0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f328);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_eec0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f8b0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f318);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_eea8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f8a0);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_f308);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_ee90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f890);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f2f8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_ee78);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f880);
  TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_f2e8);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_ee60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f870);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f2d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ee48);
  FText::~FText(&local_f2c8);
  STextBlock::FArguments::~FArguments(&local_5e98);
  SCheckBox::FArguments::~FArguments(&local_9bb8);
  SBorder::FArguments::~FArguments(&local_97d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_db68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f860);
  TSharedRef<SMultiLineEditableTextBox,1>::~TSharedRef<SMultiLineEditableTextBox,1>(&local_f2b8);
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_ee30);
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_1f48);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_da80);
  SVerticalBox::FArguments::~FArguments(&local_ce38);
  SBorder::FArguments::~FArguments(&local_93f8);
  SBorder::FArguments::~FArguments(&local_9018);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_dc50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fb60);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f2a8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_ee18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f840);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f298);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_ee00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f830);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_f288);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_ede8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f820);
  TSharedRef<SMultiLineEditableTextBox,1>::~TSharedRef<SMultiLineEditableTextBox,1>(&local_f278);
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_edd0);
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_16e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d8b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f810);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f268);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_edb8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f800);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_f258);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_eda0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f7f0);
  TSharedRef<SComboButton,1>::~TSharedRef<SComboButton,1>(&local_f248);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>(&local_ed88);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f7e0);
  TSharedRef<SGridPanel,1>::~TSharedRef<SGridPanel,1>(&local_f238);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>(&local_ed70);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f7d0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_f228);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_ed58);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f7c0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f218);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ed40);
  FText::~FText(&local_f208);
  STextBlock::FArguments::~FArguments(&local_5940);
  SButton::FArguments::~FArguments(&local_6918);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_df48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f7b0);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_f1f8);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_ed28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f7a0);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_f1e8);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_ed10);
  SEditableTextBox::FArguments::~FArguments(&local_33d8);
  SBox::FArguments::~FArguments(&local_b940);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_deb0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f790);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f1d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ecf8);
  FText::~FText(&local_f1c8);
  STextBlock::FArguments::~FArguments(&local_53e8);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_de18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f780);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_f1b8);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_ece0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f770);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_f1a8);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_ef38);
  SEditableTextBox::FArguments::~FArguments(&local_2d18);
  SBox::FArguments::~FArguments(&local_b600);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_dd80);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f760);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f198);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ecc8);
  FText::~FText(&local_f188);
  STextBlock::FArguments::~FArguments(&local_4e90);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_dce8);
  TAttribute<float>::~TAttribute<float>(&local_efb8);
  SGridPanel::FArguments::~FArguments(&local_c410);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f750);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_f178);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_ecb0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f740);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_f168);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_ec98);
  SImage::FArguments::~FArguments(&local_c1e8);
  SBox::FArguments::~FArguments(&local_b2c0);
  SComboButton::FArguments::~FArguments(&local_bc78);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d7c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f730);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_f158);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_ec80);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f720);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>(&local_f148);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>(&local_ec68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f710);
  TSharedRef<SColorBlock,1>::~TSharedRef<SColorBlock,1>(&local_f138);
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>(&local_ec50);
  SColorBlock::FArguments::~FArguments(&local_a278);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_e008);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f700);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f128);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ec38);
  FText::~FText(&local_f118);
  STextBlock::FArguments::~FArguments(&local_4938);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_dfa8);
  SOverlay::FArguments::~FArguments(&local_cc30);
  SButton::FArguments::~FArguments(&local_63d8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d6e0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f6f0);
  TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_f108);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_ec20);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fb50);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_f0f8);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_ec08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fb40);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f0e8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ebf0);
  FText::~FText(&local_f0d8);
  STextBlock::FArguments::~FArguments(&local_43e0);
  SBox::FArguments::~FArguments(&local_af80);
  SCheckBox::FArguments::~FArguments(&local_8c38);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d5f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fb30);
  TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_f0c8);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_ebd8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fb20);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_f0b8);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_ebc0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fb10);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f0a8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_eba8);
  FText::~FText(&local_f098);
  STextBlock::FArguments::~FArguments(&local_3e88);
  SBox::FArguments::~FArguments(&local_ac40);
  SCheckBox::FArguments::~FArguments(&local_8858);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d510);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fb00);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_f088);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_eb90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_faf0);
  TSharedRef<SNumericEntryBox<unsigned_short>,1>::~TSharedRef<SNumericEntryBox<unsigned_short>,1>
            (&local_f078);
  TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>(&local_eb78);
  SNumericEntryBox<unsigned_short>::FArguments::~FArguments(&local_2658);
  SBox::FArguments::~FArguments(&local_a900);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d428);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fae0);
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_f068);
  TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_eb60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fad0);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_f058);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_eb48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fac0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_f048);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ef98);
  STextBlock::FArguments::~FArguments(&local_3930);
  SBox::FArguments::~FArguments(&local_a5c0);
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::~FArguments(&local_9f18);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d340);
  SHorizontalBox::FArguments::~FArguments(&local_ca28);
  SBorder::FArguments::~FArguments(&local_8478);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d998);
  SVerticalBox::FArguments::~FArguments(&local_c820);
  SBorder::FArguments::~FArguments(&local_8098);
  SBorder::FArguments::~FArguments(&local_7cb8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d258);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_fab0);
  TSharedRef<SRichTextBlock,1>::~TSharedRef<SRichTextBlock,1>(&local_f038);
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>(&local_ef80);
  FText::~FText(&local_f028);
  SRichTextBlock::FArguments::~FArguments(&local_7118);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d170);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_faa0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_f018);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_ef68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f850);
  TSharedRef<SRichTextBlock,1>::~TSharedRef<SRichTextBlock,1>(&local_f008);
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>(&local_ef50);
  FText::~FText(&local_eff8);
  SRichTextBlock::FArguments::~FArguments(&local_6d18);
  SBorder::FArguments::~FArguments(&local_78d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_d088);
  SVerticalBox::FArguments::~FArguments(&local_c618);
  SBorder::FArguments::~FArguments(&local_74f8);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_cfa0);
  SScrollBox::FArguments::~FArguments(&local_bf40);
  TSharedRef<FRichTextLayoutMarshaller,1>::~TSharedRef<FRichTextLayoutMarshaller,1>(&TStack_10ad8);
  return;
}

// GenerateFontFamilyComboEntry @ 1430c4ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SRichTextEditTest::GenerateFontFamilyComboEntry
          (SRichTextEditTest *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  FFontFamily *pFVar1;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar2;
  T0RequiredArgs local_5e8 [8];
  TAttribute<FText> *local_5e0;
  TAttribute<FText> *local_5d8;
  FArguments *local_5d0;
  FArguments *local_5c8;
  TSharedRef<STextBlock,1> local_5c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b0;
  TAttribute<FText> local_598;
  FArguments local_568;
  
  local_5d0 = STextBlock::FArguments::FArguments(&local_568);
  local_5e0 = &local_598;
  pFVar1 = TSharedPtr<FTextStyles::FFontFamily,1>::operator->(param_1);
  local_5d8 = TAttribute<FText>::TAttribute<FText><FText>(local_5e0,&pFVar1->DisplayName);
  local_5c8 = STextBlock::FArguments::Text(local_5d0,local_5d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_5e8);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5b0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xddc,local_5e8);
  pTVar2 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_5c0,local_5c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(__return_storage_ptr__,pTVar2);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5c0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5b0);
  STextBlock::FArguments::~FArguments(&local_568);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// GetActiveFontFamilyName @ 1430c7410

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SRichTextEditTest::GetActiveFontFamilyName(SRichTextEditTest *this,FText *__return_storage_ptr__)

{
  FFontFamily *pFVar1;
  
  pFVar1 = TSharedPtr<FTextStyles::FFontFamily,1>::operator->(&this->ActiveFontFamily);
  FText::FText(__return_storage_ptr__,&pFVar1->DisplayName);
  return __return_storage_ptr__;
}

// GetFontColor @ 1430c8d50

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __thiscall
SRichTextEditTest::GetFontColor(SRichTextEditTest *this,FLinearColor *__return_storage_ptr__)

{
  longlong lVar1;
  FLinearColor *pFVar2;
  FLinearColor *pFVar3;
  
  pFVar2 = &this->FontColor;
  pFVar3 = __return_storage_ptr__;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar3->field0_0x0 = *(undefined1 *)&pFVar2->field0_0x0;
    pFVar2 = (FLinearColor *)((longlong)&pFVar2->field0_0x0 + 1);
    pFVar3 = (FLinearColor *)((longlong)&pFVar3->field0_0x0 + 1);
  }
  return __return_storage_ptr__;
}

// GetFontSize @ 1430c8e10

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<unsigned_short> __thiscall SRichTextEditTest::GetFontSize(SRichTextEditTest *this)

{
  TOptional<unsigned_short> *in_RDX;
  
  TOptional<unsigned_short>::TOptional<unsigned_short>(in_RDX,&this->FontSize);
  return SUB84(in_RDX,0);
}

// GetRichEditableText @ 1430cc9e0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SRichTextEditTest::GetRichEditableText(SRichTextEditTest *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__,&this->RichEditableText);
  return __return_storage_ptr__;
}

// HandleHyperlinkComboOpened @ 1430cf030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall SRichTextEditTest::HandleHyperlinkComboOpened(SRichTextEditTest *this)

{
  bool bVar1;
  int iVar2;
  FText *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int local_1cc;
  undefined1 local_1c8 [4];
  int local_1c4;
  uint local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  FString local_1a8;
  IRun *local_198;
  undefined8 *local_190;
  wchar_t (*local_188) [1];
  IRun *local_180;
  FString *local_178;
  FText *local_170;
  TSharedPtr<IRun_const_,1> local_168;
  SMultiLineEditableTextBox *local_158;
  wchar_t (*local_150) [1];
  wchar_t (*local_148) [1];
  wchar_t (*local_140) [1];
  wchar_t (*local_138) [1];
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_130;
  FString *local_128;
  FText *local_120;
  SEditableTextBox *local_118;
  SEditableTextBox *local_110;
  SMultiLineEditableTextBox *local_108;
  SEditableTextBox *local_100;
  FString local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  TAttribute<FText> local_98;
  TAttribute<FText> local_68;
  TAttribute<FText> local_38;
  
  local_108 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&this->RichEditableTextBox);
  pFVar3 = SMultiLineEditableTextBox::GetSelectedText(local_108,&local_e8);
  pFVar4 = FText::ToString(pFVar3);
  ::FString::FString(&local_1a8,pFVar4);
  FText::~FText(&local_e8);
  local_1cc = 0;
  while( true ) {
    local_1bc = local_1a8.Data.ArrayNum;
    if (local_1a8.Data.ArrayNum == 0) {
      local_1c4 = 0;
    }
    else {
      local_1b8 = local_1a8.Data.ArrayNum;
      local_1c4 = local_1a8.Data.ArrayNum + -1;
    }
    local_1b4 = local_1c4;
    if (local_1c4 <= local_1cc) goto LAB_1430cf11f;
    pwVar5 = ::FString::operator[](&local_1a8,local_1cc);
    bVar1 = TCharBase<wchar_t,2>::IsLinebreak(*pwVar5);
    if (bVar1) break;
    local_1cc = local_1cc + 1;
  }
  ::FString::LeftInline(&local_1a8,local_1cc,No);
LAB_1430cf11f:
  local_100 = TSharedPtr<SEditableTextBox,1>::operator->(&this->HyperlinkNameTextBox);
  pFVar3 = FText::FromString(&local_d8,&local_1a8);
  TAttribute<FText>::TAttribute<FText>(&local_98,pFVar3);
  SEditableTextBox::SetText(local_100,&local_98);
  TAttribute<FText>::~TAttribute<FText>(&local_98);
  FText::~FText(&local_d8);
  local_158 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&this->RichEditableTextBox);
  SMultiLineEditableTextBox::GetRunUnderCursor(local_158,&local_168);
  if (local_168.Object != (IRun *)0x0) {
    local_198 = TSharedPtr<IRun_const_,1>::operator->(&local_168);
    local_190 = (undefined8 *)(**(code **)((longlong)*local_198 + 0x90))(local_198);
    local_1b0 = *(int *)(local_190 + 1);
    if (local_1b0 == 0) {
      local_188 = `FString::operator*'::__l2::<lambda_1>::operator()(local_1c8);
    }
    else {
      local_188 = (wchar_t (*) [1])*local_190;
      local_150 = local_188;
      local_148 = local_188;
      local_140 = local_188;
    }
    local_138 = local_188;
    iVar2 = FGenericPlatformStricmp::Stricmp(*local_188,L"a");
    local_1c0 = (uint)(iVar2 == 0);
    if (iVar2 == 0) {
      local_180 = TSharedPtr<IRun_const_,1>::operator->(&local_168);
      lVar6 = (**(code **)((longlong)*local_180 + 0x90))(local_180);
      local_130 = (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)(lVar6 + 0x10);
      ::FString::FString(&local_f8,L"href");
      local_178 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  ::Find(local_130,&local_f8);
      local_128 = local_178;
      ::FString::~FString(&local_f8);
      local_118 = TSharedPtr<SEditableTextBox,1>::operator->(&this->HyperlinkURLTextBox);
      bVar1 = local_178 == (FString *)0x0;
      if (bVar1) {
        local_170 = FText::FText(&local_c8);
      }
      else {
        local_170 = FText::FromString(&local_b8,local_178);
      }
      local_120 = local_170;
      TAttribute<FText>::TAttribute<FText>(&local_68,local_170);
      SEditableTextBox::SetText(local_118,&local_68);
      TAttribute<FText>::~TAttribute<FText>(&local_68);
      if (bVar1) {
        FText::~FText(&local_c8);
      }
      else {
        FText::~FText(&local_b8);
      }
      goto LAB_1430cf4b2;
    }
  }
  local_110 = TSharedPtr<SEditableTextBox,1>::operator->(&this->HyperlinkURLTextBox);
  pFVar3 = FText::FText(&local_a8);
  TAttribute<FText>::TAttribute<FText>(&local_38,pFVar3);
  SEditableTextBox::SetText(local_110,&local_38);
  TAttribute<FText>::~TAttribute<FText>(&local_38);
  FText::~FText(&local_a8);
LAB_1430cf4b2:
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_168.SharedReferenceCount);
  ::FString::~FString(&local_1a8);
  return;
}

// HandleInsertHyperlinkClicked @ 1430cf4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRichTextEditTest::HandleInsertHyperlinkClicked
          (SRichTextEditTest *this,FReply *__return_storage_ptr__)

{
  SComboButton *pSVar1;
  SEditableTextBox *pSVar2;
  FString *pFVar3;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar4;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar5;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  ISlateStyle *this_00;
  FName *pFVar7;
  FHyperlinkStyle *pFVar8;
  FString *pFVar9;
  TRawPtrProxy<FString> TVar10;
  SMultiLineEditableTextBox *this_01;
  TSharedRef<IRun,1> *pTVar11;
  longlong lVar12;
  undefined1 auStackY_278 [32];
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  TSharedRef<FString_const_,1> local_130;
  TSharedRef<FSlateHyperlinkRun,1> local_120;
  FText local_110;
  FText local_100;
  FName local_f0;
  undefined1 local_e8 [24];
  TSharedRef<IRun,1> local_d0;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_c0;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_a8;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_90;
  FRunInfo local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pSVar1 = TSharedPtr<SComboButton,1>::operator->(&this->HyperlinkComboButton);
  (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,0,1);
  pSVar2 = TSharedPtr<SEditableTextBox,1>::operator->(&this->HyperlinkNameTextBox);
  SEditableTextBox::GetText(pSVar2,&local_100);
  pSVar2 = TSharedPtr<SEditableTextBox,1>::operator->(&this->HyperlinkURLTextBox);
  SEditableTextBox::GetText(pSVar2,&local_110);
  pFVar3 = ::FString::FString((FString *)(local_e8 + 8),L"a");
  FRunInfo::FRunInfo(&local_78,pFVar3);
  ::FString::FString(&local_170,L"browser");
  ::FString::FString(&local_180,L"id");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_78.MetaData,&local_180,&local_170);
  ::FString::~FString(&local_180);
  ::FString::~FString(&local_170);
  pFVar3 = FText::ToString(&local_110);
  ::FString::FString(&local_160,L"href");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_78.MetaData,&local_160,pFVar3);
  ::FString::~FString(&local_160);
  ::FString::FString(&local_140,L"RichText.Editor.Hyperlink");
  ::FString::FString(&local_150,L"style");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_78.MetaData,&local_150,&local_140);
  ::FString::~FString(&local_150);
  ::FString::~FString(&local_140);
  pTVar4 = &local_c0;
  for (lVar12 = 0x18; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined1 *)pTVar4 = 0;
    pTVar4 = (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              *)&pTVar4->field_0x1;
  }
  pTVar4 = TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                     (&local_c0);
  pTVar5 = &local_a8;
  for (lVar12 = 0x18; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined1 *)pTVar5 = 0;
    pTVar5 = (TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              *)&pTVar5->field_0x1;
  }
  pTVar5 = TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                     (&local_a8);
  pTVar6 = TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                     (&local_90,&this->OnHyperlinkClicked);
  this_00 = FTestStyle::Get();
  pFVar7 = ::FName::FName(&local_f0,L"RichText.Editor.Hyperlink");
  pFVar8 = ISlateStyle::GetWidgetStyle<FHyperlinkStyle>
                     (this_00,*pFVar7,(char *)0x0,(FHyperlinkStyle *)0x0);
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 != (FString *)0x0) {
    pFVar9 = FText::ToString(&local_100);
    ::FString::FString(pFVar3,pFVar9);
  }
  TVar10 = MakeShareable<FString>((FString *)local_e8);
  TSharedRef<FString_const_,1>::TSharedRef<FString_const_,1><FString>
            (&local_130,(TRawPtrProxy<FString> *)TVar10.Object);
  FSlateHyperlinkRun::Create(&local_120,&local_78,&local_130,pFVar8,pTVar6,pTVar5,pTVar4);
  TSharedRef<FString_const_,1>::~TSharedRef<FString_const_,1>(&local_130);
  this_01 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&this->RichEditableTextBox);
  pTVar11 = TSharedRef<IRun,1>::TSharedRef<IRun,1><FSlateHyperlinkRun>(&local_d0,&local_120);
  SMultiLineEditableTextBox::InsertRunAtCursor(this_01,pTVar11);
  FReply::Handled(__return_storage_ptr__);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_120.SharedReferenceCount);
  FRunInfo::~FRunInfo(&local_78);
  FText::~FText(&local_110);
  FText::~FText(&local_100);
  return __return_storage_ptr__;
}

// HandleRichEditableTextChanged @ 1430cf9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextEditTest::HandleRichEditableTextChanged(SRichTextEditTest *this,FText *param_1)

{
  FText::operator=(&this->RichEditableText,param_1);
  return;
}

// HandleRichEditableTextCommitted @ 1430cfa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextEditTest::HandleRichEditableTextCommitted
          (SRichTextEditTest *this,FText *param_1,Type param_2)

{
  FText::operator=(&this->RichEditableText,param_1);
  return;
}

// HandleRichEditableTextCursorMoved @ 1430cfa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextEditTest::HandleRichEditableTextCursorMoved(SRichTextEditTest *this,FTextLocation *param_1)

{
  int iVar1;
  FRunInfo *pFVar2;
  undefined1 local_a4 [4];
  uint local_a0;
  int local_9c;
  IRun *local_98;
  undefined8 *local_90;
  wchar_t (*local_88) [1];
  IRun *local_80;
  TSharedPtr<IRun_const_,1> local_78;
  undefined4 local_68;
  SMultiLineEditableTextBox *local_60;
  wchar_t (*local_58) [1];
  wchar_t (*local_50) [1];
  wchar_t (*local_48) [1];
  wchar_t (*local_40) [1];
  FLinearColor *local_38;
  uchar *local_30;
  ushort *local_28;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_20;
  FTextStyles *local_18;
  
  local_68 = 0;
  local_60 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&this->RichEditableTextBox);
  SMultiLineEditableTextBox::GetRunUnderCursor(local_60,&local_78);
  if (local_78.Object != (IRun *)0x0) {
    local_98 = TSharedPtr<IRun_const_,1>::operator->(&local_78);
    local_90 = (undefined8 *)(**(code **)((longlong)*local_98 + 0x90))(local_98);
    local_9c = *(int *)(local_90 + 1);
    if (local_9c == 0) {
      local_88 = `FString::operator*'::__l2::<lambda_1>::operator()(local_a4);
    }
    else {
      local_88 = (wchar_t (*) [1])*local_90;
      local_58 = local_88;
      local_50 = local_88;
      local_48 = local_88;
    }
    local_40 = local_88;
    iVar1 = FGenericPlatformStricmp::Stricmp(*local_88,L"TextStyle");
    local_a0 = (uint)(iVar1 == 0);
    if (iVar1 == 0) {
      local_18 = &this->TextStyles;
      local_80 = TSharedPtr<IRun_const_,1>::operator->(&local_78);
      local_38 = &this->FontColor;
      local_30 = &this->FontStyle;
      local_28 = &this->FontSize;
      local_20 = &this->ActiveFontFamily;
      pFVar2 = (FRunInfo *)(**(code **)((longlong)*local_80 + 0x90))(local_80);
      FTextStyles::ExplodeRunInfo(local_18,pFVar2,local_20,local_28,local_30,local_38);
    }
  }
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_78.SharedReferenceCount);
  return;
}

// IsEnableSyntaxHighlightingChecked @ 1430d3240

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall
SRichTextEditTest::IsEnableSyntaxHighlightingChecked(SRichTextEditTest *this)

{
  bool bVar1;
  FSyntaxHighlighterTextLayoutMarshaller *this_00;
  
  this_00 = TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::operator->
                      (&this->SyntaxHighlighterMarshaller);
  bVar1 = FSyntaxHighlighterTextLayoutMarshaller::IsSyntaxHighlightingEnabled(this_00);
  return bVar1;
}

// IsFontStyleBold @ 1430d32f0

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall SRichTextEditTest::IsFontStyleBold(SRichTextEditTest *this)

{
  return (this->FontStyle & 1) != 0;
}

// IsFontStyleItalic @ 1430d3330

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall SRichTextEditTest::IsFontStyleItalic(SRichTextEditTest *this)

{
  return (this->FontStyle & 2) != 0;
}

// OnActiveFontFamilyChanged @ 1430d8f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextEditTest::OnActiveFontFamilyChanged
          (SRichTextEditTest *this,TSharedPtr<FTextStyles::FFontFamily,1> *param_1,Type param_2)

{
  TSharedPtr<FTextStyles::FFontFamily,1>::operator=(&this->ActiveFontFamily,param_1);
  StyleSelectedText(this);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return;
}

// OnEnableSyntaxHighlightingChanged @ 1430dae60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextEditTest::OnEnableSyntaxHighlightingChanged(SRichTextEditTest *this,ECheckBoxState param_1)

{
  FSyntaxHighlighterTextLayoutMarshaller *this_00;
  
  this_00 = TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::operator->
                      (&this->SyntaxHighlighterMarshaller);
  FSyntaxHighlighterTextLayoutMarshaller::EnableSyntaxHighlighting(this_00,param_1 == Checked);
  return;
}

// OnFontStyleBoldChanged @ 1430db0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextEditTest::OnFontStyleBoldChanged(SRichTextEditTest *this,ECheckBoxState param_1)

{
  if (param_1 == Checked) {
    this->FontStyle = this->FontStyle | 1;
  }
  else {
    this->FontStyle = this->FontStyle & 0xfe;
  }
  StyleSelectedText(this);
  return;
}

// OnFontStyleItalicChanged @ 1430db140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextEditTest::OnFontStyleItalicChanged(SRichTextEditTest *this,ECheckBoxState param_1)

{
  if (param_1 == Checked) {
    this->FontStyle = this->FontStyle | 2;
  }
  else {
    this->FontStyle = this->FontStyle & 0xfd;
  }
  StyleSelectedText(this);
  return;
}

// OpenFontColorPicker @ 1430e3ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRichTextEditTest::OpenFontColorPicker(SRichTextEditTest *this,FReply *__return_storage_ptr__)

{
  TSharedRef<SWidget,1> *pTVar1;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *pTVar2;
  longlong lVar3;
  code **ppcVar4;
  FLinearColor *pFVar5;
  pmf_fd62b4b0 *ppVar6;
  FLinearColor *pFVar7;
  TSharedPtr<SWidget,1> local_1c8;
  code *local_1b8;
  undefined4 local_1b0;
  code *local_1a8;
  undefined4 local_1a0;
  TSharedRef<SWidget,1> local_198;
  pmf_fd62b4b0 local_188;
  pmf_fd62b4b0 local_178;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> local_168;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> local_150;
  FColorPickerArgs local_138;
  
  FColorPickerArgs::FColorPickerArgs(&local_138);
  local_138.bOnlyRefreshOnMouseUp = true;
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_198);
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SWidget>(&local_1c8,pTVar1);
  TSharedPtr<SWidget,1>::operator=(&local_138.ParentWidget,&local_1c8);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_1c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_198);
  local_138.bUseAlpha = false;
  local_138.bOnlyRefreshOnOk = false;
  local_1b8 = SetFontColor;
  local_1b0 = 0;
  ppcVar4 = &local_1b8;
  ppVar6 = &local_188;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar6 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    ppVar6 = (pmf_fd62b4b0 *)&ppVar6->field_0x1;
  }
  pTVar2 = TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
           CreateSP<SRichTextEditTest>(&local_168,this,&local_188);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&local_138.OnColorCommitted,pTVar2);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&local_168);
  local_1a8 = SetFontColor;
  local_1a0 = 0;
  ppcVar4 = &local_1a8;
  ppVar6 = &local_178;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar6 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    ppVar6 = (pmf_fd62b4b0 *)&ppVar6->field_0x1;
  }
  pTVar2 = TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
           CreateSP<SRichTextEditTest>(&local_150,this,&local_178);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&local_138.OnColorPickerCancelled,pTVar2);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&local_150);
  pFVar5 = &this->FontColor;
  pFVar7 = &local_138.InitialColor;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar7->field0_0x0 = *(undefined1 *)&pFVar5->field0_0x0;
    pFVar5 = (FLinearColor *)((longlong)&pFVar5->field0_0x0 + 1);
    pFVar7 = (FLinearColor *)((longlong)&pFVar7->field0_0x0 + 1);
  }
  OpenColorPicker(&local_138);
  FReply::Handled(__return_storage_ptr__);
  FColorPickerArgs::~FColorPickerArgs(&local_138);
  return __return_storage_ptr__;
}

// SetFontColor @ 1430edf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SRichTextEditTest::SetFontColor(SRichTextEditTest *this,FLinearColor *param_1)

{
  longlong lVar1;
  FLinearColor *pFVar2;
  
  pFVar2 = &this->FontColor;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar2->field0_0x0 = *(undefined1 *)&param_1->field0_0x0;
    param_1 = (FLinearColor *)((longlong)&param_1->field0_0x0 + 1);
    pFVar2 = (FLinearColor *)((longlong)&pFVar2->field0_0x0 + 1);
  }
  StyleSelectedText(this);
  return;
}

// SetFontSize @ 1430edf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SRichTextEditTest::SetFontSize(SRichTextEditTest *this,ushort param_1,Type param_2)

{
  this->FontSize = param_1;
  StyleSelectedText(this);
  return;
}

// StyleSelectedText @ 1430fa900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SRichTextEditTest::StyleSelectedText(SRichTextEditTest *this)

{
  SMultiLineEditableTextBox *this_00;
  FSlateApplication *this_01;
  undefined1 auStackY_3a8 [32];
  TSharedPtr<SWidget,1> local_368;
  FTextBlockStyle local_358;
  FRunInfo local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  FTextStyles::CreateRunInfo
            (&local_78,&this->ActiveFontFamily,this->FontSize,this->FontStyle,&this->FontColor);
  FTextStyles::CreateTextBlockStyle
            (&local_358,&this->ActiveFontFamily,this->FontSize,this->FontStyle,&this->FontColor);
  this_00 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&this->RichEditableTextBox);
  SMultiLineEditableTextBox::ApplyToSelection(this_00,&local_78,&local_358);
  this_01 = FSlateApplication::Get();
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SMultiLineEditableTextBox>
            (&local_368,&this->RichEditableTextBox);
  FSlateApplication::SetKeyboardFocus(this_01,&local_368,SetDirectly);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_368);
  FTextBlockStyle::~FTextBlockStyle(&local_358);
  FRunInfo::~FRunInfo(&local_78);
  return;
}

