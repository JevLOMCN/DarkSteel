// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 46

// <lambda_1> @ 14d0ec4f0

<lambda_1> * __thiscall
`SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ::FString::FString(this,&param_1->FoundArg);
  return this;
}

// SNamingTokensEditableTextBox @ 14d0ee3e0

/* WARNING: Enum "Type": Some values do not have unique names */

SNamingTokensEditableTextBox * __thiscall
SNamingTokensEditableTextBox::SNamingTokensEditableTextBox(SNamingTokensEditableTextBox *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SNamingTokensEditableTextBox__6B_;
  (this->NamingTokenFilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NamingTokenFilterArgs).AdditionalNamespacesToInclude.ArrayNum = 0;
  (this->NamingTokenFilterArgs).AdditionalNamespacesToInclude.ArrayMax = 0;
  (this->NamingTokenFilterArgs).bIncludeGlobal = true;
  (this->NamingTokenFilterArgs).bForceCaseSensitive = false;
  (this->NamingTokenFilterArgs).bNativeOnly = false;
  (this->NamingTokenContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamingTokenContexts).ArrayNum = 0;
  (this->NamingTokenContexts).ArrayMax = 0;
  (this->EditableText).Object = (SMultiLineEditableText *)0x0;
  (this->EditableText).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->DropdownAnchor).Object = (SMenuAnchor *)0x0;
  (this->DropdownAnchor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->FilterWidget).Object = (SNamingTokenDataTreeViewWidget *)0x0;
  (this->FilterWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->LastCursorTokenData).Object = (FCursorTokenData *)0x0;
  (this->LastCursorTokenData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Box).Object = (SHorizontalBox *)0x0;
  (this->Box).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->HScrollBarBox).Object = (SBox *)0x0;
  (this->HScrollBarBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HScrollBar).Object = (SScrollBar *)0x0;
  (this->HScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->VScrollBarBox).Object = (SBox *)0x0;
  (this->VScrollBarBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VScrollBar).Object = (SScrollBar *)0x0;
  (this->VScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Marshaller).Object = (FNamingTokensStringSyntaxHighlighterMarshaller *)0x0;
  (this->Marshaller).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ErrorReporting).Object = (IErrorReportingWidget *)0x0;
  (this->ErrorReporting).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->TextBoxStyle = (FEditableTextBoxStyle *)0x0;
  this->ArgumentStyle = (FTextBlockStyle *)0x0;
  FText::FText(&(this->BoundText).Value);
  (this->BoundText).bIsSet = false;
  *(undefined8 *)&(this->BoundText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BoundText).Getter = 0;
  *(undefined8 *)&(this->BoundText).Getter.field_0x8 = 0;
  FText::FText(&(this->TokenizedText).Value);
  (this->TokenizedText).bIsSet = false;
  *(undefined8 *)&(this->TokenizedText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TokenizedText).Getter = 0;
  *(undefined8 *)&(this->TokenizedText).Getter.field_0x8 = 0;
  FText::FText(&(this->ResolvedText).Value);
  (this->ResolvedText).bIsSet = false;
  *(undefined8 *)&(this->ResolvedText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResolvedText).Getter = 0;
  *(undefined8 *)&(this->ResolvedText).Getter.field_0x8 = 0;
  (this->DisplayTokenIcon).Value = false;
  (this->DisplayTokenIcon).bIsSet = false;
  *(undefined8 *)&(this->DisplayTokenIcon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DisplayTokenIcon).Getter = 0;
  *(undefined8 *)&(this->DisplayTokenIcon).Getter.field_0x8 = 0;
  (this->DisplayErrorMessage).Value = false;
  (this->DisplayErrorMessage).bIsSet = false;
  *(undefined8 *)&(this->DisplayErrorMessage).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DisplayErrorMessage).Getter = 0;
  *(undefined8 *)&(this->DisplayErrorMessage).Getter.field_0x8 = 0;
  (this->DisplayBorderImage).Value = false;
  (this->DisplayBorderImage).bIsSet = false;
  *(undefined8 *)&(this->DisplayBorderImage).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DisplayBorderImage).Getter = 0;
  *(undefined8 *)&(this->DisplayBorderImage).Getter.field_0x8 = 0;
  (this->CanDisplayResolvedText).Value = false;
  (this->CanDisplayResolvedText).bIsSet = false;
  *(undefined8 *)&(this->CanDisplayResolvedText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CanDisplayResolvedText).Getter = 0;
  *(undefined8 *)&(this->CanDisplayResolvedText).Getter.field_0x8 = 0;
  (this->ValidArguments).Value.DataPtr = (FString *)0x0;
  (this->ValidArguments).Value.ArrayNum = 0;
  (this->ValidArguments).bIsSet = false;
  *(undefined8 *)&(this->ValidArguments).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ValidArguments).Getter = 0;
  *(undefined8 *)&(this->ValidArguments).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnValidateTokenizedText = 0;
  *(undefined8 *)&(this->OnValidateTokenizedText).field_0x8 = 0;
  *(undefined4 *)&(this->OnValidateTokenizedText).field_0x10 = 0;
  *(undefined8 *)&this->OnTokenizedTextChanged = 0;
  *(undefined8 *)&(this->OnTokenizedTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTokenizedTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTokenizedTextCommitted = 0;
  *(undefined8 *)&(this->OnTokenizedTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->OnTokenizedTextCommitted).field_0x10 = 0;
  *(undefined8 *)&this->OnPreEvaluateTokens = 0;
  *(undefined8 *)&(this->OnPreEvaluateTokens).field_0x8 = 0;
  *(undefined4 *)&(this->OnPreEvaluateTokens).field_0x10 = 0;
  this->bHandlingEvaluation = false;
  this->bFullyQualifyGlobalTokenSuggestions = false;
  this->bEnableSuggestionDropdown = true;
  this->bModifyingSuggestionDropdown = false;
  return this;
}

// ~<lambda_1> @ 14d0eeaa0

void __thiscall
`SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>::~<lambda_1>(void *this)

{
  ::FString::~FString(this);
  return;
}

// ~SNamingTokensEditableTextBox @ 14d0f0410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::~SNamingTokensEditableTextBox(SNamingTokensEditableTextBox *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPreEvaluateTokens);
  pvVar1 = *(void **)&(this->OnPreEvaluateTokens).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreEvaluateTokens);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTokenizedTextCommitted);
  pvVar1 = *(void **)&(this->OnTokenizedTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTokenizedTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTokenizedTextChanged);
  pvVar1 = *(void **)&(this->OnTokenizedTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTokenizedTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValidateTokenizedText);
  pvVar1 = *(void **)&(this->OnValidateTokenizedText).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValidateTokenizedText);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValidArguments).Getter);
  pvVar1 = *(void **)&(this->ValidArguments).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValidArguments).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CanDisplayResolvedText).Getter);
  pvVar1 = *(void **)&(this->CanDisplayResolvedText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CanDisplayResolvedText).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DisplayBorderImage).Getter);
  pvVar1 = *(void **)&(this->DisplayBorderImage).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DisplayBorderImage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DisplayErrorMessage).Getter);
  pvVar1 = *(void **)&(this->DisplayErrorMessage).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DisplayErrorMessage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DisplayTokenIcon).Getter);
  pvVar1 = *(void **)&(this->DisplayTokenIcon).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DisplayTokenIcon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ResolvedText).Getter);
  pvVar1 = *(void **)&(this->ResolvedText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ResolvedText).Getter);
  pIVar2 = (this->ResolvedText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TokenizedText).Getter);
  pvVar1 = *(void **)&(this->TokenizedText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TokenizedText).Getter);
  pIVar2 = (this->TokenizedText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter);
  pvVar1 = *(void **)&(this->BoundText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BoundText).Getter);
  pIVar2 = (this->BoundText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ErrorReporting).SharedReferenceCount.ReferenceController);
  TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::
  ~TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>(&this->Marshaller);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VScrollBarBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HScrollBarBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
  ~TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>(&this->LastCursorTokenData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FilterWidget).SharedReferenceCount.ReferenceController);
  TSharedPtr<SMenuAnchor,1>::~TSharedPtr<SMenuAnchor,1>(&this->DropdownAnchor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->NamingTokenContexts).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)
             (this->NamingTokenFilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data,
             (this->NamingTokenFilterArgs).AdditionalNamespacesToInclude.ArrayNum);
  pFVar3 = (this->NamingTokenFilterArgs).AdditionalNamespacesToInclude.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d0f1630

EVisibility __thiscall
`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_1>::operator()(void *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  bool local_28 [8];
  EVisibility *local_20;
  TAttribute<bool> *local_18;
  
  local_18 = (TAttribute<bool> *)(*(longlong *)this + 0x420);
  local_28[0] = false;
  pbVar1 = TAttribute<bool>::Get(local_18,local_28);
  if (*pbVar1 == false) {
    local_20 = &EVisibility::Collapsed;
  }
  else {
    local_20 = &EVisibility::Visible;
  }
  *in_RDX = (local_20->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// operator() @ 14d0f1e30

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
`SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdownNextTick'::__l5::<lambda_1>::operator()
          (void *this,double param_1,float param_2)

{
  *(undefined1 *)(*(longlong *)this + 0x533) = 0;
  SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdown
            (*(SNamingTokensEditableTextBox **)this);
  return Stop;
}

// operator() @ 14d0f1e70

bool __thiscall
`SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::Equals(param_1,this,IgnoreCase);
  return bVar1;
}

// operator() @ 14d0f1eb0

EVisibility __thiscall
`SNamingTokensEditableTextBox::Construct'::__l2::<lambda_2>::operator()(void *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  bool local_28 [8];
  EVisibility *local_20;
  TAttribute<bool> *local_18;
  
  local_18 = (TAttribute<bool> *)(*(longlong *)this + 0x440);
  local_28[0] = false;
  pbVar1 = TAttribute<bool>::Get(local_18,local_28);
  if (*pbVar1 == false) {
    local_20 = &EVisibility::Collapsed;
  }
  else {
    local_20 = &EVisibility::Visible;
  }
  *in_RDX = (local_20->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// CloseSuggestionDropdown @ 14d0f4c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::CloseSuggestionDropdown(SNamingTokensEditableTextBox *this)

{
  bool bVar1;
  SMenuAnchor *pSVar2;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *pTVar3;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> local_20 [2];
  
  if ((this->DropdownAnchor).Object != (SMenuAnchor *)0x0) {
    pSVar2 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
    bVar1 = SMenuAnchor::IsOpen(pSVar2);
    if (bVar1) {
      pSVar2 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
      (**(code **)(pSVar2->_padding_ + 0x250))(pSVar2,0,0,0);
    }
  }
  pTVar3 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
           TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>(local_20,(FNullTag *)0x0);
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator=
            (&this->LastCursorTokenData,pTVar3);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_20[0].SharedReferenceCount);
  return;
}

// Construct @ 14d0f8670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::Construct(SNamingTokensEditableTextBox *this,FArguments *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FEditableTextBoxStyle *pFVar3;
  FSyntaxTextStyle *pFVar4;
  TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1> *pTVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SPopupErrorText,1> *pTVar7;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  FSlotArguments *pFVar9;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SImage,1> *pTVar10;
  FSlotArguments *pFVar11;
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SMultiLineEditableText,1> *pTVar12;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SMenuAnchor,1> *pTVar13;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *pTVar14;
  TSharedRef<SScrollBar,1> *pTVar15;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar16;
  TSharedRef<SBox,1> *pTVar17;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar18;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SHorizontalBox,1> *pTVar19;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SBorder,1> *pTVar20;
  FText *pFVar21;
  longlong lVar22;
  TAttribute<TArrayView<FString_const_,int>_> *pTVar23;
  code **ppcVar24;
  undefined1 *puVar25;
  TAttribute<TArrayView<FString_const_,int>_> *pTVar26;
  pmf_e5a0cc5f *ppVar27;
  pmf_770d896c *ppVar28;
  pmf_34ab2359 *ppVar29;
  pmf_c0cfe02b *ppVar30;
  pmf_f1ccfe37 *ppVar31;
  pmf_b413743b *ppVar32;
  pmf_6823b7b9 *ppVar33;
  pmf_8db4736f *ppVar34;
  pmf_cec252db *ppVar35;
  undefined1 auStackY_3dc8 [32];
  T0RequiredArgs local_3d98;
  T0RequiredArgs local_3d97;
  EPopupMethod local_3d96;
  ETextOverflowPolicy local_3d95;
  T0RequiredArgs local_3d94;
  T0RequiredArgs local_3d93;
  T0RequiredArgs local_3d92;
  T0RequiredArgs local_3d91;
  T0RequiredArgs local_3d90;
  T0RequiredArgs local_3d8f;
  T0RequiredArgs local_3d8e;
  T0RequiredArgs local_3d8d;
  T0RequiredArgs local_3d8c;
  T0RequiredArgs local_3d8b [3];
  uint local_3d88;
  undefined1 local_3d84 [2];
  undefined1 local_3d82 [2];
  float local_3d80;
  float local_3d7c;
  EMenuPlacement local_3d78;
  float local_3d74;
  TAttribute<TArrayView<FString_const_,int>_> *local_3d70;
  TAttribute<TArrayView<FString_const_,int>_> *local_3d68;
  TAttribute<bool> *local_3d60;
  TAttribute<bool> *local_3d58;
  TAttribute<bool> *local_3d50;
  TAttribute<bool> *local_3d48;
  TAttribute<bool> *local_3d40;
  TAttribute<bool> *local_3d38;
  TAttribute<bool> *local_3d30;
  TAttribute<bool> *local_3d28;
  FTextBlockStyle *local_3d20;
  IErrorReportingWidget *local_3d18;
  ISlateStyle *local_3d10;
  IErrorReportingWidget *local_3d08;
  FName *local_3d00;
  FName local_3cf8;
  ISlateStyle *local_3cf0;
  FTextBlockStyle *local_3ce8;
  FArguments *local_3ce0;
  FText *local_3cd8;
  code *local_3cd0;
  FArguments *local_3cc8;
  FArguments *local_3cc0;
  FArguments *local_3cb8;
  FArguments *local_3cb0;
  TAttribute<FMargin> *local_3ca8;
  TAttribute<FMargin> *local_3ca0;
  FArguments *local_3c98;
  undefined1 *local_3c90;
  undefined1 *local_3c88;
  undefined1 *local_3c80;
  FName *local_3c78;
  FName local_3c70;
  code *local_3c68;
  FSlateBrush *local_3c60;
  TAttribute<FSlateBrush_const_*> *local_3c58;
  TAttribute<FSlateBrush_const_*> *local_3c50;
  FArguments *local_3c48;
  <lambda_1> local_3c40;
  <lambda_1> *local_3c38;
  FArguments *local_3c30;
  FArguments *local_3c28;
  FSlotArguments *local_3c20;
  FSlotArguments *local_3c18;
  FArguments *local_3c10;
  undefined1 *local_3c08;
  undefined1 *local_3c00;
  TAttribute<float> *local_3bf8;
  TAttribute<float> *local_3bf0;
  FSlotArguments *local_3be8;
  undefined1 *local_3be0;
  undefined1 *local_3bd8;
  TAttribute<float> *local_3bd0;
  TAttribute<float> *local_3bc8;
  FSlotArguments *local_3bc0;
  undefined1 *local_3bb8;
  TOptional<EPopupMethod> *local_3bb0;
  FArguments *local_3ba8;
  undefined1 *local_3ba0;
  TAttribute<EMenuPlacement> *local_3b98;
  FArguments *local_3b90;
  FArguments *local_3b88;
  FArguments *local_3b80;
  TAttribute<EVisibility> *local_3b78;
  TAttribute<EVisibility> *local_3b70;
  FArguments *local_3b68;
  FArguments *local_3b60;
  TAttribute<FText> *local_3b58;
  TAttribute<FText> *local_3b50;
  FArguments *local_3b48;
  FTextBlockStyle *local_3b40;
  FArguments *local_3b38;
  TSharedPtr<ITextLayoutMarshaller,1> *local_3b30;
  TSharedPtr<ITextLayoutMarshaller,1> *local_3b28;
  FArguments *local_3b20;
  TAttribute<bool> *local_3b18;
  TAttribute<bool> *local_3b10;
  FArguments *local_3b08;
  TAttribute<bool> *local_3b00;
  TAttribute<bool> *local_3af8;
  FArguments *local_3af0;
  undefined1 *local_3ae8;
  TOptional<ETextOverflowPolicy> *local_3ae0;
  FArguments *local_3ad8;
  TAttribute<FMargin> *local_3ad0;
  TAttribute<FMargin> *local_3ac8;
  FArguments *local_3ac0;
  FArguments *local_3ab8;
  FArguments *local_3ab0;
  FArguments *local_3aa8;
  FArguments *local_3aa0;
  FArguments *local_3a98;
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> *local_3a90;
  FArguments *local_3a88;
  NamedSlotProperty<SMenuAnchor::FArguments> *local_3a80;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *local_3a78;
  FArguments *local_3a70;
  FSlotArguments *local_3a68;
  FSlotArguments *local_3a60;
  FArguments *local_3a58;
  TAttribute<FMargin> *local_3a50;
  TAttribute<FMargin> *local_3a48;
  FArguments *local_3a40;
  FScrollBarStyle *local_3a38;
  FArguments *local_3a30;
  FArguments *local_3a28;
  TAttribute<UE::Math::TVector2<double>_> *local_3a20;
  TAttribute<UE::Math::TVector2<double>_> *local_3a18;
  FArguments *local_3a10;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *local_3a08;
  FArguments *local_3a00;
  FArguments *local_39f8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *local_39f0;
  FArguments *local_39e8;
  FSlotArguments *local_39e0;
  FSlotArguments *local_39d8;
  FArguments *local_39d0;
  FArguments *local_39c8;
  FSlotArguments *local_39c0;
  FSlotArguments *local_39b8;
  FArguments *local_39b0;
  TAttribute<FMargin> *local_39a8;
  TAttribute<FMargin> *local_39a0;
  FArguments *local_3998;
  FScrollBarStyle *local_3990;
  FArguments *local_3988;
  FArguments *local_3980;
  TAttribute<UE::Math::TVector2<double>_> *local_3978;
  TAttribute<UE::Math::TVector2<double>_> *local_3970;
  FArguments *local_3968;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *local_3960;
  FArguments *local_3958;
  FArguments *local_3950;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *local_3948;
  FArguments *local_3940;
  FSlotArguments *local_3938;
  FSlotArguments *local_3930;
  FArguments *local_3928;
  TAttribute<FMargin> *local_3920;
  TAttribute<FMargin> *local_3918;
  FSlotArgumentsMixin *local_3910;
  <lambda_2> local_3908;
  <lambda_2> *local_3900;
  FArguments *local_38f8;
  code *local_38f0;
  TSharedRef<SWidget,1> *local_38e8;
  FArguments *local_38e0;
  FArguments *local_38d8;
  FSlotArguments *local_38d0;
  FSlotArguments *local_38c8;
  FArguments *local_38c0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *local_38b8;
  FArguments *local_38b0;
  FArguments *local_38a8;
  FArguments *local_38a0;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_3898;
  code *local_3890;
  undefined4 local_3888;
  TSharedRef<SWidget,1> local_3880;
  TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> local_3870;
  TSharedPtr<IErrorReportingWidget,1> local_3860;
  code *local_3850;
  undefined4 local_3848;
  code *local_3840;
  undefined4 local_3838;
  code *local_3830;
  undefined4 local_3828;
  code *local_3820;
  undefined4 local_3818;
  code *local_3810;
  undefined4 local_3808;
  code *local_3800;
  undefined4 local_37f8;
  code *local_37f0;
  undefined4 local_37e8;
  code *local_37e0;
  undefined4 local_37d8;
  code *local_37d0;
  undefined4 local_37c8;
  TSharedRef<SWidget,1> local_37c0;
  TSharedRef<SWidget,1> local_37b0;
  TSharedRef<SWidget,1> local_37a0;
  TSharedRef<SWidget,1> local_3790;
  TSharedRef<SWidget,1> local_3780;
  TSharedRef<SWidget,1> local_3770;
  TSharedRef<SWidget,1> local_3760;
  TSharedRef<SWidget,1> local_3750;
  TSharedRef<SWidget,1> local_3740;
  TSharedRef<SWidget,1> local_3730;
  FName local_3720;
  FName local_3718;
  TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1> local_3710;
  TSharedRef<SPopupErrorText,1> local_3700;
  pmf_e5a0cc5f local_36e8;
  pmf_e5a0cc5f local_36d8;
  undefined1 local_36c8 [16];
  pmf_770d896c local_36b8;
  undefined1 local_36a8 [16];
  pmf_34ab2359 local_3698;
  undefined1 local_3688 [16];
  pmf_34ab2359 local_3678;
  undefined1 local_3668 [16];
  pmf_c0cfe02b local_3658;
  undefined1 local_3648 [16];
  pmf_f1ccfe37 local_3638;
  undefined1 local_3628 [16];
  pmf_b413743b local_3618;
  undefined1 local_3608 [16];
  pmf_6823b7b9 local_35f8;
  undefined1 local_35e8 [16];
  pmf_8db4736f local_35d8;
  undefined1 local_35c8 [16];
  pmf_cec252db local_35b8;
  TSharedRef<SBorder,1> local_35a8;
  TSharedRef<SHorizontalBox,1> local_3598;
  TSharedRef<SBox,1> local_3588;
  TSharedRef<SWidget,1> local_3578;
  TSharedRef<SBox,1> local_3568;
  TSharedRef<SScrollBar,1> local_3558;
  TSharedRef<SVerticalBox,1> local_3548;
  TSharedRef<SBox,1> local_3538;
  TSharedRef<SScrollBar,1> local_3528;
  TSharedRef<SMenuAnchor,1> local_3518;
  TSharedRef<SMultiLineEditableText,1> local_3508;
  TSharedRef<SImage,1> local_34f8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_34e8;
  TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs> local_34d0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_34b8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_34a0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3488;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_3470;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3458;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_3440;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3428;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3410;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_33f8;
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> local_33e0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_33c8;
  TSharedPtr<ITextLayoutMarshaller,1> local_33b0;
  NamedSlotProperty<SMenuAnchor::FArguments> local_33a0;
  TAttribute<FText> local_3390;
  TAttribute<float> local_3360;
  TAttribute<float> local_3340;
  undefined1 local_3320 [32];
  TAttribute<EVisibility> local_3300;
  TAttribute<bool> local_32e0;
  TAttribute<bool> local_32c0;
  TAttribute<FSlateBrush_const_*> local_32a0;
  TAttribute<UE::Math::TVector2<double>_> local_3278;
  TAttribute<FMargin> local_3248;
  TAttribute<FMargin> local_3218;
  TAttribute<FText> local_31e8;
  TAttribute<FMargin> local_31b8;
  TAttribute<FMargin> local_3188;
  TAttribute<UE::Math::TVector2<double>_> local_3158;
  TAttribute<FMargin> local_3128;
  FSlotArguments local_30f8;
  FSlotArguments local_3010;
  FSlotArguments local_2f28;
  FSlotArguments local_2e40;
  FSlotArguments local_2d58;
  FSlotArguments local_2c70;
  FArguments local_2b88;
  FArguments local_2908;
  FArguments local_2700;
  FArguments local_24f8;
  FArguments local_2278;
  FArguments local_1fd8;
  FArguments local_1d38;
  FArguments local_1a90;
  FArguments local_1750;
  FArguments local_1410;
  FArguments local_10d0;
  FSyntaxTextStyle local_ce8;
  FArguments local_728;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
  local_88;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
  local_58;
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x14d0f8686;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3dc8;
  if (param_1->_Style == (FEditableTextBoxStyle *)0x0) {
    local_3cf0 = FAppStyle::Get();
    local_3d00 = &local_3718;
    pFVar2 = ::FName::FName(local_3d00,"NormalEditableTextBox");
    local_3cf8 = *pFVar2;
    pFVar3 = ISlateStyle::GetWidgetStyle<FEditableTextBoxStyle>
                       (local_3cf0,local_3cf8,(char *)0x0,(FEditableTextBoxStyle *)0x0);
    SetNormalStyle(this,pFVar3);
  }
  else {
    SetNormalStyle(this,param_1->_Style);
  }
  if (param_1->_ArgumentStyle != (FTextBlockStyle *)0x0) {
    SetArgumentStyle(this,param_1->_ArgumentStyle);
  }
  if (param_1->_ArgumentStyle == (FTextBlockStyle *)0x0) {
    local_3d20 = FNamingTokensStringSyntaxHighlighterMarshaller::GetDefaultArgumentStyle();
  }
  else {
    local_3d20 = param_1->_ArgumentStyle;
  }
  local_3ce8 = local_3d20;
  pFVar4 = FNamingTokensStringSyntaxHighlighterMarshaller::FSyntaxTextStyle::FSyntaxTextStyle
                     (&local_ce8,&this->TextBoxStyle->TextStyle,local_3d20);
  pTVar5 = FNamingTokensStringSyntaxHighlighterMarshaller::Create(&local_3710,pFVar4);
  TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::
  TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1><FNamingTokensStringSyntaxHighlighterMarshaller>
            (&local_3870,pTVar5);
  TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::operator=
            (&this->Marshaller,&local_3870);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3870.SharedReferenceCount);
  TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1>::
  ~TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1>(&local_3710);
  FNamingTokensStringSyntaxHighlighterMarshaller::FSyntaxTextStyle::~FSyntaxTextStyle(&local_ce8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ScrollBarThickness.field0_0x0._s_0.X = __real_4022000000000000;
    ScrollBarThickness.field0_0x0._s_0.Y = __real_4022000000000000;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FMargin::FMargin(&ErrorWidgetPadding,__real_40400000,0.0);
    _Init_thread_footer(&::_TSS1);
  }
  TAttribute<FText>::operator=(&this->TokenizedText,&param_1->_Text);
  TAttribute<FText>::operator=(&this->ResolvedText,&param_1->_ResolvedText);
  local_3d70 = &param_1->_ValidArguments;
  local_3d68 = &this->ValidArguments;
  pTVar23 = local_3d70;
  pTVar26 = local_3d68;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)&(pTVar26->Value).DataPtr = *(undefined1 *)&(pTVar23->Value).DataPtr;
    pTVar23 = (TAttribute<TArrayView<FString_const_,int>_> *)
              ((longlong)&(pTVar23->Value).DataPtr + 1);
    pTVar26 = (TAttribute<TArrayView<FString_const_,int>_> *)
              ((longlong)&(pTVar26->Value).DataPtr + 1);
  }
  (this->ValidArguments).bIsSet = (param_1->_ValidArguments).bIsSet;
  TDelegate<TArrayView<FString_const_,int>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->ValidArguments).Getter,&(param_1->_ValidArguments).Getter);
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValidateTokenizedText,&param_1->_OnValidateTokenizedText);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTokenizedTextChanged,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTokenizedTextCommitted,&param_1->_OnTextCommitted);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnPreEvaluateTokens,&param_1->_OnPreEvaluateNamingTokens);
  local_3d60 = &param_1->_CanDisplayResolvedText;
  local_3d58 = &this->CanDisplayResolvedText;
  local_3d58->Value = local_3d60->Value;
  (this->CanDisplayResolvedText).bIsSet = (param_1->_CanDisplayResolvedText).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->CanDisplayResolvedText).Getter,&(param_1->_CanDisplayResolvedText).Getter);
  local_3d50 = &param_1->_DisplayTokenIcon;
  local_3d48 = &this->DisplayTokenIcon;
  local_3d48->Value = local_3d50->Value;
  (this->DisplayTokenIcon).bIsSet = (param_1->_DisplayTokenIcon).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->DisplayTokenIcon).Getter,&(param_1->_DisplayTokenIcon).Getter);
  local_3d40 = &param_1->_DisplayErrorMessage;
  local_3d38 = &this->DisplayErrorMessage;
  local_3d38->Value = local_3d40->Value;
  (this->DisplayErrorMessage).bIsSet = (param_1->_DisplayErrorMessage).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->DisplayErrorMessage).Getter,&(param_1->_DisplayErrorMessage).Getter);
  local_3d30 = &param_1->_DisplayBorderImage;
  local_3d28 = &this->DisplayBorderImage;
  local_3d28->Value = local_3d30->Value;
  (this->DisplayBorderImage).bIsSet = (param_1->_DisplayBorderImage).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->DisplayBorderImage).Getter,&(param_1->_DisplayBorderImage).Getter);
  this->bEnableSuggestionDropdown = param_1->_EnableSuggestionDropdown;
  this->bFullyQualifyGlobalTokenSuggestions = param_1->_FullyQualifyGlobalTokenSuggestions;
  SetFilterArgs(this,&param_1->_FilterArgs);
  pTVar6 = TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
           operator<TObjectPtr<UObject>_>_TArray<UObject_*,TSizedDefaultAllocator<32>_>_const__
                     (&param_1->_Contexts);
  SetContexts(this,pTVar6);
  local_3ce0 = SPopupErrorText::FArguments::FArguments(&local_2b88);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d98);
  this_00 = MakeTDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>
                      (&local_34d0,"SPopupErrorText",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0x48,&local_3d98);
  pTVar7 = TSlateDecl<SPopupErrorText,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_3700,local_3ce0);
  TSharedPtr<IErrorReportingWidget,1>::TSharedPtr<IErrorReportingWidget,1><SPopupErrorText>
            (&local_3860,pTVar7);
  TSharedPtr<IErrorReportingWidget,1>::operator=(&this->ErrorReporting,&local_3860);
  TSharedPtr<IErrorReportingWidget,1>::~TSharedPtr<IErrorReportingWidget,1>(&local_3860);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3700.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_34d0._Widget.SharedReferenceCount);
  TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2b88._Font);
  TSlateBaseNamedArgs<SPopupErrorText>::~TSlateBaseNamedArgs<SPopupErrorText>
            ((TSlateBaseNamedArgs<SPopupErrorText> *)&local_2b88);
  local_3d18 = TSharedPtr<IErrorReportingWidget,1>::operator->(&this->ErrorReporting);
  local_3cd0 = *(code **)*local_3d18;
  local_3cd8 = FText::GetEmpty();
  (*local_3cd0)(local_3d18,local_3cd8);
  bVar1 = TAttribute<FText>::IsSet(&this->ResolvedText);
  local_3d88 = (uint)!bVar1;
  this->bHandlingEvaluation = !bVar1;
  local_3850 = GetText;
  local_3848 = 0;
  ppcVar24 = &local_3850;
  ppVar27 = &local_36e8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar27 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    ppVar27 = (pmf_e5a0cc5f *)&ppVar27->field_0x1;
  }
  local_36d8._0_8_ = local_36e8._0_8_;
  local_36d8._8_8_ = local_36e8._8_8_;
  pTVar8 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SNamingTokensEditableTextBox>(&local_34b8,this,&local_36d8);
  TAttribute<FText>::Create(&local_3390,pTVar8);
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_34b8);
  TAttribute<FText>::operator=(&this->BoundText,&local_3390);
  TAttribute<FText>::~TAttribute<FText>(&local_3390);
  local_3898 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_3cc8 = SBorder::FArguments::FArguments(&local_10d0);
  local_3840 = GetBorderImage;
  local_3838 = 0;
  ppcVar24 = &local_3840;
  puVar25 = local_36c8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_36c8;
  ppVar28 = &local_36b8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar28 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar28 = (pmf_770d896c *)&ppVar28->field_0x1;
  }
  local_3cc0 = SBorder::FArguments::BorderImage<SNamingTokensEditableTextBox>
                         (local_3cc8,this,&local_36b8);
  local_3830 = _vcall__584__flat______;
  local_3828 = 0;
  ppcVar24 = &local_3830;
  puVar25 = local_36a8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_36a8;
  ppVar29 = &local_3698;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar29 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar29 = (pmf_34ab2359 *)&ppVar29->field_0x1;
  }
  local_3cb8 = SBorder::FArguments::BorderBackgroundColor<SNamingTokensEditableTextBox>
                         (local_3cc0,this,&local_3698);
  local_3820 = SCompoundWidget::_vcall__504__flat______;
  local_3818 = 0;
  ppcVar24 = &local_3820;
  puVar25 = local_3688;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_3688;
  ppVar29 = &local_3678;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar29 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar29 = (pmf_34ab2359 *)&ppVar29->field_0x1;
  }
  local_3cb0 = SBorder::FArguments::ForegroundColor<SNamingTokensEditableTextBox>
                         (local_3cb8,this,&local_3678);
  local_3c98 = SBorder::FArguments::VAlign(local_3cb0,VAlign_Center);
  local_3ca8 = &local_3218;
  local_3ca0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                         (local_3ca8,&this->TextBoxStyle->Padding);
  local_38a8 = SBorder::FArguments::Padding(local_3c98,local_3ca0);
  local_3c10 = SHorizontalBox::FArguments::FArguments(&local_2700);
  pFVar9 = SHorizontalBox::Slot(&local_2c70);
  local_3c90 = &pFVar9->field_0x48;
  pFVar9 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_3c90,HAlign_Fill);
  local_3c88 = &pFVar9->field_0x48;
  pFVar9 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_3c88,VAlign_Center);
  pFVar9 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar9);
  local_3c80 = &pFVar9->field_0x18;
  local_3c20 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_3c80,__real_40800000,0.0);
  local_3c48 = SImage::FArguments::FArguments(&local_1d38);
  local_3c58 = &local_32a0;
  local_3d10 = FAppStyle::Get();
  local_3c68 = *(code **)((longlong)*local_3d10 + 0x50);
  local_3c78 = &local_3720;
  pFVar2 = ::FName::FName(local_3c78,"Icons.TokenTextBox");
  local_3c70 = *pFVar2;
  local_3c60 = (FSlateBrush *)(*local_3c68)(local_3d10,local_3c70,0,0);
  local_3c50 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_3c58,&local_3c60);
  local_3c30 = SImage::FArguments::Image(local_3c48,local_3c50);
  local_3c38 = &local_3c40;
  local_3c40.__this = this;
  TFunction<EVisibility___cdecl(void)>::
  TFunction<EVisibility___cdecl(void)><_SNamingTokensEditableTextBox::Construct_::__l2::<lambda_1>_>
            ((TFunction<EVisibility___cdecl(void)> *)&local_58,local_3c38);
  local_3c28 = TSlateBaseNamedArgs<SImage>::Visibility_Lambda
                         ((TSlateBaseNamedArgs<SImage> *)local_3c30,
                          (TFunction<EVisibility___cdecl(void)> *)&local_58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d97);
  this_01 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_33c8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0x60,&local_3d97);
  pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_34f8,local_3c28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_37c0,pTVar10);
  local_3c18 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3c20,&local_37c0);
  local_39b0 = SHorizontalBox::FArguments::operator+(local_3c10,local_3c18);
  pFVar9 = SHorizontalBox::Slot(&local_2d58);
  local_3c08 = &pFVar9->field_0x48;
  pFVar9 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_3c08,HAlign_Fill);
  local_3c00 = &pFVar9->field_0x48;
  local_3be8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_3c00,VAlign_Fill);
  local_3bf8 = &local_3360;
  local_3d80 = __real_3f800000;
  local_3bf0 = TAttribute<float>::TAttribute<float>(local_3bf8,&local_3d80);
  local_39c0 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_3be8,local_3bf0);
  local_3a58 = SVerticalBox::FArguments::FArguments(&local_2908);
  pFVar11 = SVerticalBox::Slot(&local_2e40);
  local_3be0 = &pFVar11->field_0x48;
  pFVar11 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)local_3be0,HAlign_Fill);
  local_3bd8 = &pFVar11->field_0x48;
  local_3bc0 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_3bd8,VAlign_Fill);
  local_3bd0 = &local_3340;
  local_3d7c = __real_3f800000;
  local_3bc8 = TAttribute<float>::TAttribute<float>(local_3bd0,&local_3d7c);
  local_3a68 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3bc0,local_3bc8);
  local_3ba8 = SMenuAnchor::FArguments::FArguments(&local_24f8);
  local_3bb8 = local_3d84;
  local_3d96 = UseCurrentWindow;
  local_3bb0 = TOptional<enum_EPopupMethod>::TOptional<enum_EPopupMethod>(local_3bb8,&local_3d96);
  local_3b90 = SMenuAnchor::FArguments::Method(local_3ba8,SUB82(local_3bb0,0));
  local_3ba0 = local_3320;
  local_3d78 = MenuPlacement_ComboBox;
  local_3b98 = TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>
                         (local_3ba0,&local_3d78);
  local_3b88 = SMenuAnchor::FArguments::Placement(local_3b90,local_3b98);
  local_3810 = OnGetDropdownContent;
  local_3808 = 0;
  ppcVar24 = &local_3810;
  puVar25 = local_3668;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_3668;
  ppVar30 = &local_3658;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar30 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar30 = (pmf_c0cfe02b *)&ppVar30->field_0x1;
  }
  local_3b80 = SMenuAnchor::FArguments::OnGetMenuContent<SNamingTokensEditableTextBox>
                         (local_3b88,this,&local_3658);
  local_3b68 = SMenuAnchor::FArguments::UseApplicationMenuStack(local_3b80,false);
  local_3b78 = &local_3300;
  local_3b70 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                         (local_3b78,&EVisibility::Visible);
  local_3b60 = TSlateBaseNamedArgs<SMenuAnchor>::Visibility
                         ((TSlateBaseNamedArgs<SMenuAnchor> *)local_3b68,local_3b70);
  local_3a80 = SMenuAnchor::FArguments::Content(local_3b60,&local_33a0);
  local_3b48 = SMultiLineEditableText::FArguments::FArguments(&local_728);
  local_3b58 = &local_31e8;
  local_3b50 = TAttribute<FText>::TAttribute<FText>(local_3b58,&this->BoundText);
  local_3b38 = SMultiLineEditableText::FArguments::Text(local_3b48,local_3b50);
  local_3b40 = &this->TextBoxStyle->TextStyle;
  local_3b20 = SMultiLineEditableText::FArguments::TextStyle(local_3b38,local_3b40);
  local_3b30 = &local_33b0;
  local_3b28 = TSharedPtr<ITextLayoutMarshaller,1>::
               TSharedPtr<ITextLayoutMarshaller,1><FNamingTokensStringSyntaxHighlighterMarshaller>
                         (local_3b30,&this->Marshaller);
  local_3b08 = SMultiLineEditableText::FArguments::Marshaller(local_3b20,local_3b28);
  local_3b18 = &local_32e0;
  local_3b10 = TAttribute<bool>::TAttribute<bool>(local_3b18,&param_1->_AllowMultiLine);
  local_3af0 = SMultiLineEditableText::FArguments::AllowMultiLine(local_3b08,local_3b10);
  local_3b00 = &local_32c0;
  local_3af8 = TAttribute<bool>::TAttribute<bool>(local_3b00,&param_1->_IsReadOnly);
  local_3ad8 = SMultiLineEditableText::FArguments::IsReadOnly(local_3af0,local_3af8);
  local_3ae8 = local_3d82;
  local_3d95 = Ellipsis;
  local_3ae0 = TOptional<enum_ETextOverflowPolicy>::TOptional<enum_ETextOverflowPolicy>
                         (local_3ae8,&local_3d95);
  local_3ac0 = SMultiLineEditableText::FArguments::OverflowPolicy(local_3ad8,SUB82(local_3ae0,0));
  local_3ad0 = &local_31b8;
  local_3d74 = 0.0;
  local_3ac8 = TAttribute<FMargin>::TAttribute<FMargin><float>(local_3ad0,&local_3d74);
  local_3ab8 = SMultiLineEditableText::FArguments::Margin(local_3ac0,local_3ac8);
  local_3800 = OnEditableTextChanged;
  local_37f8 = 0;
  ppcVar24 = &local_3800;
  puVar25 = local_3648;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_3648;
  ppVar31 = &local_3638;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar31 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar31 = (pmf_f1ccfe37 *)&ppVar31->field_0x1;
  }
  local_3ab0 = SMultiLineEditableText::FArguments::OnTextChanged<SNamingTokensEditableTextBox>
                         (local_3ab8,this,&local_3638);
  local_37f0 = OnEditableTextCommitted;
  local_37e8 = 0;
  ppcVar24 = &local_37f0;
  puVar25 = local_3628;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_3628;
  ppVar32 = &local_3618;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar32 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar32 = (pmf_b413743b *)&ppVar32->field_0x1;
  }
  local_3aa8 = SMultiLineEditableText::FArguments::OnTextCommitted<SNamingTokensEditableTextBox>
                         (local_3ab0,this,&local_3618);
  local_37e0 = OnEditableTextKeyDown;
  local_37d8 = 0;
  ppcVar24 = &local_37e0;
  puVar25 = local_3608;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_3608;
  ppVar33 = &local_35f8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar33 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar33 = (pmf_6823b7b9 *)&ppVar33->field_0x1;
  }
  local_3aa0 = SMultiLineEditableText::FArguments::OnKeyDownHandler<SNamingTokensEditableTextBox>
                         (local_3aa8,this,&local_35f8);
  local_37d0 = OnEditableTextKeyChar;
  local_37c8 = 0;
  ppcVar24 = &local_37d0;
  puVar25 = local_35e8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_35e8;
  ppVar34 = &local_35d8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar34 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar34 = (pmf_8db4736f *)&ppVar34->field_0x1;
  }
  local_3a98 = SMultiLineEditableText::FArguments::OnKeyCharHandler<SNamingTokensEditableTextBox>
                         (local_3aa0,this,&local_35d8);
  local_3890 = OnEditableTextCursorMoved;
  local_3888 = 0;
  ppcVar24 = &local_3890;
  puVar25 = local_35c8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *(undefined1 *)ppcVar24;
    ppcVar24 = (code **)((longlong)ppcVar24 + 1);
    puVar25 = puVar25 + 1;
  }
  puVar25 = local_35c8;
  ppVar35 = &local_35b8;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined1 *)ppVar35 = *puVar25;
    puVar25 = puVar25 + 1;
    ppVar35 = (pmf_cec252db *)&ppVar35->field_0x1;
  }
  local_3a88 = SMultiLineEditableText::FArguments::OnCursorMoved<SNamingTokensEditableTextBox>
                         (local_3a98,this,&local_35b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d94);
  local_3a90 = MakeTDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>
                         (&local_33e0,"SMultiLineEditableText",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                          ,0x7f,&local_3d94);
  this_02 = TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>::
            Expose<SMultiLineEditableText>(local_3a90,&this->EditableText);
  pTVar12 = TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_3508,local_3a88);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableText>(&local_3880,pTVar12);
  local_3a70 = NamedSlotProperty<SMenuAnchor::FArguments>::operator[](local_3a80,&local_3880);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d93);
  local_3a78 = MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
                         (&local_3470,"SMenuAnchor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                          ,0x74,&local_3d93);
  this_03 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::Expose<SMenuAnchor>
                      (local_3a78,&this->DropdownAnchor);
  pTVar13 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_3518,local_3a70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMenuAnchor>(&local_3730,pTVar13);
  local_3a60 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3a68,&local_3730);
  local_39d0 = SVerticalBox::FArguments::operator+(local_3a58,local_3a60);
  pFVar11 = SVerticalBox::Slot(&local_2f28);
  local_39e0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar11);
  local_3a40 = SBox::FArguments::FArguments(&local_1410);
  local_3a50 = &local_3188;
  local_3a48 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                         (local_3a50,&this->TextBoxStyle->HScrollBarPadding);
  local_39f8 = SBox::FArguments::Padding(local_3a40,local_3a48);
  local_3a30 = SScrollBar::FArguments::FArguments(&local_1fd8);
  local_3a38 = &this->TextBoxStyle->ScrollBarStyle;
  local_3a28 = SScrollBar::FArguments::Style(local_3a30,local_3a38);
  local_3a10 = SScrollBar::FArguments::Orientation(local_3a28,Orient_Horizontal);
  local_3a20 = &local_3158;
  local_3a18 = TAttribute<UE::Math::TVector2<double>_>::
               TAttribute<UE::Math::TVector2<double>_><UE::Math::TVector2<double>_>
                         (local_3a20,&ScrollBarThickness);
  local_3a00 = SScrollBar::FArguments::Thickness(local_3a10,local_3a18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d92);
  local_3a08 = MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
                         (&local_33f8,"SScrollBar",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                          ,0x95,&local_3d92);
  pTVar14 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::Expose<SScrollBar>
                      (local_3a08,&this->HScrollBar);
  pTVar15 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_3528,local_3a00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBar>(&local_3740,pTVar15);
  local_39e8 = SBox::FArguments::operator[](local_39f8,&local_3740);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d91);
  local_39f0 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                         (&local_3410,"SBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                          ,0x92,&local_3d91);
  pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::Expose<SBox>
                      (local_39f0,&this->HScrollBarBox);
  pTVar17 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_3538,local_39e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_3750,pTVar17);
  local_39d8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_39e0,&local_3750);
  local_39c8 = SVerticalBox::FArguments::operator+(local_39d0,local_39d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d90);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3428,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0x6d,&local_3d90);
  pTVar18 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_3548,local_39c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3760,pTVar18);
  local_39b8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_39c0,&local_3760);
  local_3928 = SHorizontalBox::FArguments::operator+(local_39b0,local_39b8);
  pFVar9 = SHorizontalBox::Slot(&local_3010);
  local_3938 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar9);
  local_3998 = SBox::FArguments::FArguments(&local_1750);
  local_39a8 = &local_3128;
  local_39a0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                         (local_39a8,&this->TextBoxStyle->VScrollBarPadding);
  local_3950 = SBox::FArguments::Padding(local_3998,local_39a0);
  local_3988 = SScrollBar::FArguments::FArguments(&local_2278);
  local_3990 = &this->TextBoxStyle->ScrollBarStyle;
  local_3980 = SScrollBar::FArguments::Style(local_3988,local_3990);
  local_3968 = SScrollBar::FArguments::Orientation(local_3980,Orient_Vertical);
  local_3978 = &local_3278;
  local_3970 = TAttribute<UE::Math::TVector2<double>_>::
               TAttribute<UE::Math::TVector2<double>_><UE::Math::TVector2<double>_>
                         (local_3978,&ScrollBarThickness);
  local_3958 = SScrollBar::FArguments::Thickness(local_3968,local_3970);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d8f);
  local_3960 = MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
                         (&local_3440,"SScrollBar",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                          ,0xa3,&local_3d8f);
  pTVar14 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::Expose<SScrollBar>
                      (local_3960,&this->VScrollBar);
  pTVar15 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_3558,local_3958);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBar>(&local_3770,pTVar15);
  local_3940 = SBox::FArguments::operator[](local_3950,&local_3770);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d8e);
  local_3948 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                         (&local_3458,"SBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                          ,0xa0,&local_3d8e);
  pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::Expose<SBox>
                      (local_3948,&this->VScrollBarBox);
  pTVar17 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_3568,local_3940);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_3780,pTVar17);
  local_3930 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3938,&local_3780);
  local_38c0 = SHorizontalBox::FArguments::operator+(local_3928,local_3930);
  pFVar9 = SHorizontalBox::Slot(&local_30f8);
  pFVar9 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar9);
  local_3910 = (FSlotArgumentsMixin *)&pFVar9->field_0x18;
  local_3920 = &local_3248;
  local_3918 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_3920,&ErrorWidgetPadding);
  local_38d0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_3910,local_3918);
  local_38f8 = SBox::FArguments::FArguments(&local_1a90);
  local_3900 = &local_3908;
  local_3908.__this = this;
  TFunction<EVisibility___cdecl(void)>::
  TFunction<EVisibility___cdecl(void)><_SNamingTokensEditableTextBox::Construct_::__l2::<lambda_2>_>
            ((TFunction<EVisibility___cdecl(void)> *)&local_88,local_3900);
  local_38e0 = TSlateBaseNamedArgs<SBox>::Visibility_Lambda
                         ((TSlateBaseNamedArgs<SBox> *)local_38f8,
                          (TFunction<EVisibility___cdecl(void)> *)&local_88);
  local_3d08 = TSharedPtr<IErrorReportingWidget,1>::operator->(&this->ErrorReporting);
  local_38f0 = *(code **)((longlong)*local_3d08 + 0x18);
  local_38e8 = (TSharedRef<SWidget,1> *)(*local_38f0)(local_3d08,&local_3578);
  local_38d8 = SBox::FArguments::operator[](local_38e0,local_38e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d8d);
  pTVar16 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_34e8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0xae,&local_3d8d);
  pTVar17 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_3588,local_38d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_3790,pTVar17);
  local_38c8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_38d0,&local_3790);
  local_38b0 = SHorizontalBox::FArguments::operator+(local_38c0,local_38c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3d8c);
  local_38b8 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                         (&local_3488,"SHorizontalBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                          ,0x58,&local_3d8c);
  this_05 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::Expose<SHorizontalBox>
                      (local_38b8,&this->Box);
  pTVar19 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_3598,local_38b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_37a0,pTVar19);
  local_38a0 = SBorder::FArguments::operator[](local_38a8,&local_37a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_3d8b);
  this_06 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_34a0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0x51,local_3d8b);
  pTVar20 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_35a8,local_38a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_37b0,pTVar20);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_3898,&local_37b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_37b0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_35a8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_34a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_37a0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_3598);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_3488);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3790);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_3588);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_34e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3578);
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
            (&local_88);
  SBox::FArguments::~FArguments(&local_1a90);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_30f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3780);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_3568);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3458);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3770);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3558.SharedReferenceCount);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&local_3440._Widget);
  SScrollBar::FArguments::~FArguments(&local_2278);
  SBox::FArguments::~FArguments(&local_1750);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3010);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3760);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_3548);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_3428);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3750);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_3538);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3410);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3740);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3528.SharedReferenceCount);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&local_33f8._Widget);
  SScrollBar::FArguments::~FArguments(&local_1fd8);
  SBox::FArguments::~FArguments(&local_1410);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2f28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3730);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3518.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3470._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3880);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3508.SharedReferenceCount);
  TSharedPtr<SMultiLineEditableText,1>::~TSharedPtr<SMultiLineEditableText,1>(&local_33e0._Widget);
  SMultiLineEditableText::FArguments::~FArguments(&local_728);
  SMenuAnchor::FArguments::~FArguments(&local_24f8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2e40);
  SVerticalBox::FArguments::~FArguments(&local_2908);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2d58);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_37c0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_34f8.SharedReferenceCount);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_33c8);
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
            (&local_58);
  SImage::FArguments::~FArguments(&local_1d38);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2c70);
  SHorizontalBox::FArguments::~FArguments(&local_2700);
  SBorder::FArguments::~FArguments(&local_10d0);
  if (this->bHandlingEvaluation != false) {
    pFVar21 = TAttribute<FText>::Get(&this->TokenizedText);
    OnEditableTextCommitted(this,pFVar21,Default);
  }
  return;
}

// EvaluateNamingTokens @ 14d0ff730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::EvaluateNamingTokens(SNamingTokensEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  UNamingTokensEngineSubsystem *this_00;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FText *pFVar4;
  FNamingTokenResultData local_38;
  
  if (this->bHandlingEvaluation == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHandlingEvaluation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0x106,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnPreEvaluateTokens);
  this_00 = UEngine::GetEngineSubsystem<UNamingTokensEngineSubsystem>(GEngine);
  pTVar3 = TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
           operator<TObjectPtr<UObject>_>_TArray<UObject_*,TSizedDefaultAllocator<32>_>_const__
                     (&this->NamingTokenContexts);
  pFVar4 = TAttribute<FText>::Get(&this->TokenizedText);
  UNamingTokensEngineSubsystem::EvaluateTokenText
            (this_00,&local_38,pFVar4,&this->NamingTokenFilterArgs,pTVar3);
  TAttribute<FText>::Set<FText>(&this->ResolvedText,&local_38.EvaluatedText);
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_>::
  ~TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_>(&local_38.TokenValues);
  FText::~FText(&local_38.EvaluatedText);
  FText::~FText(&local_38.OriginalText);
  return;
}

// GetBorderBackgroundColor @ 14d107590

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SNamingTokensEditableTextBox::GetBorderBackgroundColor
          (SNamingTokensEditableTextBox *this,FSlateColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateColor *pFVar3;
  longlong lVar4;
  FSlateColor *pFVar5;
  
  if (this->TextBoxStyle == (FEditableTextBoxStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextBoxStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0x142,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = &this->TextBoxStyle->BackgroundColor;
  pFVar5 = __return_storage_ptr__;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&(pFVar5->SpecifiedColor).field0_0x0 =
         *(undefined1 *)&(pFVar3->SpecifiedColor).field0_0x0;
    pFVar3 = (FSlateColor *)((longlong)&(pFVar3->SpecifiedColor).field0_0x0 + 1);
    pFVar5 = (FSlateColor *)((longlong)&(pFVar5->SpecifiedColor).field0_0x0 + 1);
  }
  return __return_storage_ptr__;
}

// GetBorderImage @ 14d107610

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall
SNamingTokensEditableTextBox::GetBorderImage(SNamingTokensEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateBrush *pFVar4;
  bool *pbVar5;
  SMultiLineEditableText *pSVar6;
  
  if ((this->TextBoxStyle == (FEditableTextBoxStyle *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextBoxStyle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                         ,0x126,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSlateBrush *)(*pcVar1)();
    return pFVar4;
  }
  if (((this->EditableText).Object == (SMultiLineEditableText *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EditableText.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                         ,0x127,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSlateBrush *)(*pcVar1)();
    return pFVar4;
  }
  bVar2 = TAttribute<bool>::IsSet(&this->DisplayBorderImage);
  if ((bVar2) && (pbVar5 = TAttribute<bool>::Get(&this->DisplayBorderImage), *pbVar5 == false)) {
    pFVar4 = (FSlateBrush *)0x0;
  }
  else {
    pSVar6 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
    cVar3 = (**(code **)pSVar6->_padding_)(&pSVar6->_padding_);
    if (cVar3 == '\0') {
      pSVar6 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
      cVar3 = (**(code **)(pSVar6->_padding_ + 0x1a0))(pSVar6);
      if (cVar3 == '\0') {
        pSVar6 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
        bVar2 = SWidget::IsHovered((SWidget *)pSVar6);
        if (bVar2) {
          pFVar4 = &this->TextBoxStyle->BackgroundImageHovered;
        }
        else {
          pFVar4 = &this->TextBoxStyle->BackgroundImageNormal;
        }
      }
      else {
        pFVar4 = &this->TextBoxStyle->BackgroundImageFocused;
      }
    }
    else {
      pFVar4 = &this->TextBoxStyle->BackgroundImageReadOnly;
    }
  }
  return pFVar4;
}

// GetCurrentCursorTokenData @ 14d107a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> * __thiscall
SNamingTokensEditableTextBox::GetCurrentCursorTokenData
          (SNamingTokensEditableTextBox *this,
          TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *pTVar6;
  FTextLocation *pFVar7;
  FCursorTokenData *pFVar8;
  FString *pFVar9;
  undefined1 local_1d4;
  undefined1 local_1d3;
  undefined1 local_1d2;
  wchar_t local_1d0 [4];
  wchar_t local_1c8 [4];
  int local_1c0;
  int local_1bc;
  FString local_1b8;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_198;
  int local_190;
  int local_188;
  uint local_184;
  uint local_180;
  int local_17c;
  FTextLocation local_178;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1> local_130;
  FScriptContainerElement *local_120;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  SMultiLineEditableText *local_f8;
  SMultiLineEditableText *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *local_c0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *local_b8;
  FTextLocation local_b0;
  FString *local_a8;
  FTextLocation local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FRegexPattern local_68;
  FTextLocation local_58;
  FTextLocation local_50;
  FString local_48;
  FString local_38;
  FRegexMatcher local_28;
  
  if (((this->EditableText).Object == (SMultiLineEditableText *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EditableText.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                         ,0x259,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *)(*pcVar1)();
    return pTVar6;
  }
  local_f8 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
  SMultiLineEditableText::GetCursorLocation(local_f8);
  ::FString::FString(&local_1b8);
  local_f0 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
  local_13c = FTextLocation::GetLineIndex(&local_178);
  SMultiLineEditableText::GetTextLine(local_f0,local_13c,&local_1b8);
  iVar3 = FTextLocation::GetOffset(&local_178);
  if (-1 < iVar3) {
    local_138 = local_1b8.Data.ArrayNum;
    if (local_1b8.Data.ArrayNum == 0) {
      local_1a8 = 0;
    }
    else {
      local_170 = local_1b8.Data.ArrayNum;
      local_1a8 = local_1b8.Data.ArrayNum + -1;
    }
    local_16c = local_1a8;
    if (iVar3 < local_1a8) {
      local_168 = local_1b8.Data.ArrayNum;
      if (local_1b8.Data.ArrayNum == 0) {
        local_1a4 = 0;
      }
      else {
        local_164 = local_1b8.Data.ArrayNum;
        local_1a4 = local_1b8.Data.ArrayNum + -1;
      }
      local_160 = local_1a4;
      local_1a0 = local_1a4;
      local_198 = iVar3;
      if (local_1a4 <= iVar3) {
        local_198 = local_1a4;
      }
      local_15c = local_198;
      local_190 = local_198;
      if (local_198 < 1) {
        local_188 = 0;
      }
      else {
        local_188 = local_198;
      }
      local_158 = local_188;
      local_154 = local_188;
      local_14c = local_188;
      local_150 = local_1b8.Data.ArrayNum;
      if (local_1b8.Data.ArrayNum == 0) {
        local_120 = (FScriptContainerElement *)
                    `FString::operator*'::__l2::<lambda_1>::operator()(&local_1d4);
      }
      else {
        local_e8 = local_1b8.Data.AllocatorInstance.Data;
        local_e0 = local_1b8.Data.AllocatorInstance.Data;
        local_d8 = local_1b8.Data.AllocatorInstance.Data;
        local_120 = local_1b8.Data.AllocatorInstance.Data;
      }
      local_d0 = local_120;
      local_c8 = local_120;
      ::FString::ConstructFromPtrSize((FString *)&local_118,(wchar_t *)local_120,local_14c);
      local_1d0[0] = L'{';
      local_c0 = &local_118;
      iVar4 = TArray<wchar_t,TSizedDefaultAllocator<32>_>::FindLast(local_c0,local_1d0);
      local_1d3 = iVar4 != -1;
      local_184 = (uint)(byte)local_1d3;
      local_1c8[0] = L'}';
      local_b8 = &local_118;
      iVar5 = TArray<wchar_t,TSizedDefaultAllocator<32>_>::FindLast(local_b8,local_1c8);
      local_1d2 = iVar5 != -1;
      local_180 = (uint)(byte)local_1d2;
      if ((iVar4 != -1) && ((iVar5 == -1 || (iVar5 <= iVar4)))) {
        ::FString::RightChop(&local_1b8,&local_108,iVar3);
        local_1c0 = ::FString::Find(&local_108,L"}",CaseSensitive,FromStart,-1);
        local_17c = ::FString::Find(&local_108,L"{",CaseSensitive,FromStart,-1);
        if ((local_1c0 != -1) && ((local_17c == -1 || (local_1c0 <= local_17c)))) {
          local_1bc = iVar3 + local_1c0;
          MakeShared<SNamingTokensEditableTextBox::FCursorTokenData,1>(&local_130);
          local_148 = iVar4 + 1;
          local_144 = FTextLocation::GetLineIndex(&local_178);
          pFVar7 = FTextLocation::FTextLocation(&local_58,local_144,local_148);
          local_b0 = *pFVar7;
          pFVar8 = TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
                             (&local_130);
          pFVar8->StartLocation = local_b0;
          iVar3 = FTextLocation::GetLineIndex(&local_178);
          pFVar7 = FTextLocation::FTextLocation(&local_50,iVar3,local_1bc);
          local_a0 = *pFVar7;
          pFVar8 = TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
                             (&local_130);
          pFVar8->EndLocation = local_a0;
          local_140 = local_1bc - iVar4;
          pFVar8 = TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
                             (&local_130);
          pFVar8->Length = local_140;
          ::FString::Mid(&local_1b8,&local_88,iVar4 + 1,local_1bc - (iVar4 + 1));
          ::FString::TrimStartAndEndInline(&local_88);
          ::FString::FString(&local_78,L"([A-Za-z0-9_ ]+(?::[A-Za-z0-9_ ]+)*:?)");
          FRegexPattern::FRegexPattern(&local_68,&local_78,None);
          ::FString::~FString(&local_78);
          FRegexMatcher::FRegexMatcher(&local_28,&local_68,&local_88);
          ::FString::FString(&local_98);
          bVar2 = FRegexMatcher::FindNext(&local_28);
          if (bVar2) {
            local_a8 = FRegexMatcher::GetCaptureGroup(&local_28,&local_38,1);
            pFVar9 = ::FString::TrimStartAndEnd(local_a8,&local_48);
            ::FString::operator=(&local_98,pFVar9);
            ::FString::~FString(&local_48);
            ::FString::~FString(&local_38);
          }
          pFVar8 = TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
                             (&local_130);
          ::FString::operator=(&pFVar8->EnteredWord,&local_98);
          ::FString::~FString(&local_98);
          FRegexMatcher::~FRegexMatcher(&local_28);
          FRegexPattern::~FRegexPattern(&local_68);
          ::FString::~FString(&local_88);
          TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
          TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1><SNamingTokensEditableTextBox::FCursorTokenData>
                    (__return_storage_ptr__,&local_130);
          SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                    (&local_130.SharedReferenceCount);
          ::FString::~FString(&local_108);
          ::FString::~FString((FString *)&local_118);
          ::FString::~FString(&local_1b8);
          return __return_storage_ptr__;
        }
        TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
        TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>
                  (__return_storage_ptr__,(FNullTag *)0x0);
        ::FString::~FString(&local_108);
        ::FString::~FString((FString *)&local_118);
        ::FString::~FString(&local_1b8);
        return __return_storage_ptr__;
      }
      TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
      TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>
                (__return_storage_ptr__,(FNullTag *)0x0);
      ::FString::~FString((FString *)&local_118);
      ::FString::~FString(&local_1b8);
      return __return_storage_ptr__;
    }
  }
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>
            (__return_storage_ptr__,(FNullTag *)0x0);
  ::FString::~FString(&local_1b8);
  return __return_storage_ptr__;
}

// GetForegroundColor @ 14d108850

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SNamingTokensEditableTextBox::GetForegroundColor
          (SNamingTokensEditableTextBox *this,FSlateColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateColor *pFVar4;
  longlong lVar5;
  FSlateColor *local_28;
  
  if (this->TextBoxStyle == (FEditableTextBoxStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextBoxStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                       ,0x148,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0x1a0))(this);
  if (cVar3 == '\0') {
    local_28 = &this->TextBoxStyle->ForegroundColor;
  }
  else {
    local_28 = &this->TextBoxStyle->FocusedForegroundColor;
  }
  pFVar4 = __return_storage_ptr__;
  for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&(pFVar4->SpecifiedColor).field0_0x0 =
         *(undefined1 *)&(local_28->SpecifiedColor).field0_0x0;
    local_28 = (FSlateColor *)((longlong)&(local_28->SpecifiedColor).field0_0x0 + 1);
    pFVar4 = (FSlateColor *)((longlong)&(pFVar4->SpecifiedColor).field0_0x0 + 1);
  }
  return __return_storage_ptr__;
}

// GetResolvedText @ 14d109a20

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SNamingTokensEditableTextBox::GetResolvedText(SNamingTokensEditableTextBox *this)

{
  FText *pFVar1;
  
  pFVar1 = TAttribute<FText>::Get(&this->ResolvedText);
  return pFVar1;
}

// GetText @ 14d10a310

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SNamingTokensEditableTextBox::GetText
          (SNamingTokensEditableTextBox *this,FText *__return_storage_ptr__)

{
  char cVar1;
  bool bVar2;
  FText *pFVar3;
  bool *pbVar4;
  bool local_18 [8];
  TAttribute<bool> *local_10;
  
  cVar1 = (**(code **)(this->_padding_ + 0x1a0))(this);
  if (cVar1 == '\0') {
    bVar2 = TAttribute<FText>::IsSet(&this->ResolvedText);
    if (bVar2) {
      local_10 = &this->CanDisplayResolvedText;
      local_18[0] = true;
      pbVar4 = TAttribute<bool>::Get(local_10,local_18);
      if (*pbVar4 != false) {
        pFVar3 = TAttribute<FText>::Get(&this->ResolvedText);
        FText::FText(__return_storage_ptr__,pFVar3);
        return __return_storage_ptr__;
      }
    }
    pFVar3 = TAttribute<FText>::Get(&this->TokenizedText);
    FText::FText(__return_storage_ptr__,pFVar3);
  }
  else {
    pFVar3 = TAttribute<FText>::Get(&this->TokenizedText);
    FText::FText(__return_storage_ptr__,pFVar3);
  }
  return __return_storage_ptr__;
}

// GetTokenizedText @ 14d10a410

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SNamingTokensEditableTextBox::GetTokenizedText(SNamingTokensEditableTextBox *this)

{
  FText *pFVar1;
  
  pFVar1 = TAttribute<FText>::Get(&this->TokenizedText);
  return pFVar1;
}

// HasKeyboardFocus @ 14d10a8a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SNamingTokensEditableTextBox::HasKeyboardFocus(SNamingTokensEditableTextBox *this)

{
  bool bVar1;
  char cVar2;
  SMultiLineEditableText *pSVar3;
  SMenuAnchor *this_00;
  
  bVar1 = SWidget::HasKeyboardFocus((SWidget *)this);
  if (!bVar1) {
    pSVar3 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
    cVar2 = (**(code **)(pSVar3->_padding_ + 0x1a0))(pSVar3);
    if (cVar2 == '\0') {
      if ((this->DropdownAnchor).Object != (SMenuAnchor *)0x0) {
        this_00 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
        bVar1 = SMenuAnchor::IsOpen(this_00);
        if (bVar1) {
          return true;
        }
      }
      return false;
    }
  }
  return true;
}

// OnEditableTextChanged @ 14d10cfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OnEditableTextChanged
          (SNamingTokensEditableTextBox *this,FText *param_1)

{
  ValidateTokenizedText(this,param_1);
  UpdateFilters(this);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnTokenizedTextChanged,param_1);
  return;
}

// OnEditableTextCommitted @ 14d10d040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OnEditableTextCommitted
          (SNamingTokensEditableTextBox *this,FText *param_1,Type param_2)

{
  bool bVar1;
  TOptional<EFocusCause> TVar2;
  undefined6 extraout_var;
  EFocusCause *pEVar3;
  EFocusCause local_36;
  EFocusCause local_35;
  SMenuAnchor *local_30;
  void *local_28;
  TAttribute<FText> *local_20;
  TDelegate<void___cdecl(FText_const_&,ETextCommit::Type),FDefaultDelegateUserPolicy> *local_18;
  
  if ((this->DropdownAnchor).Object != (SMenuAnchor *)0x0) {
    local_30 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
    TVar2 = SWidget::HasAnyUserFocus((SWidget *)local_30);
    local_28 = (void *)CONCAT62(extraout_var,TVar2);
    local_36 = Cleared;
    pEVar3 = TOptional<enum_EFocusCause>::Get(local_28,&local_36);
    local_35 = *pEVar3;
    if ((param_2 != OnUserMovedFocus) && (local_35 == Cleared)) {
      CloseSuggestionDropdown(this);
    }
  }
  ValidateTokenizedText(this,param_1);
  bVar1 = TAttribute<FText>::IsBound(&this->TokenizedText);
  if (!bVar1) {
    local_20 = &this->TokenizedText;
    TAttribute<FText>::Set<FText>(local_20,param_1);
  }
  local_18 = &this->OnTokenizedTextCommitted;
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(local_18,param_1,param_2);
  if (this->bHandlingEvaluation != false) {
    EvaluateNamingTokens(this);
  }
  return;
}

// OnEditableTextCursorMoved @ 14d10d180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OnEditableTextCursorMoved
          (SNamingTokensEditableTextBox *this,FTextLocation *param_1)

{
  bool bVar1;
  SMultiLineEditableText *this_00;
  FTextLocation *this_01;
  FTextLocation *this_02;
  SMenuAnchor *this_03;
  FTextSelection local_18;
  
  this_00 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
  SMultiLineEditableText::GetSelection(this_00,&local_18);
  this_01 = FTextSelection::GetBeginning(&local_18);
  this_02 = FTextSelection::GetEnd(&local_18);
  bVar1 = FTextLocation::IsValid(this_01);
  if ((((bVar1) && (bVar1 = FTextLocation::IsValid(this_02), bVar1)) &&
      (bVar1 = FTextLocation::operator<(this_01,this_02), bVar1)) &&
     (((bVar1 = FTextLocation::operator<(this_01,param_1), bVar1 &&
       (bVar1 = FTextLocation::operator<(param_1,this_02), bVar1)) ||
      ((bVar1 = FTextLocation::operator==(param_1,this_01), bVar1 ||
       (bVar1 = FTextLocation::operator==(param_1,this_02), bVar1)))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((this->DropdownAnchor).Object == (SMenuAnchor *)0x0) {
      return;
    }
    this_03 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
    bVar1 = SMenuAnchor::IsOpen(this_03);
    if (!bVar1) {
      return;
    }
  }
  OpenOrCloseSuggestionDropdown(this);
  return;
}

// OnEditableTextKeyChar @ 14d10d2f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNamingTokensEditableTextBox::OnEditableTextKeyChar
          (SNamingTokensEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  wchar_t wVar1;
  int iVar2;
  int local_94;
  FTextLocation local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  FString local_70;
  SMultiLineEditableText *local_60;
  SMultiLineEditableText *local_58;
  FTextLocation local_50;
  SMultiLineEditableText *local_48;
  SMultiLineEditableText *local_40;
  SMultiLineEditableText *local_38;
  SMultiLineEditableText *local_30;
  FTextLocation local_28;
  SMultiLineEditableText *local_20;
  FString local_18;
  
  wVar1 = FCharacterEvent::GetCharacter(param_2);
  if (wVar1 == L'{') {
    local_60 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
    SMultiLineEditableText::GetCursorLocation(local_60);
    local_58 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
    ::FString::FString(&local_18,L"}");
    SMultiLineEditableText::InsertTextAtCursor(local_58,&local_18);
    ::FString::~FString(&local_18);
    local_48 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
    SMultiLineEditableText::GoTo(local_48,&local_50);
  }
  else {
    wVar1 = FCharacterEvent::GetCharacter(param_2);
    if (wVar1 == L'}') {
      local_40 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
      SMultiLineEditableText::GetCursorLocation(local_40);
      ::FString::FString(&local_70);
      local_38 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
      local_88 = FTextLocation::GetLineIndex(&local_90);
      SMultiLineEditableText::GetTextLine(local_38,local_88,&local_70);
      local_84 = local_70.Data.ArrayNum;
      if (local_70.Data.ArrayNum == 0) {
        local_94 = 0;
      }
      else {
        local_80 = local_70.Data.ArrayNum;
        local_94 = local_70.Data.ArrayNum + -1;
      }
      local_7c = local_94;
      iVar2 = FTextLocation::GetOffset(&local_90);
      if (iVar2 < local_7c) {
        local_30 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
        wVar1 = SMultiLineEditableText::GetCharacterAt(local_30,&local_90);
        if (wVar1 == L'}') {
          local_78 = FTextLocation::GetOffset(&local_90);
          local_78 = local_78 + 1;
          local_74 = FTextLocation::GetLineIndex(&local_90);
          FTextLocation::FTextLocation(&local_28,local_74,local_78);
          local_20 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
          SMultiLineEditableText::GoTo(local_20,&local_28);
          FReply::Handled(__return_storage_ptr__);
          ::FString::~FString(&local_70);
          return __return_storage_ptr__;
        }
      }
      ::FString::~FString(&local_70);
    }
  }
  FReply::Unhandled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnEditableTextKeyDown @ 14d10d5b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNamingTokensEditableTextBox::OnEditableTextKeyDown
          (SNamingTokensEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  bool bVar1;
  SMenuAnchor *pSVar2;
  TSharedPtr<FNamingTokenDataTreeItem,1> *pTVar3;
  TSharedRef<SMultiLineEditableText,1> *pTVar4;
  FReply *pFVar5;
  FKey local_140;
  TSharedPtr<FNamingTokenDataTreeItem,1> *local_128;
  SNamingTokenDataTreeViewWidget *local_120;
  SNamingTokenDataTreeViewWidget *local_118;
  TSharedPtr<SMultiLineEditableText,1> *local_110;
  TSharedRef<SWidget,1> *local_108;
  TSharedRef<SWidget,1> *local_100;
  FReply *local_f8;
  TSharedRef<SMultiLineEditableText,1> local_f0;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_e0;
  TSharedRef<SWidget,1> local_d0;
  FReply local_c0;
  
  FKeyEvent::GetKey(param_2,&local_140);
  bVar1 = ::operator==(&local_140,&EKeys::Enter);
  if ((bVar1) && ((this->DropdownAnchor).Object != (SMenuAnchor *)0x0)) {
    pSVar2 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
    bVar1 = SMenuAnchor::IsOpen(pSVar2);
    if ((bVar1) && ((this->FilterWidget).Object != (SNamingTokenDataTreeViewWidget *)0x0)) {
      local_128 = &local_e0;
      local_120 = TSharedPtr<SNamingTokenDataTreeViewWidget,1>::operator->(&this->FilterWidget);
      pTVar3 = SNamingTokenDataTreeViewWidget::GetSelectedItem(local_120,local_128);
      OnSuggestionSelected(this,pTVar3);
      FReply::Handled(__return_storage_ptr__);
      FKey::~FKey(&local_140);
      return __return_storage_ptr__;
    }
  }
  bVar1 = ::operator==(&local_140,&EKeys::Escape);
  if (((!bVar1) && (bVar1 = ::operator==(&local_140,&EKeys::Tab), !bVar1)) &&
     (bVar1 = ::operator==(&local_140,&EKeys::Enter), !bVar1)) {
    OpenOrCloseSuggestionDropdownNextTick(this);
  }
  if ((this->DropdownAnchor).Object != (SMenuAnchor *)0x0) {
    pSVar2 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
    bVar1 = SMenuAnchor::IsOpen(pSVar2);
    if ((bVar1) && ((this->FilterWidget).Object != (SNamingTokenDataTreeViewWidget *)0x0)) {
      local_118 = TSharedPtr<SNamingTokenDataTreeViewWidget,1>::operator->(&this->FilterWidget);
      bVar1 = SNamingTokenDataTreeViewWidget::ForwardKeyEventForNavigation(local_118,param_2);
      if (bVar1) {
        local_f8 = FReply::Handled(&local_c0);
        local_108 = &local_d0;
        local_110 = &this->EditableText;
        pTVar4 = TSharedPtr<SMultiLineEditableText,1>::ToSharedRef(local_110,&local_f0);
        local_100 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableText>
                              (local_108,pTVar4);
        pFVar5 = FReply::SetUserFocus(local_f8,local_100,OtherWidgetLostFocus,false);
        FReply::FReply(__return_storage_ptr__,pFVar5);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_f0.SharedReferenceCount);
        FReply::~FReply(&local_c0);
        FKey::~FKey(&local_140);
        return __return_storage_ptr__;
      }
    }
  }
  FReply::Unhandled(__return_storage_ptr__);
  FKey::~FKey(&local_140);
  return __return_storage_ptr__;
}

// OnFocusChanging @ 14d10d900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OnFocusChanging
          (SNamingTokensEditableTextBox *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,
          FFocusEvent *param_3)

{
  bool bVar1;
  
  if ((((this->FilterWidget).Object != (SNamingTokenDataTreeViewWidget *)0x0) &&
      (bVar1 = FWidgetPath::ContainsWidget(param_2,(SWidget *)this), !bVar1)) &&
     (bVar1 = FWidgetPath::ContainsWidget(param_2,(SWidget *)(this->FilterWidget).Object), !bVar1))
  {
    CloseSuggestionDropdown(this);
  }
  return;
}

// OnFocusReceived @ 14d10db80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNamingTokensEditableTextBox::OnFocusReceived
          (SNamingTokensEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  TSharedRef<SMultiLineEditableText,1> *pTVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SMultiLineEditableText,1> local_30;
  TSharedRef<SWidget,1> local_20 [2];
  
  FReply::Handled(__return_storage_ptr__);
  EVar1 = FFocusEvent::GetCause(param_2);
  if (EVar1 != Cleared) {
    EVar1 = FFocusEvent::GetCause(param_2);
    pTVar2 = TSharedPtr<SMultiLineEditableText,1>::ToSharedRef(&this->EditableText,&local_30);
    pTVar3 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableText>(local_20,pTVar2);
    FReply::SetUserFocus(__return_storage_ptr__,pTVar3,EVar1,false);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_30.SharedReferenceCount);
  }
  return __return_storage_ptr__;
}

// OnGetDropdownContent @ 14d10e000

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SNamingTokensEditableTextBox::OnGetDropdownContent
          (SNamingTokensEditableTextBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs> *this_00;
  longlong lVar1;
  code **ppcVar2;
  undefined1 *puVar3;
  pmf_5c8e48ae *ppVar4;
  pmf_76579ee8 *ppVar5;
  T0RequiredArgs local_318 [8];
  FArguments *local_310;
  FArguments *local_308;
  TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs> *local_300;
  FArguments *local_2f8;
  code *local_2f0;
  undefined4 local_2e8;
  code *local_2e0;
  undefined4 local_2d8;
  TSharedRef<SNamingTokenDataTreeViewWidget,1> local_2d0;
  undefined1 local_2c0 [24];
  pmf_5c8e48ae local_2a8;
  undefined1 local_298 [16];
  pmf_76579ee8 local_288;
  TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs> local_278;
  FArguments local_260;
  
  if (this->bEnableSuggestionDropdown == false) {
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(__return_storage_ptr__,&SNullWidget::NullWidget);
  }
  else {
    local_310 = SNamingTokenDataTreeViewWidget::FArguments::FArguments(&local_260);
    local_2f0 = OnSuggestionDoubleClicked;
    local_2e8 = 0;
    ppcVar2 = &local_2f0;
    puVar3 = local_2c0;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *(undefined1 *)ppcVar2;
      ppcVar2 = (code **)((longlong)ppcVar2 + 1);
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_2c0;
    ppVar4 = &local_2a8;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)ppVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      ppVar4 = (pmf_5c8e48ae *)&ppVar4->field_0x1;
    }
    local_308 = SNamingTokenDataTreeViewWidget::FArguments::
                OnItemSelected<SNamingTokensEditableTextBox>(local_310,this,&local_2a8);
    local_2e0 = OnSuggestionDropdownReceivedFocus;
    local_2d8 = 0;
    ppcVar2 = &local_2e0;
    puVar3 = local_298;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *(undefined1 *)ppcVar2;
      ppcVar2 = (code **)((longlong)ppcVar2 + 1);
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_298;
    ppVar5 = &local_288;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)ppVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      ppVar5 = (pmf_76579ee8 *)&ppVar5->field_0x1;
    }
    local_2f8 = SNamingTokenDataTreeViewWidget::FArguments::OnFocused<SNamingTokensEditableTextBox>
                          (local_308,this,&local_288);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_318);
    local_300 = MakeTDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs>
                          (&local_278,"SNamingTokenDataTreeViewWidget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                           ,0x2a3,local_318);
    this_00 = TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs>::
              Expose<SNamingTokenDataTreeViewWidget>(local_300,&this->FilterWidget);
    TSlateDecl<SNamingTokenDataTreeViewWidget,RequiredArgs::T0RequiredArgs>::operator<<=
              (this_00,&local_2d0,local_2f8);
    TSharedPtr<SNamingTokenDataTreeViewWidget,1>::~TSharedPtr<SNamingTokenDataTreeViewWidget,1>
              (&local_278._Widget);
    SNamingTokenDataTreeViewWidget::FArguments::~FArguments(&local_260);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNamingTokenDataTreeViewWidget>
              (__return_storage_ptr__,&local_2d0);
    TSharedRef<SNamingTokenDataTreeViewWidget,1>::~TSharedRef<SNamingTokenDataTreeViewWidget,1>
              (&local_2d0);
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 14d10ebc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNamingTokensEditableTextBox::OnKeyDown
          (SNamingTokensEditableTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  bool bVar1;
  char cVar2;
  FKey *pFVar3;
  SMultiLineEditableText *pSVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FStaticCastTag local_140;
  TSharedRef<SNamingTokensEditableTextBox,1> local_108;
  TSharedRef<SWidget,1> local_f8;
  FKey local_e8;
  TSharedRef<SWidget,1> local_d0;
  FReply local_c0;
  
  pFVar3 = FKeyEvent::GetKey(param_2,&local_e8);
  bVar1 = ::operator==(pFVar3,&EKeys::Escape);
  if (bVar1) {
    pSVar4 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
    cVar2 = (**(code **)(pSVar4->_padding_ + 0x1a0))(pSVar4);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_14d10ec5a;
    }
  }
  bVar1 = false;
LAB_14d10ec5a:
  FKey::~FKey(&local_e8);
  if (bVar1) {
    pFVar5 = FReply::Handled(&local_c0);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
    TSharedRef<SNamingTokensEditableTextBox,1>::TSharedRef<SNamingTokensEditableTextBox,1><SWidget>
              (&local_108,pTVar6,local_140);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_f8);
    pTVar6 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNamingTokensEditableTextBox>
                       (&local_d0,&local_108);
    pFVar5 = FReply::SetUserFocus(pFVar5,pTVar6,Cleared,false);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    TSharedRef<SNamingTokensEditableTextBox,1>::~TSharedRef<SNamingTokensEditableTextBox,1>
              (&local_108);
    FReply::~FReply(&local_c0);
  }
  else {
    FReply::Unhandled(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// OnSuggestionDoubleClicked @ 14d110ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OnSuggestionDoubleClicked
          (SNamingTokensEditableTextBox *this,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  TSharedPtr<FNamingTokenDataTreeItem,1> *pTVar1;
  SMultiLineEditableText *this_00;
  FSlateApplication *pFVar2;
  TSharedPtr<SWidget,1> local_48;
  TSharedPtr<SWidget,1> local_38;
  FText local_28;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_18;
  
  pTVar1 = TSharedPtr<FNamingTokenDataTreeItem,1>::TSharedPtr<FNamingTokenDataTreeItem,1>
                     (&local_18,param_1);
  OnSuggestionSelected(this,pTVar1);
  this_00 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
  SMultiLineEditableText::GetPlainText(this_00,&local_28);
  OnEditableTextCommitted(this,&local_28,OnUserMovedFocus);
  pFVar2 = FSlateApplication::Get();
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SMultiLineEditableText>
            (&local_48,&this->EditableText);
  FSlateApplication::SetKeyboardFocus(pFVar2,&local_48,OtherWidgetLostFocus);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_48);
  pFVar2 = FSlateApplication::Get();
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SMultiLineEditableText>
            (&local_38,&this->EditableText);
  FSlateApplication::SetUserFocus(pFVar2,0,&local_38,OtherWidgetLostFocus);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_38);
  FText::~FText(&local_28);
  TSharedPtr<FNamingTokenDataTreeItem,1>::~TSharedPtr<FNamingTokenDataTreeItem,1>(param_1);
  return;
}

// OnSuggestionDropdownReceivedFocus @ 14d111020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OnSuggestionDropdownReceivedFocus(SNamingTokensEditableTextBox *this)

{
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> local_20 [2];
  
  this_00 = FSlateApplication::Get();
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SMultiLineEditableText>(local_20,&this->EditableText)
  ;
  FSlateApplication::SetKeyboardFocus(this_00,local_20,WindowActivate);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(local_20);
  return;
}

// OnSuggestionSelected @ 14d111080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OnSuggestionSelected
          (SNamingTokensEditableTextBox *this,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FNamingTokenDataTreeItem *pFVar4;
  FCursorTokenData *pFVar5;
  bool local_d7;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> local_c0;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> local_b0;
  undefined4 local_a0;
  FNamingTokenDataTreeItem *local_98;
  FString *local_90;
  FCursorTokenData *local_88;
  SMultiLineEditableText *local_80;
  FTextLocation *local_78;
  FCursorTokenData *local_70;
  SMultiLineEditableText *local_68;
  FText *local_60;
  SMultiLineEditableText *local_58;
  FTextLocation local_50;
  SMultiLineEditableText *local_48;
  FString local_40;
  FString local_30;
  FText local_20 [2];
  
  local_a0 = 0;
  if (param_1->Object != (FNamingTokenDataTreeItem *)0x0) {
    GetCurrentCursorTokenData(this,&local_c0);
    if (local_c0.Object != (FCursorTokenData *)0x0) {
      pFVar4 = TSharedPtr<FNamingTokenDataTreeItem,1>::operator->(param_1);
      if ((pFVar4->bIsGlobal == false) || (this->bFullyQualifyGlobalTokenSuggestions != false)) {
        local_d7 = true;
      }
      else {
        local_d7 = false;
      }
      local_98 = TSharedPtr<FNamingTokenDataTreeItem,1>::operator->(param_1);
      FNamingTokenDataTreeItem::ToString(local_98,&local_40,local_d7);
      pFVar4 = TSharedPtr<FNamingTokenDataTreeItem,1>::operator->(param_1);
      bVar1 = FNamingTokenDataTreeItem::IsNamespace(pFVar4);
      if (bVar1) {
        local_90 = UE::NamingTokens::Utils::GetNamespaceDelimiter(&local_30);
        ::FString::Append<FString,wchar_t>(&local_40,local_90);
        ::FString::~FString(&local_30);
      }
      else {
        CloseSuggestionDropdown(this);
      }
      local_80 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
      local_88 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->(&local_c0)
      ;
      SMultiLineEditableText::GoTo(local_80,&local_88->StartLocation);
      local_68 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
      pFVar5 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->(&local_c0);
      local_78 = &pFVar5->EndLocation;
      local_70 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->(&local_c0)
      ;
      SMultiLineEditableText::SelectText(local_68,&local_70->StartLocation,local_78);
      local_58 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
      local_60 = FText::FromString(local_20,&local_40);
      SMultiLineEditableText::InsertTextAtCursor(local_58,local_60);
      FText::~FText(local_20);
      pFVar4 = TSharedPtr<FNamingTokenDataTreeItem,1>::operator->(param_1);
      bVar1 = FNamingTokenDataTreeItem::IsNamespace(pFVar4);
      if (bVar1) {
        UpdateFilters(this);
      }
      else {
        GetCurrentCursorTokenData(this,&local_b0);
        if (local_b0.Object != (FCursorTokenData *)0x0) {
          pFVar5 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
                             (&local_b0);
          iVar2 = FTextLocation::GetOffset(&pFVar5->EndLocation);
          pFVar5 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
                             (&local_b0);
          iVar3 = FTextLocation::GetLineIndex(&pFVar5->EndLocation);
          FTextLocation::FTextLocation(&local_50,iVar3,iVar2 + 1);
          local_48 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
          SMultiLineEditableText::GoTo(local_48,&local_50);
        }
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_b0.SharedReferenceCount);
      }
      ::FString::~FString(&local_40);
    }
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_c0.SharedReferenceCount);
  }
  TSharedPtr<FNamingTokenDataTreeItem,1>::~TSharedPtr<FNamingTokenDataTreeItem,1>(param_1);
  return;
}

// OpenOrCloseSuggestionDropdown @ 14d111930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdown(SNamingTokensEditableTextBox *this)

{
  bool bVar1;
  FCursorTokenData *pFVar2;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> local_28;
  FString *local_18;
  FString *local_10;
  
  if ((this->DropdownAnchor).Object == (SMenuAnchor *)0x0) {
    return;
  }
  GetCurrentCursorTokenData(this,&local_28);
  if (local_28.Object == (FCursorTokenData *)0x0) {
    CloseSuggestionDropdown(this);
    goto LAB_14d111a95;
  }
  if ((this->LastCursorTokenData).Object == (FCursorTokenData *)0x0) {
LAB_14d111a43:
    bVar1 = true;
  }
  else {
    pFVar2 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->(&local_28);
    local_18 = &pFVar2->EnteredWord;
    pFVar2 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
                       (&this->LastCursorTokenData);
    local_10 = &pFVar2->EnteredWord;
    bVar1 = ::FString::Equals(local_10,local_18,IgnoreCase);
    if (!bVar1) goto LAB_14d111a43;
    bVar1 = false;
  }
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator=
            (&this->LastCursorTokenData,&local_28);
  OpenSuggestionDropdown(this);
  if (bVar1) {
    UpdateFilters(this);
  }
LAB_14d111a95:
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_28.SharedReferenceCount);
  return;
}

// OpenOrCloseSuggestionDropdownNextTick @ 14d111ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdownNextTick
          (SNamingTokensEditableTextBox *this)

{
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar1;
  <lambda_1> local_50;
  <lambda_1> *local_48;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *local_40;
  TSharedRef<FActiveTimerHandle,1> local_38;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_28;
  
  if ((this->bModifyingSuggestionDropdown == false) &&
     ((this->DropdownAnchor).Object != (SMenuAnchor *)0x0)) {
    this->bModifyingSuggestionDropdown = true;
    local_40 = &local_28;
    local_48 = &local_50;
    local_50.__this = this;
    pTVar1 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::
             CreateLambda<_SNamingTokensEditableTextBox::OpenOrCloseSuggestionDropdownNextTick_::__l5::<lambda_1>_>
                       (local_40,local_48);
    SWidget::RegisterActiveTimer((SWidget *)this,&local_38,0.0,pTVar1);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_38.SharedReferenceCount);
  }
  return;
}

// OpenSuggestionDropdown @ 14d111b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::OpenSuggestionDropdown(SNamingTokensEditableTextBox *this)

{
  code *pcVar1;
  bool bVar2;
  SMenuAnchor *pSVar3;
  
  if (((this->DropdownAnchor).Object == (SMenuAnchor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DropdownAnchor.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                         ,0x247,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar3 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
  bVar2 = SMenuAnchor::IsOpen(pSVar3);
  if (!bVar2) {
    pSVar3 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
    (**(code **)(pSVar3->_padding_ + 0x250))(pSVar3,1,0,0);
  }
  return;
}

// ParseArgs @ 14d112100

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SNamingTokensEditableTextBox::ParseArgs
          (SNamingTokensEditableTextBox *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = UE::NamingTokens::Utils::GetTokenKeysFromString(&local_18,param_1);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,pTVar1);
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&local_18);
  return param_2->ArrayNum != 0;
}

// SetArgumentStyle @ 14d119cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::SetArgumentStyle
          (SNamingTokensEditableTextBox *this,FTextBlockStyle *param_1)

{
  FNamingTokensStringSyntaxHighlighterMarshaller *pFVar1;
  
  this->ArgumentStyle = param_1;
  if (((this->Marshaller).Object != (FNamingTokensStringSyntaxHighlighterMarshaller *)0x0) &&
     (param_1 != (FTextBlockStyle *)0x0)) {
    pFVar1 = TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::operator->
                       (&this->Marshaller);
    FNamingTokensStringSyntaxHighlighterMarshaller::SetArgumentStyle(pFVar1,param_1);
    pFVar1 = TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::operator->
                       (&this->Marshaller);
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  }
  return;
}

// SetContexts @ 14d119f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::SetContexts
          (SNamingTokensEditableTextBox *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
  operator=<TSizedDefaultAllocator<32>,TObjectPtr<UObject>_>(&this->NamingTokenContexts,param_1);
  return;
}

// SetEnableSuggestionDropdown @ 14d119fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::SetEnableSuggestionDropdown
          (SNamingTokensEditableTextBox *this,bool param_1)

{
  this->bEnableSuggestionDropdown = param_1;
  return;
}

// SetError @ 14d119fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::SetError(SNamingTokensEditableTextBox *this,FText *param_1)

{
  IErrorReportingWidget *pIVar1;
  
  pIVar1 = TSharedPtr<IErrorReportingWidget,1>::operator->(&this->ErrorReporting);
  (**(code **)*pIVar1)(pIVar1,param_1);
  return;
}

// SetFilterArgs @ 14d11a120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::SetFilterArgs
          (SNamingTokensEditableTextBox *this,FNamingTokenFilterArgs *param_1)

{
  FNamingTokenFilterArgs::operator=(&this->NamingTokenFilterArgs,param_1);
  return;
}

// SetNormalStyle @ 14d11a4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::SetNormalStyle
          (SNamingTokensEditableTextBox *this,FEditableTextBoxStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  SMultiLineEditableText *this_00;
  FNamingTokensStringSyntaxHighlighterMarshaller *pFVar3;
  FArguments local_408;
  
  if (param_1 == (FEditableTextBoxStyle *)0x0) {
    FArguments::FArguments(&local_408);
    this->TextBoxStyle = local_408._Style;
    FArguments::~FArguments(&local_408);
  }
  else {
    this->TextBoxStyle = param_1;
  }
  if ((this->TextBoxStyle == (FEditableTextBoxStyle *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextBoxStyle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensEditableTextBox.cpp"
                         ,0xdc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->EditableText).Object != (SMultiLineEditableText *)0x0) {
    this_00 = TSharedPtr<SMultiLineEditableText,1>::operator->(&this->EditableText);
    SMultiLineEditableText::SetTextStyle(this_00,&this->TextBoxStyle->TextStyle);
  }
  if ((this->Marshaller).Object != (FNamingTokensStringSyntaxHighlighterMarshaller *)0x0) {
    pFVar3 = TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::operator->
                       (&this->Marshaller);
    FNamingTokensStringSyntaxHighlighterMarshaller::SetNormalStyle
              (pFVar3,&this->TextBoxStyle->TextStyle);
    pFVar3 = TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::operator->
                       (&this->Marshaller);
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
  }
  return;
}

// SetTokenizedText @ 14d11a950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokensEditableTextBox::SetTokenizedText(SNamingTokensEditableTextBox *this,FText *param_1)

{
  TAttribute<FText>::Set<FText>(&this->TokenizedText,param_1);
  EvaluateNamingTokens(this);
  return;
}

// UpdateFilters @ 14d11c5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNamingTokensEditableTextBox::UpdateFilters(SNamingTokensEditableTextBox *this)

{
  bool bVar1;
  SMenuAnchor *this_00;
  SNamingTokenDataTreeViewWidget *this_01;
  FCursorTokenData *pFVar2;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> local_18;
  
  if (((this->EditableText).Object != (SMultiLineEditableText *)0x0) &&
     ((this->FilterWidget).Object != (SNamingTokenDataTreeViewWidget *)0x0)) {
    this_00 = TSharedPtr<SMenuAnchor,1>::operator->(&this->DropdownAnchor);
    bVar1 = SMenuAnchor::IsOpen(this_00);
    if (bVar1) {
      GetCurrentCursorTokenData(this,&local_18);
      if (local_18.Object != (FCursorTokenData *)0x0) {
        this_01 = TSharedPtr<SNamingTokenDataTreeViewWidget,1>::operator->(&this->FilterWidget);
        pFVar2 = TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->(&local_18)
        ;
        SNamingTokenDataTreeViewWidget::FilterTreeItems(this_01,&pFVar2->EnteredWord);
      }
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_18.SharedReferenceCount);
    }
  }
  return;
}

// ValidateTokenArgs @ 14d11c9b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SNamingTokensEditableTextBox::ValidateTokenArgs
          (SNamingTokensEditableTextBox *this,FText *param_1,FText *param_2)

{
  bool bVar1;
  TArrayView<FString_const_,int> *pTVar2;
  FString *pFVar3;
  <lambda_1> *p<Var4;
  FText *pFVar5;
  longlong lVar6;
  TArrayView<FString_const_,int> *pTVar7;
  char *pcVar8;
  char local_117 [4];
  undefined1 local_113;
  undefined1 local_112;
  uint local_110;
  uint local_10c;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_100;
  int local_f0;
  FString *local_e8;
  FString *local_e0;
  TCheckedPointerIterator<FString,int,0> local_d8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FString *local_a0;
  FString *local_98;
  FString *local_90;
  FString *local_88;
  undefined1 *local_80;
  TArrayView<FString_const_,int> local_78;
  FText local_68;
  TCheckedPointerIterator<FString,int,0> local_58;
  FString local_40;
  undefined1 local_30 [32];
  
  pTVar2 = TAttribute<TArrayView<FString_const_,int>_>::Get(&this->ValidArguments);
  pTVar7 = &local_78;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar2->DataPtr;
    pTVar2 = (TArrayView<FString_const_,int> *)((longlong)&pTVar2->DataPtr + 1);
    pTVar7 = (TArrayView<FString_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  bVar1 = TArrayView<FString_const_,int>::IsEmpty(&local_78);
  if (bVar1) {
    local_113 = 1;
  }
  else {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_100.AllocatorInstance);
    local_100.ArrayNum = 0;
    local_100.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_100.AllocatorInstance);
    pFVar3 = FText::ToString(param_1);
    bVar1 = ParseArgs(this,pFVar3,&local_100);
    if (bVar1) {
      local_108 = &local_100;
      TCheckedPointerIterator<FString,int,0>::TCheckedPointerIterator<FString,int,0>
                (&local_d8,&local_100.ArrayNum,(FString *)local_100.AllocatorInstance.Data);
      local_b0 = (local_108->AllocatorInstance).Data;
      local_f0 = local_108->ArrayNum;
      local_a8 = local_b0;
      TCheckedPointerIterator<FString,int,0>::TCheckedPointerIterator<FString,int,0>
                (&local_58,&local_108->ArrayNum,(FString *)(local_b0 + (longlong)local_f0 * 0x10));
      while( true ) {
        if (*local_d8.CurrentNum != local_d8.InitialNum) {
          pcVar8 = local_117;
          for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
            *pcVar8 = '\0';
            pcVar8 = pcVar8 + 1;
          }
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_117);
        }
        local_117[1] = local_d8.Ptr != local_58.Ptr;
        local_110 = (uint)(byte)local_117[1];
        if (!(bool)local_117[1]) {
          local_112 = 1;
          TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
                    (&local_100);
          return (bool)local_112;
        }
        local_a0 = local_d8.Ptr;
        local_98 = local_d8.Ptr;
        local_e8 = &local_40;
        local_90 = local_e8;
        ::FString::FString(local_e8,local_d8.Ptr);
        local_88 = local_e8;
        local_e0 = local_e8;
        local_80 = local_30;
        p<Var4 = `SNamingTokensEditableTextBox::ValidateTokenArgs'::__l13::<lambda_1>::<lambda_1>
                           (local_80,(<lambda_1> *)local_e8);
        pFVar3 = TArrayView<FString_const_,int>::
                 FindByPredicate<_SNamingTokensEditableTextBox::ValidateTokenArgs_::__l13::<lambda_1>_>
                           (&local_78,p<Var4);
        local_117[2] = pFVar3 != (FString *)0x0;
        local_10c = (uint)(byte)local_117[2];
        ::FString::~FString(local_e0);
        local_117[3] = local_117[2];
        if (local_117[2] == '\0') break;
        local_d8.Ptr = local_d8.Ptr + 1;
      }
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"SNamingTokensEditableTextBox",L"TemplateTextInvalidArgError",
                          L"An argument/token was found that doesn\'t match any of the provided valid argument names."
                         );
      FText::operator=(param_2,pFVar5);
      FText::~FText(&local_68);
      local_113 = 0;
      TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
                (&local_100);
    }
    else {
      TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
                (&local_100);
      local_113 = 1;
    }
  }
  return (bool)local_113;
}

// ValidateTokenBraces @ 14d11ccf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SNamingTokensEditableTextBox::ValidateTokenBraces
          (SNamingTokensEditableTextBox *this,FText *param_1,FText *param_2)

{
  bool bVar1;
  FString *pFVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_c7 [3];
  int local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  FString *local_b0;
  FString *local_a8;
  FString *local_a0;
  wchar_t *local_98;
  TCheckedPointerIterator<wchar_t,int,0> local_90;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  wchar_t *local_58;
  FText local_50;
  FText local_40;
  FString local_30;
  TCheckedPointerIterator<wchar_t,int,0> local_20;
  
  local_c0 = 0;
  local_c4 = 0;
  bVar1 = false;
  pFVar2 = FText::ToString(param_1);
  ::FString::FString(&local_30,pFVar2);
  local_a8 = &local_30;
  local_a0 = local_a8;
  TCheckedPointerIterator<wchar_t,int,0>::TCheckedPointerIterator<wchar_t,int,0>
            (&local_90,&local_30.Data.ArrayNum,(wchar_t *)local_30.Data.AllocatorInstance.Data);
  local_b0 = local_a8;
  local_68 = (local_a8->Data).AllocatorInstance.Data;
  local_b8 = (local_a8->Data).ArrayNum;
  local_60 = local_68;
  TCheckedPointerIterator<wchar_t,int,0>::TCheckedPointerIterator<wchar_t,int,0>
            (&local_20,&(local_a8->Data).ArrayNum,(wchar_t *)(local_68 + (longlong)local_b8 * 2));
  local_b4 = (local_a8->Data).ArrayNum;
  if (local_b4 != 0) {
    local_20.Ptr = local_20.Ptr + -1;
  }
  do {
    if (*local_90.CurrentNum != local_90.InitialNum) {
      puVar4 = local_c7;
      for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c7);
    }
    local_c7[1] = local_90.Ptr != local_20.Ptr;
    local_bc = (uint)(byte)local_c7[1];
    if (!(bool)local_c7[1]) goto LAB_14d11cf33;
    local_58 = local_90.Ptr;
    local_98 = local_90.Ptr;
    if (*local_90.Ptr == L'{') {
      local_c0 = local_c0 + 1;
      if (bVar1) {
        FText::AsLocalizable_Advanced_LocText
                  (&local_50,L"SNamingTokensEditableTextBox",L"TemplateTextUnbalancedBracingError",
                   L"An unbalanced brace was detected. Please ensure that all braces are properly closed."
                  );
        FText::operator=(param_2,&local_50);
        FText::~FText(&local_50);
LAB_14d11cf33:
        if (local_c0 != local_c4) {
          FText::AsLocalizable_Advanced_LocText
                    (&local_40,L"SNamingTokensEditableTextBox",L"TemplateTextUnbalancedBracingError"
                     ,
                     L"An unbalanced brace was detected. Please ensure that all braces are properly closed."
                    );
          FText::operator=(param_2,&local_40);
          FText::~FText(&local_40);
        }
        local_c7[2] = FText::IsEmpty(param_2);
        ::FString::~FString(&local_30);
        return (bool)local_c7[2];
      }
      bVar1 = true;
    }
    else if (*local_90.Ptr == L'}') {
      local_c4 = local_c4 + 1;
      bVar1 = false;
    }
    local_90.Ptr = local_90.Ptr + 1;
  } while( true );
}

// ValidateTokenizedText @ 14d11cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SNamingTokensEditableTextBox::ValidateTokenizedText
          (SNamingTokensEditableTextBox *this,FText *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText local_48;
  FText local_38;
  FTextBuilder local_28;
  
  FTextBuilder::FTextBuilder(&local_28);
  FText::FText(&local_48);
  bVar1 = ValidateTokenBraces(this,param_1,&local_48);
  if (!bVar1) {
    FTextBuilder::AppendLine(&local_28,&local_48);
  }
  bVar1 = FText::IsEmpty(&local_48);
  if (bVar1) {
    bVar1 = ValidateTokenArgs(this,param_1,&local_48);
    if (!bVar1) {
      FTextBuilder::AppendLine(&local_28,&local_48);
    }
  }
  bVar1 = FTextBuilder::IsEmpty(&local_28);
  if (!bVar1) {
    pFVar2 = FTextBuilder::ToText(&local_28,&local_38);
    FText::operator=(&local_48,pFVar2);
    FText::~FText(&local_38);
  }
  bVar1 = FText::IsEmpty(&local_48);
  if (!bVar1) {
    bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValidateTokenizedText);
    if (bVar1) {
      TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::Execute
                (&this->OnValidateTokenizedText,param_1,&local_48);
    }
  }
  SetError(this,&local_48);
  bVar1 = FText::IsEmpty(&local_48);
  FText::~FText(&local_48);
  TArray<FText,TSizedDefaultAllocator<32>_>::~TArray<FText,TSizedDefaultAllocator<32>_>
            (&local_28.Lines);
  return bVar1;
}

