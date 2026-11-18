// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 14

// operator() @ 142d6abe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SSearchableComboBox::OnMenuOpenChanged'::__l5::<lambda_1>::operator()
          (void *this,FSlateUser *param_1)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)this + 8),&local_18);
  local_28.Object = *(SWidget **)(*(longlong *)this + 0x440);
  local_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x448);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_1,&local_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_1,&local_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ClearSelection @ 142d74fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchableComboBox::ClearSelection(SSearchableComboBox *this)

{
  SListView<TSharedPtr<FString,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  Type *pTVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
  pSVar1 = (this->ComboListView).Object;
  pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar1->_padding_);
  if ((*pTVar4 != None) &&
     (*(int *)&(pSVar1->SelectedItems).Elements.field_0x8 !=
      *(int *)&(pSVar1->SelectedItems).Elements.field_0x34)) {
    (**(code **)(pSVar1->_padding_ + 0x30))(&pSVar1->_padding_);
    (**(code **)(pSVar1->_padding_ + 0x40))(&pSVar1->_padding_,3);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SelectedItem != (TSharedPtr<FString,1> *)&local_18) {
    (this->SelectedItem).Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SelectedItem).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Construct @ 142d86160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchableComboBox::Construct(SSearchableComboBox *this,FArguments *param_1)

{
  byte *pbVar1;
  FComboBoxStyle *pFVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  SScrollBar *pSVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TEnumAsByte<EVisibility::Private> TVar14;
  FArguments *pFVar15;
  FSharedReferencer<1> FVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  FSlot *pFVar20;
  FSizeParam *pFVar21;
  FName FVar22;
  FText *pFVar23;
  undefined8 *puVar24;
  TSharedRef<SWidget,1> *pTVar25;
  ulong64 uVar26;
  TSharedRef<SEditableTextBox,1> *pTVar27;
  FSlot *this_00;
  FArguments *pFVar28;
  SListView<TSharedPtr<FString,1>_> *pSVar29;
  SListView<TSharedPtr<FString,1>_> *pSVar30;
  FSlotArguments *pFVar31;
  FArguments *pFVar32;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar33;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBox,1> *pTVar34;
  FArguments *pFVar35;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_03;
  FArguments *pFVar36;
  FSlot *pFVar37;
  FName local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FName local_2198;
  T0RequiredArgs local_2190;
  T0RequiredArgs local_218f;
  EPopupMethod local_218e [6];
  SWidget *local_2188;
  SListView<TSharedPtr<FString,1>_> *local_2180;
  TReferenceControllerBase<1> *pTStack_2178;
  FLLMScope local_2170;
  FLLMScope local_216c;
  TReferenceControllerBase<1> *local_2168;
  undefined4 uStack_2160;
  uint uStack_215c;
  TEnumAsByte<EVisibility::Private> local_2158;
  undefined1 local_2157;
  undefined1 local_2150 [8];
  FSlot *pFStack_2148;
  int local_2140;
  undefined1 local_2138 [8];
  ForAnyElementType local_2130;
  int local_2128;
  uchar local_2120;
  undefined1 local_211f;
  undefined1 local_2118 [8];
  ForAnyElementType FStack_2110;
  int local_2108;
  float local_2100;
  undefined1 local_20fc;
  undefined1 local_20f8 [8];
  ForAnyElementType FStack_20f0;
  ulonglong local_20e8;
  undefined4 local_20e0;
  undefined1 local_20dc;
  undefined1 local_20d8 [8];
  ForAnyElementType FStack_20d0;
  ulonglong local_20c8;
  FName local_20c0;
  FArguments *local_20b8;
  code *local_20b0;
  FSharedReferencer<1> FStack_20a8;
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_20a0;
  TSharedRef<SWidget,1> local_2088;
  FText local_2078;
  bool local_2068;
  undefined1 local_2060 [8];
  ForAnyElementType FStack_2058;
  ulonglong local_2050;
  FButtonStyle *local_2048;
  TSharedPtr<SWidget,1> local_2040;
  undefined8 local_2030;
  FSharedReferencer<1> local_2028;
  SVerticalBox *local_2020;
  TReferenceControllerBase<1> *pTStack_2018;
  FSlot *local_2010;
  FMemScope local_2008;
  FSlot *local_2000;
  undefined8 local_1ff8;
  FSharedReferencer<1> FStack_1ff0;
  FMemScope local_1fe8;
  FArguments *local_1fe0;
  FComboButtonStyle *local_1fd8;
  undefined8 local_1fd0;
  undefined8 uStack_1fc8;
  undefined4 local_1fc0;
  bool local_1fbc;
  undefined1 local_1fb8 [24];
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_1fa0;
  TWeakPtr<SWidget,1> local_1f88;
  FString *local_1f78;
  TReferenceControllerBase<1> *local_1f70;
  TSharedPtr<SScrollBar,1> local_1f68;
  TSharedRef<SWidget,1> local_1f58;
  NamedSlotProperty<SComboButton::FArguments> local_1f48;
  TWeakPtr<SWidget,1> local_1f38;
  FDestructionSentinel local_1f28;
  FDestructionSentinel local_1f10;
  FDestructionSentinel local_1ef8;
  FLinearColor_u_0 local_1ee0;
  undefined1 local_1ed0;
  undefined1 local_1ecc;
  undefined8 local_1ec8;
  undefined8 uStack_1ec0;
  undefined8 local_1eb8;
  FDestructionSentinel local_1eb0;
  FDestructionSentinel local_1e98;
  FDestructionSentinel local_1e80;
  FDelegateAllocation *local_1e68;
  FDestructionSentinel local_1e60;
  FDelegateAllocation *local_1e48;
  FDestructionSentinel local_1e40;
  undefined1 *local_1e28;
  FDestructionSentinel local_1e20;
  undefined1 *local_1e08;
  FDestructionSentinel local_1e00;
  undefined1 *local_1de8;
  FDestructionSentinel local_1de0;
  undefined1 *local_1dc8;
  TAttribute<FText> local_1dc0;
  TSharedRef<SWidget,1> local_1d90;
  FReadAccessScope local_1d80;
  SEditableTextBox *local_1d68;
  TReferenceControllerBase<1> *pTStack_1d60;
  TSharedRef<SWidget,1> local_1d58;
  SScrollBar *local_1d48;
  TReferenceControllerBase<1> *pTStack_1d40;
  SWidget *local_1d38;
  TReferenceControllerBase<1> *pTStack_1d30;
  TSharedRef<SWidget,1> local_1d28;
  TSharedRef<STextBlock,1> local_1d18;
  FText local_1d08;
  TSharedRef<SEditableTextBox,1> local_1cf8;
  TSharedRef<SVerticalBox,1> local_1ce8;
  TSharedRef<SBox,1> local_1cd8;
  TSharedRef<SWidget,1> local_1cc8;
  TSharedRef<SWidget,1> local_1cb8;
  FText local_1ca8;
  TSharedRef<SWidget,1> local_1c98;
  undefined1 local_1c88 [16];
  undefined1 local_1c78 [32];
  undefined1 local_1c58 [24];
  FReadAccessScope local_1c40;
  FReadAccessScope local_1c28;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1c10;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1bf8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1be0;
  TAttribute<FMargin> local_1bc8;
  undefined1 local_1b98 [16];
  FSharedReferencer<1> local_1b88 [9];
  TOptional<FSizeParam> local_1b40;
  FSlotArguments local_1ab0;
  FArguments local_19c8;
  FArguments local_17c0;
  FArguments local_1488;
  FArguments local_1148;
  FArguments local_c68;
  FArguments local_710;
  undefined8 uStack_48;
  
  uStack_48 = 0x142d8617f;
  pFVar37 = (FSlot *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
                          ,0xb,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->ItemStyle = param_1->_ItemStyle;
  pFVar2 = param_1->_ComboBoxStyle;
  fVar11 = (pFVar2->MenuRowPadding).Top;
  fVar12 = (pFVar2->MenuRowPadding).Right;
  fVar13 = (pFVar2->MenuRowPadding).Bottom;
  (this->MenuRowPadding).Left = (pFVar2->MenuRowPadding).Left;
  (this->MenuRowPadding).Top = fVar11;
  (this->MenuRowPadding).Right = fVar12;
  (this->MenuRowPadding).Bottom = fVar13;
  local_2048 = param_1->_ButtonStyle;
  local_1fd8 = &param_1->_ComboBoxStyle->ComboButtonStyle;
  if (local_2048 == (FButtonStyle *)0x0) {
    local_2048 = &(param_1->_ComboBoxStyle->ComboButtonStyle).ButtonStyle;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  this->field_0x4b8 =
       (this->bAlwaysSelectItem ^ param_1->_bAlwaysSelectItem) & 1U ^ this->field_0x4b8;
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_2138 = (undefined1  [8])0x0;
    local_2130.Data = (FScriptContainerElement *)0x0;
    local_2128 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1c40);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar3 != (longlong *)0x0))
    {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_2138);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c40);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2138);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2138,
               (FWriteAccessScope *)&local_1ef8);
    if ((local_2128 != 0) && (local_2130.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2130.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2130,0,0,0x10);
      local_2128 = 0;
    }
    if (local_1ef8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ef8.Accessor,&local_1ef8);
    }
    if (local_2130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2130.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2138);
  }
  this->OptionsSource = param_1->_OptionsSource;
  pTVar4 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_CustomScrollbar).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d48 = (this->CustomScrollbar).Object;
  pTStack_1d40 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar5;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d40);
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::
  Append<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>
            (&this->FilteredOptionsSource,this->OptionsSource);
  local_2158.Value = (param_1->_SearchVisibility).Value.Value.Value;
  local_2157 = (param_1->_SearchVisibility).bIsSet;
  local_2150 = (undefined1  [8])0x0;
  pFStack_2148 = (FSlot *)0x0;
  local_2140 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_2150,
             &(param_1->_SearchVisibility).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2150,&local_1d80);
  if (((local_2140 == 0) || (pFStack_2148 == (FSlot *)0x0)) ||
     (cVar18 = (**(code **)(*(longlong *)pFStack_2148 + 0x38))(), cVar18 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1d80);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1d80);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2150,&local_1c28);
    pFVar20 = pFVar37;
    if (local_2140 != 0) {
      pFVar20 = pFStack_2148;
    }
    (**(code **)(*(longlong *)pFVar20 + 0x60))(pFVar20,&local_res8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c28);
    local_2158.Value = (uchar)local_res8.ComparisonIndex.Value;
  }
  TVar14.Value = local_2158.Value;
  local_20b8 = SBox::FArguments::FArguments(&local_1488);
  local_2100 = param_1->_MaxListHeight;
  local_20fc = 1;
  local_20e8 = 0;
  local_20f8 = (undefined1  [8])0x0;
  FStack_20f0.Data = (FScriptContainerElement *)0x0;
  (local_20b8->_MaxDesiredHeight).Value.Size = local_2100;
  (local_20b8->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_20b8->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20f8,
             (FWriteAccessScope *)&local_1f10);
  if (((int)local_20e8 != 0) && (FStack_20f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20f0,0,0,0x10);
    local_20e8 = local_20e8 & 0xffffffff00000000;
  }
  if (local_1f10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f10.Accessor,&local_1f10);
  }
  if (FStack_20f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20f8);
  local_2188 = (SWidget *)SVerticalBox::FArguments::FArguments(&local_19c8);
  pFVar20 = ::operator_new(0x58);
  local_2010 = pFVar37;
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_2010 = SVerticalBox::FSlot::FSlot(pFVar20);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1b98,(FSlot *)&local_2010);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1c88);
  TOptional<FSizeParam>::operator=(&local_1b40,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c58);
  if ((void *)local_1c58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c78);
  if ((void *)local_1c78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c78);
  FVar22 = (FName)SEditableTextBox::FArguments::FArguments(&local_710);
  local_2198 = FVar22;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_1d08,L"SearchableComboBox",L"Search",L"Search");
  FText::FText(&local_2078,pFVar23);
  local_2068 = true;
  local_2050 = 0;
  local_2060 = (undefined1  [8])0x0;
  FStack_2058.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)((longlong)FVar22 + 0x230),&local_2078);
  *(bool *)((longlong)FVar22 + 0x240) = local_2068;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar22 + 0x248),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2060);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2060,
             (FWriteAccessScope *)&local_1f28);
  if (((int)local_2050 != 0) && (FStack_2058.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2058.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2058,0,0,0x10);
    local_2050 = local_2050 & 0xffffffff00000000;
  }
  if (local_1f28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f28.Accessor,&local_1f28);
  }
  if (FStack_2058.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2058.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2060);
  if (local_2078.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2078.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar22 + 0x508),
             (FWriteAccessScope *)&local_1e80);
  local_1e68 = (FDelegateAllocation *)((longlong)FVar22 + 0x510);
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,local_1e68);
  FVar22 = local_res8;
  if (puVar24 != (undefined8 *)0x0) {
    uStack_215c = local_2088.SharedReferenceCount.ReferenceController._4_4_;
    local_2168 = (TReferenceControllerBase<1> *)OnSearchTextChanged;
    uStack_2160 = 0;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d58);
    FVar22 = (FName)(pTVar25->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar25->Object;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
    }
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchableComboBox___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = pSVar6;
    *(FName *)(puVar24 + 4) = FVar22;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 0xc) + 1);
      UNLOCK();
    }
    pFVar37 = (FSlot *)&DAT_00000007;
    puVar24[5] = local_2168;
    puVar24[6] = CONCAT44(uStack_215c,uStack_2160);
  }
  if (((ulonglong)pFVar37 & 4) != 0) {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (((ulonglong)pFVar37 & 2) != 0) {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (((ulonglong)pFVar37 & 1) != 0) {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d58.SharedReferenceCount.ReferenceController);
  }
  if (local_1e80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e80.Accessor,&local_1e80);
  }
  FVar22 = local_2198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             ((longlong)local_2198 + 0x520),(FWriteAccessScope *)&local_1e60);
  local_1e48 = (FDelegateAllocation *)((longlong)FVar22 + 0x528);
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,local_1e48);
  FVar22 = local_res8;
  if (puVar24 != (undefined8 *)0x0) {
    uStack_215c = local_2088.SharedReferenceCount.ReferenceController._4_4_;
    local_2168 = (TReferenceControllerBase<1> *)OnSearchTextCommitted;
    uStack_2160 = 0;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1c98);
    FVar22 = (FName)(pTVar25->SharedReferenceCount).ReferenceController;
    local_20c0 = (FName)pTVar25->Object;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
    }
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 | 0x38);
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchableComboBox___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar24 + 3) = local_20c0;
    *(FName *)(puVar24 + 4) = FVar22;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 0xc) + 1);
      UNLOCK();
    }
    puVar24[5] = local_2168;
    puVar24[6] = CONCAT44(uStack_215c,uStack_2160);
  }
  if (((ulonglong)pFVar37 & 0x20) != 0) {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (((ulonglong)pFVar37 & 0x10) != 0) {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (((ulonglong)pFVar37 & 8) != 0) {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c98.SharedReferenceCount.ReferenceController);
  }
  if (local_1e60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e60.Accessor,&local_1e60);
  }
  local_2120 = local_2158.Value;
  pFVar20 = (FSlot *)0x0;
  local_211f = local_2157;
  local_2118 = (undefined1  [8])0x0;
  FStack_2110.Data = (FScriptContainerElement *)0x0;
  local_2108 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_2118,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_2150);
  FVar22 = local_2198;
  *(uchar *)((longlong)local_2198 + 0x88) = local_2120;
  *(undefined1 *)((longlong)local_2198 + 0x89) = local_211f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)local_2198 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2118,
             (FWriteAccessScope *)&local_1eb0);
  if ((local_2108 != 0) && (FStack_2110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2110,0,0,0x10);
    local_2108 = 0;
  }
  if (local_1eb0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1eb0.Accessor,&local_1eb0);
  }
  if (FStack_2110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2118);
  FLLMScope::FLLMScope(&local_2170,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_20c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2008,&local_20c0,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_1fa0,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
             ,0x2a,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_2008);
  FLLMScope::~FLLMScope(&local_2170);
  if (local_1fa0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1fa0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1fa0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1d68 = (this->SearchField).Object;
  pTStack_1d60 = (this->SearchField).SharedReferenceCount.ReferenceController;
  (this->SearchField).Object = local_1fa0._Widget.Object;
  (this->SearchField).SharedReferenceCount.ReferenceController =
       local_1fa0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d60);
  pTVar27 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1fa0,&local_1cf8,(FArguments *)FVar22);
  local_1b98._8_8_ = pTVar27->Object;
  local_2168 = (pTVar27->SharedReferenceCount).ReferenceController;
  if (local_2168 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2168->SharedReferenceCount = (atomic<int>)((int)local_2168->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_2168->SharedReferenceCount = (atomic<int>)((int)local_2168->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2030 = 0;
  local_2028.ReferenceController = local_2168;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1b98 + 0x10),&local_2028);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2028.ReferenceController);
  local_1fe0 = SVerticalBox::FArguments::operator+
                         ((FArguments *)local_2188,(FSlotArguments *)local_1b98);
  this_00 = ::operator_new(0x58);
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
    pFVar20 = SVerticalBox::FSlot::FSlot(this_00);
  }
  local_2000 = pFVar20;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_1ab0,(FSlot *)&local_2000);
  pFVar28 = SListView<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_1148);
  local_1ff8 = 0;
  FStack_1ff0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar28->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar28->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0
  ;
  if (&pFVar28->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *)&local_1ff8)
  {
    (pFVar28->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar28->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_1ff0)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1ff0.ReferenceController);
  pFVar28->_ListItemsSource_ArrayPointer = &this->FilteredOptionsSource;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar28->_OnGenerateRow,
             (FWriteAccessScope *)&local_1de0);
  local_1dc8 = &(pFVar28->_OnGenerateRow).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1dc8);
  FVar22 = local_res8;
  if (puVar24 != (undefined8 *)0x0) {
    local_2180 = (SListView<TSharedPtr<FString,1>_> *)GenerateMenuItemRow;
    pTStack_2178 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_2088.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d90);
    FVar22 = (FName)(pTVar25->SharedReferenceCount).ReferenceController;
    local_2188 = pTVar25->Object;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
    }
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 | 0x1c0);
    local_2198 = FVar22;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchableComboBox___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = local_2188;
    *(FName *)(puVar24 + 4) = FVar22;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 0xc) + 1);
      UNLOCK();
    }
    puVar24[5] = local_2180;
    puVar24[6] = pTStack_2178;
    FVar22 = local_2198;
  }
  if ((uint)pFVar37 >> 8 != 0) {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if ((char)pFVar37 < '\0') {
    pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (((ulonglong)pFVar37 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d90.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar17 = false;
  if (local_1de0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1de0.Accessor,&local_1de0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar28->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_1e40);
  local_1e28 = &(pFVar28->_OnSelectionChanged).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1e28);
  FVar22 = local_res8;
  if (puVar24 != (undefined8 *)0x0) {
    local_2180 = (SListView<TSharedPtr<FString,1>_> *)OnSelectionChanged_Internal;
    pTStack_2178 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_2088.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1cb8);
    FVar22 = (FName)(pTVar25->SharedReferenceCount).ReferenceController;
    local_2188 = pTVar25->Object;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
    }
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    bVar10 = true;
    bVar9 = true;
    bVar17 = true;
    local_2198 = FVar22;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchableComboBox___00__A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = local_2188;
    *(FName *)(puVar24 + 4) = FVar22;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 0xc) + 1);
      UNLOCK();
    }
    puVar24[5] = local_2180;
    puVar24[6] = pTStack_2178;
    FVar22 = local_2198;
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1cb8.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar17 = false;
  if (local_1e40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e40.Accessor,&local_1e40);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar28->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_1e20);
  local_1e08 = &(pFVar28->_OnKeyDownHandler).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1e08);
  FVar22 = local_res8;
  if (puVar24 != (undefined8 *)0x0) {
    local_2180 = (SListView<TSharedPtr<FString,1>_> *)OnKeyDownHandler;
    pTStack_2178 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_2088.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1cc8);
    FVar22 = (FName)(pTVar25->SharedReferenceCount).ReferenceController;
    local_2188 = pTVar25->Object;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
    }
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    bVar10 = true;
    bVar9 = true;
    bVar17 = true;
    local_2198 = FVar22;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchableComboBox___00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = local_2188;
    *(FName *)(puVar24 + 4) = FVar22;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 0xc) + 1);
      UNLOCK();
    }
    puVar24[5] = local_2180;
    puVar24[6] = pTStack_2178;
    FVar22 = local_2198;
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1cc8.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar17 = false;
  if (local_1e20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e20.Accessor,&local_1e20);
  }
  local_20dc = 1;
  local_20e0 = 1;
  local_20c8 = 0;
  local_20d8 = (undefined1  [8])0x0;
  FStack_20d0.Data = (FScriptContainerElement *)0x0;
  (pFVar28->_SelectionMode).Value = Single;
  (pFVar28->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20d8,
             (FWriteAccessScope *)&local_1e98);
  if (((int)local_20c8 != 0) && (FStack_20d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20d0,0,0,0x10);
    local_20c8 = local_20c8 & 0xffffffff00000000;
  }
  if (local_1e98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e98.Accessor,&local_1e98);
  }
  if (FStack_20d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20d8);
  pTVar4 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  local_1f68.Object = (param_1->_CustomScrollbar).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f68.SharedReferenceCount.ReferenceController = pTVar4;
  TSharedPtr<SScrollBar,1>::operator=(&pFVar28->_ExternalScrollbar,&local_1f68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(&local_216c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2198 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1fe8,&local_2198,true);
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_20a0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
             ,0x33,local_res18);
  FMemScope::~FMemScope(&local_1fe8);
  FLLMScope::~FLLMScope(&local_216c);
  if (local_20a0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_20a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2180 = (this->ComboListView).Object;
  pTStack_2178 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_20a0._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_20a0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2178);
  pSVar29 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&local_20a0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar29,(FSlateBaseNamedArgs *)pFVar28);
  pSVar29 = local_20a0._Widget.Object;
  SListView<TSharedPtr<FString,1>_>::Construct(local_20a0._Widget.Object,pFVar28);
  pSVar30 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&local_20a0._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar30);
  pSVar30 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&local_20a0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar30->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_20a0._Widget.Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar16.ReferenceController = local_20a0._Widget.SharedReferenceCount.ReferenceController;
  local_20a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_20a0._Widget.Object = (SListView<TSharedPtr<FString,1>_> *)0x0;
  if ((pSVar29 == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1f58.Object = (SWidget *)pSVar29;
  local_1f58.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar31 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)&local_1ab0,&local_1f58);
  pFVar32 = SVerticalBox::FArguments::operator+(local_1fe0,pFVar31);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1bf8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
                       ,0x25,local_res20);
  pTVar33 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_1ce8,pFVar32);
  pFVar15 = local_20b8;
  pTVar4 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_2020 = pTVar33->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (local_20b8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_20b8->_Content).Widget.Object = (SWidget *)local_2020;
  (local_20b8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  pTStack_2018 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this_02 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_1c10,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
                       ,0x22,&local_2190);
  pTVar34 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_02,&local_1cd8,pFVar15);
  pTVar7 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_res8 = (FName)pTVar34->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20b8 = (FArguments *)pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ce8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bf8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20a0._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_1148);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1ab0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fa0._Widget.SharedReferenceCount.ReferenceController);
  if (local_1d08.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d08.TextData.Reference + 0x10))();
  }
  SEditableTextBox::FArguments::~FArguments(&local_710);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1b98);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_19c8._Slots.AllocatorInstance.Data,local_19c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_19c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_19c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_19c8);
  SBox::FArguments::~FArguments(&local_1488);
  local_2040.Object = (param_1->_Content).Widget.Object;
  local_2040.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_2040.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2040.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2040.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar35 = STextBlock::FArguments::FArguments(&local_c68);
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_1ca8,L"SSearchableComboBox",L"ContentWarning",L"No Content Provided"
                        );
    FText::FText(&local_1dc0.Value,pFVar23);
    local_1dc0.bIsSet = true;
    local_1dc0.Getter._16_8_ = 0;
    local_1dc0.Getter._0_8_ = 0;
    local_1dc0.Getter._8_8_ = 0;
    pFVar35 = STextBlock::FArguments::Text(pFVar35,&local_1dc0);
    local_1ed0 = 0;
    local_1ecc = 1;
    local_1eb8 = 0;
    local_1ee0 = FLinearColor::Red.field0_0x0;
    local_1ec8 = 0;
    uStack_1ec0 = 0;
    pFVar35 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar35,(TAttribute<FSlateColor> *)&local_1ee0._s_0);
    this_03 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1be0,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
                         ,0x41,&local_218f);
    local_2040.Object = (SWidget *)(this_03->_Widget).Object;
    FStack_20a8.ReferenceController = (this_03->_Widget).SharedReferenceCount.ReferenceController;
    if (FStack_20a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_20a8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20a8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20b0 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_2040.SharedReferenceCount,&FStack_20a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20a8.ReferenceController);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(this_03,&local_1d18,pFVar35);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1be0._Widget.SharedReferenceCount.ReferenceController);
    if (local_1ca8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1ca8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_c68);
  }
  local_1f48.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_17c0);
  (local_1f48.OwnerDeclaration)->_ComboButtonStyle = local_1fd8;
  (local_1f48.OwnerDeclaration)->_ButtonStyle = local_2048;
  bVar19 = (param_1->_Method).bIsSet;
  if (bVar19 != false) {
    local_218e[0] = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)local_218e != &(local_1f48.OwnerDeclaration)->_Method) {
    if (bVar19 == false) {
      if (((local_1f48.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_1f48.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      ((local_1f48.OwnerDeclaration)->_Method).TypedValue = local_218e[0];
      ((local_1f48.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_1f48.SlotContent = &(local_1f48.OwnerDeclaration)->_ButtonContent;
  pTVar25 = TSharedPtr<SWidget,1>::ToSharedRef(&local_2040,&local_2088);
  pFVar36 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_1f48,pTVar25);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d38 = (pFVar36->_MenuContent).Widget.Object;
  pTStack_1d30 = (pFVar36->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_MenuContent).Widget.Object = (SWidget *)local_res8;
  (pFVar36->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d30);
  pFVar36->_HasDownArrow = param_1->_HasDownArrow;
  local_1bc8.Value.Left = (param_1->_ContentPadding).Value.Left;
  local_1bc8.Value.Top = (param_1->_ContentPadding).Value.Top;
  local_1bc8.Value.Right = (param_1->_ContentPadding).Value.Right;
  local_1bc8.Value.Bottom = (param_1->_ContentPadding).Value.Bottom;
  local_1bc8.bIsSet = (param_1->_ContentPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1bc8.Getter,&(param_1->_ContentPadding).Getter);
  pFVar36 = SComboButton::FArguments::ContentPadding(pFVar36,&local_1bc8);
  local_1fc0._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_1fc0._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_1fc0._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_1fd0 = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_1fc8 = *(undefined8 *)
                 ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_1fbc = (param_1->_ForegroundColor).bIsSet;
  local_res10 = pFVar36;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1fb8,
             &(param_1->_ForegroundColor).Getter);
  *(undefined8 *)&(pFVar36->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_1fd0;
  *(undefined8 *)((longlong)&(pFVar36->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_1fc8;
  (pFVar36->_ForegroundColor).Value.ColorUseRule = (undefined1)local_1fc0;
  (pFVar36->_ForegroundColor).Value.ColorTableId = local_1fc0._1_1_;
  *(undefined2 *)&(pFVar36->_ForegroundColor).Value.field_0x12 = local_1fc0._2_2_;
  (pFVar36->_ForegroundColor).bIsSet = local_1fbc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fb8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fb8);
  if ((void *)local_1fb8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1fb8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fb8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar36->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_1e00);
  local_1de8 = &(pFVar36->_OnMenuOpenChanged).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1de8);
  FVar22 = local_res8;
  if (puVar24 != (undefined8 *)0x0) {
    local_20b0 = OnMenuOpenChanged;
    FStack_20a8.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_2088.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d28);
    FVar22 = (FName)(pTVar25->SharedReferenceCount).ReferenceController;
    local_res8 = (FName)pTVar25->Object;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)FVar22 + 8) = *(int *)((longlong)FVar22 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)FVar22 + 8) = *(int *)((longlong)FVar22 + 8) + 1;
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar17 = true;
    *puVar24 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchableComboBox___00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar24 + 3) = local_res8;
    *(FName *)(puVar24 + 4) = FVar22;
    if (FVar22 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)FVar22 + 0xc) = *(int *)((longlong)FVar22 + 0xc) + 1;
      UNLOCK();
    }
    puVar24[5] = local_20b0;
    puVar24[6] = FStack_20a8.ReferenceController;
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d28.SharedReferenceCount.ReferenceController);
  }
  if (local_1e00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e00.Accessor,&local_1e00);
  }
  local_res10->_IsFocusable = true;
  SComboButton::Construct((SComboButton *)this,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2088.SharedReferenceCount.ReferenceController._4_4_,
                      local_2088.SharedReferenceCount.ReferenceController._0_4_));
  SComboButton::FArguments::~FArguments(&local_17c0);
  if ((TEnumAsByte<EVisibility::Private>)TVar14.Value == EVisibility::Visible.Value.Value) {
    local_1f38.Object = (SWidget *)(this->SearchField).Object;
    local_1f38.WeakReferenceCount.ReferenceController =
         (this->SearchField).SharedReferenceCount.ReferenceController;
    if (local_1f38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_1f38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_1f38);
  }
  else {
    local_1f88.Object = (SWidget *)(this->ComboListView).Object;
    local_1f88.WeakReferenceCount.ReferenceController =
         (this->ComboListView).SharedReferenceCount.ReferenceController;
    if (local_1f88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f88.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_1f88.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_1f88);
  }
  TSharedPtr<FString,1>::operator=(&this->SelectedItem,&param_1->_InitiallySelectedItem);
  if ((this->SelectedItem).Object != (FString *)0x0) {
    pSVar29 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&this->ComboListView);
    pcVar8 = *(code **)(pSVar29->_padding_ + 0x28);
    local_1f78 = (this->SelectedItem).Object;
    local_1f70 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
    if (local_1f70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1f70->SharedReferenceCount = (atomic<int>)((int)local_1f70->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar8)(&pSVar29->_padding_,&local_1f78,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2040.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_20b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2150);
  if (pFStack_2148 != (FSlot *)0x0) {
    FMemory::Free(pFStack_2148);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2150);
  return;
}

// GenerateMenuItemRow @ 142da7ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SSearchableComboBox::GenerateMenuItemRow
          (SSearchableComboBox *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *pTVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  longlong *plVar11;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res8;
  FText local_8a8;
  bool local_898;
  undefined1 local_890 [8];
  ForAnyElementType FStack_888;
  ulonglong local_880;
  FLLMScope local_878 [2];
  STextBlock *local_870;
  TReferenceControllerBase<1> *pTStack_868;
  bool local_860;
  longlong *local_858;
  FMRSWRecursiveAccessDetector *local_850;
  bool local_848;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_840;
  TReferenceControllerBase<1> *local_838;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_830;
  TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_818;
  TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> local_800;
  TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7f0;
  undefined1 local_7d8 [552];
  undefined1 local_5b0 [24];
  FArguments local_598;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
             (FReadAccessScope *)&local_858);
  if (((*(int *)&(this->OnGenerateWidget).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_858);
  pFVar5 = SComboRow<TSharedPtr<FString,1>_>::FArguments::FArguments((FArguments *)local_7d8);
  if (bVar3) {
    pFVar5->_Style = this->ItemStyle;
    local_8a8.TextData.Reference = *(ITextData **)&this->MenuRowPadding;
    local_8a8.Flags = (uint)(this->MenuRowPadding).Right;
    local_8a8._12_4_ = (this->MenuRowPadding).Bottom;
    local_898 = true;
    plVar11 = (longlong *)0x0;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    *(ITextData **)&(pFVar5->_Padding).Value = local_8a8.TextData.Reference;
    (pFVar5->_Padding).Value.Right = (float)local_8a8.Flags;
    (pFVar5->_Padding).Value.Bottom = (float)local_8a8._12_4_;
    (pFVar5->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_858);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_848 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850,(FDestructionSentinel *)&local_858)
      ;
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    pTStack_868 = (param_1->SharedReferenceCount).ReferenceController;
    local_870 = (STextBlock *)param_1->Object;
    if (pTStack_868 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_868->SharedReferenceCount = (atomic<int>)((int)pTStack_868->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (FReadAccessScope *)&local_858);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_840,&local_870);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_858);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_838 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_838->SharedReferenceCount = (atomic<int>)((int)local_838->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_840.Arg0;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = local_838;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_res8.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_818,"SComboRow<TSharedPtr<FString>>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
                        ,0xb4,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *)&local_830,
                           pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_838);
  }
  else {
    pFVar8 = STextBlock::FArguments::FArguments(&local_598);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_858,L"SlateCore",L"ComboBoxMissingOnGenerateWidgetMethod",
                        L"Please provide a .OnGenerateWidget() handler.");
    FText::FText(&local_8a8,pFVar9);
    local_898 = true;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->_Text).Value,&local_8a8);
    (pFVar8->_Text).bIsSet = local_898;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_870);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_860 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_868,(FDestructionSentinel *)&local_870);
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    if (local_8a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8a8.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_878,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_830._Widget.Object = (STextBlock *)LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_870,(FName *)&local_830,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_830,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
               ,0xbf,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_870);
    FLLMScope::~FLLMScope(local_878);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_830,(TSharedRef<STextBlock,1> *)&local_818,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_870 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_870;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_868 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_840.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f0,"SComboRow<TSharedPtr<FString>>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchableComboBox.cpp"
                        ,0xbd,&local_840);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_800,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_858 != (ITextData *)0x0) {
      (**(code **)(*local_858 + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_598);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b0);
  if ((void *)local_5b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7d8._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetSelectedItem @ 142db0a40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FString,1> * __thiscall
SSearchableComboBox::GetSelectedItem
          (SSearchableComboBox *this,TSharedPtr<FString,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->SelectedItem).Object;
  pTVar1 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// OnButtonClicked @ 142dbc0e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSearchableComboBox::OnButtonClicked(SSearchableComboBox *this,FReply *__return_storage_ptr__)

{
  SEditableTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  TSharedPtr<FString,1> *local_98;
  int local_90;
  undefined1 local_88 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  ulonglong local_60;
  TSharedPtr<FString,1> local_58;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  bVar2 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar2) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FReply *)(*pcVar1)();
        return pFVar3;
      }
    }
    plVar5 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar5 + 0xd0))(plVar5,&local_98);
    if (0 < local_90) {
      local_58.Object = local_98->Object;
      local_58.SharedReferenceCount.ReferenceController =
           (local_98->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_58,Direct);
    }
    DestructItems<TSharedPtr<FString,1>,int>(local_98,local_90);
    if (local_98 != (TSharedPtr<FString,1> *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    if ((this->SearchField).Object == (SEditableTextBox *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FReply *)(*pcVar1)();
        return pFVar3;
      }
    }
    this_00 = (this->SearchField).Object;
    pFVar4 = FText::GetEmpty();
    local_88._0_8_ = (pFVar4->TextData).Reference;
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 8))(local_88._0_8_,local_res10);
    }
    local_88._8_4_ = pFVar4->Flags;
    local_88[0x10] = true;
    local_60 = 0;
    local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetText(this_00,(TAttribute<FText> *)local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_70,(FWriteAccessScope *)&local_48);
    if (((int)local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
      local_60 = local_60 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening,
               &local_30);
    if ((*(int *)&(this->OnComboBoxOpening).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnComboBoxOpening).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
  }
  SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 142dc0620

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSearchableComboBox::OnKeyDownHandler
          (SSearchableComboBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<FString,1> *local_28;
  int local_20;
  TSharedPtr<FString,1> local_18;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar1 == EKeys::Enter.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    if (((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar3)();
      return pFVar4;
    }
    plVar5 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar5 + 0xd0))(plVar5,&local_28);
    if (0 < local_20) {
      local_18.Object = local_28->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (local_28->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_18,OnKeyPress);
      FReply::FReply(__return_storage_ptr__,true);
      DestructItems<TSharedPtr<FString,1>,int>(local_28,local_20);
      if (local_28 == (TSharedPtr<FString,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<FString,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<FString,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 142dc17b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchableComboBox::OnMenuOpenChanged(SSearchableComboBox *this,bool param_1)

{
  SListView<TSharedPtr<FString,1>_> *this_00;
  code *pcVar1;
  bool bVar2;
  FSlateApplication *this_01;
  SSearchableComboBox *local_res18 [2];
  TSharedPtr<FString,1> local_28;
  code *local_18;
  SSearchableComboBox **local_10;
  
  if (!param_1) {
    if ((this->SelectedItem).Object != (FString *)0x0) {
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
      local_28.Object = (this->SelectedItem).Object;
      this_00 = (this->ComboListView).Object;
      local_28.SharedReferenceCount.ReferenceController =
           (this->SelectedItem).SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SListView<TSharedPtr<FString,1>_>::SetSelection(this_00,&local_28,OnNavigation);
    }
    this_01 = FSlateApplication::Get();
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SSearchableComboBox::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18[0] = this;
    FSlateApplication::ForEachUser
              (this_01,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnSearchTextChanged @ 142dc9760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchableComboBox::OnSearchTextChanged(SSearchableComboBox *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->SearchText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->SearchText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->SearchText).Flags = param_1->Flags;
  RefreshOptions(this);
  return;
}

// OnSearchTextCommitted @ 142dc97d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSearchableComboBox::OnSearchTextCommitted(SSearchableComboBox *this,FText *param_1,Type param_2)

{
  SListView<TSharedPtr<FString,1>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FString,1> local_18;
  
  if ((param_2 == OnEnter) && (0 < (this->FilteredOptionsSource).ArrayNum)) {
    if (((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (this->ComboListView).Object;
    if (((this->FilteredOptionsSource).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->FilteredOptionsSource).AllocatorInstance.Data;
    local_18.Object = *(FString **)pFVar1;
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + 8);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FString,1>_>::SetSelection(this_00,&local_18,OnKeyPress);
  }
  return;
}

// OnSelectionChanged_Internal @ 142dc9b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSearchableComboBox::OnSelectionChanged_Internal
          (SSearchableComboBox *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FString,1>_> *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FString,1> local_38;
  TSharedPtr<FString,1> local_28;
  FString *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FString *)0x0) {
    if ((pFVar1 != (this->SelectedItem).Object) || (this->bAlwaysSelectItem)) {
      pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = (this->SelectedItem).Object;
      pTStack_10 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      (this->SelectedItem).Object = pFVar1;
      (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_10);
      local_38.Object = param_1->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->OnSelectionChanged,&local_38,param_2);
    }
    if (param_2 == OnNavigation) {
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
      local_28.Object = (this->SelectedItem).Object;
      this_00 = (this->ComboListView).Object;
      local_28.SharedReferenceCount.ReferenceController =
           (this->SelectedItem).SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SListView<TSharedPtr<FString,1>_>::RequestScrollIntoView(this_00,&local_28,0);
    }
    else {
      (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshOptions @ 142dd17e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchableComboBox::RefreshOptions(SSearchableComboBox *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FString,1> *pTVar4;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FString *this_00;
  ulonglong uVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  
  pTVar3 = &this->FilteredOptionsSource;
  piVar1 = &(this->FilteredOptionsSource).ArrayMax;
  pTVar4 = (TSharedPtr<FString,1> *)(pTVar3->AllocatorInstance).Data;
  piVar2 = &(this->FilteredOptionsSource).ArrayNum;
  if ((this->FilteredOptionsSource).ArrayMax < 0) {
    DestructItems<TSharedPtr<FString,1>,int>(pTVar4,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FString,1>,int>(pTVar4,*piVar2);
    *piVar2 = 0;
  }
  bVar8 = FText::IsEmpty(&this->SearchText);
  if (bVar8) {
    pTVar5 = this->OptionsSource;
    if ((pTVar3 == pTVar5) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = pTVar5->ArrayNum;
    if (iVar10 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar10,&pTVar3->AllocatorInstance,piVar2,piVar1);
      ConstructItems<TSharedPtr<FString,1>,TSharedPtr<FString,1>,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
                 (TSharedPtr<FString,1> *)(pTVar5->AllocatorInstance).Data,iVar10);
    }
  }
  else {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    this_00 = FText::ToString(&this->SearchText);
    ::FString::ParseIntoArrayWS(this_00,&local_58,(wchar_t *)0x0,true);
    pTVar5 = this->OptionsSource;
    local_res20 = pTVar5->ArrayNum;
    uVar11 = (ulonglong)(int)local_res20;
    pFVar16 = (pTVar5->AllocatorInstance).Data;
    pFVar13 = pFVar16 + uVar11 * 0x10;
    while( true ) {
      if (pTVar5->ArrayNum != (int)uVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FString,1>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      iVar10 = local_58.ArrayNum;
      if (pFVar16 == pFVar13) break;
      uVar11 = (ulonglong)local_58.ArrayNum;
      pFVar15 = local_58.AllocatorInstance.Data + uVar11 * 0x10;
      FVar14.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar11 != iVar10) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar14.Data == pFVar15) break;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = 0;
        if (*(int *)(FVar14.Data + 8) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)FVar14.Data;
          iVar9 = *(int *)(FVar14.Data + 8) + -1;
        }
        iVar9 = ::FString::Find(*(FString **)pFVar16,pwVar12,iVar9,IgnoreCase,FromStart,-1);
        if (iVar9 == -1) goto LAB_142dd1aca;
        uVar11 = local_58._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 0x10;
      }
      pFVar15 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar15 <= pFVar16) && (pFVar16 < pFVar15 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = *piVar2;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      *piVar2 = iVar10 + 1;
      pFVar15 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(longlong *)pFVar15 = *(longlong *)pFVar16;
      lVar6 = *(longlong *)(pFVar16 + 8);
      *(longlong *)(pFVar15 + 8) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
LAB_142dd1aca:
      pFVar16 = pFVar16 + 0x10;
      uVar11 = (ulonglong)local_res20;
    }
    DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  if (((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dd1b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ComboListView).Object)->_padding_ + 0x248))();
  return;
}

// SetOptionsSource @ 142dd98f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSearchableComboBox::SetOptionsSource
          (SSearchableComboBox *this,
          TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  pTVar3 = &this->FilteredOptionsSource;
  this->OptionsSource = param_1;
  piVar1 = &(this->FilteredOptionsSource).ArrayNum;
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(pTVar3->AllocatorInstance).Data,
             (this->FilteredOptionsSource).ArrayNum);
  piVar2 = &(this->FilteredOptionsSource).ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar2);
  }
  pTVar5 = this->OptionsSource;
  if (pTVar3 == pTVar5) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar4,&pTVar3->AllocatorInstance,piVar1,piVar2);
    ConstructItems<TSharedPtr<FString,1>,TSharedPtr<FString,1>,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (TSharedPtr<FString,1> *)(pTVar5->AllocatorInstance).Data,iVar4);
  }
  return;
}

// SetSelectedItem @ 142dd9ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSearchableComboBox::SetSelectedItem
          (SSearchableComboBox *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<FString,1>_> *pSVar3;
  TSharedPtr<FString,1> *pTVar4;
  TSharedPtr<FString,1> local_28;
  TSharedPtr<FString,1> local_18;
  
  pSVar3 = (this->ComboListView).Object;
  if (param_1->Object == (FString *)0x0) {
    if (pSVar3 == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
    local_18.Object = (this->SelectedItem).Object;
    pSVar3 = (this->ComboListView).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->SelectedItem).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = &local_18;
  }
  else {
    if (pSVar3 == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
    local_28.Object = param_1->Object;
    pSVar3 = (this->ComboListView).Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = &local_28;
  }
  SListView<TSharedPtr<FString,1>_>::SetSelection(pSVar3,pTVar4,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

