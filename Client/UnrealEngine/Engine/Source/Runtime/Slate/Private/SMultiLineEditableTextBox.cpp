// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 64

// AdvanceSearch @ 1428d21d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::AdvanceSearch(SMultiLineEditableTextBox *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::AdvanceSearch((this->EditableText).Object,param_1);
  return;
}

// AnyTextSelected @ 1428d2940

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableTextBox::AnyTextSelected(SMultiLineEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = SMultiLineEditableText::AnyTextSelected((this->EditableText).Object);
  return bVar2;
}

// ApplyToSelection @ 1428d6020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::ApplyToSelection
          (SMultiLineEditableTextBox *this,FRunInfo *param_1,FTextBlockStyle *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::ApplyToSelection((this->EditableText).Object,param_1,param_2);
  return;
}

// BeginSearch @ 1428d9b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::BeginSearch
          (SMultiLineEditableTextBox *this,FText *param_1,Type param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::BeginSearch((this->EditableText).Object,param_1,param_2,param_3);
  return;
}

// ClearSelection @ 1428dbd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableTextBox::ClearSelection(SMultiLineEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::ClearSelection((this->EditableText).Object);
  return;
}

// Construct @ 1428fe040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001428ff0d5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::Construct(SMultiLineEditableTextBox *this,FArguments *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  byte *pbVar3;
  SScrollBar *pSVar4;
  FEditableTextBoxStyle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  ITextLayoutMarshaller *pIVar8;
  longlong *plVar9;
  void *pvVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  EStyleColor EVar20;
  undefined2 uVar21;
  FSharedReferencer<1> FVar22;
  bool bVar23;
  bool bVar24;
  FArguments *pFVar25;
  TAttribute<UE::Math::TVector2<double>_> *pTVar26;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *pTVar27;
  TSharedRef<SScrollBar,1> *pTVar28;
  FArguments *pFVar29;
  undefined8 *puVar30;
  TSharedRef<SWidget_const_,1> *pTVar31;
  ulong64 uVar32;
  FSlot *this_01;
  FSlot *this_02;
  FSlot *pFVar33;
  FArguments *pFVar34;
  TSharedRef<SWidget,1> *pTVar35;
  TAttribute<bool> *pTVar36;
  TAttribute<float> *pTVar37;
  TAttribute<FMargin> *pTVar38;
  ETextShapingMethod *pEVar39;
  ETextFlowDirection *pEVar40;
  ETextOverflowPolicy *pEVar41;
  SMultiLineEditableText *pSVar42;
  SMultiLineEditableText *pSVar43;
  FSlotArguments *pFVar44;
  FArguments *pFVar45;
  FArguments *pFVar46;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar47;
  TSharedRef<SBox,1> *pTVar48;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SVerticalBox,1> *pTVar49;
  FSlotArguments *pFVar50;
  FArguments *pFVar51;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar52;
  TSharedRef<SHorizontalBox,1> *pTVar53;
  SHorizontalBox *this_04;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar54;
  IErrorReportingWidget *pIVar55;
  FSlotArguments *local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  ETextShapingMethod local_2fa8;
  char local_2fa7;
  ETextFlowDirection local_2fa6;
  char local_2fa5;
  ETextOverflowPolicy local_2fa4;
  char local_2fa3;
  SMultiLineEditableText *local_2f98;
  undefined8 uStack_2f90;
  T0RequiredArgs local_2f88;
  T0RequiredArgs local_2f87;
  T0RequiredArgs local_2f86 [6];
  FName local_2f80;
  FLLMScope local_2f78 [2];
  undefined1 local_2f70 [8];
  ForAnyElementType local_2f68;
  int local_2f60;
  undefined1 local_2f58 [8];
  ForAnyElementType local_2f50;
  int local_2f48;
  undefined1 local_2f40 [8];
  ForAnyElementType local_2f38;
  int local_2f30;
  FSlotArguments *local_2f28;
  FArguments *local_2f20;
  undefined4 uStack_2f18;
  uint uStack_2f14;
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> local_2f10;
  TSharedRef<SWidget,1> local_2ef8;
  undefined1 local_2ee8 [8];
  undefined4 local_2ee0;
  uint uStack_2edc;
  TSharedRef<SWidget,1> local_2ed8;
  bool local_2ec8;
  bool local_2ec7;
  undefined1 local_2ec0 [8];
  void *pvStack_2eb8;
  undefined4 local_2eb0;
  bool local_2ea8;
  bool local_2ea7;
  undefined1 local_2ea0 [8];
  void *pvStack_2e98;
  undefined4 local_2e90;
  Type local_2e88;
  bool local_2e84;
  undefined1 local_2e80 [24];
  ETextWrappingPolicy local_2e68;
  bool local_2e67;
  undefined1 local_2e60 [24];
  EVirtualKeyboardTrigger local_2e48;
  bool local_2e47;
  undefined1 local_2e40 [24];
  EVirtualKeyboardDismissAction local_2e28;
  bool local_2e27;
  undefined1 local_2e20 [24];
  FText local_2e08;
  bool local_2df8;
  undefined1 local_2df0 [8];
  void *pvStack_2de8;
  undefined4 local_2de0;
  FText local_2dd8;
  bool local_2dc8;
  undefined1 local_2dc0 [8];
  void *pvStack_2db8;
  undefined4 local_2db0;
  FText local_2da8;
  bool local_2d98;
  undefined1 local_2d90 [8];
  void *pvStack_2d88;
  undefined4 local_2d80;
  undefined1 local_2d78 [4];
  undefined1 local_2d74 [4];
  undefined1 local_2d70 [8];
  FSlot *local_2d68;
  FSlot *local_2d60;
  FMemScope local_2d58;
  FSlotArguments *local_2d50;
  FArguments *local_2d48;
  FArguments *local_2d40;
  TAttribute<float> local_2d38;
  TAttribute<float> local_2d18;
  TSharedPtr<SScrollBar,1> local_2cf8;
  TSharedPtr<SScrollBar,1> local_2ce8;
  TSharedRef<SWidget,1> local_2cd8;
  TSharedRef<SWidget,1> local_2cc8;
  TSharedRef<SWidget,1> local_2cb8;
  TSharedPtr<SWidget,1> local_2ca8;
  TSharedPtr<SScrollBar,1> local_2c98;
  TSharedPtr<SWidget,1> local_2c88;
  TSharedPtr<SScrollBar,1> local_2c78;
  FDestructionSentinel local_2c68;
  FDestructionSentinel local_2c50;
  FDestructionSentinel local_2c38;
  FDestructionSentinel local_2c20;
  undefined1 *local_2c08;
  FDestructionSentinel local_2c00;
  undefined1 *local_2be8;
  FDestructionSentinel local_2be0;
  undefined1 *local_2bc8;
  FDestructionSentinel local_2bc0;
  undefined1 *local_2ba8;
  TSharedRef<SWidget,1> local_2ba0;
  IErrorReportingWidget *local_2b90;
  TReferenceControllerBase<1> *pTStack_2b88;
  TSharedRef<SWidget_const_,1> local_2b80;
  SScrollBar *local_2b70;
  TReferenceControllerBase<1> *pTStack_2b68;
  TVector2<double>_u_0 local_2b60;
  TSharedRef<SScrollBar,1> local_2b50;
  SScrollBar *local_2b40;
  TReferenceControllerBase<1> *pTStack_2b38;
  TVector2<double>_u_0 local_2b30;
  TSharedRef<SScrollBar,1> local_2b20;
  TSharedRef<SWidget_const_,1> local_2b10;
  code *local_2af8;
  undefined4 uStack_2af0;
  uint uStack_2aec;
  code *local_2ae8;
  undefined4 uStack_2ae0;
  uint uStack_2adc;
  code *local_2ad8;
  longlong lStack_2ad0;
  ITextLayoutMarshaller *local_2ac8;
  TReferenceControllerBase<1> *pTStack_2ac0;
  TSharedRef<SWidget,1> local_2ab8;
  TSharedRef<SWidget,1> local_2aa8;
  code *local_2a98;
  TReferenceControllerBase<1> *pTStack_2a90;
  code *local_2a88;
  TReferenceControllerBase<1> *pTStack_2a80;
  TSharedRef<SHorizontalBox,1> local_2a78;
  TSharedRef<SBox,1> local_2a68;
  TSharedRef<SWidget,1> local_2a58;
  TSharedRef<SVerticalBox,1> local_2a48;
  TSharedRef<SBox,1> local_2a38;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2a28;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2a10;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_29f8;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_29e0;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_29c8;
  FReadAccessScope local_29b0;
  FReadAccessScope local_2998;
  FReadAccessScope local_2980;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2968;
  undefined8 *local_2950 [2];
  TReferenceControllerBase<1> *local_2940;
  undefined1 local_2920 [24];
  undefined4 local_2908;
  undefined1 local_2904;
  undefined4 local_2900;
  undefined1 local_28fc;
  FSlotArgumentsMixin local_28f8;
  undefined8 *local_2868 [2];
  TReferenceControllerBase<1> *local_2858;
  undefined1 local_2838 [24];
  undefined4 local_2820;
  undefined1 local_281c;
  undefined4 local_2818;
  undefined1 local_2814;
  FSlotArgumentsMixin local_2810;
  TAttribute<bool> local_2780;
  TAttribute<bool> local_2760;
  TAttribute<bool> local_2740;
  TAttribute<bool> local_2720;
  TAttribute<bool> local_2700;
  TAttribute<float> local_26e0;
  TAttribute<float> local_26c0;
  TAttribute<bool> local_26a0;
  TAttribute<bool> local_2680;
  undefined8 *local_2660 [2];
  TReferenceControllerBase<1> *local_2650;
  undefined1 local_2630 [40];
  FSlotArgumentsMixin local_2608;
  undefined8 *local_2578 [2];
  TReferenceControllerBase<1> *local_2568;
  undefined1 local_2548 [40];
  FSlotArgumentsMixin local_2520;
  TAttribute<UE::Math::TVector2<double>_> local_2490;
  TAttribute<UE::Math::TVector2<double>_> local_2460;
  TAttribute<FMargin> local_2430;
  FArguments local_2400;
  FArguments local_21f8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1ff0;
  FArguments local_1ef0;
  FArguments local_1c50;
  FArguments local_19b0;
  FArguments local_1670;
  FArguments local_1330;
  FArguments local_f50;
  FArguments local_8b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1428fe05f;
  bVar15 = false;
  bVar14 = false;
  bVar24 = false;
  local_res8 = (FSlotArguments *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_Style == (FEditableTextBoxStyle *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                          ,0x24,L""), bVar23)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (param_1->_Style == (FEditableTextBoxStyle *)0x0) {
    FArguments::FArguments(&local_8b0);
    this->Style = local_8b0._Style;
    FArguments::~FArguments(&local_8b0);
  }
  else {
    this->Style = param_1->_Style;
  }
  if ((this->Style == (FEditableTextBoxStyle *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                          ,0xc2,L""), bVar23)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((this->bHasExternalHScrollBar == false) &&
     (pSVar4 = (this->HScrollBar).Object, pSVar4 != (SScrollBar *)0x0)) {
    SScrollBar::SetStyle(pSVar4,&this->Style->ScrollBarStyle);
  }
  if ((this->bHasExternalVScrollBar == false) &&
     (pSVar4 = (this->VScrollBar).Object, pSVar4 != (SScrollBar *)0x0)) {
    SScrollBar::SetStyle(pSVar4,&this->Style->ScrollBarStyle);
  }
  pFVar5 = this->Style;
  pSVar42 = (this->EditableText).Object;
  this->BorderImageNormal = &pFVar5->BackgroundImageNormal;
  this->BorderImageHovered = &pFVar5->BackgroundImageHovered;
  this->BorderImageFocused = &pFVar5->BackgroundImageFocused;
  this->BorderImageReadOnly = &pFVar5->BackgroundImageReadOnly;
  if (pSVar42 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle(pSVar42,&pFVar5->TextStyle);
  }
  fVar17 = (param_1->_Padding).Value.Top;
  fVar18 = (param_1->_Padding).Value.Right;
  fVar19 = (param_1->_Padding).Value.Bottom;
  (this->PaddingOverride).Value.Left = (param_1->_Padding).Value.Left;
  (this->PaddingOverride).Value.Top = fVar17;
  (this->PaddingOverride).Value.Right = fVar18;
  (this->PaddingOverride).Value.Bottom = fVar19;
  (this->PaddingOverride).bIsSet = (param_1->_Padding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->PaddingOverride).Getter,&(param_1->_Padding).Getter);
  fVar17 = (param_1->_HScrollBarPadding).Value.Top;
  fVar18 = (param_1->_HScrollBarPadding).Value.Right;
  fVar19 = (param_1->_HScrollBarPadding).Value.Bottom;
  (this->HScrollBarPaddingOverride).Value.Left = (param_1->_HScrollBarPadding).Value.Left;
  (this->HScrollBarPaddingOverride).Value.Top = fVar17;
  (this->HScrollBarPaddingOverride).Value.Right = fVar18;
  (this->HScrollBarPaddingOverride).Value.Bottom = fVar19;
  (this->HScrollBarPaddingOverride).bIsSet = (param_1->_HScrollBarPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->HScrollBarPaddingOverride).Getter,&(param_1->_HScrollBarPadding).Getter);
  fVar17 = (param_1->_VScrollBarPadding).Value.Top;
  fVar18 = (param_1->_VScrollBarPadding).Value.Right;
  fVar19 = (param_1->_VScrollBarPadding).Value.Bottom;
  (this->VScrollBarPaddingOverride).Value.Left = (param_1->_VScrollBarPadding).Value.Left;
  (this->VScrollBarPaddingOverride).Value.Top = fVar17;
  (this->VScrollBarPaddingOverride).Value.Right = fVar18;
  (this->VScrollBarPaddingOverride).Value.Bottom = fVar19;
  (this->VScrollBarPaddingOverride).bIsSet = (param_1->_VScrollBarPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->VScrollBarPaddingOverride).Getter,&(param_1->_VScrollBarPadding).Getter);
  FSlateFontInfo::operator=(&(this->FontOverride).Value,&(param_1->_Font).Value);
  (this->FontOverride).bIsSet = (param_1->_Font).bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->FontOverride).Getter,&(param_1->_Font).Getter);
  uVar16 = *(undefined8 *)
            ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar16;
  EVar20 = (param_1->_ForegroundColor).Value.ColorTableId;
  uVar21 = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  (this->ForegroundColorOverride).Value.ColorUseRule =
       (param_1->_ForegroundColor).Value.ColorUseRule;
  (this->ForegroundColorOverride).Value.ColorTableId = EVar20;
  *(undefined2 *)&(this->ForegroundColorOverride).Value.field_0x12 = uVar21;
  (this->ForegroundColorOverride).bIsSet = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ForegroundColorOverride).Getter,&(param_1->_ForegroundColor).Getter);
  uVar16 = *(undefined8 *)
            ((longlong)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar16;
  EVar20 = (param_1->_BackgroundColor).Value.ColorTableId;
  uVar21 = *(undefined2 *)&(param_1->_BackgroundColor).Value.field_0x12;
  (this->BackgroundColorOverride).Value.ColorUseRule =
       (param_1->_BackgroundColor).Value.ColorUseRule;
  (this->BackgroundColorOverride).Value.ColorTableId = EVar20;
  *(undefined2 *)&(this->BackgroundColorOverride).Value.field_0x12 = uVar21;
  (this->BackgroundColorOverride).bIsSet = (param_1->_BackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->BackgroundColorOverride).Getter,&(param_1->_BackgroundColor).Getter);
  (this->MaximumLength).Value = (param_1->_MaximumLength).Value;
  (this->MaximumLength).bIsSet = (param_1->_MaximumLength).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaximumLength).Getter,&(param_1->_MaximumLength).Getter);
  uVar16 = *(undefined8 *)
            ((longlong)&(param_1->_ReadOnlyForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_ReadOnlyForegroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) = uVar16
  ;
  EVar20 = (param_1->_ReadOnlyForegroundColor).Value.ColorTableId;
  uVar21 = *(undefined2 *)&(param_1->_ReadOnlyForegroundColor).Value.field_0x12;
  (this->ReadOnlyForegroundColorOverride).Value.ColorUseRule =
       (param_1->_ReadOnlyForegroundColor).Value.ColorUseRule;
  (this->ReadOnlyForegroundColorOverride).Value.ColorTableId = EVar20;
  *(undefined2 *)&(this->ReadOnlyForegroundColorOverride).Value.field_0x12 = uVar21;
  (this->ReadOnlyForegroundColorOverride).bIsSet = (param_1->_ReadOnlyForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ReadOnlyForegroundColorOverride).Getter,
             &(param_1->_ReadOnlyForegroundColor).Getter);
  uVar16 = *(undefined8 *)
            ((longlong)&(param_1->_FocusedForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_FocusedForegroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) = uVar16;
  EVar20 = (param_1->_FocusedForegroundColor).Value.ColorTableId;
  uVar21 = *(undefined2 *)&(param_1->_FocusedForegroundColor).Value.field_0x12;
  (this->FocusedForegroundColorOverride).Value.ColorUseRule =
       (param_1->_FocusedForegroundColor).Value.ColorUseRule;
  (this->FocusedForegroundColorOverride).Value.ColorTableId = EVar20;
  *(undefined2 *)&(this->FocusedForegroundColorOverride).Value.field_0x12 = uVar21;
  (this->FocusedForegroundColorOverride).bIsSet = (param_1->_FocusedForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->FocusedForegroundColorOverride).Getter,
             &(param_1->_FocusedForegroundColor).Getter);
  (this->bSelectWordOnMouseDoubleClick).Value = (param_1->_SelectWordOnMouseDoubleClick).Value;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = (param_1->_SelectWordOnMouseDoubleClick).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectWordOnMouseDoubleClick).Getter,
             &(param_1->_SelectWordOnMouseDoubleClick).Getter);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChanged,&param_1->_OnTextChanged);
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnVerifyTextChanged,&param_1->_OnVerifyTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommitted,&param_1->_OnTextCommitted);
  this->bHasExternalHScrollBar = (param_1->_HScrollBar).Object != (SScrollBar *)0x0;
  pTVar6 = (param_1->_HScrollBar).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_HScrollBar).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b70 = (this->HScrollBar).Object;
  pTStack_2b68 = (this->HScrollBar).SharedReferenceCount.ReferenceController;
  (this->HScrollBar).Object = pSVar4;
  (this->HScrollBar).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b68);
  if ((this->HScrollBar).Object == (SScrollBar *)0x0) {
    pFVar25 = SScrollBar::FArguments::FArguments(&local_1ef0);
    local_2b60._s_0.Y = _UNK_150971c58;
    local_2b60._s_0.X = ___xmm_40220000000000004022000000000000;
    pFVar25->_Style = &param_1->_Style->ScrollBarStyle;
    pFVar25->_Orientation = Orient_Horizontal;
    pFVar25->_AlwaysShowScrollbar = param_1->_AlwaysShowScrollbars;
    pTVar26 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                        (&local_2490,(TVector2<double> *)&local_2b60._s_0);
    pFVar25 = SScrollBar::FArguments::Thickness(pFVar25,pTVar26);
    pTVar27 = MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
                        (&local_29e0,"SScrollBar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                         ,0x3b,(T0RequiredArgs *)&local_res8);
    pTVar28 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar27,&local_2b50,pFVar25);
    TSharedPtr<SScrollBar,1>::TSharedPtr<SScrollBar,1><SScrollBar>(&local_2cf8,pTVar28);
    TSharedPtr<SScrollBar,1>::operator=(&this->HScrollBar,&local_2cf8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2cf8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b50.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29e0._Widget.SharedReferenceCount.ReferenceController);
    SScrollBar::FArguments::~FArguments(&local_1ef0);
  }
  this->bHasExternalVScrollBar = (param_1->_VScrollBar).Object != (SScrollBar *)0x0;
  pTVar6 = (param_1->_VScrollBar).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_VScrollBar).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b40 = (this->VScrollBar).Object;
  pTStack_2b38 = (this->VScrollBar).SharedReferenceCount.ReferenceController;
  (this->VScrollBar).Object = pSVar4;
  (this->VScrollBar).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b38);
  if ((this->VScrollBar).Object == (SScrollBar *)0x0) {
    pFVar25 = SScrollBar::FArguments::FArguments(&local_1c50);
    local_2b30._s_0.Y = _UNK_150971c58;
    local_2b30._s_0.X = ___xmm_40220000000000004022000000000000;
    pFVar25->_Style = &param_1->_Style->ScrollBarStyle;
    pFVar25->_Orientation = Orient_Vertical;
    pFVar25->_AlwaysShowScrollbar = param_1->_AlwaysShowScrollbars;
    pTVar26 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                        (&local_2460,(TVector2<double> *)&local_2b30._s_0);
    pFVar25 = SScrollBar::FArguments::Thickness(pFVar25,pTVar26);
    pTVar27 = MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
                        (&local_29c8,"SScrollBar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                         ,0x47,(T0RequiredArgs *)&local_res10);
    pTVar28 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar27,&local_2b20,pFVar25);
    TSharedPtr<SScrollBar,1>::TSharedPtr<SScrollBar,1><SScrollBar>(&local_2c98,pTVar28);
    TSharedPtr<SScrollBar,1>::operator=(&this->VScrollBar,&local_2c98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b20.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29c8._Widget.SharedReferenceCount.ReferenceController);
    SScrollBar::FArguments::~FArguments(&local_1c50);
  }
  pFVar29 = SBorder::FArguments::FArguments(&local_1330);
  (pFVar29->_BorderImage).bIsSet = true;
  local_2d40 = pFVar29;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar29->_BorderImage).Getter,(FWriteAccessScope *)&local_2bc0);
  local_2ba8 = &(pFVar29->_BorderImage).Getter.field_0x8;
  puVar30 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2ba8);
  pFVar44 = local_res8;
  if (puVar30 != (undefined8 *)0x0) {
    uStack_2f14 = uStack_2edc;
    local_2f20 = (FArguments *)GetBorderImage;
    uStack_2f18 = 0;
    pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b10);
    pFVar44 = (FSlotArguments *)(pTVar31->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar31->Object;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar30 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar32 = FDelegateHandle::GenerateNewID();
    puVar30[2] = uVar32;
    *puVar30 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiLineEditableTextBox___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar30[3] = pSVar7;
    puVar30[4] = pFVar44;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar15 = true;
    bVar14 = true;
    bVar24 = true;
    puVar30[5] = local_2f20;
    puVar30[6] = CONCAT44(uStack_2f14,uStack_2f18);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b10.SharedReferenceCount.ReferenceController);
  }
  bVar15 = false;
  bVar14 = false;
  bVar24 = false;
  if (local_2bc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2bc0.Accessor,&local_2bc0);
  }
  pFVar33 = (FSlot *)0x0;
  local_2f98 = (SMultiLineEditableText *)DetermineBackgroundColor;
  uStack_2f90._0_4_ = 0;
  local_2af8 = DetermineBackgroundColor;
  uStack_2af0 = 0;
  uStack_2aec = uStack_2f90._4_4_;
  TAttribute<FSlateColor>::Bind<SMultiLineEditableTextBox>
            (&pFVar29->_BorderBackgroundColor,this,(pmf_f1edf8e4 *)&local_2af8);
  uStack_2f90._0_4_ = 0;
  local_2f98 = (SMultiLineEditableText *)DetermineForegroundColor;
  local_2ae8 = DetermineForegroundColor;
  uStack_2ae0 = 0;
  uStack_2adc = uStack_2f90._4_4_;
  TAttribute<FSlateColor>::Bind<SMultiLineEditableTextBox>
            (&pFVar29->_ForegroundColor,this,(pmf_f1edf8e4 *)&local_2ae8);
  uStack_2f90 = (TReferenceControllerBase<1> *)((ulonglong)uStack_2f90._4_4_ << 0x20);
  local_2f98 = (SMultiLineEditableText *)DeterminePadding;
  local_2ad8 = DeterminePadding;
  lStack_2ad0 = (longlong)uStack_2f90;
  TAttribute<FMargin>::Bind<SMultiLineEditableTextBox>
            (&pFVar29->_Padding,this,(pmf_5fe5b980 *)&local_2ad8);
  local_2f20 = SHorizontalBox::FArguments::FArguments(&local_21f8);
  this_01 = ::operator_new(0x58);
  local_2d68 = pFVar33;
  if (this_01 != (FSlot *)0x0) {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    local_2d68 = SHorizontalBox::FSlot::FSlot(this_01);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2868,(FSlot *)&local_2d68);
  local_2818 = 0;
  local_2d38.Getter._16_8_ = 0;
  local_2814 = 1;
  local_2820 = 0;
  local_281c = 1;
  local_2d38.Value = 1.0;
  local_2d38.bIsSet = true;
  local_2d38.Getter._0_8_ = 0;
  local_2d38.Getter._8_8_ = 0;
  local_2f28 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                         ((FSlotArguments *)local_2868,&local_2d38);
  local_2d48 = SVerticalBox::FArguments::FArguments(&local_2400);
  this_02 = ::operator_new(0x58);
  if (this_02 != (FSlot *)0x0) {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    pFVar33 = (FSlot *)SVerticalBox::FSlot::FSlot(this_02);
  }
  local_2d60 = pFVar33;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2950,(FSlot *)&local_2d60);
  local_2900 = 0;
  local_2d18.Getter._16_8_ = 0;
  local_28fc = 1;
  local_2908 = 0;
  local_2904 = 1;
  local_2d18.Value = 1.0;
  local_2d18.bIsSet = true;
  local_2d18.Getter._0_8_ = 0;
  local_2d18.Getter._8_8_ = 0;
  local_2d50 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                         ((FSlotArguments *)local_2950,&local_2d18);
  pFVar34 = SMultiLineEditableText::FArguments::FArguments(&local_f50);
  local_2dd8.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_2dd8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2dd8.TextData.Reference + 8))
              (local_2dd8.TextData.Reference,local_2d78);
  }
  local_2dd8.Flags = (param_1->_Text).Value.Flags;
  local_2dc8 = (param_1->_Text).bIsSet;
  local_2dc0 = (undefined1  [8])0x0;
  pvStack_2db8 = (void *)0x0;
  local_2db0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_2dc0,
             &(param_1->_Text).Getter);
  FText::operator=(&(pFVar34->_Text).Value,&local_2dd8);
  (pFVar34->_Text).bIsSet = local_2dc8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2dc0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2dc0);
  if (pvStack_2db8 != (void *)0x0) {
    FMemory::Free(pvStack_2db8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2dc0);
  if (local_2dd8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2dd8.TextData.Reference + 0x10))();
  }
  local_2da8.TextData.Reference = (param_1->_HintText).Value.TextData.Reference;
  if (local_2da8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2da8.TextData.Reference + 8))
              (local_2da8.TextData.Reference,local_2d74);
  }
  local_2da8.Flags = (param_1->_HintText).Value.Flags;
  local_2d98 = (param_1->_HintText).bIsSet;
  local_2d90 = (undefined1  [8])0x0;
  pvStack_2d88 = (void *)0x0;
  local_2d80 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_2d90,
             &(param_1->_HintText).Getter);
  FText::operator=(&(pFVar34->_HintText).Value,&local_2da8);
  (pFVar34->_HintText).bIsSet = local_2d98;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d90);
  if (pvStack_2d88 != (void *)0x0) {
    FMemory::Free(pvStack_2d88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d90);
  if (local_2da8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2da8.TextData.Reference + 0x10))();
  }
  local_2e08.TextData.Reference = (param_1->_SearchText).Value.TextData.Reference;
  if (local_2e08.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e08.TextData.Reference + 8))
              (local_2e08.TextData.Reference,local_2d70);
  }
  local_2e08.Flags = (param_1->_SearchText).Value.Flags;
  local_2df8 = (param_1->_SearchText).bIsSet;
  local_2df0 = (undefined1  [8])0x0;
  pvStack_2de8 = (void *)0x0;
  local_2de0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_2df0,
             &(param_1->_SearchText).Getter);
  FText::operator=(&(pFVar34->_SearchText).Value,&local_2e08);
  (pFVar34->_SearchText).bIsSet = local_2df8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_SearchText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2df0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2df0);
  if (pvStack_2de8 != (void *)0x0) {
    FMemory::Free(pvStack_2de8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2df0);
  if (local_2e08.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e08.TextData.Reference + 0x10))();
  }
  pFVar34->_TextStyle = &param_1->_Style->TextStyle;
  pTVar6 = (param_1->_Marshaller).SharedReferenceCount.ReferenceController;
  pIVar8 = (param_1->_Marshaller).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ac8 = (pFVar34->_Marshaller).Object;
  pTStack_2ac0 = (pFVar34->_Marshaller).SharedReferenceCount.ReferenceController;
  (pFVar34->_Marshaller).Object = pIVar8;
  (pFVar34->_Marshaller).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2ac0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (pFVar34->_Font).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_Font).Getter,
             (FWriteAccessScope *)&local_2c00);
  local_2be8 = &(pFVar34->_Font).Getter.field_0x8;
  puVar30 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2be8);
  pFVar44 = local_res8;
  if (puVar30 != (undefined8 *)0x0) {
    local_2f98 = (SMultiLineEditableText *)DetermineFont;
    uStack_2f90 = (TReferenceControllerBase<1> *)((ulonglong)uStack_2edc << 0x20);
    pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b80);
    pFVar44 = (FSlotArguments *)(pTVar31->SharedReferenceCount).ReferenceController;
    local_2f80 = (FName)pTVar31->Object;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar24 = true;
    bVar15 = true;
    bVar14 = true;
    *puVar30 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar32 = FDelegateHandle::GenerateNewID();
    puVar30[2] = uVar32;
    *puVar30 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiLineEditableTextBox___00__A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar30 + 3) = local_2f80;
    puVar30[4] = pFVar44;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar30[5] = local_2f98;
    puVar30[6] = uStack_2f90;
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b80.SharedReferenceCount.ReferenceController);
  }
  bVar14 = false;
  bVar24 = false;
  if (local_2c00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c00.Accessor,&local_2c00);
  }
  local_2ec8 = (param_1->_IsReadOnly).Value;
  local_2ec7 = (param_1->_IsReadOnly).bIsSet;
  local_2ec0 = (undefined1  [8])0x0;
  pvStack_2eb8 = (void *)0x0;
  local_2eb0 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ec0,
             &(param_1->_IsReadOnly).Getter);
  (pFVar34->_IsReadOnly).Value = local_2ec8;
  (pFVar34->_IsReadOnly).bIsSet = local_2ec7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ec0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ec0);
  if (pvStack_2eb8 != (void *)0x0) {
    FMemory::Free(pvStack_2eb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ec0);
  local_2ea8 = (param_1->_AllowMultiLine).Value;
  local_2ea7 = (param_1->_AllowMultiLine).bIsSet;
  local_2ea0 = (undefined1  [8])0x0;
  pvStack_2e98 = (void *)0x0;
  local_2e90 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ea0,
             &(param_1->_AllowMultiLine).Getter);
  (pFVar34->_AllowMultiLine).Value = local_2ea8;
  (pFVar34->_AllowMultiLine).bIsSet = local_2ea7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_AllowMultiLine).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ea0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ea0);
  if (pvStack_2e98 != (void *)0x0) {
    FMemory::Free(pvStack_2e98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ea0);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar34->_OnContextMenuOpening,&param_1->_OnContextMenuOpening);
  if (&param_1->_OnIsTypedCharValid != &pFVar34->_OnIsTypedCharValid) {
    local_2f58 = (undefined1  [8])0x0;
    local_2f50.Data = (FScriptContainerElement *)0x0;
    local_2f48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsTypedCharValid,&local_29b0);
    if ((*(int *)&(param_1->_OnIsTypedCharValid).field_0x10 != 0) &&
       (plVar9 = *(longlong **)&(param_1->_OnIsTypedCharValid).field_0x8, plVar9 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar9 + 0x50))(plVar9,local_2f58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_29b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar34->_OnIsTypedCharValid,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f58,
               (FWriteAccessScope *)&local_2c50);
    if ((local_2f48 != 0) && (local_2f50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2f50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2f50,0,0,0x10);
      local_2f48 = 0;
    }
    if (local_2c50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c50.Accessor,&local_2c50);
    }
    if (local_2f50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2f58);
  }
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar34->_OnBeginTextEdit,&param_1->_OnBeginTextEdit);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar34->_OnTextChanged,
             (FWriteAccessScope *)&local_2be0);
  local_2bc8 = &(pFVar34->_OnTextChanged).field_0x8;
  puVar30 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2bc8);
  pFVar44 = local_res8;
  if (puVar30 != (undefined8 *)0x0) {
    local_2f98 = (SMultiLineEditableText *)OnEditableTextChanged;
    uStack_2f90 = (TReferenceControllerBase<1> *)((ulonglong)uStack_2edc << 0x20);
    pTVar35 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ab8);
    pFVar44 = (FSlotArguments *)(pTVar35->SharedReferenceCount).ReferenceController;
    local_2f80 = (FName)pTVar35->Object;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar24 = true;
    bVar14 = true;
    *puVar30 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar32 = FDelegateHandle::GenerateNewID();
    puVar30[2] = uVar32;
    *puVar30 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMultiLineEditableTextBox___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar30 + 3) = local_2f80;
    puVar30[4] = pFVar44;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar30[5] = local_2f98;
    puVar30[6] = uStack_2f90;
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ab8.SharedReferenceCount.ReferenceController);
  }
  bVar15 = false;
  bVar14 = false;
  bVar24 = false;
  if (local_2be0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2be0.Accessor,&local_2be0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar34->_OnTextCommitted,
             (FWriteAccessScope *)&local_2c20);
  local_2c08 = &(pFVar34->_OnTextCommitted).field_0x8;
  puVar30 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c08);
  pFVar44 = local_res8;
  if (puVar30 != (undefined8 *)0x0) {
    local_2f98 = (SMultiLineEditableText *)OnEditableTextCommitted;
    uStack_2f90 = (TReferenceControllerBase<1> *)((ulonglong)uStack_2edc << 0x20);
    pTVar35 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2aa8);
    pFVar44 = (FSlotArguments *)(pTVar35->SharedReferenceCount).ReferenceController;
    local_2f80 = (FName)pTVar35->Object;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar15 = true;
    bVar14 = true;
    bVar24 = true;
    *puVar30 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar32 = FDelegateHandle::GenerateNewID();
    puVar30[2] = uVar32;
    *puVar30 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMultiLineEditableTextBox___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar30 + 3) = local_2f80;
    puVar30[4] = pFVar44;
    if (pFVar44 != (FSlotArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)pFVar44)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar30[5] = local_2f98;
    puVar30[6] = uStack_2f90;
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2aa8.SharedReferenceCount.ReferenceController);
  }
  if (local_2c20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c20.Accessor,&local_2c20);
  }
  if (&param_1->_OnCursorMoved != &pFVar34->_OnCursorMoved) {
    local_2f40 = (undefined1  [8])0x0;
    local_2f38.Data = (FScriptContainerElement *)0x0;
    local_2f30 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCursorMoved,
               &local_2998);
    if ((*(int *)&(param_1->_OnCursorMoved).field_0x10 != 0) &&
       (plVar9 = *(longlong **)&(param_1->_OnCursorMoved).field_0x8, plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x50))(plVar9,local_2f40);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2998);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar34->_OnCursorMoved,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f40,
               (FWriteAccessScope *)&local_2c38);
    if ((local_2f30 != 0) && (local_2f38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2f38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2f38,0,0,0x10);
      local_2f30 = 0;
    }
    if (local_2c38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c38.Accessor,&local_2c38);
    }
    if (local_2f38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2f40);
  }
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar34->_ContextMenuExtender,&param_1->_ContextMenuExtender);
  if (&param_1->_CreateSlateTextLayout != &pFVar34->_CreateSlateTextLayout) {
    local_2f70 = (undefined1  [8])0x0;
    local_2f68.Data = (FScriptContainerElement *)0x0;
    local_2f60 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_CreateSlateTextLayout,&local_2980);
    if ((*(int *)&(param_1->_CreateSlateTextLayout).field_0x10 != 0) &&
       (plVar9 = *(longlong **)&(param_1->_CreateSlateTextLayout).field_0x8,
       plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x50))(plVar9,local_2f70);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2980);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar34->_CreateSlateTextLayout,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f70,
               (FWriteAccessScope *)&local_2c68);
    if ((local_2f60 != 0) && (local_2f68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2f68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2f68,0,0,0x10);
      local_2f60 = 0;
    }
    if (local_2c68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c68.Accessor,&local_2c68);
    }
    if (local_2f68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2f70);
  }
  local_2e88 = (param_1->_Justification).Value;
  local_2e84 = (param_1->_Justification).bIsSet;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2e80,&(param_1->_Justification).Getter);
  (pFVar34->_Justification).Value = local_2e88;
  (pFVar34->_Justification).bIsSet = local_2e84;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e80);
  if ((void *)local_2e80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2e80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e80);
  pTVar36 = TAttribute<bool>::TAttribute<bool>(&local_2780,&param_1->_RevertTextOnEscape);
  pTVar1 = &pTVar36->Getter;
  (pFVar34->_RevertTextOnEscape).Value = pTVar36->Value;
  (pFVar34->_RevertTextOnEscape).bIsSet = pTVar36->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar10 = *(void **)&(pTVar36->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  pTVar36 = TAttribute<bool>::TAttribute<bool>(&local_2760,&param_1->_SelectAllTextWhenFocused);
  pTVar1 = &pTVar36->Getter;
  (pFVar34->_SelectAllTextWhenFocused).Value = pTVar36->Value;
  (pFVar34->_SelectAllTextWhenFocused).bIsSet = pTVar36->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar34->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar10 = *(void **)&(pTVar36->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  pTVar36 = TAttribute<bool>::TAttribute<bool>(&local_2740,&param_1->_SelectWordOnMouseDoubleClick);
  pTVar1 = &pTVar36->Getter;
  (pFVar34->_SelectWordOnMouseDoubleClick).Value = pTVar36->Value;
  (pFVar34->_SelectWordOnMouseDoubleClick).bIsSet = pTVar36->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar34->_SelectWordOnMouseDoubleClick).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar10 = *(void **)&(pTVar36->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  pTVar36 = TAttribute<bool>::TAttribute<bool>(&local_2720,&param_1->_ClearTextSelectionOnFocusLoss)
  ;
  pTVar1 = &pTVar36->Getter;
  (pFVar34->_ClearTextSelectionOnFocusLoss).Value = pTVar36->Value;
  (pFVar34->_ClearTextSelectionOnFocusLoss).bIsSet = pTVar36->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar34->_ClearTextSelectionOnFocusLoss).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar10 = *(void **)&(pTVar36->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  pTVar36 = TAttribute<bool>::TAttribute<bool>(&local_2700,&param_1->_ClearKeyboardFocusOnCommit);
  pTVar1 = &pTVar36->Getter;
  (pFVar34->_ClearKeyboardFocusOnCommit).Value = pTVar36->Value;
  (pFVar34->_ClearKeyboardFocusOnCommit).bIsSet = pTVar36->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar34->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar10 = *(void **)&(pTVar36->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  pTVar37 = TAttribute<float>::TAttribute<float>(&local_26e0,&param_1->_LineHeightPercentage);
  pTVar2 = &pTVar37->Getter;
  (pFVar34->_LineHeightPercentage).Value = pTVar37->Value;
  (pFVar34->_LineHeightPercentage).bIsSet = pTVar37->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_LineHeightPercentage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
  pvVar10 = *(void **)&(pTVar37->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar2);
  pTVar38 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2430,&param_1->_Margin);
  fVar17 = (pTVar38->Value).Top;
  fVar18 = (pTVar38->Value).Right;
  fVar19 = (pTVar38->Value).Bottom;
  this_00 = &pTVar38->Getter;
  (pFVar34->_Margin).Value.Left = (pTVar38->Value).Left;
  (pFVar34->_Margin).Value.Top = fVar17;
  (pFVar34->_Margin).Value.Right = fVar18;
  (pFVar34->_Margin).Value.Bottom = fVar19;
  (pFVar34->_Margin).bIsSet = pTVar38->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_Margin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar10 = *(void **)&(pTVar38->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  pTVar37 = TAttribute<float>::TAttribute<float>(&local_26c0,&param_1->_WrapTextAt);
  pTVar2 = &pTVar37->Getter;
  (pFVar34->_WrapTextAt).Value = pTVar37->Value;
  (pFVar34->_WrapTextAt).bIsSet = pTVar37->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
  pvVar10 = *(void **)&(pTVar37->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar2);
  pTVar36 = TAttribute<bool>::TAttribute<bool>(&local_26a0,&param_1->_AutoWrapText);
  pTVar1 = &pTVar36->Getter;
  (pFVar34->_AutoWrapText).Value = pTVar36->Value;
  (pFVar34->_AutoWrapText).bIsSet = pTVar36->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar10 = *(void **)&(pTVar36->Getter).field_0x8;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  local_2e68 = (param_1->_WrappingPolicy).Value;
  local_2e67 = (param_1->_WrappingPolicy).bIsSet;
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2e60,&(param_1->_WrappingPolicy).Getter);
  (pFVar34->_WrappingPolicy).Value = local_2e68;
  (pFVar34->_WrappingPolicy).bIsSet = local_2e67;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_WrappingPolicy).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e60);
  if ((void *)local_2e60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2e60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e60);
  pTVar6 = (this->HScrollBar).SharedReferenceCount.ReferenceController;
  local_2ce8.Object = (this->HScrollBar).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ce8.SharedReferenceCount.ReferenceController = pTVar6;
  TSharedPtr<SScrollBar,1>::operator=(&pFVar34->_HScrollBar,&local_2ce8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar6 = (this->VScrollBar).SharedReferenceCount.ReferenceController;
  local_2c78.Object = (this->VScrollBar).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c78.SharedReferenceCount.ReferenceController = pTVar6;
  TSharedPtr<SScrollBar,1>::operator=(&pFVar34->_VScrollBar,&local_2c78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar34->_OnHScrollBarUserScrolled,&param_1->_OnHScrollBarUserScrolled);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar34->_OnVScrollBarUserScrolled,&param_1->_OnVScrollBarUserScrolled);
  TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar34->_OnKeyCharHandler,&param_1->_OnKeyCharHandler);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar34->_OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  pFVar34->_ModiferKeyForNewLine = param_1->_ModiferKeyForNewLine;
  (pFVar34->_VirtualKeyboardOptions).bEnableAutocorrect =
       (param_1->_VirtualKeyboardOptions).bEnableAutocorrect;
  local_2e48 = (param_1->_VirtualKeyboardTrigger).Value;
  local_2e47 = (param_1->_VirtualKeyboardTrigger).bIsSet;
  TDelegate<enum_EVirtualKeyboardTrigger___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EVirtualKeyboardTrigger___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2e40,&(param_1->_VirtualKeyboardTrigger).Getter);
  (pFVar34->_VirtualKeyboardTrigger).Value = local_2e48;
  (pFVar34->_VirtualKeyboardTrigger).bIsSet = local_2e47;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_VirtualKeyboardTrigger).Getter
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e40);
  if ((void *)local_2e40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2e40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e40);
  local_2e28 = (param_1->_VirtualKeyboardDismissAction).Value;
  local_2e27 = (param_1->_VirtualKeyboardDismissAction).bIsSet;
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2e20,&(param_1->_VirtualKeyboardDismissAction).Getter);
  (pFVar34->_VirtualKeyboardDismissAction).Value = local_2e28;
  (pFVar34->_VirtualKeyboardDismissAction).bIsSet = local_2e27;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar34->_VirtualKeyboardDismissAction).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e20);
  if ((void *)local_2e20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2e20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e20);
  local_2fa7 = (param_1->_TextShapingMethod).bIsSet;
  if ((bool)local_2fa7 != false) {
    local_2fa8 = (param_1->_TextShapingMethod).TypedValue;
  }
  if ((TOptional<ETextShapingMethod> *)&local_2fa8 != &pFVar34->_TextShapingMethod) {
    if ((bool)local_2fa7 == false) {
      if ((pFVar34->_TextShapingMethod).bIsSet != false) {
        (pFVar34->_TextShapingMethod).bIsSet = false;
      }
    }
    else {
      pEVar39 = TOptional<enum_ETextShapingMethod>::GetValue(&local_2fa8);
      (pFVar34->_TextShapingMethod).TypedValue = *pEVar39;
      (pFVar34->_TextShapingMethod).bIsSet = true;
    }
  }
  local_2fa5 = (param_1->_TextFlowDirection).bIsSet;
  if ((bool)local_2fa5 != false) {
    local_2fa6 = (param_1->_TextFlowDirection).TypedValue;
  }
  if ((TOptional<ETextFlowDirection> *)&local_2fa6 != &pFVar34->_TextFlowDirection) {
    if ((bool)local_2fa5 == false) {
      if ((pFVar34->_TextFlowDirection).bIsSet != false) {
        (pFVar34->_TextFlowDirection).bIsSet = false;
      }
    }
    else {
      pEVar40 = TOptional<enum_ETextFlowDirection>::GetValue(&local_2fa6);
      (pFVar34->_TextFlowDirection).TypedValue = *pEVar40;
      (pFVar34->_TextFlowDirection).bIsSet = true;
    }
  }
  pTVar36 = TAttribute<bool>::TAttribute<bool>(&local_2680,&param_1->_AllowContextMenu);
  (pFVar34->_AllowContextMenu).Value = pTVar36->Value;
  (pFVar34->_AllowContextMenu).bIsSet = pTVar36->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_AllowContextMenu).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar36->Getter);
  TAttribute<bool>::~TAttribute<bool>(pTVar36);
  local_2fa3 = (param_1->_OverflowPolicy).bIsSet;
  if ((bool)local_2fa3 != false) {
    local_2fa4 = (param_1->_OverflowPolicy).TypedValue;
  }
  if ((TOptional<ETextOverflowPolicy> *)&local_2fa4 != &pFVar34->_OverflowPolicy) {
    if ((bool)local_2fa3 == false) {
      if ((pFVar34->_OverflowPolicy).bIsSet != false) {
        (pFVar34->_OverflowPolicy).bIsSet = false;
      }
    }
    else {
      pEVar41 = TOptional<enum_ETextOverflowPolicy>::GetValue(&local_2fa4);
      (pFVar34->_OverflowPolicy).TypedValue = *pEVar41;
      (pFVar34->_OverflowPolicy).bIsSet = true;
    }
  }
  FLLMScope::FLLMScope(local_2f78,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2f80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2d58,&local_2f80,true);
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>
            (&local_2f10,"SMultiLineEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
             ,0x61,local_res18);
  FMemScope::~FMemScope(&local_2d58);
  FLLMScope::~FLLMScope(local_2f78);
  if (local_2f10._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f10._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f10._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2f98 = (this->EditableText).Object;
  uStack_2f90 = (this->EditableText).SharedReferenceCount.ReferenceController;
  (this->EditableText).Object = local_2f10._Widget.Object;
  (this->EditableText).SharedReferenceCount.ReferenceController =
       local_2f10._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_2f90);
  pSVar42 = TSharedPtr<SMultiLineEditableText,1>::operator->(&local_2f10._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar42,(FSlateBaseNamedArgs *)pFVar34);
  pSVar42 = local_2f10._Widget.Object;
  SMultiLineEditableText::Construct(local_2f10._Widget.Object,pFVar34);
  pSVar43 = TSharedPtr<SMultiLineEditableText,1>::operator->(&local_2f10._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar43);
  pSVar43 = TSharedPtr<SMultiLineEditableText,1>::operator->(&local_2f10._Widget);
  pbVar3 = (byte *)((longlong)&pSVar43->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_2f10._Widget.Object == (SMultiLineEditableText *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FVar22.ReferenceController = local_2f10._Widget.SharedReferenceCount.ReferenceController;
  local_2f10._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f10._Widget.Object = (SMultiLineEditableText *)0x0;
  if ((pSVar42 == (SMultiLineEditableText *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_2ed8.Object = (SWidget *)pSVar42;
  local_2ed8.SharedReferenceCount.ReferenceController = FVar22.ReferenceController;
  if (FVar22.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar22.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar22.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar44 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2d50,&local_2ed8);
  pFVar45 = SVerticalBox::FArguments::operator+(local_2d48,pFVar44);
  pFVar44 = SVerticalBox::Slot((FSlotArguments *)local_2578);
  local_res8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar44);
  pFVar46 = SBox::FArguments::FArguments(&local_1670);
  local_2ed8.SharedReferenceCount.ReferenceController =
       local_2ed8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2ed8.Object = (SWidget *)DetermineHScrollBarPadding;
  local_2a98 = DetermineHScrollBarPadding;
  pTStack_2a90 = local_2ed8.SharedReferenceCount.ReferenceController;
  TAttribute<FMargin>::Bind<SMultiLineEditableTextBox>
            (&pFVar46->_Padding,this,(pmf_5fe5b980 *)&local_2a98);
  pTVar6 = (this->HScrollBar).SharedReferenceCount.ReferenceController;
  local_2c88.Object = (SWidget *)(this->HScrollBar).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c88.SharedReferenceCount.ReferenceController = pTVar6;
  pTVar35 = ::`anonymous_namespace'::AsWidgetRef(&local_2ba0,&local_2c88);
  pFVar46 = SBox::FArguments::operator[](pFVar46,pTVar35);
  pTVar47 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_29f8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0x90,local_res20);
  pTVar47 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::Expose<SBox>
                      (pTVar47,&this->HScrollBarPaddingBox);
  pTVar48 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar47,&local_2a38,pFVar46);
  pTVar11 = (pTVar48->SharedReferenceCount).ReferenceController;
  local_2cb8.Object = (SWidget *)pTVar48->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2cb8.SharedReferenceCount.ReferenceController = pTVar11;
  pFVar44 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_res8,&local_2cb8);
  pFVar45 = SVerticalBox::FArguments::operator+(pFVar45,pFVar44);
  this_03 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2a10,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0x5a,&local_2f88);
  pTVar49 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_2a48,pFVar45);
  pTVar12 = (pTVar49->SharedReferenceCount).ReferenceController;
  local_2ef8.Object = (SWidget *)pTVar49->Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ef8.SharedReferenceCount.ReferenceController = pTVar12;
  pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2f28,&local_2ef8);
  local_res10 = SHorizontalBox::FArguments::operator+(local_2f20,pFVar50);
  pFVar50 = SHorizontalBox::Slot((FSlotArguments *)local_2660);
  local_res8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar50);
  pFVar46 = SBox::FArguments::FArguments(&local_19b0);
  local_2ef8.SharedReferenceCount.ReferenceController =
       local_2ef8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2ef8.Object = (SWidget *)DetermineVScrollBarPadding;
  local_2a88 = DetermineVScrollBarPadding;
  pTStack_2a80 = local_2ef8.SharedReferenceCount.ReferenceController;
  TAttribute<FMargin>::Bind<SMultiLineEditableTextBox>
            (&pFVar46->_Padding,this,(pmf_5fe5b980 *)&local_2a88);
  local_2f20 = (FArguments *)(this->VScrollBar).SharedReferenceCount.ReferenceController;
  local_2ca8.Object = (SWidget *)(this->VScrollBar).Object;
  if (local_2f20 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_2f20)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_2f20)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ca8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_2f20;
  pTVar35 = ::`anonymous_namespace'::AsWidgetRef(&local_2a58,&local_2ca8);
  pFVar46 = SBox::FArguments::operator[](pFVar46,pTVar35);
  pTVar47 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_2a28,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0x9b,&local_2f87);
  pTVar47 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::Expose<SBox>
                      (pTVar47,&this->VScrollBarPaddingBox);
  pTVar48 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar47,&local_2a68,pFVar46);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2cc8,pTVar48);
  pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_res8,&local_2cc8);
  pFVar51 = SHorizontalBox::FArguments::operator+(local_res10,pFVar50);
  pTVar52 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2968,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0x54,local_2f86);
  local_2f28 = (FSlotArguments *)&this->Box;
  pTVar52 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::Expose<SHorizontalBox>
                      (pTVar52,(TSharedPtr<SHorizontalBox,1> *)local_2f28);
  pTVar53 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar52,&local_2a78,pFVar51);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2cd8,pTVar53);
  pFVar29 = SBorder::FArguments::operator[](local_2d40,&local_2cd8);
  SBorder::Construct((SBorder *)this,pFVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2cd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2968._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2cc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2f20);
  SBox::FArguments::~FArguments(&local_19b0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2608);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2630);
  if ((void *)local_2630._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2630._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2630);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2650);
  if (local_2660[0] != (undefined8 *)0x0) {
    (**(code **)*local_2660[0])(local_2660[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_29f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ba0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SBox::FArguments::~FArguments(&local_1670);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2520);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2548);
  if ((void *)local_2548._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2548._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2548);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2568);
  if (local_2578[0] != (undefined8 *)0x0) {
    (**(code **)*local_2578[0])(local_2578[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f10._Widget.SharedReferenceCount.ReferenceController);
  SMultiLineEditableText::FArguments::~FArguments(&local_f50);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_28f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2920);
  if ((void *)local_2920._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2920._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2920);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2940);
  if (local_2950[0] != (undefined8 *)0x0) {
    (**(code **)*local_2950[0])(local_2950[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2400._Slots.AllocatorInstance.Data,local_2400._Slots.ArrayNum);
  if ((FSlotArguments *)local_2400._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2400._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2400);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2810);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2838);
  if ((void *)local_2838._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2838._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2838);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2858);
  if (local_2868[0] != (undefined8 *)0x0) {
    (**(code **)*local_2868[0])(local_2868[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_21f8._Slots.AllocatorInstance.Data,local_21f8._Slots.ArrayNum);
  if ((FSlotArguments *)local_21f8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_21f8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_21f8);
  SBorder::FArguments::~FArguments(&local_1330);
  pTVar6 = (param_1->_ErrorReporting).SharedReferenceCount.ReferenceController;
  pIVar55 = (param_1->_ErrorReporting).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b90 = (this->ErrorReporting).Object;
  pTStack_2b88 = (this->ErrorReporting).SharedReferenceCount.ReferenceController;
  (this->ErrorReporting).Object = pIVar55;
  (this->ErrorReporting).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b88);
  if ((this->ErrorReporting).Object != (IErrorReportingWidget *)0x0) {
    this_04 = TSharedPtr<SHorizontalBox,1>::operator->((TSharedPtr<SHorizontalBox,1> *)local_2f28);
    pFVar54 = SHorizontalBox::AddSlot(this_04,&local_1ff0);
    pFVar50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar54->_padding_);
    pFVar50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x18,__real_40400000,0.0);
    pIVar55 = TSharedPtr<IErrorReportingWidget,1>::operator->(&this->ErrorReporting);
    pTVar35 = (TSharedRef<SWidget,1> *)(**(code **)((longlong)*pIVar55 + 0x18))(pIVar55,local_2ee8);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar50,pTVar35);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(uStack_2edc,local_2ee0));
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1ff0);
  }
  return;
}

// DetermineBackgroundColor @ 142925260

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SMultiLineEditableTextBox::DetermineBackgroundColor
          (SMultiLineEditableTextBox *this,FSlateColor *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  ESlateColorStylingMode EVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  bool bVar6;
  FSlateColor *pFVar7;
  
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0xf9,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FSlateColor *)(*pcVar1)();
      return pFVar7;
    }
  }
  if ((this->BackgroundColorOverride).bIsSet == false) {
    pFVar7 = &this->Style->BackgroundColor;
  }
  else {
    pFVar7 = TAttribute<FSlateColor>::Get(&this->BackgroundColorOverride);
  }
  uVar2 = *(undefined8 *)((longlong)&(pFVar7->SpecifiedColor).field0_0x0 + 8);
  EVar3 = pFVar7->ColorUseRule;
  EVar4 = pFVar7->ColorTableId;
  uVar5 = *(undefined2 *)&pFVar7->field_0x12;
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&(pFVar7->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar2;
  __return_storage_ptr__->ColorUseRule = EVar3;
  __return_storage_ptr__->ColorTableId = EVar4;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar5;
  return __return_storage_ptr__;
}

// DetermineFont @ 1429252f0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall
SMultiLineEditableTextBox::DetermineFont
          (SMultiLineEditableTextBox *this,FSlateFontInfo *__return_storage_ptr__)

{
  FSlateFontInfo *pFVar1;
  
  if ((this->FontOverride).bIsSet == false) {
    pFVar1 = &(this->Style->TextStyle).Font;
  }
  else {
    pFVar1 = TAttribute<FSlateFontInfo>::Get(&this->FontOverride);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// DetermineForegroundColor @ 142925340

/* WARNING: Removing unreachable block (ram,0x000142925565) */
/* WARNING: Removing unreachable block (ram,0x00014292548d) */
/* WARNING: Removing unreachable block (ram,0x0001429255f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SMultiLineEditableTextBox::DetermineForegroundColor
          (SMultiLineEditableTextBox *this,FSlateColor *__return_storage_ptr__)

{
  FEditableTextBoxStyle *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  ESlateColorStylingMode EVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  bool bVar7;
  char cVar8;
  FSlateColor *pFVar9;
  char cVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_28;
  
  if ((this->Style == (FEditableTextBoxStyle *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                         ,0xff,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSlateColor *)(*pcVar2)();
    return pFVar9;
  }
  fVar15 = _UNK_15090c6dc;
  fVar14 = _UNK_15090c6d8;
  fVar13 = _UNK_15090c6d4;
  fVar12 = ___xmm_3f8000003f800000000000003f800000;
  uVar11 = 4;
  cVar10 = '\x04';
  local_28 = CONCAT22(local_28._2_2_,4);
  if (((this->EditableText).Object == (SMultiLineEditableText *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSlateColor *)(*pcVar2)();
    return pFVar9;
  }
  cVar8 = (**(code **)((this->EditableText).Object)->_padding_)();
  if (cVar8 == '\0') {
    cVar8 = (**(code **)(this->_padding_ + 0x1a0))(this);
    if (cVar8 == '\0') {
      if ((this->ForegroundColorOverride).bIsSet != false) {
        pFVar9 = TAttribute<FSlateColor>::Get(&this->ForegroundColorOverride);
        local_28._0_1_ = pFVar9->ColorUseRule;
        local_28._1_1_ = pFVar9->ColorTableId;
        local_28._2_2_ = *(undefined2 *)&pFVar9->field_0x12;
        fVar12 = (pFVar9->SpecifiedColor).field0_0x0._s_0.R;
        fVar13 = (pFVar9->SpecifiedColor).field0_0x0._s_0.G;
        fVar14 = (pFVar9->SpecifiedColor).field0_0x0._s_0.B;
        fVar15 = (pFVar9->SpecifiedColor).field0_0x0._s_0.A;
        cVar10 = (undefined1)local_28;
      }
      if ((((fVar12 == __real_3f800000) && (fVar13 == 0.0)) && (fVar14 == __real_3f800000)) &&
         ((fVar15 == __real_3f800000 && (cVar10 == '\x04')))) {
        pFVar1 = this->Style;
        uVar3 = *(undefined8 *)((longlong)&(pFVar1->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
        EVar4 = (pFVar1->ForegroundColor).ColorUseRule;
        EVar5 = (pFVar1->ForegroundColor).ColorTableId;
        uVar6 = *(undefined2 *)&(pFVar1->ForegroundColor).field_0x12;
        *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
             *(undefined8 *)&(pFVar1->ForegroundColor).SpecifiedColor.field0_0x0;
        *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
        __return_storage_ptr__->ColorUseRule = EVar4;
        __return_storage_ptr__->ColorTableId = EVar5;
        *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
        return __return_storage_ptr__;
      }
    }
    else {
      if ((this->FocusedForegroundColorOverride).bIsSet == false) {
        if ((this->ForegroundColorOverride).bIsSet != false) {
          pFVar9 = TAttribute<FSlateColor>::Get(&this->ForegroundColorOverride);
          local_28._0_1_ = pFVar9->ColorUseRule;
          local_28._1_1_ = pFVar9->ColorTableId;
          local_28._2_2_ = *(undefined2 *)&pFVar9->field_0x12;
          fVar12 = (pFVar9->SpecifiedColor).field0_0x0._s_0.R;
          fVar13 = (pFVar9->SpecifiedColor).field0_0x0._s_0.G;
          fVar14 = (pFVar9->SpecifiedColor).field0_0x0._s_0.B;
          fVar15 = (pFVar9->SpecifiedColor).field0_0x0._s_0.A;
          cVar10 = (undefined1)local_28;
        }
      }
      else {
        pFVar9 = TAttribute<FSlateColor>::Get(&this->FocusedForegroundColorOverride);
        local_28._0_1_ = pFVar9->ColorUseRule;
        local_28._1_1_ = pFVar9->ColorTableId;
        local_28._2_2_ = *(undefined2 *)&pFVar9->field_0x12;
        fVar12 = (pFVar9->SpecifiedColor).field0_0x0._s_0.R;
        fVar13 = (pFVar9->SpecifiedColor).field0_0x0._s_0.G;
        fVar14 = (pFVar9->SpecifiedColor).field0_0x0._s_0.B;
        fVar15 = (pFVar9->SpecifiedColor).field0_0x0._s_0.A;
        cVar10 = (undefined1)local_28;
      }
      if (((fVar12 == __real_3f800000) && (fVar13 == 0.0)) &&
         ((fVar14 == __real_3f800000 && ((fVar15 == __real_3f800000 && (cVar10 == '\x04')))))) {
        pFVar1 = this->Style;
        uVar3 = *(undefined8 *)
                 ((longlong)&(pFVar1->FocusedForegroundColor).SpecifiedColor.field0_0x0 + 8);
        EVar4 = (pFVar1->FocusedForegroundColor).ColorUseRule;
        EVar5 = (pFVar1->FocusedForegroundColor).ColorTableId;
        uVar6 = *(undefined2 *)&(pFVar1->FocusedForegroundColor).field_0x12;
        *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
             *(undefined8 *)&(pFVar1->FocusedForegroundColor).SpecifiedColor.field0_0x0;
        *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
        __return_storage_ptr__->ColorUseRule = EVar4;
        __return_storage_ptr__->ColorTableId = EVar5;
        *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
        return __return_storage_ptr__;
      }
    }
  }
  else {
    if ((this->ReadOnlyForegroundColorOverride).bIsSet == false) {
      if ((this->ForegroundColorOverride).bIsSet != false) {
        pFVar9 = TAttribute<FSlateColor>::Get(&this->ForegroundColorOverride);
        local_28._0_1_ = pFVar9->ColorUseRule;
        local_28._1_1_ = pFVar9->ColorTableId;
        local_28._2_2_ = *(undefined2 *)&pFVar9->field_0x12;
        uVar11 = local_28 & 0xff;
        fVar12 = (pFVar9->SpecifiedColor).field0_0x0._s_0.R;
        fVar13 = (pFVar9->SpecifiedColor).field0_0x0._s_0.G;
        fVar14 = (pFVar9->SpecifiedColor).field0_0x0._s_0.B;
        fVar15 = (pFVar9->SpecifiedColor).field0_0x0._s_0.A;
      }
    }
    else {
      pFVar9 = TAttribute<FSlateColor>::Get(&this->ReadOnlyForegroundColorOverride);
      local_28._0_1_ = pFVar9->ColorUseRule;
      local_28._1_1_ = pFVar9->ColorTableId;
      local_28._2_2_ = *(undefined2 *)&pFVar9->field_0x12;
      fVar12 = (pFVar9->SpecifiedColor).field0_0x0._s_0.R;
      fVar13 = (pFVar9->SpecifiedColor).field0_0x0._s_0.G;
      fVar14 = (pFVar9->SpecifiedColor).field0_0x0._s_0.B;
      fVar15 = (pFVar9->SpecifiedColor).field0_0x0._s_0.A;
      uVar11 = local_28;
    }
    if ((((fVar12 == __real_3f800000) && (fVar13 == 0.0)) && (fVar14 == __real_3f800000)) &&
       ((fVar15 == __real_3f800000 && ((char)uVar11 == '\x04')))) {
      pFVar1 = this->Style;
      uVar3 = *(undefined8 *)
               ((longlong)&(pFVar1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 + 8);
      EVar4 = (pFVar1->ReadOnlyForegroundColor).ColorUseRule;
      EVar5 = (pFVar1->ReadOnlyForegroundColor).ColorTableId;
      uVar6 = *(undefined2 *)&(pFVar1->ReadOnlyForegroundColor).field_0x12;
      *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
           *(undefined8 *)&(pFVar1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
      __return_storage_ptr__->ColorUseRule = EVar4;
      __return_storage_ptr__->ColorTableId = EVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar12;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar13;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar14;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar15;
  __return_storage_ptr__->ColorUseRule = (char)local_28;
  __return_storage_ptr__->ColorTableId = (char)(local_28 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)(local_28 >> 0x10);
  return __return_storage_ptr__;
}

// DetermineHScrollBarPadding @ 142925640

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SMultiLineEditableTextBox::DetermineHScrollBarPadding
          (SMultiLineEditableTextBox *this,FMargin *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FMargin *pFVar6;
  
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0xe8,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMargin *)(*pcVar1)();
      return pFVar6;
    }
  }
  if ((this->HScrollBarPaddingOverride).bIsSet == false) {
    pFVar6 = &this->Style->HScrollBarPadding;
  }
  else {
    pFVar6 = TAttribute<FMargin>::Get(&this->HScrollBarPaddingOverride);
  }
  fVar2 = pFVar6->Top;
  fVar3 = pFVar6->Right;
  fVar4 = pFVar6->Bottom;
  __return_storage_ptr__->Left = pFVar6->Left;
  __return_storage_ptr__->Top = fVar2;
  __return_storage_ptr__->Right = fVar3;
  __return_storage_ptr__->Bottom = fVar4;
  return __return_storage_ptr__;
}

// DeterminePadding @ 1429256c0

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SMultiLineEditableTextBox::DeterminePadding
          (SMultiLineEditableTextBox *this,FMargin *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FMargin *pFVar6;
  
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0xe2,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMargin *)(*pcVar1)();
      return pFVar6;
    }
  }
  if ((this->PaddingOverride).bIsSet == false) {
    pFVar6 = &this->Style->Padding;
  }
  else {
    pFVar6 = TAttribute<FMargin>::Get(&this->PaddingOverride);
  }
  fVar2 = pFVar6->Top;
  fVar3 = pFVar6->Right;
  fVar4 = pFVar6->Bottom;
  __return_storage_ptr__->Left = pFVar6->Left;
  __return_storage_ptr__->Top = fVar2;
  __return_storage_ptr__->Right = fVar3;
  __return_storage_ptr__->Bottom = fVar4;
  return __return_storage_ptr__;
}

// DetermineVScrollBarPadding @ 142925740

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SMultiLineEditableTextBox::DetermineVScrollBarPadding
          (SMultiLineEditableTextBox *this,FMargin *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FMargin *pFVar6;
  
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0xee,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMargin *)(*pcVar1)();
      return pFVar6;
    }
  }
  if ((this->VScrollBarPaddingOverride).bIsSet == false) {
    pFVar6 = &this->Style->VScrollBarPadding;
  }
  else {
    pFVar6 = TAttribute<FMargin>::Get(&this->VScrollBarPaddingOverride);
  }
  fVar2 = pFVar6->Top;
  fVar3 = pFVar6->Right;
  fVar4 = pFVar6->Bottom;
  __return_storage_ptr__->Left = pFVar6->Left;
  __return_storage_ptr__->Top = fVar2;
  __return_storage_ptr__->Right = fVar3;
  __return_storage_ptr__->Bottom = fVar4;
  return __return_storage_ptr__;
}

// ForceScroll @ 1429366b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::ForceScroll(SMultiLineEditableTextBox *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::ForceScroll((this->EditableText).Object,param_1,param_2);
  return;
}

// GetBorderImage @ 14293c180

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SMultiLineEditableTextBox::GetBorderImage(SMultiLineEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateBrush *pFVar4;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)((this->EditableText).Object)->_padding_)();
  if (cVar3 != '\0') {
    return this->BorderImageReadOnly;
  }
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)(((this->EditableText).Object)->_padding_ + 0x1a0))();
  if (cVar3 != '\0') {
    return this->BorderImageFocused;
  }
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(char *)((longlong)&((this->EditableText).Object)->_padding_ + 3) != '\0') {
    return this->BorderImageHovered;
  }
  return this->BorderImageNormal;
}

// GetCurrentTextLine @ 14293ebb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::GetCurrentTextLine(SMultiLineEditableTextBox *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::GetCurrentTextLine((this->EditableText).Object,param_1);
  return;
}

// GetCursorLocation @ 14293ec10

/* WARNING: Enum "Type": Some values do not have unique names */

FTextLocation __thiscall
SMultiLineEditableTextBox::GetCursorLocation(SMultiLineEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  FTextLocation FVar3;
  FTextLocation in_RDX;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FTextLocation)(*pcVar1)();
      return FVar3;
    }
  }
  SMultiLineEditableText::GetCursorLocation((this->EditableText).Object);
  return in_RDX;
}

// GetHScrollBar @ 142940d50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SScrollBar_const_,1> * __thiscall
SMultiLineEditableTextBox::GetHScrollBar
          (SMultiLineEditableTextBox *this,TSharedPtr<SScrollBar_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SScrollBar_const_,1> *pTVar3;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<SScrollBar_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  SMultiLineEditableText::GetHScrollBar((this->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRunUnderCursor @ 142947690

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IRun_const_,1> * __thiscall
SMultiLineEditableTextBox::GetRunUnderCursor
          (SMultiLineEditableTextBox *this,TSharedPtr<IRun_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<IRun_const_,1> *pTVar3;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<IRun_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  SMultiLineEditableText::GetRunUnderCursor((this->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSearchText @ 142947d80

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMultiLineEditableTextBox::GetSearchText
          (SMultiLineEditableTextBox *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  SMultiLineEditableText::GetSearchText((this->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelectedRuns @ 1429488b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
SMultiLineEditableTextBox::GetSelectedRuns
          (SMultiLineEditableTextBox *this,
          TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  SMultiLineEditableText::GetSelectedRuns((this->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelectedText @ 142948a70

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMultiLineEditableTextBox::GetSelectedText
          (SMultiLineEditableTextBox *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  SMultiLineEditableText::GetSelectedText((this->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVScrollBar @ 14294aed0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SScrollBar_const_,1> * __thiscall
SMultiLineEditableTextBox::GetVScrollBar
          (SMultiLineEditableTextBox *this,TSharedPtr<SScrollBar_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SScrollBar_const_,1> *pTVar3;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<SScrollBar_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  SMultiLineEditableText::GetVScrollBar((this->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GoTo @ 14294c930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::GoTo(SMultiLineEditableTextBox *this,FTextLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::GoTo((this->EditableText).Object,param_1);
  return;
}

// HasKeyboardFocus @ 14294ed70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableTextBox::HasKeyboardFocus(SMultiLineEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  bVar2 = SWidget::HasKeyboardFocus((SWidget *)this);
  if (!bVar2) {
    if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    cVar4 = (**(code **)(((this->EditableText).Object)->_padding_ + 0x1a0))();
    if (cVar4 == '\0') {
      return false;
    }
  }
  return true;
}

// InsertRunAtCursor @ 142952060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::InsertRunAtCursor
          (SMultiLineEditableTextBox *this,TSharedRef<IRun,1> *param_1)

{
  SMultiLineEditableText *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<IRun,1> local_18;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->EditableText).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiLineEditableText::InsertRunAtCursor(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InsertTextAtCursor @ 142952250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::InsertTextAtCursor(SMultiLineEditableTextBox *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::InsertTextAtCursor((this->EditableText).Object,param_1);
  return;
}

// InsertTextAtCursor @ 1429522b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::InsertTextAtCursor(SMultiLineEditableTextBox *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::InsertTextAtCursor((this->EditableText).Object,param_1);
  return;
}

// OnEditableTextChanged @ 1429641b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::OnEditableTextChanged(SMultiLineEditableTextBox *this,FText *param_1)

{
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  FString *pFVar5;
  FText *this_01;
  longlong *plVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged,
             &local_20);
  if ((*(int *)&(this->OnTextChanged).field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->OnTextChanged).field_0x8, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x68))(plVar6,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  piVar4 = TAttribute<int>::Get(&this->MaximumLength);
  this_00 = &this->OnVerifyTextChanged;
  iVar1 = *piVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if (((*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar6 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (iVar1 < 0) {
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  FText::FText((FText *)&local_38);
  bVar3 = FTextEditHelper::VerifyTextLength(param_1,(FText *)&local_38,iVar1);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
    if (((*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8, plVar6 == (longlong *)0x0))
       || (cVar2 = (**(code **)(*plVar6 + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
      if (*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8;
      }
      cVar2 = (**(code **)(*plVar6 + 0x60))(plVar6,param_1,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (cVar2 == '\0') goto LAB_1429642f0;
    }
    this_01 = FText::GetEmpty();
  }
  else {
LAB_1429642f0:
    this_01 = (FText *)&local_38;
  }
  pFVar5 = FText::ToString(this_01);
  SetError(this,pFVar5);
  if ((ITextData *)local_38.DestructionSentinel._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.DestructionSentinel._0_8_ + 0x10))();
  }
  return;
}

// OnEditableTextCommitted @ 142964350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::OnEditableTextCommitted
          (SMultiLineEditableTextBox *this,FText *param_1,Type param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  FString *pFVar4;
  FText *this_00;
  longlong *plVar5;
  FText local_38;
  FReadAccessScope local_28;
  
  FText::FText(&local_38);
  piVar3 = TAttribute<int>::Get(&this->MaximumLength);
  bVar1 = FTextEditHelper::VerifyTextLength(param_1,&local_38,*piVar3);
  if (!bVar1) {
LAB_142964418:
    if (param_2 == OnEnter) {
      pFVar4 = FText::ToString(&local_38);
      SetError(this,pFVar4);
    }
    goto LAB_142964432;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged,
             &local_28);
  if ((*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) ||
     (plVar5 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8, plVar5 == (longlong *)0x0)) {
LAB_14296445b:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x38))();
    if (cVar2 == '\0') goto LAB_14296445b;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged,
               &local_28);
    if (*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8;
    }
    cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,param_1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (cVar2 == '\0') goto LAB_142964418;
  }
  this_00 = FText::GetEmpty();
  pFVar4 = FText::ToString(this_00);
  SetError(this,pFVar4);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->OnTextCommitted,param_1,param_2);
LAB_142964432:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// OnFocusReceived @ 1429658a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableTextBox::OnFocusReceived
          (SMultiLineEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SMultiLineEditableText *pSVar3;
  code *pcVar4;
  bool bVar5;
  FReply *pFVar6;
  TSharedRef<SWidget,1> local_18;
  
  FReply::FReply(__return_storage_ptr__,true);
  EVar1 = param_2->Cause;
  if (EVar1 != Cleared) {
    if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FReply *)(*pcVar4)();
        return pFVar6;
      }
    }
    pTVar2 = (this->EditableText).SharedReferenceCount.ReferenceController;
    pSVar3 = (this->EditableText).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 == (SMultiLineEditableText *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FReply *)(*pcVar4)();
        return pFVar6;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = (SWidget *)pSVar3;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    FReply::SetUserFocus(__return_storage_ptr__,&local_18,EVar1,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 142968ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableTextBox::OnKeyDown
          (SMultiLineEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FReply *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::Escape.KeyName) {
    if (((this->EditableText).Object == (SMultiLineEditableText *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar5)();
      return pFVar8;
    }
    cVar7 = (**(code **)(((this->EditableText).Object)->_padding_ + 0x1a0))();
    if (cVar7 != '\0') {
      FReply::FReply(&local_c8,true);
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar9->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = pSVar4;
      local_e8.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar8 = FReply::SetUserFocus(&local_c8,&local_e8,Cleared,false);
      FReply::FReply(__return_storage_ptr__,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Refresh @ 142988220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableTextBox::Refresh(SMultiLineEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::Refresh((this->EditableText).Object);
  return;
}

// ScrollTo @ 14298cfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::ScrollTo(SMultiLineEditableTextBox *this,FTextLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::ScrollTo((this->EditableText).Object,param_1);
  return;
}

// SelectAllText @ 14298d360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableTextBox::SelectAllText(SMultiLineEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SelectAllText((this->EditableText).Object);
  return;
}

// SetAllowContextMenu @ 14298dfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetAllowContextMenu
          (SMultiLineEditableTextBox *this,TAttribute<bool> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetAllowContextMenu((this->EditableText).Object,param_1);
  return;
}

// SetApplyLineHeightToBottomLine @ 14298e390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetApplyLineHeightToBottomLine
          (SMultiLineEditableTextBox *this,TAttribute<bool> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetApplyLineHeightToBottomLine((this->EditableText).Object,param_1);
  return;
}

// SetAutoWrapText @ 14298e720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetAutoWrapText
          (SMultiLineEditableTextBox *this,TAttribute<bool> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetAutoWrapText((this->EditableText).Object,param_1);
  return;
}

// SetError @ 14298fb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetError(SMultiLineEditableTextBox *this,FString *param_1)

{
  byte *pbVar1;
  SHorizontalBox *pSVar2;
  IErrorReportingWidget *pIVar3;
  code *pcVar4;
  FString *pFVar5;
  SPopupErrorText *pSVar6;
  FSharedReferencer<1> FVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  FSlot *this_00;
  FSlotArguments *pFVar12;
  FArguments *pFVar13;
  T0RequiredArgs local_res8 [8];
  FString *local_res10;
  FLLMScope local_res18 [2];
  FSlot *local_res20;
  SPopupErrorText *local_418;
  FSharedReferencer<1> local_410;
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs> local_408;
  FName *local_3f0;
  FSharedReferencer<1> local_3e8;
  FName local_3e0;
  FMemScope local_3d8;
  undefined **local_3d0;
  undefined8 *local_3c8 [2];
  TReferenceControllerBase<1> *local_3b8;
  undefined1 local_398 [40];
  FSlotArgumentsMixin local_370;
  TPanelChildren<SBoxPanel::FSlot> *local_2e0;
  int local_2d8;
  undefined1 local_2d0 [616];
  undefined1 local_68 [40];
  
  local_res10 = param_1;
  if ((this->ErrorReporting).Object != (IErrorReportingWidget *)0x0) goto LAB_14298fff9;
  if ((this->Box).Object == (SHorizontalBox *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar2 = (this->Box).Object;
  this_00 = ::operator_new(0x58);
  local_res20 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_res20 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3c8,(FSlot *)&local_res20);
  local_2d8 = -1;
  local_3d0 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_2e0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar2->field_0x218;
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_3c8);
  pFVar12 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar12->field_0x18,__real_40400000,0.0);
  pFVar13 = SPopupErrorText::FArguments::FArguments((FArguments *)local_2d0);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3d8,&local_3e0,true);
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>
            (&local_408,"SPopupErrorText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
             ,0x1bd,local_res8);
  FMemScope::~FMemScope(&local_3d8);
  FLLMScope::~FLLMScope(local_res18);
  FVar7.ReferenceController = local_408._Widget.SharedReferenceCount.ReferenceController;
  pSVar6 = local_408._Widget.Object;
  if (local_408._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_408._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_408._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_408._Widget.Object == (SPopupErrorText *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_408._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  (**(code **)((local_408._Widget.Object)->_padding_ + 0x260))(local_408._Widget.Object,pFVar13);
  if (local_408._Widget.Object == (SPopupErrorText *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((local_408._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_408._Widget.Object)->_padding_ + 0x228))(local_408._Widget.Object);
    bVar11 = 0;
    if (cVar10 != '\0') goto LAB_14298fd9e;
  }
  else {
LAB_14298fd9e:
    bVar11 = 0x20;
  }
  *(byte *)&(local_408._Widget.Object)->_padding_ =
       (byte)(local_408._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_408._Widget.Object)->_padding_ =
       (byte)(local_408._Widget.Object)->_padding_ | bVar11;
  if (local_408._Widget.Object == (SPopupErrorText *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_408._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_408._Widget.Object == (SPopupErrorText *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8.ReferenceController = local_408._Widget.SharedReferenceCount.ReferenceController;
  local_408._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_408._Widget.Object = (SPopupErrorText *)0x0;
  if (pSVar6 == (SPopupErrorText *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_418 = pSVar6;
  local_410.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SPopupErrorText **)&pFVar12->field_0x8 != &local_418) {
    *(SPopupErrorText **)&pFVar12->field_0x8 = pSVar6;
    local_418 = (SPopupErrorText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->field_0x10,&local_410);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_410.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2d0._568_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2d0);
  local_3d0 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_3c8[0] != (undefined8 *)0x0) {
    if (local_2d8 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_2e0,(FSlotArguments *)local_3c8);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_2e0,(FSlotArguments *)local_3c8,local_2d8);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_370);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_398);
  if ((void *)local_398._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_398._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_398);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b8);
  if (local_3c8[0] != (undefined8 *)0x0) {
    (**(code **)*local_3c8[0])(local_3c8[0],1);
  }
  if (pSVar6 == (SPopupErrorText *)0x0) {
    local_3f0 = (FName *)0x0;
  }
  else {
    local_3f0 = (FName *)&pSVar6->_padding_;
  }
  local_3e8.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ErrorReporting != (TSharedPtr<IErrorReportingWidget,1> *)&local_3f0) {
    (this->ErrorReporting).Object = (IErrorReportingWidget *)local_3f0;
    local_3f0 = (FName *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ErrorReporting).SharedReferenceCount,&local_3e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
LAB_14298fff9:
  pFVar5 = local_res10;
  if ((this->ErrorReporting).Object == (IErrorReportingWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar3 = (this->ErrorReporting).Object;
                    /* WARNING: Could not recover jumptable at 0x000142990040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar3 + 8))(pIVar3,pFVar5);
  return;
}

// SetError @ 142990050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableTextBox::SetError(SMultiLineEditableTextBox *this,FText *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_1);
  SetError(this,pFVar1);
  return;
}

// SetHintText @ 142990e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetHintText(SMultiLineEditableTextBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetHintText((this->EditableText).Object,param_1);
  return;
}

// SetIsReadOnly @ 142992b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetIsReadOnly(SMultiLineEditableTextBox *this,TAttribute<bool> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetIsReadOnly((this->EditableText).Object,param_1);
  return;
}

// SetJustification @ 142992e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetJustification
          (SMultiLineEditableTextBox *this,TAttribute<ETextJustify::Type> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetJustification((this->EditableText).Object,param_1);
  return;
}

// SetLineHeightPercentage @ 142992eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetLineHeightPercentage
          (SMultiLineEditableTextBox *this,TAttribute<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetLineHeightPercentage((this->EditableText).Object,param_1);
  return;
}

// SetMargin @ 142992fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetMargin(SMultiLineEditableTextBox *this,TAttribute<FMargin> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetMargin((this->EditableText).Object,param_1);
  return;
}

// SetMaximumLength @ 142995620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetMaximumLength
          (SMultiLineEditableTextBox *this,TAttribute<int> *param_1)

{
  (this->MaximumLength).Value = param_1->Value;
  (this->MaximumLength).bIsSet = param_1->bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaximumLength).Getter,&param_1->Getter);
  return;
}

// SetOnKeyCharHandler @ 1429980e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetOnKeyCharHandler
          (SMultiLineEditableTextBox *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  SMultiLineEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->EditableText).Object;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
              *)local_38,param_1);
  TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pSVar1->OnKeyCharHandler,
             (TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
              *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnKeyDownHandler @ 142998200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetOnKeyDownHandler
          (SMultiLineEditableTextBox *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  SMultiLineEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->EditableText).Object;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
              *)local_38,param_1);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pSVar1->OnKeyDownHandler,
             (TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
              *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOverflowPolicy @ 142998460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetOverflowPolicy
          (SMultiLineEditableTextBox *this,TOptional<ETextOverflowPolicy> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined6 in_register_00000012;
  undefined1 local_res8;
  char local_res9;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res9 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
  if (local_res9 != '\0') {
    local_res8 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
  }
  SMultiLineEditableText::SetOverflowPolicy((this->EditableText).Object,SUB82(&local_res8,0));
  return;
}

// SetReadOnlyForegroundColor @ 142998790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetReadOnlyForegroundColor
          (SMultiLineEditableTextBox *this,TAttribute<FSlateColor> *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->Value).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->ReadOnlyForegroundColorOverride).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->ReadOnlyForegroundColorOverride).Value.ColorTableId = EVar2;
  *(undefined2 *)&(this->ReadOnlyForegroundColorOverride).Value.field_0x12 = uVar3;
  (this->ReadOnlyForegroundColorOverride).bIsSet = param_1->bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ReadOnlyForegroundColorOverride).Getter,&param_1->Getter);
  return;
}

// SetSearchText @ 142999220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetSearchText(SMultiLineEditableTextBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetSearchText((this->EditableText).Object,param_1);
  return;
}

// SetSelectWordOnMouseDoubleClick @ 1429992f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetSelectWordOnMouseDoubleClick
          (SMultiLineEditableTextBox *this,TAttribute<bool> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetSelectWordOnMouseDoubleClick((this->EditableText).Object,param_1);
  return;
}

// SetStyle @ 14299a420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetStyle(SMultiLineEditableTextBox *this,FEditableTextBoxStyle *param_1)

{
  SScrollBar *pSVar1;
  FEditableTextBoxStyle *pFVar2;
  SMultiLineEditableText *this_00;
  code *pcVar3;
  bool bVar4;
  FArguments local_878;
  
  if (param_1 == (FEditableTextBoxStyle *)0x0) {
    FArguments::FArguments(&local_878);
    this->Style = local_878._Style;
    FArguments::~FArguments(&local_878);
  }
  else {
    this->Style = param_1;
  }
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
                       ,0xc2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->bHasExternalHScrollBar == false) &&
     (pSVar1 = (this->HScrollBar).Object, pSVar1 != (SScrollBar *)0x0)) {
    SScrollBar::SetStyle(pSVar1,&this->Style->ScrollBarStyle);
  }
  if ((this->bHasExternalVScrollBar == false) &&
     (pSVar1 = (this->VScrollBar).Object, pSVar1 != (SScrollBar *)0x0)) {
    SScrollBar::SetStyle(pSVar1,&this->Style->ScrollBarStyle);
  }
  pFVar2 = this->Style;
  this_00 = (this->EditableText).Object;
  this->BorderImageNormal = &pFVar2->BackgroundImageNormal;
  this->BorderImageHovered = &pFVar2->BackgroundImageHovered;
  this->BorderImageFocused = &pFVar2->BackgroundImageFocused;
  this->BorderImageReadOnly = &pFVar2->BackgroundImageReadOnly;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle(this_00,&pFVar2->TextStyle);
  }
  return;
}

// SetText @ 14299ac70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetText(SMultiLineEditableTextBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetText((this->EditableText).Object,param_1);
  return;
}

// SetTextBoxBackgroundColor @ 14299be10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetTextBoxBackgroundColor
          (SMultiLineEditableTextBox *this,TAttribute<FSlateColor> *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->Value).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->BackgroundColorOverride).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->BackgroundColorOverride).Value.ColorTableId = EVar2;
  *(undefined2 *)&(this->BackgroundColorOverride).Value.field_0x12 = uVar3;
  (this->BackgroundColorOverride).bIsSet = param_1->bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BackgroundColorOverride).Getter,&param_1->Getter);
  return;
}

// SetTextBoxForegroundColor @ 14299be50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetTextBoxForegroundColor
          (SMultiLineEditableTextBox *this,TAttribute<FSlateColor> *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->Value).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->ForegroundColorOverride).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->ForegroundColorOverride).Value.ColorTableId = EVar2;
  *(undefined2 *)&(this->ForegroundColorOverride).Value.field_0x12 = uVar3;
  (this->ForegroundColorOverride).bIsSet = param_1->bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ForegroundColorOverride).Getter,&param_1->Getter);
  return;
}

// SetTextFlowDirection @ 14299c890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetTextFlowDirection
          (SMultiLineEditableTextBox *this,TOptional<ETextFlowDirection> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetTextFlowDirection((this->EditableText).Object,param_1);
  return;
}

// SetTextShapingMethod @ 14299ebc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetTextShapingMethod
          (SMultiLineEditableTextBox *this,TOptional<ETextShapingMethod> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetTextShapingMethod((this->EditableText).Object,param_1);
  return;
}

// SetTextStyle @ 14299ec40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetTextStyle(SMultiLineEditableTextBox *this,FTextBlockStyle *param_1)

{
  SMultiLineEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  FArguments FStack_6a8;
  
  pSVar1 = (this->EditableText).Object;
  if (pSVar1 == (SMultiLineEditableText *)0x0) {
    return;
  }
  if (param_1 != (FTextBlockStyle *)0x0) {
    FSlateEditableTextLayout::SetTextStyle((pSVar1->EditableTextLayout).Ptr,param_1);
    return;
  }
  SMultiLineEditableText::FArguments::FArguments(&FStack_6a8);
  if (FStack_6a8._TextStyle == (FTextBlockStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Defaults._TextStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SMultiLineEditableText.cpp"
                       ,0xab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSlateEditableTextLayout::SetTextStyle((pSVar1->EditableTextLayout).Ptr,FStack_6a8._TextStyle);
  SMultiLineEditableText::FArguments::~FArguments(&FStack_6a8);
  return;
}

// SetVirtualKeyboardDismissAction @ 14299f6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetVirtualKeyboardDismissAction
          (SMultiLineEditableTextBox *this,TAttribute<EVirtualKeyboardDismissAction> *param_1)

{
  SMultiLineEditableText *this_00;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  TDelegate<EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TAttribute<EVirtualKeyboardDismissAction> local_28;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.Value = param_1->Value;
  this_00 = (this->EditableText).Object;
  local_28.bIsSet = param_1->bIsSet;
  this_01 = &param_1->Getter;
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_28.Getter,this_01);
  SMultiLineEditableText::SetVirtualKeyboardDismissAction(this_00,&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  return;
}

// SetWrapTextAt @ 14299f8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetWrapTextAt(SMultiLineEditableTextBox *this,TAttribute<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetWrapTextAt((this->EditableText).Object,param_1);
  return;
}

// SetWrappingPolicy @ 14299f950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::SetWrappingPolicy
          (SMultiLineEditableTextBox *this,TAttribute<ETextWrappingPolicy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SMultiLineEditableText::SetWrappingPolicy((this->EditableText).Object,param_1);
  return;
}

// SupportsKeyboardFocus @ 1429a61c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableTextBox::SupportsKeyboardFocus(SMultiLineEditableTextBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMultiLineEditableText *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar1 = (this->EditableText).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->EditableText).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar5 = (**(code **)(pSVar2->_padding_ + 0x198))(pSVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar5;
}

// SMultiLineEditableTextBox @ 1429ba510

/* WARNING: Enum "Type": Some values do not have unique names */

SMultiLineEditableTextBox * __thiscall
SMultiLineEditableTextBox::SMultiLineEditableTextBox(SMultiLineEditableTextBox *this)

{
  SBorder::SBorder((SBorder *)this);
  this->_padding_ = (longlong)&___7SMultiLineEditableTextBox__6B_;
  (this->PaddingOverride).bIsSet = false;
  (this->PaddingOverride).Value.Left = 0.0;
  (this->PaddingOverride).Value.Top = 0.0;
  (this->PaddingOverride).Value.Right = 0.0;
  (this->PaddingOverride).Value.Bottom = 0.0;
  (this->EditableText).Object = (SMultiLineEditableText *)0x0;
  (this->EditableText).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)&(this->PaddingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->PaddingOverride).Getter = 0;
  *(undefined8 *)&(this->PaddingOverride).Getter.field_0x8 = 0;
  (this->HScrollBarPaddingOverride).bIsSet = false;
  (this->HScrollBarPaddingOverride).Value.Left = 0.0;
  (this->HScrollBarPaddingOverride).Value.Top = 0.0;
  (this->HScrollBarPaddingOverride).Value.Right = 0.0;
  (this->HScrollBarPaddingOverride).Value.Bottom = 0.0;
  *(undefined8 *)&(this->HScrollBarPaddingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HScrollBarPaddingOverride).Getter = 0;
  *(undefined8 *)&(this->HScrollBarPaddingOverride).Getter.field_0x8 = 0;
  (this->VScrollBarPaddingOverride).bIsSet = false;
  (this->VScrollBarPaddingOverride).Value.Left = 0.0;
  (this->VScrollBarPaddingOverride).Value.Top = 0.0;
  (this->VScrollBarPaddingOverride).Value.Right = 0.0;
  (this->VScrollBarPaddingOverride).Value.Bottom = 0.0;
  *(undefined8 *)&(this->VScrollBarPaddingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->VScrollBarPaddingOverride).Getter = 0;
  *(undefined8 *)&(this->VScrollBarPaddingOverride).Getter.field_0x8 = 0;
  FSlateFontInfo::FSlateFontInfo(&(this->FontOverride).Value);
  (this->FontOverride).bIsSet = false;
  *(undefined8 *)&(this->FontOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FontOverride).Getter = 0;
  *(undefined8 *)&(this->FontOverride).Getter.field_0x8 = 0;
  (this->ForegroundColorOverride).Value.ColorUseRule = UseColor_Specified;
  (this->ForegroundColorOverride).bIsSet = false;
  *(undefined8 *)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter = 0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter.field_0x8 = 0;
  (this->BackgroundColorOverride).Value.ColorUseRule = UseColor_Specified;
  (this->BackgroundColorOverride).bIsSet = false;
  *(undefined8 *)&(this->BackgroundColorOverride).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->BackgroundColorOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BackgroundColorOverride).Getter = 0;
  (this->ReadOnlyForegroundColorOverride).Value.ColorUseRule = UseColor_Specified;
  (this->ReadOnlyForegroundColorOverride).bIsSet = false;
  *(undefined8 *)&(this->ReadOnlyForegroundColorOverride).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       0x3f800000;
  (this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ReadOnlyForegroundColorOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ReadOnlyForegroundColorOverride).Getter = 0;
  (this->FocusedForegroundColorOverride).Value.ColorUseRule = UseColor_Specified;
  (this->FocusedForegroundColorOverride).bIsSet = false;
  *(undefined8 *)&(this->FocusedForegroundColorOverride).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       0x3f800000;
  (this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->FocusedForegroundColorOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FocusedForegroundColorOverride).Getter = 0;
  (this->MaximumLength).Value = 0;
  (this->MaximumLength).bIsSet = false;
  *(undefined8 *)&(this->MaximumLength).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaximumLength).Getter = 0;
  *(undefined8 *)&(this->MaximumLength).Getter.field_0x8 = 0;
  (this->AllowContextMenu).Value = false;
  (this->AllowContextMenu).bIsSet = false;
  *(undefined8 *)&(this->AllowContextMenu).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AllowContextMenu).Getter = 0;
  *(undefined8 *)&(this->AllowContextMenu).Getter.field_0x8 = 0;
  (this->bSelectWordOnMouseDoubleClick).Value = false;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = false;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter = 0;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8 = 0;
  (this->Box).Object = (SHorizontalBox *)0x0;
  (this->Box).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->HScrollBar).Object = (SScrollBar *)0x0;
  (this->HScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->HScrollBarPaddingBox).Object = (SBox *)0x0;
  (this->HScrollBarPaddingBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VScrollBar).Object = (SScrollBar *)0x0;
  (this->VScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->VScrollBarPaddingBox).Object = (SBox *)0x0;
  (this->VScrollBarPaddingBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ErrorReporting).Object = (IErrorReportingWidget *)0x0;
  (this->ErrorReporting).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextCommitted).field_0x10 = 0;
  *(undefined8 *)&this->OnVerifyTextChanged = 0;
  *(undefined8 *)&(this->OnVerifyTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnVerifyTextChanged).field_0x10 = 0;
  return this;
}

// ~SMultiLineEditableTextBox @ 1429bf9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableTextBox::~SMultiLineEditableTextBox(SMultiLineEditableTextBox *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged);
  pvVar1 = *(void **)&(this->OnVerifyTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVerifyTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted);
  pvVar1 = *(void **)&(this->OnTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged);
  pvVar1 = *(void **)&(this->OnTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ErrorReporting).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VScrollBarPaddingBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HScrollBarPaddingBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bSelectWordOnMouseDoubleClick).Getter);
  pvVar1 = *(void **)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bSelectWordOnMouseDoubleClick).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AllowContextMenu).Getter);
  pvVar1 = *(void **)&(this->AllowContextMenu).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AllowContextMenu).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaximumLength).Getter);
  pvVar1 = *(void **)&(this->MaximumLength).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaximumLength).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->FocusedForegroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->FocusedForegroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FocusedForegroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ReadOnlyForegroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->ReadOnlyForegroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ReadOnlyForegroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BackgroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->BackgroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BackgroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ForegroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->ForegroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ForegroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FontOverride).Getter);
  pvVar1 = *(void **)&(this->FontOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FontOverride).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FontOverride).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VScrollBarPaddingOverride).Getter)
  ;
  pvVar1 = *(void **)&(this->VScrollBarPaddingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->VScrollBarPaddingOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HScrollBarPaddingOverride).Getter)
  ;
  pvVar1 = *(void **)&(this->HScrollBarPaddingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HScrollBarPaddingOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PaddingOverride).Getter);
  pvVar1 = *(void **)&(this->PaddingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PaddingOverride).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  SBorder::~SBorder((SBorder *)this);
  return;
}

