// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 57

// SEditableTextBox @ 142848490

/* WARNING: Enum "Type": Some values do not have unique names */

SEditableTextBox * __thiscall SEditableTextBox::SEditableTextBox(SEditableTextBox *this)

{
  byte *pbVar1;
  
  SBorder::SBorder((SBorder *)this);
  this->_padding_ = (longlong)&___7SEditableTextBox__6B_;
  (this->PaddingBox).Object = (SBox *)0x0;
  (this->PaddingBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->EditableText).Object = (SEditableText *)0x0;
  (this->EditableText).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->PaddingOverride).bIsSet = false;
  (this->PaddingOverride).Value.Left = 0.0;
  (this->PaddingOverride).Value.Top = 0.0;
  (this->PaddingOverride).Value.Right = 0.0;
  (this->PaddingOverride).Value.Bottom = 0.0;
  *(undefined8 *)&(this->PaddingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->PaddingOverride).Getter = 0;
  *(undefined8 *)&(this->PaddingOverride).Getter.field_0x8 = 0;
  FSlateFontInfo::FSlateFontInfo(&(this->FontOverride).Value);
  (this->FontOverride).bIsSet = false;
  *(undefined8 *)&(this->FontOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FontOverride).Getter = 0;
  *(undefined8 *)&(this->FontOverride).Getter.field_0x8 = 0;
  (this->ForegroundColorOverride).Value.ColorUseRule = UseColor_Specified;
  (this->ForegroundColorOverride).bIsSet = false;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter = 0;
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
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  (this->Box).Object = (SHorizontalBox *)0x0;
  (this->Box).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~SEditableTextBox @ 14284ae10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::~SEditableTextBox(SEditableTextBox *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SEditableTextBox__6B_;
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
            ((this->Box).SharedReferenceCount.ReferenceController);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PaddingOverride).Getter);
  pvVar1 = *(void **)&(this->PaddingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PaddingOverride).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PaddingBox).SharedReferenceCount.ReferenceController);
  SBorder::~SBorder((SBorder *)this);
  return;
}

// AdvanceSearch @ 142851d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::AdvanceSearch(SEditableTextBox *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::AdvanceSearch
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// AnyTextSelected @ 1428521b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableTextBox::AnyTextSelected(SEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  bVar2 = FSlateEditableTextLayout::AnyTextSelected
                    ((((this->EditableText).Object)->EditableTextLayout).Ptr);
  return bVar2;
}

// BeginSearch @ 1428558e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::BeginSearch(SEditableTextBox *this,FText *param_1,Type param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::BeginSearch
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1,param_2,param_3);
  return;
}

// ClearSelection @ 142857a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::ClearSelection(SEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::ClearSelection((((this->EditableText).Object)->EditableTextLayout).Ptr);
  return;
}

// Construct @ 14285f5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::Construct(SEditableTextBox *this,FArguments *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  byte *pbVar1;
  FEditableTextBoxStyle *pFVar2;
  SEditableText *pSVar3;
  longlong *plVar4;
  SWidget *pSVar5;
  void *pvVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EStyleColor EVar17;
  undefined2 uVar18;
  FSharedReferencer<1> FVar19;
  bool bVar20;
  FArguments *pFVar21;
  undefined8 *puVar22;
  TSharedRef<SWidget_const_,1> *pTVar23;
  ulong64 uVar24;
  FSlot *this_02;
  FSlot *pFVar25;
  FArguments *pFVar26;
  FArguments *pFVar27;
  TSharedRef<SWidget,1> *pTVar28;
  TAttribute<float> *pTVar29;
  TAttribute<bool> *pTVar30;
  TAttribute<EVirtualKeyboardDismissAction> *pTVar31;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *pTVar32;
  TSharedRef<SEditableText,1> *pTVar33;
  SBox *pSVar34;
  SBox *pSVar35;
  FSlotArguments *pFVar36;
  FArguments *pFVar37;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar38;
  TSharedRef<SHorizontalBox,1> *pTVar39;
  SHorizontalBox *this_03;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar40;
  IErrorReportingWidget *pIVar41;
  TReferenceControllerBase<1> *pTVar42;
  FSlot *pFVar43;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  ulonglong uStack_1e50;
  ETextShapingMethod local_1e48 [2];
  ETextFlowDirection local_1e46 [2];
  ETextOverflowPolicy local_1e44 [4];
  FName local_1e40;
  undefined4 uStack_1e38;
  uint uStack_1e34;
  FArguments *local_1e30;
  undefined1 local_1e28 [8];
  ForAnyElementType local_1e20;
  int local_1e18;
  bool local_1e10;
  bool local_1e0f;
  undefined1 local_1e08 [8];
  ForAnyElementType FStack_1e00;
  int local_1df8;
  bool local_1df0;
  bool local_1def;
  undefined1 local_1de8 [8];
  ForAnyElementType FStack_1de0;
  int local_1dd8;
  bool local_1dd0;
  bool local_1dcf;
  undefined1 local_1dc8 [8];
  ForAnyElementType FStack_1dc0;
  int local_1db8;
  bool local_1db0;
  bool local_1daf;
  undefined1 local_1da8 [8];
  ForAnyElementType FStack_1da0;
  int local_1d98;
  bool local_1d90;
  bool local_1d8f;
  undefined1 local_1d88 [8];
  ForAnyElementType FStack_1d80;
  int local_1d78;
  bool local_1d70;
  bool local_1d6f;
  undefined1 local_1d68 [8];
  ForAnyElementType FStack_1d60;
  int local_1d58;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1d50;
  undefined1 local_1d38 [8];
  undefined4 local_1d30;
  uint uStack_1d2c;
  FText local_1d28;
  bool local_1d18;
  undefined1 local_1d10 [8];
  ForAnyElementType FStack_1d08;
  int local_1d00;
  FText local_1cf8;
  bool local_1ce8;
  undefined1 local_1ce0 [8];
  ForAnyElementType FStack_1cd8;
  int local_1cd0;
  FText local_1cc8;
  bool local_1cb8;
  undefined1 local_1cb0 [8];
  ForAnyElementType FStack_1ca8;
  int local_1ca0;
  FArguments *local_1c98;
  FArguments *local_1c90;
  undefined4 uStack_1c88;
  uint uStack_1c84;
  SWidget *local_1c80;
  TReferenceControllerBase<1> *pTStack_1c78;
  EVirtualKeyboardTrigger local_1c70;
  bool local_1c6f;
  undefined1 local_1c68 [8];
  void *pvStack_1c60;
  undefined4 local_1c58;
  SHorizontalBox *local_1c50;
  TReferenceControllerBase<1> *pTStack_1c48;
  Type local_1c40;
  bool local_1c3c;
  undefined1 local_1c38 [24];
  undefined1 local_1c20 [4];
  undefined1 local_1c1c [4];
  undefined1 local_1c18 [8];
  FMemScope local_1c10;
  FSlotArguments *local_1c08;
  FSlot *local_1c00;
  TAttribute<float> local_1bf8;
  TSharedRef<SWidget,1> local_1bd8;
  TAttribute<EKeyboardType> local_1bc8;
  TAttribute<bool> local_1ba8;
  FDestructionSentinel local_1b88;
  FDestructionSentinel local_1b70;
  FDestructionSentinel local_1b58;
  FDestructionSentinel local_1b40;
  FDestructionSentinel local_1b28;
  FDestructionSentinel local_1b10;
  FDestructionSentinel local_1af8;
  FDestructionSentinel local_1ae0;
  FDestructionSentinel local_1ac8;
  FDestructionSentinel local_1ab0;
  FDestructionSentinel local_1a98;
  undefined1 *local_1a80;
  FDestructionSentinel local_1a78;
  undefined1 *local_1a60;
  FDestructionSentinel local_1a58;
  undefined1 *local_1a40;
  FDestructionSentinel local_1a38;
  undefined1 *local_1a20;
  FDestructionSentinel local_1a18;
  undefined1 *local_1a00;
  TSharedRef<SWidget,1> local_19f8;
  IErrorReportingWidget *local_19e8;
  TReferenceControllerBase<1> *pTStack_19e0;
  TSharedRef<SWidget_const_,1> local_19d8;
  TSharedRef<SEditableText,1> local_19c8;
  TSharedRef<SWidget_const_,1> local_19b8;
  code *local_19a8;
  longlong lStack_19a0;
  code *local_1998;
  longlong lStack_1990;
  TSharedRef<SWidget_const_,1> local_1988;
  TSharedRef<SHorizontalBox,1> local_1978;
  TSharedRef<SWidget,1> local_1968;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1958;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_1940;
  FReadAccessScope local_1928;
  TAttribute<float> local_1910;
  TAttribute<bool> local_18f0;
  TAttribute<bool> local_18d0;
  undefined1 local_18b0 [32];
  FSlotArguments local_1890;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_17a8;
  FArguments local_16a8;
  FArguments local_14a0;
  FArguments local_1160;
  FArguments local_d80;
  FArguments local_718;
  undefined8 uStack_48;
  
  uStack_48 = 0x14285f5bf;
  pFVar25 = (FSlot *)0x0;
  local_res8 = 0;
  if ((param_1->_Style == (FEditableTextBoxStyle *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                          ,0x1e,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = param_1->_Style;
  this->Style = pFVar2;
  if (pFVar2 == (FEditableTextBoxStyle *)0x0) {
    FArguments::FArguments(&local_718);
    this->Style = local_718._Style;
    FArguments::~FArguments(&local_718);
  }
  if ((this->Style == (FEditableTextBoxStyle *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                          ,0x76,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = this->Style;
  pSVar3 = (this->EditableText).Object;
  this->BorderImageNormal = &pFVar2->BackgroundImageNormal;
  this->BorderImageHovered = &pFVar2->BackgroundImageHovered;
  this->BorderImageFocused = &pFVar2->BackgroundImageFocused;
  this->BorderImageReadOnly = &pFVar2->BackgroundImageReadOnly;
  if ((pSVar3 != (SEditableText *)0x0) && (&pFVar2->TextStyle != (FTextBlockStyle *)0x0)) {
    FSlateEditableTextLayout::SetTextStyle((pSVar3->EditableTextLayout).Ptr,&pFVar2->TextStyle);
    SWidget::Invalidate((SWidget *)pSVar3,Layout);
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  fVar14 = (param_1->_Padding).Value.Top;
  fVar15 = (param_1->_Padding).Value.Right;
  fVar16 = (param_1->_Padding).Value.Bottom;
  (this->PaddingOverride).Value.Left = (param_1->_Padding).Value.Left;
  (this->PaddingOverride).Value.Top = fVar14;
  (this->PaddingOverride).Value.Right = fVar15;
  (this->PaddingOverride).Value.Bottom = fVar16;
  (this->PaddingOverride).bIsSet = (param_1->_Padding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->PaddingOverride).Getter,&(param_1->_Padding).Getter);
  FSlateFontInfo::operator=(&(this->FontOverride).Value,&(param_1->_Font).Value);
  (this->FontOverride).bIsSet = (param_1->_Font).bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->FontOverride).Getter,&(param_1->_Font).Getter);
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar10;
  EVar17 = (param_1->_ForegroundColor).Value.ColorTableId;
  uVar18 = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  (this->ForegroundColorOverride).Value.ColorUseRule =
       (param_1->_ForegroundColor).Value.ColorUseRule;
  (this->ForegroundColorOverride).Value.ColorTableId = EVar17;
  *(undefined2 *)&(this->ForegroundColorOverride).Value.field_0x12 = uVar18;
  (this->ForegroundColorOverride).bIsSet = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ForegroundColorOverride).Getter,&(param_1->_ForegroundColor).Getter);
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar10;
  EVar17 = (param_1->_BackgroundColor).Value.ColorTableId;
  uVar18 = *(undefined2 *)&(param_1->_BackgroundColor).Value.field_0x12;
  (this->BackgroundColorOverride).Value.ColorUseRule =
       (param_1->_BackgroundColor).Value.ColorUseRule;
  (this->BackgroundColorOverride).Value.ColorTableId = EVar17;
  *(undefined2 *)&(this->BackgroundColorOverride).Value.field_0x12 = uVar18;
  (this->BackgroundColorOverride).bIsSet = (param_1->_BackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->BackgroundColorOverride).Getter,&(param_1->_BackgroundColor).Getter);
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->_ReadOnlyForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_ReadOnlyForegroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->ReadOnlyForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) = uVar10
  ;
  EVar17 = (param_1->_ReadOnlyForegroundColor).Value.ColorTableId;
  uVar18 = *(undefined2 *)&(param_1->_ReadOnlyForegroundColor).Value.field_0x12;
  (this->ReadOnlyForegroundColorOverride).Value.ColorUseRule =
       (param_1->_ReadOnlyForegroundColor).Value.ColorUseRule;
  (this->ReadOnlyForegroundColorOverride).Value.ColorTableId = EVar17;
  *(undefined2 *)&(this->ReadOnlyForegroundColorOverride).Value.field_0x12 = uVar18;
  (this->ReadOnlyForegroundColorOverride).bIsSet = (param_1->_ReadOnlyForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ReadOnlyForegroundColorOverride).Getter,
             &(param_1->_ReadOnlyForegroundColor).Getter);
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->_FocusedForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_FocusedForegroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) = uVar10;
  EVar17 = (param_1->_FocusedForegroundColor).Value.ColorTableId;
  uVar18 = *(undefined2 *)&(param_1->_FocusedForegroundColor).Value.field_0x12;
  (this->FocusedForegroundColorOverride).Value.ColorUseRule =
       (param_1->_FocusedForegroundColor).Value.ColorUseRule;
  (this->FocusedForegroundColorOverride).Value.ColorTableId = EVar17;
  *(undefined2 *)&(this->FocusedForegroundColorOverride).Value.field_0x12 = uVar18;
  (this->FocusedForegroundColorOverride).bIsSet = (param_1->_FocusedForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->FocusedForegroundColorOverride).Getter,
             &(param_1->_FocusedForegroundColor).Getter);
  (this->MaximumLength).Value = (param_1->_MaximumLength).Value;
  (this->MaximumLength).bIsSet = (param_1->_MaximumLength).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaximumLength).Getter,&(param_1->_MaximumLength).Getter);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChanged,&param_1->_OnTextChanged);
  if (&param_1->_OnVerifyTextChanged != &this->OnVerifyTextChanged) {
    local_1e28 = (undefined1  [8])0x0;
    local_1e20.Data = (FScriptContainerElement *)0x0;
    local_1e18 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnVerifyTextChanged,&local_1928);
    if ((*(int *)&(param_1->_OnVerifyTextChanged).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnVerifyTextChanged).field_0x8, plVar4 != (longlong *)0x0
       )) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_1e28);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1928);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e28,
               (FWriteAccessScope *)&local_1b28);
    if ((local_1e18 != 0) && (local_1e20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1e20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e20,0,0,0x10);
      local_1e18 = 0;
    }
    if (local_1b28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b28.Accessor,&local_1b28);
    }
    if (local_1e20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1e28);
  }
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommitted,&param_1->_OnTextCommitted);
  pFVar21 = SBorder::FArguments::FArguments(&local_1160);
  (pFVar21->_BorderImage).bIsSet = true;
  local_1e30 = pFVar21;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar21->_BorderImage).Getter,(FWriteAccessScope *)&local_1a18);
  local_1a00 = &(pFVar21->_BorderImage).Getter.field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1a00);
  if (puVar22 == (undefined8 *)0x0) {
    pTVar42 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pFVar43 = pFVar25;
  }
  else {
    uStack_1c84 = uStack_1d2c;
    local_1c90 = (FArguments *)GetBorderImage;
    uStack_1c88 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_19b8);
    pTVar42 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar23->Object;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEditableTextBox___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar5;
    puVar22[4] = pTVar42;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->WeakReferenceCount = (atomic<int>)((int)pTVar42->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar22[5] = local_1c90;
    puVar22[6] = CONCAT44(uStack_1c84,uStack_1c88);
    pFVar43 = (FSlot *)&DAT_00000007;
  }
  if (((ulonglong)pFVar43 & 4) != 0) {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (((ulonglong)pFVar43 & 2) != 0) {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (((ulonglong)pFVar43 & 1) != 0) {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_19b8.SharedReferenceCount.ReferenceController);
  }
  if (local_1a18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a18.Accessor,&local_1a18);
  }
  pFVar21 = local_1e30;
  uVar11 = uStack_1e50 >> 0x20;
  uStack_1e50 = uVar11 << 0x20;
  local_19a8 = DetermineBackgroundColor;
  lStack_19a0 = uStack_1e50;
  TAttribute<FSlateColor>::Bind<SEditableTextBox>
            (&local_1e30->_BorderBackgroundColor,this,(pmf_fdf8873b *)&local_19a8);
  uStack_1e50 = uVar11 << 0x20;
  local_1998 = DetermineForegroundColor;
  lStack_1990 = uStack_1e50;
  TAttribute<FSlateColor>::Bind<SEditableTextBox>
            (&pFVar21->_ForegroundColor,this,(pmf_fdf8873b *)&local_1998);
  local_1e30 = SBorder::FArguments::Padding(pFVar21,0.0);
  local_1c90 = SHorizontalBox::FArguments::FArguments(&local_16a8);
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
    pFVar25 = SHorizontalBox::FSlot::FSlot(this_02);
  }
  local_1c00 = pFVar25;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_1890,(FSlot *)&local_1c00);
  local_1890._80_4_ = 0;
  local_1bf8.Getter._16_8_ = 0;
  local_1890._84_1_ = 1;
  local_1890._72_4_ = 0;
  local_1890._76_1_ = 1;
  local_1bf8.Value = 1.0;
  local_1bf8.bIsSet = true;
  local_1bf8.Getter._0_8_ = 0;
  local_1bf8.Getter._8_8_ = 0;
  local_1c08 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_1890,&local_1bf8);
  pFVar26 = SBox::FArguments::FArguments(&local_14a0);
  (pFVar26->_Padding).bIsSet = true;
  local_1c98 = pFVar26;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Padding).Getter,
             (FWriteAccessScope *)&local_1a98);
  local_1a80 = &(pFVar26->_Padding).Getter.field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1a80);
  if (puVar22 == (undefined8 *)0x0) {
    pTVar42 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1e34 = uStack_1d2c;
    local_1e40 = (FName)DeterminePadding;
    uStack_1e38 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1988);
    pTVar42 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar23->Object;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 | 0x38);
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEditableTextBox___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar5;
    puVar22[4] = pTVar42;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->WeakReferenceCount = (atomic<int>)((int)pTVar42->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar22 + 5) = local_1e40;
    puVar22[6] = CONCAT44(uStack_1e34,uStack_1e38);
  }
  if (((ulonglong)pFVar43 & 0x20) != 0) {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (((ulonglong)pFVar43 & 0x10) != 0) {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (((ulonglong)pFVar43 & 8) != 0) {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1988.SharedReferenceCount.ReferenceController);
  }
  if (local_1a98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a98.Accessor,&local_1a98);
  }
  local_1c98->_VAlign = VAlign_Center;
  pFVar27 = SEditableText::FArguments::FArguments(&local_d80);
  local_1cf8.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_1cf8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cf8.TextData.Reference + 8))
              (local_1cf8.TextData.Reference,local_1c20);
  }
  local_1cf8.Flags = (param_1->_Text).Value.Flags;
  local_1ce8 = (param_1->_Text).bIsSet;
  local_1ce0 = (undefined1  [8])0x0;
  FStack_1cd8.Data = (FScriptContainerElement *)0x0;
  local_1cd0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ce0,
             &(param_1->_Text).Getter);
  FText::operator=(&(pFVar27->_Text).Value,&local_1cf8);
  (pFVar27->_Text).bIsSet = local_1ce8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ce0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ce0,
             (FWriteAccessScope *)&local_1b58);
  if ((local_1cd0 != 0) && (FStack_1cd8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1cd8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1cd8,0,0,0x10);
    local_1cd0 = 0;
  }
  if (local_1b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b58.Accessor,&local_1b58);
  }
  if (FStack_1cd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1cd8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ce0);
  if (local_1cf8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cf8.TextData.Reference + 0x10))();
  }
  local_1d28.TextData.Reference = (param_1->_HintText).Value.TextData.Reference;
  if (local_1d28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d28.TextData.Reference + 8))
              (local_1d28.TextData.Reference,local_1c1c);
  }
  local_1d28.Flags = (param_1->_HintText).Value.Flags;
  local_1d18 = (param_1->_HintText).bIsSet;
  local_1d10 = (undefined1  [8])0x0;
  FStack_1d08.Data = (FScriptContainerElement *)0x0;
  local_1d00 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1d10,
             &(param_1->_HintText).Getter);
  FText::operator=(&(pFVar27->_HintText).Value,&local_1d28);
  (pFVar27->_HintText).bIsSet = local_1d18;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d10,
             (FWriteAccessScope *)&local_1b70);
  if ((local_1d00 != 0) && (FStack_1d08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d08,0,0,0x10);
    local_1d00 = 0;
  }
  if (local_1b70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b70.Accessor,&local_1b70);
  }
  if (FStack_1d08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d10);
  if (local_1d28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d28.TextData.Reference + 0x10))();
  }
  local_1cc8.TextData.Reference = (param_1->_SearchText).Value.TextData.Reference;
  if (local_1cc8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cc8.TextData.Reference + 8))
              (local_1cc8.TextData.Reference,local_1c18);
  }
  local_1cc8.Flags = (param_1->_SearchText).Value.Flags;
  local_1cb8 = (param_1->_SearchText).bIsSet;
  local_1cb0 = (undefined1  [8])0x0;
  FStack_1ca8.Data = (FScriptContainerElement *)0x0;
  local_1ca0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1cb0,
             &(param_1->_SearchText).Getter);
  FText::operator=(&(pFVar27->_SearchText).Value,&local_1cc8);
  (pFVar27->_SearchText).bIsSet = local_1cb8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_SearchText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cb0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1cb0,
             (FWriteAccessScope *)&local_1b40);
  if ((local_1ca0 != 0) && (FStack_1ca8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ca8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ca8,0,0,0x10);
    local_1ca0 = 0;
  }
  if (local_1b40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b40.Accessor,&local_1b40);
  }
  if (FStack_1ca8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ca8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cb0);
  if (local_1cc8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cc8.TextData.Reference + 0x10))();
  }
  (pFVar27->_Font).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Font).Getter,
             (FWriteAccessScope *)&local_1a78);
  local_1a60 = &(pFVar27->_Font).Getter.field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1a60);
  if (puVar22 == (undefined8 *)0x0) {
    pTVar42 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1e50 = (ulonglong)uStack_1d2c << 0x20;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_19d8);
    pTVar42 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_1e40 = (FName)pTVar23->Object;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 | 0x1c0);
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEditableTextBox___00__A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_1e40;
    puVar22[4] = pTVar42;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->WeakReferenceCount = (atomic<int>)((int)pTVar42->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar22[5] = DetermineFont;
    puVar22[6] = uStack_1e50;
  }
  if ((uint)pFVar43 >> 8 != 0) {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if ((char)pFVar43 < '\0') {
    pFVar43 = (FSlot *)(ulonglong)((uint)pFVar43 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (((ulonglong)pFVar43 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_19d8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar20 = false;
  if (local_1a78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a78.Accessor,&local_1a78);
  }
  local_1d70 = (param_1->_IsReadOnly).Value;
  local_1d6f = (param_1->_IsReadOnly).bIsSet;
  local_1d68 = (undefined1  [8])0x0;
  FStack_1d60.Data = (FScriptContainerElement *)0x0;
  local_1d58 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1d68,
             &(param_1->_IsReadOnly).Getter);
  (pFVar27->_IsReadOnly).Value = local_1d70;
  (pFVar27->_IsReadOnly).bIsSet = local_1d6f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d68,
             (FWriteAccessScope *)&local_1ab0);
  if ((local_1d58 != 0) && (FStack_1d60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d60,0,0,0x10);
    local_1d58 = 0;
  }
  if (local_1ab0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ab0.Accessor,&local_1ab0);
  }
  if (FStack_1d60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d68);
  local_1d90 = (param_1->_IsPassword).Value;
  local_1d8f = (param_1->_IsPassword).bIsSet;
  local_1d88 = (undefined1  [8])0x0;
  FStack_1d80.Data = (FScriptContainerElement *)0x0;
  local_1d78 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1d88,
             &(param_1->_IsPassword).Getter);
  (pFVar27->_IsPassword).Value = local_1d90;
  (pFVar27->_IsPassword).bIsSet = local_1d8f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_IsPassword).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d88,
             (FWriteAccessScope *)&local_1ac8);
  if ((local_1d78 != 0) && (FStack_1d80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d80,0,0,0x10);
    local_1d78 = 0;
  }
  if (local_1ac8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ac8.Accessor,&local_1ac8);
  }
  if (FStack_1d80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d88);
  local_1e10 = (param_1->_IsCaretMovedWhenGainFocus).Value;
  local_1e0f = (param_1->_IsCaretMovedWhenGainFocus).bIsSet;
  local_1e08 = (undefined1  [8])0x0;
  FStack_1e00.Data = (FScriptContainerElement *)0x0;
  local_1df8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e08,
             &(param_1->_IsCaretMovedWhenGainFocus).Getter);
  (pFVar27->_IsCaretMovedWhenGainFocus).Value = local_1e10;
  (pFVar27->_IsCaretMovedWhenGainFocus).bIsSet = local_1e0f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar27->_IsCaretMovedWhenGainFocus).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e08,
             (FWriteAccessScope *)&local_1b88);
  if ((local_1df8 != 0) && (FStack_1e00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e00,0,0,0x10);
    local_1df8 = 0;
  }
  if (local_1b88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b88.Accessor,&local_1b88);
  }
  if (FStack_1e00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e08);
  local_1db0 = (param_1->_SelectAllTextWhenFocused).Value;
  local_1daf = (param_1->_SelectAllTextWhenFocused).bIsSet;
  local_1da8 = (undefined1  [8])0x0;
  FStack_1da0.Data = (FScriptContainerElement *)0x0;
  local_1d98 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1da8,
             &(param_1->_SelectAllTextWhenFocused).Getter);
  (pFVar27->_SelectAllTextWhenFocused).Value = local_1db0;
  (pFVar27->_SelectAllTextWhenFocused).bIsSet = local_1daf;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar27->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1da8,
             (FWriteAccessScope *)&local_1b10);
  if ((local_1d98 != 0) && (FStack_1da0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1da0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1da0,0,0,0x10);
    local_1d98 = 0;
  }
  if (local_1b10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b10.Accessor,&local_1b10);
  }
  if (FStack_1da0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1da0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1da8);
  local_1dd0 = (param_1->_RevertTextOnEscape).Value;
  local_1dcf = (param_1->_RevertTextOnEscape).bIsSet;
  local_1dc8 = (undefined1  [8])0x0;
  FStack_1dc0.Data = (FScriptContainerElement *)0x0;
  local_1db8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1dc8,
             &(param_1->_RevertTextOnEscape).Getter);
  (pFVar27->_RevertTextOnEscape).Value = local_1dd0;
  (pFVar27->_RevertTextOnEscape).bIsSet = local_1dcf;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dc8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1dc8,
             (FWriteAccessScope *)&local_1af8);
  if ((local_1db8 != 0) && (FStack_1dc0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1dc0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1dc0,0,0,0x10);
    local_1db8 = 0;
  }
  if (local_1af8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1af8.Accessor,&local_1af8);
  }
  if (FStack_1dc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1dc0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1dc8);
  local_1ba8.Value = (param_1->_ClearKeyboardFocusOnCommit).Value;
  local_1ba8.bIsSet = (param_1->_ClearKeyboardFocusOnCommit).bIsSet;
  local_1ba8.Getter._0_8_ = 0;
  local_1ba8.Getter._8_8_ = 0;
  local_1ba8.Getter._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1ba8.Getter,&(param_1->_ClearKeyboardFocusOnCommit).Getter);
  pFVar27 = SEditableText::FArguments::ClearKeyboardFocusOnCommit(pFVar27,&local_1ba8);
  local_1c40 = (param_1->_Justification).Value;
  local_1c3c = (param_1->_Justification).bIsSet;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>
            (local_1c38,&(param_1->_Justification).Getter);
  (pFVar27->_Justification).Value = local_1c40;
  (pFVar27->_Justification).bIsSet = local_1c3c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c38);
  if ((void *)local_1c38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c38);
  local_1df0 = (param_1->_AllowContextMenu).Value;
  local_1def = (param_1->_AllowContextMenu).bIsSet;
  local_1de8 = (undefined1  [8])0x0;
  FStack_1de0.Data = (FScriptContainerElement *)0x0;
  local_1dd8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1de8,
             &(param_1->_AllowContextMenu).Getter);
  (pFVar27->_AllowContextMenu).Value = local_1df0;
  (pFVar27->_AllowContextMenu).bIsSet = local_1def;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_AllowContextMenu).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1de8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1de8,
             (FWriteAccessScope *)&local_1ae0);
  if ((local_1dd8 != 0) && (FStack_1de0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1de0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1de0,0,0,0x10);
    local_1dd8 = 0;
  }
  if (local_1ae0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ae0.Accessor,&local_1ae0);
  }
  if (FStack_1de0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1de0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1de8);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar27->_OnContextMenuOpening,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar27->_ContextMenuExtender,&param_1->_ContextMenuExtender);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar27->_OnBeginTextEdit,&param_1->_OnBeginTextEdit);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar27->_OnTextChanged,
             (FWriteAccessScope *)&local_1a58);
  local_1a40 = &(pFVar27->_OnTextChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1a40);
  if (puVar22 == (undefined8 *)0x0) {
    pTVar42 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1e50 = (ulonglong)uStack_1d2c << 0x20;
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_19f8);
    pTVar42 = (pTVar28->SharedReferenceCount).ReferenceController;
    local_1e40 = (FName)pTVar28->Object;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar20 = true;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSEditableTextBox___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_1e40;
    puVar22[4] = pTVar42;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->WeakReferenceCount = (atomic<int>)((int)pTVar42->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar22[5] = OnEditableTextChanged;
    puVar22[6] = uStack_1e50;
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_19f8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar20 = false;
  if (local_1a58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a58.Accessor,&local_1a58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar27->_OnTextCommitted,
             (FWriteAccessScope *)&local_1a38);
  local_1a20 = &(pFVar27->_OnTextCommitted).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1a20);
  if (puVar22 == (undefined8 *)0x0) {
    pTVar42 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1e50 = (ulonglong)uStack_1d2c << 0x20;
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1968);
    pTVar42 = (pTVar28->SharedReferenceCount).ReferenceController;
    local_1e40 = (FName)pTVar28->Object;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar20 = true;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSEditableTextBox___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_1e40;
    puVar22[4] = pTVar42;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->WeakReferenceCount = (atomic<int>)((int)pTVar42->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar22[5] = OnEditableTextCommitted;
    puVar22[6] = uStack_1e50;
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1968.SharedReferenceCount.ReferenceController);
  }
  if (local_1a38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a38.Accessor,&local_1a38);
  }
  pTVar29 = TAttribute<float>::TAttribute<float>(&local_1910,&param_1->_MinDesiredWidth);
  pFVar27 = SEditableText::FArguments::MinDesiredWidth(pFVar27,pTVar29);
  pTVar30 = TAttribute<bool>::TAttribute<bool>(&local_18f0,&param_1->_SelectAllTextOnCommit);
  pFVar27 = SEditableText::FArguments::SelectAllTextOnCommit(pFVar27,pTVar30);
  pTVar30 = TAttribute<bool>::TAttribute<bool>(&local_18d0,&param_1->_SelectWordOnMouseDoubleClick);
  this_00 = &pTVar30->Getter;
  (pFVar27->_SelectWordOnMouseDoubleClick).Value = pTVar30->Value;
  (pFVar27->_SelectWordOnMouseDoubleClick).bIsSet = pTVar30->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar27->_SelectWordOnMouseDoubleClick).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar6 = *(void **)&(pTVar30->Getter).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar27->_OnKeyCharHandler,&param_1->_OnKeyCharHandler);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar27->_OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  local_1bc8.Value = (param_1->_VirtualKeyboardType).Value;
  local_1bc8.bIsSet = (param_1->_VirtualKeyboardType).bIsSet;
  local_1bc8.Getter._0_8_ = 0;
  local_1bc8.Getter._8_8_ = 0;
  local_1bc8.Getter._16_4_ = 0;
  TDelegate<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_1bc8.Getter,&(param_1->_VirtualKeyboardType).Getter);
  pFVar27 = SEditableText::FArguments::VirtualKeyboardType(pFVar27,&local_1bc8);
  (pFVar27->_VirtualKeyboardOptions).bEnableAutocorrect =
       (param_1->_VirtualKeyboardOptions).bEnableAutocorrect;
  local_1c70 = (param_1->_VirtualKeyboardTrigger).Value;
  local_1c6f = (param_1->_VirtualKeyboardTrigger).bIsSet;
  local_1c68 = (undefined1  [8])0x0;
  pvStack_1c60 = (void *)0x0;
  local_1c58 = 0;
  TDelegate<enum_EVirtualKeyboardTrigger___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(local_1c68,&(param_1->_VirtualKeyboardTrigger).Getter);
  (pFVar27->_VirtualKeyboardTrigger).Value = local_1c70;
  (pFVar27->_VirtualKeyboardTrigger).bIsSet = local_1c6f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_VirtualKeyboardTrigger).Getter
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c68);
  if (pvStack_1c60 != (void *)0x0) {
    FMemory::Free(pvStack_1c60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c68);
  pTVar31 = TAttribute<enum_EVirtualKeyboardDismissAction>::
            TAttribute<enum_EVirtualKeyboardDismissAction>
                      (local_18b0,&param_1->_VirtualKeyboardDismissAction);
  this_01 = &pTVar31->Getter;
  (pFVar27->_VirtualKeyboardDismissAction).Value = pTVar31->Value;
  (pFVar27->_VirtualKeyboardDismissAction).bIsSet = pTVar31->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar27->_VirtualKeyboardDismissAction).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  pvVar6 = *(void **)&(pTVar31->Getter).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  bVar20 = (param_1->_TextShapingMethod).bIsSet;
  if (bVar20 != false) {
    local_1e48[0] = (param_1->_TextShapingMethod).TypedValue;
  }
  if ((TOptional<ETextShapingMethod> *)local_1e48 != &pFVar27->_TextShapingMethod) {
    if (bVar20 == false) {
      if ((pFVar27->_TextShapingMethod).bIsSet != false) {
        (pFVar27->_TextShapingMethod).bIsSet = false;
      }
    }
    else {
      (pFVar27->_TextShapingMethod).TypedValue = local_1e48[0];
      (pFVar27->_TextShapingMethod).bIsSet = true;
    }
  }
  bVar20 = (param_1->_TextFlowDirection).bIsSet;
  if (bVar20 != false) {
    local_1e46[0] = (param_1->_TextFlowDirection).TypedValue;
  }
  if ((TOptional<ETextFlowDirection> *)local_1e46 != &pFVar27->_TextFlowDirection) {
    if (bVar20 == false) {
      if ((pFVar27->_TextFlowDirection).bIsSet != false) {
        (pFVar27->_TextFlowDirection).bIsSet = false;
      }
    }
    else {
      (pFVar27->_TextFlowDirection).TypedValue = local_1e46[0];
      (pFVar27->_TextFlowDirection).bIsSet = true;
    }
  }
  bVar20 = (param_1->_OverflowPolicy).bIsSet;
  if (bVar20 != false) {
    local_1e44[0] = (param_1->_OverflowPolicy).TypedValue;
  }
  if ((TOptional<ETextOverflowPolicy> *)local_1e44 != &pFVar27->_OverflowPolicy) {
    if (bVar20 == false) {
      if ((pFVar27->_OverflowPolicy).bIsSet != false) {
        (pFVar27->_OverflowPolicy).bIsSet = false;
      }
    }
    else {
      (pFVar27->_OverflowPolicy).TypedValue = local_1e44[0];
      (pFVar27->_OverflowPolicy).bIsSet = true;
    }
  }
  pTVar32 = MakeTDecl<SEditableText,RequiredArgs::T0RequiredArgs>
                      (&local_1940,"SEditableText",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                       ,0x3d,(T0RequiredArgs *)&local_res8);
  pTVar32 = TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::Expose<SEditableText>
                      (pTVar32,&this->EditableText);
  pTVar33 = TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar32,&local_19c8,pFVar27);
  pFVar26 = local_1c98;
  pTVar42 = (pTVar33->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar33->Object;
  if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c80 = (local_1c98->_Content).Widget.Object;
  pTStack_1c78 = (local_1c98->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1c98->_Content).Widget.Object = (SWidget *)pSVar3;
  (local_1c98->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar42;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c78);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c10,&local_1e40,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1d50,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
             ,0x39,local_res10);
  FMemScope::~FMemScope(&local_1c10);
  FLLMScope::~FLLMScope(local_res20);
  if (local_1d50._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d50._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d50._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar7 = (this->PaddingBox).SharedReferenceCount.ReferenceController;
  (this->PaddingBox).Object = local_1d50._Widget.Object;
  (this->PaddingBox).SharedReferenceCount.ReferenceController =
       local_1d50._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pSVar34 = TSharedPtr<SBox,1>::operator->(&local_1d50._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar34,(FSlateBaseNamedArgs *)pFVar26);
  pSVar34 = local_1d50._Widget.Object;
  SBox::Construct(local_1d50._Widget.Object,pFVar26);
  pSVar35 = TSharedPtr<SBox,1>::operator->(&local_1d50._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar35);
  pSVar35 = TSharedPtr<SBox,1>::operator->(&local_1d50._Widget);
  pbVar1 = (byte *)((longlong)&pSVar35->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1d50._Widget.Object == (SBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar19.ReferenceController = local_1d50._Widget.SharedReferenceCount.ReferenceController;
  local_1d50._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1d50._Widget.Object = (SBox *)0x0;
  if ((pSVar34 == (SBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1bd8.Object = (SWidget *)pSVar34;
  local_1bd8.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
  if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar36 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_1c08,&local_1bd8);
  pFVar37 = SHorizontalBox::FArguments::operator+(local_1c90,pFVar36);
  pTVar38 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1958,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                       ,0x32,local_res18);
  pTVar38 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::Expose<SHorizontalBox>
                      (pTVar38,&this->Box);
  pTVar39 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar38,&local_1978,pFVar37);
  pTVar7 = (pTVar39->SharedReferenceCount).ReferenceController;
  local_1c50 = pTVar39->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (local_1e30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1e30->_Content).Widget.Object = (SWidget *)local_1c50;
  (local_1e30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  pTStack_1c48 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SBorder::Construct((SBorder *)this,local_1e30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1978.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1958._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1940._Widget.SharedReferenceCount.ReferenceController);
  SEditableText::FArguments::~FArguments(&local_d80);
  SBox::FArguments::~FArguments(&local_14a0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1890);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_16a8._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_16a8);
  SBorder::FArguments::~FArguments(&local_1160);
  pTVar42 = (param_1->_ErrorReporting).SharedReferenceCount.ReferenceController;
  pIVar41 = (param_1->_ErrorReporting).Object;
  if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19e8 = (this->ErrorReporting).Object;
  pTStack_19e0 = (this->ErrorReporting).SharedReferenceCount.ReferenceController;
  (this->ErrorReporting).Object = pIVar41;
  (this->ErrorReporting).SharedReferenceCount.ReferenceController = pTVar42;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_19e0);
  if ((this->ErrorReporting).Object != (IErrorReportingWidget *)0x0) {
    this_03 = TSharedPtr<SHorizontalBox,1>::operator->(&this->Box);
    pFVar40 = SHorizontalBox::AddSlot(this_03,&local_17a8);
    pFVar36 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar40->_padding_);
    pFVar36 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar36->field_0x18,__real_40400000,0.0);
    pIVar41 = TSharedPtr<IErrorReportingWidget,1>::operator->(&this->ErrorReporting);
    pTVar28 = (TSharedRef<SWidget,1> *)(**(code **)((longlong)*pIVar41 + 0x18))(pIVar41,local_1d38);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar36,pTVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(uStack_1d2c,local_1d30));
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_17a8);
  }
  return;
}

// CreateAccessibleWidget @ 142866760

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SEditableTextBox::CreateAccessibleWidget
          (SEditableTextBox *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  bool bVar9;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar9 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x78);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar6->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar6->Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
    }
    local_28.Object = pSVar3;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,TextEdit);
    this_00->_padding_ =
         (longlong)&FSlateAccessibleEditableTextBox::_vftable__for__FSlateAccessibleWidget__;
    this_00[1]._padding_ =
         (longlong)&FSlateAccessibleEditableTextBox::_vftable__for__IAccessibleText__;
    this_00[1]._padding_ =
         (longlong)&FSlateAccessibleEditableTextBox::_vftable__for__IAccessibleProperty__;
    if (TVar8.Object != (FSlateAccessibleWidget *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar9 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// DetermineBackgroundColor @ 14286e550

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SEditableTextBox::DetermineBackgroundColor
          (SEditableTextBox *this,FSlateColor *__return_storage_ptr__)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                       ,0x152,L"");
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

// DetermineFont @ 14286e5e0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall
SEditableTextBox::DetermineFont(SEditableTextBox *this,FSlateFontInfo *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateFontInfo *pFVar3;
  
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                       ,0x14c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateFontInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->FontOverride).bIsSet == false) {
    pFVar3 = &(this->Style->TextStyle).Font;
  }
  else {
    pFVar3 = TAttribute<FSlateFontInfo>::Get(&this->FontOverride);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// DetermineForegroundColor @ 14286e660

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SEditableTextBox::DetermineForegroundColor
          (SEditableTextBox *this,FSlateColor *__return_storage_ptr__)

{
  FEditableTextBoxStyle *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  FSlateColor *pFVar6;
  TAttribute<FSlateColor> *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                       ,0x158,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateColor *)(*pcVar2)();
      return pFVar6;
    }
  }
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateColor *)(*pcVar2)();
      return pFVar6;
    }
  }
  cVar4 = (**(code **)((this->EditableText).Object)->_padding_)();
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(this->_padding_ + 0x1a0))(this);
    if (cVar4 == '\0') {
      this_00 = &this->ForegroundColorOverride;
      if ((this->ForegroundColorOverride).bIsSet != false) goto LAB_14286e6f7;
      pFVar6 = &this->Style->ForegroundColor;
    }
    else {
      this_00 = &this->FocusedForegroundColorOverride;
      if ((this->FocusedForegroundColorOverride).bIsSet == false) {
        pFVar6 = &this->Style->FocusedForegroundColor;
      }
      else {
LAB_14286e6f7:
        pFVar6 = TAttribute<FSlateColor>::Get(this_00);
      }
    }
  }
  else {
    if ((this->ReadOnlyForegroundColorOverride).bIsSet != false) {
      this_00 = &this->ReadOnlyForegroundColorOverride;
      goto LAB_14286e6f7;
    }
    if ((this->ForegroundColorOverride).bIsSet == false) {
      pFVar1 = this->Style;
      fVar7 = (pFVar1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0._s_0.R;
      fVar8 = (pFVar1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0._s_0.G;
      fVar9 = (pFVar1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0._s_0.B;
      fVar10 = (pFVar1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0._s_0.A;
      uVar5._0_1_ = (pFVar1->ReadOnlyForegroundColor).ColorUseRule;
      uVar5._1_1_ = (pFVar1->ReadOnlyForegroundColor).ColorTableId;
      uVar5._2_2_ = *(undefined2 *)&(pFVar1->ReadOnlyForegroundColor).field_0x12;
      goto LAB_14286e777;
    }
    pFVar6 = TAttribute<FSlateColor>::Get(&this->ForegroundColorOverride);
  }
  fVar7 = (pFVar6->SpecifiedColor).field0_0x0._s_0.R;
  fVar8 = (pFVar6->SpecifiedColor).field0_0x0._s_0.G;
  fVar9 = (pFVar6->SpecifiedColor).field0_0x0._s_0.B;
  fVar10 = (pFVar6->SpecifiedColor).field0_0x0._s_0.A;
  uVar5._0_1_ = pFVar6->ColorUseRule;
  uVar5._1_1_ = pFVar6->ColorTableId;
  uVar5._2_2_ = *(undefined2 *)&pFVar6->field_0x12;
LAB_14286e777:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar7;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar8;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar9;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar10;
  __return_storage_ptr__->ColorUseRule = (char)uVar5;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar5 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar5 >> 0x10);
  return __return_storage_ptr__;
}

// DeterminePadding @ 14286e7a0

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SEditableTextBox::DeterminePadding(SEditableTextBox *this,FMargin *__return_storage_ptr__)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                       ,0x146,L"");
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

// EnableTextInputMethodContext @ 14286f030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::EnableTextInputMethodContext(SEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::EnableTextInputMethodContext
            ((((this->EditableText).Object)->EditableTextLayout).Ptr);
  return;
}

// GetBorderImage @ 142875270

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SEditableTextBox::GetBorderImage(SEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateBrush *pFVar4;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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

// GetDefaultAccessibleText @ 142876230

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FText> * __thiscall
SEditableTextBox::GetDefaultAccessibleText
          (SEditableTextBox *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  pSVar1 = (this->EditableText).Object;
  if (pSVar1 == (SEditableText *)0x0) {
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  }
  else {
    FSlateEditableTextLayout::GetHintText((pSVar1->EditableTextLayout).Ptr,&local_18);
    FText::FText((FText *)__return_storage_ptr__,&local_18);
    if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar2)();
        return pTVar4;
      }
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetSearchText @ 142879f20

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SEditableTextBox::GetSearchText(SEditableTextBox *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::GetSearchText
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelectedText @ 142879fc0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SEditableTextBox::GetSelectedText(SEditableTextBox *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::GetSelectedText
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GoTo @ 14287e400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::GoTo(SEditableTextBox *this,FTextLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::GoTo((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// HasError @ 14287f220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableTextBox::HasError(SEditableTextBox *this)

{
  IErrorReportingWidget *pIVar1;
  char cVar2;
  
  pIVar1 = (this->ErrorReporting).Object;
  if (pIVar1 != (IErrorReportingWidget *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x10))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// HasKeyboardFocus @ 14287f2a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableTextBox::HasKeyboardFocus(SEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  bVar2 = SWidget::HasKeyboardFocus((SWidget *)this);
  if (!bVar2) {
    if ((this->EditableText).Object == (SEditableText *)0x0) {
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

// OnEditableTextChanged @ 142886010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::OnEditableTextChanged(SEditableTextBox *this,FText *param_1)

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
      if (cVar2 == '\0') goto LAB_142886150;
    }
    this_01 = FText::GetEmpty();
  }
  else {
LAB_142886150:
    this_01 = (FText *)&local_38;
  }
  pFVar5 = FText::ToString(this_01);
  SetError(this,pFVar5);
  if ((ITextData *)local_38.DestructionSentinel._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.DestructionSentinel._0_8_ + 0x10))();
  }
  return;
}

// OnEditableTextCommitted @ 1428861b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::OnEditableTextCommitted(SEditableTextBox *this,FText *param_1,Type param_2)

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
LAB_142886278:
    if (param_2 == OnEnter) {
      pFVar4 = FText::ToString(&local_38);
      SetError(this,pFVar4);
    }
    goto LAB_142886292;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged,
             &local_28);
  if ((*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) ||
     (plVar5 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8, plVar5 == (longlong *)0x0)) {
LAB_1428862bb:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x38))();
    if (cVar2 == '\0') goto LAB_1428862bb;
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
    if (cVar2 == '\0') goto LAB_142886278;
  }
  this_00 = FText::GetEmpty();
  pFVar4 = FText::ToString(this_00);
  SetError(this,pFVar4);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->OnTextCommitted,param_1,param_2);
LAB_142886292:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// OnFocusReceived @ 142886420

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableTextBox::OnFocusReceived
          (SEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SEditableText *pSVar3;
  code *pcVar4;
  bool bVar5;
  FReply *pFVar6;
  TSharedRef<SWidget,1> local_18;
  
  FReply::FReply(__return_storage_ptr__,true);
  EVar1 = param_2->Cause;
  if (EVar1 != Cleared) {
    if ((this->EditableText).Object == (SEditableText *)0x0) {
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
    if (pSVar3 == (SEditableText *)0x0) {
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

// OnKeyDown @ 1428870e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableTextBox::OnKeyDown
          (SEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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
    if (((this->EditableText).Object == (SEditableText *)0x0) &&
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

// ScrollTo @ 1428953e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::ScrollTo(SEditableTextBox *this,FTextLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::ScrollTo
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// SelectAllText @ 142895470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SelectAllText(SEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SelectAllText((((this->EditableText).Object)->EditableTextLayout).Ptr);
  return;
}

// SetAllowContextMenu @ 142895700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetAllowContextMenu(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->EditableText).Object;
  (pSVar1->bAllowContextMenu).Value = param_1->Value;
  (pSVar1->bAllowContextMenu).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bAllowContextMenu).Getter,&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetClearKeyboardFocusOnCommit @ 142895b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetClearKeyboardFocusOnCommit(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  (pSVar1->bClearKeyboardFocusOnCommit).Value = param_1->Value;
  (pSVar1->bClearKeyboardFocusOnCommit).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bClearKeyboardFocusOnCommit).Getter,&param_1->Getter);
  return;
}

// SetError @ 142896130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetError(SEditableTextBox *this,FString *param_1)

{
  byte *pbVar1;
  IErrorReportingWidget *pIVar2;
  SHorizontalBox *pSVar3;
  code *pcVar4;
  SPopupErrorText *pSVar5;
  FSharedReferencer<1> FVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  undefined8 *puVar11;
  FSlot *this_00;
  FSlotArguments *pFVar12;
  FArguments *pFVar13;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  SPopupErrorText *local_488;
  FSharedReferencer<1> local_480;
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs> local_478;
  FSlot *local_460;
  FSharedReferencer<1> local_458;
  void *local_450;
  undefined8 local_448;
  FSlot *local_440;
  FName local_438;
  FMemScope local_430;
  FSlotArguments *local_428;
  uchar local_420 [8];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  uchar local_400 [8];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0 [8];
  TReferenceControllerBase<1> *local_3d8;
  undefined1 local_3d0 [8];
  TReferenceControllerBase<1> *local_3c8;
  undefined **local_3c0;
  undefined8 *local_3b8 [2];
  TReferenceControllerBase<1> *local_3a8;
  undefined1 local_388 [40];
  FSlotArgumentsMixin local_360;
  TPanelChildren<SBoxPanel::FSlot> *local_2d0;
  int local_2c8;
  undefined1 local_2c0 [616];
  undefined1 local_58 [32];
  
  pIVar2 = (this->ErrorReporting).Object;
  if ((param_1->Data).ArrayNum < 2) {
    if (pIVar2 == (IErrorReportingWidget *)0x0) {
      return;
    }
    puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,local_3e0);
    local_420[1] = 1;
    local_418 = 0;
    uStack_410 = 0;
    local_420[0] = (uchar)EVisibility::Collapsed.Value.Value;
    local_408 = 0;
    (**(code **)(*(longlong *)*puVar11 + 0x1c8))((longlong *)*puVar11,local_420);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3d8);
    if (((this->ErrorReporting).Object == (IErrorReportingWidget *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar2 = (this->ErrorReporting).Object;
    local_450 = (void *)0x0;
    local_448 = 0;
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_450);
    if (local_450 == (void *)0x0) {
      return;
    }
    FMemory::Free(local_450);
    return;
  }
  if (pIVar2 != (IErrorReportingWidget *)0x0) goto LAB_14289669e;
  if (((this->Box).Object == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (this->Box).Object;
  this_00 = ::operator_new(0x58);
  local_440 = (FSlot *)0x0;
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
    local_440 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3b8,(FSlot *)&local_440);
  local_2c8 = -1;
  local_3c0 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_2d0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar3->field_0x218;
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_3b8);
  local_428 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar12->field_0x18,__real_40400000,0.0);
  pFVar13 = SPopupErrorText::FArguments::FArguments((FArguments *)local_2c0);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_438 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_430,&local_438,true);
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>
            (&local_478,"SPopupErrorText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
             ,0xad,local_res18);
  FMemScope::~FMemScope(&local_430);
  FLLMScope::~FLLMScope(local_res20);
  FVar6.ReferenceController = local_478._Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = local_478._Widget.Object;
  if (local_478._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_478._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_478._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((local_478._Widget.Object == (SPopupErrorText *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_478._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  (**(code **)((local_478._Widget.Object)->_padding_ + 0x260))(local_478._Widget.Object,pFVar13);
  if ((local_478._Widget.Object == (SPopupErrorText *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_478._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_478._Widget.Object)->_padding_ + 0x228))(local_478._Widget.Object);
    bVar10 = 0;
    if (cVar9 != '\0') goto LAB_142896448;
  }
  else {
LAB_142896448:
    bVar10 = 0x20;
  }
  *(byte *)&(local_478._Widget.Object)->_padding_ =
       (byte)(local_478._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_478._Widget.Object)->_padding_ =
       (byte)(local_478._Widget.Object)->_padding_ | bVar10;
  if ((local_478._Widget.Object == (SPopupErrorText *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_478._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_478._Widget.Object == (SPopupErrorText *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar7.ReferenceController = local_478._Widget.SharedReferenceCount.ReferenceController;
  local_478._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_478._Widget.Object = (SPopupErrorText *)0x0;
  if ((pSVar5 == (SPopupErrorText *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_488 = pSVar5;
  local_480.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SPopupErrorText **)&local_428->field_0x8 != &local_488) {
    *(SPopupErrorText **)&local_428->field_0x8 = pSVar5;
    local_488 = (SPopupErrorText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_428->field_0x10,&local_480);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2c0._568_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2c0);
  local_3c0 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_3b8[0] != (undefined8 *)0x0) {
    if (local_2c8 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_2d0,(FSlotArguments *)local_3b8);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_2d0,(FSlotArguments *)local_3b8,local_2c8);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_360);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_388);
  if ((void *)local_388._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_388._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_388);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a8);
  if (local_3b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_3b8[0])(local_3b8[0],1);
  }
  local_460 = (FSlot *)&pSVar5->_padding_;
  if (pSVar5 == (SPopupErrorText *)0x0) {
    local_460 = (FSlot *)0x0;
  }
  local_458.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ErrorReporting != (TSharedPtr<IErrorReportingWidget,1> *)&local_460) {
    (this->ErrorReporting).Object = (IErrorReportingWidget *)local_460;
    local_460 = (FSlot *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ErrorReporting).SharedReferenceCount,&local_458);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
LAB_14289669e:
  if (((this->ErrorReporting).Object == (IErrorReportingWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->ErrorReporting).Object;
  puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,local_3d0);
  local_400[1] = 1;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_400[0] = (uchar)EVisibility::Visible.Value.Value;
  local_3e8 = 0;
  (**(code **)(*(longlong *)*puVar11 + 0x1c8))((longlong *)*puVar11,local_400);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3c8);
  if (((this->ErrorReporting).Object == (IErrorReportingWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->ErrorReporting).Object;
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2,param_1);
  return;
}

// SetError @ 142896770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetError(SEditableTextBox *this,FText *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_1);
  SetError(this,pFVar1);
  return;
}

// SetFocusedForegroundColor @ 142896850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetFocusedForegroundColor(SEditableTextBox *this,TAttribute<FSlateColor> *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->FocusedForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->Value).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->FocusedForegroundColorOverride).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->FocusedForegroundColorOverride).Value.ColorTableId = EVar2;
  *(undefined2 *)&(this->FocusedForegroundColorOverride).Value.field_0x12 = uVar3;
  (this->FocusedForegroundColorOverride).bIsSet = param_1->bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->FocusedForegroundColorOverride).Getter,&param_1->Getter);
  return;
}

// SetFont @ 1428968f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetFont(SEditableTextBox *this,TAttribute<FSlateFontInfo> *param_1)

{
  FSlateFontInfo::operator=(&(this->FontOverride).Value,&param_1->Value);
  (this->FontOverride).bIsSet = param_1->bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->FontOverride).Getter,&param_1->Getter);
  return;
}

// SetHintText @ 142896d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetHintText(SEditableTextBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SetHintText
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// SetIsCaretMovedWhenGainFocus @ 142896de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetIsCaretMovedWhenGainFocus(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  (pSVar1->bIsCaretMovedWhenGainFocus).Value = param_1->Value;
  (pSVar1->bIsCaretMovedWhenGainFocus).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bIsCaretMovedWhenGainFocus).Getter,&param_1->Getter);
  return;
}

// SetIsPassword @ 142896fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetIsPassword(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  FPlainTextLayoutMarshaller *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  bool local_30;
  bool local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_30 = param_1->Value;
  pSVar1 = (this->EditableText).Object;
  local_2f = param_1->bIsSet;
  this_00 = &param_1->Getter;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,this_00);
  (pSVar1->bIsPassword).Value = local_30;
  (pSVar1->bIsPassword).bIsSet = local_2f;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bIsPassword).Getter,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
  if ((pSVar1->PlainTextMarshaller).Object == (FPlainTextLayoutMarshaller *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (pSVar1->PlainTextMarshaller).Object;
  (pFVar2->bIsPassword).Value = (pSVar1->bIsPassword).Value;
  (pFVar2->bIsPassword).bIsSet = (pSVar1->bIsPassword).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar2->bIsPassword).Getter,&(pSVar1->bIsPassword).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar3 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetIsReadOnly @ 1428971d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetIsReadOnly(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  bool local_30;
  bool local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30 = param_1->Value;
  pSVar1 = (this->EditableText).Object;
  local_2f = param_1->bIsSet;
  this_00 = &param_1->Getter;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,this_00);
  (pSVar1->bIsReadOnly).Value = local_30;
  (pSVar1->bIsReadOnly).bIsSet = local_2f;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bIsReadOnly).Getter,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetJustification @ 142897370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetJustification(SEditableTextBox *this,TAttribute<ETextJustify::Type> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SetJustification
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// SetMaximumLength @ 142897870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetMaximumLength(SEditableTextBox *this,TAttribute<int> *param_1)

{
  (this->MaximumLength).Value = param_1->Value;
  (this->MaximumLength).bIsSet = param_1->bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaximumLength).Getter,&param_1->Getter);
  return;
}

// SetMinimumDesiredWidth @ 142897c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetMinimumDesiredWidth(SEditableTextBox *this,TAttribute<float> *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  (pSVar1->MinDesiredWidth).Value = param_1->Value;
  (pSVar1->MinDesiredWidth).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->MinDesiredWidth).Getter,&param_1->Getter);
  return;
}

// SetOnKeyCharHandler @ 142897e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetOnKeyCharHandler
          (SEditableTextBox *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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

// SetOnKeyDownHandler @ 142897f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetOnKeyDownHandler
          (SEditableTextBox *this,
          TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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

// SetOverflowPolicy @ 142898280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetOverflowPolicy(SEditableTextBox *this,TOptional<ETextOverflowPolicy> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined6 in_register_00000012;
  undefined1 local_res8;
  char local_res9;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SetOverflowPolicy
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,SUB82(&local_res8,0));
  return;
}

// SetReadOnlyForegroundColor @ 1428986f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetReadOnlyForegroundColor
          (SEditableTextBox *this,TAttribute<FSlateColor> *param_1)

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

// SetRevertTextOnEscape @ 142898760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetRevertTextOnEscape(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  (pSVar1->bRevertTextOnEscape).Value = param_1->Value;
  (pSVar1->bRevertTextOnEscape).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bRevertTextOnEscape).Getter,&param_1->Getter);
  return;
}

// SetSearchText @ 142898b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetSearchText(SEditableTextBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SetSearchText
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// SetSelectAllTextOnCommit @ 142898c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetSelectAllTextOnCommit(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  (pSVar1->bSelectAllTextOnCommit).Value = param_1->Value;
  (pSVar1->bSelectAllTextOnCommit).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bSelectAllTextOnCommit).Getter,&param_1->Getter);
  return;
}

// SetSelectAllTextWhenFocused @ 142898cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetSelectAllTextWhenFocused(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  (pSVar1->bSelectAllTextWhenFocused).Value = param_1->Value;
  (pSVar1->bSelectAllTextWhenFocused).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bSelectAllTextWhenFocused).Getter,&param_1->Getter);
  return;
}

// SetSelectWordOnMouseDoubleClick @ 142898d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetSelectWordOnMouseDoubleClick(SEditableTextBox *this,TAttribute<bool> *param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  (pSVar1->bSelectWordOnMouseDoubleClick).Value = param_1->Value;
  (pSVar1->bSelectWordOnMouseDoubleClick).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->bSelectWordOnMouseDoubleClick).Getter,&param_1->Getter);
  return;
}

// SetStyle @ 142899150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetStyle(SEditableTextBox *this,FEditableTextBoxStyle *param_1)

{
  FEditableTextBoxStyle *pFVar1;
  SEditableText *this_00;
  code *pcVar2;
  bool bVar3;
  FArguments local_6c8;
  
  this->Style = param_1;
  if (param_1 == (FEditableTextBoxStyle *)0x0) {
    FArguments::FArguments(&local_6c8);
    this->Style = local_6c8._Style;
    FArguments::~FArguments(&local_6c8);
  }
  if (this->Style == (FEditableTextBoxStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
                       ,0x76,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Style;
  this_00 = (this->EditableText).Object;
  this->BorderImageNormal = &pFVar1->BackgroundImageNormal;
  this->BorderImageHovered = &pFVar1->BackgroundImageHovered;
  this->BorderImageFocused = &pFVar1->BackgroundImageFocused;
  this->BorderImageReadOnly = &pFVar1->BackgroundImageReadOnly;
  if ((this_00 != (SEditableText *)0x0) && (&pFVar1->TextStyle != (FTextBlockStyle *)0x0)) {
    FSlateEditableTextLayout::SetTextStyle((this_00->EditableTextLayout).Ptr,&pFVar1->TextStyle);
    SWidget::Invalidate((SWidget *)this_00,Layout);
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetText @ 14289aa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetText(SEditableTextBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SetText((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1)
  ;
  return;
}

// SetTextBlockStyle @ 14289ab20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableTextBox::SetTextBlockStyle(SEditableTextBox *this,FTextBlockStyle *param_1)

{
  SEditableText *this_00;
  
  this_00 = (this->EditableText).Object;
  if ((this_00 != (SEditableText *)0x0) && (param_1 != (FTextBlockStyle *)0x0)) {
    FSlateEditableTextLayout::SetTextStyle((this_00->EditableTextLayout).Ptr,param_1);
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// SetTextBoxBackgroundColor @ 14289ab60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetTextBoxBackgroundColor(SEditableTextBox *this,TAttribute<FSlateColor> *param_1)

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

// SetTextBoxForegroundColor @ 14289aba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetTextBoxForegroundColor(SEditableTextBox *this,TAttribute<FSlateColor> *param_1)

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

// SetTextFlowDirection @ 14289ac80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetTextFlowDirection
          (SEditableTextBox *this,TOptional<ETextFlowDirection> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SetTextFlowDirection
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// SetTextShapingMethod @ 14289ae80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetTextShapingMethod
          (SEditableTextBox *this,TOptional<ETextShapingMethod> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  FSlateEditableTextLayout::SetTextShapingMethod
            ((((this->EditableText).Object)->EditableTextLayout).Ptr,param_1);
  return;
}

// SetVirtualKeyboardDismissAction @ 14289b830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBox::SetVirtualKeyboardDismissAction
          (SEditableTextBox *this,TAttribute<EVirtualKeyboardDismissAction> *param_1)

{
  SEditableText *pSVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  TDelegate<EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  EVirtualKeyboardDismissAction local_30;
  bool local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30 = param_1->Value;
  pSVar1 = (this->EditableText).Object;
  local_2f = param_1->bIsSet;
  this_00 = &param_1->Getter;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(local_28,this_00);
  (pSVar1->VirtualKeyboardDismissAction).Value = local_30;
  (pSVar1->VirtualKeyboardDismissAction).bIsSet = local_2f;
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->VirtualKeyboardDismissAction).Getter,
             (TDelegate<EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SupportsKeyboardFocus @ 14289d2e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableTextBox::SupportsKeyboardFocus(SEditableTextBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEditableText *pSVar2;
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
  if (pSVar2 == (SEditableText *)0x0) {
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

