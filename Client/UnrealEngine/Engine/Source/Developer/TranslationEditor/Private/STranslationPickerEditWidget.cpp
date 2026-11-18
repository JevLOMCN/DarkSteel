// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 3

// Construct @ 146b9e7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerEditWidget::Construct
          (STranslationPickerEditWidget *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2,TSharedPtr<FTranslationPickerTextItem,1> *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  STextBlock *pSVar8;
  SMultiLineEditableTextBox *pSVar9;
  SHorizontalBox *pSVar10;
  TReferenceControllerBase<1> *pTVar11;
  SBorder *pSVar12;
  TReferenceControllerBase<1> *pTVar13;
  code *pcVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  FDeprecateSlateVector2D FVar18;
  FSharedReferencer<1> FVar19;
  FSharedReferencer<1> FVar20;
  FArguments *pFVar21;
  TSharedPtr<FTranslationPickerTextItem,1> *this_00;
  undefined8 uVar22;
  bool bVar23;
  int iVar24;
  FArguments *pFVar25;
  FName *pFVar26;
  ISlateStyle *pIVar27;
  FTextBlockStyle *pFVar28;
  FSlateBrush *pFVar29;
  FArguments *pFVar30;
  FSlotArguments *pFVar31;
  FArguments *pFVar32;
  FSlateBrush *pFVar33;
  FArguments *pFVar34;
  FText *pFVar35;
  TSharedRef<STextBlock,1> *pTVar36;
  FArguments *pFVar37;
  FTranslationPickerTextItem *pFVar38;
  TSharedRef<SBox,1> *pTVar39;
  FSlotArguments *pFVar40;
  FArguments *pFVar41;
  TSharedRef<SMultiLineEditableTextBox,1> *pTVar42;
  SGridPanel *pSVar43;
  FSlotArguments *pFVar44;
  FArguments *pFVar45;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar46;
  FArguments *pFVar47;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SHorizontalBox,1> *pTVar48;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar49;
  TSharedRef<SBorder,1> *pTVar50;
  SGridPanel *pSVar51;
  FScopedWidgetSlotArguments *pFVar52;
  FMargin *pFVar53;
  TAttribute<FMargin> *pTVar54;
  TAttribute<FText> *pTVar55;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar56;
  FArguments *pFVar57;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *pTVar58;
  TSharedRef<SEditableTextBox,1> *pTVar59;
  TAttribute<bool> *pTVar60;
  FString *pFVar61;
  FArguments *pFVar62;
  TAttribute<EVisibility> *pTVar63;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar64;
  TSharedRef<SButton,1> *pTVar65;
  longlong lVar66;
  EVisibility *pEVar67;
  EVisibility *pEVar68;
  FSlateBrush *this_03;
  undefined1 auStackY_7f98 [32];
  bool local_7f48;
  T0RequiredArgs local_7f47;
  T0RequiredArgs local_7f46;
  T0RequiredArgs local_7f45;
  T0RequiredArgs local_7f44;
  T0RequiredArgs local_7f43;
  T0RequiredArgs local_7f42;
  T0RequiredArgs local_7f41;
  T0RequiredArgs local_7f40;
  T0RequiredArgs local_7f3f;
  T0RequiredArgs local_7f3e;
  T0RequiredArgs local_7f3d;
  T0RequiredArgs local_7f3c;
  T0RequiredArgs local_7f3b;
  T0RequiredArgs local_7f3a;
  T0RequiredArgs local_7f39;
  T0RequiredArgs local_7f38;
  T0RequiredArgs local_7f37;
  T0RequiredArgs local_7f36;
  T0RequiredArgs local_7f35 [13];
  TSharedPtr<SGridPanel,1> local_7f28;
  FTextKey local_7f18;
  FLLMScope local_7f14;
  FLLMScope local_7f10;
  FLLMScope local_7f0c;
  FLLMScope local_7f08;
  FLLMScope local_7f04;
  FLLMScope local_7f00;
  FLLMScope local_7efc;
  FName local_7ef8;
  FArguments *local_7ef0;
  TReferenceControllerBase<1> *local_7ee8;
  STextBlock *local_7ee0;
  FSharedReferencer<1> local_7ed8;
  SBox *local_7ed0;
  FSharedReferencer<1> local_7ec8;
  SMultiLineEditableTextBox *local_7ec0;
  FSharedReferencer<1> local_7eb8;
  SBox *local_7eb0;
  FSharedReferencer<1> local_7ea8;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_7ea0;
  FSlateBrush *local_7e88;
  undefined1 local_7e80;
  undefined1 local_7e78 [8];
  ForAnyElementType FStack_7e70;
  ulonglong local_7e68;
  undefined8 local_7e60;
  undefined8 uStack_7e58;
  uint local_7e50;
  undefined1 local_7e4c;
  undefined1 local_7e48 [8];
  ForAnyElementType FStack_7e40;
  ulonglong local_7e38;
  undefined8 local_7e30;
  undefined4 local_7e28;
  undefined1 local_7e24;
  undefined4 local_7e20;
  undefined1 local_7e1c;
  TSharedRef<SWidget,1> local_7e18;
  SWidget *local_7e08;
  TReferenceControllerBase<1> *pTStack_7e00;
  SWidget *local_7df8;
  TReferenceControllerBase<1> *pTStack_7df0;
  SWidget *local_7de8;
  TReferenceControllerBase<1> *pTStack_7de0;
  SWidget *local_7dd8;
  TReferenceControllerBase<1> *pTStack_7dd0;
  FText local_7dc8;
  TSharedRef<SWidget,1> local_7db8;
  FMargin local_7da8;
  undefined1 local_7d98;
  undefined1 local_7d90 [8];
  ForAnyElementType FStack_7d88;
  ulonglong local_7d80;
  longlong local_7d78;
  FDeprecateSlateVector2D FStack_7d70;
  undefined1 local_7d68;
  undefined1 local_7d60 [8];
  ForAnyElementType FStack_7d58;
  ulonglong local_7d50;
  undefined8 local_7d48;
  undefined8 uStack_7d40;
  undefined1 local_7d38;
  undefined1 local_7d30 [8];
  ForAnyElementType FStack_7d28;
  ulonglong local_7d20;
  FMargin local_7d18;
  undefined1 local_7d08;
  undefined1 local_7d00 [8];
  ForAnyElementType FStack_7cf8;
  ulonglong local_7cf0;
  longlong local_7ce8;
  FDeprecateSlateVector2D FStack_7ce0;
  undefined1 local_7cd8;
  undefined1 local_7cd0 [8];
  ForAnyElementType FStack_7cc8;
  ulonglong local_7cc0;
  undefined4 local_7cb8;
  FScriptContainerElement local_7cb4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> local_7cb0;
  FArguments *local_7c98;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_7c90;
  TReferenceControllerBase<1> *local_7c88;
  TReferenceControllerBase<1> *local_7c80;
  TReferenceControllerBase<1> *local_7c78;
  TReferenceControllerBase<1> *local_7c70;
  TReferenceControllerBase<1> *local_7c68;
  TSharedPtr<FTranslationPickerTextItem,1> *local_7c60;
  TSharedPtr<FTranslationPickerTextItem,1> *local_7c58;
  undefined4 local_7c50 [2];
  undefined4 local_7c48 [2];
  undefined4 local_7c40 [2];
  TVector2<float>_u_0 local_7c38;
  FName local_7c30;
  FMemScope local_7c28;
  FName local_7c20;
  FMemScope local_7c18;
  FName local_7c10;
  FMemScope local_7c08;
  FMemScope local_7c00;
  FName local_7bf8;
  FMemScope local_7bf0;
  FName local_7be8;
  FMemScope local_7be0;
  FArguments *local_7bd8;
  FName local_7bd0;
  FMemScope local_7bc8;
  FSlotArguments *local_7bc0;
  FSlotArguments *local_7bb8;
  FArguments *local_7bb0;
  FText local_7ba8;
  bool local_7b98;
  TDelegateBase<FNotThreadSafeDelegateMode> local_7b90;
  FLinearColor_u_0 local_7b78;
  undefined1 local_7b68;
  undefined1 local_7b64;
  undefined8 local_7b60;
  undefined8 uStack_7b58;
  undefined8 local_7b50;
  TAttribute<EVisibility> local_7b48;
  TAttribute<bool> local_7b28;
  TAttribute<bool> local_7b08;
  TAttribute<float> local_7ae8;
  TAttribute<EVisibility> local_7ac8;
  TAttribute<bool> local_7aa8;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_7a88;
  TSharedRef<SWidget,1> local_7a70;
  TSharedRef<SWidget,1> local_7a60;
  TSharedRef<SWidget,1> local_7a50;
  TSharedRef<SWidget,1> local_7a40;
  TSharedRef<SWidget,1> local_7a30;
  TSharedRef<SWidget,1> local_7a20;
  FScriptContainerElement *local_7a08;
  int iStack_7a00;
  undefined4 uStack_79fc;
  longlong local_79f8;
  FDeprecateSlateVector2D FStack_79f0;
  undefined1 local_79e8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_79e0;
  longlong local_79c8;
  FDeprecateSlateVector2D FStack_79c0;
  undefined1 local_79b8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_79b0;
  FScriptContainerElement *local_7998;
  int iStack_7990;
  undefined4 uStack_798c;
  FScriptContainerElement *local_7988;
  int iStack_7980;
  undefined4 uStack_797c;
  TSharedRef<SWidget,1> local_7978;
  TSharedRef<SWidget,1> local_7968;
  TSharedRef<SWidget,1> local_7958;
  TAttribute<FSlateBrush_const_*> local_7948;
  FDestructionSentinel local_7920;
  FDestructionSentinel local_7908;
  FDestructionSentinel local_78f0;
  FDestructionSentinel local_78d8;
  FDestructionSentinel local_78c0;
  FDestructionSentinel local_78a8;
  FDestructionSentinel local_7890;
  FMargin local_7878;
  EStyleColor local_7867;
  undefined1 uStack_7866;
  undefined1 local_7865;
  TAttribute<FMargin> local_7860;
  TAttribute<FText> local_7830;
  TAttribute<FText> local_7800;
  TAttribute<FText> local_77d0;
  TAttribute<FText> local_77a0;
  undefined1 local_7770 [16];
  bool local_7760;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_7758;
  TAttribute<FText> local_7740;
  undefined1 local_7710 [16];
  bool local_7700;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_76f8;
  TAttribute<FText> local_76e0;
  TSharedRef<SButton,1> local_76b0;
  FText local_76a0;
  code *local_7688;
  longlong lStack_7680;
  TSharedRef<SButton,1> local_7678;
  FText local_7668;
  FText local_7658;
  TSharedRef<STextBlock,1> local_7648;
  FText local_7638;
  FName local_7628;
  FName local_7620;
  FName local_7618;
  FTranslationPickerTextItem *local_7610;
  TReferenceControllerBase<1> *pTStack_7608;
  FMargin local_7600;
  TStringView<wchar_t> local_75e8;
  TStringView<wchar_t> local_75d8;
  SMultiLineEditableTextBox *local_75c8;
  TReferenceControllerBase<1> *pTStack_75c0;
  TSharedRef<SBorder,1> local_75b8;
  TSharedRef<SBorder,1> local_75a8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_7598;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_7580;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_7568;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7550;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7538;
  TSharedRef<SHorizontalBox,1> local_7520;
  TSharedRef<SVerticalBox,1> local_7510;
  TSharedRef<SBox,1> local_7500;
  TSharedRef<SMultiLineEditableTextBox,1> local_74f0;
  FText local_74e0;
  FText local_74d0;
  TSharedRef<SMultiLineEditableTextBox,1> local_74c0;
  FText local_74b0;
  TSharedRef<SBox,1> local_74a0;
  TSharedRef<STextBlock,1> local_7490;
  FText local_7480;
  TSharedRef<STextBlock,1> local_7470;
  FText local_7460;
  FText local_7450;
  FText local_7440;
  FText local_7430;
  TSharedRef<STextBlock,1> local_7420;
  TSharedRef<STextBlock,1> local_7410;
  FText local_7400;
  TStringView<wchar_t> local_73e8;
  TSharedRef<SEditableTextBox,1> local_73d8;
  FText local_73c8;
  TSharedRef<STextBlock,1> local_73b8;
  FText local_73a8;
  TSharedRef<SEditableTextBox,1> local_7398;
  FText local_7388;
  FString local_7378;
  code *local_7368;
  longlong lStack_7360;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_7358;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_7340;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7328;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7310;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_72f8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_72e0;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_72c8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_72b0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_7298;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7280;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_7268;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_7250;
  FMargin local_7238;
  FMargin local_7228;
  FMargin local_7218;
  FMargin local_7208;
  FMargin local_71f8;
  TAttribute<bool> local_71e8;
  TAttribute<EVisibility> local_71c8;
  TAttribute<bool> local_71a8;
  TAttribute<EVisibility> local_7188;
  undefined1 local_7168 [152];
  undefined1 local_70d0 [152];
  undefined1 local_7038 [152];
  undefined1 local_6fa0 [152];
  TAttribute<FText> local_6f08;
  TAttribute<FMargin> local_6ed8;
  TAttribute<FText> local_6ea8;
  TAttribute<FMargin> local_6e78;
  TAttribute<FText> local_6e48;
  TAttribute<FMargin> local_6e18;
  TAttribute<FMargin> local_6de8;
  TAttribute<FText> local_6db8;
  TAttribute<FMargin> local_6d88;
  TAttribute<FText> local_6d58;
  TAttribute<FMargin> local_6d28;
  TAttribute<FMargin> local_6cf8;
  TAttribute<FText> local_6cc8;
  TAttribute<FMargin> local_6c98;
  FArguments local_6c68;
  FTextBlockStyle local_6a38;
  FArguments local_6758;
  FArguments local_6460;
  FArguments local_6258;
  FSlotArguments local_6050;
  FSlotArguments local_5f68;
  FArguments local_5e80;
  FArguments local_5b40;
  FArguments local_5800;
  FArguments local_5420;
  FArguments local_5040;
  FArguments local_4b00;
  FArguments local_45c0;
  FArguments local_4068;
  FArguments local_3b10;
  FArguments local_35b8;
  FArguments local_3060;
  FArguments local_2b08;
  FArguments local_25b0;
  FArguments local_1ef0;
  FArguments local_1830;
  FArguments local_fc8;
  FScopedWidgetSlotArguments local_758;
  FScopedWidgetSlotArguments local_678;
  FScopedWidgetSlotArguments local_598;
  FScopedWidgetSlotArguments local_4b8;
  FScopedWidgetSlotArguments local_3d8;
  FScopedWidgetSlotArguments local_2f8;
  FScopedWidgetSlotArguments local_218;
  FScopedWidgetSlotArguments local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_7f98;
  pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar38 = param_3->Object;
  local_7c60 = &this->Item;
  this_03 = (FSlateBrush *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7610 = local_7c60->Object;
  pTStack_7608 = (this->Item).SharedReferenceCount.ReferenceController;
  local_7c60->Object = pFVar38;
  (this->Item).SharedReferenceCount.ReferenceController = pTVar5;
  local_7c58 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7608);
  pFVar25 = STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::FArguments
                      (&local_6758);
  STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)this,pFVar25,param_2);
  (**(code **)(this->_padding_ + 0x80))
            (this,param_2->Object->TableViewMode,&pFVar25->_Padding,&pFVar25->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6758._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._Padding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6758._OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6758);
  pFVar26 = ::FName::FName(&local_7628,"WhiteBrush");
  FVar6 = *pFVar26;
  pIVar27 = FAppStyle::Get();
  local_7948.Value = (FSlateBrush *)(**(code **)((longlong)*pIVar27 + 0x50))(pIVar27,FVar6,0,0);
  local_7948.bIsSet = true;
  local_7948.Getter._16_8_ = 0;
  local_7948.Getter._0_8_ = 0;
  local_7948.Getter._8_8_ = 0;
  SBorder::SetBorderImage((SBorder *)&this->_padding_,&local_7948);
  local_7b78._s_0.R = FLinearColor::sRGBToLinearTable[0x24];
  local_7b50 = 0;
  local_7b78._s_0.G = FLinearColor::sRGBToLinearTable[0x24];
  local_7b78._s_0.B = FLinearColor::sRGBToLinearTable[0x24];
  local_7b78._s_0.A = 1.0;
  local_7b68 = 0;
  local_7b64 = 1;
  local_7b60 = 0;
  uStack_7b58 = 0;
  SBorder::SetBorderBackgroundColor
            ((SBorder *)&this->_padding_,(TAttribute<FSlateColor> *)&local_7b78._s_0);
  pFVar28 = FTextBlockStyle::GetDefault();
  FTextBlockStyle::FTextBlockStyle(&local_6a38,pFVar28);
  local_6a38.ColorAndOpacity.ColorUseRule = UseColor_Specified;
  local_6a38.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::White.field0_0x0._s_0.R];
  local_6a38.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::White.field0_0x0._s_0.G];
  local_6a38.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::White.field0_0x0._s_0.B];
  local_6a38.ColorAndOpacity.ColorTableId = local_7867;
  local_6a38.ColorAndOpacity._18_1_ = uStack_7866;
  local_6a38.ColorAndOpacity._19_1_ = local_7865;
  local_6a38.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.A =
       (float)FColorList::White.field0_0x0._3_1_ * __real_3b808081;
  pFVar29 = ::operator_new(0xb0);
  pFVar33 = this_03;
  if (pFVar29 != (FSlateBrush *)0x0) {
    local_7c38 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_7600.Left = 0.0;
    local_7600.Top = 0.0;
    local_7600.Right = 0.0;
    local_7600.Bottom = 0.0;
    local_7e30 = 0;
    FSlateBrush::FSlateBrush
              (pFVar29,Image,(FName)0x0,&local_7600,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_7c38._s_0,&FLinearColor::White,(UObject *)0x0,
               false);
    pFVar29->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar33 = pFVar29;
  }
  local_7860.bIsSet = true;
  local_7f28.Object = (SGridPanel *)0x0;
  local_7f28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7860.Value.Left = ___xmm_40a0000040a0000040a0000040a00000;
  local_7860.Value.Top = _UNK_150925424;
  local_7860.Value.Right = _UNK_150925428;
  local_7860.Value.Bottom = _UNK_15092542c;
  local_7860.Getter._16_8_ = 0;
  local_7860.Getter._0_8_ = 0;
  local_7860.Getter._8_8_ = 0;
  local_7c90 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                         ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                           *)&this->_padding_,&local_7860);
  pFVar30 = SBorder::FArguments::FArguments(&local_5420);
  uVar17 = _UNK_150a1c898;
  local_7e50 = local_7e50 & 0xffffff00;
  local_7e4c = 1;
  local_7e38 = 0;
  local_7e60 = ___xmm_3ee666663f8000003f8000003f800000;
  uStack_7e58 = _UNK_150a1c898;
  local_7e48 = (undefined1  [8])0x0;
  FStack_7e40.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar30->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3ee666663f8000003f8000003f800000;
  *(undefined8 *)((longlong)&(pFVar30->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
       = uVar17;
  (pFVar30->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_7e50;
  (pFVar30->_BorderBackgroundColor).Value.ColorTableId = local_7e50._1_1_;
  *(undefined2 *)&(pFVar30->_BorderBackgroundColor).Value.field_0x12 = local_7e50._2_2_;
  (pFVar30->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7e48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7e48,
             (FWriteAccessScope *)&local_7920);
  if (((int)local_7e38 != 0) && (FStack_7e40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7e40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e40,0,0,0x10);
    local_7e38 = local_7e38 & 0xffffffff00000000;
  }
  if (local_7920.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7920.Accessor,&local_7920);
  }
  if (FStack_7e40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7e48);
  local_7e80 = 1;
  local_7e68 = 0;
  local_7e78 = (undefined1  [8])0x0;
  FStack_7e70.Data = (FScriptContainerElement *)0x0;
  (pFVar30->_BorderImage).Value = pFVar33;
  (pFVar30->_BorderImage).bIsSet = true;
  local_7e88 = pFVar33;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7e78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7e78,
             (FWriteAccessScope *)&local_7908);
  if (((int)local_7e68 != 0) && (FStack_7e70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7e70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e70,0,0,0x10);
    local_7e68 = local_7e68 & 0xffffffff00000000;
  }
  if (local_7908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7908.Accessor,&local_7908);
  }
  if (FStack_7e70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7e78);
  uVar17 = _UNK_15076ba38;
  local_7d38 = 1;
  local_7d20 = 0;
  local_7d48 = ___xmm_40000000400000004000000040000000;
  uStack_7d40 = _UNK_15076ba38;
  local_7d30 = (undefined1  [8])0x0;
  FStack_7d28.Data = (FScriptContainerElement *)0x0;
  uVar16 = _UNK_15076ba34;
  (pFVar30->_Padding).Value.Left = (float)___xmm_40000000400000004000000040000000;
  uVar22 = _UNK_15076ba38;
  (pFVar30->_Padding).Value.Top = (float)uVar16;
  _UNK_15076ba38 = (undefined4)uVar17;
  _UNK_15076ba3c = SUB84(uVar17,4);
  uVar16 = _UNK_15076ba3c;
  (pFVar30->_Padding).Value.Right = (float)_UNK_15076ba38;
  _UNK_15076ba38 = uVar22;
  (pFVar30->_Padding).Value.Bottom = (float)uVar16;
  (pFVar30->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7d30,
             (FWriteAccessScope *)&local_78f0);
  if (((int)local_7d20 != 0) && (FStack_7d28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7d28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7d28,0,0,0x10);
    local_7d20 = local_7d20 & 0xffffffff00000000;
  }
  if (local_78f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78f0.Accessor,&local_78f0);
  }
  if (FStack_7d28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7d28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7d30);
  local_7c98 = SBorder::FArguments::FArguments(&local_5800);
  uVar17 = _UNK_150925428;
  local_7d08 = 1;
  local_7cf0 = 0;
  local_7d18.Left = ___xmm_40a0000040a0000040a0000040a00000;
  local_7d18.Top = _UNK_150925424;
  local_7d18.Right = _UNK_150925428;
  local_7d18.Bottom = _UNK_15092542c;
  local_7d00 = (undefined1  [8])0x0;
  FStack_7cf8.Data = (FScriptContainerElement *)0x0;
  fVar15 = _UNK_150925424;
  (local_7c98->_Padding).Value.Left = ___xmm_40a0000040a0000040a0000040a00000;
  uVar22 = _UNK_150925428;
  (local_7c98->_Padding).Value.Top = fVar15;
  _UNK_150925428 = (float)uVar17;
  _UNK_15092542c = SUB84(uVar17,4);
  fVar15 = _UNK_15092542c;
  (local_7c98->_Padding).Value.Right = _UNK_150925428;
  _UNK_150925428 = uVar22;
  (local_7c98->_Padding).Value.Bottom = fVar15;
  (local_7c98->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_7c98->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7d00,
             (FWriteAccessScope *)&local_78d8);
  if (((int)local_7cf0 != 0) && (FStack_7cf8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7cf8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7cf8,0,0,0x10);
    local_7cf0 = local_7cf0 & 0xffffffff00000000;
  }
  if (local_78d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78d8.Accessor,&local_78d8);
  }
  if (FStack_7cf8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7cf8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7d00);
  local_7bb0 = SHorizontalBox::FArguments::FArguments(&local_6258);
  pFVar31 = SHorizontalBox::Slot(&local_5f68);
  local_7ae8.Value = 1.0;
  local_7ae8.bIsSet = true;
  local_7ae8.Getter._16_8_ = 0;
  local_7ae8.Getter._0_8_ = 0;
  local_7ae8.Getter._8_8_ = 0;
  local_7bb8 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar31,&local_7ae8);
  uVar17 = _UNK_150925428;
  local_7d98 = 1;
  local_7d80 = 0;
  local_7da8.Left = ___xmm_40a0000040a0000040a0000040a00000;
  local_7da8.Top = _UNK_150925424;
  local_7da8.Right = _UNK_150925428;
  local_7da8.Bottom = _UNK_15092542c;
  local_7d90 = (undefined1  [8])0x0;
  FStack_7d88.Data = (FScriptContainerElement *)0x0;
  fVar15 = _UNK_150925424;
  *(float *)&local_7bb8->field_0x18 = ___xmm_40a0000040a0000040a0000040a00000;
  uVar22 = _UNK_150925428;
  *(float *)&local_7bb8->field_0x1c = fVar15;
  _UNK_150925428 = (float)uVar17;
  _UNK_15092542c = SUB84(uVar17,4);
  fVar15 = _UNK_15092542c;
  *(float *)&local_7bb8->field_0x20 = _UNK_150925428;
  _UNK_150925428 = uVar22;
  *(float *)&local_7bb8->field_0x24 = fVar15;
  local_7bb8->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_7bb8->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7d90,
             (FWriteAccessScope *)&local_7890);
  if (((int)local_7d80 != 0) && (FStack_7d88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7d88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7d88,0,0,0x10);
    local_7d80 = local_7d80 & 0xffffffff00000000;
  }
  if (local_7890.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7890.Accessor,&local_7890);
  }
  if (FStack_7d88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7d88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7d90);
  local_7ef0 = SVerticalBox::FArguments::FArguments(&local_6460);
  local_7bc0 = SVerticalBox::Slot(&local_6050);
  pFVar32 = SGridPanel::FArguments::FArguments(&local_6c68);
  local_7cb8 = 0x3f800000;
  local_7cb4 = (FScriptContainerElement)0x1;
  local_7cb0._16_8_ = 0;
  local_7cb0._0_8_ = 0;
  local_7cb0._8_8_ = 0;
  pTVar3 = &pFVar32->ColFillCoefficients;
  iVar24 = (pFVar32->ColFillCoefficients).ArrayNum;
  while (iVar24 < 2) {
    iVar24 = (pFVar32->ColFillCoefficients).ArrayNum;
    if (iVar24 == (pFVar32->ColFillCoefficients).ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar3->AllocatorInstance,&(pFVar32->ColFillCoefficients).ArrayMax)
      ;
    }
    (pFVar32->ColFillCoefficients).ArrayNum = iVar24 + 1;
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    lVar66 = (longlong)iVar24 * 0x20;
    *(undefined4 *)(pFVar7 + lVar66) = 0;
    pFVar7[lVar66 + 4] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar7 + lVar66 + 0x18) = 0;
    *(undefined8 *)(pFVar7 + lVar66 + 8) = 0;
    *(undefined8 *)(pFVar7 + lVar66 + 0x10) = 0;
    iVar24 = (pFVar32->ColFillCoefficients).ArrayNum;
  }
  if (((pFVar32->ColFillCoefficients).ArrayNum < 2) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar7 = (pTVar3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar7 + 0x20) = local_7cb8;
  pFVar7[0x24] = local_7cb4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar7 + 0x28),
             &local_7cb0);
  pFVar33 = (FSlateBrush *)SGridPanel::Slot((FSlotArguments *)local_6fa0,0,0,(Layer)0x0);
  FVar18 = _UNK_150d56638;
  lVar66 = ___xmm_40200000402000004020000040200000;
  local_7cd8 = 1;
  local_7cc0 = 0;
  local_7ce8 = ___xmm_40200000402000004020000040200000;
  FStack_7ce0 = _UNK_150d56638;
  local_7cd0 = (undefined1  [8])0x0;
  FStack_7cc8.Data = (FScriptContainerElement *)0x0;
  *(longlong *)&(pFVar33->TintColor).ColorUseRule = ___xmm_40200000402000004020000040200000;
  pFVar33->ImageSize = FVar18;
  *(undefined1 *)&(pFVar33->Margin).Left = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->Margin).Right,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7cd0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7cd0,
             (FWriteAccessScope *)&local_78a8);
  if (((int)local_7cc0 != 0) && (FStack_7cc8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7cc8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7cc8,0,0,0x10);
    local_7cc0 = local_7cc0 & 0xffffffff00000000;
  }
  if (local_78a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78a8.Accessor,&local_78a8);
  }
  if (FStack_7cc8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7cc8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7cd0);
  puVar1 = (undefined4 *)((longlong)&(pFVar33->OutlineSettings).CornerRadii.field0_0x0 + 8);
  if (local_7c50 != puVar1) {
    *puVar1 = 3;
    *(undefined1 *)((longlong)&(pFVar33->OutlineSettings).CornerRadii.field0_0x0 + 0xc) = 1;
  }
  pFVar29 = this_03;
  if (puVar1 != (undefined4 *)0x0) {
    pFVar29 = pFVar33;
  }
  pFVar34 = STextBlock::FArguments::FArguments(&local_4068);
  pFVar34->_TextStyle = &local_6a38;
  pFVar35 = FText::AsLocalizable_Advanced_LocText
                      (&local_7460,L"TranslationPicker",L"SourceLabel",L"Source:");
  FText::FText(&local_7830.Value,pFVar35);
  local_7830.bIsSet = true;
  local_7830.Getter._16_8_ = 0;
  local_7830.Getter._0_8_ = 0;
  local_7830.Getter._8_8_ = 0;
  pFVar34 = STextBlock::FArguments::Text(pFVar34,&local_7830);
  FLLMScope::FLLMScope(&local_7efc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7c30 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7c28,&local_7c30,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_7538,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x1d5,&local_7f47);
  FMemScope::~FMemScope(&local_7c28);
  FLLMScope::~FLLMScope(&local_7efc);
  pTVar36 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7538,&local_7470,pFVar34);
  local_7ee0 = pTVar36->Object;
  local_7ed8.ReferenceController = (pTVar36->SharedReferenceCount).ReferenceController;
  if (local_7ed8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7ed8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7ed8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_7ed8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7ed8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7c68 = local_7ed8.ReferenceController;
  if (&pFVar29->TintColor != (FSlateColor *)&local_7ee0) {
    *(STextBlock **)&(pFVar29->TintColor).SpecifiedColor.field0_0x0 = local_7ee0;
    local_7ee0 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)
               ((longlong)&(pFVar29->TintColor).SpecifiedColor.field0_0x0 + 8),&local_7ed8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7ed8.ReferenceController);
  local_7ef8 = (FName)SGridPanel::FArguments::operator+(pFVar32,(FSlotArguments *)pFVar29);
  iVar24 = 0;
  pFVar33 = (FSlateBrush *)SGridPanel::Slot((FSlotArguments *)local_7038,0,1,(Layer)0x0);
  local_7d68 = 1;
  local_7d50 = 0;
  local_7d78 = lVar66;
  FStack_7d70 = FVar18;
  local_7d60 = (undefined1  [8])0x0;
  FStack_7d58.Data = (FScriptContainerElement *)0x0;
  *(longlong *)&(pFVar33->TintColor).ColorUseRule = lVar66;
  pFVar33->ImageSize = FVar18;
  *(undefined1 *)&(pFVar33->Margin).Left = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->Margin).Right,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7d60,
             (FWriteAccessScope *)&local_78c0);
  if (((int)local_7d50 != 0) && (FStack_7d58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7d58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7d58,0,0,0x10);
    local_7d50 = local_7d50 & 0xffffffff00000000;
  }
  if (local_78c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78c0.Accessor,&local_78c0);
  }
  if (FStack_7d58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7d58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7d60);
  puVar1 = (undefined4 *)((longlong)&(pFVar33->OutlineSettings).CornerRadii.field0_0x0 + 8);
  if (local_7c48 != puVar1) {
    *puVar1 = 3;
    *(undefined1 *)((longlong)&(pFVar33->OutlineSettings).CornerRadii.field0_0x0 + 0xc) = 1;
  }
  pFVar29 = this_03;
  if (puVar1 != (undefined4 *)0x0) {
    pFVar29 = pFVar33;
  }
  pFVar37 = SBox::FArguments::FArguments(&local_5b40);
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
  local_7ac8.bIsSet = true;
  local_7ac8.Value = EVisibility::Visible;
  if (pFVar38->bHasRequiredLocalizationInfoForSaving == false) {
    local_7ac8.Value = EVisibility::Collapsed;
  }
  local_7ac8.Getter._16_8_ = 0;
  local_7ac8.Getter._0_8_ = 0;
  local_7ac8.Getter._8_8_ = 0;
  pFVar37 = TSlateBaseNamedArgs<SBox>::Visibility((TSlateBaseNamedArgs<SBox> *)pFVar37,&local_7ac8);
  pFVar34 = STextBlock::FArguments::FArguments(&local_45c0);
  pFVar34->_TextStyle = &local_6a38;
  pFVar35 = FText::AsLocalizable_Advanced_LocText
                      (&local_7480,L"TranslationPicker",L"TranslationLabel",L"Translation:");
  FText::FText(&local_7800.Value,pFVar35);
  local_7800.bIsSet = true;
  local_7800.Getter._16_8_ = 0;
  local_7800.Getter._0_8_ = 0;
  local_7800.Getter._8_8_ = 0;
  pFVar34 = STextBlock::FArguments::Text(pFVar34,&local_7800);
  FLLMScope::FLLMScope(&local_7f00,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7c20 = LLMTagDeclaration_UI_Slate.UniqueName;
  bVar23 = true;
  FMemScope::FMemScope(&local_7c18,&local_7c20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_7550,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x1e2,&local_7f46);
  FMemScope::~FMemScope(&local_7c18);
  FLLMScope::~FLLMScope(&local_7f00);
  pTVar36 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7550,&local_7490,pFVar34);
  pSVar8 = pTVar36->Object;
  local_7c70 = (pTVar36->SharedReferenceCount).ReferenceController;
  if (local_7c70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_7c70->SharedReferenceCount = (atomic<int>)((int)local_7c70->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_7c70->SharedReferenceCount = (atomic<int>)((int)local_7c70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7e08 = (pFVar37->_Content).Widget.Object;
  pTStack_7e00 = (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar37->_Content).Widget.Object = (SWidget *)pSVar8;
  (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController = local_7c70;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7e00);
  FLLMScope::FLLMScope(&local_7f14,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7c10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7c08,&local_7c10,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_7568,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x1de,&local_7f45);
  FMemScope::~FMemScope(&local_7c08);
  FLLMScope::~FLLMScope(&local_7f14);
  pTVar39 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7568,&local_74a0,pFVar37);
  local_7ed0 = pTVar39->Object;
  local_7ec8.ReferenceController = (pTVar39->SharedReferenceCount).ReferenceController;
  if (local_7ec8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7ec8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7ec8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_7ec8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7ec8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7c78 = local_7ec8.ReferenceController;
  if (&pFVar29->TintColor != (FSlateColor *)&local_7ed0) {
    *(SBox **)&(pFVar29->TintColor).SpecifiedColor.field0_0x0 = local_7ed0;
    local_7ed0 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)
               ((longlong)&(pFVar29->TintColor).SpecifiedColor.field0_0x0 + 8),&local_7ec8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7ec8.ReferenceController);
  pFVar32 = SGridPanel::FArguments::operator+((FArguments *)local_7ef8,(FSlotArguments *)pFVar29);
  pFVar40 = SGridPanel::Slot((FSlotArguments *)local_70d0,1,0,(Layer)0x0);
  local_79e8 = 1;
  local_79e0._16_8_ = 0;
  local_79f8 = lVar66;
  FStack_79f0 = FVar18;
  local_79e0._0_8_ = 0;
  local_79e0._8_8_ = 0;
  pFVar40->_padding_ = lVar66;
  pFVar40->_padding_ = (longlong)FVar18;
  *(undefined1 *)&pFVar40->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar40->_padding_,&local_79e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_79e0)
  ;
  pFVar41 = SMultiLineEditableTextBox::FArguments::FArguments(&local_1830);
  local_7aa8.Value = true;
  local_7aa8.bIsSet = true;
  local_7aa8.Getter._16_8_ = 0;
  local_7aa8.Getter._0_8_ = 0;
  local_7aa8.Getter._8_8_ = 0;
  pFVar41 = SMultiLineEditableTextBox::FArguments::IsReadOnly(pFVar41,&local_7aa8);
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
  local_7998 = (pFVar38->SourceString).Data.AllocatorInstance.Data;
  iVar4 = (pFVar38->SourceString).Data.ArrayNum;
  iStack_7990 = iVar4 + -1;
  if (iVar4 == 0) {
    iStack_7990 = iVar24;
  }
  local_75e8._12_4_ = uStack_798c;
  local_75e8.Size = iStack_7990;
  local_75e8.DataPtr = (wchar_t *)local_7998;
  pFVar35 = FText::AsCultureInvariant(&local_74b0,&local_75e8);
  FText::FText(&local_77d0.Value,pFVar35);
  local_77d0.bIsSet = true;
  local_77d0.Getter._16_8_ = 0;
  local_77d0.Getter._0_8_ = 0;
  local_77d0.Getter._8_8_ = 0;
  pFVar41 = SMultiLineEditableTextBox::FArguments::Text(pFVar41,&local_77d0);
  FLLMScope::FLLMScope(&local_7f10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7ef8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7c00,&local_7ef8,true);
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_7580,"SMultiLineEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x1ef,&local_7f44);
  FMemScope::~FMemScope(&local_7c00);
  FLLMScope::~FLLMScope(&local_7f10);
  pTVar42 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7580,&local_74c0,pFVar41);
  local_7ec0 = pTVar42->Object;
  local_7eb8.ReferenceController = (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_7eb8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7eb8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7eb8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_7eb8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7eb8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7c80 = local_7eb8.ReferenceController;
  if ((SMultiLineEditableTextBox **)&pFVar40->_padding_ != &local_7ec0) {
    pFVar40->_padding_ = (longlong)local_7ec0;
    local_7ec0 = (SMultiLineEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->_padding_,&local_7eb8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7eb8.ReferenceController);
  local_7bd8 = SGridPanel::FArguments::operator+(pFVar32,pFVar40);
  pFVar40 = SGridPanel::Slot((FSlotArguments *)local_7168,1,1,(Layer)0x0);
  local_79b8 = 1;
  local_79b0._16_8_ = 0;
  local_79c8 = lVar66;
  FStack_79c0 = FVar18;
  local_79b0._0_8_ = 0;
  local_79b0._8_8_ = 0;
  pFVar40->_padding_ = lVar66;
  pFVar40->_padding_ = (longlong)FVar18;
  *(undefined1 *)&pFVar40->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar40->_padding_,&local_79b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_79b0)
  ;
  pFVar37 = SBox::FArguments::FArguments(&local_5e80);
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
  local_7b48.bIsSet = true;
  local_7b48.Value = EVisibility::Visible;
  if (pFVar38->bHasRequiredLocalizationInfoForSaving == false) {
    local_7b48.Value = EVisibility::Collapsed;
  }
  local_7b48.Getter._16_8_ = 0;
  local_7b48.Getter._0_8_ = 0;
  local_7b48.Getter._8_8_ = 0;
  pFVar37 = TSlateBaseNamedArgs<SBox>::Visibility((TSlateBaseNamedArgs<SBox> *)pFVar37,&local_7b48);
  pFVar41 = SMultiLineEditableTextBox::FArguments::FArguments(&local_fc8);
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
  if ((pFVar38->bAllowEditing != false) &&
     (pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item),
     pFVar38->bHasRequiredLocalizationInfoForSaving != false)) {
    bVar23 = false;
  }
  local_7b28.Getter._16_8_ = 0;
  local_7b28.bIsSet = true;
  local_7b28.Getter._0_8_ = 0;
  local_7b28.Getter._8_8_ = 0;
  local_7b28.Value = bVar23;
  pFVar41 = SMultiLineEditableTextBox::FArguments::IsReadOnly(pFVar41,&local_7b28);
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
  local_7988 = (pFVar38->TranslationString).Data.AllocatorInstance.Data;
  iVar4 = (pFVar38->TranslationString).Data.ArrayNum;
  iStack_7980 = iVar4 + -1;
  if (iVar4 == 0) {
    iStack_7980 = iVar24;
  }
  local_75d8._12_4_ = uStack_797c;
  local_75d8.Size = iStack_7980;
  local_75d8.DataPtr = (wchar_t *)local_7988;
  pFVar35 = FText::AsCultureInvariant(&local_74d0,&local_75d8);
  FText::FText(&local_77a0.Value,pFVar35);
  local_77a0.bIsSet = true;
  local_77a0.Getter._16_8_ = 0;
  local_77a0.Getter._0_8_ = 0;
  local_77a0.Getter._8_8_ = 0;
  pFVar41 = SMultiLineEditableTextBox::FArguments::Text(pFVar41,&local_77a0);
  pFVar35 = FText::AsLocalizable_Advanced_LocText
                      (&local_74e0,L"TranslationPicker",L"TranslationEditTextBox_HintText",
                       L"Enter/edit translation here.");
  FText::FText(&local_7ba8,pFVar35);
  local_7b98 = true;
  local_7b90._16_8_ = 0;
  local_7b90._0_8_ = 0;
  local_7b90._8_8_ = 0;
  FText::operator=(&(pFVar41->_HintText).Value,&local_7ba8);
  (pFVar41->_HintText).bIsSet = local_7b98;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar41->_HintText).Getter,&local_7b90);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_7b90)
  ;
  if (local_7ba8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7ba8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_7f0c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7bf8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7bf0,&local_7bf8,true);
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_7a88,"SMultiLineEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x1fb,&local_7f43);
  FMemScope::~FMemScope(&local_7bf0);
  FLLMScope::~FLLMScope(&local_7f0c);
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
  if (local_7a88._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7a88._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7a88._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_75c8 = (pFVar38->TextBox).Object;
  pTStack_75c0 = (pFVar38->TextBox).SharedReferenceCount.ReferenceController;
  (pFVar38->TextBox).Object = local_7a88._Widget.Object;
  (pFVar38->TextBox).SharedReferenceCount.ReferenceController =
       local_7a88._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_75c0);
  pTVar42 = TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7a88,&local_74f0,pFVar41);
  pSVar9 = pTVar42->Object;
  local_7c88 = (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_7c88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_7c88->SharedReferenceCount = (atomic<int>)((int)local_7c88->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_7c88->SharedReferenceCount = (atomic<int>)((int)local_7c88->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7df8 = (pFVar37->_Content).Widget.Object;
  pTStack_7df0 = (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar37->_Content).Widget.Object = (SWidget *)pSVar9;
  (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController = local_7c88;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7df0);
  FLLMScope::FLLMScope(&local_7f08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7be8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7be0,&local_7be8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_7598,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x1f7,&local_7f42);
  FMemScope::~FMemScope(&local_7be0);
  FLLMScope::~FLLMScope(&local_7f08);
  pTVar39 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7598,&local_7500,pFVar37);
  local_7eb0 = pTVar39->Object;
  local_7ee8 = (pTVar39->SharedReferenceCount).ReferenceController;
  if (local_7ee8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_7ee8->SharedReferenceCount = (atomic<int>)((int)local_7ee8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_7ee8->SharedReferenceCount = (atomic<int>)((int)local_7ee8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7ea8.ReferenceController = local_7ee8;
  if ((SBox **)&pFVar40->_padding_ != &local_7eb0) {
    pFVar40->_padding_ = (longlong)local_7eb0;
    local_7eb0 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->_padding_,&local_7ea8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7ea8.ReferenceController);
  pFVar32 = SGridPanel::FArguments::operator+(local_7bd8,pFVar40);
  FLLMScope::FLLMScope(&local_7f04,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7bd0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7bc8,&local_7bd0,true);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_7ea0,"SGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x1ce,&local_7f41);
  FMemScope::~FMemScope(&local_7bc8);
  FLLMScope::~FLLMScope(&local_7f04);
  FVar20.ReferenceController = local_7ea0._Widget.SharedReferenceCount.ReferenceController;
  pSVar51 = local_7ea0._Widget.Object;
  FVar19.ReferenceController = local_7f28.SharedReferenceCount.ReferenceController;
  if (local_7ea0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7ea0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7ea0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_7f28.Object = local_7ea0._Widget.Object;
  local_7f28.SharedReferenceCount.ReferenceController =
       local_7ea0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  pSVar43 = TSharedPtr<SGridPanel,1>::operator->(&local_7ea0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar43,(FSlateBaseNamedArgs *)pFVar32);
  SGridPanel::Construct(local_7ea0._Widget.Object,pFVar32);
  pSVar43 = TSharedPtr<SGridPanel,1>::operator->(&local_7ea0._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar43);
  pSVar43 = TSharedPtr<SGridPanel,1>::operator->(&local_7ea0._Widget);
  pbVar2 = (byte *)((longlong)&pSVar43->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_7ea0._Widget.Object == (SGridPanel *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar23)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_7ea0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7ea0._Widget.Object = (SGridPanel *)0x0;
  if ((pSVar51 == (SGridPanel *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar23)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_7978.Object = (SWidget *)pSVar51;
  local_7978.SharedReferenceCount.ReferenceController = FVar20.ReferenceController;
  if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar44 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_7bc0,&local_7978);
  pFVar45 = SVerticalBox::FArguments::operator+(local_7ef0,pFVar44);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_7340,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x1cb,&local_7f40);
  pTVar46 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_7510,pFVar45);
  local_7968.Object = (SWidget *)pTVar46->Object;
  local_7ef0 = (FArguments *)(pTVar46->SharedReferenceCount).ReferenceController;
  if (local_7ef0 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_7ef0)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_7ef0)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7968.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_7ef0;
  pFVar31 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_7bb8,&local_7968);
  pFVar47 = SHorizontalBox::FArguments::operator+(local_7bb0,pFVar31);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_7358,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x1c5,&local_7f3f);
  pTVar48 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_7520,pFVar47);
  pFVar21 = local_7c98;
  pTVar5 = (pTVar48->SharedReferenceCount).ReferenceController;
  pSVar10 = pTVar48->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7de8 = (local_7c98->_Content).Widget.Object;
  pTStack_7de0 = (local_7c98->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_7c98->_Content).Widget.Object = (SWidget *)pSVar10;
  (local_7c98->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7de0);
  pTVar49 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_7250,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x1c2,&local_7f3e);
  pTVar50 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar49,&local_75a8,pFVar21);
  pTVar11 = (pTVar50->SharedReferenceCount).ReferenceController;
  pSVar12 = pTVar50->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7dd8 = (pFVar30->_Content).Widget.Object;
  pTStack_7dd0 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)pSVar12;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7dd0);
  pTVar49 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_7268,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x1bc,&local_7f3d);
  pTVar50 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar49,&local_75b8,pFVar30);
  pTVar13 = (pTVar50->SharedReferenceCount).ReferenceController;
  local_7958.Object = (SWidget *)pTVar50->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7958.SharedReferenceCount.ReferenceController = pTVar13;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_7c90,&local_7958);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7268._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7250._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7520.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7358._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7ef0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7510.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7340._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7ea0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7ee8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7500.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7598._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7c88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a88._Widget.SharedReferenceCount.ReferenceController);
  if (local_74e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_74e0.TextData.Reference + 0x10))();
  }
  if (local_74d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_74d0.TextData.Reference + 0x10))();
  }
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_fc8);
  SBox::FArguments::~FArguments(&local_5e80);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_7168 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7168._16_8_);
  if ((undefined8 *)local_7168._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_7168._0_8_)(local_7168._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7c80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7580._Widget.SharedReferenceCount.ReferenceController);
  if (local_74b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_74b0.TextData.Reference + 0x10))();
  }
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_1830);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_70d0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_70d0._16_8_);
  if ((undefined8 *)local_70d0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_70d0._0_8_)(local_70d0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7c78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7568._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7c70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7490.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7550._Widget.SharedReferenceCount.ReferenceController);
  if (local_7480.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7480.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_45c0);
  SBox::FArguments::~FArguments(&local_5b40);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_7038 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7038._16_8_);
  if ((undefined8 *)local_7038._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_7038._0_8_)(local_7038._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7c68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7470.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7538._Widget.SharedReferenceCount.ReferenceController);
  if (local_7460.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7460.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_4068);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_6fa0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6fa0._16_8_);
  if ((undefined8 *)local_6fa0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_6fa0._0_8_)(local_6fa0._0_8_,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_7cb0);
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)local_6c68.RowFillCoefficients.AllocatorInstance.Data,
             local_6c68.RowFillCoefficients.ArrayNum);
  if ((TAttribute<float> *)local_6c68.RowFillCoefficients.AllocatorInstance.Data !=
      (TAttribute<float> *)0x0) {
    FMemory::Free(local_6c68.RowFillCoefficients.AllocatorInstance.Data);
  }
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)local_6c68.ColFillCoefficients.AllocatorInstance.Data,
             local_6c68.ColFillCoefficients.ArrayNum);
  if ((TAttribute<float> *)local_6c68.ColFillCoefficients.AllocatorInstance.Data !=
      (TAttribute<float> *)0x0) {
    FMemory::Free(local_6c68.ColFillCoefficients.AllocatorInstance.Data);
  }
  DestructItems<SGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_6c68._Slots.AllocatorInstance.Data,local_6c68._Slots.ArrayNum);
  if ((FSlotArguments *)local_6c68._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_6c68._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6c68);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_6050);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_6460._Slots.AllocatorInstance.Data,local_6460._Slots.ArrayNum);
  if ((FSlotArguments *)local_6460._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_6460._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6460);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_5f68);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_6258._Slots.AllocatorInstance.Data,local_6258._Slots.ArrayNum);
  if ((FSlotArguments *)local_6258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_6258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6258);
  SBorder::FArguments::~FArguments(&local_5800);
  SBorder::FArguments::~FArguments(&local_5420);
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
  if (((pFVar38->TextId).Namespace.Index != -1) || ((pFVar38->TextId).Key.Index != -1)) {
    pSVar51 = TSharedPtr<SGridPanel,1>::operator->(&local_7f28);
    pFVar52 = SGridPanel::AddSlot(pSVar51,&local_758,0,2,(Layer)0x0);
    local_7760 = true;
    local_7770._0_8_ = lVar66;
    local_7770._8_8_ = FVar18;
    local_7758._16_8_ = 0;
    local_7758._0_8_ = 0;
    local_7758._8_8_ = 0;
    pFVar33 = (FSlateBrush *)
              TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar52->_padding_,
                         (TAttribute<FMargin> *)local_7770);
    puVar1 = (undefined4 *)((longlong)&(pFVar33->OutlineSettings).CornerRadii.field0_0x0 + 8);
    if (local_7c40 != puVar1) {
      *puVar1 = 3;
      *(undefined1 *)((longlong)&(pFVar33->OutlineSettings).CornerRadii.field0_0x0 + 0xc) = 1;
    }
    if (puVar1 != (undefined4 *)0x0) {
      this_03 = pFVar33;
    }
    pFVar34 = STextBlock::FArguments::FArguments(&local_35b8);
    pFVar34->_TextStyle = &local_6a38;
    pFVar35 = FText::AsLocalizable_Advanced_LocText
                        (&local_7400,L"TranslationPicker",L"NamespaceLabel",L"Namespace:");
    FText::FText(&local_7740.Value,pFVar35);
    local_7740.bIsSet = true;
    local_7740.Getter._16_8_ = 0;
    local_7740.Getter._0_8_ = 0;
    local_7740.Getter._8_8_ = 0;
    pFVar34 = STextBlock::FArguments::Text(pFVar34,&local_7740);
    pTVar56 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_7310,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                         ,0x210,&local_7f3b);
    pTVar36 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar56,&local_7410,pFVar34);
    pTVar5 = (pTVar36->SharedReferenceCount).ReferenceController;
    local_7a20.Object = (SWidget *)pTVar36->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_7a20.SharedReferenceCount.ReferenceController = pTVar5;
    TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)this_03,&local_7a20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7410.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7310._Widget.SharedReferenceCount.ReferenceController);
    if (local_7400.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7400.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_35b8);
    TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_758);
    if ((local_7f28.Object == (SGridPanel *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar52 = SGridPanel::AddSlot(local_7f28.Object,&local_678,1,2,(Layer)0x0);
    local_7700 = true;
    local_7710._0_8_ = lVar66;
    local_7710._8_8_ = FVar18;
    local_76f8._16_8_ = 0;
    local_76f8._0_8_ = 0;
    local_76f8._8_8_ = 0;
    pFVar40 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar52->_padding_,
                         (TAttribute<FMargin> *)local_7710);
    pFVar57 = SEditableTextBox::FArguments::FArguments(&local_25b0);
    local_7b08.Value = true;
    local_7b08.bIsSet = true;
    local_7b08.Getter._16_8_ = 0;
    local_7b08.Getter._0_8_ = 0;
    local_7b08.Getter._8_8_ = 0;
    pFVar57 = SEditableTextBox::FArguments::IsReadOnly(pFVar57,&local_7b08);
    pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
    local_7a08 = (pFVar38->CleanNamespace).Data.AllocatorInstance.Data;
    iVar4 = (pFVar38->CleanNamespace).Data.ArrayNum;
    iStack_7a00 = iVar4 + -1;
    if (iVar4 == 0) {
      iStack_7a00 = iVar24;
    }
    local_73e8._12_4_ = uStack_79fc;
    local_73e8.Size = iStack_7a00;
    local_73e8.DataPtr = (wchar_t *)local_7a08;
    pFVar35 = FText::AsCultureInvariant(&local_73c8,&local_73e8);
    FText::FText(&local_76e0.Value,pFVar35);
    local_76e0.bIsSet = true;
    local_76e0.Getter._16_8_ = 0;
    local_76e0.Getter._0_8_ = 0;
    local_76e0.Getter._8_8_ = 0;
    pFVar57 = SEditableTextBox::FArguments::Text(pFVar57,&local_76e0);
    pTVar58 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                        (&local_72f8,"SEditableTextBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                         ,0x217,&local_7f3a);
    pTVar59 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar58,&local_73d8,pFVar57);
    pTVar5 = (pTVar59->SharedReferenceCount).ReferenceController;
    local_7a70.Object = (SWidget *)pTVar59->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_7a70.SharedReferenceCount.ReferenceController = pTVar5;
    TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar40,&local_7a70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_73d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_72f8._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_73c8);
    SEditableTextBox::FArguments::~FArguments(&local_25b0);
    TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_678);
    pSVar51 = TSharedPtr<SGridPanel,1>::operator->(&local_7f28);
    pFVar52 = SGridPanel::AddSlot(pSVar51,&local_598,0,3,(Layer)0x0);
    fVar15 = __real_40200000;
    pFVar53 = FMargin::FMargin(&local_7228,__real_40200000);
    pTVar54 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6c98,pFVar53);
    pFVar40 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar52->_padding_,pTVar54);
    pFVar40 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Right);
    pFVar34 = STextBlock::FArguments::FArguments(&local_3060);
    pFVar34->_TextStyle = &local_6a38;
    pFVar35 = FText::AsLocalizable_Advanced_LocText
                        (&local_73a8,L"TranslationPicker",L"KeyLabel",L"Key:");
    pTVar55 = TAttribute<FText>::TAttribute<FText>(&local_6f08,pFVar35);
    pFVar34 = STextBlock::FArguments::Text(pFVar34,pTVar55);
    pTVar56 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_72e0,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                         ,0x21f,&local_7f39);
    pTVar36 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar56,&local_73b8,pFVar34);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7a60,pTVar36);
    TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar40,&local_7a60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7a60.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_73b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_72e0._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_73a8);
    STextBlock::FArguments::~FArguments(&local_3060);
    TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_598);
    pSVar51 = TSharedPtr<SGridPanel,1>::operator->(&local_7f28);
    pFVar52 = SGridPanel::AddSlot(pSVar51,&local_4b8,1,3,(Layer)0x0);
    pFVar53 = FMargin::FMargin(&local_7218,fVar15);
    pTVar54 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6ed8,pFVar53);
    pFVar40 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar52->_padding_,pTVar54);
    pFVar57 = SEditableTextBox::FArguments::FArguments(&local_1ef0);
    local_7f48 = true;
    pTVar60 = TAttribute<bool>::TAttribute<bool>(&local_71e8,&local_7f48);
    pFVar57 = SEditableTextBox::FArguments::IsReadOnly(pFVar57,pTVar60);
    pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
    local_7f18.Index = (pFVar38->TextId).Key.Index;
    pFVar61 = FTextKey::ToString(&local_7f18,&local_7378);
    pFVar35 = FText::AsCultureInvariant(&local_7388,pFVar61);
    pTVar55 = TAttribute<FText>::TAttribute<FText>(&local_6ea8,pFVar35);
    pFVar57 = SEditableTextBox::FArguments::Text(pFVar57,pTVar55);
    pTVar58 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                        (&local_72c8,"SEditableTextBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                         ,0x226,&local_7f38);
    pTVar59 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar58,&local_7398,pFVar57);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_7db8,pTVar59);
    TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar40,&local_7db8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_7db8.SharedReferenceCount.ReferenceController._4_4_,
                        local_7db8.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7398.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_72c8._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_7388);
    ::FString::~FString(&local_7378);
    SEditableTextBox::FArguments::~FArguments(&local_1ef0);
    TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_4b8);
    pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
    if (pFVar38->bHasRequiredLocalizationInfoForSaving == false) {
      pSVar51 = TSharedPtr<SGridPanel,1>::operator->(&local_7f28);
      pFVar52 = SGridPanel::AddSlot(pSVar51,&local_218,0,4,(Layer)0x0);
      pFVar53 = FMargin::FMargin(&local_7878,fVar15);
      pTVar54 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6d88,pFVar53);
      pFVar40 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar52->_padding_,pTVar54);
      local_7e20 = 2;
      local_7e1c = 1;
      pFVar40 = SGridPanel::FSlot::FSlotArguments::ColumnSpan(pFVar40,(TOptional<int>)&local_7e20);
      pFVar40 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Center);
      pFVar34 = STextBlock::FArguments::FArguments(&local_2b08);
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_7638,L"TranslationPicker",L"TextLocalizable_RequiresGather",
                           L"This text is localizable (requires gather).");
      pTVar55 = TAttribute<FText>::TAttribute<FText>(&local_6d58,pFVar35);
      pFVar34 = STextBlock::FArguments::Text(pFVar34,pTVar55);
      pTVar56 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                          (&local_7280,"STextBlock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                           ,0x261,local_7f35);
      pTVar36 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar56,&local_7648,pFVar34);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7a30,pTVar36);
      TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar40,&local_7a30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7a30.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7648.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7280._Widget.SharedReferenceCount.ReferenceController);
      FText::~FText(&local_7638);
      STextBlock::FArguments::~FArguments(&local_2b08);
      pFVar52 = &local_218;
    }
    else {
      pSVar51 = TSharedPtr<SGridPanel,1>::operator->(&local_7f28);
      pFVar52 = SGridPanel::AddSlot(pSVar51,&local_3d8,0,4,(Layer)0x0);
      pFVar53 = FMargin::FMargin(&local_7208,fVar15);
      pTVar54 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6d28,pFVar53);
      pFVar40 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar52->_padding_,pTVar54);
      pFVar62 = SButton::FArguments::FArguments(&local_5040);
      pFVar62->_HAlign = HAlign_Center;
      pFVar62->_VAlign = VAlign_Center;
      pFVar26 = ::FName::FName(&local_7620,"StandardDialog.ContentPadding");
      pFVar53 = FAppStyle::GetMargin(*pFVar26,(char *)0x0);
      pTVar54 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_6e78,pFVar53);
      pFVar62 = SButton::FArguments::ContentPadding(pFVar62,pTVar54);
      local_7db8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_7db8.Object = (SWidget *)CopyNamespaceAndKey;
      lStack_7360 = (ulonglong)local_7db8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      local_7368 = CopyNamespaceAndKey;
      pFVar62 = SButton::FArguments::OnClicked<STranslationPickerEditWidget>
                          (pFVar62,this,(pmf_0024f5a6 *)&local_7368);
      pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
      pEVar68 = &EVisibility::Collapsed;
      pEVar67 = &EVisibility::Collapsed;
      if (pFVar38->bAllowEditing != false) {
        pEVar67 = &EVisibility::Visible;
      }
      pTVar63 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(&local_71c8,pEVar67);
      pFVar62 = TSlateBaseNamedArgs<SButton>::Visibility
                          ((TSlateBaseNamedArgs<SButton> *)pFVar62,pTVar63);
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_76a0,L"TranslationPicker",L"CopyNamespaceAndKey",
                           L"Copy Namespace,Key");
      pTVar55 = TAttribute<FText>::TAttribute<FText>(&local_6e48,pFVar35);
      pFVar62 = SButton::FArguments::Text(pFVar62,pTVar55);
      pTVar64 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                          (&local_72b0,"SButton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                           ,0x244,&local_7f37);
      pTVar65 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar64,&local_76b0,pFVar62);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7e18,pTVar65);
      TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar40,&local_7e18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_7e18.SharedReferenceCount.ReferenceController._4_4_,
                          local_7e18.SharedReferenceCount.ReferenceController._0_4_));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_76b0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_72b0._Widget.SharedReferenceCount.ReferenceController);
      FText::~FText(&local_76a0);
      SButton::FArguments::~FArguments(&local_5040);
      TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                (&local_3d8);
      pSVar51 = TSharedPtr<SGridPanel,1>::operator->(&local_7f28);
      pFVar52 = SGridPanel::AddSlot(pSVar51,&local_2f8,1,4,(Layer)0x0);
      pFVar53 = FMargin::FMargin(&local_71f8,fVar15);
      pTVar54 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6e18,pFVar53);
      pFVar40 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar52->_padding_,pTVar54);
      pFVar40 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Right);
      pFVar62 = SButton::FArguments::FArguments(&local_4b00);
      pFVar62->_HAlign = HAlign_Center;
      pFVar62->_VAlign = VAlign_Center;
      pFVar26 = ::FName::FName(&local_7618,"StandardDialog.ContentPadding");
      pFVar53 = FAppStyle::GetMargin(*pFVar26,(char *)0x0);
      pTVar54 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_6de8,pFVar53);
      pFVar62 = SButton::FArguments::ContentPadding(pFVar62,pTVar54);
      local_7e18.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_7e18.Object = (SWidget *)SaveAndPreview;
      lStack_7680 = (ulonglong)local_7e18.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      local_7688 = SaveAndPreview;
      pFVar62 = SButton::FArguments::OnClicked<STranslationPickerEditWidget>
                          (pFVar62,this,(pmf_0024f5a6 *)&local_7688);
      pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
      pTVar60 = TAttribute<bool>::TAttribute<bool><bool>
                          (&local_71a8,&pFVar38->bHasRequiredLocalizationInfoForSaving);
      pFVar62 = TSlateBaseNamedArgs<SButton>::IsEnabled
                          ((TSlateBaseNamedArgs<SButton> *)pFVar62,pTVar60);
      pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
      if (pFVar38->bAllowEditing != false) {
        pEVar68 = &EVisibility::Visible;
      }
      pTVar63 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(&local_7188,pEVar68);
      pFVar62 = TSlateBaseNamedArgs<SButton>::Visibility
                          ((TSlateBaseNamedArgs<SButton> *)pFVar62,pTVar63);
      pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(&this->Item);
      bVar23 = pFVar38->bHasRequiredLocalizationInfoForSaving == false;
      if (bVar23) {
        pFVar35 = FText::AsLocalizable_Advanced_LocText
                            (&local_7668,L"TranslationPicker",L"SaveAndPreviewButtonDisabledText",
                             L"Cannot Save");
      }
      else {
        pFVar35 = FText::AsLocalizable_Advanced_LocText
                            (&local_7658,L"TranslationPicker",L"SaveAndPreviewButtonText",
                             L"Save and Preview");
      }
      pTVar55 = TAttribute<FText>::TAttribute<FText>(&local_6db8,pFVar35);
      pFVar62 = SButton::FArguments::Text(pFVar62,pTVar55);
      pTVar64 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                          (&local_7298,"SButton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                           ,0x250,&local_7f36);
      pTVar65 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar64,&local_7678,pFVar62);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_7a50,pTVar65);
      TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar40,&local_7a50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7a50.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7678.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7298._Widget.SharedReferenceCount.ReferenceController);
      if (bVar23) {
        FText::~FText(&local_7668);
      }
      else {
        FText::~FText(&local_7658);
      }
      SButton::FArguments::~FArguments(&local_4b00);
      pFVar52 = &local_2f8;
    }
    TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (pFVar52);
    goto LAB_146ba14eb;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_7dc8,L"TranslationPicker",L"TextNotLocalizable_Generic",
             L"This text is not localizable.");
  this_00 = local_7c60;
  pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(local_7c60);
  bVar23 = FText::IsCultureInvariant(&pFVar38->PickedText);
  if (bVar23) {
    pFVar35 = FText::AsLocalizable_Advanced_LocText
                        (&local_7450,L"TranslationPicker",L"TextNotLocalizable_CultureInvariant",
                         L"This text is not localizable (culture-invariant).");
    FText::operator=(&local_7dc8,pFVar35);
    pFVar35 = &local_7450;
LAB_146ba06d5:
    FText::~FText(pFVar35);
  }
  else {
    pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(this_00);
    bVar23 = FText::IsTransient(&pFVar38->PickedText);
    if (bVar23) {
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_7440,L"TranslationPicker",L"TextNotLocalizable_Transient",
                           L"This text is not localizable (transient).");
      FText::operator=(&local_7dc8,pFVar35);
      pFVar35 = &local_7440;
      goto LAB_146ba06d5;
    }
    pFVar38 = TSharedPtr<FTranslationPickerTextItem,1>::operator->(this_00);
    bVar23 = FText::ShouldGatherForLocalization(&pFVar38->PickedText);
    if (!bVar23) {
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_7430,L"TranslationPicker",L"TextNotLocalizable_InvalidForGather",
                           L"This text is not localizable (invalid for gather).");
      FText::operator=(&local_7dc8,pFVar35);
      pFVar35 = &local_7430;
      goto LAB_146ba06d5;
    }
  }
  pSVar51 = TSharedPtr<SGridPanel,1>::operator->(&local_7f28);
  pFVar52 = SGridPanel::AddSlot(pSVar51,&local_138,0,2,(Layer)0x0);
  pFVar53 = FMargin::FMargin(&local_7238,__real_40200000);
  pTVar54 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6cf8,pFVar53);
  pFVar40 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar52->_padding_,pTVar54);
  local_7e28 = 2;
  local_7e24 = 1;
  pFVar40 = SGridPanel::FSlot::FSlotArguments::ColumnSpan(pFVar40,(TOptional<int>)&local_7e28);
  pFVar40 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Center);
  pFVar34 = STextBlock::FArguments::FArguments(&local_3b10);
  pTVar55 = TAttribute<FText>::TAttribute<FText><FText>(&local_6cc8,&local_7dc8);
  pFVar34 = STextBlock::FArguments::Text(pFVar34,pTVar55);
  pTVar56 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_7328,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x27b,&local_7f3c);
  pTVar36 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar56,&local_7420,pFVar34);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_7a40,pTVar36);
  TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar40,&local_7a40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7420.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7328._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_3b10);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_138);
  FText::~FText(&local_7dc8);
LAB_146ba14eb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f28.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_6a38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_7c58->SharedReferenceCount).ReferenceController);
  return;
}

// CopyNamespaceAndKey @ 146ba6820

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerEditWidget::CopyNamespaceAndKey
          (STranslationPickerEditWidget *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  if (((this->Item).Object == (FTranslationPickerTextItem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FReply *)(*pcVar1)();
    return pFVar3;
  }
  if (((this->Item).Object == (FTranslationPickerTextItem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FReply *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::PrintfImpl(&local_18,L"%s,%s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar4.Data);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  FReply::FReply(__return_storage_ptr__,true);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SaveAndPreview @ 146bbd240

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerEditWidget::SaveAndPreview
          (STranslationPickerEditWidget *this,FReply *__return_storage_ptr__)

{
  FTranslationPickerTextItem *pFVar1;
  SMultiLineEditableTextBox *pSVar2;
  UTranslationUnit *pUVar3;
  UTranslationUnit *pUVar4;
  UTranslationUnit *pUVar5;
  code *pcVar6;
  bool bVar7;
  FReply *pFVar8;
  FString *pFVar9;
  FTextLocalizationManager *this_00;
  longlong *plVar10;
  FOutputDeviceRedirector *pFVar11;
  FString *local_38;
  undefined8 local_30;
  FText local_28;
  
  if ((this->Item).Object == (FTranslationPickerTextItem *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar1 = (this->Item).Object;
  if ((pFVar1->TextBox).Object == (SMultiLineEditableTextBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  pSVar2 = (pFVar1->TextBox).Object;
  if ((pSVar2->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  SMultiLineEditableText::GetText((pSVar2->EditableText).Object,&local_28);
  pFVar9 = FText::ToString(&local_28);
  if ((this->Item).Object == (FTranslationPickerTextItem *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  ::FString::operator=
            (&((((this->Item).Object)->TranslationUnit).field0_0x0.DebugPtr)->Translation,pFVar9);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  this_00 = FTextLocalizationManager::Get();
  if ((this->Item).Object == (FTranslationPickerTextItem *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar1 = (this->Item).Object;
  pUVar3 = (pFVar1->TranslationUnit).field0_0x0.DebugPtr;
  if (pFVar1 == (FTranslationPickerTextItem *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar1 = (this->Item).Object;
  pUVar4 = (pFVar1->TranslationUnit).field0_0x0.DebugPtr;
  if (pFVar1 == (FTranslationPickerTextItem *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar1 = (this->Item).Object;
  pUVar5 = (pFVar1->TranslationUnit).field0_0x0.DebugPtr;
  if (pFVar1 == (FTranslationPickerTextItem *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
  }
  FTextLocalizationManager::AddOrUpdateDisplayStringInLiveTable
            (this_00,&((((this->Item).Object)->TranslationUnit).field0_0x0.DebugPtr)->Namespace,
             &pUVar5->Key,&pUVar4->Translation,&pUVar3->Source);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FReply *)(*pcVar6)();
        return pFVar8;
      }
    }
  }
  plVar10 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 200))
                      (IConsoleManager::Singleton,L"Slate.TriggerInvalidate",1);
  if (plVar10 != (longlong *)0x0) {
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x80))(plVar10);
    pcVar6 = *(code **)(*plVar10 + 0xa8);
    pFVar11 = GetGlobalLogSingleton();
    local_38 = (FString *)0x0;
    local_30 = 0;
    (*pcVar6)(plVar10,&local_38,0,pFVar11);
    DestructItems<FString,int>(local_38,(int)local_30);
    if (local_38 != (FString *)0x0) {
      FMemory::Free(local_38);
    }
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

