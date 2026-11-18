// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 17

// SSuggestionTextBox @ 1428bafc0

/* WARNING: Enum "Type": Some values do not have unique names */

SSuggestionTextBox * __thiscall SSuggestionTextBox::SSuggestionTextBox(SSuggestionTextBox *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->IgnoreUIUpdate = false;
  this->_padding_ = (longlong)&___7SSuggestionTextBox__6B_;
  (this->MenuAnchor).Object = (SMenuAnchor *)0x0;
  (this->MenuAnchor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Suggestions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Suggestions).ArrayNum = 0;
  (this->Suggestions).ArrayMax = 0;
  (this->SuggestionListView).Object = (SListView<TSharedPtr<FString,1>_> *)0x0;
  (this->SuggestionListView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TextBox).Object = (SEditableTextBox *)0x0;
  (this->TextBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->VerticalBox).Object = (SVerticalBox *)0x0;
  (this->VerticalBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnShowingHistory = 0;
  *(undefined8 *)&(this->OnShowingHistory).field_0x8 = 0;
  *(undefined4 *)&(this->OnShowingHistory).field_0x10 = 0;
  *(undefined8 *)&this->OnShowingSuggestions = 0;
  *(undefined8 *)&(this->OnShowingSuggestions).field_0x8 = 0;
  *(undefined4 *)&(this->OnShowingSuggestions).field_0x10 = 0;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextCommitted).field_0x10 = 0;
  this->SelectedSuggestion = -1;
  return this;
}

// ClearSuggestions @ 1428dbeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSuggestionTextBox::ClearSuggestions(SSuggestionTextBox *this)

{
  int *piVar1;
  SMenuAnchor *pSVar2;
  code *pcVar3;
  bool bVar4;
  
  this->SelectedSuggestion = -1;
  if ((this->MenuAnchor).Object == (SMenuAnchor *)0x0) {
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
  pSVar2 = (this->MenuAnchor).Object;
  (**(code **)(pSVar2->_padding_ + 0x250))(pSVar2,0,1,0);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->Suggestions).AllocatorInstance.Data,
             (this->Suggestions).ArrayNum);
  piVar1 = &(this->Suggestions).ArrayMax;
  (this->Suggestions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Suggestions).AllocatorInstance,0,piVar1);
  }
  return;
}

// Construct @ 1429074b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142908427) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSuggestionTextBox::Construct(SSuggestionTextBox *this,FArguments *param_1)

{
  longlong *plVar1;
  IErrorReportingWidget *pIVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SMenuAnchor *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  SEditableTextBox *pSVar11;
  bool *pbVar12;
  FSlateApplication *pFVar13;
  FArguments *pFVar14;
  TAttribute<FText> *pTVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget,1> *pTVar17;
  ulong64 uVar18;
  TSharedRef<SEditableTextBox,1> *pTVar19;
  FArguments *pFVar20;
  FSlotArguments *pFVar21;
  FName FVar22;
  FArguments *pFVar23;
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> *pTVar24;
  TSharedRef<SListView<TSharedPtr<FString,1>_>,1> *pTVar25;
  FArguments *pFVar26;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar27;
  TSharedRef<SVerticalBox,1> *pTVar28;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SBorder,1> *pTVar29;
  FArguments *pFVar30;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SMenuAnchor,1> *pTVar31;
  TReferenceControllerBase<1> *pTVar32;
  TReferenceControllerBase<1> *pTVar33;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  SEditableTextBox *local_1948;
  FSharedReferencer<1> local_1940;
  bool local_1938;
  undefined1 *local_1930;
  TSharedRef<SWidget,1> local_1928;
  undefined1 local_1918 [8];
  ForAnyElementType local_1910;
  int local_1908;
  SEditableTextBox *local_1900;
  TReferenceControllerBase<1> *pTStack_18f8;
  SWidget *local_18f0;
  T0RequiredArgs local_18e8 [8];
  FMemScope local_18e0;
  TReferenceControllerBase<1> *pTStack_18d8;
  float local_18d0;
  bool local_18cc;
  undefined1 local_18c8 [8];
  ForAnyElementType FStack_18c0;
  int local_18b8;
  bool local_18b0;
  bool local_18af;
  undefined1 local_18a8 [8];
  ForAnyElementType FStack_18a0;
  int local_1898;
  bool local_1890;
  bool local_188f;
  undefined1 local_1888 [8];
  ForAnyElementType FStack_1880;
  int local_1878;
  bool local_1870;
  bool local_186f;
  undefined1 local_1868 [8];
  ForAnyElementType FStack_1860;
  int local_1858;
  undefined4 local_1850;
  undefined1 local_184c;
  undefined1 local_1848 [8];
  ForAnyElementType FStack_1840;
  ulonglong local_1838;
  bool local_1830;
  bool local_182f;
  undefined1 local_1828 [8];
  ForAnyElementType FStack_1820;
  int local_1818;
  bool local_1810;
  bool local_180f;
  undefined1 local_1808 [8];
  ForAnyElementType FStack_1800;
  int local_17f8;
  FName local_17f0;
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined4 local_17d8;
  bool local_17d4;
  undefined1 local_17d0 [8];
  ForAnyElementType FStack_17c8;
  int local_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined4 local_17a8;
  bool local_17a4;
  undefined1 local_17a0 [8];
  ForAnyElementType FStack_1798;
  int local_1790;
  FText local_1788;
  bool local_1778;
  undefined1 local_1770 [8];
  ForAnyElementType FStack_1768;
  int local_1760;
  FArguments *local_1758;
  float local_1750;
  undefined1 local_174c;
  undefined1 local_1748 [8];
  void *pvStack_1740;
  undefined4 local_1738;
  FDestructionSentinel local_1730;
  undefined1 *local_1718;
  TSharedRef<SWidget,1> local_1710;
  TAttribute<ESelectionMode::Type> local_1700;
  TAttribute<FSlateBrush_const_*> local_16e0;
  TAttribute<FMargin> local_16b8;
  FSlateFontInfo local_1688;
  bool local_1628;
  undefined1 local_1620 [8];
  ForAnyElementType FStack_1618;
  int local_1610;
  TSharedRef<SMenuAnchor,1> local_1608;
  TSharedRef<SBorder,1> local_15f8;
  TSharedRef<SVerticalBox,1> local_15e8;
  TSharedRef<SListView<TSharedPtr<FString,1>_>,1> local_15d8;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_15c8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_15b0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1598;
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_1580;
  TAttribute<FText> local_1568;
  FSlotArguments local_1538;
  FArguments local_1450;
  FArguments local_1248;
  FArguments local_fc8;
  FArguments local_be8;
  FArguments local_708;
  undefined8 uStack_48;
  
  uStack_48 = 0x1429074cf;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  local_res8 = 0;
  this->SuggestionTextStyle = param_1->_SuggestionTextStyle;
  if (&param_1->_OnShowingHistory != &this->OnShowingHistory) {
    local_1918 = (undefined1  [8])0x0;
    local_1910.Data = (FScriptContainerElement *)0x0;
    local_1908 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnShowingHistory
               ,(FReadAccessScope *)&local_1948);
    if ((*(int *)&(param_1->_OnShowingHistory).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnShowingHistory).field_0x8, plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_1918);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_1948);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShowingHistory,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1918,
               (FWriteAccessScope *)&local_1948);
    if ((local_1908 != 0) &&
       ((TReferenceControllerBase<1> *)local_1910.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_1910.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1910,0,0,0x10);
      local_1908 = 0;
    }
    if (local_1938 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
                 (FDestructionSentinel *)&local_1948);
    }
    if ((TReferenceControllerBase<1> *)local_1910.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_1910.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1918);
  }
  if (&param_1->_OnShowingSuggestions != &this->OnShowingSuggestions) {
    local_1918 = (undefined1  [8])0x0;
    local_1910.Data = (FScriptContainerElement *)0x0;
    local_1908 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnShowingSuggestions,(FReadAccessScope *)&local_1948);
    if ((*(int *)&(param_1->_OnShowingSuggestions).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnShowingSuggestions).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_1918);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_1948);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShowingSuggestions,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1918,
               (FWriteAccessScope *)&local_1948);
    if ((local_1908 != 0) &&
       ((TReferenceControllerBase<1> *)local_1910.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_1910.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1910,0,0,0x10);
      local_1908 = 0;
    }
    if (local_1938 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
                 (FDestructionSentinel *)&local_1948);
    }
    if ((TReferenceControllerBase<1> *)local_1910.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_1910.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1918);
  }
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChanged,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommitted,&param_1->_OnTextCommitted);
  pbVar12 = TAttribute<bool>::Get(&param_1->_CommitOnSuggestionSelected);
  local_1928.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_1928.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_1928.Object = (SWidget *)OnGlobalFocusChanging;
  this->CommitsOnSuggestionSelected = *pbVar12;
  pFVar13 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddSP<SSuggestionTextBox>
            ((TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar13->FocusChangingDelegate,(SSuggestionTextBox *)&local_res8,
             (pmf_ca6bbe21 *)this);
  local_1758 = SMenuAnchor::FArguments::FArguments(&local_1248);
  local_184c = 1;
  local_1850 = 3;
  local_1838 = 0;
  local_1848 = (undefined1  [8])0x0;
  FStack_1840.Data = (FScriptContainerElement *)0x0;
  (local_1758->_Placement).Value = MenuPlacement_ComboBox;
  (local_1758->_Placement).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1758->_Placement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1848);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1848,
             (FWriteAccessScope *)&local_1948);
  if (((int)local_1838 != 0) && (FStack_1840.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1840.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1840,0,0,0x10);
    local_1838 = local_1838 & 0xffffffff00000000;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1840.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1840.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1848);
  pFVar14 = SEditableTextBox::FArguments::FArguments(&local_708);
  local_17d8._0_1_ = (param_1->_BackgroundColor).Value.ColorUseRule;
  local_17d8._1_1_ = (param_1->_BackgroundColor).Value.ColorTableId;
  local_17d8._2_2_ = *(undefined2 *)&(param_1->_BackgroundColor).Value.field_0x12;
  local_17e8 = *(undefined8 *)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_17e0 = *(undefined8 *)
                 ((longlong)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_17d4 = (param_1->_BackgroundColor).bIsSet;
  local_17c0 = 0;
  local_17d0 = (undefined1  [8])0x0;
  FStack_17c8.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_17d0,
             &(param_1->_BackgroundColor).Getter);
  *(undefined8 *)&(pFVar14->_BackgroundColor).Value.SpecifiedColor.field0_0x0 = local_17e8;
  *(undefined8 *)((longlong)&(pFVar14->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_17e0;
  (pFVar14->_BackgroundColor).Value.ColorUseRule = (undefined1)local_17d8;
  (pFVar14->_BackgroundColor).Value.ColorTableId = local_17d8._1_1_;
  *(undefined2 *)&(pFVar14->_BackgroundColor).Value.field_0x12 = local_17d8._2_2_;
  (pFVar14->_BackgroundColor).bIsSet = local_17d4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_BackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_17d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_17d0,
             (FWriteAccessScope *)&local_1948);
  if ((local_17c0 != 0) && (FStack_17c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_17c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_17c8,0,0,0x10);
    local_17c0 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_17c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_17c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17d0);
  local_1830 = (param_1->_ClearKeyboardFocusOnCommit).Value;
  local_182f = (param_1->_ClearKeyboardFocusOnCommit).bIsSet;
  local_1828 = (undefined1  [8])0x0;
  FStack_1820.Data = (FScriptContainerElement *)0x0;
  local_1818 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1828,
             &(param_1->_ClearKeyboardFocusOnCommit).Getter);
  (pFVar14->_ClearKeyboardFocusOnCommit).Value = local_1830;
  (pFVar14->_ClearKeyboardFocusOnCommit).bIsSet = local_182f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar14->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1828);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1828,
             (FWriteAccessScope *)&local_1948);
  if ((local_1818 != 0) && (FStack_1820.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1820.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1820,0,0,0x10);
    local_1818 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1820.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1820.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1828);
  pTVar32 = (param_1->_ErrorReporting).SharedReferenceCount.ReferenceController;
  pIVar2 = (param_1->_ErrorReporting).Object;
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar33 = (pFVar14->_ErrorReporting).SharedReferenceCount.ReferenceController;
  (pFVar14->_ErrorReporting).Object = pIVar2;
  (pFVar14->_ErrorReporting).SharedReferenceCount.ReferenceController = pTVar32;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  FSlateFontInfo::FSlateFontInfo(&local_1688,&(param_1->_Font).Value);
  local_1628 = (param_1->_Font).bIsSet;
  local_1610 = 0;
  local_1620 = (undefined1  [8])0x0;
  FStack_1618.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_1620,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar14->_Font).Value,&local_1688);
  (pFVar14->_Font).bIsSet = local_1628;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1620);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1620,
             (FWriteAccessScope *)&local_1948);
  if ((local_1610 != 0) && (FStack_1618.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1618.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1618,0,0,0x10);
    local_1610 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1618.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1618.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1620);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1688.CompositeFont.SharedReferenceCount.ReferenceController);
  local_17b8 = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_17b0 = *(undefined8 *)
                 ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_17a8._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_17a8._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_17a8._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_17a4 = (param_1->_ForegroundColor).bIsSet;
  local_1790 = 0;
  local_17a0 = (undefined1  [8])0x0;
  FStack_1798.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_17a0,
             &(param_1->_ForegroundColor).Getter);
  *(undefined8 *)&(pFVar14->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_17b8;
  *(undefined8 *)((longlong)&(pFVar14->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_17b0;
  (pFVar14->_ForegroundColor).Value.ColorUseRule = (undefined1)local_17a8;
  (pFVar14->_ForegroundColor).Value.ColorTableId = local_17a8._1_1_;
  *(undefined2 *)&(pFVar14->_ForegroundColor).Value.field_0x12 = local_17a8._2_2_;
  (pFVar14->_ForegroundColor).bIsSet = local_17a4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_17a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_17a0,
             (FWriteAccessScope *)&local_1948);
  if ((local_1790 != 0) && (FStack_1798.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1798.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1798,0,0,0x10);
    local_1790 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1798.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1798.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17a0);
  local_1788.TextData.Reference = (param_1->_HintText).Value.TextData.Reference;
  if (local_1788.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1788.TextData.Reference + 8))
              (local_1788.TextData.Reference,&local_18f0);
  }
  local_1788.Flags = (param_1->_HintText).Value.Flags;
  local_1778 = (param_1->_HintText).bIsSet;
  local_1770 = (undefined1  [8])0x0;
  FStack_1768.Data = (FScriptContainerElement *)0x0;
  local_1760 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1770,
             &(param_1->_HintText).Getter);
  FText::operator=(&(pFVar14->_HintText).Value,&local_1788);
  (pFVar14->_HintText).bIsSet = local_1778;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1770);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1770,
             (FWriteAccessScope *)&local_1948);
  if ((local_1760 != 0) && (FStack_1768.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1768.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1768,0,0,0x10);
    local_1760 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1768.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1768.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1770);
  if (local_1788.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1788.TextData.Reference + 0x10))();
  }
  local_1810 = (param_1->_IsCaretMovedWhenGainFocus).Value;
  local_180f = (param_1->_IsCaretMovedWhenGainFocus).bIsSet;
  local_1808 = (undefined1  [8])0x0;
  FStack_1800.Data = (FScriptContainerElement *)0x0;
  local_17f8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1808,
             &(param_1->_IsCaretMovedWhenGainFocus).Getter);
  (pFVar14->_IsCaretMovedWhenGainFocus).Value = local_1810;
  (pFVar14->_IsCaretMovedWhenGainFocus).bIsSet = local_180f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar14->_IsCaretMovedWhenGainFocus).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1808);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1808,
             (FWriteAccessScope *)&local_1948);
  if ((local_17f8 != 0) && (FStack_1800.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1800.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1800,0,0,0x10);
    local_17f8 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1800.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1800.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1808);
  local_18d0 = (param_1->_MinDesiredWidth).Value;
  local_18cc = (param_1->_MinDesiredWidth).bIsSet;
  local_18c8 = (undefined1  [8])0x0;
  FStack_18c0.Data = (FScriptContainerElement *)0x0;
  local_18b8 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_18c8,
             &(param_1->_MinDesiredWidth).Getter);
  (pFVar14->_MinDesiredWidth).Value = local_18d0;
  (pFVar14->_MinDesiredWidth).bIsSet = local_18cc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_18c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_18c8,
             (FWriteAccessScope *)&local_1948);
  if ((local_18b8 != 0) && (FStack_18c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18c0,0,0,0x10);
    local_18b8 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_18c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18c8);
  local_18b0 = (param_1->_RevertTextOnEscape).Value;
  local_18af = (param_1->_RevertTextOnEscape).bIsSet;
  local_18a8 = (undefined1  [8])0x0;
  FStack_18a0.Data = (FScriptContainerElement *)0x0;
  local_1898 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_18a8,
             &(param_1->_RevertTextOnEscape).Getter);
  (pFVar14->_RevertTextOnEscape).Value = local_18b0;
  (pFVar14->_RevertTextOnEscape).bIsSet = local_18af;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_18a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_18a8,
             (FWriteAccessScope *)&local_1948);
  if ((local_1898 != 0) && (FStack_18a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18a0,0,0,0x10);
    local_1898 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_18a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18a8);
  local_1890 = (param_1->_SelectAllTextOnCommit).Value;
  local_188f = (param_1->_SelectAllTextOnCommit).bIsSet;
  local_1888 = (undefined1  [8])0x0;
  FStack_1880.Data = (FScriptContainerElement *)0x0;
  local_1878 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1888,
             &(param_1->_SelectAllTextOnCommit).Getter);
  (pFVar14->_SelectAllTextOnCommit).Value = local_1890;
  (pFVar14->_SelectAllTextOnCommit).bIsSet = local_188f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1888);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1888,
             (FWriteAccessScope *)&local_1948);
  if ((local_1878 != 0) && (FStack_1880.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1880.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1880,0,0,0x10);
    local_1878 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1880.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1880.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1888);
  local_1870 = (param_1->_SelectAllTextWhenFocused).Value;
  local_186f = (param_1->_SelectAllTextWhenFocused).bIsSet;
  local_1868 = (undefined1  [8])0x0;
  FStack_1860.Data = (FScriptContainerElement *)0x0;
  local_1858 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1868,
             &(param_1->_SelectAllTextWhenFocused).Getter);
  (pFVar14->_SelectAllTextWhenFocused).Value = local_1870;
  (pFVar14->_SelectAllTextWhenFocused).bIsSet = local_186f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar14->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1868);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1868,
             (FWriteAccessScope *)&local_1948);
  if ((local_1858 != 0) && (FStack_1860.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1860.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1860,0,0,0x10);
    local_1858 = 0;
  }
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  if (FStack_1860.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1860.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1868);
  pFVar14->_Style = param_1->_TextStyle;
  pTVar15 = TAttribute<FText>::TAttribute<FText>(&local_1568,&param_1->_Text);
  pFVar14 = SEditableTextBox::FArguments::Text(pFVar14,pTVar15);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_1948);
  local_1930 = &(pFVar14->_OnKeyDownHandler).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1930);
  if (puVar16 == (undefined8 *)0x0) {
    pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1900 = (SEditableTextBox *)_vcall__64__flat______;
    pTStack_18f8 = (TReferenceControllerBase<1> *)((ulonglong)local_1910.Data & 0xffffffff00000000);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1928);
    pTVar32 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar17->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSuggestionTextBox___00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar3;
    puVar16[4] = pTVar32;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    puVar16[5] = local_1900;
    puVar16[6] = pTStack_18f8;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1928.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnTextChanged,
             (FWriteAccessScope *)&local_1948);
  local_1930 = &(pFVar14->_OnTextChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1930);
  if (puVar16 == (undefined8 *)0x0) {
    pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1900 = (SEditableTextBox *)HandleTextBoxTextChanged;
    pTStack_18f8 = (TReferenceControllerBase<1> *)((ulonglong)local_1910.Data & 0xffffffff00000000);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1928);
    pTVar32 = (pTVar17->SharedReferenceCount).ReferenceController;
    local_18f0 = pTVar17->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSuggestionTextBox___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = local_18f0;
    puVar16[4] = pTVar32;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar16[5] = local_1900;
    puVar16[6] = pTStack_18f8;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1928.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnTextCommitted,
             (FWriteAccessScope *)&local_1948);
  local_1930 = &(pFVar14->_OnTextCommitted).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1930);
  if (puVar16 == (undefined8 *)0x0) {
    pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1900 = (SEditableTextBox *)HandleTextBoxTextCommitted;
    pTStack_18f8 = (TReferenceControllerBase<1> *)((ulonglong)local_1910.Data & 0xffffffff00000000);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1928);
    pTVar32 = (pTVar17->SharedReferenceCount).ReferenceController;
    local_18f0 = pTVar17->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar8 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSuggestionTextBox___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = local_18f0;
    puVar16[4] = pTVar32;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar16[5] = local_1900;
    puVar16[6] = pTStack_18f8;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1928.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_1938 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1940.ReferenceController,
               (FDestructionSentinel *)&local_1948);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_18f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_17f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18e0,&local_17f0,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *)&local_1948,
             "SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
             ,0x29,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_18e0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_18f0);
  if (local_1940.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1940.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1940.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar32 = (this->TextBox).SharedReferenceCount.ReferenceController;
  (this->TextBox).Object = local_1948;
  (this->TextBox).SharedReferenceCount.ReferenceController = local_1940.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  pTVar19 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *)&local_1948,
                       (TSharedRef<SEditableTextBox,1> *)local_1918,pFVar14);
  pTVar32 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1900 = pTVar19->Object;
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar33 = (local_1758->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1758->_Content).Widget.Object = (SWidget *)local_1900;
  (local_1758->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar32;
  pTStack_18f8 = pTVar32;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  pFVar20 = SBorder::FArguments::FArguments(&local_fc8);
  local_16e0.Value = param_1->_BackgroundImage;
  local_16e0.bIsSet = true;
  local_16e0.Getter._16_8_ = 0;
  local_16e0.Getter._0_8_ = 0;
  local_16e0.Getter._8_8_ = 0;
  pFVar20 = SBorder::FArguments::BorderImage(pFVar20,&local_16e0);
  local_16b8.bIsSet = true;
  local_16b8.Getter._16_8_ = 0;
  local_16b8.Value.Left = ___xmm_40000000400000004000000040000000;
  local_16b8.Value.Top = _UNK_15076ba34;
  local_16b8.Value.Right = _UNK_15076ba38;
  local_16b8.Value.Bottom = _UNK_15076ba3c;
  local_16b8.Getter._0_8_ = 0;
  local_16b8.Getter._8_8_ = 0;
  local_1900 = (SEditableTextBox *)SBorder::FArguments::Padding(pFVar20,&local_16b8);
  local_18f0 = (SWidget *)SVerticalBox::FArguments::FArguments(&local_1450);
  pFVar21 = SVerticalBox::Slot(&local_1538);
  FVar22 = (FName)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar21);
  local_1750 = (param_1->_SuggestionListMaxHeight).Value;
  local_174c = (param_1->_SuggestionListMaxHeight).bIsSet;
  local_1748 = (undefined1  [8])0x0;
  pvStack_1740 = (void *)0x0;
  local_1738 = 0;
  local_17f0 = FVar22;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1748,
             &(param_1->_SuggestionListMaxHeight).Getter);
  *(float *)((longlong)FVar22 + 200) = local_1750;
  *(undefined1 *)((longlong)FVar22 + 0xcc) = local_174c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar22 + 0xd0),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1748);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1748);
  if (pvStack_1740 != (void *)0x0) {
    FMemory::Free(pvStack_1740);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1748);
  pFVar23 = SListView<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_be8);
  SListView<TSharedPtr<FString,1>_>::FArguments::_ResetListItemsSource(pFVar23);
  pFVar23->_ListItemsSource_ArrayPointer = &this->Suggestions;
  local_1700.Getter._16_8_ = 0;
  local_1700.Value = Single;
  local_1700.bIsSet = true;
  local_1700.Getter._0_8_ = 0;
  local_1700.Getter._8_8_ = 0;
  pFVar23 = SListView<TSharedPtr<FString,1>_>::FArguments::SelectionMode(pFVar23,&local_1700);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_OnGenerateRow,
             (FWriteAccessScope *)&local_1730);
  local_1718 = &(pFVar23->_OnGenerateRow).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1718);
  if (puVar16 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1928.Object = (SWidget *)HandleSuggestionListViewGenerateRow;
    local_1928.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)local_1910.Data & 0xffffffff00000000);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1710);
    pTVar33 = (pTVar17->SharedReferenceCount).ReferenceController;
    local_18e0 = (FMemScope)pTVar17->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSuggestionTextBox___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FMemScope *)(puVar16 + 3) = local_18e0;
    puVar16[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar16[5] = local_1928.Object;
    puVar16[6] = local_1928.SharedReferenceCount.ReferenceController;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1710.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_1730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1730.Accessor,&local_1730);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_1730);
  local_1718 = &(pFVar23->_OnSelectionChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1718);
  if (puVar16 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1928.Object = (SWidget *)HandleSuggestionListViewSelectionChanged;
    local_1928.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)local_1910.Data & 0xffffffff00000000);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1710);
    pTVar33 = (pTVar17->SharedReferenceCount).ReferenceController;
    local_18e0 = (FMemScope)pTVar17->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSuggestionTextBox___00__A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FMemScope *)(puVar16 + 3) = local_18e0;
    puVar16[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar16[5] = local_1928.Object;
    puVar16[6] = local_1928.SharedReferenceCount.ReferenceController;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1710.SharedReferenceCount.ReferenceController);
  }
  if (local_1730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1730.Accessor,&local_1730);
  }
  pTVar24 = MakeTDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_1580,"SListView< TSharedPtr<FString> >",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
                       ,0x47,local_res10);
  pTVar24 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
            Expose<SListView<TSharedPtr<FString,1>_>_>(pTVar24,&this->SuggestionListView);
  pTVar25 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_15d8,pFVar23);
  pTVar33 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_1928.Object = (SWidget *)pTVar25->Object;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1928.SharedReferenceCount.ReferenceController = pTVar33;
  pFVar21 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_17f0,&local_1928);
  pFVar26 = SVerticalBox::FArguments::operator+((FArguments *)local_18f0,pFVar21);
  pTVar27 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1598,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
                       ,0x41,local_res18);
  pTVar27 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                      (pTVar27,&this->VerticalBox);
  pTVar28 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar27,&local_15e8,pFVar26);
  pSVar11 = local_1900;
  pTVar4 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_18e0 = (FMemScope)pTVar28->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (((TAlwaysValidWidget *)&local_1900->_padding_)->Widget).SharedReferenceCount.
           ReferenceController;
  (((TAlwaysValidWidget *)&local_1900->_padding_)->Widget).Object = (SWidget *)local_18e0;
  (((TAlwaysValidWidget *)&local_1900->_padding_)->Widget).SharedReferenceCount.ReferenceController
       = pTVar4;
  pTStack_18d8 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  this_00 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_15b0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
                       ,0x3d,local_res20);
  pTVar29 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_15f8,(FArguments *)pSVar11);
  local_1928.Object = (SWidget *)pTVar29->Object;
  local_1928.SharedReferenceCount.ReferenceController =
       (pTVar29->SharedReferenceCount).ReferenceController;
  if (local_1928.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1928.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1928.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar30 = SMenuAnchor::FArguments::MenuContent(local_1758,(TSharedPtr<SWidget,1> *)&local_1928);
  this_01 = MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
                      (&local_15c8,"SMenuAnchor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
                       ,0x26,local_18e8);
  pSVar5 = (this_01->_Widget).Object;
  pTVar6 = (this_01->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this->MenuAnchor).SharedReferenceCount.ReferenceController;
  (this->MenuAnchor).Object = pSVar5;
  (this->MenuAnchor).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pTVar31 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_1608,pFVar30);
  pTVar6 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1928.Object = (SWidget *)pTVar31->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1928.SharedReferenceCount.ReferenceController = pTVar6;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_1928);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1608.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1598._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1580._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_be8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1538);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1450._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1450);
  SBorder::FArguments::~FArguments(&local_fc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1910.Data);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1940.ReferenceController);
  SEditableTextBox::FArguments::~FArguments(&local_708);
  SMenuAnchor::FArguments::~FArguments(&local_1248);
  return;
}

// FocusTextBox @ 142935d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSuggestionTextBox::FocusTextBox(SSuggestionTextBox *this)

{
  SEditableTextBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  EVisibility EVar4;
  bool bVar5;
  FSlateApplication *pFVar6;
  ForElementType<FArrangedWidget> FVar7;
  undefined1 auStack_1a8 [32];
  TSharedRef<SWidget_const_,1> local_188;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FWidgetPath::FWidgetPath(&local_178);
  pFVar6 = FSlateApplication::Get();
  EVar4 = EVisibility::Visible;
  if ((this->TextBox).Object == (SEditableTextBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->TextBox).Object;
  pTVar2 = (this->TextBox).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SEditableTextBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188.Object = (SWidget *)pSVar1;
  local_188.SharedReferenceCount.ReferenceController = pTVar2;
  FSlateApplication::GeneratePathToWidgetUnchecked(pFVar6,&local_188,&local_178,EVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar6 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar6 + 0x148))(pFVar6,&local_178,2);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar7 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar7 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar7,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetSelectedSuggestionString @ 142948920

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
SSuggestionTextBox::GetSelectedSuggestionString
          (SSuggestionTextBox *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  undefined8 *puVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_18;
  
  uVar1 = this->SelectedSuggestion;
  uVar5 = 0;
  if ((int)uVar1 < (this->Suggestions).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar7 = (this->Suggestions).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
  if (*(longlong *)pFVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  puVar2 = *(undefined8 **)pFVar7;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = *(int *)(puVar2 + 1);
  lVar8 = (longlong)local_18.Data.ArrayNum;
  _Src = (void *)*puVar2;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  ::FString::Replace(&local_18,__return_storage_ptr__,L"\t",L"",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleSuggestionListViewGenerateRow @ 14294d710

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SSuggestionTextBox::HandleSuggestionListViewGenerateRow
          (SSuggestionTextBox *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  int iVar1;
  FString *this_00;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  STextBlock *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SBox *pSVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FName FVar10;
  STableRow<TSharedPtr<FString,1>_> *pSVar11;
  bool bVar12;
  bool bVar13;
  TSharedRef<ITableRow,1> *pTVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget_const_,1> *pTVar17;
  ulong64 uVar18;
  FText *pFVar19;
  TSharedRef<STextBlock,1> *pTVar20;
  TSharedRef<SBox,1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *pTVar23;
  TReferenceControllerBase<1> *pTVar24;
  int iVar25;
  SSuggestionTextBox *pSVar26;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  TSharedRef<STableViewBase,1> *local_res20;
  FLLMScope local_da8;
  FLLMScope local_da4;
  FLLMScope local_da0 [2];
  FString local_d98;
  FName local_d88;
  FName local_d80;
  FString local_d78;
  FName local_d68;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  SWidget *local_d58;
  TReferenceControllerBase<1> *pTStack_d50;
  SWidget *local_d48;
  TReferenceControllerBase<1> *pTStack_d40;
  FString local_d38;
  FString local_d28;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_d18;
  FMemScope local_d00;
  FMemScope local_cf8;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_cf0;
  FMemScope local_ce8;
  undefined8 local_ce0;
  FSharedReferencer<1> local_cd8;
  FString local_cd0;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> local_cc0;
  FText local_cb0;
  FDestructionSentinel local_ca0;
  undefined1 *local_c88;
  TAttribute<FText> local_c80;
  TSharedRef<SWidget_const_,1> local_c50;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> local_c40;
  TSharedRef<SBox,1> local_c30;
  TSharedRef<STextBlock,1> local_c20;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_c10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_bf8;
  FArguments local_be0;
  FArguments local_8e8;
  FArguments local_5a8;
  
  bVar9 = false;
  bVar8 = false;
  bVar13 = false;
  local_res10[0] = 0;
  local_d28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d28.Data.ArrayNum = 0;
  local_d28.Data.ArrayMax = 0;
  local_d38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d38.Data.ArrayNum = 0;
  local_d38.Data.ArrayMax = 0;
  local_d98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d98.Data.ArrayNum = 0;
  local_d98.Data.ArrayMax = 0;
  local_res20 = param_2;
  if ((param_1->Object == (FString *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar14 = (TSharedRef<ITableRow,1> *)(*pcVar7)();
    return pTVar14;
  }
  this_00 = param_1->Object;
  ::FString::FString(&local_cd0,L"\t");
  bVar12 = ::FString::Split(this_00,&local_cd0,&local_d28,&local_d38);
  if (local_cd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd0.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    ::FString::ConcatFF(&local_d78,&local_d28,&local_d38);
    if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d98.Data.AllocatorInstance.Data);
    }
    local_d98.Data.AllocatorInstance.Data = local_d78.Data.AllocatorInstance.Data;
    local_d98.Data.ArrayNum = local_d78.Data.ArrayNum;
    local_d98.Data.ArrayMax = local_d78.Data.ArrayMax;
    local_d78.Data.ArrayNum = 0;
    local_d78.Data.ArrayMax = 0;
    local_d78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    if ((param_1->Object == (FString *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<ITableRow,1> *)(*pcVar7)();
      return pTVar14;
    }
    iVar1 = (param_1->Object->Data).ArrayNum;
    iVar25 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar25 = 0;
    }
    ::FString::AssignRange
              (&local_d98,(wchar_t *)(param_1->Object->Data).AllocatorInstance.Data,iVar25);
  }
  local_d80 = (FName)STableRow<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_be0);
  local_d88 = (FName)SBox::FArguments::FArguments(&local_8e8);
  pFVar15 = STextBlock::FArguments::FArguments(&local_5a8);
  (pFVar15->_HighlightText).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar15->_HighlightText).Getter,(FWriteAccessScope *)&local_ca0);
  local_c88 = &(pFVar15->_HighlightText).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_c88);
  pSVar26 = this;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_d5c = local_cb0._12_4_;
    local_d68 = (FName)HandleSuggestionListWidgetHighlightText;
    uStack_d60 = 0;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_c50);
    pSVar26 = (SSuggestionTextBox *)(pTVar17->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar17->Object;
    if (pSVar26 != (SSuggestionTextBox *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar26->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar26->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar26->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar26->_padding_ + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSuggestionTextBox___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar2;
    puVar16[4] = pSVar26;
    if (pSVar26 != (SSuggestionTextBox *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar26->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar26->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar13 = true;
    *(FName *)(puVar16 + 5) = local_d68;
    puVar16[6] = CONCAT44(uStack_d5c,uStack_d60);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar26);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar26);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c50.SharedReferenceCount.ReferenceController);
  }
  if (local_ca0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ca0.Accessor,&local_ca0);
  }
  pFVar15->_TextStyle = this->SuggestionTextStyle;
  pFVar19 = FText::FromString(&local_cb0,&local_d98);
  FText::FText(&local_c80.Value,pFVar19);
  local_c80.bIsSet = true;
  local_c80.Getter._16_8_ = 0;
  local_c80.Getter._0_8_ = 0;
  local_c80.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_c80);
  FLLMScope::FLLMScope(&local_da8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d68 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d00,&local_d68,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_bf8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
             ,0x144,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_d00);
  FLLMScope::~FLLMScope(&local_da8);
  pTVar20 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_bf8,&local_c20,pFVar15);
  FVar10 = local_d88;
  pTVar3 = (pTVar20->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar20->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d58 = (((TAlwaysValidWidget *)((longlong)local_d88 + 0x230))->Widget).Object;
  pTStack_d50 = ((FSharedReferencer<1> *)((longlong)local_d88 + 0x238))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_d88 + 0x230))->Widget).Object = (SWidget *)pSVar4;
  ((FSharedReferencer<1> *)((longlong)local_d88 + 0x238))->ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d50);
  FLLMScope::FLLMScope(&local_da4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d88 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_cf8,&local_d88,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_c10,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
             ,0x142,local_res18);
  FMemScope::~FMemScope(&local_cf8);
  FLLMScope::~FLLMScope(&local_da4);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c10,&local_c30,(FArguments *)FVar10);
  FVar10 = local_d80;
  pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar21->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d48 = (((TAlwaysValidWidget *)((longlong)local_d80 + 0x2e8))->Widget).Object;
  pTStack_d40 = ((FSharedReferencer<1> *)((longlong)local_d80 + 0x2f0))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_d80 + 0x2e8))->Widget).Object = (SWidget *)pSVar6;
  ((FSharedReferencer<1> *)((longlong)local_d80 + 0x2f0))->ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d40);
  local_cf0.Arg0 = local_res20;
  FLLMScope::FLLMScope(local_da0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ce8,&local_d80,true);
  local_d18._RequiredArgs = &local_cf0;
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  local_d18._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar22 = ::operator_new(0x408);
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    pTVar22->SharedReferenceCount = (atomic<int>)0x1;
    pTVar22->WeakReferenceCount = (atomic<int>)0x1;
    pTVar22->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFString___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FString,1>_>::STableRow<TSharedPtr<FString,1>_>
              ((STableRow<TSharedPtr<FString,1>_> *)(pTVar22 + 1));
    pTVar24 = pTVar22;
  }
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>
            (&local_cc0,(STableRow<TSharedPtr<FString,1>_> *)(pTVar24 + 1),pTVar24);
  local_cd8.ReferenceController = local_cc0.SharedReferenceCount.ReferenceController;
  if (local_cc0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_cc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_cc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d18._Widget.Object = local_cc0.Object;
  local_ce0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_d18._Widget.SharedReferenceCount,&local_cd8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cc0.SharedReferenceCount.ReferenceController);
  pSVar11 = local_d18._Widget.Object;
  if ((local_d18._Widget.Object == (STableRow<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    pTVar14 = (TSharedRef<ITableRow,1> *)(*pcVar7)();
    return pTVar14;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar11->_padding_,"STableRow<TSharedPtr<FString> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSuggestionTextBox.cpp"
             ,0x140,0x3f8);
  FMemScope::~FMemScope(&local_ce8);
  FLLMScope::~FLLMScope(local_da0);
  pTVar23 = TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(&local_d18,&local_c40,(FArguments *)FVar10);
  __return_storage_ptr__->Object = (ITableRow *)pTVar23->Object;
  pTVar24 = (pTVar23->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar24;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d18._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bf8._Widget.SharedReferenceCount.ReferenceController);
  if (local_cb0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_cb0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a8);
  SBox::FArguments::~FArguments(&local_8e8);
  STableRow<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_be0);
  if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d98.Data.AllocatorInstance.Data);
  }
  if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d38.Data.AllocatorInstance.Data);
  }
  if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleSuggestionListViewSelectionChanged @ 14294dde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSuggestionTextBox::HandleSuggestionListViewSelectionChanged
          (SSuggestionTextBox *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FText *pFVar4;
  longlong lVar5;
  uint uVar6;
  FText local_18;
  
  if ((this->IgnoreUIUpdate == false) && (uVar6 = 0, 0 < (this->Suggestions).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Suggestions).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (param_1->Object == *(FString **)((this->Suggestions).AllocatorInstance.Data + lVar5)) {
        this->SelectedSuggestion = uVar6;
        MarkActiveSuggestion(this);
        if (this->CommitsOnSuggestionSelected != false) {
          pFVar4 = FText::FromString(&local_18,param_1->Object);
          HandleTextBoxTextCommitted(this,pFVar4,OnEnter);
          if (local_18.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
          }
        }
        FocusTextBox(this);
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((int)uVar6 < (this->Suggestions).ArrayNum);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleSuggestionListWidgetHighlightText @ 14294df00

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SSuggestionTextBox::HandleSuggestionListWidgetHighlightText
          (SSuggestionTextBox *this,FText *__return_storage_ptr__)

{
  SEditableTextBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  
  if ((this->TextBox).Object == (SEditableTextBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pSVar1 = (this->TextBox).Object;
  if ((pSVar1->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  SEditableText::GetText((pSVar1->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleTextBoxTextChanged @ 14294dfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSuggestionTextBox::HandleTextBoxTextChanged(SSuggestionTextBox *this,FText *param_1)

{
  longlong *plVar1;
  SEditableTextBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  FString *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *this_00;
  ulonglong uVar10;
  uint uVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FText local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  ulonglong uVar12;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged,
             &local_58);
  if ((*(int *)&(this->OnTextChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTextChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (this->IgnoreUIUpdate == false) {
    if (((this->TextBox).Object == (SEditableTextBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar2 = (this->TextBox).Object;
    if (((pSVar2->EditableText).Object == (SEditableText *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SEditableText::GetText((pSVar2->EditableText).Object,&local_98);
    pFVar6 = FText::ToString(&local_98);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (((pFVar6->Data).ArrayNum < 2) ||
       (bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShowingSuggestions)
       , !bVar4)) {
      ClearSuggestions(this);
    }
    else {
      uVar10 = 0;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      pFVar7 = FText::ToString(param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnShowingSuggestions,&local_40);
      if ((*(int *)&(this->OnShowingSuggestions).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnShowingSuggestions).field_0x8, plVar1 != (longlong *)0x0)
         ) {
        (**(code **)(*plVar1 + 0x68))(plVar1,pFVar7);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      uVar12 = uVar10;
      if (0 < local_b8.ArrayNum) {
        do {
          uVar11 = (uint)uVar12;
          uVar5 = 0;
          if ((int)uVar11 < local_b8.ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = (pFVar6->Data).ArrayNum;
          this_00 = local_b8.AllocatorInstance.Data + uVar10;
          iVar15 = 0;
          iVar13 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar13 = iVar15;
          }
          pFVar7 = ::FString::RightChop((FString *)this_00,&local_68,iVar13);
          iVar8 = (pFVar6->Data).ArrayNum;
          iVar13 = *(int *)(this_00 + 8);
          iVar14 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar14 = iVar15;
          }
          iVar8 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar8 = iVar15;
          }
          if (iVar14 < iVar8) {
            iVar8 = iVar14;
          }
          if (0 < iVar8) {
            iVar15 = iVar8;
          }
          if (iVar13 == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)this_00;
          }
          ::FString::ConstructFromPtrSize(&local_78,pwVar9,iVar15);
          ::FString::ConcatFC(&local_88,&local_78,L"\t");
          ::FString::ConcatFF(&local_a8,&local_88,pFVar7);
          if (this_00 != (FScriptContainerElement *)&local_a8) {
            if (*(void **)this_00 != (void *)0x0) {
              FMemory::Free(*(void **)this_00);
            }
            *(FScriptContainerElement **)this_00 = local_a8.Data.AllocatorInstance.Data;
            *(int *)(this_00 + 8) = local_a8.Data.ArrayNum;
            *(int *)(this_00 + 0xc) = local_a8.Data.ArrayMax;
            local_a8.Data.ArrayNum = 0;
            local_a8.Data.ArrayMax = 0;
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          uVar10 = uVar10 + 0x10;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < local_b8.ArrayNum);
      }
      SetSuggestions(this,&local_b8,false);
      DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleTextBoxTextCommitted @ 14294e300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSuggestionTextBox::HandleTextBoxTextCommitted(SSuggestionTextBox *this,FText *param_1,Type param_2)

{
  SMenuAnchor *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->MenuAnchor).Object == (SMenuAnchor *)0x0) {
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
  pSVar1 = (this->MenuAnchor).Object;
  if (((((char)(pSVar1->MethodInUse)._padding_ == '\0') ||
       ((pSVar1->PopupMenuPtr).Object == (IMenu *)0x0)) ||
      (pTVar2 = (pSVar1->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) {
    TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->OnTextCommitted,param_1,param_2);
  }
  if ((param_2 - OnEnter & 0xfffffffd) == 0) {
    ClearSuggestions(this);
  }
  return;
}

// MarkActiveSuggestion @ 1429593d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSuggestionTextBox::MarkActiveSuggestion(SSuggestionTextBox *this)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString *pFVar3;
  SListView<TSharedPtr<FString,1>_> *pSVar4;
  ITableRow *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  SEditableTextBox *this_00;
  undefined8 *puVar7;
  void *_Src;
  code *pcVar8;
  bool bVar9;
  TSharedRef<ITableRow,1> *pTVar10;
  FText *pFVar11;
  uint uVar12;
  atomic<int> *paVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FString local_f8;
  undefined1 local_e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  TSharedPtr<FString_const_,1> local_b8;
  TSharedPtr<FString,1> local_a8;
  TSharedPtr<FString,1> local_98;
  FString local_88;
  FDestructionSentinel local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  FText local_40;
  
  uVar1 = this->SelectedSuggestion;
  this->IgnoreUIUpdate = true;
  if ((int)uVar1 < 0) {
    if (((this->SuggestionListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    SListView<TSharedPtr<FString,1>_>::ClearSelection((this->SuggestionListView).Object);
    goto LAB_142959872;
  }
  uVar12 = 0;
  if ((int)uVar1 < (this->Suggestions).ArrayNum) {
    uVar12 = ~uVar1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar14 = (this->Suggestions).AllocatorInstance.Data;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar14 + (longlong)(int)uVar1 * 0x10 + 8);
  pFVar3 = *(FString **)(pFVar14 + (longlong)(int)uVar1 * 0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((this->SuggestionListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pSVar4 = (this->SuggestionListView).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  paVar13 = &pTVar2->SharedReferenceCount;
  local_a8.Object = pFVar3;
  local_a8.SharedReferenceCount.ReferenceController = pTVar2;
  SListView<TSharedPtr<FString,1>_>::SetSelection(pSVar4,&local_a8,Direct);
  if (((this->SuggestionListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pSVar4 = (this->SuggestionListView).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  local_b8.Object = pFVar3;
  local_b8.SharedReferenceCount.ReferenceController = pTVar2;
  pTVar10 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&(pSVar4->WidgetGenerator).ItemToWidgetMap,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar10 == (TSharedRef<ITableRow,1> *)0x0) {
    local_48 = 0;
    local_50 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_142959593:
    if (((this->SuggestionListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pSVar4 = (this->SuggestionListView).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.Object = pFVar3;
    local_98.SharedReferenceCount.ReferenceController = pTVar2;
    SListView<TSharedPtr<FString,1>_>::RequestScrollIntoView(pSVar4,&local_98,0);
  }
  else {
    pIVar5 = pTVar10->Object;
    pTVar6 = (pTVar10->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = 0;
    local_60 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pIVar5 == (ITableRow *)0x0) goto LAB_142959593;
  }
  if (((this->TextBox).Object == (SEditableTextBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar1 = this->SelectedSuggestion;
  this_00 = (this->TextBox).Object;
  uVar12 = 0;
  if ((int)uVar1 < (this->Suggestions).ArrayNum) {
    uVar12 = ~uVar1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar14 = (this->Suggestions).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
  if ((*(longlong *)pFVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar7 = *(undefined8 **)pFVar14;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = *(int *)(puVar7 + 1);
  lVar15 = (longlong)local_f8.Data.ArrayNum;
  _Src = (void *)*puVar7;
  if (local_f8.Data.ArrayNum == 0) {
    local_f8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_f8.Data.ArrayNum,
               &local_f8.Data.ArrayMax);
    memcpy(local_f8.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
  }
  ::FString::Replace(&local_f8,&local_88,L"\t",L"",IgnoreCase);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pFVar11 = FText::FromString(&local_40,&local_88);
  FText::FText((FText *)local_e8,pFVar11);
  local_e8[0x10] = true;
  local_c0 = 0;
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  SEditableTextBox::SetText(this_00,(TAttribute<FText> *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)&local_78);
  if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  if ((ITextData *)local_e8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._0_8_ + 0x10))();
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_142959872:
  this->IgnoreUIUpdate = false;
  return;
}

// OnFocusLost @ 142964b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSuggestionTextBox::OnFocusLost(SSuggestionTextBox *this,FFocusEvent *param_1)

{
  return;
}

// OnGlobalFocusChanging @ 142965fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSuggestionTextBox::OnGlobalFocusChanging
          (SSuggestionTextBox *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,
          TSharedPtr<SWidget,1> *param_3,FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  SVerticalBox *pSVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  SEditableTextBox *pSVar5;
  FText local_38;
  FReadAccessScope local_28;
  
  pSVar5 = (this->TextBox).Object;
  if (pSVar5 != (SEditableTextBox *)0x0) {
    bVar4 = FWeakWidgetPath::ContainsWidget(param_2,(SWidget *)pSVar5);
    if (((bVar4) && (param_1->Cause == Mouse)) &&
       (pSVar1 = (this->VerticalBox).Object, pSVar1 != (SVerticalBox *)0x0)) {
      bVar4 = FWidgetPath::ContainsWidget(param_4,(SWidget *)pSVar1);
      if (!bVar4) {
        ClearSuggestions(this);
        pSVar5 = TSharedPtr<SEditableTextBox,1>::operator->(&this->TextBox);
        if ((pSVar5->EditableText).Object == (SEditableText *)0x0) {
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
        SEditableText::GetText((pSVar5->EditableText).Object,&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted,
                   &local_28);
        if ((*(int *)&(this->OnTextCommitted).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnTextCommitted).field_0x8, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x68))(plVar2,&local_38,2);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// OnKeyDown @ 142968d40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSuggestionTextBox::OnKeyDown
          (SSuggestionTextBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  uint uVar1;
  SMenuAnchor *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FReply *pFVar11;
  SListView<TSharedPtr<FString,1>_> *pSVar12;
  FString *pFVar13;
  FText *pFVar14;
  SEditableTextBox *pSVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  uint uStackX_c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FReadAccessScope local_38;
  
  uVar17 = 0;
  if ((this->TextBox).Object == (SEditableTextBox *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar6)();
      return pFVar11;
    }
  }
  pSVar15 = (this->TextBox).Object;
  if ((pSVar15->EditableText).Object == (SEditableText *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar6)();
      return pFVar11;
    }
  }
  SEditableText::GetText((pSVar15->EditableText).Object,&local_68);
  FText::ToString(&local_68);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if ((this->MenuAnchor).Object == (SMenuAnchor *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar6)();
      return pFVar11;
    }
  }
  pSVar2 = (this->MenuAnchor).Object;
  if (((((char)(pSVar2->MethodInUse)._padding_ == '\0') ||
       ((pSVar2->PopupMenuPtr).Object == (IMenu *)0x0)) ||
      (pTVar3 = (pSVar2->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->Key).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = false;
    if (FVar4 == EKeys::Up.KeyName) {
      pTVar16 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142969134:
      bVar7 = true;
      bVar8 = true;
      if (bVar9) goto LAB_14296913c;
    }
    else {
      pTVar16 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar4 = (param_2->Key).KeyName;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = true;
      if (FVar4 == EKeys::Down.KeyName) goto LAB_142969134;
      bVar8 = false;
LAB_14296913c:
      bVar7 = bVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (!bVar7) {
LAB_142968fd5:
      bVar9 = false;
      goto LAB_142968fd7;
    }
    bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShowingHistory);
    if (bVar9) {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnShowingHistory,
                 &local_38);
      if ((*(int *)&(this->OnShowingHistory).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->OnShowingHistory).field_0x8, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x68))(plVar5,&local_78);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if (0 < local_78.ArrayNum) {
        SetSuggestions(this,&local_78,true);
        pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar4 = (param_2->Key).KeyName;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar9 = FVar4 == EKeys::Up.KeyName;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (bVar9) {
          uVar17 = local_78.ArrayNum - 1;
        }
        this->SelectedSuggestion = uVar17;
        MarkActiveSuggestion(this);
      }
      DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
        bVar9 = true;
        goto LAB_142968fd7;
      }
    }
  }
  else {
    pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->Key).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = FVar4 == EKeys::Up.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar9) {
      iVar10 = this->SelectedSuggestion;
      if (iVar10 < 0) {
        iVar10 = (this->Suggestions).ArrayNum;
      }
      iVar10 = iVar10 + -1;
    }
    else {
      pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar4 = (param_2->Key).KeyName;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = FVar4 != EKeys::Down.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (bVar9) {
        pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar4 = (param_2->Key).KeyName;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((FVar4 == EKeys::Enter.KeyName) && (this->CommitsOnSuggestionSelected != false)) {
          pSVar12 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->
                              (&this->SuggestionListView);
          if (*(int *)&(pSVar12->SelectedItems).Elements.field_0x8 -
              *(int *)&(pSVar12->SelectedItems).Elements.field_0x34 < 1) goto LAB_142968fff;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          uVar1 = this->SelectedSuggestion;
          if ((int)uVar1 < (this->Suggestions).ArrayNum) {
            uVar17 = ~uVar1 >> 0x1f;
          }
          if (uVar17 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              pFVar11 = (FReply *)(*pcVar6)();
              return pFVar11;
            }
          }
          pFVar13 = TSharedPtr<FString,1>::operator*<FString>
                              ((TSharedPtr<FString,1> *)
                               ((this->Suggestions).AllocatorInstance.Data +
                               (longlong)(int)uVar1 * 0x10));
          pFVar14 = FText::FromString(&local_48,pFVar13);
          HandleTextBoxTextCommitted(this,pFVar14,OnEnter);
          if (local_48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
          }
          goto LAB_142968fd5;
        }
LAB_142968fff:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar4 = (param_2->Key).KeyName;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar9 = FVar4 != EKeys::Tab.KeyName;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (bVar9) goto LAB_142968fd5;
        iVar10 = (this->Suggestions).ArrayNum;
        if (iVar10 != 0) {
          if ((this->SelectedSuggestion < 0) || (iVar10 <= this->SelectedSuggestion)) {
            this->SelectedSuggestion = 0;
            MarkActiveSuggestion(this);
            bVar9 = true;
            goto LAB_142968fd7;
          }
          MarkActiveSuggestion(this);
          pSVar15 = TSharedPtr<SEditableTextBox,1>::operator->(&this->TextBox);
          if ((pSVar15->EditableText).Object == (SEditableText *)0x0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              pFVar11 = (FReply *)(*pcVar6)();
              return pFVar11;
            }
          }
          SEditableText::GetText((pSVar15->EditableText).Object,&local_58);
          HandleTextBoxTextCommitted(this,&local_58,OnEnter);
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
            bVar9 = true;
            goto LAB_142968fd7;
          }
        }
        goto LAB_142968eac;
      }
      iVar10 = this->SelectedSuggestion + 1;
      if ((this->Suggestions).ArrayNum + -1 <= this->SelectedSuggestion) {
        iVar10 = -1;
      }
    }
    this->SelectedSuggestion = iVar10;
    MarkActiveSuggestion(this);
  }
LAB_142968eac:
  bVar9 = true;
LAB_142968fd7:
  FReply::FReply(__return_storage_ptr__,bVar9);
  return __return_storage_ptr__;
}

// SetSuggestions @ 14299a680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSuggestionTextBox::SetSuggestions
          (SSuggestionTextBox *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int *piVar1;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  void *_Src;
  TSharedPtr<FString,1> *pTVar4;
  SMenuAnchor *pSVar5;
  SListView<TSharedPtr<FString,1>_> *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong local_res8;
  TRawPtrProxy<FString> local_res20;
  TSharedPtr<FString,1> local_68;
  FString local_58;
  TSharedPtr<FString,1> local_48;
  
  iVar9 = this->SelectedSuggestion;
  uVar12 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if ((-1 < iVar9) && (iVar9 < (this->Suggestions).ArrayNum)) {
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar11 = (this->Suggestions).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    if ((*(longlong *)pFVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar3 = *(undefined8 **)pFVar11;
    iVar9 = *(int *)(puVar3 + 1);
    uVar8 = iVar9 - 1;
    if (iVar9 == 0) {
      uVar8 = uVar12;
    }
    ::FString::AssignRange(&local_58,(wchar_t *)*puVar3,uVar8);
  }
  this->SelectedSuggestion = -1;
  pTVar2 = &this->Suggestions;
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(pTVar2->AllocatorInstance).Data,(this->Suggestions).ArrayNum)
  ;
  piVar1 = &(this->Suggestions).ArrayMax;
  (this->Suggestions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < param_1->ArrayNum) {
    local_res8 = 0;
    do {
      pFVar10 = ::operator_new(0x10);
      if (pFVar10 == (FString *)0x0) {
        pFVar10 = (FString *)0x0;
      }
      else {
        uVar8 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar11 = (param_1->AllocatorInstance).Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar9 = *(int *)(pFVar11 + local_res8 + 8);
        _Src = *(void **)(pFVar11 + local_res8);
        piVar1 = &(pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = iVar9;
        if (iVar9 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,0,(ForAnyElementType *)pFVar10,iVar9,piVar1);
          memcpy((pFVar10->Data).AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        }
      }
      local_res20.Object = pFVar10;
      TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_68,&local_res20);
      pTVar4 = (TSharedPtr<FString,1> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar4 <= &local_68) && (&local_68 < pTVar4 + (this->Suggestions).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->Suggestions).ArrayNum;
      if (iVar9 == (this->Suggestions).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,&(this->Suggestions).ArrayMax);
      }
      (this->Suggestions).ArrayNum = iVar9 + 1;
      pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(FString **)pFVar11 = local_68.Object;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) =
           local_68.SharedReferenceCount.ReferenceController;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_68.Object = (FString *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar8 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      iVar9 = *(int *)(pFVar11 + local_res8 + 8);
      if (iVar9 == local_58.Data.ArrayNum) {
        if (1 < iVar9) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar11 + local_res8),
                             (wchar_t *)local_58.Data.AllocatorInstance.Data);
          bVar7 = iVar9 == 0;
          goto LAB_14299a9fb;
        }
LAB_14299aa02:
        this->SelectedSuggestion = uVar12;
      }
      else {
        bVar7 = iVar9 + local_58.Data.ArrayNum == 1;
LAB_14299a9fb:
        if (bVar7) goto LAB_14299aa02;
      }
      local_res8 = local_res8 + 0x10;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < param_1->ArrayNum);
  }
  pSVar5 = (this->MenuAnchor).Object;
  if ((this->Suggestions).ArrayNum == 0) {
    if ((pSVar5 == (SMenuAnchor *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar5 = (this->MenuAnchor).Object;
    (**(code **)(pSVar5->_padding_ + 0x250))(pSVar5,0,1,0);
  }
  else {
    if ((pSVar5 == (SMenuAnchor *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar5 = (this->MenuAnchor).Object;
    (**(code **)(pSVar5->_padding_ + 0x250))(pSVar5,1,0,0);
    uVar12 = this->SelectedSuggestion;
    if (this->SelectedSuggestion < 0) {
      uVar12 = 0;
    }
    if (((this->SuggestionListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (this->SuggestionListView).Object;
    uVar8 = 0;
    if ((int)uVar12 < (this->Suggestions).ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar11 = (this->Suggestions).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
    local_48.Object = *(FString **)pFVar11;
    local_48.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar11 + 8);
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FString,1>_>::RequestScrollIntoView(this_00,&local_48,0);
    FocusTextBox(this);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// SetText @ 14299acd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSuggestionTextBox::SetText(SSuggestionTextBox *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->IgnoreUIUpdate = true;
  if ((this->TextBox).Object == (SEditableTextBox *)0x0) {
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
  SEditableTextBox::SetText((this->TextBox).Object,param_1);
  this->IgnoreUIUpdate = false;
  return;
}

// SupportsKeyboardFocus @ 1429a6270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SSuggestionTextBox::SupportsKeyboardFocus(SSuggestionTextBox *this)

{
  return true;
}

