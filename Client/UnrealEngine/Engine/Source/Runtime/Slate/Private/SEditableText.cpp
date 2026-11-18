// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 97

// SEditableText @ 142848140

/* WARNING: Enum "Type": Some values do not have unique names */

SEditableText * __thiscall SEditableText::SEditableText(SEditableText *this)

{
  byte *pbVar1;
  
  SWidget::SWidget((SWidget *)this);
  this->_padding_ = (longlong)&_vftable__for__SWidget__;
  (this->PlainTextMarshaller).Object = (FPlainTextLayoutMarshaller *)0x0;
  this->_padding_ = (longlong)&_vftable__for__ISlateEditableTextWidget__;
  (this->PlainTextMarshaller).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EditableTextLayout).Ptr = (FSlateEditableTextLayout *)0x0;
  FSlateFontInfo::FSlateFontInfo(&(this->Font).Value);
  (this->Font).bIsSet = false;
  *(undefined8 *)&(this->Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Font).Getter = 0;
  *(undefined8 *)&(this->Font).Getter.field_0x8 = 0;
  (this->ColorAndOpacity).Value.ColorUseRule = UseColor_Specified;
  (this->ColorAndOpacity).bIsSet = false;
  *(undefined8 *)&(this->ColorAndOpacity).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ColorAndOpacity).Getter = 0;
  (this->BackgroundImageSelected).Value = (FSlateBrush *)0x0;
  (this->BackgroundImageSelected).bIsSet = false;
  *(undefined8 *)&(this->BackgroundImageSelected).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BackgroundImageSelected).Getter = 0;
  *(undefined8 *)&(this->BackgroundImageSelected).Getter.field_0x8 = 0;
  (this->bIsReadOnly).Value = false;
  (this->bIsReadOnly).bIsSet = false;
  *(undefined8 *)&(this->bIsReadOnly).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bIsReadOnly).Getter = 0;
  *(undefined8 *)&(this->bIsReadOnly).Getter.field_0x8 = 0;
  (this->bIsPassword).Value = false;
  (this->bIsPassword).bIsSet = false;
  *(undefined8 *)&(this->bIsPassword).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bIsPassword).Getter = 0;
  *(undefined8 *)&(this->bIsPassword).Getter.field_0x8 = 0;
  (this->bIsCaretMovedWhenGainFocus).Value = false;
  (this->bIsCaretMovedWhenGainFocus).bIsSet = false;
  *(undefined8 *)&(this->bIsCaretMovedWhenGainFocus).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bIsCaretMovedWhenGainFocus).Getter = 0;
  *(undefined8 *)&(this->bIsCaretMovedWhenGainFocus).Getter.field_0x8 = 0;
  (this->bSelectAllTextWhenFocused).Value = false;
  (this->bSelectAllTextWhenFocused).bIsSet = false;
  *(undefined8 *)&(this->bSelectAllTextWhenFocused).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bSelectAllTextWhenFocused).Getter = 0;
  *(undefined8 *)&(this->bSelectAllTextWhenFocused).Getter.field_0x8 = 0;
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
  (this->bSelectAllTextOnCommit).Value = false;
  (this->bSelectAllTextOnCommit).bIsSet = false;
  *(undefined8 *)&(this->bSelectAllTextOnCommit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bSelectAllTextOnCommit).Getter = 0;
  *(undefined8 *)&(this->bSelectAllTextOnCommit).Getter.field_0x8 = 0;
  (this->bSelectWordOnMouseDoubleClick).Value = false;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = false;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter = 0;
  *(undefined8 *)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8 = 0;
  (this->bAllowContextMenu).Value = false;
  (this->bAllowContextMenu).bIsSet = false;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x8 = 0;
  (this->bEnableIntegratedKeyboard).Value = false;
  (this->bEnableIntegratedKeyboard).bIsSet = false;
  *(undefined8 *)&(this->bEnableIntegratedKeyboard).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bEnableIntegratedKeyboard).Getter = 0;
  *(undefined8 *)&(this->bEnableIntegratedKeyboard).Getter.field_0x8 = 0;
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
  (this->MinDesiredWidth).Value = 0.0;
  (this->MinDesiredWidth).bIsSet = false;
  *(undefined8 *)&(this->MinDesiredWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinDesiredWidth).Getter = 0;
  *(undefined8 *)&(this->MinDesiredWidth).Getter.field_0x8 = 0;
  (this->MenuExtender).Object = (FExtender *)0x0;
  (this->MenuExtender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->ActiveTickTimer).Object = (FActiveTimerHandle *)0x0;
  (this->ActiveTickTimer).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WordBreakIterator).Object = (IBreakIterator *)0x0;
  (this->WordBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnKeyCharHandler = 0;
  *(undefined8 *)&(this->OnKeyCharHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnKeyCharHandler).field_0x10 = 0;
  *(undefined8 *)&this->OnKeyDownHandler = 0;
  *(undefined8 *)&(this->OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnKeyDownHandler).field_0x10 = 0;
  (this->VirtualKeyboardType).Value = Keyboard_Default;
  (this->VirtualKeyboardType).bIsSet = false;
  *(undefined8 *)&(this->VirtualKeyboardType).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->VirtualKeyboardType).Getter = 0;
  *(undefined8 *)&(this->VirtualKeyboardType).Getter.field_0x8 = 0;
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
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~SEditableText @ 14284a980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::~SEditableText(SEditableText *this)

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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VirtualKeyboardType).Getter);
  pvVar3 = *(void **)&(this->VirtualKeyboardType).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->VirtualKeyboardType).Getter);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WordBreakIterator).SharedReferenceCount.ReferenceController);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredWidth).Getter);
  pvVar3 = *(void **)&(this->MinDesiredWidth).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredWidth).Getter);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bEnableIntegratedKeyboard).Getter)
  ;
  pvVar3 = *(void **)&(this->bEnableIntegratedKeyboard).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bEnableIntegratedKeyboard).Getter);
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
             &(this->bSelectWordOnMouseDoubleClick).Getter);
  pvVar3 = *(void **)&(this->bSelectWordOnMouseDoubleClick).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bSelectWordOnMouseDoubleClick).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bSelectAllTextOnCommit).Getter);
  pvVar3 = *(void **)&(this->bSelectAllTextOnCommit).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bSelectAllTextOnCommit).Getter);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bSelectAllTextWhenFocused).Getter)
  ;
  pvVar3 = *(void **)&(this->bSelectAllTextWhenFocused).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bSelectAllTextWhenFocused).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsCaretMovedWhenGainFocus).Getter
            );
  pvVar3 = *(void **)&(this->bIsCaretMovedWhenGainFocus).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsCaretMovedWhenGainFocus).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsPassword).Getter);
  pvVar3 = *(void **)&(this->bIsPassword).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsPassword).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsReadOnly).Getter);
  pvVar3 = *(void **)&(this->bIsReadOnly).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsReadOnly).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BackgroundImageSelected).Getter);
  pvVar3 = *(void **)&(this->BackgroundImageSelected).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BackgroundImageSelected).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorAndOpacity).Getter);
  pvVar3 = *(void **)&(this->ColorAndOpacity).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorAndOpacity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Font).Getter);
  pvVar3 = *(void **)&(this->Font).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  this_00 = (this->EditableTextLayout).Ptr;
  if (this_00 != (FSlateEditableTextLayout *)0x0) {
    FSlateEditableTextLayout::~FSlateEditableTextLayout(this_00);
    ::operator_delete(this_00,0xa50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PlainTextMarshaller).SharedReferenceCount.ReferenceController);
  SWidget::~SWidget((SWidget *)this);
  return;
}

// AdvanceSearch @ 142851d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::AdvanceSearch(SEditableText *this,bool param_1)

{
  FSlateEditableTextLayout::AdvanceSearch((this->EditableTextLayout).Ptr,param_1);
  return;
}

// AnyTextSelected @ 142852190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::AnyTextSelected(SEditableText *this)

{
  bool bVar1;
  
  bVar1 = FSlateEditableTextLayout::AnyTextSelected((this->EditableTextLayout).Ptr);
  return bVar1;
}

// BeginSearch @ 1428558c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::BeginSearch(SEditableText *this,FText *param_1,Type param_2,bool param_3)

{
  FSlateEditableTextLayout::BeginSearch((this->EditableTextLayout).Ptr,param_1,param_2,param_3);
  return;
}

// BuildContextMenuContent @ 142856c60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SEditableText::BuildContextMenuContent
          (SEditableText *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool *pbVar3;
  TSharedRef<SWidget,1> *pTVar4;
  UObject *pUVar5;
  FReadAccessScope local_28;
  
  pbVar3 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
  if (*pbVar3 == false) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Font,&local_28);
  if (((this->Font).Value.OutlineSettings.OutlineSize != 0) &&
     (pUVar5 = (this->Font).Value.FontMaterial.field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)pUVar5 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Font,&local_28);
      if ((this->Font).Value.OutlineSettings.OutlineSize == 0) {
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar5 = (this->Font).Value.FontMaterial.field0_0x0.DebugPtr;
      }
      (**(code **)(*(longlong *)pUVar5 + 0x60))(pUVar5,__return_storage_ptr__);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pTVar4 = FSlateEditableTextLayout::BuildDefaultContextMenu
                     ((FSlateEditableTextLayout *)this->_padding_,(TSharedRef<SWidget,1> *)&local_28
                      ,(TSharedPtr<FExtender,1> *)&(this->ColorAndOpacity).Getter);
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

// CacheDesiredSize @ 142856dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::CacheDesiredSize(SEditableText *this,float param_1)

{
  SynchronizeTextStyle(this);
  FSlateEditableTextLayout::CacheDesiredSize((this->EditableTextLayout).Ptr,param_1);
  SWidget::CacheDesiredSize((SWidget *)this,param_1);
  return;
}

// CanInsertCarriageReturn @ 142857480

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::CanInsertCarriageReturn(SEditableText *this)

{
  return false;
}

// CanTypeCharacter @ 142857490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::CanTypeCharacter(SEditableText *this,wchar_t param_1)

{
  TObjectPtr<UObject> *this_00;
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  this_00 = &(this->Font).Value.OutlineSettings.OutlineMaterial;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if (((this->Font).Value.OutlineSettings.OutlineColor.field0_0x0._s_0.B != 0.0) &&
     (plVar3 = *(longlong **)&(this->Font).Value.OutlineSettings.OutlineColor.field0_0x0,
     plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if ((this->Font).Value.OutlineSettings.OutlineColor.field0_0x0._s_0.B == 0.0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Font).Value.OutlineSettings.OutlineColor.field0_0x0;
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

// ClearSelection @ 142857a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::ClearSelection(SEditableText *this)

{
  FSlateEditableTextLayout::ClearSelection((this->EditableTextLayout).Ptr);
  return;
}

// ComputeDesiredSize @ 142858160

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SEditableText::ComputeDesiredSize
          (SEditableText *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  float *pfVar2;
  double dVar3;
  
  FSlateEditableTextLayout::ComputeDesiredSize
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1);
  pfVar2 = TAttribute<float>::Get(&this->MinDesiredWidth);
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  dVar3 = (double)*pfVar2;
  if ((double)*pfVar2 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1428581d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ComputeVolatility(SEditableText *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  cVar2 = (**(code **)(this->_padding_ + 0x1a0))();
  if ((cVar2 == '\0') &&
     (bVar3 = FSlateEditableTextLayout::ComputeVolatility((this->EditableTextLayout).Ptr), !bVar3))
  {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Font).Getter,
               &local_28);
    if ((*(int *)&(this->Font).Getter.field_0x10 != 0) &&
       ((plVar1 = *(longlong **)&(this->Font).Getter.field_0x8, plVar1 != (longlong *)0x0 &&
        (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar3 = TAttribute<FSlateColor>::IsBound(&this->ColorAndOpacity);
    if ((((!bVar3) &&
         (bVar3 = TAttribute<FSlateBrush_const_*>::IsBound(&this->BackgroundImageSelected), !bVar3))
        && (bVar3 = TAttribute<bool>::IsBound(&this->bIsReadOnly), !bVar3)) &&
       ((bVar3 = TAttribute<bool>::IsBound(&this->bIsPassword), !bVar3 &&
        (bVar3 = TAttribute<float>::IsBound(&this->MinDesiredWidth), !bVar3)))) {
      return false;
    }
  }
  return true;
}

// Construct @ 14285e670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::Construct(SEditableText *this,FArguments *param_1)

{
  TSharedPtr<FPlainTextLayoutMarshaller,1> *pTVar1;
  TUniquePtr<FSlateEditableTextLayout,TDefaultDelete<FSlateEditableTextLayout>_> *pTVar2;
  longlong *plVar3;
  FEditableTextStyle *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FExtender *this_00;
  code *pcVar6;
  undefined8 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  bool bVar10;
  ISlateStyle *pIVar11;
  FName *pFVar12;
  FTextBlockStyle *pFVar13;
  FPlainTextLayoutMarshaller *pFVar14;
  FSlateEditableTextLayout *pFVar15;
  FSlateEditableTextLayout *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  FMRSWRecursiveAccessDetector *this_01;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  FSlateEditableTextLayout *pFVar19;
  ETextFlowDirection local_res8;
  char local_res9;
  ETextShapingMethod local_res10;
  char local_res11;
  ETextOverflowPolicy local_res18;
  char local_res19;
  TRawPtrProxy<FPlainTextLayoutMarshaller> local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8c8;
  FDelegateAllocation local_8c0;
  undefined1 local_8b0 [8];
  ForAnyElementType local_8a8;
  ulonglong local_8a0;
  undefined1 local_898 [8];
  ForAnyElementType local_890;
  int local_888;
  undefined1 local_880 [16];
  undefined1 local_870 [8];
  ForAnyElementType FStack_868;
  ulonglong local_860;
  undefined1 local_858 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_840;
  ForAnyElementType FStack_838;
  int local_830;
  undefined1 local_828 [24];
  ForAnyElementType FStack_810;
  int local_808;
  FPlainTextLayoutMarshaller *local_7f8;
  FSharedReferencer<1> FStack_7f0;
  TSharedRef<FPlainTextLayoutMarshaller,1> local_7e8;
  TSharedRef<ISlateMetaData,1> local_7d8;
  TRawPtrProxy<FExtender> local_7c8;
  TRawPtrProxy<FPlainTextLayoutMarshaller> local_7c0;
  undefined1 local_7b8 [16];
  undefined1 local_7a8 [8];
  void *pvStack_7a0;
  undefined8 local_798;
  undefined1 local_790 [16];
  undefined1 local_780 [8];
  void *pvStack_778;
  undefined4 local_770;
  TSharedRef<ITextLayoutMarshaller,1> local_768;
  TSharedPtr<FUICommandList,1> local_758;
  FDestructionSentinel local_748;
  FDestructionSentinel local_730;
  FDestructionSentinel local_718;
  FDestructionSentinel local_700;
  FDestructionSentinel local_6e8;
  FDestructionSentinel local_6d0;
  FDestructionSentinel local_6b8;
  FDestructionSentinel local_6a0;
  FDelegateAllocation *local_688;
  FName local_680;
  undefined8 local_678;
  FName local_670;
  FName local_668;
  TSharedRef<FExtensionBase_const_,1> local_660;
  TSharedRef<ITextLayoutMarshaller,1> local_648;
  TSharedRef<FPlainTextLayoutMarshaller,1> local_638;
  FReadAccessScope local_628;
  FTextBlockStyle local_608;
  FTextBlockStyle local_328;
  
  this_02 = (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
            (local_828 + 0x10);
  (this->bIsReadOnly).Value = (param_1->_IsReadOnly).Value;
  pFVar19 = (FSlateEditableTextLayout *)0x0;
  (this->bIsReadOnly).bIsSet = (param_1->_IsReadOnly).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsReadOnly).Getter,&(param_1->_IsReadOnly).Getter);
  (this->bIsPassword).Value = (param_1->_IsPassword).Value;
  (this->bIsPassword).bIsSet = (param_1->_IsPassword).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsPassword).Getter,&(param_1->_IsPassword).Getter);
  (this->bIsCaretMovedWhenGainFocus).Value = (param_1->_IsCaretMovedWhenGainFocus).Value;
  (this->bIsCaretMovedWhenGainFocus).bIsSet = (param_1->_IsCaretMovedWhenGainFocus).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsCaretMovedWhenGainFocus).Getter,
             &(param_1->_IsCaretMovedWhenGainFocus).Getter);
  (this->bSelectAllTextWhenFocused).Value = (param_1->_SelectAllTextWhenFocused).Value;
  (this->bSelectAllTextWhenFocused).bIsSet = (param_1->_SelectAllTextWhenFocused).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectAllTextWhenFocused).Getter,&(param_1->_SelectAllTextWhenFocused).Getter)
  ;
  (this->bRevertTextOnEscape).Value = (param_1->_RevertTextOnEscape).Value;
  (this->bRevertTextOnEscape).bIsSet = (param_1->_RevertTextOnEscape).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bRevertTextOnEscape).Getter,&(param_1->_RevertTextOnEscape).Getter);
  (this->bClearKeyboardFocusOnCommit).Value = (param_1->_ClearKeyboardFocusOnCommit).Value;
  (this->bClearKeyboardFocusOnCommit).bIsSet = (param_1->_ClearKeyboardFocusOnCommit).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bClearKeyboardFocusOnCommit).Getter,
             &(param_1->_ClearKeyboardFocusOnCommit).Getter);
  (this->bAllowContextMenu).Value = (param_1->_AllowContextMenu).Value;
  (this->bAllowContextMenu).bIsSet = (param_1->_AllowContextMenu).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bAllowContextMenu).Getter,&(param_1->_AllowContextMenu).Getter);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnContextMenuOpening,&param_1->_OnContextMenuOpening);
  if (&param_1->_OnIsTypedCharValid != &this->OnIsTypedCharValid) {
    local_898 = (undefined1  [8])0x0;
    local_890.Data = (FScriptContainerElement *)0x0;
    local_888 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsTypedCharValid,&local_628);
    if ((*(int *)&(param_1->_OnIsTypedCharValid).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnIsTypedCharValid).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_898);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_628);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsTypedCharValid,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_898);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_898,
               (FWriteAccessScope *)&local_6b8);
    if ((local_888 != 0) && (local_890.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_890.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_890,0,0,0x10);
      local_888 = 0;
    }
    if (local_6b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b8.Accessor,&local_6b8);
    }
    if (local_890.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_898);
  }
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnBeginTextEditCallback,&param_1->_OnBeginTextEdit);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChangedCallback,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommittedCallback,&param_1->_OnTextCommitted);
  (this->MinDesiredWidth).Value = (param_1->_MinDesiredWidth).Value;
  (this->MinDesiredWidth).bIsSet = (param_1->_MinDesiredWidth).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredWidth).Getter,&(param_1->_MinDesiredWidth).Getter);
  (this->bSelectAllTextOnCommit).Value = (param_1->_SelectAllTextOnCommit).Value;
  (this->bSelectAllTextOnCommit).bIsSet = (param_1->_SelectAllTextOnCommit).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectAllTextOnCommit).Getter,&(param_1->_SelectAllTextOnCommit).Getter);
  (this->bSelectWordOnMouseDoubleClick).Value = (param_1->_SelectWordOnMouseDoubleClick).Value;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = (param_1->_SelectWordOnMouseDoubleClick).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectWordOnMouseDoubleClick).Getter,
             &(param_1->_SelectWordOnMouseDoubleClick).Getter);
  (this->VirtualKeyboardType).Value = (param_1->_VirtualKeyboardType).Value;
  (this->VirtualKeyboardType).bIsSet = (param_1->_VirtualKeyboardType).bIsSet;
  TDelegate<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->VirtualKeyboardType).Getter,&(param_1->_VirtualKeyboardType).Getter);
  (this->VirtualKeyboardOptions).bEnableAutocorrect =
       (param_1->_VirtualKeyboardOptions).bEnableAutocorrect;
  (this->VirtualKeyboardTrigger).Value = (param_1->_VirtualKeyboardTrigger).Value;
  (this->VirtualKeyboardTrigger).bIsSet = (param_1->_VirtualKeyboardTrigger).bIsSet;
  TDelegate<enum_EVirtualKeyboardTrigger___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->VirtualKeyboardTrigger).Getter,&(param_1->_VirtualKeyboardTrigger).Getter);
  (this->VirtualKeyboardDismissAction).Value = (param_1->_VirtualKeyboardDismissAction).Value;
  (this->VirtualKeyboardDismissAction).bIsSet = (param_1->_VirtualKeyboardDismissAction).bIsSet;
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->VirtualKeyboardDismissAction).Getter,
             &(param_1->_VirtualKeyboardDismissAction).Getter);
  TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnKeyCharHandler,&param_1->_OnKeyCharHandler);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  (this->bEnableIntegratedKeyboard).Value = (param_1->_EnableIntegratedKeyboard).Value;
  (this->bEnableIntegratedKeyboard).bIsSet = (param_1->_EnableIntegratedKeyboard).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bEnableIntegratedKeyboard).Getter,&(param_1->_EnableIntegratedKeyboard).Getter)
  ;
  FSlateFontInfo::operator=(&(this->Font).Value,&(param_1->_Font).Value);
  (this->Font).bIsSet = (param_1->_Font).bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Font).Getter,&(param_1->_Font).Getter);
  uVar7 = *(undefined8 *)
           ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar7;
  EVar8 = (param_1->_ColorAndOpacity).Value.ColorTableId;
  uVar9 = *(undefined2 *)&(param_1->_ColorAndOpacity).Value.field_0x12;
  (this->ColorAndOpacity).Value.ColorUseRule = (param_1->_ColorAndOpacity).Value.ColorUseRule;
  (this->ColorAndOpacity).Value.ColorTableId = EVar8;
  *(undefined2 *)&(this->ColorAndOpacity).Value.field_0x12 = uVar9;
  (this->ColorAndOpacity).bIsSet = (param_1->_ColorAndOpacity).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ColorAndOpacity).Getter,&(param_1->_ColorAndOpacity).Getter);
  (this->BackgroundImageSelected).Value = (param_1->_BackgroundImageSelected).Value;
  (this->BackgroundImageSelected).bIsSet = (param_1->_BackgroundImageSelected).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->BackgroundImageSelected).Getter,&(param_1->_BackgroundImageSelected).Getter);
  if ((param_1->_Style == (FEditableTextStyle *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableText.cpp"
                          ,0x3b,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar11 = FAppStyle::Get();
  pFVar12 = ::FName::FName(&local_680,"NormalText");
  pFVar13 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar11 + 0xa0))(pIVar11,FTextBlockStyle::TypeName,*pFVar12,0,1)
  ;
  if (pFVar13 == (FTextBlockStyle *)0x0) {
    pFVar13 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::FTextBlockStyle(&local_608,pFVar13);
  FSlateFontInfo::operator=(&local_608.Font,&param_1->_Style->Font);
  pFVar4 = param_1->_Style;
  local_608.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       *(undefined8 *)&(pFVar4->ColorAndOpacity).SpecifiedColor.field0_0x0;
  local_608.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(pFVar4->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  local_608.ColorAndOpacity.ColorUseRule = (pFVar4->ColorAndOpacity).ColorUseRule;
  local_608.ColorAndOpacity.ColorTableId = (pFVar4->ColorAndOpacity).ColorTableId;
  local_608.ColorAndOpacity._18_2_ = *(undefined2 *)&(pFVar4->ColorAndOpacity).field_0x12;
  FSlateBrush::operator=(&local_608.HighlightShape,&pFVar4->BackgroundImageSelected);
  pFVar14 = ::operator_new(0x30);
  local_res20.Object = (FPlainTextLayoutMarshaller *)pFVar19;
  if (pFVar14 != (FPlainTextLayoutMarshaller *)0x0) {
    local_res20.Object = FPlainTextLayoutMarshaller::FPlainTextLayoutMarshaller(pFVar14);
  }
  TSharedRef<FPlainTextLayoutMarshaller,1>::
  TSharedRef<FPlainTextLayoutMarshaller,1><FPlainTextLayoutMarshaller>(&local_638,&local_res20);
  local_7f8 = local_638.Object;
  FStack_7f0.ReferenceController = local_638.SharedReferenceCount.ReferenceController;
  if (local_638.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->PlainTextMarshaller;
  if (pTVar1 != (TSharedPtr<FPlainTextLayoutMarshaller,1> *)&local_7f8) {
    pTVar1->Object = local_638.Object;
    local_7f8 = (FPlainTextLayoutMarshaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PlainTextMarshaller).SharedReferenceCount,&FStack_7f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_7f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_638.SharedReferenceCount.ReferenceController);
  if ((pTVar1->Object == (FPlainTextLayoutMarshaller *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = pTVar1->Object;
  (pFVar14->bIsPassword).Value = (this->bIsPassword).Value;
  (pFVar14->bIsPassword).bIsSet = (this->bIsPassword).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar14->bIsPassword).Getter,&(this->bIsPassword).Getter);
  pFVar14 = ::operator_new(0x30);
  local_7c0.Object = (FPlainTextLayoutMarshaller *)pFVar19;
  if (pFVar14 != (FPlainTextLayoutMarshaller *)0x0) {
    local_7c0.Object = FPlainTextLayoutMarshaller::FPlainTextLayoutMarshaller(pFVar14);
  }
  TSharedRef<FPlainTextLayoutMarshaller,1>::
  TSharedRef<FPlainTextLayoutMarshaller,1><FPlainTextLayoutMarshaller>(&local_7e8,&local_7c0);
  if ((pTVar1->Object == (FPlainTextLayoutMarshaller *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = pTVar1->Object;
  pTVar5 = (this->PlainTextMarshaller).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar14 == (FPlainTextLayoutMarshaller *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_8a0 = 0;
  local_8b0 = (undefined1  [8])0x0;
  local_8a8.Data = (FScriptContainerElement *)0x0;
  pFVar15 = ::operator_new(0xa50);
  pFVar16 = pFVar19;
  if (pFVar15 != (FSlateEditableTextLayout *)0x0) {
    local_648.Object = (ITextLayoutMarshaller *)local_7e8.Object;
    local_648.SharedReferenceCount.ReferenceController =
         local_7e8.SharedReferenceCount.ReferenceController;
    if (local_7e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
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
    local_768.Object = (ITextLayoutMarshaller *)pFVar14;
    local_768.SharedReferenceCount.ReferenceController = pTVar5;
    pFVar13 = FTextBlockStyle::FTextBlockStyle(&local_328,&local_608);
    pFVar16 = FSlateEditableTextLayout::FSlateEditableTextLayout
                        (pFVar15,(ISlateEditableTextWidget *)&this->_padding_,&param_1->_Text,
                         pFVar13,SUB82(&local_res10,0),SUB82(&local_res8,0),
                         (TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
                          *)local_8b0,&local_768,&local_648);
  }
  pTVar2 = &this->EditableTextLayout;
  if (pTVar2 == (TUniquePtr<FSlateEditableTextLayout,TDefaultDelete<FSlateEditableTextLayout>_> *)
                &local_678) {
    if (pFVar16 == (FSlateEditableTextLayout *)0x0) goto LAB_14285eebe;
    FSlateEditableTextLayout::~FSlateEditableTextLayout(pFVar16);
  }
  else {
    pFVar15 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar16;
    if (pFVar15 == (FSlateEditableTextLayout *)0x0) goto LAB_14285eebe;
    FSlateEditableTextLayout::~FSlateEditableTextLayout(pFVar15);
    pFVar16 = pFVar15;
  }
  ::operator_delete(pFVar16,0xa50);
LAB_14285eebe:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b0,
             (FWriteAccessScope *)&local_748);
  if (((int)local_8a0 != 0) && (local_8a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_8a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8a8,0,0,0x10);
    local_8a0 = local_8a0 & 0xffffffff00000000;
  }
  if (local_748.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
  }
  if (local_8a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlateEditableTextLayout::SetHintText((this->EditableTextLayout).Ptr,&param_1->_HintText);
  FSlateEditableTextLayout::SetSearchText((this->EditableTextLayout).Ptr,&param_1->_SearchText);
  bVar10 = (param_1->_CaretImage).bIsSet;
  pFVar16 = (this->EditableTextLayout).Ptr;
  if (bVar10 == false) {
    local_7b8._0_8_ = &param_1->_Style->CaretImage;
    local_7b8[8] = true;
    local_798 = 0;
    local_7a8 = (undefined1  [8])0x0;
    pvStack_7a0 = (void *)0x0;
    FSlateEditableTextLayout::SetCursorBrush(pFVar16,(TAttribute<FSlateBrush_const_*> *)local_7b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7a8);
    if (pvStack_7a0 != (void *)0x0) {
      FMemory::Free(pvStack_7a0);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_7a8;
  }
  else {
    local_790._0_8_ = (param_1->_CaretImage).Value;
    local_780 = (undefined1  [8])0x0;
    pvStack_778 = (void *)0x0;
    local_770 = 0;
    local_790[8] = bVar10;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_780,
               &(param_1->_CaretImage).Getter);
    FSlateEditableTextLayout::SetCursorBrush(pFVar16,(TAttribute<FSlateBrush_const_*> *)local_790);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_780);
    if (pvStack_778 != (void *)0x0) {
      FMemory::Free(pvStack_778);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_780;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
  bVar10 = (param_1->_BackgroundImageComposing).bIsSet;
  pFVar16 = (this->EditableTextLayout).Ptr;
  if (bVar10 == false) {
    local_880._0_8_ = &param_1->_Style->BackgroundImageComposing;
    local_880[8] = true;
    local_860 = 0;
    local_870 = (undefined1  [8])0x0;
    FStack_868.Data = (FScriptContainerElement *)0x0;
    FSlateEditableTextLayout::SetCompositionBrush
              (pFVar16,(TAttribute<FSlateBrush_const_*> *)local_880);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
               (FWriteAccessScope *)&local_718);
    if (((int)local_860 != 0) && (FStack_868.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_868.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_868,0,0,0x10);
      local_860 = local_860 & 0xffffffff00000000;
    }
    if (local_718.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
    }
    if (FStack_868.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_868.Data);
    }
    this_02 = (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_870;
  }
  else {
    local_828._0_8_ = (param_1->_BackgroundImageComposing).Value;
    local_828._16_8_ = 0;
    FStack_810.Data = (FScriptContainerElement *)0x0;
    local_808 = 0;
    local_828[8] = bVar10;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(this_02,&(param_1->_BackgroundImageComposing).Getter);
    FSlateEditableTextLayout::SetCompositionBrush
              (pFVar16,(TAttribute<FSlateBrush_const_*> *)local_828);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
               (FWriteAccessScope *)&local_730);
    if ((local_808 != 0) && (FStack_810.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_810.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_810,0,0,0x10);
      local_808 = 0;
    }
    if (local_730.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
    }
    if (FStack_810.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_810.Data);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_02);
  pFVar16 = (this->EditableTextLayout).Ptr;
  local_8c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_8c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_8c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8c8,(FWriteAccessScope *)&local_6a0);
  local_688 = &local_8c0;
  puVar17 = UE::Core::Private::DelegateAllocate(0x20,&local_8c0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar17[3] = this;
  }
  if (local_6a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a0.Accessor,&local_6a0);
  }
  local_858._0_8_ = (FScriptContainerElement *)0x0;
  local_858._8_4_ = 0;
  local_858._12_4_ = 0;
  local_858[0x10] = true;
  local_840.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_838.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8c8,(FWriteAccessScope *)&local_700);
  if (FStack_838.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_838.Data);
  }
  FStack_838.Data = (FScriptContainerElement *)local_8c0.DelegateAllocator;
  local_830 = local_8c0.DelegateSize;
  local_8c0.DelegateSize = 0;
  local_8c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  FSlateEditableTextLayout::SetDebugSourceInfo(pFVar16,(TAttribute<FString> *)local_858);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_840,(FWriteAccessScope *)&local_6e8);
  if ((local_830 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_838.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_838.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_838,0,0,0x10);
    local_830 = 0;
  }
  if (local_6e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e8.Accessor,&local_6e8);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_838.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_838.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_840.AccessDetector);
  if ((FScriptContainerElement *)local_858._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_858._0_8_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8c8,(FWriteAccessScope *)&local_6d0);
  if ((local_8c0.DelegateSize != 0) &&
     (local_8c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_8c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_8c0,0,0,0x10);
    local_8c0.DelegateSize = 0;
  }
  if (local_6d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d0.Accessor,&local_6d0);
  }
  if (local_8c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_8c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8c8.AccessDetector);
  FSlateEditableTextLayout::SetJustification
            ((this->EditableTextLayout).Ptr,&param_1->_Justification);
  local_res19 = (param_1->_OverflowPolicy).bIsSet;
  if ((bool)local_res19 != false) {
    local_res18 = (param_1->_OverflowPolicy).TypedValue;
  }
  FSlateEditableTextLayout::SetOverflowPolicy((this->EditableTextLayout).Ptr,SUB82(&local_res18,0));
  pFVar16 = ::operator_new(0x10);
  local_7c8.Object = (FExtender *)pFVar19;
  if (pFVar16 != (FSlateEditableTextLayout *)0x0) {
    pFVar16->OwnerWidget = (ISlateEditableTextWidget *)0x0;
    (pFVar16->GraphemeBreakIterator).Object = (IBreakIterator *)0x0;
    local_7c8.Object = (FExtender *)pFVar16;
  }
  TSharedPtr<FExtender,1>::operator=<FExtender>(&this->MenuExtender,&local_7c8);
  if (((this->MenuExtender).Object == (FExtender *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = (this->MenuExtender).Object;
  local_758.Object = (FUICommandList *)0x0;
  local_758.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar12 = ::FName::FName(&local_670,"EditText");
  FExtender::AddMenuExtension
            (this_00,&local_660,*pFVar12,Before,&local_758,&param_1->_ContextMenuExtender);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.SharedReferenceCount.ReferenceController);
  pFVar12 = ::FName::FName(&local_668,L"EditableText");
  pFVar16 = ::operator_new(0x30);
  if (pFVar16 == (FSlateEditableTextLayout *)0x0) {
    local_7d8.Object = ___xmm_00000000000000000000000000000010;
    local_7d8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)&(pFVar16->GraphemeBreakIterator).Object = 1;
    *(undefined4 *)((longlong)&(pFVar16->GraphemeBreakIterator).Object + 4) = 1;
    pFVar16->OwnerWidget =
         (ISlateEditableTextWidget *)
         &___7__TIntrusiveReferenceController_VFTrackedMetaData___00_SharedPointerInternals__6B_;
    FTrackedMetaData::FTrackedMetaData
              ((FTrackedMetaData *)&(pFVar16->GraphemeBreakIterator).SharedReferenceCount,
               (SWidget *)this,*pFVar12);
    local_7d8.Object = (ISlateMetaData *)&(pFVar16->GraphemeBreakIterator).SharedReferenceCount;
    if (((TAttribute<bool> *)local_7d8.Object == (TAttribute<bool> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    *(int *)&(pFVar16->GraphemeBreakIterator).Object =
         *(int *)&(pFVar16->GraphemeBreakIterator).Object + 1;
    UNLOCK();
    pFVar19 = pFVar16;
    local_7d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16;
  }
  SWidget::AddMetadataInternal((SWidget *)this,&local_7d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7e8.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_608);
  return;
}

// CreateAccessibleWidget @ 1428665f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SEditableText::CreateAccessibleWidget
          (SEditableText *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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
         (longlong)&FSlateAccessibleEditableText::_vftable__for__FSlateAccessibleWidget__;
    this_00[1]._padding_ = (longlong)&FSlateAccessibleEditableText::_vftable__for__IAccessibleText__
    ;
    this_00[1]._padding_ =
         (longlong)&FSlateAccessibleEditableText::_vftable__for__IAccessibleProperty__;
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

// EnableTextInputMethodContext @ 14286f010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::EnableTextInputMethodContext(SEditableText *this)

{
  FSlateEditableTextLayout::EnableTextInputMethodContext((this->EditableTextLayout).Ptr);
  return;
}

// EnsureActiveTick @ 14286f2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::EnsureActiveTick(SEditableText *this)

{
  float *pfVar1;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  float fVar2;
  FSlateBrush *pFVar3;
  float fVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TSharedRef<FActiveTimerHandle,1> *pTVar7;
  FSlateBrush *pFVar8;
  FSlateBrush *pFVar9;
  bool bVar10;
  TSharedRef<FActiveTimerHandle,1> local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pFVar9 = (this->BackgroundImageSelected).Value;
  pFVar8 = pFVar9;
  if (pFVar9 != (FSlateBrush *)0x0) {
    fVar2 = (pFVar9->TintColor).SpecifiedColor.field0_0x0._s_0.R;
    do {
      pFVar8 = (FSlateBrush *)0x0;
      if (fVar2 == 0.0) goto LAB_14286f2f7;
      LOCK();
      fVar4 = (pFVar9->TintColor).SpecifiedColor.field0_0x0._s_0.R;
      bVar10 = fVar2 == fVar4;
      if (bVar10) {
        (pFVar9->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar2 + 1);
        fVar4 = fVar2;
      }
      UNLOCK();
      fVar2 = fVar4;
    } while (!bVar10);
    pFVar8 = pFVar9;
    if (*(longlong *)&(this->ColorAndOpacity).Getter.field_0x10 != 0) goto LAB_14286f404;
  }
LAB_14286f2f7:
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  this_00 = &this[-1].bRevertTextOnEscape.Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this_00;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pTVar7 = SWidget::RegisterActiveTimer
                     ((SWidget *)this_00,&local_58,__real_3f000000,
                      (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                       *)local_48);
  *(FActiveTimerHandle **)&(this->ColorAndOpacity).Getter.field_0x10 = pTVar7->Object;
  pFVar9 = (FSlateBrush *)(pTVar7->SharedReferenceCount).ReferenceController;
  if (pFVar9 != (this->BackgroundImageSelected).Value) {
    if (pFVar9 != (FSlateBrush *)0x0) {
      LOCK();
      pfVar1 = &(pFVar9->TintColor).SpecifiedColor.field0_0x0._s_0.G;
      *pfVar1 = (float)((int)*pfVar1 + 1);
      UNLOCK();
    }
    pFVar3 = (this->BackgroundImageSelected).Value;
    if (pFVar3 != (FSlateBrush *)0x0) {
      LOCK();
      pfVar1 = &(pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.G;
      fVar2 = *pfVar1;
      *pfVar1 = (float)((int)*pfVar1 + -1);
      UNLOCK();
      if (fVar2 == 1.4013e-45) {
        (**(code **)(pFVar3->_padding_ + 8))(pFVar3,1);
      }
    }
    (this->BackgroundImageSelected).Value = pFVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pFVar9 = pFVar8;
LAB_14286f404:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return;
}

// GetChildren @ 142875a40

/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall SEditableText::GetChildren(SEditableText *this)

{
  FChildren *pFVar1;
  
  pFVar1 = FSlateEditableTextLayout::GetChildren((this->EditableTextLayout).Ptr);
  return pFVar1;
}

// GetDefaultAccessibleText @ 1428761b0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FText> * __thiscall
SEditableText::GetDefaultAccessibleText
          (SEditableText *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FText> *pTVar3;
  FText local_18;
  
  FSlateEditableTextLayout::GetHintText((this->EditableTextLayout).Ptr,&local_18);
  FText::FText((FText *)__return_storage_ptr__,&local_18);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<FText> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetFocusBrush @ 1428768b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SEditableText::GetFocusBrush(SEditableText *this)

{
  return (FSlateBrush *)0x0;
}

// GetFont @ 1428768c0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall
SEditableText::GetFont(SEditableText *this,FSlateFontInfo *__return_storage_ptr__)

{
  FSlateFontInfo *pFVar1;
  
  pFVar1 = TAttribute<FSlateFontInfo>::Get(&this->Font);
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetHintText @ 142876f10

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SEditableText::GetHintText(SEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetHintText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSearchText @ 142879ef0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SEditableText::GetSearchText(SEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetSearchText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelectedText @ 142879f90

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SEditableText::GetSelectedText(SEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetSelectedText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelection @ 14287a030

/* WARNING: Enum "Type": Some values do not have unique names */

FTextSelection * __thiscall
SEditableText::GetSelection(SEditableText *this,FTextSelection *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetSelection((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSlateWidget @ 14287aab0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SEditableText::GetSlateWidget(SEditableText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&this[-1].bRevertTextOnEscape.Getter.field_0x8,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSlateWidgetPtr @ 14287aae0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SEditableText::GetSlateWidgetPtr(SEditableText *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<SWidget,1> *pTVar3;
  undefined1 *this_00;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = &this[-1].bRevertTextOnEscape.Getter.field_0x8;
  if (((*(longlong *)this_00 != 0) &&
      (lVar1 = *(longlong *)&this[-1].bRevertTextOnEscape.Getter.field_0x10, lVar1 != 0)) &&
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

// GetText @ 14287bdc0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SEditableText::GetText(SEditableText *this,FText *__return_storage_ptr__)

{
  FSlateEditableTextLayout::GetText((this->EditableTextLayout).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVirtualKeyboardDismissAction @ 14287da80

/* WARNING: Enum "Type": Some values do not have unique names */

EVirtualKeyboardDismissAction __thiscall
SEditableText::GetVirtualKeyboardDismissAction(SEditableText *this)

{
  undefined1 *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  EVirtualKeyboardDismissAction EVar4;
  longlong *plVar5;
  FReadAccessScope local_28;
  
  this_00 = &(this->bSelectAllTextWhenFocused).Getter.field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  iVar1._0_1_ = (this->bRevertTextOnEscape).Value;
  iVar1._1_1_ = (this->bRevertTextOnEscape).bIsSet;
  iVar1._2_2_ = *(undefined2 *)&(this->bRevertTextOnEscape).field_0x2;
  if ((iVar1 != 0) &&
     (plVar5 = *(longlong **)&(this->bSelectAllTextWhenFocused).Getter.field_0x10,
     plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      iVar2._0_1_ = (this->bRevertTextOnEscape).Value;
      iVar2._1_1_ = (this->bRevertTextOnEscape).bIsSet;
      iVar2._2_2_ = *(undefined2 *)&(this->bRevertTextOnEscape).field_0x2;
      if (iVar2 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->bSelectAllTextWhenFocused).Getter.field_0x10;
      }
      EVar4 = (**(code **)(*plVar5 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(EVirtualKeyboardDismissAction *)&(this->bSelectAllTextWhenFocused).Getter = EVar4;
      return EVar4;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return *(EVirtualKeyboardDismissAction *)&(this->bSelectAllTextWhenFocused).Getter;
}

// GetVirtualKeyboardOptions @ 14287db30

/* WARNING: Enum "Type": Some values do not have unique names */

FVirtualKeyboardOptions __thiscall SEditableText::GetVirtualKeyboardOptions(SEditableText *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = (this->bIsCaretMovedWhenGainFocus).Value;
  return (FVirtualKeyboardOptions)SUB81(in_RDX,0);
}

// GetVirtualKeyboardTrigger @ 14287db50

/* WARNING: Enum "Type": Some values do not have unique names */

EVirtualKeyboardTrigger __thiscall SEditableText::GetVirtualKeyboardTrigger(SEditableText *this)

{
  undefined1 *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  EVirtualKeyboardTrigger EVar4;
  longlong *plVar5;
  FReadAccessScope local_28;
  
  this_00 = &(this->bIsCaretMovedWhenGainFocus).Getter.field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  iVar1._0_1_ = (this->bSelectAllTextWhenFocused).Value;
  iVar1._1_1_ = (this->bSelectAllTextWhenFocused).bIsSet;
  iVar1._2_2_ = *(undefined2 *)&(this->bSelectAllTextWhenFocused).field_0x2;
  if ((iVar1 != 0) &&
     (plVar5 = *(longlong **)&(this->bIsCaretMovedWhenGainFocus).Getter.field_0x10,
     plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      iVar2._0_1_ = (this->bSelectAllTextWhenFocused).Value;
      iVar2._1_1_ = (this->bSelectAllTextWhenFocused).bIsSet;
      iVar2._2_2_ = *(undefined2 *)&(this->bSelectAllTextWhenFocused).field_0x2;
      if (iVar2 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->bIsCaretMovedWhenGainFocus).Getter.field_0x10;
      }
      EVar4 = (**(code **)(*plVar5 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(EVirtualKeyboardTrigger *)&(this->bIsCaretMovedWhenGainFocus).Getter = EVar4;
      return EVar4;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return *(EVirtualKeyboardTrigger *)&(this->bIsCaretMovedWhenGainFocus).Getter;
}

// GetVirtualKeyboardType @ 14287dc00

/* WARNING: Enum "Type": Some values do not have unique names */

EKeyboardType __thiscall SEditableText::GetVirtualKeyboardType(SEditableText *this)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  EKeyboardType EVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  this_00 = &(this->bIsPassword).Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(this->bIsPassword).Getter.field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->bIsPassword).Getter.field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->bIsPassword).Getter.field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->bIsPassword).Getter.field_0x8;
      }
      EVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->bIsPassword).Value = (bool)(char)EVar2;
      (this->bIsPassword).bIsSet = (bool)(char)(EVar2 >> 8);
      *(short *)&(this->bIsPassword).field_0x2 = (short)(EVar2 >> 0x10);
      return EVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar2._0_1_ = (this->bIsPassword).Value;
  EVar2._1_1_ = (this->bIsPassword).bIsSet;
  EVar2._2_2_ = *(undefined2 *)&(this->bIsPassword).field_0x2;
  return EVar2;
}

// GoTo @ 14287e3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::GoTo(SEditableText *this,FTextLocation *param_1)

{
  FSlateEditableTextLayout::GoTo((this->EditableTextLayout).Ptr,param_1);
  return;
}

// GoTo @ 14287e3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::GoTo(SEditableText *this,ETextLocation param_1)

{
  FSlateEditableTextLayout::GoTo((this->EditableTextLayout).Ptr,param_1);
  return;
}

// IsIntegratedKeyboardEnabled @ 142881ee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::IsIntegratedKeyboardEnabled(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// IsInteractable @ 142881f30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::IsInteractable(SEditableText *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// IsMultiLineTextEdit @ 142881f50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::IsMultiLineTextEdit(SEditableText *this)

{
  return false;
}

// IsTextPassword @ 142882a90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::IsTextPassword(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// IsTextReadOnly @ 142882ac0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::IsTextReadOnly(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// OnArrangeChildren @ 142884d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::OnArrangeChildren(SEditableText *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FSlateEditableTextLayout::OnArrangeChildren((this->EditableTextLayout).Ptr,param_1,param_2);
  return;
}

// OnBeginTextEdit @ 142884db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::OnBeginTextEdit(SEditableText *this,FText *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->Font).Value.CompositeFont,&local_28);
  if (((this->Font).Value.TypefaceFontName.ComparisonIndex.Value != 0) &&
     (pTVar1 = (this->Font).Value.CompositeFont.SharedReferenceCount.ReferenceController,
     pTVar1 != (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(pTVar1->_padding_ + 0x68))(pTVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCursorMoved @ 142885190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::OnCursorMoved(SEditableText *this,FTextLocation *param_1)

{
  SWidget::Invalidate((SWidget *)&this[-1].bRevertTextOnEscape.Getter,Layout);
  return;
}

// OnCursorQuery @ 142885410

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SEditableText::OnCursorQuery
          (SEditableText *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
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

// OnDragOver @ 142885bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnDragOver
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142885c35:
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FExternalDragOperation::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 == '\0') goto LAB_142885c35;
    pTVar5 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar1 != (FDragDropOperation *)0x0) &&
       (((ulonglong)pFVar1[1].CursorDecoratorWindow.Object & 1) != 0)) {
      bVar4 = true;
      goto LAB_142885c39;
    }
  }
  bVar4 = false;
LAB_142885c39:
  FReply::FReply(__return_storage_ptr__,bVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// OnDrop @ 142885e70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnDrop
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  FSlateEditableTextLayout *this_00;
  char cVar3;
  FText *pFVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FText local_68;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142885fd0:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FExternalDragOperation::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 == '\0') goto LAB_142885fd0;
    pFVar1 = (param_2->Content).Object;
    pTVar6 = (param_2->Content).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar1 != (FDragDropOperation *)0x0) &&
       (((ulonglong)pFVar1[1].CursorDecoratorWindow.Object & 1) != 0)) {
      this_00 = (this->EditableTextLayout).Ptr;
      pFVar4 = FText::FromString(&local_68,(FString *)(pFVar1 + 1));
      FText::FText((FText *)local_40,pFVar4);
      local_40[0x10] = true;
      local_18 = 0;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      FSlateEditableTextLayout::SetText(this_00,(TAttribute<FText> *)local_40);
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
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      bVar5 = true;
      goto LAB_142885fd4;
    }
  }
  bVar5 = false;
LAB_142885fd4:
  FReply::FReply(__return_storage_ptr__,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnFocusLost @ 142886360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::OnFocusLost(SEditableText *this,FFocusEvent *param_1)

{
  FSlateEditableTextLayout::HandleFocusLost((this->EditableTextLayout).Ptr,param_1);
  return;
}

// OnFocusReceived @ 1428863e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnFocusReceived
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  FSlateEditableTextLayout::HandleFocusReceived((this->EditableTextLayout).Ptr,param_2);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnKeyChar @ 142886a30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnKeyChar
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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

// OnKeyDown @ 142886f70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnKeyDown
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

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
    if ((char)__return_storage_ptr__->_padding_ == '\0') {
      pFVar3 = SWidget::OnKeyDown((SWidget *)this,&local_e0,param_1,param_2);
      FReply::operator=(__return_storage_ptr__,pFVar3);
      FReply::~FReply(&local_e0);
    }
  }
  return __return_storage_ptr__;
}

// OnKeyUp @ 142887430

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnKeyUp
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FSlateEditableTextLayout::HandleKeyUp
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1428877e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnMouseButtonDoubleClick
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSlateEditableTextLayout::HandleMouseButtonDoubleClick
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142888810

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnMouseButtonDown
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSlateEditableTextLayout::HandleMouseButtonDown
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142889680

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnMouseButtonUp
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSlateEditableTextLayout::HandleMouseButtonUp
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseMove @ 142889dc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableText::OnMouseMove
          (SEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSlateEditableTextLayout::HandleMouseMove
            ((this->EditableTextLayout).Ptr,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPaint @ 14288ec00

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SEditableText::OnPaint
          (SEditableText *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  bool bVar2;
  int iVar3;
  FTextBlockStyle *pFVar4;
  FSlateColor *this_00;
  FLinearColor_u_0 local_38;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pFVar4 = FSlateEditableTextLayout::GetTextStyle((this->EditableTextLayout).Ptr);
  EVar1 = (pFVar4->ColorAndOpacity).ColorUseRule;
  this_00 = &pFVar4->ColorAndOpacity;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 == UseColor_ColorTable) {
      this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
    }
    else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
      this_00 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      this_00 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_28 = (this_00->SpecifiedColor).field0_0x0._s_0.R;
  fStack_24 = (this_00->SpecifiedColor).field0_0x0._s_0.G;
  fStack_20 = (this_00->SpecifiedColor).field0_0x0._s_0.B;
  fStack_1c = (this_00->SpecifiedColor).field0_0x0._s_0.A;
  local_38._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
  fStack_c = fStack_1c * FWidgetStyle::SubdueAmount;
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_18 = local_28;
  fStack_14 = fStack_24;
  fStack_10 = fStack_20;
  iVar3 = FSlateEditableTextLayout::OnPaint
                    ((this->EditableTextLayout).Ptr,param_1,param_2,param_3,param_4,param_5,
                     (FWidgetStyle *)&local_38._s_0,bVar2);
  return iVar3;
}

// OnTextChanged @ 14288f7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::OnTextChanged(SEditableText *this,FText *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Font).Value.Size,
             &local_28);
  if (((this->Font).Value.MonospacedWidth != 0.0) &&
     (plVar1 = *(longlong **)&(this->Font).Value.SkewAmount, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnTextCommitted @ 14288f840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::OnTextCommitted(SEditableText *this,FText *param_1,Type param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Font).bIsSet,
             &local_28);
  if ((*(int *)&(this->Font).Getter.field_0x8 != 0) &&
     (plVar1 = *(longlong **)&(this->Font).Getter, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ScrollTo @ 1428953a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::ScrollTo(SEditableText *this,FTextLocation *param_1)

{
  FSlateEditableTextLayout::ScrollTo((this->EditableTextLayout).Ptr,param_1);
  return;
}

// ScrollTo @ 1428953c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::ScrollTo(SEditableText *this,ETextLocation param_1)

{
  FSlateEditableTextLayout::ScrollTo((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SelectAllText @ 142895450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SelectAllText(SEditableText *this)

{
  FSlateEditableTextLayout::SelectAllText((this->EditableTextLayout).Ptr);
  return;
}

// SelectText @ 1428955b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SelectText(SEditableText *this,FTextLocation *param_1,FTextLocation *param_2)

{
  FSlateEditableTextLayout::SelectText((this->EditableTextLayout).Ptr,param_1,param_2);
  return;
}

// SetAllowContextMenu @ 1428956d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetAllowContextMenu(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bAllowContextMenu).Value = param_1->Value;
  (this->bAllowContextMenu).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bAllowContextMenu).Getter,&param_1->Getter);
  return;
}

// SetClearKeyboardFocusOnCommit @ 142895af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetClearKeyboardFocusOnCommit(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bClearKeyboardFocusOnCommit).Value = param_1->Value;
  (this->bClearKeyboardFocusOnCommit).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bClearKeyboardFocusOnCommit).Getter,&param_1->Getter);
  return;
}

// SetColorAndOpacity @ 142895bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetColorAndOpacity(SEditableText *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->ColorAndOpacity).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->ColorAndOpacity).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->ColorAndOpacity).Value.field_0x12 = uVar4;
  (this->ColorAndOpacity).bIsSet = param_1->bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ColorAndOpacity).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetEditableText @ 1428960e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::SetEditableText(SEditableText *this,FText *param_1)

{
  bool bVar1;
  
  bVar1 = FSlateEditableTextLayout::SetEditableText((this->EditableTextLayout).Ptr,param_1,false);
  return bVar1;
}

// SetEnableIntegratedKeyboard @ 142896100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetEnableIntegratedKeyboard(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bEnableIntegratedKeyboard).Value = param_1->Value;
  (this->bEnableIntegratedKeyboard).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bEnableIntegratedKeyboard).Getter,&param_1->Getter);
  return;
}

// SetFont @ 142896890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetFont(SEditableText *this,TAttribute<FSlateFontInfo> *param_1)

{
  FSlateFontInfo::operator=(&(this->Font).Value,&param_1->Value);
  (this->Font).bIsSet = param_1->bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Font).Getter,&param_1->Getter);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetHintText @ 142896cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetHintText(SEditableText *this,TAttribute<FText> *param_1)

{
  FSlateEditableTextLayout::SetHintText((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetIsCaretMovedWhenGainFocus @ 142896db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetIsCaretMovedWhenGainFocus(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bIsCaretMovedWhenGainFocus).Value = param_1->Value;
  (this->bIsCaretMovedWhenGainFocus).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsCaretMovedWhenGainFocus).Getter,&param_1->Getter);
  return;
}

// SetIsPassword @ 142896ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetIsPassword(SEditableText *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FPlainTextLayoutMarshaller *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  this_00 = &param_1->Getter;
  (this->bIsPassword).Value = param_1->Value;
  (this->bIsPassword).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsPassword).Getter,this_00);
  if ((this->PlainTextMarshaller).Object == (FPlainTextLayoutMarshaller *)0x0) {
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
  pFVar1 = (this->PlainTextMarshaller).Object;
  (pFVar1->bIsPassword).Value = (this->bIsPassword).Value;
  (pFVar1->bIsPassword).bIsSet = (this->bIsPassword).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->bIsPassword).Getter,&(this->bIsPassword).Getter);
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

// SetIsReadOnly @ 142897170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetIsReadOnly(SEditableText *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->bIsReadOnly).Value = param_1->Value;
  (this->bIsReadOnly).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsReadOnly).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetJustification @ 142897350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetJustification(SEditableText *this,TAttribute<ETextJustify::Type> *param_1)

{
  FSlateEditableTextLayout::SetJustification((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetMinDesiredWidth @ 142897bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetMinDesiredWidth(SEditableText *this,TAttribute<float> *param_1)

{
  (this->MinDesiredWidth).Value = param_1->Value;
  (this->MinDesiredWidth).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredWidth).Getter,&param_1->Getter);
  return;
}

// SetOverflowPolicy @ 142898240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetOverflowPolicy(SEditableText *this,TOptional<ETextOverflowPolicy> param_1)

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

// SetRevertTextOnEscape @ 142898730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetRevertTextOnEscape(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bRevertTextOnEscape).Value = param_1->Value;
  (this->bRevertTextOnEscape).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bRevertTextOnEscape).Getter,&param_1->Getter);
  return;
}

// SetSearchText @ 142898b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetSearchText(SEditableText *this,TAttribute<FText> *param_1)

{
  FSlateEditableTextLayout::SetSearchText((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetSelectAllTextOnCommit @ 142898bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetSelectAllTextOnCommit(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bSelectAllTextOnCommit).Value = param_1->Value;
  (this->bSelectAllTextOnCommit).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectAllTextOnCommit).Getter,&param_1->Getter);
  return;
}

// SetSelectAllTextWhenFocused @ 142898c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetSelectAllTextWhenFocused(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bSelectAllTextWhenFocused).Value = param_1->Value;
  (this->bSelectAllTextWhenFocused).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectAllTextWhenFocused).Getter,&param_1->Getter);
  return;
}

// SetSelectWordOnMouseDoubleClick @ 142898d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetSelectWordOnMouseDoubleClick(SEditableText *this,TAttribute<bool> *param_1)

{
  (this->bSelectWordOnMouseDoubleClick).Value = param_1->Value;
  (this->bSelectWordOnMouseDoubleClick).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSelectWordOnMouseDoubleClick).Getter,&param_1->Getter);
  return;
}

// SetText @ 14289aa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetText(SEditableText *this,TAttribute<FText> *param_1)

{
  FSlateEditableTextLayout::SetText((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetTextBlockStyle @ 14289aaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetTextBlockStyle(SEditableText *this,FTextBlockStyle *param_1)

{
  if (param_1 != (FTextBlockStyle *)0x0) {
    FSlateEditableTextLayout::SetTextStyle((this->EditableTextLayout).Ptr,param_1);
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  return;
}

// SetTextFlowDirection @ 14289ac60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetTextFlowDirection(SEditableText *this,TOptional<ETextFlowDirection> *param_1)

{
  FSlateEditableTextLayout::SetTextFlowDirection((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetTextShapingMethod @ 14289ae60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetTextShapingMethod(SEditableText *this,TOptional<ETextShapingMethod> *param_1)

{
  FSlateEditableTextLayout::SetTextShapingMethod((this->EditableTextLayout).Ptr,param_1);
  return;
}

// SetTextStyle @ 14289aef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SetTextStyle(SEditableText *this,FEditableTextStyle *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined1 local_c8 [8];
  undefined1 auStack_c0 [8];
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  FDestructionSentinel local_a8;
  FSlateFontInfo local_90;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateFontInfo::FSlateFontInfo(&local_90,&param_1->Font);
  local_30 = true;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(this->Font).Value,&local_90);
  (this->Font).bIsSet = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.CompositeFont.SharedReferenceCount.ReferenceController);
  uVar4 = *(undefined8 *)((longlong)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  uVar1 = (param_1->ColorAndOpacity).ColorUseRule;
  uVar2 = (param_1->ColorAndOpacity).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ColorAndOpacity).field_0x12;
  local_c8._2_2_ = uVar3;
  local_c8[1] = uVar2;
  local_c8[0] = uVar1;
  *(undefined8 *)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar4;
  (this->ColorAndOpacity).Value.ColorUseRule = uVar1;
  (this->ColorAndOpacity).Value.ColorTableId = uVar2;
  *(undefined2 *)&(this->ColorAndOpacity).Value.field_0x12 = uVar3;
  local_c8[4] = 1;
  auStack_c0 = (undefined1  [8])0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  (this->ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_c0,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_c0);
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  (this->BackgroundImageSelected).Value = &param_1->BackgroundImageSelected;
  local_c8 = (undefined1  [8])0x0;
  auStack_c0 = (undefined1  [8])0x0;
  (this->BackgroundImageSelected).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BackgroundImageSelected).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_a8);
  if (((int)FStack_b8.Data != 0) &&
     ((atomic<unsigned___int64>)auStack_c0 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_c0)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_c0,0,0,0x10);
    FStack_b8.Data = FStack_b8.Data & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if ((atomic<unsigned___int64>)auStack_c0 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetVirtualKeyboardDismissAction @ 14289b7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::SetVirtualKeyboardDismissAction
          (SEditableText *this,TAttribute<EVirtualKeyboardDismissAction> *param_1)

{
  TDelegate<EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->VirtualKeyboardDismissAction).Value = param_1->Value;
  (this->VirtualKeyboardDismissAction).bIsSet = param_1->bIsSet;
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->VirtualKeyboardDismissAction).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// ShouldClearKeyboardFocusOnCommit @ 14289bbe0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ShouldClearKeyboardFocusOnCommit(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldClearTextSelectionOnFocusLoss @ 14289bc10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ShouldClearTextSelectionOnFocusLoss(SEditableText *this)

{
  return true;
}

// ShouldJumpCursorToEndWhenFocused @ 14289bc20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ShouldJumpCursorToEndWhenFocused(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldRevertTextOnEscape @ 14289bc50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ShouldRevertTextOnEscape(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldSelectAllTextOnCommit @ 14289bc80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ShouldSelectAllTextOnCommit(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldSelectAllTextWhenFocused @ 14289bcb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ShouldSelectAllTextWhenFocused(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return false;
}

// ShouldSelectWordOnMouseDoubleClick @ 14289bce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::ShouldSelectWordOnMouseDoubleClick(SEditableText *this)

{
  bool *pbVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
    return *pbVar1;
  }
  return true;
}

// SupportsKeyboardFocus @ 14289d2d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableText::SupportsKeyboardFocus(SEditableText *this)

{
  return true;
}

// SynchronizeTextStyle @ 14289d360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::SynchronizeTextStyle(SEditableText *this)

{
  FSlateBrush *pFVar1;
  FSlateEditableTextLayout *this_00;
  bool bVar2;
  bool bVar3;
  FTextBlockStyle *pFVar4;
  FSlateFontInfo *pFVar5;
  FSlateColor *pFVar6;
  FSlateBrush **ppFVar7;
  FText *pFVar8;
  FText local_2f8;
  undefined1 local_2e8 [228];
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  TObjectPtr<UObject>_u_0 local_1f0;
  TVector4<double>_u_0 local_1e8;
  FLinearColor_u_0 local_1c8;
  ESlateColorStylingMode local_1b8;
  EStyleColor local_1b7;
  float local_1b4;
  TEnumAsByte<ESlateBrushRoundingType::Type> local_1b0;
  bool local_1af;
  TBox2<float> local_1a8;
  byte local_194;
  FName local_180;
  
  bVar2 = false;
  pFVar4 = FSlateEditableTextLayout::GetTextStyle((this->EditableTextLayout).Ptr);
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_2e8,pFVar4);
  if ((this->Font).bIsSet != false) {
    pFVar5 = TAttribute<FSlateFontInfo>::Get(&this->Font);
    bVar3 = FSlateFontInfo::IsIdenticalTo((FSlateFontInfo *)(local_2e8 + 8),pFVar5);
    if (!bVar3) {
      FSlateFontInfo::operator=((FSlateFontInfo *)(local_2e8 + 8),pFVar5);
      bVar2 = true;
    }
  }
  if ((this->ColorAndOpacity).bIsSet != false) {
    pFVar6 = TAttribute<FSlateColor>::Get(&this->ColorAndOpacity);
    if (((((float)local_2e8._104_4_ != (pFVar6->SpecifiedColor).field0_0x0._s_0.R) ||
         ((float)local_2e8._108_4_ != (pFVar6->SpecifiedColor).field0_0x0._s_0.G)) ||
        ((float)local_2e8._112_4_ != (pFVar6->SpecifiedColor).field0_0x0._s_0.B)) ||
       ((((float)local_2e8._116_4_ != (pFVar6->SpecifiedColor).field0_0x0._s_0.A ||
         (local_2e8[0x78] != pFVar6->ColorUseRule)) ||
        ((local_2e8[0x78] == UseColor_ColorTable && (local_2e8[0x79] != pFVar6->ColorTableId)))))) {
      local_2e8._104_8_ = *(undefined8 *)&(pFVar6->SpecifiedColor).field0_0x0;
      local_2e8._112_8_ = *(undefined8 *)((longlong)&(pFVar6->SpecifiedColor).field0_0x0 + 8);
      bVar2 = true;
      local_2e8[0x78] = pFVar6->ColorUseRule;
      local_2e8[0x79] = pFVar6->ColorTableId;
      local_2e8._122_2_ = *(undefined2 *)&pFVar6->field_0x12;
    }
  }
  if ((this->BackgroundImageSelected).bIsSet == false) {
LAB_14289d5fb:
    if (!bVar2) goto LAB_14289d640;
  }
  else {
    ppFVar7 = TAttribute<FSlateBrush_const_*>::Get(&this->BackgroundImageSelected);
    pFVar1 = *ppFVar7;
    if (pFVar1 == (FSlateBrush *)0x0) goto LAB_14289d5fb;
    if ((((float)local_2e8._224_4_ == *(float *)&pFVar1->ImageSize) &&
        (local_204 == *(float *)&(pFVar1->ImageSize).field_0x4)) &&
       ((local_2e8[0xdc] == (pFVar1->DrawAs).Value &&
        ((((local_200 == (pFVar1->Margin).Left && (local_1f8 == (pFVar1->Margin).Right)) &&
          (local_1fc == (pFVar1->Margin).Top)) && (local_1f4 == (pFVar1->Margin).Bottom)))))) {
      bVar3 = FSlateColor::operator==((FSlateColor *)(local_2e8 + 200),&pFVar1->TintColor);
      if (((((bVar3) && (local_2e8[0xdd] == (pFVar1->Tiling).Value)) &&
           (local_2e8[0xde] == (pFVar1->Mirroring).Value)) &&
          ((local_1f0.DebugPtr == (pFVar1->ResourceObject).field0_0x0.DebugPtr &&
           (local_180 == pFVar1->ResourceName)))) &&
         (((local_194 ^ pFVar1->bIsDynamicallyLoaded) & 1) == 0)) {
        bVar3 = UE::Math::TBox2<float>::operator==(&local_1a8,&pFVar1->UVRegion);
        if ((bVar3) &&
           ((local_2e8[0xdc] != '\x04' ||
            ((((((local_1e8._s_0.X == (pFVar1->OutlineSettings).CornerRadii.field0_0x0._s_0.X &&
                 (local_1e8._s_0.Y == (pFVar1->OutlineSettings).CornerRadii.field0_0x0._s_0.Y)) &&
                (local_1e8._s_0.Z == (pFVar1->OutlineSettings).CornerRadii.field0_0x0._s_0.Z)) &&
               ((local_1e8._s_0.W == (pFVar1->OutlineSettings).CornerRadii.field0_0x0._s_0.W &&
                (local_1c8._s_0.R ==
                 (pFVar1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R)))) &&
              ((local_1c8._s_0.G == (pFVar1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G
               && ((local_1c8._s_0.B ==
                    (pFVar1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B &&
                   (local_1c8._s_0.A ==
                    (pFVar1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A)))))) &&
             ((local_1b8 == (pFVar1->OutlineSettings).Color.ColorUseRule &&
              ((((local_1b8 != UseColor_ColorTable ||
                 (local_1b7 == (pFVar1->OutlineSettings).Color.ColorTableId)) &&
                (local_1b4 == (pFVar1->OutlineSettings).Width)) &&
               ((local_1b0.Value == (pFVar1->OutlineSettings).RoundingType.Value &&
                (local_1af == (pFVar1->OutlineSettings).bUseBrushTransparency))))))))))))
        goto LAB_14289d5fb;
      }
    }
    FSlateBrush::operator=((FSlateBrush *)(local_2e8 + 0xc0),pFVar1);
  }
  FSlateEditableTextLayout::SetTextStyle
            ((this->EditableTextLayout).Ptr,(FTextBlockStyle *)local_2e8);
  this_00 = (this->EditableTextLayout).Ptr;
  pFVar8 = FSlateEditableTextLayout::GetEditableText(this_00,&local_2f8);
  FSlateEditableTextLayout::ForceRefreshTextLayout(this_00,pFVar8);
  if (local_2f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
  }
LAB_14289d640:
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_2e8);
  return;
}

// Tick @ 14289d7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableText::Tick(SEditableText *this,FGeometry *param_1,double param_2,float param_3)

{
  FSlateEditableTextLayout::Tick((this->EditableTextLayout).Ptr,param_1,param_2,param_3);
  return;
}

// ToggleVirtualKeyboard @ 14289dd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableText::ToggleVirtualKeyboard(SEditableText *this,bool param_1,int param_2)

{
  FSlateEditableTextLayout *pFVar1;
  bool bVar2;
  FSlateApplication *this_00;
  TSharedPtr<IVirtualKeyboardEntry,1> TStack_18;
  
  pFVar1 = (this->EditableTextLayout).Ptr;
  if (pFVar1 == (FSlateEditableTextLayout *)0x0) {
    return;
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    bVar2 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard();
    if (bVar2) {
      this_00 = FSlateApplication::Get();
      TStack_18.SharedReferenceCount.ReferenceController =
           (pFVar1->VirtualKeyboardEntry).SharedReferenceCount.ReferenceController;
      TStack_18.Object = (IVirtualKeyboardEntry *)(pFVar1->VirtualKeyboardEntry).Object;
      if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::ShowVirtualKeyboard(this_00,param_1,param_2,&TStack_18);
    }
  }
  return;
}

// UpdateAndClampHorizontalScrollBar @ 14289eb60

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SEditableText::UpdateAndClampHorizontalScrollBar
          (SEditableText *this,float param_1,float param_2,EVisibility param_3)

{
  FDeprecateSlateVector2D FVar1;
  
  FVar1 = FSlateEditableTextLayout::GetScrollOffset((FSlateEditableTextLayout *)this->_padding_);
  return *(float *)FVar1;
}

// UpdateAndClampVerticalScrollBar @ 14289eb90

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SEditableText::UpdateAndClampVerticalScrollBar
          (SEditableText *this,float param_1,float param_2,EVisibility param_3)

{
  return 0.0;
}

