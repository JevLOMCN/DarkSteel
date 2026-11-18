// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 10

// ~SAudioTextBox @ 14d8c0d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::~SAudioTextBox(SAudioTextBox *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueTextCommitted);
  pvVar1 = *(void **)&(this->OnValueTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->LabelBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowUnitsText).Getter);
  pvVar1 = *(void **)&(this->ShowUnitsText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShowUnitsText).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowLabelOnlyOnHover).Getter);
  pvVar1 = *(void **)&(this->ShowLabelOnlyOnHover).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShowLabelOnlyOnHover).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LabelBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UnitsText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ValueText).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14d8ed280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall SAudioTextBox::Construct(SAudioTextBox *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TOptional<ETextOverflowPolicy> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SEditableText *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SHorizontalBox *pSVar7;
  SBorder *pSVar8;
  code *pcVar9;
  undefined8 uVar10;
  EStyleColor EVar11;
  undefined2 uVar12;
  float fVar13;
  bool bVar14;
  ISlateStyle *this_00;
  FName *pFVar15;
  FAudioTextBoxStyle *pFVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  FArguments *pFVar21;
  FArguments *pFVar22;
  FSlotArguments *pFVar23;
  FSizeParam *pFVar24;
  TSharedRef<SHorizontalBox,1> *pTVar25;
  undefined ***pppuVar26;
  FSlotArguments *pFVar27;
  longlong *this_01;
  undefined1 auStackY_1918 [32];
  T0RequiredArgs local_18e8;
  T0RequiredArgs local_18e7;
  T0RequiredArgs local_18e6;
  T0RequiredArgs local_18e5;
  FLLMScope local_18e4;
  FLLMScope local_18e0;
  FLLMScope local_18dc;
  FLLMScope local_18d8;
  undefined2 local_18d4;
  undefined2 local_18d2;
  SEditableText *local_18d0;
  FSharedReferencer<1> local_18c8;
  SEditableText *local_18c0;
  FSharedReferencer<1> local_18b8;
  SWidget *local_18b0;
  TReferenceControllerBase<1> *pTStack_18a8;
  undefined8 local_18a0;
  undefined8 uStack_1898;
  undefined4 local_1890;
  undefined1 local_188c;
  undefined1 local_1888 [8];
  ForAnyElementType FStack_1880;
  ulonglong local_1878;
  undefined4 local_1870;
  undefined1 local_186c;
  undefined1 local_1868 [8];
  void *pvStack_1860;
  undefined8 local_1858;
  undefined4 local_1850;
  undefined1 local_184c;
  undefined1 local_1848 [8];
  void *pvStack_1840;
  undefined8 local_1838;
  FMemScope local_1830;
  FName local_1828;
  FMemScope local_1820;
  FName local_1818;
  FMemScope local_1810;
  FName local_1808;
  FMemScope local_1800;
  undefined4 local_17f8 [2];
  undefined4 local_17f0 [2];
  undefined4 local_17e8 [2];
  undefined4 local_17e0 [2];
  FName local_17d8;
  FName local_17d0;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_17c8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_17b0;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_1798;
  TSharedPtr<FCulture,1> local_1780;
  TAttribute<FSlateBrush_const_*> local_1770;
  FDestructionSentinel local_1748;
  FLinearColor_u_0 local_1730;
  undefined4 local_1720;
  undefined1 local_171c;
  undefined8 local_1718;
  undefined8 uStack_1710;
  undefined8 local_1708;
  FDestructionSentinel local_1700;
  longlong *local_16e8;
  FDestructionSentinel local_16e0;
  longlong *local_16c8;
  TAttribute<FText> local_16c0;
  TAttribute<FText> local_1690;
  FName local_1660;
  SEditableText *local_1658;
  TReferenceControllerBase<1> *pTStack_1650;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1648;
  TSharedRef<SEditableText,1> local_1630;
  FText local_1620;
  SBorder *local_1610;
  TReferenceControllerBase<1> *pTStack_1608;
  TSharedRef<SBorder,1> local_1600;
  TSharedRef<SHorizontalBox,1> local_15f0;
  longlong local_15e0;
  TReferenceControllerBase<1> *pTStack_15d8;
  TSharedRef<SEditableText,1> local_15d0;
  SEditableText *local_15c0;
  TReferenceControllerBase<1> *pTStack_15b8;
  FText local_15b0;
  undefined1 local_15a0 [16];
  undefined1 local_1590 [32];
  undefined1 local_1570 [24];
  undefined8 *local_1558 [2];
  TReferenceControllerBase<1> *local_1548;
  undefined1 local_1528 [40];
  FSlotArgumentsMixin local_1500;
  undefined8 *local_1470 [2];
  TReferenceControllerBase<1> *local_1460;
  undefined1 local_1440 [40];
  FSlotArgumentsMixin local_1418;
  FArguments local_1388;
  FArguments local_1180;
  FArguments local_da0;
  FArguments local_738;
  code *local_c8;
  undefined **local_b8;
  SAudioTextBox *local_b0;
  undefined ***local_a0;
  code *local_98;
  undefined **local_88;
  SAudioTextBox *local_80;
  undefined ***local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1918;
  TAttribute<bool>::operator=(&this->ShowLabelOnlyOnHover,&param_1->_ShowLabelOnlyOnHover);
  TAttribute<bool>::operator=(&this->ShowUnitsText,&param_1->_ShowUnitsText);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnValueTextCommitted,&param_1->_OnValueTextCommitted);
  this->Style = param_1->_Style;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->_LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_LabelBackgroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar10;
  EVar11 = (param_1->_LabelBackgroundColor).Value.ColorTableId;
  uVar12 = *(undefined2 *)&(param_1->_LabelBackgroundColor).Value.field_0x12;
  (this->LabelBackgroundColor).Value.ColorUseRule =
       (param_1->_LabelBackgroundColor).Value.ColorUseRule;
  (this->LabelBackgroundColor).Value.ColorTableId = EVar11;
  *(undefined2 *)&(this->LabelBackgroundColor).Value.field_0x12 = uVar12;
  (this->LabelBackgroundColor).bIsSet = (param_1->_LabelBackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LabelBackgroundColor).Getter,&(param_1->_LabelBackgroundColor).Getter);
  ::FName::FName(&local_17d8,"AudioWidgetsStyle");
  this_00 = FSlateStyleRegistry::FindSlateStyle(&local_17d8);
  if (this_00 != (ISlateStyle *)0x0) {
    pFVar15 = ::FName::FName(&local_1660,"AudioTextBox.Style");
    pFVar16 = ISlateStyle::GetWidgetStyle<FAudioTextBoxStyle>
                        (this_00,*pFVar15,(char *)0x0,(FAudioTextBoxStyle *)0x0);
    this->Style = pFVar16;
    local_18a0 = *(undefined8 *)&(pFVar16->BackgroundColor).SpecifiedColor.field0_0x0;
    uStack_1898 = *(undefined8 *)
                   ((longlong)&(pFVar16->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_1890._0_1_ = (pFVar16->BackgroundColor).ColorUseRule;
    local_1890._1_1_ = (pFVar16->BackgroundColor).ColorTableId;
    local_1890._2_2_ = *(undefined2 *)&(pFVar16->BackgroundColor).field_0x12;
    *(undefined8 *)&(this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_18a0;
    *(undefined8 *)((longlong)&(this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_1898;
    (this->LabelBackgroundColor).Value.ColorUseRule = (undefined1)local_1890;
    (this->LabelBackgroundColor).Value.ColorTableId = local_1890._1_1_;
    *(undefined2 *)&(this->LabelBackgroundColor).Value.field_0x12 = local_1890._2_2_;
    local_1878 = 0;
    local_188c = 1;
    local_1888 = (undefined1  [8])0x0;
    FStack_1880.Data = (FScriptContainerElement *)0x0;
    (this->LabelBackgroundColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelBackgroundColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1888);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1888,
               (FWriteAccessScope *)&local_1748);
    if (((int)local_1878 != 0) && (FStack_1880.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1880.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1880,0,0,0x10);
      local_1878 = local_1878 & 0xffffffff00000000;
    }
    if (local_1748.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1748.Accessor,&local_1748);
    }
    if (FStack_1880.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1880.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1888);
    pFVar17 = SEditableText::FArguments::FArguments(&local_da0);
    local_1780.Object = (FCulture *)0x0;
    local_1780.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar18 = FText::AsNumber(&local_15b0,0.0,(FNumberFormattingOptions *)0x0,&local_1780);
    FText::FText(&local_1690.Value,pFVar18);
    local_1690.bIsSet = true;
    local_1690.Getter._16_8_ = 0;
    local_1690.Getter._0_8_ = 0;
    local_1690.Getter._8_8_ = 0;
    pFVar17 = SEditableText::FArguments::Text(pFVar17,&local_1690);
    local_186c = 1;
    local_1870 = 2;
    local_1858 = 0;
    local_1868 = (undefined1  [8])0x0;
    pvStack_1860 = (void *)0x0;
    (pFVar17->_Justification).Value = Right;
    (pFVar17->_Justification).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Justification).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1868);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1868);
    if (pvStack_1860 != (void *)0x0) {
      FMemory::Free(pvStack_1860);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1868);
    TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
    operator=(&pFVar17->_OnTextCommitted,&this->OnValueTextCommitted);
    pTVar2 = &pFVar17->_OverflowPolicy;
    if ((TOptional<ETextOverflowPolicy> *)&local_18d4 != pTVar2) {
      pTVar2->TypedValue = Ellipsis;
      pTVar2->bIsSet = true;
    }
    FLLMScope::FLLMScope(&local_18e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_17d0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1830,&local_17d0,true);
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
              (&local_17c8,"SEditableText",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioTextBox.cpp"
               ,0x1a,&local_18e8);
    FMemScope::~FMemScope(&local_1830);
    FLLMScope::~FLLMScope(&local_18e4);
    if (local_17c8._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_17c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_17c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_15c0 = (this->ValueText).Object;
    pTStack_15b8 = (this->ValueText).SharedReferenceCount.ReferenceController;
    (this->ValueText).Object = local_17c8._Widget.Object;
    (this->ValueText).SharedReferenceCount.ReferenceController =
         local_17c8._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_15b8);
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_17c8,&local_15d0,pFVar17);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17c8._Widget.SharedReferenceCount.ReferenceController);
    if (local_15b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_15b0.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1780.SharedReferenceCount.ReferenceController);
    SEditableText::FArguments::~FArguments(&local_da0);
    pFVar17 = SEditableText::FArguments::FArguments(&local_738);
    local_a0 = (undefined ***)0x0;
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_1>,0,0>::_vftable_;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SAudioTextBox::Construct'::__l5::<lambda_1>,EVisibility>::Call;
    *(undefined1 *)((longlong)&pFVar17->_padding_ + 1) = 1;
    local_b0 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
               (FWriteAccessScope *)&local_1700);
    local_16e8 = &pFVar17->_padding_;
    puVar19 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_16e8);
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar20 = FDelegateHandle::GenerateNewID();
      puVar19[2] = uVar20;
      *puVar19 = &
                 ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
      ;
      puVar19[4] = local_c8;
      puVar19[9] = 0;
      if (local_c8 != (code *)0x0) {
        pppuVar26 = &local_b8;
        if (local_a0 != (undefined ***)0x0) {
          pppuVar26 = local_a0;
        }
        (*(code *)**pppuVar26)();
      }
    }
    if (local_1700.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1700.Accessor,&local_1700);
    }
    pFVar18 = FText::FromString(&local_1620,"units");
    FText::FText(&local_16c0.Value,pFVar18);
    local_16c0.bIsSet = true;
    local_16c0.Getter._16_8_ = 0;
    local_16c0.Getter._0_8_ = 0;
    local_16c0.Getter._8_8_ = 0;
    pFVar17 = SEditableText::FArguments::Text(pFVar17,&local_16c0);
    local_184c = 1;
    local_1850 = 0;
    local_1838 = 0;
    local_1848 = (undefined1  [8])0x0;
    pvStack_1840 = (void *)0x0;
    (pFVar17->_Justification).Value = Left;
    (pFVar17->_Justification).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Justification).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1848);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1848);
    if (pvStack_1840 != (void *)0x0) {
      FMemory::Free(pvStack_1840);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1848);
    pTVar2 = &pFVar17->_OverflowPolicy;
    if ((TOptional<ETextOverflowPolicy> *)&local_18d2 != pTVar2) {
      pTVar2->TypedValue = Ellipsis;
      pTVar2->bIsSet = true;
    }
    FLLMScope::FLLMScope(&local_18e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1828 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1820,&local_1828,true);
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
              (&local_1798,"SEditableText",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioTextBox.cpp"
               ,0x1f,&local_18e7);
    FMemScope::~FMemScope(&local_1820);
    FLLMScope::~FLLMScope(&local_18e0);
    if (local_1798._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1798._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1798._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_1658 = (this->UnitsText).Object;
    pTStack_1650 = (this->UnitsText).SharedReferenceCount.ReferenceController;
    (this->UnitsText).Object = local_1798._Widget.Object;
    (this->UnitsText).SharedReferenceCount.ReferenceController =
         local_1798._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1650);
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_1798,&local_1630,pFVar17);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1630.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1798._Widget.SharedReferenceCount.ReferenceController);
    if (local_1620.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1620.TextData.Reference + 0x10))();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar26 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar26 = local_a0;
      }
      (*(code *)(*pppuVar26)[2])();
    }
    SEditableText::FArguments::~FArguments(&local_738);
    pFVar21 = SBorder::FArguments::FArguments(&local_1180);
    local_1770.Value = &this->Style->BackgroundImage;
    local_1770.bIsSet = true;
    local_1770.Getter._0_8_ = 0;
    local_1770.Getter._8_8_ = 0;
    local_1770.Getter._16_8_ = 0;
    pFVar21 = SBorder::FArguments::BorderImage(pFVar21,&local_1770);
    pFVar16 = this->Style;
    local_1730._0_8_ = *(undefined8 *)&(pFVar16->BackgroundColor).SpecifiedColor.field0_0x0;
    local_1730._8_8_ =
         *(undefined8 *)((longlong)&(pFVar16->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_1720._0_1_ = (pFVar16->BackgroundColor).ColorUseRule;
    local_1720._1_1_ = (pFVar16->BackgroundColor).ColorTableId;
    local_1720._2_2_ = *(undefined2 *)&(pFVar16->BackgroundColor).field_0x12;
    local_171c = 1;
    local_1718 = 0;
    uStack_1710 = 0;
    local_1708 = 0;
    pFVar21 = SBorder::FArguments::BorderBackgroundColor
                        (pFVar21,(TAttribute<FSlateColor> *)&local_1730._s_0);
    fVar13 = __real_40000000;
    pFVar21 = SBorder::FArguments::Padding(pFVar21,__real_40000000);
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_2>,0,0>::_vftable_;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`SAudioTextBox::Construct'::__l5::<lambda_2>,EVisibility>::Call;
    *(undefined1 *)((longlong)&pFVar21->_padding_ + 1) = 1;
    local_80 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_padding_,
               (FWriteAccessScope *)&local_16e0);
    local_16c8 = &pFVar21->_padding_;
    puVar19 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_16c8);
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar20 = FDelegateHandle::GenerateNewID();
      puVar19[2] = uVar20;
      *puVar19 = &
                 ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
      ;
      puVar19[4] = local_98;
      puVar19[9] = 0;
      if (local_98 != (code *)0x0) {
        pppuVar26 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar26 = local_70;
        }
        (*(code *)**pppuVar26)();
      }
    }
    if (local_16e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_16e0.Accessor,&local_16e0);
    }
    pFVar22 = SHorizontalBox::FArguments::FArguments(&local_1388);
    pFVar23 = SHorizontalBox::Slot((FSlotArguments *)local_1470);
    this->ValueTextSlot = *(FSlot **)pFVar23;
    puVar1 = &pFVar23->field_0x48;
    if (local_17f8 != (undefined4 *)puVar1) {
      *(undefined4 *)puVar1 = 0;
      pFVar23->field_0x4c = 1;
    }
    pFVar27 = (FSlotArguments *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar27 = pFVar23;
    }
    if (local_17f0 != (undefined4 *)&pFVar27->field_0x50) {
      *(undefined4 *)&pFVar27->field_0x50 = 2;
      pFVar27->field_0x54 = 1;
    }
    pFVar23 = (FSlotArguments *)0x0;
    if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar23 = pFVar27;
    }
    if ((this->ValueText).Object == (SEditableText *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pTVar3 = (this->ValueText).SharedReferenceCount.ReferenceController;
    pSVar4 = (this->ValueText).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar4 == (SEditableText *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18d0 = pSVar4;
    local_18c8.ReferenceController = pTVar3;
    if ((SEditableText **)&pFVar23->field_0x8 != &local_18d0) {
      *(SEditableText **)&pFVar23->field_0x8 = pSVar4;
      local_18d0 = (SEditableText *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar23->field_0x10,&local_18c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18c8.ReferenceController);
    pFVar22 = SHorizontalBox::FArguments::operator+(pFVar22,pFVar23);
    pFVar23 = SHorizontalBox::Slot((FSlotArguments *)local_1558);
    pFVar24 = (FSizeParam *)FAuto::FAuto((FAuto *)local_15a0);
    TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar23->field_0x58,pFVar24);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1570);
    if ((void *)local_1570._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1570._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1570);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1590);
    if ((void *)local_1590._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1590._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1590);
    pFVar23 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar23->field_0x18,fVar13,0.0,0.0,0.0);
    puVar1 = &pFVar23->field_0x48;
    if (local_17e8 != (undefined4 *)puVar1) {
      *(undefined4 *)puVar1 = 1;
      pFVar23->field_0x4c = 1;
    }
    pFVar27 = (FSlotArguments *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar27 = pFVar23;
    }
    if (local_17e0 != (undefined4 *)&pFVar27->field_0x50) {
      *(undefined4 *)&pFVar27->field_0x50 = 2;
      pFVar27->field_0x54 = 1;
    }
    pFVar23 = (FSlotArguments *)0x0;
    if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar23 = pFVar27;
    }
    if ((this->UnitsText).Object == (SEditableText *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pTVar5 = (this->UnitsText).SharedReferenceCount.ReferenceController;
    pSVar4 = (this->UnitsText).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar4 == (SEditableText *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18c0 = pSVar4;
    local_18b8.ReferenceController = pTVar5;
    if ((SEditableText **)&pFVar23->field_0x8 != &local_18c0) {
      *(SEditableText **)&pFVar23->field_0x8 = pSVar4;
      local_18c0 = (SEditableText *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar23->field_0x10,&local_18b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18b8.ReferenceController);
    pFVar22 = SHorizontalBox::FArguments::operator+(pFVar22,pFVar23);
    FLLMScope::FLLMScope(&local_18dc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1818 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1810,&local_1818,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_1648,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioTextBox.cpp"
               ,0x31,&local_18e6);
    FMemScope::~FMemScope(&local_1810);
    FLLMScope::~FLLMScope(&local_18dc);
    pTVar25 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1648,&local_15f0,pFVar22);
    pTVar6 = (pTVar25->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar25->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18b0 = (pFVar21->_Content).Widget.Object;
    pTStack_18a8 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar21->_Content).Widget.Object = (SWidget *)pSVar7;
    (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_18a8);
    FLLMScope::FLLMScope(&local_18d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1808 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1800,&local_1808,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_17b0,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioTextBox.cpp"
               ,0x28,&local_18e5);
    FMemScope::~FMemScope(&local_1800);
    FLLMScope::~FLLMScope(&local_18d8);
    if (local_17b0._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_17b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_17b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_1610 = (this->LabelBorder).Object;
    pTStack_1608 = (this->LabelBorder).SharedReferenceCount.ReferenceController;
    (this->LabelBorder).Object = local_17b0._Widget.Object;
    (this->LabelBorder).SharedReferenceCount.ReferenceController =
         local_17b0._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1608);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=(&local_17b0,&local_1600,pFVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1600.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17b0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15f0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1648._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1500);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1528);
    if ((void *)local_1528._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1528._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1528);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1548);
    if (local_1558[0] != (undefined8 *)0x0) {
      (**(code **)*local_1558[0])(local_1558[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1418);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1440);
    if ((void *)local_1440._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1440._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1440);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1460);
    if (local_1470[0] != (undefined8 *)0x0) {
      (**(code **)*local_1470[0])(local_1470[0],1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_1388._Slots.AllocatorInstance.Data,local_1388._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1388._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1388._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1388);
    if (local_98 != (code *)0x0) {
      pppuVar26 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar26 = local_70;
      }
      (*(code *)(*pppuVar26)[2])();
    }
    SBorder::FArguments::~FArguments(&local_1180);
  }
  if ((this->LabelBorder).Object == (SBorder *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar3 = (this->LabelBorder).SharedReferenceCount.ReferenceController;
  pSVar8 = (this->LabelBorder).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar8 == (SBorder *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this_01 = &this->_padding_;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_15e0 = this->_padding_;
  pTStack_15d8 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar8;
  this->_padding_ = (longlong)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_15d8);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetLabelBackgroundColor @ 14d969a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::SetLabelBackgroundColor(SAudioTextBox *this,FSlateColor *param_1)

{
  SBorder *this_00;
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  FDestructionSentinel local_88;
  FLinearColor_u_0 local_70;
  undefined4 local_60;
  undefined1 local_5c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_60._0_1_ = param_1->ColorUseRule;
  local_60._1_1_ = param_1->ColorTableId;
  local_60._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_70._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_70._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_5c = 1;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->LabelBackgroundColor,(TAttribute<FSlateColor> *)&local_70._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_88);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if ((this->LabelBorder).Object == (SBorder *)0x0) {
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
  this_00 = (this->LabelBorder).Object;
  if (param_1->ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(param_1);
    local_40._s_0.R = (pFVar3->field0_0x0)._s_0.R;
    local_40._s_0.G = (pFVar3->field0_0x0)._s_0.G;
    local_40._s_0.B = (pFVar3->field0_0x0)._s_0.B;
    local_40._s_0.A = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
    local_40._s_0.R = (param_1->SpecifiedColor).field0_0x0._s_0.R;
    local_40._s_0.G = (param_1->SpecifiedColor).field0_0x0._s_0.G;
    local_40._s_0.B = (param_1->SpecifiedColor).field0_0x0._s_0.B;
    local_40._s_0.A = (param_1->SpecifiedColor).field0_0x0._s_0.A;
  }
  local_30 = 0;
  local_18 = 0;
  local_2c = 1;
  local_28 = 0;
  uStack_20 = 0;
  SBorder::SetBorderBackgroundColor(this_00,(TAttribute<FSlateColor> *)&local_40._s_0);
  return;
}

// SetShowLabelOnlyOnHover @ 14d96c4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::SetShowLabelOnlyOnHover(SAudioTextBox *this,bool param_1)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_18 = 0;
  local_30[1] = true;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30[0] = param_1;
  SetWidgetAttribute<bool,bool>
            ((SWidget *)this,&this->ShowLabelOnlyOnHover,(TAttribute<bool> *)local_30,Visibility);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetShowUnitsText @ 14d96c7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::SetShowUnitsText(SAudioTextBox *this,bool param_1)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  undefined1 local_c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  undefined1 local_88 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  ulonglong local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  TVector2<double>_u_0 local_18;
  
  local_c8[1] = true;
  local_b0 = 0;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = param_1;
  SetWidgetAttribute<bool,bool>
            ((SWidget *)this,&this->ShowUnitsText,(TAttribute<bool> *)local_c8,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_68);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  pSVar1 = (this->ValueText).Object;
  if (param_1) {
    if (pSVar1 == (SEditableText *)0x0) {
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
    local_a8._0_4_ = Right;
    local_90 = 0;
    local_a8[4] = true;
    local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_98.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetJustification
              ((this->ValueText).Object,(TAttribute<ETextJustify::Type> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a0,(FWriteAccessScope *)&local_50);
    if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
      local_90 = local_90 & 0xffffffff00000000;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data);
    }
    this_00 = &local_a0;
  }
  else {
    if (pSVar1 == (SEditableText *)0x0) {
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
    local_88._0_4_ = Center;
    local_70 = 0;
    local_88[4] = true;
    local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetJustification
              ((this->ValueText).Object,(TAttribute<ETextJustify::Type> *)local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_38);
    if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
      local_70 = local_70 & 0xffffffff00000000;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    this_00 = &local_80;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  local_18._s_0.X = (this->OutputRange).field0_0x0._s_0.X;
  local_18._s_0.Y = (this->OutputRange).field0_0x0._s_0.Y;
  UpdateValueTextWidth(this,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetUnitsText @ 14d96e620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::SetUnitsText(SAudioTextBox *this,FText *param_1)

{
  SEditableText *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((this->UnitsText).Object == (SEditableText *)0x0) {
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
  local_40._0_8_ = (param_1->TextData).Reference;
  this_00 = (this->UnitsText).Object;
  if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res8);
  }
  local_40._8_4_ = param_1->Flags;
  local_40[0x10] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SEditableText::SetText(this_00,(TAttribute<FText> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetUnitsTextReadOnly @ 14d96ea60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::SetUnitsTextReadOnly(SAudioTextBox *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<bool> local_28;
  
  if ((this->UnitsText).Object == (SEditableText *)0x0) {
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
  local_28.Getter._16_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  local_28.Value = param_1;
  SEditableText::SetIsReadOnly((this->UnitsText).Object,&local_28);
  return;
}

// SetValueText @ 14d96f150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::SetValueText(SAudioTextBox *this,float param_1)

{
  SEditableText *this_00;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FText *pFVar4;
  float local_res10 [6];
  FText local_78;
  FString local_68;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_res10[0] = param_1;
  if ((this->ValueText).Object == (SEditableText *)0x0) {
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
  this_00 = (this->ValueText).Object;
  pFVar3 = FVariablePrecisionNumericInterface::ToString(&NumericInterface,&local_68,local_res10);
  pFVar4 = FText::FromString(&local_78,pFVar3);
  FText::FText((FText *)local_40,pFVar4);
  local_40[0x10] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SEditableText::SetText(this_00,(TAttribute<FText> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// SetValueTextReadOnly @ 14d96f3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioTextBox::SetValueTextReadOnly(SAudioTextBox *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<bool> local_28;
  
  if ((this->ValueText).Object == (SEditableText *)0x0) {
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
  local_28.Getter._16_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  local_28.Value = param_1;
  SEditableText::SetIsReadOnly((this->ValueText).Object,&local_28);
  return;
}

// UpdateValueTextWidth @ 14d97b170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SAudioTextBox::UpdateValueTextWidth(SAudioTextBox *this,TVector2<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  FSlot *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FSlateFontMeasure *this_00;
  bool bVar11;
  FSlateApplication *pFVar12;
  FNumberFormattingOptions *pFVar13;
  FDecimalNumberFormattingRules *pFVar14;
  FTextBlockStyle *pFVar15;
  FDeprecateSlateVector2D FVar16;
  FSlateFontInfo *pFVar17;
  bool *pbVar18;
  FSlot *pFVar19;
  int iVar20;
  float fVar21;
  float in_XMM3_Da;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_res8 [16];
  FText local_res18;
  undefined1 local_248 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  FString local_228;
  FString local_218;
  TSharedRef<FSlateFontMeasure,1> local_208;
  float local_1f8;
  undefined1 local_1f4;
  undefined1 local_1f0 [8];
  void *pvStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [32];
  undefined1 local_188 [24];
  FText local_170;
  FNumberFormattingOptions local_158;
  FNumberFormattingOptions local_138;
  FSlateFontInfo local_118;
  FNumberFormattingOptions local_b8;
  FNumberFormattingOptions local_a0 [4];
  
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  (this->OutputRange).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->OutputRange).field0_0x0._s_0.Y = dVar6;
  pFVar12 = FSlateApplication::Get();
  lVar3 = *(longlong *)&pFVar12->field_0x60;
  if ((*(longlong *)(lVar3 + 8) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar3 + 8),&local_208);
  fVar23 = __real_3a83126f;
  fVar22 = __real_3f800000;
  fVar24 = (float)(this->OutputRange).field0_0x0._s_0.X;
  fVar21 = (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar21 < ___real_5f800000) {
    iVar20 = 0;
    if (fVar21 * __real_3a83126f < __real_3f800000) {
      if (fVar21 * __real_3c23d70a < __real_3f800000) {
        iVar20 = 3;
        if (__real_3f800000 <= fVar21 * __real_3dcccccd) {
          iVar20 = 2;
        }
      }
      else {
        iVar20 = 1;
      }
    }
  }
  else {
    iVar20 = 1;
  }
  pFVar13 = FNumberFormattingOptions::FNumberFormattingOptions(&local_b8);
  pFVar13->UseGrouping = false;
  pFVar13->MinimumFractionalDigits = iVar20;
  pFVar13->MaximumFractionalDigits = iVar20;
  uVar7._0_1_ = pFVar13->AlwaysSign;
  uVar7._1_1_ = pFVar13->UseGrouping;
  uVar7._2_1_ = pFVar13->IndicateNearlyInteger;
  uVar7._3_1_ = pFVar13->field_0x3;
  uVar7._4_4_ = pFVar13->RoundingMode;
  uVar8._0_4_ = pFVar13->MinimumIntegralDigits;
  uVar8._4_4_ = pFVar13->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar13->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar13->MaximumFractionalDigits;
  pFVar14 = ExpressionParser::GetLocalizedNumberFormattingRules();
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  local_158._0_8_ = uVar7;
  local_158._8_8_ = uVar8;
  local_158._16_8_ = uVar1;
  FastDecimalFormat::Internal::FractionalToString((double)fVar24,pFVar14,&local_158,&local_228);
  FText::FromString((FText *)local_1a8,&local_228);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  fVar24 = (float)(this->OutputRange).field0_0x0._s_0.Y;
  fVar21 = (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  iVar20 = 1;
  if ((((fVar21 < ___real_5f800000) && (iVar20 = 0, fVar21 * fVar23 < fVar22)) &&
      (iVar20 = 1, fVar21 * __real_3c23d70a < fVar22)) &&
     (iVar20 = 3, fVar22 <= fVar21 * __real_3dcccccd)) {
    iVar20 = 2;
  }
  pFVar13 = FNumberFormattingOptions::FNumberFormattingOptions(local_a0);
  pFVar13->UseGrouping = false;
  pFVar13->MinimumFractionalDigits = iVar20;
  pFVar13->MaximumFractionalDigits = iVar20;
  uVar9._0_1_ = pFVar13->AlwaysSign;
  uVar9._1_1_ = pFVar13->UseGrouping;
  uVar9._2_1_ = pFVar13->IndicateNearlyInteger;
  uVar9._3_1_ = pFVar13->field_0x3;
  uVar9._4_4_ = pFVar13->RoundingMode;
  uVar10._0_4_ = pFVar13->MinimumIntegralDigits;
  uVar10._4_4_ = pFVar13->MaximumIntegralDigits;
  uVar2._0_4_ = pFVar13->MinimumFractionalDigits;
  uVar2._4_4_ = pFVar13->MaximumFractionalDigits;
  pFVar14 = ExpressionParser::GetLocalizedNumberFormattingRules();
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  local_138._0_8_ = uVar9;
  local_138._8_8_ = uVar10;
  local_138._16_8_ = uVar2;
  FastDecimalFormat::Internal::FractionalToString((double)fVar24,pFVar14,&local_138,&local_218);
  FText::FromString((FText *)local_1b8,&local_218);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar15 = FTextBlockStyle::GetDefault();
  FSlateFontInfo::FSlateFontInfo(&local_118,&pFVar15->Font);
  FVar16 = FSlateFontMeasure::Measure
                     (local_208.Object,(FText *)local_res8,(FSlateFontInfo *)local_1a8,in_XMM3_Da);
  fVar22 = *(float *)FVar16;
  FVar16 = FSlateFontMeasure::Measure
                     (local_208.Object,(FText *)(local_res8 + 8),(FSlateFontInfo *)local_1b8,
                      in_XMM3_Da);
  this_00 = local_208.Object;
  fVar23 = *(float *)FVar16;
  pFVar17 = (FSlateFontInfo *)FText::FromString((FText *)(local_188 + 8),"-");
  FVar16 = FSlateFontMeasure::Measure(this_00,&local_res18,pFVar17,in_XMM3_Da);
  fVar21 = *(float *)FVar16;
  if ((longlong *)local_188._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_188._8_8_ + 0x10))();
  }
  if (fVar23 <= fVar22) {
    fVar23 = fVar22;
  }
  pbVar18 = TAttribute<bool>::Get(&this->ShowUnitsText);
  if (*pbVar18 == false) {
    fVar22 = *(float *)&(this->Style->BackgroundImage).ImageSize;
  }
  else {
    if (((this->UnitsText).Object == (SEditableText *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar17 = (FSlateFontInfo *)SEditableText::GetText((this->UnitsText).Object,&local_170);
    FVar16 = FSlateFontMeasure::Measure
                       (local_208.Object,(FText *)&local_res18.Flags,pFVar17,in_XMM3_Da);
    fVar22 = *(float *)FVar16;
    if ((TReferenceControllerBase<1> *)local_170.TextData.Reference !=
        (TReferenceControllerBase<1> *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
    fVar22 = *(float *)&(this->Style->BackgroundImage).ImageSize - fVar22;
  }
  if (fVar22 <= fVar23 + fVar21) {
    fVar22 = fVar23 + fVar21;
  }
  if (((this->ValueText).Object == (SEditableText *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_230 = 0;
  local_248[4] = true;
  local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_238.Data = (FScriptContainerElement *)0x0;
  local_248._0_4_ = fVar22;
  SEditableText::SetMinDesiredWidth((this->ValueText).Object,(TAttribute<float> *)local_248);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)(local_1a8 + 0x10));
  if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_238.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
    local_230 = local_230 & 0xffffffff00000000;
  }
  if (local_188[0] == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1a8._24_8_,
               (FDestructionSentinel *)(local_1a8 + 0x10));
  }
  if (FStack_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_238.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
  pFVar4 = this->ValueTextSlot;
  if (pFVar4 != (FSlot *)0x0) {
    local_1e0 = 0;
    local_1f4 = 1;
    local_1f0 = (undefined1  [8])0x0;
    pvStack_1e8 = (void *)0x0;
    local_1d8[4] = true;
    local_1f8 = fVar22;
    local_1d8._0_4_ = fVar22;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
    pFVar19 = (FSlot *)0x0;
    if (pFVar4 != (FSlot *)0xffffffffffffffc0) {
      pFVar19 = pFVar4;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar4->field_0x50,(ISlateAttributeContainer *)&pFVar19->field_0x20,
             (TAttribute<float> *)local_1d8,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0);
    if ((void *)local_1d0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1d0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1d0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
    if (pvStack_1e8 != (void *)0x0) {
      FMemory::Free(pvStack_1e8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.CompositeFont.SharedReferenceCount.ReferenceController);
  if ((ITextData *)local_1b8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1b8._0_8_ + 0x10))();
  }
  if ((ITextData *)local_1a8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1a8._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  return;
}

