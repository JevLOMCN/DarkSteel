// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 31

// ~SInlineEditableTextBlock @ 1429bf230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SInlineEditableTextBlock::~SInlineEditableTextBlock(SInlineEditableTextBlock *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  FText *pFVar8;
  
  this->_padding_ = (longlong)&___7SInlineEditableTextBlock__6B_;
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)((longlong)&((this->TextBlock).Object)->_padding_ + 1) ==
      EVisibility::Collapsed.Value.Value) {
    pFVar8 = FText::GetEmpty();
    SetTextBoxError(this,pFVar8);
  }
  pTVar3 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->WidgetToFocus).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaximumLength).Getter);
  pvVar4 = *(void **)&(this->MaximumLength).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaximumLength).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsReadOnly).Getter);
  pvVar4 = *(void **)&(this->bIsReadOnly).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsReadOnly).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HintText).Getter);
  pvVar4 = *(void **)&(this->HintText).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HintText).Getter);
  pIVar5 = (this->HintText).Value.TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter);
  pvVar4 = *(void **)&(this->Text).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Text).Getter);
  pIVar5 = (this->Text).Value.TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged);
  pvVar4 = *(void **)&(this->OnVerifyTextChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVerifyTextChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HorizontalBox).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsSelected);
  pvVar4 = *(void **)&(this->IsSelected).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IsSelected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommittedDelegate);
  pvVar4 = *(void **)&(this->OnTextCommittedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommittedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExitEditingMode);
  pvVar4 = *(void **)&(this->OnExitEditingMode).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExitEditingMode);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnterEditingMode);
  pvVar4 = *(void **)&(this->OnEnterEditingMode).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnterEditingMode);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MultiLineTextBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBlock).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// CancelEditMode @ 1429ccfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SInlineEditableTextBlock::CancelEditMode(SInlineEditableTextBlock *this)

{
  ExitEditingMode(this);
  SetEditableText(this,&this->Text);
  return;
}

// Construct @ 1429d1a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::Construct(SInlineEditableTextBlock *this,FArguments *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  IBreakIterator *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  SHorizontalBox *pSVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FArguments *pFVar10;
  FSlot *this_00;
  FSlot *pFVar11;
  FArguments *this_01;
  TSharedRef<STextBlock,1> *pTVar12;
  TSharedRef<SHorizontalBox,1> *pTVar13;
  FArguments *this_02;
  TAttribute<FText> *pTVar14;
  TAttribute<FSlateFontInfo> *pTVar15;
  SMultiLineEditableTextBox *pSVar16;
  SMultiLineEditableTextBox *pSVar17;
  FArguments *this_03;
  SEditableTextBox *pSVar18;
  SEditableTextBox *pSVar19;
  byte bVar20;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  ETextOverflowPolicy local_2048 [2];
  ETextOverflowPolicy local_2046 [2];
  ETextOverflowPolicy local_2044 [4];
  FLLMScope local_2040;
  FLLMScope local_203c;
  FLLMScope local_2038;
  FLLMScope local_2034;
  undefined1 local_2030 [8];
  ForAnyElementType local_2028;
  int local_2020;
  float local_2018;
  bool local_2014;
  undefined1 local_2010 [8];
  ForAnyElementType FStack_2008;
  int local_2000;
  bool local_1ff8;
  bool local_1ff7;
  undefined1 local_1ff0 [8];
  ForAnyElementType FStack_1fe8;
  int local_1fe0;
  Type local_1fd8;
  bool local_1fd4;
  undefined1 local_1fd0 [8];
  ForAnyElementType FStack_1fc8;
  int local_1fc0;
  float local_1fb8;
  bool local_1fb4;
  undefined1 local_1fb0 [8];
  ForAnyElementType FStack_1fa8;
  int local_1fa0;
  bool local_1f98;
  bool local_1f97;
  undefined1 local_1f90 [8];
  ForAnyElementType FStack_1f88;
  int local_1f80;
  Type local_1f78;
  bool local_1f74;
  undefined1 local_1f70 [8];
  ForAnyElementType FStack_1f68;
  int local_1f60;
  undefined2 local_1f58;
  undefined1 local_1f50 [8];
  ForAnyElementType FStack_1f48;
  ulonglong local_1f40;
  undefined2 local_1f38;
  undefined1 local_1f30 [8];
  ForAnyElementType FStack_1f28;
  ulonglong local_1f20;
  undefined2 local_1f18;
  undefined1 local_1f10 [8];
  ForAnyElementType FStack_1f08;
  ulonglong local_1f00;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_1ef8;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_1ee0;
  FName local_1ec8;
  undefined4 uStack_1ec0;
  uint uStack_1ebc;
  FName local_1eb8;
  undefined4 uStack_1eb0;
  uint uStack_1eac;
  FText local_1ea8;
  bool local_1e98;
  undefined1 local_1e90 [8];
  ForAnyElementType FStack_1e88;
  int local_1e80;
  undefined8 local_1e78;
  undefined8 uStack_1e70;
  undefined4 local_1e68;
  bool local_1e64;
  undefined1 local_1e60 [8];
  ForAnyElementType FStack_1e58;
  int local_1e50;
  FText local_1e48;
  bool local_1e38;
  undefined1 local_1e30 [8];
  ForAnyElementType FStack_1e28;
  int local_1e20;
  FText local_1e18;
  undefined1 local_1e08;
  undefined1 local_1e00 [8];
  ForAnyElementType FStack_1df8;
  int local_1df0;
  longlong local_1de8;
  TReferenceControllerBase<1> *pTStack_1de0;
  double local_1dd8;
  double dStack_1dd0;
  bool local_1dc8;
  undefined1 local_1dc0 [8];
  ForAnyElementType FStack_1db8;
  int local_1db0;
  undefined2 local_1da8;
  undefined1 local_1da0 [8];
  void *pvStack_1d98;
  undefined8 local_1d90;
  undefined2 local_1d88;
  undefined1 local_1d80 [8];
  void *pvStack_1d78;
  undefined8 local_1d70;
  undefined8 local_1d68;
  FSharedReferencer<1> local_1d60;
  FMemScope local_1d58;
  FMemScope local_1d50;
  FMemScope local_1d48;
  FName local_1d40;
  FMemScope local_1d38;
  FName local_1d30;
  undefined1 local_1d28 [4];
  undefined1 local_1d24 [4];
  undefined1 local_1d20 [8];
  FSlot *local_1d18;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1d10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1cf8;
  undefined8 local_1ce0;
  undefined8 uStack_1cd8;
  bool local_1cd0;
  undefined1 local_1cc8 [24];
  FDestructionSentinel local_1cb0;
  FDestructionSentinel local_1c98;
  FDestructionSentinel local_1c80;
  FDestructionSentinel local_1c68;
  FDestructionSentinel local_1c50;
  FDestructionSentinel local_1c38;
  FDestructionSentinel local_1c20;
  FDestructionSentinel local_1c08;
  FDestructionSentinel local_1bf0;
  FDestructionSentinel local_1bd8;
  FDestructionSentinel local_1bc0;
  FDestructionSentinel local_1ba8;
  FDestructionSentinel local_1b90;
  FDestructionSentinel local_1b78;
  FDestructionSentinel local_1b60;
  FDestructionSentinel local_1b48;
  FSlateFontInfo local_1b30;
  bool local_1ad0;
  undefined1 local_1ac8 [8];
  ForAnyElementType FStack_1ac0;
  int local_1ab8;
  code *local_1aa8;
  longlong lStack_1aa0;
  TSharedRef<STextBlock,1> local_1a98;
  TSharedRef<SHorizontalBox,1> local_1a88;
  SHorizontalBox *local_1a78;
  TReferenceControllerBase<1> *pTStack_1a70;
  STextBlock *local_1a68;
  TReferenceControllerBase<1> *pTStack_1a60;
  IBreakIterator *local_1a58;
  TReferenceControllerBase<1> *pTStack_1a50;
  SEditableTextBox *local_1a48;
  TReferenceControllerBase<1> *pTStack_1a40;
  code *local_1a38;
  longlong lStack_1a30;
  code *local_1a28;
  longlong lStack_1a20;
  SMultiLineEditableTextBox *local_1a18;
  TReferenceControllerBase<1> *pTStack_1a10;
  code *local_1a08;
  longlong lStack_1a00;
  FReadAccessScope local_19f8;
  undefined8 *local_19e0;
  STextBlock *local_19d8;
  FSharedReferencer<1> local_19d0 [4];
  undefined1 local_19b0 [32];
  undefined4 local_1990;
  undefined1 local_198c;
  FSlotArgumentsMixin local_1988;
  TAttribute<FText> local_18f8;
  TAttribute<FText> local_18c8;
  TAttribute<FText> local_1898;
  TAttribute<FText> local_1868;
  TAttribute<FText> local_1838;
  TAttribute<FText> local_1808;
  FArguments local_17d8;
  TAttribute<FSlateFontInfo> local_15d0;
  TAttribute<FSlateFontInfo> local_1550;
  FArguments local_14d0;
  FArguments local_f78;
  FArguments local_8b8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1429d1a8f;
  if ((param_1->_Style == (FInlineEditableTextBlockStyle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SInlineEditableTextBlock.cpp"
                         ,0xe,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommittedDelegate,&param_1->_OnTextCommitted);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->IsSelected,&param_1->_IsSelected);
  pFVar11 = (FSlot *)0x0;
  if (&param_1->_OnVerifyTextChanged != &this->OnVerifyTextChanged) {
    local_2030 = (undefined1  [8])0x0;
    local_2028.Data = (FScriptContainerElement *)0x0;
    local_2020 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnVerifyTextChanged,&local_19f8);
    if ((*(int *)&(param_1->_OnVerifyTextChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnVerifyTextChanged).field_0x8, plVar2 != (longlong *)0x0
       )) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_2030);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_19f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2030);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2030,
               (FWriteAccessScope *)&local_1bc0);
    if ((local_2020 != 0) && (local_2028.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2028.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2028,0,0,0x10);
      local_2020 = 0;
    }
    if (local_1bc0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1bc0.Accessor,&local_1bc0);
    }
    if (local_2028.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2028.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2030);
  }
  TAttribute<FText>::operator=(&this->Text,&param_1->_Text);
  TAttribute<FText>::operator=(&this->HintText,&param_1->_HintText);
  (this->bIsReadOnly).Value = (param_1->_IsReadOnly).Value;
  (this->bIsReadOnly).bIsSet = (param_1->_IsReadOnly).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsReadOnly).Getter,&(param_1->_IsReadOnly).Getter);
  (this->MaximumLength).Value = (param_1->_MaximumLength).Value;
  (this->MaximumLength).bIsSet = (param_1->_MaximumLength).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaximumLength).Getter,&(param_1->_MaximumLength).Getter);
  bVar20 = (this->bIsMultiLine ^ param_1->_MultiLine) & 1 ^ this->field_0x424;
  this->field_0x424 = bVar20;
  bVar9 = param_1->_DelayedLeftClickEntersEditMode;
  this->DoubleSelectDelay = 0.0;
  this->field_0x424 = (bVar9 * '\x02' ^ bVar20) & 2 ^ bVar20;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnEnterEditingMode,&param_1->_OnEnterEditingMode);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnExitEditingMode,&param_1->_OnExitEditingMode);
  pFVar10 = SHorizontalBox::FArguments::FArguments(&local_17d8);
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
    pFVar11 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_1d18 = pFVar11;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_19e0,(FSlot *)&local_1d18);
  local_1990 = 2;
  local_198c = 1;
  this_01 = STextBlock::FArguments::FArguments(&local_14d0);
  local_1ea8.TextData.Reference = (this->Text).Value.TextData.Reference;
  if (local_1ea8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1ea8.TextData.Reference + 8))
              (local_1ea8.TextData.Reference,local_1d20);
  }
  local_1ea8.Flags = (this->Text).Value.Flags;
  local_1e98 = (this->Text).bIsSet;
  local_1e90 = (undefined1  [8])0x0;
  FStack_1e88.Data = (FScriptContainerElement *)0x0;
  local_1e80 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e90,
             &(this->Text).Getter);
  FText::operator=(&(this_01->_Text).Value,&local_1ea8);
  (this_01->_Text).bIsSet = local_1e98;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e90,
             (FWriteAccessScope *)&local_1ba8);
  if ((local_1e80 != 0) && (FStack_1e88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e88,0,0,0x10);
    local_1e80 = 0;
  }
  if (local_1ba8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ba8.Accessor,&local_1ba8);
  }
  if (FStack_1e88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e90);
  if (local_1ea8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1ea8.TextData.Reference + 0x10))();
  }
  this_01->_TextStyle = &param_1->_Style->TextStyle;
  FSlateFontInfo::FSlateFontInfo(&local_1b30,&(param_1->_Font).Value);
  local_1ad0 = (param_1->_Font).bIsSet;
  local_1ab8 = 0;
  local_1ac8 = (undefined1  [8])0x0;
  FStack_1ac0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ac8,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(this_01->_Font).Value,&local_1b30);
  (this_01->_Font).bIsSet = local_1ad0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ac8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ac8,
             (FWriteAccessScope *)&local_1b90);
  if ((local_1ab8 != 0) && (FStack_1ac0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ac0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ac0,0,0,0x10);
    local_1ab8 = 0;
  }
  if (local_1b90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b90.Accessor,&local_1b90);
  }
  if (FStack_1ac0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ac0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ac8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b30.CompositeFont.SharedReferenceCount.ReferenceController);
  local_1e78 = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  uStack_1e70 = *(undefined8 *)
                 ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_1e68._0_1_ = (param_1->_ColorAndOpacity).Value.ColorUseRule;
  local_1e68._1_1_ = (param_1->_ColorAndOpacity).Value.ColorTableId;
  local_1e68._2_2_ = *(undefined2 *)&(param_1->_ColorAndOpacity).Value.field_0x12;
  local_1e64 = (param_1->_ColorAndOpacity).bIsSet;
  local_1e50 = 0;
  local_1e60 = (undefined1  [8])0x0;
  FStack_1e58.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e60,
             &(param_1->_ColorAndOpacity).Getter);
  *(undefined8 *)&(this_01->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_1e78;
  *(undefined8 *)((longlong)&(this_01->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_1e70;
  (this_01->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_1e68;
  (this_01->_ColorAndOpacity).Value.ColorTableId = local_1e68._1_1_;
  *(undefined2 *)&(this_01->_ColorAndOpacity).Value.field_0x12 = local_1e68._2_2_;
  (this_01->_ColorAndOpacity).bIsSet = local_1e64;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e60,
             (FWriteAccessScope *)&local_1b78);
  if ((local_1e50 != 0) && (FStack_1e58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e58,0,0,0x10);
    local_1e50 = 0;
  }
  if (local_1b78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b78.Accessor,&local_1b78);
  }
  if (FStack_1e58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e60);
  local_1ce0 = *(undefined8 *)&(param_1->_ShadowColorAndOpacity).Value.field0_0x0;
  uStack_1cd8 = *(undefined8 *)((longlong)&(param_1->_ShadowColorAndOpacity).Value.field0_0x0 + 8);
  local_1cd0 = (param_1->_ShadowColorAndOpacity).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1cc8,
             &(param_1->_ShadowColorAndOpacity).Getter);
  *(undefined8 *)&(this_01->_ShadowColorAndOpacity).Value.field0_0x0 = local_1ce0;
  *(undefined8 *)((longlong)&(this_01->_ShadowColorAndOpacity).Value.field0_0x0 + 8) = uStack_1cd8;
  (this_01->_ShadowColorAndOpacity).bIsSet = local_1cd0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_ShadowColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cc8);
  if ((void *)local_1cc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1cc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cc8);
  local_1dd8 = (param_1->_ShadowOffset).Value.field0_0x0._s_0.X;
  dStack_1dd0 = (param_1->_ShadowOffset).Value.field0_0x0._s_0.Y;
  local_1dc8 = (param_1->_ShadowOffset).bIsSet;
  local_1db0 = 0;
  local_1dc0 = (undefined1  [8])0x0;
  FStack_1db8.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_1dc0,&(param_1->_ShadowOffset).Getter);
  (this_01->_ShadowOffset).Value.field0_0x0._s_0.X = local_1dd8;
  (this_01->_ShadowOffset).Value.field0_0x0._s_0.Y = dStack_1dd0;
  (this_01->_ShadowOffset).bIsSet = local_1dc8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_ShadowOffset).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1dc0,
             (FWriteAccessScope *)&local_1b60);
  if ((local_1db0 != 0) && (FStack_1db8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1db8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1db8,0,0,0x10);
    local_1db0 = 0;
  }
  if (local_1b60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b60.Accessor,&local_1b60);
  }
  if (FStack_1db8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1db8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1dc0);
  local_1e48.TextData.Reference = (param_1->_HighlightText).Value.TextData.Reference;
  if (local_1e48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e48.TextData.Reference + 8))
              (local_1e48.TextData.Reference,local_1d24);
  }
  local_1e48.Flags = (param_1->_HighlightText).Value.Flags;
  local_1e38 = (param_1->_HighlightText).bIsSet;
  local_1e30 = (undefined1  [8])0x0;
  FStack_1e28.Data = (FScriptContainerElement *)0x0;
  local_1e20 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e30,
             &(param_1->_HighlightText).Getter);
  FText::operator=(&(this_01->_HighlightText).Value,&local_1e48);
  (this_01->_HighlightText).bIsSet = local_1e38;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_HighlightText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e30,
             (FWriteAccessScope *)&local_1b48);
  if ((local_1e20 != 0) && (FStack_1e28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e28,0,0,0x10);
    local_1e20 = 0;
  }
  if (local_1b48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b48.Accessor,&local_1b48);
  }
  if (FStack_1e28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e30);
  if (local_1e48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e48.TextData.Reference + 0x10))();
  }
  local_1e18.TextData.Reference = (ITextData *)param_1->_padding_;
  if (local_1e18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e18.TextData.Reference + 8))
              (local_1e18.TextData.Reference,local_1d28);
  }
  local_1e18.Flags = (uint)param_1->_padding_;
  local_1e08 = (undefined1)param_1->_padding_;
  local_1e00 = (undefined1  [8])0x0;
  FStack_1df8.Data = (FScriptContainerElement *)0x0;
  local_1df0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e00,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  FText::operator=((FText *)this_01,&local_1e18);
  *(undefined1 *)&this_01->_padding_ = local_1e08;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e00,
             (FWriteAccessScope *)&local_1cb0);
  if ((local_1df0 != 0) && (FStack_1df8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1df8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1df8,0,0,0x10);
    local_1df0 = 0;
  }
  if (local_1cb0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1cb0.Accessor,&local_1cb0);
  }
  if (FStack_1df8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1df8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e00);
  if (local_1e18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e18.TextData.Reference + 0x10))();
  }
  local_2018 = (param_1->_WrapTextAt).Value;
  local_2014 = (param_1->_WrapTextAt).bIsSet;
  local_2010 = (undefined1  [8])0x0;
  FStack_2008.Data = (FScriptContainerElement *)0x0;
  local_2000 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2010,
             &(param_1->_WrapTextAt).Getter);
  (this_01->_WrapTextAt).Value = local_2018;
  (this_01->_WrapTextAt).bIsSet = local_2014;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2010);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2010,
             (FWriteAccessScope *)&local_1c98);
  if ((local_2000 != 0) && (FStack_2008.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2008.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2008,0,0,0x10);
    local_2000 = 0;
  }
  if (local_1c98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c98.Accessor,&local_1c98);
  }
  if (FStack_2008.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2008.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2010);
  local_1ff8 = (param_1->_AutoWrapNonEditText).Value;
  local_1ff7 = (param_1->_AutoWrapNonEditText).bIsSet;
  local_1ff0 = (undefined1  [8])0x0;
  FStack_1fe8.Data = (FScriptContainerElement *)0x0;
  local_1fe0 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ff0,
             &(param_1->_AutoWrapNonEditText).Getter);
  (this_01->_AutoWrapText).Value = local_1ff8;
  (this_01->_AutoWrapText).bIsSet = local_1ff7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ff0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ff0,
             (FWriteAccessScope *)&local_1c80);
  if ((local_1fe0 != 0) && (FStack_1fe8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1fe8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1fe8,0,0,0x10);
    local_1fe0 = 0;
  }
  if (local_1c80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c80.Accessor,&local_1c80);
  }
  if (FStack_1fe8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1fe8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ff0);
  local_1fd8 = (param_1->_Justification).Value;
  local_1fd4 = (param_1->_Justification).bIsSet;
  local_1fd0 = (undefined1  [8])0x0;
  FStack_1fc8.Data = (FScriptContainerElement *)0x0;
  local_1fc0 = 0;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(local_1fd0,&(param_1->_Justification).Getter);
  (this_01->_Justification).Value = local_1fd8;
  (this_01->_Justification).bIsSet = local_1fd4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fd0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1fd0,
             (FWriteAccessScope *)&local_1c68);
  if ((local_1fc0 != 0) && (FStack_1fc8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1fc8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1fc8,0,0,0x10);
    local_1fc0 = 0;
  }
  if (local_1c68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c68.Accessor,&local_1c68);
  }
  if (FStack_1fc8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1fc8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fd0);
  pTVar3 = (param_1->_LineBreakPolicy).SharedReferenceCount.ReferenceController;
  pIVar4 = (param_1->_LineBreakPolicy).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a58 = (this_01->_LineBreakPolicy).Object;
  pTStack_1a50 = (this_01->_LineBreakPolicy).SharedReferenceCount.ReferenceController;
  (this_01->_LineBreakPolicy).Object = pIVar4;
  (this_01->_LineBreakPolicy).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1a50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar9 = (param_1->_OverflowPolicy).bIsSet;
  if (bVar9 != false) {
    local_2048[0] = (param_1->_OverflowPolicy).TypedValue;
  }
  if ((TOptional<ETextOverflowPolicy> *)local_2048 != &this_01->_OverflowPolicy) {
    if (bVar9 == false) {
      if ((this_01->_OverflowPolicy).bIsSet != false) {
        (this_01->_OverflowPolicy).bIsSet = false;
      }
    }
    else {
      (this_01->_OverflowPolicy).TypedValue = local_2048[0];
      (this_01->_OverflowPolicy).bIsSet = true;
    }
  }
  FLLMScope::FLLMScope(&local_2040,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1d30 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1d38,&local_1d30,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1cf8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SInlineEditableTextBlock.cpp"
             ,0x26,local_res8);
  FMemScope::~FMemScope(&local_1d38);
  FLLMScope::~FLLMScope(&local_2040);
  if (local_1cf8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1cf8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1cf8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1a68 = (this->TextBlock).Object;
  pTStack_1a60 = (this->TextBlock).SharedReferenceCount.ReferenceController;
  (this->TextBlock).Object = local_1cf8._Widget.Object;
  (this->TextBlock).SharedReferenceCount.ReferenceController =
       local_1cf8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1a60);
  pTVar12 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1cf8,&local_1a98,this_01);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_19d8 = pTVar12->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d68 = 0;
  local_1d60.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_19d0,&local_1d60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d60.ReferenceController);
  pFVar10 = SHorizontalBox::FArguments::operator+(pFVar10,(FSlotArguments *)&local_19e0);
  FLLMScope::FLLMScope(&local_203c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1d40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1d48,&local_1d40,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1d10,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SInlineEditableTextBlock.cpp"
             ,0x21,local_res10);
  FMemScope::~FMemScope(&local_1d48);
  FLLMScope::~FLLMScope(&local_203c);
  if (local_1d10._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d10._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d10._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1a78 = (this->HorizontalBox).Object;
  pTStack_1a70 = (this->HorizontalBox).SharedReferenceCount.ReferenceController;
  (this->HorizontalBox).Object = local_1d10._Widget.Object;
  (this->HorizontalBox).SharedReferenceCount.ReferenceController =
       local_1d10._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1a70);
  pTVar13 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d10,&local_1a88,pFVar10);
  plVar2 = &this->_padding_;
  pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar13->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar2);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar2);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1de8 = this->_padding_;
  pTStack_1de0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar6;
  this->_padding_ = (longlong)pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1de0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_14d0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1988);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_19b0);
  if ((void *)local_19b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_19b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19d0[0].ReferenceController);
  if (local_19e0 != (undefined8 *)0x0) {
    (**(code **)*local_19e0)(local_19e0,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_17d8._Slots.AllocatorInstance.Data,local_17d8._Slots.ArrayNum);
  if ((FSlotArguments *)local_17d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_17d8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_17d8);
  if (this->bIsMultiLine == 0) {
    this_03 = SEditableTextBox::FArguments::FArguments(&local_f78);
    pTVar14 = TAttribute<FText>::TAttribute<FText>(&local_1868,&param_1->_Text);
    TAttribute<FText>::operator=(&this_03->_Text,pTVar14);
    TAttribute<FText>::~TAttribute<FText>(pTVar14);
    pTVar14 = TAttribute<FText>::TAttribute<FText>(&local_1838,&param_1->_HintText);
    TAttribute<FText>::operator=(&this_03->_HintText,pTVar14);
    TAttribute<FText>::~TAttribute<FText>(pTVar14);
    this_03->_Style = &param_1->_Style->EditableTextBoxStyle;
    pTVar15 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_1550,&param_1->_Font);
    TAttribute<FSlateFontInfo>::operator=(&this_03->_Font,pTVar15);
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(pTVar15);
    pTVar14 = TAttribute<FText>::TAttribute<FText>(&local_1808,(TAttribute<FText> *)param_1);
    TAttribute<FText>::operator=((TAttribute<FText> *)this_03,pTVar14);
    TAttribute<FText>::~TAttribute<FText>(pTVar14);
    TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
              (&this_03->_OnBeginTextEdit,&param_1->_OnBeginTextEdit);
    uStack_1eb0 = 0;
    local_1eb8 = (FName)OnTextChanged;
    lStack_1a20 = (ulonglong)uStack_1eac << 0x20;
    local_1a28 = OnTextChanged;
    TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
    BindSP<SInlineEditableTextBlock>
              ((TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)
               &this_03->_OnTextChanged,this,(pmf_9d548fec *)&local_1a28);
    uStack_1eb0 = 0;
    local_1eb8 = (FName)OnTextBoxCommitted;
    lStack_1a30 = (ulonglong)uStack_1eac << 0x20;
    local_1a38 = OnTextBoxCommitted;
    TDelegateRegistration<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
    ::BindSP<SInlineEditableTextBlock>(&this_03->_OnTextCommitted,this,(pmf_d5b7e6b0 *)&local_1a38);
    local_1d88 = 0x101;
    local_1d70 = 0;
    local_1d80 = (undefined1  [8])0x0;
    pvStack_1d78 = (void *)0x0;
    (this_03->_SelectAllTextWhenFocused).Value = true;
    (this_03->_SelectAllTextWhenFocused).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this_03->_SelectAllTextWhenFocused).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d80);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d80);
    if (pvStack_1d78 != (void *)0x0) {
      FMemory::Free(pvStack_1d78);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1d80);
    local_1da8 = 0x100;
    local_1d90 = 0;
    local_1da0 = (undefined1  [8])0x0;
    pvStack_1d98 = (void *)0x0;
    (this_03->_ClearKeyboardFocusOnCommit).Value = false;
    (this_03->_ClearKeyboardFocusOnCommit).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this_03->_ClearKeyboardFocusOnCommit).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da0);
    if (pvStack_1d98 != (void *)0x0) {
      FMemory::Free(pvStack_1d98);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1da0);
    bVar9 = (param_1->_OverflowPolicy).bIsSet;
    if (bVar9 != false) {
      local_2044[0] = (param_1->_OverflowPolicy).TypedValue;
    }
    if ((TOptional<ETextOverflowPolicy> *)local_2044 != &this_03->_OverflowPolicy) {
      if (bVar9 == false) {
        if ((this_03->_OverflowPolicy).bIsSet != false) {
          (this_03->_OverflowPolicy).bIsSet = false;
        }
      }
      else {
        (this_03->_OverflowPolicy).TypedValue = local_2044[0];
        (this_03->_OverflowPolicy).bIsSet = true;
      }
    }
    FLLMScope::FLLMScope(&local_2034,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1eb8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1d58,&local_1eb8,true);
    TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
              (&local_1ef8,"SEditableTextBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SInlineEditableTextBlock.cpp"
               ,0x4f,local_res20);
    FMemScope::~FMemScope(&local_1d58);
    FLLMScope::~FLLMScope(&local_2034);
    if (local_1ef8._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1ef8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1ef8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_1a48 = (this->TextBox).Object;
    pTStack_1a40 = (this->TextBox).SharedReferenceCount.ReferenceController;
    (this->TextBox).Object = local_1ef8._Widget.Object;
    (this->TextBox).SharedReferenceCount.ReferenceController =
         local_1ef8._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1a40);
    pSVar18 = TSharedPtr<SEditableTextBox,1>::operator->(&local_1ef8._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar18,(FSlateBaseNamedArgs *)this_03);
    pSVar18 = local_1ef8._Widget.Object;
    SEditableTextBox::Construct(local_1ef8._Widget.Object,this_03);
    pSVar19 = TSharedPtr<SEditableTextBox,1>::operator->(&local_1ef8._Widget);
    SWidget::CacheVolatility((SWidget *)pSVar19);
    pSVar19 = TSharedPtr<SEditableTextBox,1>::operator->(&local_1ef8._Widget);
    pbVar1 = (byte *)((longlong)&pSVar19->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_1ef8._Widget.Object == (SEditableTextBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar8.ReferenceController = local_1ef8._Widget.SharedReferenceCount.ReferenceController;
    local_1ef8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_1ef8._Widget.Object = (SEditableTextBox *)0x0;
    if ((pSVar18 == (SEditableTextBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SEditableTextBox::FArguments::~FArguments(&local_f78);
  }
  else {
    this_02 = SMultiLineEditableTextBox::FArguments::FArguments(&local_8b8);
    pTVar14 = TAttribute<FText>::TAttribute<FText>(&local_18f8,&param_1->_Text);
    FText::operator=(&(this_02->_Text).Value,&pTVar14->Value);
    (this_02->_Text).bIsSet = pTVar14->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar14->Getter);
    TAttribute<FText>::~TAttribute<FText>(pTVar14);
    pTVar14 = TAttribute<FText>::TAttribute<FText>(&local_18c8,&param_1->_HintText);
    FText::operator=(&(this_02->_HintText).Value,&pTVar14->Value);
    (this_02->_HintText).bIsSet = pTVar14->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_HintText).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar14->Getter);
    TAttribute<FText>::~TAttribute<FText>(pTVar14);
    this_02->_Style = &param_1->_Style->EditableTextBoxStyle;
    pTVar15 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_15d0,&param_1->_Font);
    FSlateFontInfo::operator=(&(this_02->_Font).Value,&pTVar15->Value);
    (this_02->_Font).bIsSet = pTVar15->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_Font).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar15->Getter);
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(pTVar15);
    pTVar14 = TAttribute<FText>::TAttribute<FText>(&local_1898,(TAttribute<FText> *)param_1);
    FText::operator=((FText *)this_02,&pTVar14->Value);
    *(bool *)&this_02->_padding_ = pTVar14->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar14->Getter);
    TAttribute<FText>::~TAttribute<FText>(pTVar14);
    TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
              (&this_02->_OnBeginTextEdit,&param_1->_OnBeginTextEdit);
    uStack_1ec0 = 0;
    local_1ec8 = (FName)OnTextChanged;
    lStack_1aa0 = (ulonglong)uStack_1ebc << 0x20;
    local_1aa8 = OnTextChanged;
    TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
    BindSP<SInlineEditableTextBlock>
              ((TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)
               &this_02->_OnTextChanged,this,(pmf_9d548fec *)&local_1aa8);
    uStack_1ec0 = 0;
    local_1ec8 = (FName)OnTextBoxCommitted;
    lStack_1a00 = (ulonglong)uStack_1ebc << 0x20;
    local_1a08 = OnTextBoxCommitted;
    TDelegateRegistration<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
    ::BindSP<SInlineEditableTextBlock>(&this_02->_OnTextCommitted,this,(pmf_d5b7e6b0 *)&local_1a08);
    local_1fb8 = (param_1->_WrapTextAt).Value;
    local_1fb4 = (param_1->_WrapTextAt).bIsSet;
    local_1fb0 = (undefined1  [8])0x0;
    FStack_1fa8.Data = (FScriptContainerElement *)0x0;
    local_1fa0 = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1fb0,
               &(param_1->_WrapTextAt).Getter);
    (this_02->_WrapTextAt).Value = local_1fb8;
    (this_02->_WrapTextAt).bIsSet = local_1fb4;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_WrapTextAt).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fb0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1fb0,
               (FWriteAccessScope *)&local_1c50);
    if ((local_1fa0 != 0) && (FStack_1fa8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1fa8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1fa8,0,0,0x10);
      local_1fa0 = 0;
    }
    if (local_1c50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c50.Accessor,&local_1c50);
    }
    if (FStack_1fa8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1fa8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1fb0);
    local_1f98 = (param_1->_AutoWrapMultilineEditText).Value;
    local_1f97 = (param_1->_AutoWrapMultilineEditText).bIsSet;
    local_1f90 = (undefined1  [8])0x0;
    FStack_1f88.Data = (FScriptContainerElement *)0x0;
    local_1f80 = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f90,
               &(param_1->_AutoWrapMultilineEditText).Getter);
    (this_02->_AutoWrapText).Value = local_1f98;
    (this_02->_AutoWrapText).bIsSet = local_1f97;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_AutoWrapText).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f90,
               (FWriteAccessScope *)&local_1c38);
    if ((local_1f80 != 0) && (FStack_1f88.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f88,0,0,0x10);
      local_1f80 = 0;
    }
    if (local_1c38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c38.Accessor,&local_1c38);
    }
    if (FStack_1f88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f88.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f90);
    local_1f78 = (param_1->_Justification).Value;
    local_1f74 = (param_1->_Justification).bIsSet;
    local_1f70 = (undefined1  [8])0x0;
    FStack_1f68.Data = (FScriptContainerElement *)0x0;
    local_1f60 = 0;
    TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(local_1f70,&(param_1->_Justification).Getter);
    (this_02->_Justification).Value = local_1f78;
    (this_02->_Justification).bIsSet = local_1f74;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_Justification).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f70,
               (FWriteAccessScope *)&local_1c20);
    if ((local_1f60 != 0) && (FStack_1f68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f68,0,0,0x10);
      local_1f60 = 0;
    }
    if (local_1c20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c20.Accessor,&local_1c20);
    }
    if (FStack_1f68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f70);
    local_1f58 = 0x101;
    local_1f40 = 0;
    local_1f50 = (undefined1  [8])0x0;
    FStack_1f48.Data = (FScriptContainerElement *)0x0;
    (this_02->_SelectAllTextWhenFocused).Value = true;
    (this_02->_SelectAllTextWhenFocused).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this_02->_SelectAllTextWhenFocused).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f50,
               (FWriteAccessScope *)&local_1c08);
    if (((int)local_1f40 != 0) && (FStack_1f48.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f48.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f48,0,0,0x10);
      local_1f40 = local_1f40 & 0xffffffff00000000;
    }
    if (local_1c08.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c08.Accessor,&local_1c08);
    }
    if (FStack_1f48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f48.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f50);
    local_1f38 = 0x101;
    local_1f20 = 0;
    local_1f30 = (undefined1  [8])0x0;
    FStack_1f28.Data = (FScriptContainerElement *)0x0;
    (this_02->_ClearKeyboardFocusOnCommit).Value = true;
    (this_02->_ClearKeyboardFocusOnCommit).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this_02->_ClearKeyboardFocusOnCommit).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f30,
               (FWriteAccessScope *)&local_1bf0);
    if (((int)local_1f20 != 0) && (FStack_1f28.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f28.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f28,0,0,0x10);
      local_1f20 = local_1f20 & 0xffffffff00000000;
    }
    if (local_1bf0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1bf0.Accessor,&local_1bf0);
    }
    if (FStack_1f28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f28.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f30);
    local_1f18 = 0x101;
    local_1f00 = 0;
    local_1f10 = (undefined1  [8])0x0;
    FStack_1f08.Data = (FScriptContainerElement *)0x0;
    (this_02->_RevertTextOnEscape).Value = true;
    (this_02->_RevertTextOnEscape).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_RevertTextOnEscape).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f10,
               (FWriteAccessScope *)&local_1bd8);
    if (((int)local_1f00 != 0) && (FStack_1f08.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f08.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f08,0,0,0x10);
      local_1f00 = local_1f00 & 0xffffffff00000000;
    }
    if (local_1bd8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1bd8.Accessor,&local_1bd8);
    }
    if (FStack_1f08.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f08.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f10);
    this_02->_ModiferKeyForNewLine = param_1->_ModiferKeyForNewLine;
    bVar9 = (param_1->_OverflowPolicy).bIsSet;
    if (bVar9 != false) {
      local_2046[0] = (param_1->_OverflowPolicy).TypedValue;
    }
    if ((TOptional<ETextOverflowPolicy> *)local_2046 != &this_02->_OverflowPolicy) {
      if (bVar9 == false) {
        if ((this_02->_OverflowPolicy).bIsSet != false) {
          (this_02->_OverflowPolicy).bIsSet = false;
        }
      }
      else {
        (this_02->_OverflowPolicy).TypedValue = local_2046[0];
        (this_02->_OverflowPolicy).bIsSet = true;
      }
    }
    FLLMScope::FLLMScope(&local_2038,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1ec8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1d50,&local_1ec8,true);
    TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
              (&local_1ee0,"SMultiLineEditableTextBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SInlineEditableTextBlock.cpp"
               ,0x3a,local_res18);
    FMemScope::~FMemScope(&local_1d50);
    FLLMScope::~FLLMScope(&local_2038);
    if (local_1ee0._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1ee0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1ee0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_1a18 = (this->MultiLineTextBox).Object;
    pTStack_1a10 = (this->MultiLineTextBox).SharedReferenceCount.ReferenceController;
    (this->MultiLineTextBox).Object = local_1ee0._Widget.Object;
    (this->MultiLineTextBox).SharedReferenceCount.ReferenceController =
         local_1ee0._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1a10);
    pSVar16 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&local_1ee0._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar16,(FSlateBaseNamedArgs *)this_02);
    pSVar16 = local_1ee0._Widget.Object;
    SMultiLineEditableTextBox::Construct(local_1ee0._Widget.Object,this_02);
    pSVar17 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&local_1ee0._Widget);
    SWidget::CacheVolatility((SWidget *)pSVar17);
    pSVar17 = TSharedPtr<SMultiLineEditableTextBox,1>::operator->(&local_1ee0._Widget);
    pbVar1 = (byte *)((longlong)&pSVar17->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_1ee0._Widget.Object == (SMultiLineEditableTextBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar8.ReferenceController = local_1ee0._Widget.SharedReferenceCount.ReferenceController;
    local_1ee0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_1ee0._Widget.Object = (SMultiLineEditableTextBox *)0x0;
    if ((pSVar16 == (SMultiLineEditableTextBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SMultiLineEditableTextBox::FArguments::~FArguments(&local_8b8);
  }
  return;
}

// EnterEditingMode @ 1429e4c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SInlineEditableTextBlock::EnterEditingMode(SInlineEditableTextBlock *this)

{
  uint uVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  char cVar5;
  bool bVar6;
  bool *pbVar7;
  FSlateApplication *pFVar8;
  STextBlock *pSVar9;
  SHorizontalBox *this_00;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TSharedPtr<SWidget,1> local_1c8;
  undefined1 local_1b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  ulonglong local_190;
  TSharedRef<SWidget,1> local_188;
  TAttribute<EVisibility> local_178;
  FDestructionSentinel local_158;
  undefined1 local_140 [8];
  TReferenceControllerBase<1> *local_138;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_130;
  
  pbVar7 = TAttribute<bool>::Get(&this->bIsReadOnly);
  if (*pbVar7 == false) {
    pFVar8 = FSlateApplication::Get();
    cVar5 = (**(code **)(*(longlong *)pFVar8 + 0xd0))(pFVar8);
    if (cVar5 == '\0') {
      if (((this->TextBlock).Object == (STextBlock *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((TEnumAsByte<EVisibility::Private>)
          *(uchar *)((longlong)&((this->TextBlock).Object)->_padding_ + 1) ==
          EVisibility::Visible.Value.Value) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnEnterEditingMode);
        pSVar9 = TSharedPtr<STextBlock,1>::operator->(&this->TextBlock);
        if ((*(byte *)&pSVar9->field91_0x60c & 1) != 0) {
          SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                    ((FSlateAttributeImpl *)&pSVar9->BoundText,(SWidget *)pSVar9,Member);
        }
        pIVar2 = *(ITextData **)&pSVar9->BoundText;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
        }
        uVar1 = *(uint *)&(pSVar9->BoundText).field_0x8;
        local_1b8._0_8_ = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
        }
        local_190 = 0;
        local_1b8[0x10] = true;
        local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_198.Data = (FScriptContainerElement *)0x0;
        local_1b8._8_4_ = uVar1;
        SetEditableText(this,(TAttribute<FText> *)local_1b8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1a0,(FWriteAccessScope *)&local_158);
        if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_198.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10)
          ;
          local_190 = local_190 & 0xffffffff00000000;
        }
        if (local_158.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
        }
        if (FStack_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_198.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
        if ((ITextData *)local_1b8._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_1b8._0_8_ + 0x10))();
        }
        if (this->bIsMultiLine == 0) {
          local_1c8.Object = (SWidget *)(this->TextBox).Object;
          local_1c8.SharedReferenceCount.ReferenceController =
               (this->TextBox).SharedReferenceCount.ReferenceController;
        }
        else {
          local_1c8.Object = (SWidget *)(this->MultiLineTextBox).Object;
          local_1c8.SharedReferenceCount.ReferenceController =
               (this->MultiLineTextBox).SharedReferenceCount.ReferenceController;
        }
        if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        this_00 = TSharedPtr<SHorizontalBox,1>::operator->(&this->HorizontalBox);
        pFVar10 = SHorizontalBox::AddSlot(this_00,&local_130);
        if (((SMultiLineEditableTextBox *)local_1c8.Object == (SMultiLineEditableTextBox *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar4.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
        local_188.Object = local_1c8.Object;
        local_188.SharedReferenceCount.ReferenceController =
             local_1c8.SharedReferenceCount.ReferenceController;
        if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (((SMultiLineEditableTextBox *)local_1c8.Object == (SMultiLineEditableTextBox *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)&pFVar10->_padding_,&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar4.ReferenceController);
        SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_130);
        pFVar8 = FSlateApplication::Get();
        pTVar11 = (TSharedPtr<SWidget,1> *)
                  (**(code **)(*(longlong *)pFVar8 + 0x98))(pFVar8,local_140);
        TWeakPtr<SWidget,1>::operator=<SWidget>(&this->WidgetToFocus,pTVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138);
        pFVar8 = FSlateApplication::Get();
        FSlateApplication::SetKeyboardFocus(pFVar8,&local_1c8,SetDirectly);
        pSVar9 = TSharedPtr<STextBlock,1>::operator->(&this->TextBlock);
        local_178.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
        local_178.bIsSet = true;
        local_178.Getter._16_8_ = 0;
        local_178.Getter._0_8_ = 0;
        local_178.Getter._8_8_ = 0;
        SLeafWidget::SetVisibility((SLeafWidget *)pSVar9,&local_178);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.SharedReferenceCount.ReferenceController);
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
    }
  }
  return;
}

// ExitEditingMode @ 1429e7b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SInlineEditableTextBlock::ExitEditingMode(SInlineEditableTextBlock *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  SBoxPanel *this_00;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  FText *pFVar7;
  FSlateApplication *pFVar8;
  SMultiLineEditableTextBox *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<SWidget,1> local_98;
  SMultiLineEditableTextBox *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  SMultiLineEditableTextBox *local_78;
  TReferenceControllerBase<1> *local_70;
  TAttribute<EVisibility> local_68;
  TSharedRef<SWidget,1> local_48;
  FReadAccessScope local_38;
  undefined8 local_20 [3];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnExitEditingMode,
             &local_38);
  if ((*(int *)&(this->OnExitEditingMode).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnExitEditingMode).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (((this->HorizontalBox).Object == (SHorizontalBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (SBoxPanel *)(this->HorizontalBox).Object;
  if (this->bIsMultiLine == 0) {
    pTStack_80 = (this->TextBox).SharedReferenceCount.ReferenceController;
    local_88 = (SMultiLineEditableTextBox *)(this->TextBox).Object;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    pTStack_80 = (this->MultiLineTextBox).SharedReferenceCount.ReferenceController;
    local_88 = (this->MultiLineTextBox).Object;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pSVar9 = local_88;
  if ((local_88 == (SMultiLineEditableTextBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48.Object = (SWidget *)local_88;
  local_48.SharedReferenceCount.ReferenceController = pTStack_80;
  if ((pSVar9 == (SMultiLineEditableTextBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SBoxPanel::RemoveSlot(this_00,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((this->TextBlock).Object == (STextBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_68.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_68.bIsSet = true;
  local_68.Getter._16_8_ = 0;
  local_68.Getter._0_8_ = 0;
  local_68.Getter._8_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->TextBlock).Object,&local_68);
  pFVar7 = FText::GetEmpty();
  SetTextBoxError(this,pFVar7);
  pFVar8 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar8 + 0x98))(pFVar8,&local_78);
  if (local_78 != (SMultiLineEditableTextBox *)0x0) {
    if (this->bIsMultiLine == 0) {
      pSVar9 = (SMultiLineEditableTextBox *)(this->TextBox).Object;
      pTVar10 = (this->TextBox).SharedReferenceCount.ReferenceController;
    }
    else {
      pSVar9 = (this->MultiLineTextBox).Object;
      pTVar10 = (this->MultiLineTextBox).SharedReferenceCount.ReferenceController;
    }
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (local_78 == pSVar9) {
      local_98.SharedReferenceCount.ReferenceController =
           (this->WidgetToFocus).WeakReferenceCount.ReferenceController;
      local_98.Object = (SWidget *)0x0;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1429e7ddb;
          }
          LOCK();
          aVar6 = (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar5 = aVar2 == aVar6;
          if (bVar5) {
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar2 + 1);
            aVar6 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar6;
        } while (!bVar5);
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          local_98.Object = (this->WidgetToFocus).Object;
        }
      }
LAB_1429e7ddb:
      if (local_98.Object == (SWidget *)0x0) {
        pFVar8 = FSlateApplication::Get();
        FSlateApplication::ClearKeyboardFocus(pFVar8,SetDirectly);
      }
      else {
        pFVar8 = FSlateApplication::Get();
        FSlateApplication::SetKeyboardFocus(pFVar8,&local_98,SetDirectly);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
  }
  if (&this->WidgetToFocus != (TWeakPtr<SWidget,1> *)local_20) {
    pTVar10 = (this->WidgetToFocus).WeakReferenceCount.ReferenceController;
    (this->WidgetToFocus).Object = (SWidget *)0x0;
    (this->WidgetToFocus).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar10->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  return;
}

// GetEditableTextWidget @ 1429eb670

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SInlineEditableTextBlock::GetEditableTextWidget
          (SInlineEditableTextBlock *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (this->bIsMultiLine == 0) {
    __return_storage_ptr__->Object = (SWidget *)(this->TextBox).Object;
    pTVar1 = (this->TextBox).SharedReferenceCount.ReferenceController;
  }
  else {
    __return_storage_ptr__->Object = (SWidget *)(this->MultiLineTextBox).Object;
    pTVar1 = (this->MultiLineTextBox).SharedReferenceCount.ReferenceController;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetText @ 1429eed00

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SInlineEditableTextBlock::GetText(SInlineEditableTextBlock *this,FText *__return_storage_ptr__)

{
  SMultiLineEditableTextBox *pSVar1;
  FSlateEditableTextLayout *pFVar2;
  SEditableTextBox *pSVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  if (this->bIsMultiLine == 0) {
    if ((this->TextBox).Object == (SEditableTextBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
    }
    pSVar3 = (this->TextBox).Object;
    if ((pSVar3->EditableText).Object == (SEditableText *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
    }
    SEditableText::GetText((pSVar3->EditableText).Object,&local_18);
    FText::FText(__return_storage_ptr__,&local_18);
  }
  else {
    if ((this->MultiLineTextBox).Object == (SMultiLineEditableTextBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
    }
    pSVar1 = (this->MultiLineTextBox).Object;
    if ((pSVar1->EditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
    }
    pFVar2 = (((pSVar1->EditableText).Object)->EditableTextLayout).Ptr;
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = IsInSlateThread();
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInSlateThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                           ,0x10b,
                           L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar4)();
          return pFVar6;
        }
      }
    }
    pFVar6 = FText::GetEmpty();
    if ((pFVar2->BoundText).bIsSet != false) {
      pFVar6 = TAttribute<FText>::Get(&pFVar2->BoundText);
    }
    local_28.TextData.Reference = (pFVar6->TextData).Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 8))
                (local_28.TextData.Reference,local_res8);
    }
    local_28.Flags = pFVar6->Flags;
    FText::FText(__return_storage_ptr__,&local_28);
    local_18.TextData.Reference = local_28.TextData.Reference;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsInEditMode @ 1429f5ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SInlineEditableTextBlock::IsInEditMode(SInlineEditableTextBlock *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
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
  return (TEnumAsByte<EVisibility::Private>)
         *(uchar *)((longlong)&((this->TextBlock).Object)->_padding_ + 1) ==
         EVisibility::Collapsed.Value.Value;
}

// OnDragOver @ 1429f9d90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInlineEditableTextBlock::OnDragOver
          (SInlineEditableTextBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FActiveTimerHandle *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FReply *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  pTVar6 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429f9dd0;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (this->ActiveTimerHandle).Object;
    if (pFVar1 != (FActiveTimerHandle *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = pFVar1;
      local_18.SharedReferenceCount.ReferenceController = pTVar6;
      if ((pFVar1 == (FActiveTimerHandle *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
      SWidget::UnRegisterActiveTimer((SWidget *)this,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_1429f9dd0:
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnKeyDown @ 1429fa560

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInlineEditableTextBlock::OnKeyDown
          (SInlineEditableTextBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::F2.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    EnterEditingMode(this);
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1429facd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInlineEditableTextBlock::OnMouseButtonDoubleClick
          (SInlineEditableTextBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FActiveTimerHandle *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FReply *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  pTVar6 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429fad10;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (this->ActiveTimerHandle).Object;
    if (pFVar1 != (FActiveTimerHandle *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = pFVar1;
      local_18.SharedReferenceCount.ReferenceController = pTVar6;
      if ((pFVar1 == (FActiveTimerHandle *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
      SWidget::UnRegisterActiveTimer((SWidget *)this,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_1429fad10:
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1429fb0d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInlineEditableTextBlock::OnMouseButtonDown
          (SInlineEditableTextBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  bool *pbVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TSharedRef<FActiveTimerHandle,1> *pTVar11;
  bool bVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_88;
  TSharedRef<FActiveTimerHandle,1> local_78;
  FKey local_68;
  FDestructionSentinel local_50;
  TSharedPtr<FKeyDetails,1> *local_38;
  
  bVar3 = false;
  bVar2 = false;
  bVar12 = false;
  if (this->bDelayedLeftClickEntersEditMode != '\0') {
    local_68.KeyName = EKeys::LeftMouseButton.KeyName;
    local_68.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
    local_68.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = FPointerEvent::IsMouseButtonDown(param_2,&local_68);
    if (((bVar5) && ((param_2->_padding_ & 0xc) == 0)) && ((param_2->_padding_ & 3) == 0)) {
      bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsSelected);
      if (bVar5) {
        bVar5 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute(&this->IsSelected)
        ;
        if (((bVar5) && (pbVar7 = TAttribute<bool>::Get(&this->bIsReadOnly), *pbVar7 == false)) &&
           (((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0 ||
            ((pTVar13 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
             pTVar13 == (TReferenceControllerBase<1> *)0x0 ||
             ((int)pTVar13->SharedReferenceCount < 1)))))) {
          local_68.KeyName.ComparisonIndex.Value = 0;
          local_68.KeyName.Number = 0;
          local_68.KeyDetails.Object = (FKeyDetails *)0x0;
          local_68.KeyDetails.SharedReferenceCount.ReferenceController =
               local_68.KeyDetails.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_68,
                     (FWriteAccessScope *)&local_50);
          local_38 = &local_68.KeyDetails;
          puVar8 = UE::Core::Private::DelegateAllocate
                             (0x38,(FDelegateAllocation *)&local_68.KeyDetails);
          uVar4 = local_78.SharedReferenceCount.ReferenceController._4_4_;
          if (puVar8 == (undefined8 *)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
          }
          else {
            pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                               ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
            pTVar13 = (pTVar9->SharedReferenceCount).ReferenceController;
            pSVar1 = pTVar9->Object;
            if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
              UNLOCK();
            }
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar10 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar10;
            *puVar8 = &
                      ___7__TBaseSPMethodDelegateInstance__0A_VSInlineEditableTextBlock___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar8[3] = pSVar1;
            puVar8[4] = pTVar13;
            if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
              UNLOCK();
            }
            bVar3 = true;
            bVar2 = true;
            bVar12 = true;
            puVar8[5] = TriggerEditMode;
            puVar8[6] = (ulonglong)uVar4 << 0x20;
          }
          if (bVar12) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar13);
          }
          if (bVar2) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar13);
          }
          if (bVar3) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_88.SharedReferenceCount.ReferenceController);
          }
          if (local_50.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
          }
          pTVar11 = SWidget::RegisterActiveTimer
                              ((SWidget *)this,&local_78,__real_3f000000,
                               (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                                *)&local_68);
          TWeakPtr<FActiveTimerHandle,1>::operator=<FActiveTimerHandle>
                    (&this->ActiveTimerHandle,pTVar11);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)
                     CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                              local_78.SharedReferenceCount.ReferenceController._0_4_));
        }
      }
      else {
        cVar6 = (**(code **)(this->_padding_ + 0x1a0))(this);
        if ((cVar6 != '\0') &&
           (pbVar7 = TAttribute<bool>::Get(&this->bIsReadOnly), *pbVar7 == false)) {
          EnterEditingMode(this);
          bVar12 = true;
          goto LAB_1429fb302;
        }
      }
    }
  }
  bVar12 = false;
LAB_1429fb302:
  FReply::FReply(__return_storage_ptr__,bVar12);
  return __return_storage_ptr__;
}

// OnTextBoxCommitted @ 142a01820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::OnTextBoxCommitted
          (SInlineEditableTextBlock *this,FText *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FText *pFVar4;
  int *piVar5;
  STextBlock *this_00;
  TAttribute<FText> *pTVar6;
  longlong *plVar7;
  undefined1 local_res18 [16];
  FText local_c8;
  FText local_b8;
  ITextData *local_a8;
  uint local_a0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  TAttribute<FText> local_50;
  
  if (param_2 == OnCleared) {
    pFVar4 = TAttribute<FText>::Get(&this->Text);
    local_a8 = (pFVar4->TextData).Reference;
    if (local_a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8 + 8))(local_a8,local_res18);
    }
    local_a0 = pFVar4->Flags;
    ExitEditingMode(this);
    SetEditableText(this,&this->Text);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnTextCommittedDelegate,&local_98);
    if ((*(int *)&(this->OnTextCommittedDelegate).field_0x10 != 0) &&
       (plVar7 = *(longlong **)&(this->OnTextCommittedDelegate).field_0x8, plVar7 != (longlong *)0x0
       )) {
      (**(code **)(*plVar7 + 0x68))(plVar7,&local_a8,3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    if (local_a8 == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_a8 + 0x10))();
    return;
  }
  if (((this->TextBlock).Object == (STextBlock *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)((longlong)&((this->TextBlock).Object)->_padding_ + 1) !=
      EVisibility::Collapsed.Value.Value) {
    return;
  }
  if (param_2 == OnEnter) {
    FText::FText(&local_c8);
    piVar5 = TAttribute<int>::Get(&this->MaximumLength);
    bVar2 = FTextEditHelper::VerifyTextLength(param_1,&local_c8,*piVar5);
    if (bVar2) {
      bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged);
      local_b8.TextData.Reference = local_c8.TextData.Reference;
      if (!bVar2) {
LAB_142a01aab:
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        ExitEditingMode(this);
        TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnTextCommittedDelegate,param_1,param_2);
        bVar2 = TAttribute<FText>::IsBound(&this->Text);
        if (bVar2) {
          return;
        }
        this_00 = TSharedPtr<STextBlock,1>::operator->(&this->TextBlock);
        pTVar6 = TAttribute<FText>::TAttribute<FText>(&local_50,&this->Text);
        STextBlock::SetText(this_00,pTVar6);
        return;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnVerifyTextChanged,&local_80);
      if (*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8;
      }
      cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7,param_1,&local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      local_b8.TextData.Reference = local_c8.TextData.Reference;
      if (cVar3 != '\0') goto LAB_142a01aab;
    }
    SetTextBoxError(this,&local_c8);
  }
  else {
    if ((param_2 & ~OnUserMovedFocus) != Default) {
      ExitEditingMode(this);
      SetEditableText(this,&this->Text);
      pFVar4 = TAttribute<FText>::Get(&this->Text);
      TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->OnTextCommittedDelegate,pFVar4,param_2);
      return;
    }
    FText::FText(&local_b8);
    piVar5 = TAttribute<int>::Get(&this->MaximumLength);
    bVar2 = FTextEditHelper::VerifyTextLength(param_1,&local_b8,*piVar5);
    if (bVar2) {
      bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged);
      if (!bVar2) goto LAB_142a01aab;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnVerifyTextChanged,&local_68);
      if (*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8;
      }
      cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7,param_1,&local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      if (cVar3 != '\0') goto LAB_142a01aab;
    }
    ExitEditingMode(this);
    SetEditableText(this,&this->Text);
    pFVar4 = TAttribute<FText>::Get(&this->Text);
    TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->OnTextCommittedDelegate,pFVar4,param_2);
    local_c8.TextData.Reference = local_b8.TextData.Reference;
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  return;
}

// OnTextChanged @ 142a01b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::OnTextChanged(SInlineEditableTextBlock *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  FText *pFVar5;
  longlong *plVar6;
  FText local_38;
  FReadAccessScope local_28;
  
  if (((this->TextBlock).Object == (STextBlock *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)((longlong)&((this->TextBlock).Object)->_padding_ + 1) !=
      EVisibility::Collapsed.Value.Value) {
    return;
  }
  FText::FText(&local_38);
  piVar4 = TAttribute<int>::Get(&this->MaximumLength);
  bVar2 = FTextEditHelper::VerifyTextLength(param_1,&local_38,*piVar4);
  if (bVar2) {
    bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged);
    if (bVar2) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnVerifyTextChanged,&local_28);
      if (*(int *)&(this->OnVerifyTextChanged).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->OnVerifyTextChanged).field_0x8;
      }
      cVar3 = (**(code **)(*plVar6 + 0x60))(plVar6,param_1,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (cVar3 == '\0') goto LAB_142a01c61;
    }
    pFVar5 = FText::GetEmpty();
  }
  else {
LAB_142a01c61:
    pFVar5 = &local_38;
  }
  SetTextBoxError(this,pFVar5);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// SetEditableText @ 142a09310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetEditableText(SInlineEditableTextBlock *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsMultiLine == 0) {
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
    SEditableTextBox::SetText((this->TextBox).Object,&this->Text);
    return;
  }
  if ((this->MultiLineTextBox).Object == (SMultiLineEditableTextBox *)0x0) {
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
  SMultiLineEditableTextBox::SetText((this->MultiLineTextBox).Object,&this->Text);
  return;
}

// SetHighlightText @ 142a09eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetHighlightText
          (SInlineEditableTextBlock *this,TAttribute<FText> *param_1)

{
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
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
  local_40._0_8_ = (param_1->Value).TextData.Reference;
  pSVar1 = (this->TextBlock).Object;
  if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res8);
  }
  local_40._8_4_ = (param_1->Value).Flags;
  local_40[0x10] = param_1->bIsSet;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,&param_1->Getter)
  ;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&pSVar1->HighlightText,(SWidget *)pSVar1,(TAttribute<FText> *)local_40,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
  }
  return;
}

// SetHintText @ 142a0a4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetHintText(SInlineEditableTextBlock *this,TAttribute<FText> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  TAttribute<FText>::operator=(&this->HintText,param_1);
  if (this->bIsMultiLine == 0) {
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
    SEditableTextBox::SetHintText((this->TextBox).Object,param_1);
    return;
  }
  if ((this->MultiLineTextBox).Object == (SMultiLineEditableTextBox *)0x0) {
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
  SMultiLineEditableTextBox::SetHintText((this->MultiLineTextBox).Object,param_1);
  return;
}

// SetMaximumLength @ 142a0ad60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetMaximumLength(SInlineEditableTextBlock *this,TAttribute<int> *param_1)

{
  (this->MaximumLength).Value = param_1->Value;
  (this->MaximumLength).bIsSet = param_1->bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaximumLength).Getter,&param_1->Getter);
  return;
}

// SetOnEnterEditingMode @ 142a0afa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetOnEnterEditingMode
          (SInlineEditableTextBlock *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnterEditingMode,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnExitEditingMode @ 142a0afe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetOnExitEditingMode
          (SInlineEditableTextBlock *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExitEditingMode,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnExitEditingMode @ 142a0b020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetOnExitEditingMode
          (SInlineEditableTextBlock *this,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsSelected,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnTextCommitted @ 142a0b060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetOnTextCommitted
          (SInlineEditableTextBlock *this,
          TDelegate<void___cdecl(FText_const_&,ETextCommit::Type),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommittedDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnVerifyTextChanged @ 142a0b0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetOnVerifyTextChanged
          (SInlineEditableTextBlock *this,
          TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOverflowPolicy @ 142a0b260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetOverflowPolicy
          (SInlineEditableTextBlock *this,TOptional<ETextOverflowPolicy> param_1)

{
  char cVar1;
  STextBlock *this_00;
  FSlateTextBlockLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined6 in_register_00000012;
  undefined1 uVar5;
  undefined1 local_res8;
  char local_res9;
  
  if (((this->TextBlock).Object == (STextBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (this->TextBlock).Object;
  cVar1 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
  pFVar2 = (this_00->TextLayoutCache).Ptr;
  uVar5 = local_res8;
  if (cVar1 != '\0') {
    uVar5 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
  }
  if (((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cVar1 != '\0') {
    local_res8 = uVar5;
  }
  local_res9 = cVar1;
  FTextLayout::SetTextOverflowPolicy
            ((FTextLayout *)(pFVar2->TextLayout).Object,SUB82(&local_res8,0));
  if ((this_00->bSimpleTextMode != false) && ((this_00->CachedSimpleDesiredSize).bIsSet != false)) {
    (this_00->CachedSimpleDesiredSize).bIsSet = false;
  }
  SWidget::Invalidate((SWidget *)this_00,Layout);
  return;
}

// SetReadOnly @ 142a0b740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetReadOnly(SInlineEditableTextBlock *this,TAttribute<bool> *param_1)

{
  (this->bIsReadOnly).Value = param_1->Value;
  (this->bIsReadOnly).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsReadOnly).Getter,&param_1->Getter);
  return;
}

// SetText @ 142a0c3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetText(SInlineEditableTextBlock *this,TAttribute<FText> *param_1)

{
  TAttribute<FText> *this_00;
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  undefined1 local_res8 [8];
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  undefined1 local_48 [24];
  undefined1 local_30 [8];
  ForAnyElementType FStack_28;
  int local_20;
  
  this_00 = &this->Text;
  TAttribute<FText>::operator=(this_00,param_1);
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
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
  local_48._0_8_ = (this_00->Value).TextData.Reference;
  pSVar1 = (this->TextBlock).Object;
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 8))(local_48._0_8_,local_res8);
  }
  local_48._8_4_ = (this->Text).Value.Flags;
  local_48[0x10] = (this->Text).bIsSet;
  local_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_30,
             &(this->Text).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,&local_60);
  if ((local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)FStack_28.Data + 0x38))();
    if (cVar4 != '\0') {
      uVar5 = 1;
      goto LAB_142a0c4c7;
    }
  }
  uVar5 = 0;
LAB_142a0c4c7:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags & 0xfffe;
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags | uVar5;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&pSVar1->BoundText,(SWidget *)pSVar1,(TAttribute<FText> *)local_48,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_78);
  if ((local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
  }
  SetEditableText(this,this_00);
  return;
}

// SetText @ 142a0c5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SInlineEditableTextBlock::SetText(SInlineEditableTextBlock *this,FString *param_1)

{
  TAttribute<FText> *this_00;
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  ushort uVar6;
  undefined1 local_res8 [8];
  undefined1 local_d8 [24];
  undefined1 local_c0 [8];
  ForAnyElementType FStack_b8;
  int local_b0;
  FText local_a8;
  bool local_98;
  undefined1 local_90 [8];
  ForAnyElementType FStack_88;
  ulonglong local_80;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FText local_48;
  FReadAccessScope local_38;
  
  pFVar5 = FText::FromString(&local_48,param_1);
  FText::FText(&local_a8,pFVar5);
  local_98 = true;
  this_00 = &this->Text;
  local_80 = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&this_00->Value,&local_a8);
  (this->Text).bIsSet = local_98;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
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
  local_d8._0_8_ = (this_00->Value).TextData.Reference;
  pSVar1 = (this->TextBlock).Object;
  if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 8))(local_d8._0_8_,local_res8);
  }
  local_d8._8_4_ = (this->Text).Value.Flags;
  local_d8[0x10] = (this->Text).bIsSet;
  local_c0 = (undefined1  [8])0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_c0,
             &(this->Text).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,&local_38);
  if ((local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)FStack_b8.Data + 0x38))();
    if (cVar4 != '\0') {
      uVar6 = 1;
      goto LAB_142a0c742;
    }
  }
  uVar6 = 0;
LAB_142a0c742:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags & 0xfffe;
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags | uVar6;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&pSVar1->BoundText,(SWidget *)pSVar1,(TAttribute<FText> *)local_d8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)&local_60);
  if ((local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
  }
  SetEditableText(this,this_00);
  return;
}

// SetTextBoxError @ 142a0cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetTextBoxError(SInlineEditableTextBlock *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsMultiLine == 0) {
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
    SEditableTextBox::SetError((this->TextBox).Object,param_1);
    return;
  }
  if ((this->MultiLineTextBox).Object == (SMultiLineEditableTextBox *)0x0) {
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
  SMultiLineEditableTextBox::SetError((this->MultiLineTextBox).Object,param_1);
  return;
}

// SetWrapTextAt @ 142a0db80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInlineEditableTextBlock::SetWrapTextAt(SInlineEditableTextBlock *this,TAttribute<float> *param_1)

{
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  float local_res8 [2];
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
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
  local_30._0_4_ = param_1->Value;
  local_30[4] = param_1->bIsSet;
  pSVar1 = (this->TextBlock).Object;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,&param_1->Getter)
  ;
  local_res8[0] = 0.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->WrapTextAt,(SWidget *)pSVar1,(TAttribute<float> *)local_30,local_res8,None);
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
  return;
}

// SupportsKeyboardFocus @ 142a0f220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SInlineEditableTextBlock::SupportsKeyboardFocus(SInlineEditableTextBlock *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->IsSelected,&local_28);
  if ((*(int *)&(this->IsSelected).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->IsSelected).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return false;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// TriggerEditMode @ 142a10bc0

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SInlineEditableTextBlock::TriggerEditMode
          (SInlineEditableTextBlock *this,double param_1,float param_2)

{
  bool bVar1;
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  bVar1 = FSlateApplication::IsDragDropping(this_00);
  if (!bVar1) {
    EnterEditingMode(this);
  }
  return Stop;
}

