// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// SExpandableButton @ 1428b9d90

SExpandableButton * __thiscall SExpandableButton::SExpandableButton(SExpandableButton *this)

{
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  code *pcVar1;
  bool bVar2;
  SExpandableButton *pSVar3;
  undefined1 local_res8 [8];
  
  SBorder::SBorder((SBorder *)this);
  this_00 = &this->IsExpanded;
  this->_padding_ = (longlong)&___7SExpandableButton__6B_;
  this_00->field_0x0 = 0;
  if ((this_00 < this) || (this + 1 <= this_00)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar3 = (SExpandableButton *)(*pcVar1)();
      return pSVar3;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SExpandableButton,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->ExpandedChildContent).Object = (SWidget *)0x0;
  (this->ExpandedChildContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ToggleButtonClosed).Object = (SWidget *)0x0;
  (this->ToggleButtonClosed).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ToggleButtonExpanded).Object = (SWidget *)0x0;
  (this->ToggleButtonExpanded).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CloseExpansionButton).Object = (SWidget *)0x0;
  (this->CloseExpansionButton).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// Construct @ 1428fb060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001428fb3c8) */

void __thiscall SExpandableButton::Construct(SExpandableButton *this,FArguments *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FArguments *pFVar14;
  TAttribute<FText> *pTVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  FMemScope FVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  undefined8 *puVar20;
  FArguments *pFVar21;
  FSlot *pFVar22;
  FSizeParam *pFVar23;
  FArguments *pFVar24;
  FButtonStyle *pFVar25;
  TSharedRef<SButton,1> *pTVar26;
  SHorizontalBox *pSVar27;
  FSlotArguments *pFVar28;
  FArguments *pFVar29;
  TSharedRef<SImage,1> *pTVar30;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar31;
  FSharedReferencer<1> FVar32;
  FSlotArguments *this_01;
  FMemScope FVar33;
  FSharedReferencer<1> FVar34;
  TReferenceControllerBase<1> *pTVar35;
  TReferenceControllerBase<1> *pTVar36;
  undefined4 local_res10 [2];
  FLLMScope local_res18 [2];
  FName local_res20;
  FLLMScope local_1f48 [2];
  FName local_1f40;
  FSharedReferencer<1> FStack_1f38;
  FMemScope local_1f30;
  T0RequiredArgs local_1f28;
  T0RequiredArgs local_1f27 [7];
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1f20;
  FMemScope local_1f08;
  FMemScope local_1f00;
  FMemScope local_1ef8;
  SButton *local_1ef0;
  FSharedReferencer<1> local_1ee8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1ee0;
  STextBlock *local_1ec8;
  FSharedReferencer<1> local_1ec0;
  SButton *local_1eb8;
  FSharedReferencer<1> local_1eb0;
  SWidget *local_1ea8;
  FSharedReferencer<1> local_1ea0;
  TSharedRef<SButton,1> local_1e98;
  TSharedRef<STextBlock,1> local_1e88;
  FSlateBrush *local_1e78;
  undefined1 local_1e70;
  undefined1 local_1e68 [8];
  void *pvStack_1e60;
  undefined8 local_1e58;
  undefined4 local_1e50 [2];
  undefined4 local_1e48 [2];
  undefined4 local_1e40 [2];
  FName local_1e38;
  FName local_1e30;
  FName local_1e28;
  undefined8 local_1e20;
  undefined8 uStack_1e18;
  undefined1 local_1e10;
  undefined1 local_1e08 [8];
  void *pvStack_1e00;
  undefined8 local_1df8;
  undefined8 local_1df0;
  undefined8 uStack_1de8;
  undefined1 local_1de0;
  undefined1 local_1dd8 [8];
  void *pvStack_1dd0;
  undefined8 local_1dc8;
  undefined8 local_1dc0;
  undefined8 uStack_1db8;
  undefined1 local_1db0;
  undefined1 local_1da8 [8];
  void *pvStack_1da0;
  undefined8 local_1d98;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1d90;
  undefined1 local_1d78 [16];
  undefined1 local_1d68 [32];
  undefined1 local_1d48 [24];
  TRefCountPtr<ITextData> local_1d30;
  undefined8 uStack_1d28;
  bool local_1d20;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_1d18;
  TAttribute<FSlateBrush_const_*> local_1d00;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1cd8;
  TSharedRef<SButton,1> local_1cc0;
  TSharedRef<SImage,1> local_1cb0;
  TSharedRef<SButton,1> local_1ca0;
  FName local_1c90;
  FName local_1c88;
  TSharedRef<SHorizontalBox,1> local_1c80;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1c70;
  undefined8 *local_1c58;
  SButton *local_1c50;
  FSharedReferencer<1> local_1c48 [4];
  undefined1 local_1c28 [32];
  undefined4 local_1c08;
  undefined1 local_1c04;
  FSlotArgumentsMixin local_1c00;
  undefined8 *local_1b70;
  SButton *local_1b68;
  FSharedReferencer<1> local_1b60 [4];
  undefined1 local_1b40 [40];
  FSlotArgumentsMixin local_1b18;
  undefined8 *local_1a88 [2];
  TReferenceControllerBase<1> *local_1a78;
  undefined1 local_1a58 [40];
  FSlotArgumentsMixin local_1a30;
  undefined8 *local_19a0 [2];
  TReferenceControllerBase<1> *local_1990;
  undefined1 local_1970 [40];
  FSlotArgumentsMixin local_1948;
  FArguments local_18b8;
  FArguments local_16b0;
  FArguments local_1158;
  FArguments local_eb0;
  FArguments local_ad0;
  FArguments local_590;
  undefined8 uStack_48;
  
  uStack_48 = 0x1428fb083;
  local_res10[0] = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IsExpanded,(SWidget *)this,&param_1->_IsExpanded,None);
  local_1ea0.ReferenceController =
       (param_1->_ExpandedChildContent).Widget.SharedReferenceCount.ReferenceController;
  local_1ea8 = (param_1->_ExpandedChildContent).Widget.Object;
  if (local_1ea0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1ea0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1ea0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ExpandedChildContent != (TSharedPtr<SWidget,1> *)&local_1ea8) {
    (this->ExpandedChildContent).Object = local_1ea8;
    local_1ea8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ExpandedChildContent).SharedReferenceCount,&local_1ea0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ea0.ReferenceController);
  local_1f08 = (FMemScope)(param_1->_CollapsedButtonContent).Widget.Object;
  if (local_1f08 == (FMemScope)SNullWidget::NullWidget.Object) {
    pFVar14 = STextBlock::FArguments::FArguments(&local_16b0);
    pTVar15 = TAttribute<FText>::TAttribute<FText>
                        ((TAttribute<FText> *)&local_1d30,&param_1->_CollapsedText);
    pFVar14 = STextBlock::FArguments::Text(pFVar14,pTVar15);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1f00,&local_res20,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1ee0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SExpandableButton.cpp"
               ,0x2b,(T0RequiredArgs *)local_res10);
    FMemScope::~FMemScope(&local_1f00);
    FLLMScope::~FLLMScope(local_res18);
    pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1ee0,&local_1e88,pFVar14);
    FVar34.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    local_1f08 = (FMemScope)pTVar16->Object;
    if (FVar34.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar34.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar34.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    bVar9 = false;
    bVar8 = true;
    FVar32.ReferenceController = local_1e98.SharedReferenceCount.ReferenceController;
    pTVar36 = FVar34.ReferenceController;
  }
  else {
    FVar32.ReferenceController =
         (param_1->_CollapsedButtonContent).Widget.SharedReferenceCount.ReferenceController;
    if (FVar32.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar32.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar32.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar9 = true;
    bVar8 = false;
    FVar34.ReferenceController = local_1e98.SharedReferenceCount.ReferenceController;
    pTVar36 = FVar32.ReferenceController;
  }
  if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar32.ReferenceController);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar34.ReferenceController);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e88.SharedReferenceCount.ReferenceController);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ee0._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    STextBlock::FArguments::~FArguments(&local_16b0);
  }
  local_1f30 = (FMemScope)(param_1->_ExpandedButtonContent).Widget.Object;
  if (local_1f30 == (FMemScope)SNullWidget::NullWidget.Object) {
    pFVar14 = STextBlock::FArguments::FArguments(&local_16b0);
    pTVar15 = TAttribute<FText>::TAttribute<FText>
                        ((TAttribute<FText> *)&local_1d30,&param_1->_ExpandedText);
    pFVar14 = STextBlock::FArguments::Text(pFVar14,pTVar15);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1f00,&local_res20,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1ee0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SExpandableButton.cpp"
               ,0x30,(T0RequiredArgs *)local_res10);
    FMemScope::~FMemScope(&local_1f00);
    FLLMScope::~FLLMScope(local_res18);
    pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1ee0,&local_1e88,pFVar14);
    FVar34.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    local_1f30 = (FMemScope)pTVar16->Object;
    if (FVar34.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar34.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar34.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar9 = true;
    bVar8 = false;
    FVar32.ReferenceController = local_1e98.SharedReferenceCount.ReferenceController;
    pTVar35 = FVar34.ReferenceController;
  }
  else {
    FVar32.ReferenceController =
         (param_1->_ExpandedButtonContent).Widget.SharedReferenceCount.ReferenceController;
    if (FVar32.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar32.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar32.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = false;
    bVar11 = false;
    bVar9 = false;
    bVar8 = true;
    FVar34.ReferenceController = local_1e98.SharedReferenceCount.ReferenceController;
    pTVar35 = FVar32.ReferenceController;
  }
  if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar32.ReferenceController);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar34.ReferenceController);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ee0._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar12) {
    STextBlock::FArguments::~FArguments(&local_16b0);
  }
  FVar17 = (FMemScope)SBorder::FArguments::FArguments(&local_eb0);
  local_1f00 = FVar17;
  pIVar18 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_1c90,"ExpandableButton.Background");
  local_1e78 = (FSlateBrush *)(*pcVar2)(pIVar18,*pFVar19,0,0);
  local_1e58 = 0;
  local_1e70 = 1;
  local_1e68 = (undefined1  [8])0x0;
  pvStack_1e60 = (void *)0x0;
  ((TAttribute<FSlateBrush_const_*> *)((longlong)FVar17 + 0x2a0))->Value = local_1e78;
  *(bool *)((longlong)FVar17 + 0x2a8) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar17 + 0x2b0),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e68);
  if (pvStack_1e60 != (void *)0x0) {
    FMemory::Free(pvStack_1e60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e68);
  pIVar18 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar18 + 0x48);
  pFVar19 = ::FName::FName(&local_1c88,"ExpandableButton.Padding");
  puVar20 = (undefined8 *)(*pcVar2)(pIVar18,*pFVar19,0,&FStyleDefaults::DefaultMargin,0);
  local_1e20 = *puVar20;
  uStack_1e18 = puVar20[1];
  local_1e10 = 1;
  local_1df8 = 0;
  local_1e08 = (undefined1  [8])0x0;
  pvStack_1e00 = (void *)0x0;
  (((TAttribute<FMargin> *)((longlong)FVar17 + 0x210))->Value).Left = (float)(int)local_1e20;
  (((TAttribute<FMargin> *)((longlong)FVar17 + 0x210))->Value).Top =
       (float)(int)((ulonglong)local_1e20 >> 0x20);
  *(undefined8 *)((longlong)FVar17 + 0x218) = uStack_1e18;
  *(bool *)((longlong)FVar17 + 0x220) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar17 + 0x228),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e08);
  if (pvStack_1e00 != (void *)0x0) {
    FMemory::Free(pvStack_1e00);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e08);
  pFVar21 = SHorizontalBox::FArguments::FArguments(&local_18b8);
  pFVar22 = ::operator_new(0x58);
  local_1f20._Widget.Object = (SHorizontalBox *)0x0;
  if (pFVar22 != (FSlot *)0x0) {
    *(undefined8 *)pFVar22 = 0;
    *(undefined8 *)&pFVar22->field_0x8 = 0;
    *(undefined8 *)&pFVar22->field_0x10 = 0;
    *(undefined8 *)&pFVar22->field_0x18 = 0;
    *(undefined8 *)&pFVar22->field_0x20 = 0;
    *(undefined8 *)&pFVar22->field_0x28 = 0;
    *(undefined8 *)&pFVar22->field_0x30 = 0;
    *(undefined8 *)&pFVar22->field_0x38 = 0;
    *(undefined8 *)&pFVar22->field_0x40 = 0;
    *(undefined8 *)&pFVar22->field_0x48 = 0;
    *(undefined8 *)&pFVar22->field_0x50 = 0;
    local_1f20._Widget.Object = (SHorizontalBox *)SHorizontalBox::FSlot::FSlot(pFVar22);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1c58,(FSlot *)&local_1f20);
  pFVar23 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1d78);
  TOptional<FSizeParam>::operator=(&local_1c00._SizeParam,pFVar23);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d48);
  if ((void *)local_1d48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d68);
  if ((void *)local_1d68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d68);
  local_1c08 = 2;
  local_1c04 = 1;
  pFVar24 = SButton::FArguments::FArguments((FArguments *)&local_16b0);
  pFVar24->_VAlign = VAlign_Center;
  pFVar24 = SButton::FArguments::OnClicked(pFVar24,&param_1->_OnExpansionClicked);
  ::FName::FName(&local_1e38,"NoBorder");
  pIVar18 = FAppStyle::Get();
  pFVar25 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FButtonStyle::TypeName,local_1e38,0,1);
  if (pFVar25 == (FButtonStyle *)0x0) {
    pFVar25 = FButtonStyle::GetDefault();
  }
  pFVar24->_ButtonStyle = pFVar25;
  local_1de0 = 1;
  local_1dc8 = 0;
  local_1df0 = 0;
  uStack_1de8 = 0;
  local_1dd8 = (undefined1  [8])0x0;
  pvStack_1dd0 = (void *)0x0;
  (pFVar24->_ContentPadding).Value.Left = 0.0;
  (pFVar24->_ContentPadding).Value.Top = 0.0;
  (pFVar24->_ContentPadding).Value.Right = 0.0;
  (pFVar24->_ContentPadding).Value.Bottom = 0.0;
  (pFVar24->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dd8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dd8);
  if (pvStack_1dd0 != (void *)0x0) {
    FMemory::Free(pvStack_1dd0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1dd8);
  if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar24->_Content).Widget.Object = (SWidget *)local_1f08;
  (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar36;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_1f48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1f20._Widget.Object = (SHorizontalBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1f08,(FName *)&local_1f20,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *)&local_1ee0,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SExpandableButton.cpp"
             ,0x3e,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_1f08);
  FLLMScope::~FLLMScope(local_1f48);
  local_1ec8 = local_1ee0._Widget.Object;
  local_1ec0.ReferenceController = local_1ee0._Widget.SharedReferenceCount.ReferenceController;
  if (local_1ee0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1ee0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1ee0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  if (&this->ToggleButtonClosed != (TSharedPtr<SWidget,1> *)&local_1ec8) {
    (this->ToggleButtonClosed).Object = (SWidget *)local_1ee0._Widget.Object;
    local_1ec8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ToggleButtonClosed).SharedReferenceCount,&local_1ec0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ec0.ReferenceController);
  pTVar26 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *)&local_1ee0,&local_1e98,
                       pFVar24);
  pTVar3 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1c50 = pTVar26->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f40.ComparisonIndex.Value = 0;
  local_1f40.Number = 0;
  FStack_1f38.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1c48,&FStack_1f38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f38.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(pFVar21,(FSlotArguments *)&local_1c58);
  pFVar22 = ::operator_new(0x58);
  pSVar27 = (SHorizontalBox *)0x0;
  if (pFVar22 != (FSlot *)0x0) {
    *(undefined8 *)pFVar22 = 0;
    *(undefined8 *)&pFVar22->field_0x8 = 0;
    *(undefined8 *)&pFVar22->field_0x10 = 0;
    *(undefined8 *)&pFVar22->field_0x18 = 0;
    *(undefined8 *)&pFVar22->field_0x20 = 0;
    *(undefined8 *)&pFVar22->field_0x28 = 0;
    *(undefined8 *)&pFVar22->field_0x30 = 0;
    *(undefined8 *)&pFVar22->field_0x38 = 0;
    *(undefined8 *)&pFVar22->field_0x40 = 0;
    *(undefined8 *)&pFVar22->field_0x48 = 0;
    *(undefined8 *)&pFVar22->field_0x50 = 0;
    pSVar27 = (SHorizontalBox *)SHorizontalBox::FSlot::FSlot(pFVar22);
  }
  local_1f20._Widget.Object = pSVar27;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1b70,(FSlot *)&local_1f20);
  pFVar23 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1d78);
  TOptional<FSizeParam>::operator=(&local_1b18._SizeParam,pFVar23);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d48);
  if ((void *)local_1d48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d68);
  if ((void *)local_1d68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d68);
  pFVar24 = SButton::FArguments::FArguments(&local_590);
  ::FName::FName(&local_1e30,"NoBorder");
  pIVar18 = FAppStyle::Get();
  pFVar25 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FButtonStyle::TypeName,local_1e30,0,1);
  if (pFVar25 == (FButtonStyle *)0x0) {
    pFVar25 = FButtonStyle::GetDefault();
  }
  pFVar24->_ButtonStyle = pFVar25;
  local_1db0 = 1;
  local_1d98 = 0;
  local_1dc0 = 0;
  uStack_1db8 = 0;
  local_1da8 = (undefined1  [8])0x0;
  pvStack_1da0 = (void *)0x0;
  (pFVar24->_ContentPadding).Value.Left = 0.0;
  (pFVar24->_ContentPadding).Value.Top = 0.0;
  (pFVar24->_ContentPadding).Value.Right = 0.0;
  (pFVar24->_ContentPadding).Value.Bottom = 0.0;
  (pFVar24->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da8);
  if (pvStack_1da0 != (void *)0x0) {
    FMemory::Free(pvStack_1da0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1da8);
  pFVar24->_VAlign = VAlign_Center;
  if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar24->_Content).Widget.Object = (SWidget *)local_1f30;
  (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar35;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_1f48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1f20._Widget.Object = (SHorizontalBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1f30,(FName *)&local_1f20,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1d90,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SExpandableButton.cpp"
             ,0x4c,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope(&local_1f30);
  FLLMScope::~FLLMScope(local_1f48);
  local_1eb8 = local_1d90._Widget.Object;
  local_1eb0.ReferenceController = local_1d90._Widget.SharedReferenceCount.ReferenceController;
  if (local_1d90._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d90._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d90._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  if (&this->ToggleButtonExpanded != (TSharedPtr<SWidget,1> *)&local_1eb8) {
    (this->ToggleButtonExpanded).Object = (SWidget *)local_1d90._Widget.Object;
    local_1eb8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ToggleButtonExpanded).SharedReferenceCount,&local_1eb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1eb0.ReferenceController);
  pTVar26 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d90,&local_1ca0,pFVar24);
  pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1b68 = pTVar26->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f40.ComparisonIndex.Value = 0;
  local_1f40.Number = 0;
  FStack_1f38.ReferenceController = pTVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1b60,&FStack_1f38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f38.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(pFVar21,(FSlotArguments *)&local_1b70);
  pFVar22 = ::operator_new(0x58);
  pSVar27 = (SHorizontalBox *)0x0;
  if (pFVar22 != (FSlot *)0x0) {
    *(undefined8 *)pFVar22 = 0;
    *(undefined8 *)&pFVar22->field_0x8 = 0;
    *(undefined8 *)&pFVar22->field_0x10 = 0;
    *(undefined8 *)&pFVar22->field_0x18 = 0;
    *(undefined8 *)&pFVar22->field_0x20 = 0;
    *(undefined8 *)&pFVar22->field_0x28 = 0;
    *(undefined8 *)&pFVar22->field_0x30 = 0;
    *(undefined8 *)&pFVar22->field_0x38 = 0;
    *(undefined8 *)&pFVar22->field_0x40 = 0;
    *(undefined8 *)&pFVar22->field_0x48 = 0;
    *(undefined8 *)&pFVar22->field_0x50 = 0;
    pSVar27 = (SHorizontalBox *)SHorizontalBox::FSlot::FSlot(pFVar22);
  }
  local_1f20._Widget.Object = pSVar27;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_19a0,(FSlot *)&local_1f20);
  pFVar28 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_19a0);
  if (local_1e50 != (undefined4 *)&pFVar28->field_0x50) {
    *(undefined4 *)&pFVar28->field_0x50 = 2;
    pFVar28->field_0x54 = 1;
  }
  this_01 = (FSlotArguments *)0x0;
  if (pFVar28 != (FSlotArguments *)0xffffffffffffffb8) {
    this_01 = pFVar28;
  }
  pFVar28 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)this_01,&(param_1->_ExpandedChildContent).Widget);
  local_1f40 = (FName)SHorizontalBox::FArguments::operator+(pFVar21,pFVar28);
  pFVar22 = ::operator_new(0x58);
  pSVar27 = (SHorizontalBox *)0x0;
  if (pFVar22 != (FSlot *)0x0) {
    *(undefined8 *)pFVar22 = 0;
    *(undefined8 *)&pFVar22->field_0x8 = 0;
    *(undefined8 *)&pFVar22->field_0x10 = 0;
    *(undefined8 *)&pFVar22->field_0x18 = 0;
    *(undefined8 *)&pFVar22->field_0x20 = 0;
    *(undefined8 *)&pFVar22->field_0x28 = 0;
    *(undefined8 *)&pFVar22->field_0x30 = 0;
    *(undefined8 *)&pFVar22->field_0x38 = 0;
    *(undefined8 *)&pFVar22->field_0x40 = 0;
    *(undefined8 *)&pFVar22->field_0x48 = 0;
    *(undefined8 *)&pFVar22->field_0x50 = 0;
    pSVar27 = (SHorizontalBox *)SHorizontalBox::FSlot::FSlot(pFVar22);
  }
  local_1f20._Widget.Object = pSVar27;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1a88,(FSlot *)&local_1f20);
  FVar17 = (FMemScope)SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_1a88)
  ;
  if (local_1e48 != (undefined4 *)((longlong)FVar17 + 0x50)) {
    *(undefined4 *)((longlong)FVar17 + 0x50) = 1;
    *(undefined1 *)((longlong)FVar17 + 0x54) = 1;
  }
  FVar33.Inner.bActive = false;
  FVar33._1_3_ = 0;
  FVar33.PrevTag = 0;
  if (FVar17 != (FMemScope)0xffffffffffffffb8) {
    FVar33 = FVar17;
  }
  puVar1 = (undefined4 *)((longlong)FVar33 + 0x48);
  if (local_1e40 != puVar1) {
    *puVar1 = 3;
    *(undefined1 *)((longlong)FVar33 + 0x4c) = 1;
  }
  local_1ef8.Inner.bActive = false;
  local_1ef8._1_3_ = 0;
  local_1ef8.PrevTag = 0;
  if (puVar1 != (undefined4 *)0x0) {
    local_1ef8 = FVar33;
  }
  pFVar24 = SButton::FArguments::FArguments(&local_ad0);
  ::FName::FName(&local_1e28,"NoBorder");
  pIVar18 = FAppStyle::Get();
  pFVar24 = SButton::FArguments::ButtonStyle(pFVar24,pIVar18,&local_1e28,(char *)0x0);
  local_1d20 = true;
  local_1d18._16_8_ = 0;
  local_1d30.Reference = (ITextData *)0x0;
  uStack_1d28._0_4_ = 0.0;
  uStack_1d28._4_4_ = 0.0;
  local_1d18._0_8_ = 0;
  local_1d18._8_8_ = 0;
  pFVar24 = SButton::FArguments::ContentPadding(pFVar24,(TAttribute<FMargin> *)&local_1d30);
  local_1f08 = (FMemScope)SButton::FArguments::OnClicked(pFVar24,&param_1->_OnCloseClicked);
  pFVar29 = SImage::FArguments::FArguments(&local_1158);
  pIVar18 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName((FName *)&local_1e88,"ExpandableButton.CloseButton");
  local_1d00.Value = (FSlateBrush *)(*pcVar2)(pIVar18,*pFVar19);
  local_1d00.bIsSet = true;
  local_1d00.Getter._16_8_ = 0;
  local_1d00.Getter._0_8_ = 0;
  local_1d00.Getter._8_8_ = 0;
  pFVar29 = SImage::FArguments::Image(pFVar29,&local_1d00);
  FLLMScope::FLLMScope(local_1f48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1f20._Widget.Object = (SHorizontalBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1f30,(FName *)&local_1f20,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1cd8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SExpandableButton.cpp"
             ,0x69,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_1f30);
  FLLMScope::~FLLMScope(local_1f48);
  pTVar30 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1cd8,&local_1cb0,pFVar29);
  FVar17 = local_1f08;
  pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_1f20._Widget.Object = (SHorizontalBox *)pTVar30->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = ((FSharedReferencer<1> *)((longlong)local_1f08 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_1f08 + 0x1f8))->Widget).Object =
       (SWidget *)local_1f20._Widget.Object;
  ((FSharedReferencer<1> *)((longlong)local_1f08 + 0x200))->ReferenceController = pTVar5;
  local_1f20._Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(local_1f48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1f20._Widget.Object = (SHorizontalBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1f30,(FName *)&local_1f20,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1c70,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SExpandableButton.cpp"
             ,100,&local_1f28);
  FMemScope::~FMemScope(&local_1f30);
  FLLMScope::~FLLMScope(local_1f48);
  this_00 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                      (&local_1c70,&this->CloseExpansionButton);
  pTVar26 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_1cc0,(FArguments *)FVar17);
  FVar17 = local_1ef8;
  pTVar6 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1ef0 = pTVar26->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1ee8.ReferenceController = pTVar6;
  if ((SButton **)((longlong)local_1ef8 + 8) != &local_1ef0) {
    *(SButton **)((longlong)local_1ef8 + 8) = local_1ef0;
    local_1ef0 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_1ef8 + 0x10),&local_1ee8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ee8.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+((FArguments *)local_1f40,(FSlotArguments *)FVar17)
  ;
  FLLMScope::FLLMScope(local_1f48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1f40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1ef8,&local_1f40,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1f20,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SExpandableButton.cpp"
             ,0x37,local_1f27);
  FMemScope::~FMemScope(&local_1ef8);
  FLLMScope::~FLLMScope(local_1f48);
  pTVar31 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1f20,&local_1c80,pFVar21);
  pTVar7 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1f40 = (FName)pTVar31->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = ((FSharedReferencer<1> *)((longlong)local_1f00 + 0x200))->ReferenceController;
  *(FName *)((longlong)local_1f00 + 0x1f8) = local_1f40;
  ((FSharedReferencer<1> *)((longlong)local_1f00 + 0x200))->ReferenceController = pTVar7;
  FStack_1f38.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SBorder::Construct((SBorder *)this,(FArguments *)local_1f00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f20._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cd8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1158);
  SButton::FArguments::~FArguments(&local_ad0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1a30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a58);
  if ((void *)local_1a58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a78);
  if (local_1a88[0] != (undefined8 *)0x0) {
    (**(code **)*local_1a88[0])(local_1a88[0],1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1948);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1970);
  if ((void *)local_1970._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1970._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1970);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1990);
  if (local_19a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_19a0[0])(local_19a0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ca0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d90._Widget.SharedReferenceCount.ReferenceController);
  SButton::FArguments::~FArguments(&local_590);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1b18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b40);
  if ((void *)local_1b40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b60[0].ReferenceController);
  if (local_1b70 != (undefined8 *)0x0) {
    (**(code **)*local_1b70)(local_1b70,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ee0._Widget.SharedReferenceCount.ReferenceController);
  SButton::FArguments::~FArguments((FArguments *)&local_16b0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1c00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c28);
  if ((void *)local_1c28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c48[0].ReferenceController);
  if (local_1c58 != (undefined8 *)0x0) {
    (**(code **)*local_1c58)(local_1c58,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_18b8._Slots.AllocatorInstance.Data,local_18b8._Slots.ArrayNum);
  if ((FSlotArguments *)local_18b8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_18b8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_18b8);
  SBorder::FArguments::~FArguments(&local_eb0);
  UpdateVisibility(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  return;
}

// GetCollapsedVisibility @ 14293e5a0

EVisibility __thiscall SExpandableButton::GetCollapsedVisibility(SExpandableButton *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Visible.Value.Value;
  if (this->IsExpanded !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetExpandedVisibility @ 142940bb0

EVisibility __thiscall SExpandableButton::GetExpandedVisibility(SExpandableButton *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->IsExpanded !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetPrivateWidgetClass @ 142946cf0

FSlateWidgetClassData * __cdecl SExpandableButton::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FAttributeEntry *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18;
  FDelegateAllocation local_58;
  FAttributeEntry local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SExpandableButton");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBorder::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      local_38[0] = Paint;
      local_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = ::FName::FName(&local_res18,10,L"IsExpanded",FNAME_Add);
      this = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                       (&local_res8,&local_48,*pFVar1,0x2e0,
                        (FInvalidateWidgetReasonAttribute *)local_38);
      local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_58.DelegateSize = 0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
                   ::_vftable_;
      }
      FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
                (this,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
                       *)&local_58);
      if (((int)uStack_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SExpandableButton::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14294c5c0

FSlateWidgetClassData * __thiscall SExpandableButton::GetWidgetClass(SExpandableButton *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FAttributeEntry *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FDelegateAllocation FStack_58;
  FAttributeEntry FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SExpandableButton");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBorder::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      auStack_38[0] = Paint;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = ::FName::FName(&FStackX_18,10,L"IsExpanded",FNAME_Add);
      this_00 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                          (&FStackX_8,&FStack_48,*pFVar1,0x2e0,
                           (FInvalidateWidgetReasonAttribute *)auStack_38);
      FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_58.DelegateSize = 0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
                   ::_vftable_;
      }
      FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
                (this_00,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
                          *)&FStack_58);
      if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SExpandableButton::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// PrivateRegisterAttributes @ 142985620

void __cdecl SExpandableButton::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  FName local_res10;
  FDelegateAllocation local_48;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,10,L"IsExpanded",FNAME_Add);
  this = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                   (param_1,&local_38,*pFVar1,0x2e0,(FInvalidateWidgetReasonAttribute *)local_28);
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (this,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                  &local_48);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// UpdateVisibility @ 1429af8a0

void __thiscall SExpandableButton::UpdateVisibility(SExpandableButton *this)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  uchar local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uchar local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uchar local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  pSVar1 = (this->ExpandedChildContent).Object;
  if (pSVar1 != (SWidget *)0x0) {
    local_88[1] = 1;
    local_88[0] = (uchar)EVisibility::Collapsed.Value.Value;
    if (this->IsExpanded !=
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      local_88[0] = (uchar)EVisibility::Visible.Value.Value;
    }
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    (**(code **)(pSVar1->_padding_ + 0x1c8))(pSVar1,local_88);
  }
  if ((this->ToggleButtonClosed).Object == (SWidget *)0x0) {
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
  pSVar1 = (this->ToggleButtonClosed).Object;
  local_68[1] = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_68[0] = (uchar)EVisibility::Visible.Value.Value;
  if (this->IsExpanded !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    local_68[0] = (uchar)EVisibility::Collapsed.Value.Value;
  }
  local_50 = 0;
  (**(code **)(pSVar1->_padding_ + 0x1c8))(pSVar1,local_68);
  if ((this->ToggleButtonExpanded).Object == (SWidget *)0x0) {
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
  pSVar1 = (this->ToggleButtonExpanded).Object;
  local_48[1] = 1;
  local_40 = 0;
  uStack_38 = 0;
  local_48[0] = (uchar)EVisibility::Collapsed.Value.Value;
  if (this->IsExpanded !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    local_48[0] = (uchar)EVisibility::Visible.Value.Value;
  }
  local_30 = 0;
  (**(code **)(pSVar1->_padding_ + 0x1c8))(pSVar1,local_48);
  if ((this->CloseExpansionButton).Object == (SWidget *)0x0) {
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
  pSVar1 = (this->CloseExpansionButton).Object;
  local_28[1] = 1;
  local_20 = 0;
  uStack_18 = 0;
  local_28[0] = (uchar)EVisibility::Collapsed.Value.Value;
  if (this->IsExpanded !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    local_28[0] = (uchar)EVisibility::Visible.Value.Value;
  }
  local_10 = 0;
  (**(code **)(pSVar1->_padding_ + 0x1c8))(pSVar1,local_28);
  return;
}

