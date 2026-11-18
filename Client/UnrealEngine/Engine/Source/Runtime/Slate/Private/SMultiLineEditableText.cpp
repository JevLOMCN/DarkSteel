// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 113

// SMultiLineEditableText @ 1429ba2a0

/* WARNING: Enum "Type": Some values do not have unique names */

SMultiLineEditableText * __thiscall
SMultiLineEditableText::SMultiLineEditableText(SMultiLineEditableText *this)

{
  SWidget::SWidget((SWidget *)this);
  this->_padding_ = (longlong)&_vftable__for__SWidget__;
  this->_padding_ = (longlong)&_vftable__for__ISlateEditableTextWidget__;
  (this->EditableTextLayout).Ptr = (FSlateEditableTextLayout *)0x0;
  (this->bAllowMultiLine).Value = false;
  (this->bAllowMultiLine).bIsSet = false;
  *(undefined8 *)&(this->bAllowMultiLine).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bAllowMultiLine).Getter = 0;
  *(undefined8 *)&(this->bAllowMultiLine).Getter.field_0x8 = 0;
  (this->bSelectAllTextWhenFocused).Value = false;
  (this->bSelectAllTextWhenFocused).bIsSet = true;
  *(undefined8 *)&(this->bSelectAllTextWhenFocused).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bSelectAllTextWhenFocused).Getter = 0;
  *(undefined8 *)&(this->bSelectAllTextWhenFocused).Getter.field_0x8 = 0;
  (this->bClearTextSelectionOnFocusLoss).Value = false;
  (this->bClearTextSelectionOnFocusLoss).bIsSet = false;
  *(undefined8 *)&(this->bClearTextSelectionOnFocusLoss).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bClearTextSelectionOnFocusLoss).Getter = 0;
  *(undefined8 *)&(this->bClearTextSelectionOnFocusLoss).Getter.field_0x8 = 0;
  (this->bSelectWordOnMouseDoubleClick).Value = false;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = false;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter = 0;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8 = 0;
  (this->bRevertTextOnEscape).Value = false;
  (this->bRevertTextOnEscape).bIsSet = false;
  *(undefined8 *)&(this->bRevertTextOnEscape).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bRevertTextOnEscape).Getter = 0;
  *(undefined8 *)&(this->bRevertTextOnEscape).Getter.field_0x8 = 0;
  (this->bClearKeyboardFocusOnCommit).Value = false;
  (this->bClearKeyboardFocusOnCommit).bIsSet = false;
  *(undefined8 *)&(this->bClearKeyboardFocusOnCommit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bClearKeyboardFocusOnCommit).Getter = 0;
  *(undefined8 *)&(this->bClearKeyboardFocusOnCommit).Getter.field_0x8 = 0;
  (this->bAllowContextMenu).Value = false;
  (this->bAllowContextMenu).bIsSet = false;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x8 = 0;
  (this->bIsReadOnly).Value = false;
  (this->bIsReadOnly).bIsSet = true;
  *(undefined8 *)&(this->bIsReadOnly).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bIsReadOnly).Getter = 0;
  *(undefined8 *)&(this->bIsReadOnly).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnContextMenuOpening = 0;
  *(undefined8 *)&(this->OnContextMenuOpening).field_0x8 = 0;
  *(undefined4 *)&(this->OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->OnIsTypedCharValid = 0;
  *(undefined8 *)&(this->OnIsTypedCharValid).field_0x8 = 0;
  *(undefined4 *)&(this->OnIsTypedCharValid).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginTextEditCallback = 0;
  *(undefined8 *)&(this->OnBeginTextEditCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnBeginTextEditCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnTextChangedCallback = 0;
  *(undefined8 *)&(this->OnTextChangedCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextChangedCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommittedCallback = 0;
  *(undefined8 *)&(this->OnTextCommittedCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextCommittedCallback).field_0x10 = 0;
  *(undefined8 *)&this->OnCursorMovedCallback = 0;
  *(undefined8 *)&(this->OnCursorMovedCallback).field_0x8 = 0;
  *(undefined4 *)&(this->OnCursorMovedCallback).field_0x10 = 0;
  (this->HScrollBar).Object = (SScrollBar *)0x0;
  (this->HScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->VScrollBar).Object = (SScrollBar *)0x0;
  (this->VScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnHScrollBarUserScrolled = 0;
  *(undefined8 *)&(this->OnHScrollBarUserScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->OnHScrollBarUserScrolled).field_0x10 = 0;
  *(undefined8 *)&this->OnVScrollBarUserScrolled = 0;
  *(undefined8 *)&(this->OnVScrollBarUserScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->OnVScrollBarUserScrolled).field_0x10 = 0;
  (this->MenuExtender).Object = (FExtender *)0x0;
  (this->MenuExtender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->ActiveTickTimer).Object = (FActiveTimerHandle *)0x0;
  (this->ActiveTickTimer).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AmountScrolledWhileRightMouseDown = 0.0;
  this->bIsSoftwareCursor = false;
  *(undefined8 *)&this->OnKeyCharHandler = 0;
  *(undefined8 *)&(this->OnKeyCharHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnKeyCharHandler).field_0x10 = 0;
  *(undefined8 *)&this->OnKeyDownHandler = 0;
  *(undefined8 *)&(this->OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnKeyDownHandler).field_0x10 = 0;
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  (this->VirtualKeyboardTrigger).Value = OnFocusByPointer;
  (this->VirtualKeyboardTrigger).bIsSet = false;
  *(undefined8 *)&(this->VirtualKeyboardTrigger).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->VirtualKeyboardTrigger).Getter = 0;
  *(undefined8 *)&(this->VirtualKeyboardTrigger).Getter.field_0x8 = 0;
  (this->VirtualKeyboardDismissAction).Value = TextChangeOnDismiss;
  (this->VirtualKeyboardDismissAction).bIsSet = false;
  *(undefined8 *)&(this->VirtualKeyboardDismissAction).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->VirtualKeyboardDismissAction).Getter = 0;
  *(undefined8 *)&(this->VirtualKeyboardDismissAction).Getter.field_0x8 = 0;
  return this;
}

// ~SMultiLineEditableText @ 1429bf600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::~SMultiLineEditableText(SMultiLineEditableText *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateEditableTextLayout *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__SWidget__;
  this->_padding_ = (longlong)&_vftable__for__ISlateEditableTextWidget__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->VirtualKeyboardDismissAction).Getter);
  pvVar3 = *(void **)&(this->VirtualKeyboardDismissAction).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->VirtualKeyboardDismissAction).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VirtualKeyboardTrigger).Getter);
  pvVar3 = *(void **)&(this->VirtualKeyboardTrigger).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->VirtualKeyboardTrigger).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler);
  pvVar3 = *(void **)&(this->OnKeyDownHandler).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyCharHandler);
  pvVar3 = *(void **)&(this->OnKeyCharHandler).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeyCharHandler);
  pTVar4 = (this->ActiveTickTimer).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuExtender).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVScrollBarUserScrolled);
  pvVar3 = *(void **)&(this->OnVScrollBarUserScrolled).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVScrollBarUserScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHScrollBarUserScrolled);
  pvVar3 = *(void **)&(this->OnHScrollBarUserScrolled).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHScrollBarUserScrolled);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HScrollBar).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCursorMovedCallback);
  pvVar3 = *(void **)&(this->OnCursorMovedCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCursorMovedCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommittedCallback);
  pvVar3 = *(void **)&(this->OnTextCommittedCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommittedCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedCallback);
  pvVar3 = *(void **)&(this->OnTextChangedCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChangedCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBeginTextEditCallback);
  pvVar3 = *(void **)&(this->OnBeginTextEditCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeginTextEditCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsTypedCharValid);
  pvVar3 = *(void **)&(this->OnIsTypedCharValid).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIsTypedCharValid);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening);
  pvVar3 = *(void **)&(this->OnContextMenuOpening).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsReadOnly).Getter);
  pvVar3 = *(void **)&(this->bIsReadOnly).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsReadOnly).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bAllowContextMenu).Getter);
  pvVar3 = *(void **)&(this->bAllowContextMenu).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bAllowContextMenu).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bClearKeyboardFocusOnCommit).Getter);
  pvVar3 = *(void **)&(this->bClearKeyboardFocusOnCommit).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bClearKeyboardFocusOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bRevertTextOnEscape).Getter);
  pvVar3 = *(void **)&(this->bRevertTextOnEscape).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bRevertTextOnEscape).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bSelectWordOnMouseDoubleClick).Getter);
  pvVar3 = *(void **)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bSelectWordOnMouseDoubleClick).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bClearTextSelectionOnFocusLoss).Getter);
  pvVar3 = *(void **)&(this->bClearTextSelectionOnFocusLoss).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bClearTextSelectionOnFocusLoss).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bSelectAllTextWhenFocused).Getter)
  ;
  pvVar3 = *(void **)&(this->bSelectAllTextWhenFocused).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bSelectAllTextWhenFocused).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bAllowMultiLine).Getter);
  pvVar3 = *(void **)&(this->bAllowMultiLine).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bAllowMultiLine).Getter);
  this_00 = (this->EditableTextLayout).Ptr;
  if (this_00 != (FSlateEditableTextLayout *)0x0) {
    FSlateEditableTextLayout::~FSlateEditableTextLayout(this_00);
    ::operator_delete(this_00,0xa50);
  }
  SWidget::~SWidget((SWidget *)this);
  return;
}

// AdvanceSearch @ 1429c73e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::AdvanceSearch(SMultiLineEditableText *this,bool param_1)

{
  FSlateEditableTextLayout::AdvanceSearch((this->EditableTextLayout).Ptr,param_1);
  return;
}

// AnyTextSelected @ 1429c7510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::AnyTextSelected(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *pFVar1;
  TOptional<FTextLocation> *pTVar2;
  int iVar3;
  TOptional<FTextLocation> local_res8 [2];
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  local_res8[0].TypedValue.LineIndex = (pFVar1->CursorInfo).CursorPosition.LineIndex;
  iVar3 = (pFVar1->CursorInfo).CursorPosition.Offset +
          (uint)((pFVar1->CursorInfo).CursorAlignment == Right);
  local_res8[0].TypedValue.Offset = 0;
  if (0 < iVar3) {
    local_res8[0].TypedValue.Offset = iVar3;
  }
  pTVar2 = local_res8;
  if ((pFVar1->SelectionStart).bIsSet != false) {
    pTVar2 = &pFVar1->SelectionStart;
  }
  if (((pTVar2->TypedValue).LineIndex == local_res8[0].TypedValue.LineIndex) &&
     ((pTVar2->TypedValue).Offset == local_res8[0].TypedValue.Offset)) {
    return false;
  }
  return true;
}

// ApplyToSelection @ 1429c8100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::ApplyToSelection
          (SMultiLineEditableText *this,FRunInfo *param_1,FTextBlockStyle *param_2)

{
  FSlateEditableTextLayout::ApplyToSelection((this->EditableTextLayout).Ptr,param_1,param_2);
  return;
}

// BeginEditTransaction @ 1429caa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::BeginEditTransaction(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout::BeginEditTransation((this->EditableTextLayout).Ptr);
  return;
}

// BeginSearch @ 1429cae40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::BeginSearch
          (SMultiLineEditableText *this,FText *param_1,Type param_2,bool param_3)

{
  FSlateEditableTextLayout::BeginSearch((this->EditableTextLayout).Ptr,param_1,param_2,param_3);
  return;
}

// BuildContextMenuContent @ 1429cae60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SMultiLineEditableText::BuildContextMenuContent
          (SMultiLineEditableText *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool *pbVar3;
  TSharedRef<SWidget,1> *pTVar4;
  longlong *plVar5;
  FReadAccessScope local_28;
  
  pbVar3 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
  if (*pbVar3 == false) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_28);
      if ((int)this->_padding_ == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)this->_padding_;
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,__return_storage_ptr__);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pTVar4 = FSlateEditableTextLayout::BuildDefaultContextMenu
                     ((FSlateEditableTextLayout *)this->_padding_,(TSharedRef<SWidget,1> *)&local_28
                      ,(TSharedPtr<FExtender,1> *)&this->_padding_);
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
  return __return_storage_ptr__;
}

// CacheDesiredSize @ 1429cc8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::CacheDesiredSize(SMultiLineEditableText *this,float param_1)

{
  FSlateEditableTextLayout::CacheDesiredSize((this->EditableTextLayout).Ptr,param_1);
  SWidget::CacheDesiredSize((SWidget *)this,param_1);
  return;
}

// CanInsertCarriageReturn @ 1429cce90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::CanInsertCarriageReturn(SMultiLineEditableText *this)

{
  longlong lVar1;
  bool bVar2;
  FModifierKeysState FVar3;
  FSlateApplication *this_00;
  undefined6 extraout_var;
  bool bVar5;
  byte *pbVar4;
  
  this_00 = FSlateApplication::Get();
  FVar3 = FSlateApplication::GetModifierKeys(this_00);
  pbVar4 = (byte *)CONCAT62(extraout_var,FVar3);
  lVar1 = this->_padding_;
  bVar5 = true;
  if ((lVar1 & 4) != 0) {
    bVar5 = (*pbVar4 & 3) != 0;
  }
  bVar2 = bVar5;
  if (((lVar1 & 8) != 0) && (bVar2 = false, (*pbVar4 & 0xc0) != 0)) {
    bVar2 = bVar5;
  }
  bVar5 = bVar2;
  if (((lVar1 & 1) != 0) && (bVar5 = false, (*pbVar4 & 0xc) != 0)) {
    bVar5 = bVar2;
  }
  bVar2 = bVar5;
  if (((lVar1 & 2) != 0) && (bVar2 = false, (*pbVar4 & 0x30) != 0)) {
    bVar2 = bVar5;
  }
  return bVar2;
}

// CanTypeCharacter @ 1429ccf20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SMultiLineEditableText::CanTypeCharacter(SMultiLineEditableText *this,wchar_t param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_28);
      if ((int)this->_padding_ == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)this->_padding_;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return param_1 != L'\t';
}

// ClearSelection @ 1429cd5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::ClearSelection(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *pFVar1;
  undefined1 local_18 [24];
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if (((TOptional<FTextLocation> *)local_18 != &pFVar1->SelectionStart) &&
     ((pFVar1->SelectionStart).bIsSet != false)) {
    (pFVar1->SelectionStart).bIsSet = false;
  }
  return;
}

// ComputeDesiredSize @ 1429ce760

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SMultiLineEditableText::ComputeDesiredSize
          (SMultiLineEditableText *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FSlateEditableTextLayout::ComputeDesiredSize
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1429cfd60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::ComputeVolatility(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *pFVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  FReadAccessScope local_28;
  
  cVar3 = (**(code **)(this->_padding_ + 0x1a0))();
  if (cVar3 == '\0') {
    pFVar1 = (this->EditableTextLayout).Ptr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar1->BoundText).Getter
               ,&local_28);
    if (((*(int *)&(pFVar1->BoundText).Getter.field_0x10 != 0) &&
        (plVar2 = *(longlong **)&(pFVar1->BoundText).Getter.field_0x8, plVar2 != (longlong *)0x0))
       && (cVar3 = (**(code **)(*plVar2 + 0x38))(), cVar3 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar4 = TAttribute<FText>::IsBound(&pFVar1->HintText);
    if (((((!bVar4) && (bVar4 = TAttribute<FText>::IsBound(&pFVar1->BoundSearchText), !bVar4)) &&
         ((bVar4 = TAttribute<float>::IsBound(&pFVar1->WrapTextAt), !bVar4 &&
          ((bVar4 = TAttribute<bool>::IsBound(&pFVar1->AutoWrapText), !bVar4 &&
           (bVar4 = TAttribute<enum_ETextWrappingPolicy>::IsBound(&pFVar1->WrappingPolicy), !bVar4))
          )))) && (bVar4 = TAttribute<FMargin>::IsBound(&pFVar1->Margin), !bVar4)) &&
       (((bVar4 = TAttribute<enum_ETextJustify::Type>::IsBound(&pFVar1->Justification), !bVar4 &&
         (bVar4 = TAttribute<float>::IsBound(&pFVar1->LineHeightPercentage), !bVar4)) &&
        (bVar4 = TAttribute<bool>::IsBound(&this->bIsReadOnly), !bVar4)))) {
      return false;
    }
  }
  return true;
}

// Construct @ 1429d3910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::Construct(SMultiLineEditableText *this,FArguments *param_1)

{
  TDelegate<EVirtualKeyboardTrigger___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<EVirtualKeyboardTrigger___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TSharedPtr<SScrollBar,1> *pTVar1;
  TUniquePtr<FSlateEditableTextLayout,TDefaultDelete<FSlateEditableTextLayout>_> *pTVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FExtender *this_02;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  bool *pbVar9;
  SScrollBar *pSVar10;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar11;
  FSlateFontInfo *pFVar12;
  TSharedRef<FPlainTextLayoutMarshaller,1> *pTVar13;
  FTextBlockStyle *pFVar14;
  TRawPtrProxy<FExtender> this_03;
  undefined8 *puVar15;
  ulong64 uVar16;
  FSlateEditableTextLayout *pFVar17;
  FName *pFVar18;
  FPlainTextLayoutMarshaller *pFVar19;
  FSlateEditableTextLayout *pFVar20;
  ETextFlowDirection local_res8;
  char local_res9;
  ETextShapingMethod local_res10;
  char local_res11;
  ETextOverflowPolicy local_res18;
  char local_res19;
  TRawPtrProxy<FExtender> local_res20;
  FSharedReferencer<1> local_9b0;
  undefined1 local_9a8 [8];
  FDelegateAllocation local_9a0;
  undefined1 local_990 [8];
  ForAnyElementType local_988;
  int local_980;
  undefined1 local_978 [8];
  ForAnyElementType local_970;
  int local_968;
  undefined1 local_960 [8];
  ForAnyElementType local_958;
  int local_950;
  undefined1 local_948 [8];
  ForAnyElementType local_940;
  int local_938;
  undefined1 local_930 [8];
  ForAnyElementType local_928;
  int local_920;
  undefined1 local_918 [8];
  ForAnyElementType local_910;
  int local_908;
  code *local_8f8;
  undefined4 uStack_8f0;
  uint uStack_8ec;
  TSharedRef<ISlateMetaData,1> local_8e8;
  undefined8 local_8d8;
  FSharedReferencer<1> local_8d0;
  TAttribute<EVisibility> local_8c8;
  TAttribute<EVisibility> local_8a8;
  undefined1 local_888 [24];
  undefined1 local_870 [24];
  TSharedRef<ITextLayoutMarshaller,1> local_858;
  TSharedRef<ITextLayoutMarshaller,1> local_848;
  TSharedPtr<FUICommandList,1> local_838;
  FDestructionSentinel local_828;
  FDestructionSentinel local_810;
  FDestructionSentinel local_7f8;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  undefined1 local_798 [24];
  undefined1 local_780 [24];
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDelegateAllocation *local_738;
  SScrollBar *local_730;
  TReferenceControllerBase<1> *pTStack_728;
  code *local_718;
  longlong lStack_710;
  TSharedRef<FPlainTextLayoutMarshaller,1> local_708;
  undefined1 local_6f8 [8];
  TReferenceControllerBase<1> *local_6f0;
  TSharedRef<FExtensionBase_const_,1> local_6e8;
  longlong local_6d8;
  FName local_6d0;
  FName local_6c8;
  SScrollBar *local_6c0;
  TReferenceControllerBase<1> *pTStack_6b8;
  code *local_6a8;
  longlong lStack_6a0;
  FReadAccessScope local_698;
  FReadAccessScope local_680;
  FReadAccessScope local_668;
  FReadAccessScope local_650;
  FReadAccessScope local_638;
  FReadAccessScope local_620;
  FTextBlockStyle local_608;
  FTextBlockStyle local_328;
  
  (this->bIsReadOnly).Value = (param_1->_IsReadOnly).Value;
  (this->bIsReadOnly).bIsSet = (param_1->_IsReadOnly).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsReadOnly).Getter,&(param_1->_IsReadOnly).Getter);
  pFVar20 = (FSlateEditableTextLayout *)0x0;
  if (&param_1->_OnIsTypedCharValid != &this->OnIsTypedCharValid) {
    local_990 = (undefined1  [8])0x0;
    local_988.Data = (FScriptContainerElement *)0x0;
    local_980 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsTypedCharValid,&local_650);
    if ((*(int *)&(param_1->_OnIsTypedCharValid).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnIsTypedCharValid).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_990);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_650);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsTypedCharValid,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
               (FWriteAccessScope *)&local_828);
    if ((local_980 != 0) && (local_988.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_988.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_988,0,0,0x10);
      local_980 = 0;
    }
    if (local_828.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_828.Accessor,&local_828);
    }
    if (local_988.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_990);
  }
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChangedCallback,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommittedCallback,&param_1->_OnTextCommitted);
  if (&param_1->_OnCursorMoved != &this->OnCursorMovedCallback) {
    local_978 = (undefined1  [8])0x0;
    local_970.Data = (FScriptContainerElement *)0x0;
    local_968 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCursorMoved,
               &local_668);
    if ((*(int *)&(param_1->_OnCursorMoved).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnCursorMoved).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_978);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_668);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCursorMovedCallback,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_978);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_978,
               (FWriteAccessScope *)&local_810);
    if ((local_968 != 0) && (local_970.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_970.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_970,0,0,0x10);
      local_968 = 0;
    }
    if (local_810.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810.Accessor,&local_810);
    }
    if (local_970.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_970.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_978);
  }
  (this->bAllowMultiLine).Value = (param_1->_AllowMultiLine).Value;
  (this->bAllowMultiLine).bIsSet = (param_1->_AllowMultiLine).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bAllowMultiLine).Getter,&(param_1->_AllowMultiLine).Getter);
  (this->bSelectAllTextWhenFocused).Value = (param_1->_SelectAllTextWhenFocused).Value;
  (this->bSelectAllTextWhenFocused).bIsSet = (param_1->_SelectAllTextWhenFocused).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectAllTextWhenFocused).Getter,&(param_1->_SelectAllTextWhenFocused).Getter)
  ;
  (this->bClearTextSelectionOnFocusLoss).Value = (param_1->_ClearTextSelectionOnFocusLoss).Value;
  (this->bClearTextSelectionOnFocusLoss).bIsSet = (param_1->_ClearTextSelectionOnFocusLoss).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bClearTextSelectionOnFocusLoss).Getter,
             &(param_1->_ClearTextSelectionOnFocusLoss).Getter);
  (this->bClearKeyboardFocusOnCommit).Value = (param_1->_ClearKeyboardFocusOnCommit).Value;
  (this->bClearKeyboardFocusOnCommit).bIsSet = (param_1->_ClearKeyboardFocusOnCommit).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bClearKeyboardFocusOnCommit).Getter,
             &(param_1->_ClearKeyboardFocusOnCommit).Getter);
  (this->bAllowContextMenu).Value = (param_1->_AllowContextMenu).Value;
  (this->bAllowContextMenu).bIsSet = (param_1->_AllowContextMenu).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bAllowContextMenu).Getter,&(param_1->_AllowContextMenu).Getter);
  (this->bSelectWordOnMouseDoubleClick).Value = (param_1->_SelectWordOnMouseDoubleClick).Value;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = (param_1->_SelectWordOnMouseDoubleClick).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectWordOnMouseDoubleClick).Getter,
             &(param_1->_SelectWordOnMouseDoubleClick).Getter);
  if (&param_1->_OnContextMenuOpening != &this->OnContextMenuOpening) {
    local_948 = (undefined1  [8])0x0;
    local_940.Data = (FScriptContainerElement *)0x0;
    local_938 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnContextMenuOpening,&local_638);
    if ((*(int *)&(param_1->_OnContextMenuOpening).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnContextMenuOpening).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_948);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_638);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_948);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_948,
               (FWriteAccessScope *)&local_7f8);
    if ((local_938 != 0) && (local_940.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_940.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_940,0,0,0x10);
      local_938 = 0;
    }
    if (local_7f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
    }
    if (local_940.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_940.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_948);
  }
  (this->bRevertTextOnEscape).Value = (param_1->_RevertTextOnEscape).Value;
  (this->bRevertTextOnEscape).bIsSet = (param_1->_RevertTextOnEscape).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bRevertTextOnEscape).Getter,&(param_1->_RevertTextOnEscape).Getter);
  this_00 = &(param_1->_VirtualKeyboardTrigger).Getter;
  (this->VirtualKeyboardOptions).bEnableAutocorrect =
       (param_1->_VirtualKeyboardOptions).bEnableAutocorrect;
  this_01 = &(this->VirtualKeyboardTrigger).Getter;
  (this->VirtualKeyboardTrigger).Value = (param_1->_VirtualKeyboardTrigger).Value;
  (this->VirtualKeyboardTrigger).bIsSet = (param_1->_VirtualKeyboardTrigger).bIsSet;
  if (this_00 != this_01) {
    local_930 = (undefined1  [8])0x0;
    local_928.Data = (FScriptContainerElement *)0x0;
    local_920 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_620);
    if ((*(int *)&(param_1->_VirtualKeyboardTrigger).Getter.field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_VirtualKeyboardTrigger).Getter.field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_930);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
               (FWriteAccessScope *)&local_7e0);
    if ((local_920 != 0) && (local_928.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_928.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_928,0,0,0x10);
      local_920 = 0;
    }
    if (local_7e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
    }
    if (local_928.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_930);
  }
  TAttribute<enum_EVirtualKeyboardDismissAction>::operator=
            (&this->VirtualKeyboardDismissAction,&param_1->_VirtualKeyboardDismissAction);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnHScrollBarUserScrolled,&param_1->_OnHScrollBarUserScrolled);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnVScrollBarUserScrolled,&param_1->_OnVScrollBarUserScrolled);
  if (&param_1->_OnKeyCharHandler != &this->OnKeyCharHandler) {
    local_960 = (undefined1  [8])0x0;
    local_958.Data = (FScriptContainerElement *)0x0;
    local_950 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnKeyCharHandler
               ,&local_698);
    if ((*(int *)&(param_1->_OnKeyCharHandler).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnKeyCharHandler).field_0x8, plVar3 != (longlong *)0x0))
    {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_960);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_698);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyCharHandler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_960);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_960,
               (FWriteAccessScope *)&local_7c8);
    if ((local_950 != 0) && (local_958.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_958.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_958,0,0,0x10);
      local_950 = 0;
    }
    if (local_7c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
    }
    if (local_958.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_960);
  }
  if (&param_1->_OnKeyDownHandler != &this->OnKeyDownHandler) {
    local_918 = (undefined1  [8])0x0;
    local_910.Data = (FScriptContainerElement *)0x0;
    local_908 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnKeyDownHandler
               ,&local_680);
    if ((*(int *)&(param_1->_OnKeyDownHandler).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnKeyDownHandler).field_0x8, plVar3 != (longlong *)0x0))
    {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_918);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_680);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
               (FWriteAccessScope *)&local_7b0);
    if ((local_908 != 0) && (local_910.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_910.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_910,0,0,0x10);
      local_908 = 0;
    }
    if (local_7b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
    }
    if (local_910.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_918);
  }
  pTVar1 = &this->HScrollBar;
  this->ModiferKeyForNewLine = param_1->_ModiferKeyForNewLine;
  pTVar4 = (param_1->_HScrollBar).SharedReferenceCount.ReferenceController;
  pSVar10 = (param_1->_HScrollBar).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6c0 = pTVar1->Object;
  pTStack_6b8 = (this->HScrollBar).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pSVar10;
  (this->HScrollBar).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6b8);
  if (((param_1->_AutoWrapText).bIsSet == false) ||
     (pbVar9 = TAttribute<bool>::Get(&param_1->_AutoWrapText), *pbVar9 == false)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((pTVar1->Object != (SScrollBar *)0x0) && (!bVar8)) {
    pSVar10 = TSharedPtr<SScrollBar,1>::operator->(pTVar1);
    local_8c8.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_8c8.bIsSet = true;
    local_8c8.Getter._0_8_ = 0;
    local_8c8.Getter._8_8_ = 0;
    local_8c8.Getter._16_8_ = 0;
    SScrollBar::SetUserVisibility(pSVar10,&local_8c8);
    pSVar10 = TSharedPtr<SScrollBar,1>::operator->(pTVar1);
    uStack_8f0 = 0;
    local_8f8 = OnHScrollBarMoved;
    lStack_6a0 = (ulonglong)uStack_8ec << 0x20;
    local_6a8 = OnHScrollBarMoved;
    pTVar11 = TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
              CreateSP<SMultiLineEditableText>
                        ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_798,this
                         ,(pmf_0964144a *)&local_6a8);
    SScrollBar::SetOnUserScrolled(pSVar10,pTVar11);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_798);
    if ((void *)local_798._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_798._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_798);
  }
  pTVar4 = (param_1->_VScrollBar).SharedReferenceCount.ReferenceController;
  pTVar1 = &this->VScrollBar;
  pSVar10 = (param_1->_VScrollBar).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_730 = pTVar1->Object;
  pTStack_728 = (this->VScrollBar).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pSVar10;
  (this->VScrollBar).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_728);
  if (pTVar1->Object != (SScrollBar *)0x0) {
    pSVar10 = TSharedPtr<SScrollBar,1>::operator->(pTVar1);
    local_8a8.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_8a8.bIsSet = true;
    local_8a8.Getter._0_8_ = 0;
    local_8a8.Getter._8_8_ = 0;
    local_8a8.Getter._16_8_ = 0;
    SScrollBar::SetUserVisibility(pSVar10,&local_8a8);
    pSVar10 = TSharedPtr<SScrollBar,1>::operator->(pTVar1);
    uStack_8f0 = 0;
    local_8f8 = OnVScrollBarMoved;
    lStack_710 = (ulonglong)uStack_8ec << 0x20;
    local_718 = OnVScrollBarMoved;
    pTVar11 = TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
              CreateSP<SMultiLineEditableText>
                        ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_780,this
                         ,(pmf_0964144a *)&local_718);
    SScrollBar::SetOnUserScrolled(pSVar10,pTVar11);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_780);
    if ((void *)local_780._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_780._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_780);
  }
  FTextBlockStyle::FTextBlockStyle(&local_608,param_1->_TextStyle);
  if (((param_1->_Font).bIsSet != false) ||
     (bVar8 = TAttribute<FSlateFontInfo>::IsBound(&param_1->_Font), bVar8)) {
    pFVar12 = TAttribute<FSlateFontInfo>::Get(&param_1->_Font);
    FSlateFontInfo::operator=(&local_608.Font,pFVar12);
  }
  local_9b0.ReferenceController = (param_1->_Marshaller).SharedReferenceCount.ReferenceController;
  pFVar19 = (FPlainTextLayoutMarshaller *)(param_1->_Marshaller).Object;
  if (local_9b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_9b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar19 == (FPlainTextLayoutMarshaller *)0x0) {
    pTVar13 = FPlainTextLayoutMarshaller::Create(&local_708);
    local_8d0.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar19 = pTVar13->Object;
    if (local_8d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_8d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_8d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_9b0,&local_8d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_708.SharedReferenceCount.ReferenceController);
    if ((pFVar19 == (FPlainTextLayoutMarshaller *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar6.ReferenceController = local_9b0.ReferenceController;
  if (local_9b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_9b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar19 == (FPlainTextLayoutMarshaller *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar7.ReferenceController = local_9b0.ReferenceController;
  if (local_9b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_9b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar19 == (FPlainTextLayoutMarshaller *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res20.Object = ::operator_new(0xa50);
  this_03.Object = (FExtender *)pFVar20;
  if ((FSlateEditableTextLayout *)local_res20.Object != (FSlateEditableTextLayout *)0x0) {
    local_858.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_848.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res9 = (param_1->_TextFlowDirection).bIsSet;
    if ((bool)local_res9 != false) {
      local_res8 = (param_1->_TextFlowDirection).TypedValue;
    }
    local_res11 = (param_1->_TextShapingMethod).bIsSet;
    if ((bool)local_res11 != false) {
      local_res10 = (param_1->_TextShapingMethod).TypedValue;
    }
    local_858.Object = (ITextLayoutMarshaller *)pFVar19;
    local_848.Object = (ITextLayoutMarshaller *)pFVar19;
    pFVar14 = FTextBlockStyle::FTextBlockStyle(&local_328,&local_608);
    this_03.Object =
         (FExtender *)
         FSlateEditableTextLayout::FSlateEditableTextLayout
                   ((FSlateEditableTextLayout *)local_res20.Object,
                    (ISlateEditableTextWidget *)&this->_padding_,&param_1->_Text,pFVar14,
                    SUB82(&local_res10,0),SUB82(&local_res8,0),&param_1->_CreateSlateTextLayout,
                    &local_848,&local_858);
  }
  pTVar2 = &this->EditableTextLayout;
  if (pTVar2 == (TUniquePtr<FSlateEditableTextLayout,TDefaultDelete<FSlateEditableTextLayout>_> *)
                &local_6d8) {
    if ((FSlateEditableTextLayout *)this_03.Object == (FSlateEditableTextLayout *)0x0)
    goto LAB_1429d451e;
    FSlateEditableTextLayout::~FSlateEditableTextLayout((FSlateEditableTextLayout *)this_03.Object);
  }
  else {
    local_res20.Object = (FExtender *)pTVar2->Ptr;
    pTVar2->Ptr = (FSlateEditableTextLayout *)this_03.Object;
    if ((FSlateEditableTextLayout *)local_res20.Object == (FSlateEditableTextLayout *)0x0)
    goto LAB_1429d451e;
    FSlateEditableTextLayout::~FSlateEditableTextLayout
              ((FSlateEditableTextLayout *)local_res20.Object);
    this_03.Object = local_res20.Object;
  }
  ::operator_delete(this_03.Object,0xa50);
LAB_1429d451e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  FSlateEditableTextLayout::SetHintText(pTVar2->Ptr,&param_1->_HintText);
  FSlateEditableTextLayout::SetSearchText(pTVar2->Ptr,&param_1->_SearchText);
  pFVar17 = pTVar2->Ptr;
  (pFVar17->WrapTextAt).Value = (param_1->_WrapTextAt).Value;
  (pFVar17->WrapTextAt).bIsSet = (param_1->_WrapTextAt).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar17->WrapTextAt).Getter,&(param_1->_WrapTextAt).Getter);
  (pFVar17->AutoWrapText).Value = (param_1->_AutoWrapText).Value;
  (pFVar17->AutoWrapText).bIsSet = (param_1->_AutoWrapText).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar17->AutoWrapText).Getter,&(param_1->_AutoWrapText).Getter);
  (pFVar17->WrappingPolicy).Value = (param_1->_WrappingPolicy).Value;
  (pFVar17->WrappingPolicy).bIsSet = (param_1->_WrappingPolicy).bIsSet;
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar17->WrappingPolicy).Getter,&(param_1->_WrappingPolicy).Getter);
  puVar15 = (undefined8 *)
            (**(code **)((longlong)*pFVar17->OwnerWidget + 0x90))(pFVar17->OwnerWidget,local_6f8);
  SWidget::Invalidate((SWidget *)*puVar15,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6f0);
  FSlateEditableTextLayout::SetMargin(pTVar2->Ptr,&param_1->_Margin);
  FSlateEditableTextLayout::SetJustification(pTVar2->Ptr,&param_1->_Justification);
  FSlateEditableTextLayout::SetLineHeightPercentage(pTVar2->Ptr,&param_1->_LineHeightPercentage);
  pFVar17 = pTVar2->Ptr;
  local_9a8 = (undefined1  [8])0x0;
  local_9a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_9a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a8,
             (FWriteAccessScope *)&local_750);
  local_738 = &local_9a0;
  puVar15 = UE::Core::Private::DelegateAllocate(0x20,&local_9a0);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar15[3] = this;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  local_888._0_8_ = (FScriptContainerElement *)0x0;
  local_888._8_4_ = 0;
  local_888._12_4_ = 0;
  local_888[0x10] = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_870,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8);
  FSlateEditableTextLayout::SetDebugSourceInfo(pFVar17,(TAttribute<FString> *)local_888);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
  if ((void *)local_870._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_870._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_870);
  if ((FScriptContainerElement *)local_888._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_888._0_8_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a8,
             (FWriteAccessScope *)&local_768);
  if ((local_9a0.DelegateSize != 0) &&
     (local_9a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_9a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_9a0,0,0,0x10);
    local_9a0.DelegateSize = 0;
  }
  if (local_768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
  }
  if (local_9a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_9a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9a8);
  local_res19 = (param_1->_OverflowPolicy).bIsSet;
  if ((bool)local_res19 != false) {
    local_res18 = (param_1->_OverflowPolicy).TypedValue;
  }
  FSlateEditableTextLayout::SetOverflowPolicy(pTVar2->Ptr,SUB82(&local_res18,0));
  pFVar17 = ::operator_new(0x10);
  local_res20.Object = (FExtender *)pFVar20;
  if (pFVar17 != (FSlateEditableTextLayout *)0x0) {
    pFVar17->OwnerWidget = (ISlateEditableTextWidget *)0x0;
    (pFVar17->GraphemeBreakIterator).Object = (IBreakIterator *)0x0;
    local_res20.Object = (FExtender *)pFVar17;
  }
  TSharedPtr<FExtender,1>::operator=<FExtender>(&this->MenuExtender,&local_res20);
  if (((this->MenuExtender).Object == (FExtender *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_02 = (this->MenuExtender).Object;
  local_838.Object = (FUICommandList *)0x0;
  local_838.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar18 = ::FName::FName(&local_6d0,"EditText");
  FExtender::AddMenuExtension
            (this_02,&local_6e8,*pFVar18,Before,&local_838,&param_1->_ContextMenuExtender);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_838.SharedReferenceCount.ReferenceController);
  pFVar18 = ::FName::FName(&local_6c8,L"EditableText");
  pFVar17 = ::operator_new(0x30);
  if (pFVar17 == (FSlateEditableTextLayout *)0x0) {
    local_8e8.Object = ___xmm_00000000000000000000000000000010;
    local_8e8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)&(pFVar17->GraphemeBreakIterator).Object = 1;
    *(undefined4 *)((longlong)&(pFVar17->GraphemeBreakIterator).Object + 4) = 1;
    pFVar17->OwnerWidget =
         (ISlateEditableTextWidget *)
         &___7__TIntrusiveReferenceController_VFTrackedMetaData___00_SharedPointerInternals__6B_;
    FTrackedMetaData::FTrackedMetaData
              ((FTrackedMetaData *)&(pFVar17->GraphemeBreakIterator).SharedReferenceCount,
               (SWidget *)this,*pFVar18);
    local_8e8.Object = (ISlateMetaData *)&(pFVar17->GraphemeBreakIterator).SharedReferenceCount;
    if ((local_8e8.Object == (ISlateMetaData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    *(int *)&(pFVar17->GraphemeBreakIterator).Object =
         *(int *)&(pFVar17->GraphemeBreakIterator).Object + 1;
    UNLOCK();
    pFVar20 = pFVar17;
    local_8e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
  }
  SWidget::AddMetadataInternal((SWidget *)this,&local_8e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b0.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_608);
  return;
}

// DeleteSelectedText @ 1429e3ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::DeleteSelectedText(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout::DeleteSelectedText((this->EditableTextLayout).Ptr);
  return;
}

// EndEditTransaction @ 1429e48c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::EndEditTransaction(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout::EndEditTransaction((this->EditableTextLayout).Ptr);
  return;
}

// EnsureActiveTick @ 1429e4aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::EnsureActiveTick(SMultiLineEditableText *this)

{
  int *piVar1;
  undefined1 *this_00;
  int iVar2;
  longlong *plVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<FActiveTimerHandle,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  TSharedRef<FActiveTimerHandle,1> local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1429e4ad7;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    pTVar9 = pTVar10;
    if (this->_padding_ != 0) goto LAB_1429e4be4;
  }
LAB_1429e4ad7:
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  this_00 = &this[-1].bSelectWordOnMouseDoubleClick.Getter.field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = this_00;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pTVar8 = SWidget::RegisterActiveTimer
                     ((SWidget *)this_00,&local_58,__real_3f000000,
                      (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                       *)local_48);
  this->_padding_ = (longlong)pTVar8->Object;
  pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)this->_padding_) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar3 = (longlong *)this->_padding_;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    this->_padding_ = (longlong)pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pTVar10 = pTVar9;
LAB_1429e4be4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// ForceScroll @ 1429e85e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::ForceScroll(SMultiLineEditableText *this,int param_1,float param_2)

{
  code *pcVar1;
  int iVar2;
  FGeometry *pFVar3;
  atomic<int> *paVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_228 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  float local_1e8;
  float fStack_1e4;
  ushort local_1e0;
  FKeyDetails *local_1d8;
  undefined1 local_1d0 [44];
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  FDeprecateSlateVector2D local_198;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *local_190;
  FName local_188;
  FKeyDetails *local_180;
  FSharedReferencer<1> local_178;
  undefined8 local_170;
  float local_168;
  undefined2 local_164;
  undefined8 local_160;
  undefined2 local_158;
  bool local_156;
  FReply local_150;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar3 = SWidget::GetCachedGeometry((SWidget *)this);
  local_178 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  local_188 = EKeys::Invalid.KeyName;
  local_1f8._0_4_ = SUB84(pFVar3->Size,0);
  local_1f8._4_4_ = SUB84(pFVar3->Size,4);
  fVar6 = (float)local_1f8 * (pFVar3->AccumulatedRenderTransform).M.M[0][0];
  fVar5 = local_1f8._4_4_ * (pFVar3->AccumulatedRenderTransform).M.M[1][0];
  fVar8 = (float)local_1f8 * (pFVar3->AccumulatedRenderTransform).M.M[0][1];
  fVar7 = local_1f8._4_4_ * (pFVar3->AccumulatedRenderTransform).M.M[1][1];
  local_1f8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  local_1f8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_1f0._0_4_ =
       fVar6 + fVar5 + (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X +
       (float)local_1f8 * (pFVar3->AccumulatedRenderTransform).M.M[0][0] +
       local_1f8._4_4_ * (pFVar3->AccumulatedRenderTransform).M.M[1][0] +
       (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  local_1f0._4_4_ =
       fVar8 + fVar7 + (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y +
       local_1f8._4_4_ * (pFVar3->AccumulatedRenderTransform).M.M[1][1] +
       (float)local_1f8 * (pFVar3->AccumulatedRenderTransform).M.M[0][1] +
       (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_1e8 = (float)(undefined4)local_1f0 * __real_3f000000;
  local_68 = 0xffffffff;
  local_64 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x88);
  fStack_1e4 = (float)local_1f0._4_4_ * __real_3f000000;
  local_1d0._8_2_ = local_1e0 & 0xfe00;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_1d8 = EKeys::Invalid.KeyDetails.Object;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_1d0[10] = 0;
  local_1d0._24_8_ = 0;
  local_1d0._12_4_ = param_1;
  local_1d0._16_4_ = param_1;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_1f0);
  local_1d0._32_8_ = local_1f0;
  local_1d0._0_8_ = &___7FPointerEvent__6B_;
  local_1f0._0_4_ = local_1e8;
  local_1f0._4_4_ = fStack_1e4;
  local_1d0._40_4_ = local_1e8;
  fStack_1a4 = fStack_1e4;
  local_1a0 = local_1e8;
  fStack_19c = fStack_1e4;
  local_1f8._4_4_ = fStack_1e4 - fStack_1e4;
  local_1f8._0_4_ = local_1e8 - local_1e8;
  local_198 = local_1f8;
  local_190 = (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)local_98;
  local_180 = local_1d8;
  if (local_178.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_170._0_4_ = 0;
  local_170._4_4_ = 0;
  local_164._0_1_ = false;
  local_164._1_1_ = None;
  local_160._0_4_ = 0;
  local_158._0_1_ = false;
  local_158._1_1_ = false;
  local_156 = false;
  local_168 = 1.0;
  local_160._4_4_ = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ReferenceController);
  (*pcVar1)(this,&local_150,pFVar3,local_1d0);
  FReply::~FReply(&local_150);
  FPointerEvent::~FPointerEvent((FPointerEvent *)local_1d0);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// GetCharacterAt @ 1429e9460

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t __thiscall
SMultiLineEditableText::GetCharacterAt(SMultiLineEditableText *this,FTextLocation *param_1)

{
  wchar_t wVar1;
  
  wVar1 = FSlateEditableTextLayout::GetCharacterAt((this->EditableTextLayout).Ptr,param_1);
  return wVar1;
}

// GetChildren @ 1429ea600

/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall SMultiLineEditableText::GetChildren(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *pFVar1;
  FSlateTextBlockLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  FChildren *pFVar5;
  FSlateTextBlockLayout *pFVar6;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  pFVar6 = (FSlateTextBlockLayout *)&pFVar1->TextLayout;
  if (((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FChildren *)(*pcVar3)();
    return pFVar5;
  }
  bVar4 = FTextLayout::IsEmpty((FTextLayout *)((TSharedPtr<FSlateTextLayout,1> *)pFVar6)->Object);
  if ((bVar4) && (pFVar2 = (pFVar1->HintTextLayout).Ptr, pFVar2 != (FSlateTextBlockLayout *)0x0)) {
    pFVar6 = pFVar2;
    if (((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FChildren *)(*pcVar3)();
      return pFVar5;
    }
  }
  else if ((((TSharedPtr<FSlateTextLayout,1> *)pFVar6)->Object == (FSlateTextLayout *)0x0) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FChildren *)(*pcVar3)();
    return pFVar5;
  }
  pFVar5 = FSlateTextLayout::GetChildren((pFVar6->TextLayout).Object);
  return pFVar5;
}

// GetCurrentTextLine @ 1429eaf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::GetCurrentTextLine(SMultiLineEditableText *this,FString *param_1)

{
  int iVar1;
  FSlateEditableTextLayout *pFVar2;
  FSlateTextLayout *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = (this->EditableTextLayout).Ptr;
  iVar7 = (pFVar2->CursorInfo).CursorPosition.LineIndex;
  if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (pFVar2->TextLayout).Object;
  if ((-1 < iVar7) && (iVar7 < *(int *)&pFVar3->field_0x28)) {
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((longlong)iVar7 * 0x70 + *(longlong *)&pFVar3->field_0x20);
    iVar1 = *(int *)(puVar4 + 1);
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(param_1,(wchar_t *)*puVar4,iVar7);
  }
  return;
}

// GetCursorLocation @ 1429eb090

/* WARNING: Enum "Type": Some values do not have unique names */

FTextLocation __thiscall SMultiLineEditableText::GetCursorLocation(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *pFVar1;
  FTextLocation in_RDX;
  int iVar2;
  int iVar3;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  iVar2 = (pFVar1->CursorInfo).CursorPosition.Offset +
          (uint)((pFVar1->CursorInfo).CursorAlignment == Right);
  *(int *)in_RDX = (pFVar1->CursorInfo).CursorPosition.LineIndex;
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  *(int *)((longlong)in_RDX + 4) = iVar3;
  return in_RDX;
}

// GetFont @ 1429eb740

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall
SMultiLineEditableText::GetFont(SMultiLineEditableText *this,FSlateFontInfo *__return_storage_ptr__)

{
  FTextBlockStyle local_2e8;
  
  FTextBlockStyle::FTextBlockStyle(&local_2e8,&((this->EditableTextLayout).Ptr)->TextStyle);
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,&local_2e8.Font);
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return __return_storage_ptr__;
}

// GetHScrollBar @ 1429eb8c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SScrollBar_const_,1> * __thiscall
SMultiLineEditableText::GetHScrollBar
          (SMultiLineEditableText *this,TSharedPtr<SScrollBar_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->HScrollBar).Object;
  pTVar1 = (this->HScrollBar).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetHintText @ 1429ebaf0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMultiLineEditableText::GetHintText(SMultiLineEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetHintText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNumSearchResults @ 1429ec160

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SMultiLineEditableText::GetNumSearchResults(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *pFVar1;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  return *(int *)&(pFVar1->SearchResultToIndexMap).field_0x8 -
         *(int *)&(pFVar1->SearchResultToIndexMap).field_0x34;
}

// GetPlainText @ 1429ecf00

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMultiLineEditableText::GetPlainText(SMultiLineEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetPlainText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRunUnderCursor @ 1429ed7c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IRun_const_,1> * __thiscall
SMultiLineEditableText::GetRunUnderCursor
          (SMultiLineEditableText *this,TSharedPtr<IRun_const_,1> *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetRunUnderCursor((this->EditableTextLayout).Ptr,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// GetSearchResultIndex @ 1429ed8b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SMultiLineEditableText::GetSearchResultIndex(SMultiLineEditableText *this)

{
  return ((this->EditableTextLayout).Ptr)->CurrentSearchResultIndex;
}

// GetSearchText @ 1429ed920

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMultiLineEditableText::GetSearchText(SMultiLineEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout *pFVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar1->SearchText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = (pFVar1->SearchText).Flags;
  return __return_storage_ptr__;
}

// GetSelectedRuns @ 1429ee210

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
SMultiLineEditableText::GetSelectedRuns
          (SMultiLineEditableText *this,
          TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetSelectedRuns((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelectedText @ 1429ee380

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMultiLineEditableText::GetSelectedText(SMultiLineEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetSelectedText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelection @ 1429ee570

/* WARNING: Enum "Type": Some values do not have unique names */

FTextSelection * __thiscall
SMultiLineEditableText::GetSelection
          (SMultiLineEditableText *this,FTextSelection *__return_storage_ptr__)

{
  FSlateEditableTextLayout *pFVar1;
  FTextLocation FVar2;
  TOptional<FTextLocation> *pTVar3;
  int iVar4;
  TOptional<FTextLocation> local_res8 [2];
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  local_res8[0].TypedValue.LineIndex = (pFVar1->CursorInfo).CursorPosition.LineIndex;
  iVar4 = (pFVar1->CursorInfo).CursorPosition.Offset +
          (uint)((pFVar1->CursorInfo).CursorAlignment == Right);
  local_res8[0].TypedValue.Offset = 0;
  if (0 < iVar4) {
    local_res8[0].TypedValue.Offset = iVar4;
  }
  pTVar3 = local_res8;
  if ((pFVar1->SelectionStart).bIsSet != false) {
    pTVar3 = &pFVar1->SelectionStart;
  }
  __return_storage_ptr__->LocationA = pTVar3->TypedValue;
  FVar2.Offset = local_res8[0].TypedValue.Offset;
  FVar2.LineIndex = local_res8[0].TypedValue.LineIndex;
  __return_storage_ptr__->LocationB = FVar2;
  return __return_storage_ptr__;
}

// GetSlateWidget @ 1429ee8c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMultiLineEditableText::GetSlateWidget
          (SMultiLineEditableText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&this[-1].bRevertTextOnEscape,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSlateWidgetPtr @ 1429ee8f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SMultiLineEditableText::GetSlateWidgetPtr
          (SMultiLineEditableText *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TAttribute<bool> *this_00;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = &this[-1].bRevertTextOnEscape;
  lVar1._0_1_ = this_00->Value;
  lVar1._1_1_ = this_00->bIsSet;
  lVar1._2_2_ = *(undefined2 *)&this_00->field_0x2;
  lVar1._4_4_ = this_00->_padding_;
  if (((lVar1 != 0) && (lVar1 = *(longlong *)&this[-1].bRevertTextOnEscape.Getter, lVar1 != 0)) &&
     (0 < *(int *)(lVar1 + 8))) {
    pTVar3 = TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)this_00,&local_18);
    __return_storage_ptr__->Object = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetText @ 1429eeee0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMultiLineEditableText::GetText(SMultiLineEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTextLine @ 1429ef4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::GetTextLine(SMultiLineEditableText *this,int param_1,FString *param_2)

{
  int iVar1;
  FSlateEditableTextLayout *pFVar2;
  FSlateTextLayout *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = (this->EditableTextLayout).Ptr;
  if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (pFVar2->TextLayout).Object;
  if ((-1 < param_1) && (param_1 < *(int *)&pFVar3->field_0x28)) {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((longlong)param_1 * 0x70 + *(longlong *)&pFVar3->field_0x20);
    iVar1 = *(int *)(puVar4 + 1);
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(param_2,(wchar_t *)*puVar4,iVar7);
  }
  return;
}

// GetTextLineCount @ 1429ef5c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SMultiLineEditableText::GetTextLineCount(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = FTextLayout::GetLineCount((FTextLayout *)(pFVar1->TextLayout).Object);
  return iVar4;
}

// GetVScrollBar @ 1429efa00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SScrollBar_const_,1> * __thiscall
SMultiLineEditableText::GetVScrollBar
          (SMultiLineEditableText *this,TSharedPtr<SScrollBar_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->VScrollBar).Object;
  pTVar1 = (this->VScrollBar).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetVirtualKeyboardDismissAction @ 1429efa30

/* WARNING: Enum "Type": Some values do not have unique names */

EVirtualKeyboardDismissAction __thiscall
SMultiLineEditableText::GetVirtualKeyboardDismissAction(SMultiLineEditableText *this)

{
  char cVar1;
  EVirtualKeyboardDismissAction EVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->bSelectWordOnMouseDoubleClick,&local_28);
  if ((*(int *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8 != 0) &&
     (plVar3 = *(longlong **)&(this->bSelectWordOnMouseDoubleClick).Getter,
     plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->bSelectWordOnMouseDoubleClick,&local_28);
      if (*(int *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->bSelectWordOnMouseDoubleClick).Getter;
      }
      EVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->bClearTextSelectionOnFocusLoss).Getter.field_0x10 = EVar2;
      return EVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (this->bClearTextSelectionOnFocusLoss).Getter.field_0x10;
}

// GetVirtualKeyboardOptions @ 1429efc10

/* WARNING: Enum "Type": Some values do not have unique names */

FVirtualKeyboardOptions __thiscall
SMultiLineEditableText::GetVirtualKeyboardOptions(SMultiLineEditableText *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = (this->bSelectAllTextWhenFocused).Getter.field_0x8;
  return (FVirtualKeyboardOptions)SUB81(in_RDX,0);
}

// GetVirtualKeyboardTrigger @ 1429efc30

/* WARNING: Enum "Type": Some values do not have unique names */

EVirtualKeyboardTrigger __thiscall
SMultiLineEditableText::GetVirtualKeyboardTrigger(SMultiLineEditableText *this)

{
  char cVar1;
  EVirtualKeyboardTrigger EVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->bClearTextSelectionOnFocusLoss,&local_28);
  if ((*(int *)&(this->bClearTextSelectionOnFocusLoss).Getter.field_0x8 != 0) &&
     (plVar3 = *(longlong **)&(this->bClearTextSelectionOnFocusLoss).Getter,
     plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->bClearTextSelectionOnFocusLoss,&local_28);
      if (*(int *)&(this->bClearTextSelectionOnFocusLoss).Getter.field_0x8 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->bClearTextSelectionOnFocusLoss).Getter;
      }
      EVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->bSelectAllTextWhenFocused).Getter.field_0x10 = EVar2;
      return EVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (this->bSelectAllTextWhenFocused).Getter.field_0x10;
}

// GetVirtualKeyboardType @ 1429efd50

/* WARNING: Enum "Type": Some values do not have unique names */

EKeyboardType __thiscall
SMultiLineEditableText::GetVirtualKeyboardType(SMultiLineEditableText *this)

{
  return Keyboard_Default;
}

// GoTo @ 1429f02a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::GoTo(SMultiLineEditableText *this,FTextLocation *param_1)

{
  FSlateEditableTextLayout *this_00;
  FSlateTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_res8;
  int local_resc;
  undefined1 local_18 [16];
  
  this_00 = (this->EditableTextLayout).Ptr;
  if ((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  iVar5 = param_1->LineIndex;
  pFVar1 = (this_00->TextLayout).Object;
  if ((-1 < iVar5) && (iVar5 < *(int *)&pFVar1->field_0x28)) {
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = *(int *)(*(longlong *)((longlong)iVar5 * 0x70 + *(longlong *)&pFVar1->field_0x20) + 8);
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    if (param_1->Offset <= iVar4) {
      if (((TOptional<FTextLocation> *)local_18 != &this_00->SelectionStart) &&
         ((this_00->SelectionStart).bIsSet != false)) {
        (this_00->SelectionStart).bIsSet = false;
      }
      if ((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                (&this_00->CursorInfo,(FTextLayout *)(this_00->TextLayout).Object,param_1);
      iVar5 = (this_00->CursorInfo).CursorPosition.Offset +
              (uint)((this_00->CursorInfo).CursorAlignment == Right);
      local_resc = 0;
      if (0 < iVar5) {
        local_resc = iVar5;
      }
      local_res8 = (this_00->CursorInfo).CursorPosition.LineIndex;
      (**(code **)((longlong)*this_00->OwnerWidget + 0xc0))(this_00->OwnerWidget,&local_res8);
      FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(this_00);
      FSlateEditableTextLayout::UpdateCursorHighlight(this_00);
    }
  }
  return;
}

// GoTo @ 1429f0430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::GoTo(SMultiLineEditableText *this,ETextLocation param_1)

{
  FSlateEditableTextLayout::JumpTo((this->EditableTextLayout).Ptr,param_1,MoveCursor);
  return;
}

// InsertRunAtCursor @ 1429f4990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::InsertRunAtCursor(SMultiLineEditableText *this,TSharedRef<IRun,1> *param_1)

{
  FSlateEditableTextLayout *this_00;
  TSharedRef<IRun,1> local_18;
  
  local_18.Object = param_1->Object;
  this_00 = (this->EditableTextLayout).Ptr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateEditableTextLayout::InsertRunAtCursor(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InsertTextAtCursor @ 1429f4a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::InsertTextAtCursor(SMultiLineEditableText *this,FString *param_1)

{
  FSlateEditableTextLayout::InsertTextAtCursor((this->EditableTextLayout).Ptr,param_1);
  return;
}

// InsertTextAtCursor @ 1429f4aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::InsertTextAtCursor(SMultiLineEditableText *this,FText *param_1)

{
  FSlateEditableTextLayout *this_00;
  FString *pFVar1;
  
  this_00 = (this->EditableTextLayout).Ptr;
  pFVar1 = FText::ToString(param_1);
  FSlateEditableTextLayout::InsertTextAtCursor(this_00,pFVar1);
  return;
}

// IsIntegratedKeyboardEnabled @ 1429f5b90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::IsIntegratedKeyboardEnabled(SMultiLineEditableText *this)

{
  return false;
}

// IsInteractable @ 1429f5ba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::IsInteractable(SMultiLineEditableText *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// IsMultiLineTextEdit @ 1429f5bd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::IsMultiLineTextEdit(SMultiLineEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return true;
}

// IsRightClickScrolling @ 1429f5d10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::IsRightClickScrolling(SMultiLineEditableText *this)

{
  float fVar1;
  SScrollBar *this_00;
  bool bVar2;
  FSlateApplication *this_01;
  float fVar3;
  
  fVar1 = this->AmountScrolledWhileRightMouseDown;
  this_01 = FSlateApplication::Get();
  fVar3 = FSlateApplication::GetDragTriggerDistance(this_01);
  if ((fVar3 <= fVar1) && (this_00 = (this->VScrollBar).Object, this_00 != (SScrollBar *)0x0)) {
    bVar2 = SScrollBar::IsNeeded(this_00);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsTextPassword @ 1429f64a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::IsTextPassword(SMultiLineEditableText *this)

{
  return false;
}

// IsTextReadOnly @ 1429f64b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::IsTextReadOnly(SMultiLineEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// OnArrangeChildren @ 1429f82b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::OnArrangeChildren
          (SMultiLineEditableText *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FSlateEditableTextLayout *pFVar1;
  FSlateTextBlockLayout *this_00;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  bVar4 = FTextLayout::IsEmpty((FTextLayout *)(pFVar1->TextLayout).Object);
  if ((bVar4) && (this_00 = (pFVar1->HintTextLayout).Ptr, this_00 != (FSlateTextBlockLayout *)0x0))
  {
    FSlateTextBlockLayout::ArrangeChildren(this_00,param_1,param_2);
    return;
  }
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pFVar2 = (pFVar1->TextLayout).Object;
                    /* WARNING: Could not recover jumptable at 0x0001429f8372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar2 + 0x38))(pFVar2,param_1,param_2);
  return;
}

// OnBeginTextEdit @ 1429f97c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::OnBeginTextEdit(SMultiLineEditableText *this,FText *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCursorMoved @ 1429f9a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::OnCursorMoved(SMultiLineEditableText *this,FTextLocation *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::Invalidate((SWidget *)&this[-1].bSelectWordOnMouseDoubleClick.Getter.field_0x10,Layout);
  return;
}

// OnCursorQuery @ 1429f9aa0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SMultiLineEditableText::OnCursorQuery
          (SMultiLineEditableText *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  SScrollBar *this_00;
  bool bVar2;
  FSlateApplication *this_01;
  float fVar3;
  FKey local_38 [2];
  
  fVar1 = this->AmountScrolledWhileRightMouseDown;
  this_01 = FSlateApplication::Get();
  fVar3 = FSlateApplication::GetDragTriggerDistance(this_01);
  if (((fVar3 <= fVar1) && (this_00 = (this->VScrollBar).Object, this_00 != (SScrollBar *)0x0)) &&
     (bVar2 = SScrollBar::IsNeeded(this_00), bVar2)) {
    local_38[0].KeyName = EKeys::RightMouseButton.KeyName;
    local_38[0].KeyDetails.Object = EKeys::RightMouseButton.KeyDetails.Object;
    local_38[0].KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = FPointerEvent::IsMouseButtonDown(param_2,local_38);
    if (bVar2) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = None;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = TextEditBeam;
  return __return_storage_ptr__;
}

// OnFocusLost @ 1429f9ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::OnFocusLost(SMultiLineEditableText *this,FFocusEvent *param_1)

{
  this->bIsSoftwareCursor = false;
  FSlateEditableTextLayout::HandleFocusLost((this->EditableTextLayout).Ptr,param_1);
  return;
}

// OnFocusReceived @ 1429f9fc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnFocusReceived
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  FSlateEditableTextLayout::HandleFocusReceived((this->EditableTextLayout).Ptr,param_2);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnHScrollBarMoved @ 1429fa1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::OnHScrollBarMoved(SMultiLineEditableText *this,float param_1)

{
  FSlateEditableTextLayout *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  undefined4 in_XMM1_Db;
  double dVar6;
  TVector2<double> local_48;
  FReadAccessScope local_38 [2];
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pTVar5 = FTextLayout::GetSize((FTextLayout *)(pFVar1->TextLayout).Object,&local_48);
  dVar6 = (double)param_1;
  if (__real_3ff0000000000000 <= (double)param_1) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  (pFVar1->ScrollOffset).field0_0x0._s_0.X = (float)(dVar6 * (pTVar5->field0_0x0)._s_0.X);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnHScrollBarUserScrolled,local_38);
  if ((*(int *)&(this->OnHScrollBarUserScrolled).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnHScrollBarUserScrolled).field_0x8, plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar2 + 0x68))(plVar2,CONCAT44(in_XMM1_Db,param_1));
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// OnKeyChar @ 1429fa2e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnKeyChar
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  bool bVar1;
  char cVar2;
  FReply *pFVar3;
  longlong *plVar4;
  FReadAccessScope local_f8;
  FReply local_e0;
  
  FReply::FReply(__return_storage_ptr__,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyCharHandler,
             &local_f8);
  if (((*(int *)&(this->OnKeyCharHandler).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->OnKeyCharHandler).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f8);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyCharHandler,
               &local_f8);
    if (*(int *)&(this->OnKeyCharHandler).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->OnKeyCharHandler).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_e0,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    FReply::operator=(__return_storage_ptr__,&local_e0);
    FReply::~FReply(&local_e0);
  }
  if ((char)__return_storage_ptr__->_padding_ == '\0') {
    pFVar3 = FSlateEditableTextLayout::HandleKeyChar
                       ((this->EditableTextLayout).Ptr,&local_e0,param_2);
    FReply::operator=(__return_storage_ptr__,pFVar3);
    FReply::~FReply(&local_e0);
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 1429fa5d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnKeyDown
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  bool bVar1;
  char cVar2;
  FReply *pFVar3;
  longlong *plVar4;
  FReadAccessScope local_f8;
  FReply local_e0;
  
  FReply::FReply(__return_storage_ptr__,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
             &local_f8);
  if (((*(int *)&(this->OnKeyDownHandler).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->OnKeyDownHandler).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f8);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
               &local_f8);
    if (*(int *)&(this->OnKeyDownHandler).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->OnKeyDownHandler).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_e0,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    FReply::operator=(__return_storage_ptr__,&local_e0);
    FReply::~FReply(&local_e0);
  }
  if ((char)__return_storage_ptr__->_padding_ == '\0') {
    pFVar3 = FSlateEditableTextLayout::HandleKeyDown
                       ((this->EditableTextLayout).Ptr,&local_e0,param_2);
    FReply::operator=(__return_storage_ptr__,pFVar3);
    FReply::~FReply(&local_e0);
  }
  return __return_storage_ptr__;
}

// OnKeyUp @ 1429fa850

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnKeyUp
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FSlateEditableTextLayout *pFVar1;
  bool bVar2;
  char cVar3;
  FSlateApplication *pFVar4;
  TSharedPtr<IVirtualKeyboardEntry,1> local_18;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  bVar2 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard();
  if (bVar2) {
    pFVar4 = FSlateApplication::Get();
    cVar3 = (**(code **)(*(longlong *)pFVar4 + 0xb0))(pFVar4);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)*pFVar1->OwnerWidget)();
      if (cVar3 == '\0') {
        pFVar4 = FSlateApplication::Get();
        local_18.Object = (IVirtualKeyboardEntry *)(pFVar1->VirtualKeyboardEntry).Object;
        local_18.SharedReferenceCount.ReferenceController =
             (pFVar1->VirtualKeyboardEntry).SharedReferenceCount.ReferenceController;
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FSlateApplication::ShowVirtualKeyboard
                  (pFVar4,true,*(int *)((longlong)&param_2->_padding_ + 4),&local_18);
        bVar2 = true;
        goto LAB_1429fa8dc;
      }
    }
  }
  bVar2 = false;
LAB_1429fa8dc:
  FReply::FReply(__return_storage_ptr__,bVar2);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1429fada0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnMouseButtonDoubleClick
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSlateEditableTextLayout *this_00;
  FName FVar1;
  bool bVar2;
  char cVar3;
  TTransform2<float> *pTVar4;
  FDeprecateVector2DParameter FVar5;
  bool bVar6;
  float fVar7;
  undefined8 local_48;
  TTransform2<float> local_40;
  
  bVar6 = false;
  local_48 = (FDeprecateVector2DParameter)((ulonglong)local_48 & 0xffffffff00000000);
  this_00 = (this->EditableTextLayout).Ptr;
  cVar3 = (**(code **)((longlong)*this_00->OwnerWidget + 0x48))();
  FVar5 = local_48;
  if (cVar3 != '\0') {
    FVar5 = (FDeprecateVector2DParameter)
            (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->EffectingButton).KeyName;
    if (FVar5 != (FDeprecateVector2DParameter)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar5 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5 + 8) + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (FVar1 == EKeys::LeftMouseButton.KeyName) {
      bVar2 = true;
      goto LAB_1429fadff;
    }
  }
  bVar2 = false;
LAB_1429fadff:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar5);
  }
  if (bVar2) {
    pTVar4 = Inverse<TTransform2<float>_>(&local_40,&param_1->AccumulatedRenderTransform);
    local_48._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
    local_48._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
    fVar7 = local_48._4_4_ * (pTVar4->M).M[1][0];
    local_48._4_4_ =
         ((float)local_48 * (pTVar4->M).M[0][1] + local_48._4_4_ * (pTVar4->M).M[1][1] +
         (pTVar4->Trans).field0_0x0._s_0.Y) * param_1->Scale;
    local_48._0_4_ =
         (fVar7 + (float)local_48 * (pTVar4->M).M[0][0] + (pTVar4->Trans).field0_0x0._s_0.X) *
         param_1->Scale;
    FSlateEditableTextLayout::SelectWordAt(this_00,(FDeprecateVector2DParameter *)&local_48);
  }
  FReply::FReply(__return_storage_ptr__,bVar2);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1429fb350

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnMouseButtonDown
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    this->AmountScrolledWhileRightMouseDown = 0.0;
  }
  FSlateEditableTextLayout::HandleMouseButtonDown
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1429fb510

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnMouseButtonUp
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SScrollBar *this_00;
  TVector2<float>_u_0_s_0 TVar5;
  FWeakReferencer<1> FVar6;
  FSlateApplication *this_01;
  FReply *pFVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  TIntPoint<int>_u_0 local_res20;
  FReply local_e8;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar3 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar8) {
    fVar10 = this->AmountScrolledWhileRightMouseDown;
    this_01 = FSlateApplication::Get();
    fVar9 = FSlateApplication::GetDragTriggerDistance(this_01);
    if (((fVar9 <= fVar10) && (this_00 = (this->VScrollBar).Object, this_00 != (SScrollBar *)0x0))
       && (bVar8 = SScrollBar::IsNeeded(this_00), bVar8)) {
      TVar5 = (this->SoftwareCursorPosition).field0_0x0._s_0;
      local_res20._s_0.Y = (int)TVar5.Y;
      local_res20._s_0.X = (int)TVar5.X;
      this->AmountScrolledWhileRightMouseDown = 0.0;
      this->bIsSoftwareCursor = false;
      fVar10 = (float)local_res20._s_0.Y * (param_1->AccumulatedRenderTransform).M.M[1][0];
      local_res20._s_0.Y =
           (int)((float)local_res20._s_0.Y * (param_1->AccumulatedRenderTransform).M.M[1][1] +
                 (float)local_res20._s_0.X * (param_1->AccumulatedRenderTransform).M.M[0][1] +
                (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y);
      local_res20._s_0.X =
           (int)(fVar10 + (float)local_res20._s_0.X *
                          (param_1->AccumulatedRenderTransform).M.M[0][0] +
                (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
      FReply::FReply(&local_e8,true);
      FVar6.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_e8.MouseCaptor.Object = (SWidget *)0x0;
      local_e8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
        }
      }
      local_e8.bUseHighPrecisionMouse = 0;
      local_e8.bReleaseMouseCapture = 1;
      pFVar7 = FReply::SetMousePos(&local_e8,(TIntPoint<int> *)&local_res20._s_0);
      FReply::FReply(__return_storage_ptr__,pFVar7);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    this->AmountScrolledWhileRightMouseDown = 0.0;
  }
  FSlateEditableTextLayout::HandleMouseButtonUp
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseMove @ 1429fb9c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnMouseMove
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  atomic<int> aVar7;
  double dVar8;
  SScrollBar *this_00;
  FSlateEditableTextLayout *pFVar9;
  TVector2<float>_u_0_s_0 TVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  FWeakReferencer<1> FVar13;
  bool bVar14;
  bool bVar15;
  FSlateApplication *this_01;
  FReply *pFVar16;
  TVector2<double> *pTVar17;
  TTransform2<float> *pTVar18;
  TSharedRef<SWidget,1> *pTVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_1e8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d4;
  FMoveCursor local_1c8;
  FKey local_1b0;
  TReferenceControllerBase<1> *local_190;
  TVector2<double> local_188;
  TVector2<double> local_178;
  TSharedRef<SWidget,1> local_168;
  FReply local_158;
  TTransform2<float> local_a0;
  TTransform2<float> local_88 [3];
  
  bVar15 = false;
  local_1b0.KeyName = EKeys::RightMouseButton.KeyName;
  local_1b0.KeyDetails.Object = EKeys::RightMouseButton.KeyDetails.Object;
  local_1b0.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar14 = FPointerEvent::IsMouseButtonDown(param_2,&local_1b0);
  if (bVar14) {
    fVar24 = *(float *)&(param_2->CursorDelta).field_0x4 / param_1->Scale;
    fVar23 = (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
             this->AmountScrolledWhileRightMouseDown;
    this->AmountScrolledWhileRightMouseDown = fVar23;
    this_01 = FSlateApplication::Get();
    fVar21 = FSlateApplication::GetDragTriggerDistance(this_01);
    if (((fVar21 <= fVar23) && (this_00 = (this->VScrollBar).Object, this_00 != (SScrollBar *)0x0))
       && (bVar14 = SScrollBar::IsNeeded(this_00), bVar14)) {
      pFVar9 = (this->EditableTextLayout).Ptr;
      TVar10 = (pFVar9->ScrollOffset).field0_0x0._s_0;
      local_1e8._4_4_ = TVar10.Y;
      fVar21 = (float)local_1e8._4_4_;
      fVar24 = (float)local_1e8._4_4_ - fVar24;
      if (((pFVar9->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar12 = (code *)swi(3);
        pFVar16 = (FReply *)(*pcVar12)();
        return pFVar16;
      }
      pTVar17 = FTextLayout::GetSize((FTextLayout *)(pFVar9->TextLayout).Object,&local_188);
      fVar23 = 0.0;
      dVar8 = (pTVar17->field0_0x0)._s_0.Y;
      local_1e0 = SUB84(param_1->Size,0);
      local_1e0 = (float)(pTVar17->field0_0x0)._s_0.X - local_1e0;
      local_1e8._0_4_ = TVar10.X;
      if ((float)(undefined4)local_1e8 <= local_1e0) {
        local_1e0 = (float)(undefined4)local_1e8;
      }
      if (local_1e0 <= 0.0) {
        local_1e0 = 0.0;
      }
      (pFVar9->ScrollOffset).field0_0x0._s_0.X = local_1e0;
      fStack_1dc = SUB84(param_1->Size,4);
      fStack_1dc = (float)dVar8 - fStack_1dc;
      if (fVar24 <= fStack_1dc) {
        fStack_1dc = fVar24;
      }
      if (fStack_1dc <= 0.0) {
        fStack_1dc = 0.0;
      }
      (pFVar9->ScrollOffset).field0_0x0._s_0.Y = fStack_1dc;
      if (this->bIsSoftwareCursor == false) {
        pTVar18 = Inverse<TTransform2<float>_>(&local_a0,&param_1->AccumulatedRenderTransform);
        local_1e8._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
        local_1e8._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
        fVar22 = (float)local_1e8._4_4_ * (pTVar18->M).M[1][0];
        fVar2 = (pTVar18->M).M[0][1];
        fVar3 = (pTVar18->M).M[0][0];
        fVar4 = (pTVar18->M).M[1][1];
        fVar5 = (pTVar18->Trans).field0_0x0._s_0.X;
        fVar6 = (pTVar18->Trans).field0_0x0._s_0.Y;
        this->bIsSoftwareCursor = true;
        local_1e8._4_4_ =
             (float)(undefined4)local_1e8 * fVar2 + (float)local_1e8._4_4_ * fVar4 + fVar6;
        local_1e8._0_4_ = fVar22 + (float)(undefined4)local_1e8 * fVar3 + fVar5;
        (this->SoftwareCursorPosition).field0_0x0 = local_1e8;
      }
      if (fVar21 != fVar24) {
        pFVar9 = (this->EditableTextLayout).Ptr;
        if (((pFVar9->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          pFVar16 = (FReply *)(*pcVar12)();
          return pFVar16;
        }
        pTVar17 = FTextLayout::GetSize((FTextLayout *)(pFVar9->TextLayout).Object,&local_178);
        fStack_1d4 = SUB84(param_1->Size,4);
        fStack_1d4 = (float)(pTVar17->field0_0x0)._s_0.Y - fStack_1d4;
        if (fStack_1d4 != 0.0) {
          fVar23 = fVar24 / fStack_1d4;
        }
        TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnVScrollBarUserScrolled,fVar23);
        (this->SoftwareCursorPosition).field0_0x0._s_0.Y =
             (fVar21 - fVar24) + (this->SoftwareCursorPosition).field0_0x0._s_0.Y;
      }
      FReply::FReply(&local_158,true);
      pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_168);
      local_158.MouseCaptor.Object = pTVar19->Object;
      pTVar11 = (pTVar19->SharedReferenceCount).ReferenceController;
      FVar13.ReferenceController = local_158.MouseCaptor.WeakReferenceCount.ReferenceController;
      if (pTVar11 != local_158.MouseCaptor.WeakReferenceCount.ReferenceController) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        FVar13.ReferenceController = pTVar11;
        if (local_158.MouseCaptor.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_158.MouseCaptor.WeakReferenceCount.ReferenceController)->
                    WeakReferenceCount;
          aVar7 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar7 == (atomic<int>)0x1) {
            (**(code **)((local_158.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ +
                        8))(local_158.MouseCaptor.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
      local_158.MouseCaptor.WeakReferenceCount.ReferenceController = FVar13.ReferenceController;
      local_158.bUseHighPrecisionMouse = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar19->SharedReferenceCount).ReferenceController);
      FReply::FReply(__return_storage_ptr__,&local_158);
      FReply::~FReply(&local_158);
      return __return_storage_ptr__;
    }
  }
  pFVar9 = (this->EditableTextLayout).Ptr;
  if (pFVar9->bIsDragSelecting != false) {
    puVar20 = (undefined8 *)(**(code **)((longlong)*pFVar9->OwnerWidget + 0x90))();
    bVar15 = true;
    bVar14 = SWidget::HasMouseCapture((SWidget *)*puVar20);
    if ((bVar14) &&
       ((UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X != *(float *)&param_2->CursorDelta
        || (UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y !=
            *(float *)&(param_2->CursorDelta).field_0x4)))) {
      bVar14 = true;
      goto LAB_1429fbd4e;
    }
  }
  bVar14 = false;
LAB_1429fbd4e:
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_190);
  }
  if (bVar14) {
    pTVar18 = Inverse<TTransform2<float>_>(local_88,&param_1->AccumulatedRenderTransform);
    local_1e8._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
    local_1e8._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
    local_1c8.Granularity = Character;
    local_1c8.Method = ScreenPosition;
    local_1c8.Action = SelectText;
    local_1c8.DirectionOrPosition.field0_0x0._s_0.X =
         (float)local_1e8._4_4_ * (pTVar18->M).M[1][0] +
         (float)(undefined4)local_1e8 * (pTVar18->M).M[0][0] + (pTVar18->Trans).field0_0x0._s_0.X;
    local_1c8.DirectionOrPosition.field0_0x0._s_0.Y =
         (float)(undefined4)local_1e8 * (pTVar18->M).M[0][1] +
         (float)local_1e8._4_4_ * (pTVar18->M).M[1][1] + (pTVar18->Trans).field0_0x0._s_0.Y;
    local_1c8.GeometryScale = param_1->Scale;
    FSlateEditableTextLayout::MoveCursor(pFVar9,&local_1c8);
    pFVar9->bHasDragSelectedSinceFocused = true;
  }
  FReply::FReply(__return_storage_ptr__,bVar14);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 1429fbf90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiLineEditableText::OnMouseWheel
          (SMultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  double dVar1;
  SScrollBar *this_00;
  FSlateEditableTextLayout *pFVar2;
  TVector2<float>_u_0_s_0 TVar3;
  code *pcVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  FReply *pFVar7;
  TVector2<double> *pTVar8;
  longlong lVar9;
  float fVar10;
  float local_res8;
  float fStackX_c;
  float local_68;
  TVector2<double> local_58;
  TVector2<double> local_48 [3];
  
  this_00 = (this->VScrollBar).Object;
  if (this_00 != (SScrollBar *)0x0) {
    bVar6 = SScrollBar::IsNeeded(this_00);
    pTVar5 = GlobalScrollAmount.Ref;
    if (bVar6) {
      fVar10 = *(float *)&(param_2->WheelOrGestureDelta).field_0x4;
      bVar6 = IsInParallelGameThread();
      if (bVar6) {
LAB_1429fbffd:
        lVar9 = 0;
      }
      else {
        bVar6 = IsInGameThread();
        if (bVar6) goto LAB_1429fbffd;
        lVar9 = 4;
      }
      pFVar2 = (this->EditableTextLayout).Ptr;
      TVar3 = (pFVar2->ScrollOffset).field0_0x0._s_0;
      fStackX_c = TVar3.Y;
      fVar10 = (float)((uint)(fVar10 * *(float *)((longlong)pTVar5->ShadowedValue + lVar9)) ^
                      __xmm_80000000800000008000000080000000) + fStackX_c;
      if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar4)();
          return pFVar7;
        }
      }
      pTVar8 = FTextLayout::GetSize((FTextLayout *)(pFVar2->TextLayout).Object,&local_58);
      dVar1 = (pTVar8->field0_0x0)._s_0.Y;
      local_68 = SUB84(param_1->Size,0);
      local_68 = (float)(pTVar8->field0_0x0)._s_0.X - local_68;
      local_res8 = TVar3.X;
      if (local_res8 <= local_68) {
        local_68 = local_res8;
      }
      if (local_68 <= 0.0) {
        local_68 = 0.0;
      }
      (pFVar2->ScrollOffset).field0_0x0._s_0.X = local_68;
      bVar6 = fStackX_c != fVar10;
      fStackX_c = SUB84(param_1->Size,4);
      fStackX_c = (float)dVar1 - fStackX_c;
      if (fVar10 <= fStackX_c) {
        fStackX_c = fVar10;
      }
      if (fStackX_c <= 0.0) {
        fStackX_c = 0.0;
      }
      (pFVar2->ScrollOffset).field0_0x0._s_0.Y = fStackX_c;
      if (bVar6) {
        pFVar2 = (this->EditableTextLayout).Ptr;
        if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FReply *)(*pcVar4)();
            return pFVar7;
          }
        }
        pTVar8 = FTextLayout::GetSize((FTextLayout *)(pFVar2->TextLayout).Object,local_48);
        fStackX_c = SUB84(param_1->Size,4);
        fStackX_c = (float)(pTVar8->field0_0x0)._s_0.Y - fStackX_c;
        if (fStackX_c == 0.0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = fVar10 / fStackX_c;
        }
        TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnVScrollBarUserScrolled,fVar10);
        bVar6 = true;
        goto LAB_1429fc15e;
      }
    }
  }
  bVar6 = false;
LAB_1429fc15e:
  FReply::FReply(__return_storage_ptr__,bVar6);
  return __return_storage_ptr__;
}

// OnPaint @ 1429fdf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SMultiLineEditableText::OnPaint
          (SMultiLineEditableText *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int *piVar1;
  float fVar2;
  ESlateColorStylingMode EVar3;
  undefined1 uVar4;
  FSlateEditableTextLayout *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FSlateColor *this_00;
  bool *pbVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_protected:_virtual_int___cdecl_SMultiLineEditableText::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_5_::FStat_STAT_Slate_AutoWrapRecompute>
  FVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ISlateStyle *pIVar14;
  FSlateBrush *pFVar15;
  FName FVar16;
  FNameEntryId FVar17;
  float fVar18;
  undefined1 auStackY_208 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  FPaintArgs *local_198;
  FColor_u_0 local_190 [2];
  FName local_188;
  LARGE_INTEGER local_178;
  TVector2<float>_u_0_s_0 local_16c;
  FStatMessage local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  float local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  FName local_120;
  FName local_118;
  FName local_110;
  TTransform2<float> local_108;
  TTransform2<float> local_f0;
  FLinearColor_u_0 local_d8;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  TVector2<float>_u_0 local_a8;
  float local_a0;
  undefined8 local_9c;
  FName local_94;
  float local_8c [2];
  float afStack_84 [2];
  TVector2<float>_u_0 local_7c;
  byte local_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar5 = (this->EditableTextLayout).Ptr;
  EVar3 = (pFVar5->TextStyle).ColorAndOpacity.ColorUseRule;
  this_00 = &(pFVar5->TextStyle).ColorAndOpacity;
  local_198 = param_1;
  if (EVar3 != UseColor_Specified) {
    if (EVar3 == UseColor_ColorTable) {
      this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
    }
    else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
      this_00 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      this_00 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_140 = (this_00->SpecifiedColor).field0_0x0._s_0.R;
  uStack_13c = *(undefined4 *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 4);
  uStack_138 = *(undefined4 *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8);
  fStack_134 = *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 0xc);
  local_150 = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
  uStack_148 = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
  fStack_124 = fStack_134 * FWidgetStyle::SubdueAmount;
  local_130 = local_140;
  uStack_12c = uStack_13c;
  uStack_128 = uStack_138;
  local_d8._0_8_ = local_150;
  local_d8._8_8_ = uStack_148;
  local_c8 = local_140;
  uStack_c4 = uStack_13c;
  uStack_c0 = uStack_138;
  fStack_bc = fStack_134;
  local_b8 = local_140;
  uStack_b4 = uStack_13c;
  uStack_b0 = uStack_138;
  fStack_ac = fStack_124;
  pbVar11 = TAttribute<bool>::Get(&((this->EditableTextLayout).Ptr)->AutoWrapText);
  fVar18 = __real_3f800000;
  if (*pbVar11 == false) goto LAB_1429fe290;
  pFVar5 = (this->EditableTextLayout).Ptr;
  if (((pFVar5->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  if (*(float *)&((pFVar5->TextLayout).Object)->field_0x98 != 0.0) goto LAB_1429fe290;
  FVar17.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Slate_AutoWrapRecompute ==
        (FThreadSafeStaticStat<_protected:_virtual_int___cdecl_SMultiLineEditableText::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_5_::FStat_STAT_Slate_AutoWrapRecompute>
         )0x0) {
      pFVar12 = ::FName::FName(&local_120,"STAT_Slate_AutoWrapRecompute");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_AutoWrapRecompute,*pFVar12,
                 L"STAT_Slate_AutoWrapRecompute","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_Slate_AutoWrapRecompute;
  if (StatPtr_STAT_Slate_AutoWrapRecompute ==
      (FThreadSafeStaticStat<_protected:_virtual_int___cdecl_SMultiLineEditableText::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_5_::FStat_STAT_Slate_AutoWrapRecompute>
       )0x0) {
    pFVar12 = ::FName::FName(&local_118,"STAT_Slate_AutoWrapRecompute");
    FVar13 = (FThreadSafeStaticStat<_protected:_virtual_int___cdecl_SMultiLineEditableText::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_5_::FStat_STAT_Slate_AutoWrapRecompute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_AutoWrapRecompute,
                          *pFVar12,L"STAT_Slate_AutoWrapRecompute","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar9 = false;
  bVar8 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_1429fe19b:
    bVar7 = false;
    FVar16 = local_188;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_190[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_190[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0 = (TVector2<float>_u_0)FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1a0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SMultiLineEditableText.cpp"
                   ,0x289);
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1429fe19b;
    local_1a0 = (TVector2<float>_u_0)FVar16;
    local_188 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar7 = true;
    FVar17.Value = local_188.ComparisonIndex.Value;
  }
  fVar2 = fVar18;
  if ((this->_padding_ & 0x4000) != 0) {
    fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  }
  (**(code **)(this->_padding_ + 0x168))(this,fVar2);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  param_1 = local_198;
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    param_1 = local_198;
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_160.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_160.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_178);
      local_160.StatData.Pad[4] = '\0';
      local_160.StatData.Pad[5] = '\0';
      local_160.StatData.Pad[6] = '\0';
      local_160.StatData.Pad[7] = '\0';
      local_160.StatData.Pad[0] = local_178.s.LowPart._0_1_;
      local_160.StatData.Pad[1] = local_178.s.LowPart._1_1_;
      local_160.StatData.Pad[2] = local_178.s.LowPart._2_1_;
      local_160.StatData.Pad[3] = local_178.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_160);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        param_1 = local_198;
      }
      else {
        param_1 = local_198;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
          param_1 = local_198;
        }
      }
    }
  }
LAB_1429fe290:
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  iVar10 = FSlateEditableTextLayout::OnPaint
                     ((this->EditableTextLayout).Ptr,param_1,param_2,param_3,param_4,param_5,
                      (FWidgetStyle *)&local_d8._s_0,bVar9);
  if (this->bIsSoftwareCursor != false) {
    pIVar14 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar14 + 0x50);
    pFVar12 = ::FName::FName(&local_110,L"SoftwareCursor_Grab");
    pFVar15 = (FSlateBrush *)(*pcVar6)(pIVar14,*pFVar12,0,0);
    fVar2 = param_2->Scale;
    fVar18 = fVar18 / fVar2;
    local_1a0._4_4_ = fVar18 * *(float *)&(pFVar15->ImageSize).field_0x4;
    local_1a0._0_4_ = (uint)(fVar18 * *(float *)&pFVar15->ImageSize);
    local_16c = (param_2->AbsolutePosition).field0_0x0._s_0;
    FVar16 = (FName)local_1a0;
    local_1a8._0_4_ =
         (this->SoftwareCursorPosition).field0_0x0._s_0.X - (float)local_1a0._0_4_ * __real_3f000000
    ;
    local_1a8._4_4_ =
         (this->SoftwareCursorPosition).field0_0x0._s_0.Y - local_1a0._4_4_ * __real_3f000000;
    local_1a0 = local_1a8;
    local_108.Trans.field0_0x0 = local_1a8;
    local_108.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_108.M.M[0][1] = _UNK_15076b184;
    local_108.M.M[1][0] = _UNK_15076b188;
    local_108.M.M[1][1] = _UNK_15076b18c;
    local_1a8._4_4_ = fVar2 * (float)local_1a8._4_4_ + local_16c.Y;
    local_1a8._0_4_ = fVar2 * (float)(undefined4)local_1a8 + local_16c.X;
    Concatenate<TTransform2<float>_>(&local_f0,&local_108,&param_2->AccumulatedRenderTransform);
    local_a8 = local_1a8;
    local_74 = param_2->bHasRenderTransform * '\x02' | local_74 & 0xfc;
    local_9c = 0;
    local_94 = FVar16;
    local_8c[0] = local_f0.M.M[0][0];
    local_8c[1] = local_f0.M.M[0][1];
    afStack_84[0] = local_f0.M.M[1][0];
    afStack_84[1] = local_f0.M.M[1][1];
    local_7c = local_f0.Trans.field0_0x0;
    local_a0 = fVar2;
    FSlateDrawElement::MakeBox
              (param_4,iVar10 + 1,(FPaintGeometry *)&local_a8._s_0,pFVar15,None,&FLinearColor::White
              );
    iVar10 = iVar10 + 1;
  }
  return iVar10;
}

// OnTextChanged @ 142a01ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::OnTextChanged(SMultiLineEditableText *this,FText *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnTextCommitted @ 142a01d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::OnTextCommitted(SMultiLineEditableText *this,FText *param_1,Type param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnVScrollBarMoved @ 142a02490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::OnVScrollBarMoved(SMultiLineEditableText *this,float param_1)

{
  FSlateEditableTextLayout *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  undefined4 in_XMM1_Db;
  double dVar6;
  TVector2<double> local_48;
  FReadAccessScope local_38 [2];
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pTVar5 = FTextLayout::GetSize((FTextLayout *)(pFVar1->TextLayout).Object,&local_48);
  dVar6 = (double)param_1;
  if (__real_3ff0000000000000 <= (double)param_1) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  (pFVar1->ScrollOffset).field0_0x0._s_0.Y = (float)(dVar6 * (pTVar5->field0_0x0)._s_0.Y);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnVScrollBarUserScrolled,local_38);
  if ((*(int *)&(this->OnVScrollBarUserScrolled).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnVScrollBarUserScrolled).field_0x8, plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar2 + 0x68))(plVar2,CONCAT44(in_XMM1_Db,param_1));
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// Refresh @ 142a04aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::Refresh(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout *this_00;
  FText *pFVar1;
  
  this_00 = (this->EditableTextLayout).Ptr;
  pFVar1 = FText::GetEmpty();
  if ((this_00->BoundText).bIsSet != false) {
    pFVar1 = TAttribute<FText>::Get(&this_00->BoundText);
  }
  FSlateEditableTextLayout::RefreshImpl(this_00,pFVar1,false);
  return;
}

// ScrollTo @ 142a06760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::ScrollTo(SMultiLineEditableText *this,FTextLocation *param_1)

{
  FSlateEditableTextLayout::ScrollTo((this->EditableTextLayout).Ptr,param_1);
  return;
}

// ScrollTo @ 142a06780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::ScrollTo(SMultiLineEditableText *this,ETextLocation param_1)

{
  FSlateEditableTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTextLocation FVar4;
  FTextLocation local_res8;
  
  this_00 = (this->EditableTextLayout).Ptr;
  if (((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar4.LineIndex = 0;
  FVar4.Offset = 0;
  local_res8.LineIndex = 0;
  local_res8.Offset = 0;
  if (param_1 != BeginningOfDocument) {
    if (param_1 == EndOfDocument) {
      uVar3 = *(int *)&((this_00->TextLayout).Object)->field_0x28 - 1;
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      FVar4.Offset = 0;
      FVar4.LineIndex = uVar3;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xa71,L"Unsupported ETextLocation mode passed to ScrollTo!");
      FVar4 = local_res8;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res8 = FVar4;
  FSlateEditableTextLayout::ScrollTo(this_00,&local_res8);
  return;
}

// SelectAllText @ 142a06a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiLineEditableText::SelectAllText(SMultiLineEditableText *this)

{
  FSlateEditableTextLayout::SelectAllText((this->EditableTextLayout).Ptr);
  return;
}

// SelectText @ 142a06bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SelectText
          (SMultiLineEditableText *this,FTextLocation *param_1,FTextLocation *param_2)

{
  FSlateEditableTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FTextLocation local_res8;
  
  this_00 = (this->EditableTextLayout).Ptr;
  if ((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  bVar2 = FTextLayout::IsEmpty((FTextLayout *)(this_00->TextLayout).Object);
  if (!bVar2) {
    local_res8 = *param_2;
    if ((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this_00->CursorInfo,(FTextLayout *)(this_00->TextLayout).Object,&local_res8);
    if ((param_1->LineIndex == param_2->LineIndex) && (param_1->Offset == param_2->Offset)) {
      if ((this_00->SelectionStart).bIsSet != false) {
        (this_00->SelectionStart).bIsSet = false;
      }
    }
    else if ((TOptional<FTextLocation> *)param_1 != &this_00->SelectionStart) {
      (this_00->SelectionStart).TypedValue = *param_1;
      (this_00->SelectionStart).bIsSet = true;
    }
    FSlateEditableTextLayout::UpdateCursorHighlight(this_00);
  }
  return;
}

// SetAllowContextMenu @ 142a07330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetAllowContextMenu(SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  (this->bAllowContextMenu).Value = param_1->Value;
  (this->bAllowContextMenu).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bAllowContextMenu).Getter,&param_1->Getter);
  return;
}

// SetApplyLineHeightToBottomLine @ 142a073c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetApplyLineHeightToBottomLine
          (SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  (pFVar1->ApplyLineHeightToBottomLine).Value = param_1->Value;
  (pFVar1->ApplyLineHeightToBottomLine).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->ApplyLineHeightToBottomLine).Getter,&param_1->Getter);
  puVar2 = (undefined8 *)
           (**(code **)((longlong)*pFVar1->OwnerWidget + 0x90))(pFVar1->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar2,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetAutoWrapText @ 142a07580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetAutoWrapText(SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  (pFVar1->AutoWrapText).Value = param_1->Value;
  (pFVar1->AutoWrapText).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->AutoWrapText).Getter,&param_1->Getter);
  puVar2 = (undefined8 *)
           (**(code **)((longlong)*pFVar1->OwnerWidget + 0x90))(pFVar1->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar2,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetClearKeyboardFocusOnCommit @ 142a077f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetClearKeyboardFocusOnCommit
          (SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  (this->bClearKeyboardFocusOnCommit).Value = param_1->Value;
  (this->bClearKeyboardFocusOnCommit).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bClearKeyboardFocusOnCommit).Getter,&param_1->Getter);
  return;
}

// SetClearTextSelectionOnFocusLoss @ 142a07820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetClearTextSelectionOnFocusLoss
          (SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  (this->bClearTextSelectionOnFocusLoss).Value = param_1->Value;
  (this->bClearTextSelectionOnFocusLoss).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bClearTextSelectionOnFocusLoss).Getter,&param_1->Getter);
  return;
}

// SetFont @ 142a09c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetFont(SMultiLineEditableText *this,TAttribute<FSlateFontInfo> *param_1)

{
  FSlateFontInfo *pFVar1;
  FTextBlockStyle local_2e8;
  
  FTextBlockStyle::FTextBlockStyle(&local_2e8,&((this->EditableTextLayout).Ptr)->TextStyle);
  pFVar1 = TAttribute<FSlateFontInfo>::Get(param_1);
  FSlateFontInfo::operator=(&local_2e8.Font,pFVar1);
  FSlateEditableTextLayout::SetTextStyle((this->EditableTextLayout).Ptr,&local_2e8);
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return;
}

// SetHintText @ 142a0a560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetHintText(SMultiLineEditableText *this,TAttribute<FText> *param_1)

{
  FSlateEditableTextLayout::SetHintText((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetIsReadOnly @ 142a0a7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetIsReadOnly(SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  (this->bIsReadOnly).Value = param_1->Value;
  (this->bIsReadOnly).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsReadOnly).Getter,&param_1->Getter);
  return;
}

// SetJustification @ 142a0a880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetJustification
          (SMultiLineEditableText *this,TAttribute<ETextJustify::Type> *param_1)

{
  FSlateEditableTextLayout::SetJustification((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetLineHeightPercentage @ 142a0aa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetLineHeightPercentage
          (SMultiLineEditableText *this,TAttribute<float> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  (pFVar1->LineHeightPercentage).Value = param_1->Value;
  (pFVar1->LineHeightPercentage).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->LineHeightPercentage).Getter,&param_1->Getter);
  puVar2 = (undefined8 *)
           (**(code **)((longlong)*pFVar1->OwnerWidget + 0x90))(pFVar1->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar2,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetMargin @ 142a0ab30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetMargin(SMultiLineEditableText *this,TAttribute<FMargin> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  (pFVar1->Margin).Value.Left = (param_1->Value).Left;
  (pFVar1->Margin).Value.Top = fVar2;
  (pFVar1->Margin).Value.Right = fVar3;
  (pFVar1->Margin).Value.Bottom = fVar4;
  (pFVar1->Margin).bIsSet = param_1->bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->Margin).Getter,&param_1->Getter);
  puVar5 = (undefined8 *)
           (**(code **)((longlong)*pFVar1->OwnerWidget + 0x90))(pFVar1->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar5,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetOverflowPolicy @ 142a0b360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetOverflowPolicy
          (SMultiLineEditableText *this,TOptional<ETextOverflowPolicy> param_1)

{
  undefined6 in_register_00000012;
  undefined1 local_res8;
  char local_res9;
  
  local_res9 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
  if (local_res9 != '\0') {
    local_res8 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
  }
  FSlateEditableTextLayout::SetOverflowPolicy((this->EditableTextLayout).Ptr,SUB82(&local_res8,0));
  return;
}

// SetRevertTextOnEscape @ 142a0b790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetRevertTextOnEscape
          (SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  (this->bRevertTextOnEscape).Value = param_1->Value;
  (this->bRevertTextOnEscape).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bRevertTextOnEscape).Getter,&param_1->Getter);
  return;
}

// SetSearchText @ 142a0b990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetSearchText(SMultiLineEditableText *this,TAttribute<FText> *param_1)

{
  FSlateEditableTextLayout::SetSearchText((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetSelectAllTextWhenFocused @ 142a0b9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetSelectAllTextWhenFocused
          (SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  (this->bSelectAllTextWhenFocused).Value = param_1->Value;
  (this->bSelectAllTextWhenFocused).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectAllTextWhenFocused).Getter,&param_1->Getter);
  return;
}

// SetSelectWordOnMouseDoubleClick @ 142a0b9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetSelectWordOnMouseDoubleClick
          (SMultiLineEditableText *this,TAttribute<bool> *param_1)

{
  (this->bSelectWordOnMouseDoubleClick).Value = param_1->Value;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectWordOnMouseDoubleClick).Getter,&param_1->Getter);
  return;
}

// SetText @ 142a0c820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetText(SMultiLineEditableText *this,TAttribute<FText> *param_1)

{
  FSlateEditableTextLayout::SetText((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetTextFlowDirection @ 142a0cd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetTextFlowDirection
          (SMultiLineEditableText *this,TOptional<ETextFlowDirection> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  FSlateTextLayout *this_00;
  code *pcVar2;
  bool bVar3;
  ETextFlowDirection EVar4;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  this_00 = (pFVar1->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar4 = GetDefaultTextFlowDirection();
  }
  else {
    EVar4 = param_1->TypedValue;
  }
  FTextLayout::SetTextFlowDirection((FTextLayout *)this_00,EVar4);
  return;
}

// SetTextShapingMethod @ 142a0d390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetTextShapingMethod
          (SMultiLineEditableText *this,TOptional<ETextShapingMethod> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  FSlateTextLayout *this_00;
  code *pcVar2;
  bool bVar3;
  ETextShapingMethod EVar4;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  this_00 = (pFVar1->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar4 = GetDefaultTextShapingMethod();
  }
  else {
    EVar4 = param_1->TypedValue;
  }
  FTextLayout::SetTextShapingMethod((FTextLayout *)this_00,EVar4);
  return;
}

// SetTextStyle @ 142a0d5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetTextStyle(SMultiLineEditableText *this,FTextBlockStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArguments local_6a8;
  
  if (param_1 != (FTextBlockStyle *)0x0) {
    FSlateEditableTextLayout::SetTextStyle((this->EditableTextLayout).Ptr,param_1);
    return;
  }
  FArguments::FArguments(&local_6a8);
  if (local_6a8._TextStyle == (FTextBlockStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Defaults._TextStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SMultiLineEditableText.cpp"
                       ,0xab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateEditableTextLayout::SetTextStyle((this->EditableTextLayout).Ptr,local_6a8._TextStyle);
  FArguments::~FArguments(&local_6a8);
  return;
}

// SetVirtualKeyboardDismissAction @ 142a0da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetVirtualKeyboardDismissAction
          (SMultiLineEditableText *this,TAttribute<EVirtualKeyboardDismissAction> *param_1)

{
  void *pvVar1;
  
  TAttribute<enum_EVirtualKeyboardDismissAction>::operator=
            (&this->VirtualKeyboardDismissAction,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetWrapTextAt @ 142a0dcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetWrapTextAt(SMultiLineEditableText *this,TAttribute<float> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  (pFVar1->WrapTextAt).Value = param_1->Value;
  (pFVar1->WrapTextAt).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->WrapTextAt).Getter,&param_1->Getter);
  puVar2 = (undefined8 *)
           (**(code **)((longlong)*pFVar1->OwnerWidget + 0x90))(pFVar1->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar2,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetWrappingPolicy @ 142a0de00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::SetWrappingPolicy
          (SMultiLineEditableText *this,TAttribute<ETextWrappingPolicy> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  (pFVar1->WrappingPolicy).Value = param_1->Value;
  (pFVar1->WrappingPolicy).bIsSet = param_1->bIsSet;
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(pFVar1->WrappingPolicy).Getter,&param_1->Getter);
  puVar2 = (undefined8 *)
           (**(code **)((longlong)*pFVar1->OwnerWidget + 0x90))(pFVar1->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar2,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// ShouldClearKeyboardFocusOnCommit @ 142a0dee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SMultiLineEditableText::ShouldClearKeyboardFocusOnCommit(SMultiLineEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldClearTextSelectionOnFocusLoss @ 142a0df10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SMultiLineEditableText::ShouldClearTextSelectionOnFocusLoss(SMultiLineEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldJumpCursorToEndWhenFocused @ 142a0df40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SMultiLineEditableText::ShouldJumpCursorToEndWhenFocused(SMultiLineEditableText *this)

{
  return false;
}

// ShouldRevertTextOnEscape @ 142a0df50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::ShouldRevertTextOnEscape(SMultiLineEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldSelectAllTextOnCommit @ 142a0df80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::ShouldSelectAllTextOnCommit(SMultiLineEditableText *this)

{
  return false;
}

// ShouldSelectAllTextWhenFocused @ 142a0df90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::ShouldSelectAllTextWhenFocused(SMultiLineEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldSelectWordOnMouseDoubleClick @ 142a0dfc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SMultiLineEditableText::ShouldSelectWordOnMouseDoubleClick(SMultiLineEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return true;
}

// SupportsKeyboardFocus @ 142a0f290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMultiLineEditableText::SupportsKeyboardFocus(SMultiLineEditableText *this)

{
  return true;
}

// Tick @ 142a0fc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiLineEditableText::Tick
          (SMultiLineEditableText *this,FGeometry *param_1,double param_2,float param_3)

{
  FSlateEditableTextLayout::Tick((this->EditableTextLayout).Ptr,param_1,param_2,param_3);
  return;
}

// UpdateAndClampHorizontalScrollBar @ 142a11a50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SMultiLineEditableText::UpdateAndClampHorizontalScrollBar
          (SMultiLineEditableText *this,float param_1,float param_2,EVisibility param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 in_RDX;
  undefined8 in_R8;
  float fVar5;
  float local_res8;
  FDestructionSentinel local_48;
  TEnumAsByte<EVisibility::Private> local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x250))(plVar1,in_RDX,in_R8,0);
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar5 = (float)(*pcVar3)();
        return fVar5;
      }
    }
    lVar2 = this->_padding_;
    local_2f = 1;
    local_18 = 0;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    ((TEnumAsByte<EVisibility::Private> *)(lVar2 + 0x2e0))->Value = (uchar)param_3.Value.Value;
    *(undefined1 *)(lVar2 + 0x2e1) = 1;
    local_30 = param_3.Value.Value;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar2 + 0x2e8),
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar5 = (float)(*pcVar3)();
        return fVar5;
      }
    }
    bVar4 = SScrollBar::IsNeeded((SScrollBar *)this->_padding_);
    if (!bVar4) {
      return 0.0;
    }
  }
  local_res8 = (float)*(undefined8 *)(this->_padding_ + 0x910);
  return local_res8;
}

// UpdateAndClampVerticalScrollBar @ 142a11bf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SMultiLineEditableText::UpdateAndClampVerticalScrollBar
          (SMultiLineEditableText *this,float param_1,float param_2,EVisibility param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 in_RDX;
  undefined8 in_R8;
  float fVar5;
  float fStackX_c;
  FDestructionSentinel local_48;
  TEnumAsByte<EVisibility::Private> local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x250))(plVar1,in_RDX,in_R8,0);
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar5 = (float)(*pcVar3)();
        return fVar5;
      }
    }
    lVar2 = this->_padding_;
    local_2f = 1;
    local_18 = 0;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    ((TEnumAsByte<EVisibility::Private> *)(lVar2 + 0x2e0))->Value = (uchar)param_3.Value.Value;
    *(undefined1 *)(lVar2 + 0x2e1) = 1;
    local_30 = param_3.Value.Value;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar2 + 0x2e8),
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar5 = (float)(*pcVar3)();
        return fVar5;
      }
    }
    bVar4 = SScrollBar::IsNeeded((SScrollBar *)this->_padding_);
    if (!bVar4) {
      return 0.0;
    }
  }
  fStackX_c = (float)((ulonglong)*(undefined8 *)(this->_padding_ + 0x910) >> 0x20);
  return fStackX_c;
}

