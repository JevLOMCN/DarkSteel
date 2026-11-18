// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 91

// GetText_WrapperImpl @ 14695f570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::GetText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) == (SEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x1b0);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)((longlong)param_1 + 0x1b8);
  }
  else {
    SEditableText::GetText(*(SEditableText **)((longlong)param_1 + 0x4d8),&local_18);
  }
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetText_WrapperImpl @ 14695f5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetText(param_1,&local_18);
  return;
}

// GetHintText_WrapperImpl @ 14695f710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::GetHintText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) == (SEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x1d8);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)((longlong)param_1 + 0x1e0);
  }
  else {
    SEditableText::GetHintText(*(SEditableText **)((longlong)param_1 + 0x4d8),&local_18);
  }
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetHintText_WrapperImpl @ 14695f7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetHintText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetHintText(param_1,&local_18);
  return;
}

// SetWidgetStyle_WrapperImpl @ 14695f820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FEditableTextStyle::operator=((FEditableTextStyle *)((longlong)param_1 + 0x200),param_2);
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    SEditableText::SetTextStyle
              (*(SEditableText **)((longlong)param_1 + 0x4d8),
               (FEditableTextStyle *)((longlong)param_1 + 0x200));
  }
  return;
}

// GetIsReadOnly_WrapperImpl @ 14695f870

void __cdecl UEditableText::GetIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x490);
  return;
}

// SetIsReadOnly_WrapperImpl @ 14695f8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<bool> local_28;
  
  local_28.Value = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0x490) = local_28.Value;
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableText::SetIsReadOnly(*(SEditableText **)((longlong)param_1 + 0x4d8),&local_28);
  }
  return;
}

// GetIsPassword_WrapperImpl @ 14695f950

void __cdecl UEditableText::GetIsPassword_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x491);
  return;
}

// SetIsPassword_WrapperImpl @ 14695f960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetIsPassword_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<bool> local_28;
  
  local_28.Value = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0x491) = local_28.Value;
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableText::SetIsPassword(*(SEditableText **)((longlong)param_1 + 0x4d8),&local_28);
  }
  return;
}

// GetMinimumDesiredWidth_WrapperImpl @ 14695f9c0

void __cdecl UEditableText::GetMinimumDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x494);
  return;
}

// SetMinimumDesiredWidth_WrapperImpl @ 14695f9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetMinimumDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  SetMinimumDesiredWidth(param_1,*(float *)param_2);
  return;
}

// GetIsCaretMovedWhenGainFocus_WrapperImpl @ 14695fa60

void __cdecl UEditableText::GetIsCaretMovedWhenGainFocus_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x498);
  return;
}

// SetIsCaretMovedWhenGainFocus_WrapperImpl @ 14695fa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetIsCaretMovedWhenGainFocus_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x498) = local_30[0];
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetIsCaretMovedWhenGainFocus
              (*(SEditableText **)((longlong)param_1 + 0x4d8),(TAttribute<bool> *)local_30);
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
  }
  return;
}

// GetSelectAllTextWhenFocused_WrapperImpl @ 14695fb60

void __cdecl UEditableText::GetSelectAllTextWhenFocused_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x499);
  return;
}

// SetSelectAllTextWhenFocused_WrapperImpl @ 14695fb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetSelectAllTextWhenFocused_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x499) = local_30[0];
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetSelectAllTextWhenFocused
              (*(SEditableText **)((longlong)param_1 + 0x4d8),(TAttribute<bool> *)local_30);
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
  }
  return;
}

// GetRevertTextOnEscape_WrapperImpl @ 14695fc40

void __cdecl UEditableText::GetRevertTextOnEscape_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x49a);
  return;
}

// SetRevertTextOnEscape_WrapperImpl @ 14695fc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetRevertTextOnEscape_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x49a) = local_30[0];
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetRevertTextOnEscape
              (*(SEditableText **)((longlong)param_1 + 0x4d8),(TAttribute<bool> *)local_30);
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
  }
  return;
}

// GetClearKeyboardFocusOnCommit_WrapperImpl @ 14695fd60

void __cdecl UEditableText::GetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x49b);
  return;
}

// SetClearKeyboardFocusOnCommit_WrapperImpl @ 14695fdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x49b) = local_30[0];
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetClearKeyboardFocusOnCommit
              (*(SEditableText **)((longlong)param_1 + 0x4d8),(TAttribute<bool> *)local_30);
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
  }
  return;
}

// GetSelectAllTextOnCommit_WrapperImpl @ 14695fe80

void __cdecl UEditableText::GetSelectAllTextOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x49c);
  return;
}

// SetSelectAllTextOnCommit_WrapperImpl @ 14695fed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetSelectAllTextOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x49c) = local_30[0];
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetSelectAllTextOnCommit
              (*(SEditableText **)((longlong)param_1 + 0x4d8),(TAttribute<bool> *)local_30);
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
  }
  return;
}

// GetJustification_WrapperImpl @ 14695ffa0

void __cdecl UEditableText::GetJustification_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4a2);
  return;
}

// SetJustification_WrapperImpl @ 14695ffb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetJustification_WrapperImpl(void *param_1,void *param_2)

{
  SetJustification(param_1,(uint)*(byte *)param_2);
  return;
}

// GetOverflowPolicy_WrapperImpl @ 14695ffc0

void __cdecl UEditableText::GetOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4a3);
  return;
}

// SetOverflowPolicy_WrapperImpl @ 14695ffd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8;
  undefined1 local_res9;
  
  local_res8 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x4a3) = local_res8;
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_res9 = 1;
    SEditableText::SetOverflowPolicy
              (*(SEditableText **)((longlong)param_1 + 0x4d8),SUB82(&local_res8,0));
  }
  return;
}

// GetEnableIntegratedKeyboard_WrapperImpl @ 146960010

void __cdecl UEditableText::GetEnableIntegratedKeyboard_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4e8);
  return;
}

// SetEnableIntegratedKeyboard_WrapperImpl @ 146960020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::SetEnableIntegratedKeyboard_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x4e8) = local_30[0];
  if (*(SEditableText **)((longlong)param_1 + 0x4d8) != (SEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetEnableIntegratedKeyboard
              (*(SEditableText **)((longlong)param_1 + 0x4d8),(TAttribute<bool> *)local_30);
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
  }
  return;
}

// StaticClass @ 146960170

UClass * __cdecl UEditableText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"EditableText",
               &Z_Registration_Info_UClass_UEditableText.InnerSingleton,
               StaticRegisterNativesUEditableText,0x4f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEditableText>,
               InternalVTableHelperCtorCaller<UEditableText>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableText.InnerSingleton;
}

// UEditableText @ 146989aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UEditableText * __thiscall UEditableText::UEditableText(UEditableText *this,FVTableHelper *param_1)

{
  FShapedTextOptions *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->Text);
  *(undefined8 *)&this->TextDelegate = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x10 = 0;
  FText::FText(&this->HintText);
  *(undefined8 *)&this->HintTextDelegate = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x10 = 0;
  FEditableTextStyle::FEditableTextStyle(&this->WidgetStyle);
  pFVar1->bOverride_TextShapingMethod = '\0';
  pFVar1->bOverride_TextFlowDirection = '\0';
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  (this->ShapedTextOptions).TextShapingMethod = Auto;
  (this->ShapedTextOptions).TextFlowDirection = Auto;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x10 = 0;
  (this->MyEditableText).Object = (SEditableText *)0x0;
  (this->MyEditableText).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UEditableText @ 146989b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UEditableText * __thiscall
UEditableText::UEditableText(UEditableText *this,FObjectInitializer *param_1)

{
  FShapedTextOptions *pFVar1;
  void *pvVar2;
  FSharedReferencer<1> FVar3;
  FDefaultStyleCache *pFVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->Text);
  *(undefined8 *)&this->TextDelegate = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x10 = 0;
  FText::FText(&this->HintText);
  *(undefined8 *)&this->HintTextDelegate = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x10 = 0;
  FEditableTextStyle::FEditableTextStyle(&this->WidgetStyle);
  pFVar1->bOverride_TextShapingMethod = '\0';
  pFVar1->bOverride_TextFlowDirection = '\0';
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  (this->ShapedTextOptions).TextShapingMethod = Auto;
  (this->ShapedTextOptions).TextFlowDirection = Auto;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x10 = 0;
  (this->MyEditableText).Object = (SEditableText *)0x0;
  (this->MyEditableText).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar4 = UE::Slate::Private::FDefaultStyleCache::Get();
  FEditableTextStyle::operator=(&this->WidgetStyle,&(pFVar4->Runtime).EditableTextStyle);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString((FString *)&local_88,L"/Engine/EngineFonts/Roboto");
      FConfigCacheIni::GetString
                (GConfig,L"SlateStyle",L"DefaultFontName",(FString *)&local_88,&GEngineIni);
      pwVar6 = L"";
      if (local_88.OutlineMaterial.field0_0x0._0_4_ != 0) {
        pwVar6 = (wchar_t *)
                 CONCAT17(local_88._padding_,
                          CONCAT16(local_88.bApplyOutlineToDropShadows,
                                   CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      }
      ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>(&DefaultFontObj,pwVar6,0);
      pvVar2 = (void *)CONCAT17(local_88._padding_,
                                CONCAT16(local_88.bApplyOutlineToDropShadows,
                                         CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      atexit(`UEditableText::UEditableText'::__l5::_dynamic_atexit_destructor_for__DefaultFontObj__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_88.OutlineSize = 0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar5 = ::FName::FName(&local_res8,"Regular");
  FSlateFontInfo::FSlateFontInfo
            (&local_68,(UObject *)DefaultFontObj.Object.field0_0x0,__real_41c00000,pFVar5,&local_88)
  ;
  FVar3.ReferenceController = local_68.CompositeFont.SharedReferenceCount.ReferenceController;
  local_68.CompositeFont.SharedReferenceCount.ReferenceController =
       (this->WidgetStyle).Font.CompositeFont.SharedReferenceCount.ReferenceController;
  local_68.CompositeFont.Object = (this->WidgetStyle).Font.CompositeFont.Object;
  if (local_68.CompositeFont.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.CompositeFont.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.CompositeFont.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  FSlateFontInfo::operator=(&(this->WidgetStyle).Font,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  this->IsReadOnly = false;
  this->IsPassword = false;
  this->MinimumDesiredWidth = 0.0;
  this->IsCaretMovedWhenGainFocus = true;
  this->SelectAllTextWhenFocused = false;
  this->RevertTextOnEscape = false;
  this->ClearKeyboardFocusOnCommit = true;
  this->SelectAllTextOnCommit = false;
  this->AllowContextMenu = true;
  this->EnableIntegratedKeyboard = false;
  this->VirtualKeyboardTrigger = OnFocusByPointer;
  this->VirtualKeyboardDismissAction = TextChangeOnDismiss;
  UWidget::SetClipping((UWidget *)this,ClipToBounds);
  this->OverflowPolicy = Clip;
  return this;
}

// ~UEditableText @ 146992bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableText::~UEditableText(UEditableText *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyEditableText).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommitted);
  pvVar1 = *(void **)&(this->OnTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChanged);
  FEditableTextStyle::~FEditableTextStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HintTextDelegate);
  pIVar2 = (this->HintText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TextDelegate);
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// FOnEditableTextChangedEvent_DelegateWrapper @ 1469c77b0

void __cdecl
UEditableText::FOnEditableTextChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FText *param_2)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res10 [8];
  FText local_18;
  
  FText::FText(&local_18);
  TVar2.Reference = local_18.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  if (local_18.TextData.Reference != pIVar1) {
    local_18.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_18.Flags = param_2->Flags;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// FOnEditableTextCommittedEvent_DelegateWrapper @ 1469c7840

void __cdecl
UEditableText::FOnEditableTextCommittedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FText *param_2,Type param_3
          )

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res18 [8];
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_28);
  TVar2.Reference = local_28.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  if (local_28.TextData.Reference != pIVar1) {
    local_28.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_28.Flags = param_2->Flags;
  local_18 = (undefined1)param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// GetAccessibleWidget @ 1469ccd90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UEditableText::GetAccessibleWidget
          (UEditableText *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MyEditableText).Object;
  pTVar1 = (this->MyEditableText).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetClearKeyboardFocusOnCommit @ 1469ce4a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetClearKeyboardFocusOnCommit(UEditableText *this)

{
  return this->ClearKeyboardFocusOnCommit;
}

// GetEnableIntegratedKeyboard @ 1469d0230

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetEnableIntegratedKeyboard(UEditableText *this)

{
  return this->EnableIntegratedKeyboard;
}

// GetFieldNotificationDescriptor @ 1469d0400

/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall UEditableText::GetFieldNotificationDescriptor(UEditableText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UEditableText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetFont @ 1469d0910

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall UEditableText::GetFont(UEditableText *this)

{
  return &(this->WidgetStyle).Font;
}

// GetHintText @ 1469d1000

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UEditableText::GetHintText(UEditableText *this,FText *__return_storage_ptr__)

{
  SEditableText *this_00;
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    SEditableText::GetHintText(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->HintText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->HintText).Flags;
  return __return_storage_ptr__;
}

// GetIsCaretMovedWhenGainFocus @ 1469d15c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetIsCaretMovedWhenGainFocus(UEditableText *this)

{
  return this->IsCaretMovedWhenGainFocus;
}

// GetIsPassword @ 1469d16a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetIsPassword(UEditableText *this)

{
  return this->IsPassword;
}

// GetIsReadOnly @ 1469d16c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetIsReadOnly(UEditableText *this)

{
  return this->IsReadOnly;
}

// GetJustification @ 1469d1b50

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall UEditableText::GetJustification(UEditableText *this)

{
  return (Type)(this->Justification).Value;
}

// GetMinimumDesiredWidth @ 1469d1ef0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UEditableText::GetMinimumDesiredWidth(UEditableText *this)

{
  return this->MinimumDesiredWidth;
}

// GetPrivateStaticClass @ 1469d3eb0

UClass * __cdecl UEditableText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"EditableText",
               &Z_Registration_Info_UClass_UEditableText.InnerSingleton,
               StaticRegisterNativesUEditableText,0x4f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEditableText>,
               InternalVTableHelperCtorCaller<UEditableText>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableText.InnerSingleton;
}

// GetRevertTextOnEscape @ 1469d6f60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetRevertTextOnEscape(UEditableText *this)

{
  return this->RevertTextOnEscape;
}

// GetSelectAllTextOnCommit @ 1469d7170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetSelectAllTextOnCommit(UEditableText *this)

{
  return this->SelectAllTextOnCommit;
}

// GetSelectAllTextWhenFocused @ 1469d71a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::GetSelectAllTextWhenFocused(UEditableText *this)

{
  return this->SelectAllTextWhenFocused;
}

// GetText @ 1469d8ab0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UEditableText::GetText(UEditableText *this,FText *__return_storage_ptr__)

{
  SEditableText *this_00;
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    SEditableText::GetText(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Text).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Text).Flags;
  return __return_storage_ptr__;
}

// GetTextOverflowPolicy @ 1469d8e70

/* WARNING: Enum "Type": Some values do not have unique names */

ETextOverflowPolicy __thiscall UEditableText::GetTextOverflowPolicy(UEditableText *this)

{
  return this->OverflowPolicy;
}

// HandleOnTextChanged @ 1469dd0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableText::HandleOnTextChanged(UEditableText *this,FText *param_1)

{
  FName FVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  undefined1 local_res18 [16];
  FText local_18;
  
  bVar3 = SetTextInternal(this,param_1);
  if (bVar3) {
    local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Text.FieldName;
    local_18.Flags = FFieldNotificationClassDescriptor::Text.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_18);
    FText::FText(&local_18);
    TVar2.Reference = local_18.TextData.Reference;
    FVar1 = (FName)(param_1->TextData).Reference;
    if ((FName)local_18.TextData.Reference != FVar1) {
      local_18.TextData.Reference = (ITextData *)FVar1;
      if (FVar1 != (FName)0x0) {
        (**(code **)(*(longlong *)FVar1 + 8))(FVar1,local_res18);
      }
      if ((FName)TVar2.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)TVar2.Reference + 0x10))(TVar2.Reference);
      }
    }
    local_18.Flags = param_1->Flags;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTextChanged,
               &local_18);
    if ((FName)local_18.TextData.Reference != (FName)0x0) {
      (**(code **)(*(longlong *)local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// HandleOnTextCommitted @ 1469dd3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UEditableText::HandleOnTextCommitted(UEditableText *this,FText *param_1,Type param_2)

{
  FName FVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  undefined1 local_res18 [8];
  FText local_28;
  undefined1 local_18;
  
  bVar3 = SetTextInternal(this,param_1);
  if (bVar3) {
    local_28.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Text.FieldName;
    local_28.Flags = FFieldNotificationClassDescriptor::Text.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  }
  FText::FText(&local_28);
  TVar2.Reference = local_28.TextData.Reference;
  FVar1 = (FName)(param_1->TextData).Reference;
  if ((FName)local_28.TextData.Reference != FVar1) {
    local_28.TextData.Reference = (ITextData *)FVar1;
    if (FVar1 != (FName)0x0) {
      (**(code **)(*(longlong *)FVar1 + 8))(FVar1,local_res18);
    }
    if ((FName)TVar2.Reference != (FName)0x0) {
      (**(code **)(*(longlong *)TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_28.Flags = param_1->Flags;
  local_18 = (undefined1)param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted,
             &local_28);
  if ((FName)local_28.TextData.Reference != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.TextData.Reference + 0x10))();
  }
  return;
}

// RebuildWidget @ 1469fc6f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UEditableText::RebuildWidget(UEditableText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  SEditableText *pSVar11;
  SEditableText *pSVar12;
  TSharedRef<SWidget,1> *pTVar13;
  EKeyboardType EVar14;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UEditableText *local_res18;
  UEditableText *local_res20;
  FMemScope local_a68;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined1 local_a58 [8];
  FDelegateAllocation local_a50;
  undefined1 local_a40 [8];
  FDelegateAllocation local_a38;
  undefined1 local_a28;
  undefined1 local_a27;
  undefined1 local_a20 [8];
  ForAnyElementType FStack_a18;
  ulonglong local_a10;
  undefined1 local_a08;
  undefined1 local_a07;
  undefined1 local_a00 [8];
  ForAnyElementType FStack_9f8;
  ulonglong local_9f0;
  float local_9e8;
  undefined1 local_9e4;
  undefined1 local_9e0 [8];
  ForAnyElementType FStack_9d8;
  ulonglong local_9d0;
  undefined1 local_9c8;
  undefined1 local_9c7;
  undefined1 local_9c0 [8];
  ForAnyElementType FStack_9b8;
  ulonglong local_9b0;
  undefined1 local_9a8;
  undefined1 local_9a7;
  undefined1 local_9a0 [8];
  ForAnyElementType FStack_998;
  ulonglong local_990;
  undefined1 local_988;
  undefined1 local_987;
  undefined1 local_980 [8];
  ForAnyElementType FStack_978;
  ulonglong local_970;
  undefined1 local_968;
  undefined1 local_967;
  undefined1 local_960 [8];
  ForAnyElementType FStack_958;
  ulonglong local_950;
  undefined1 local_948;
  undefined1 local_947;
  undefined1 local_940 [8];
  ForAnyElementType FStack_938;
  ulonglong local_930;
  EKeyboardType local_928;
  undefined1 local_924;
  undefined1 local_920 [8];
  ForAnyElementType FStack_918;
  ulonglong local_910;
  EVirtualKeyboardTrigger local_908;
  undefined1 local_907;
  undefined1 local_900 [8];
  ForAnyElementType FStack_8f8;
  ulonglong local_8f0;
  EVirtualKeyboardDismissAction local_8e8;
  undefined1 local_8e7;
  undefined1 local_8e0 [8];
  ForAnyElementType FStack_8d8;
  ulonglong local_8d0;
  Type local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0 [8];
  ForAnyElementType FStack_8b8;
  ulonglong local_8b0;
  undefined1 local_8a8;
  undefined1 local_8a7;
  undefined1 local_8a0 [8];
  ForAnyElementType FStack_898;
  ulonglong local_890;
  undefined1 local_888 [8];
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_880;
  SEditableText *local_868;
  FSharedReferencer<1> local_860;
  FName local_858;
  FDestructionSentinel local_850;
  FDestructionSentinel local_838;
  FDestructionSentinel local_820;
  FDestructionSentinel local_808;
  FDestructionSentinel local_7f0;
  FDestructionSentinel local_7d8;
  FDestructionSentinel local_7c0;
  FDestructionSentinel local_7a8;
  FDestructionSentinel local_790;
  FDestructionSentinel local_778;
  FDestructionSentinel local_760;
  FDestructionSentinel local_748;
  FDestructionSentinel local_730;
  FDestructionSentinel local_718;
  FDestructionSentinel local_700;
  FDestructionSentinel local_6e8;
  FDelegateAllocation *local_6d0;
  FDestructionSentinel local_6c8;
  FDelegateAllocation *local_6b0;
  FArguments local_6a8;
  
  pFVar8 = SEditableText::FArguments::FArguments(&local_6a8);
  pFVar8->_Style = &this->WidgetStyle;
  local_a28 = this->IsReadOnly;
  local_a27 = 1;
  EVar14 = Keyboard_Default;
  local_a10 = 0;
  local_a20 = (undefined1  [8])0x0;
  FStack_a18.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_IsReadOnly).Value = (bool)local_a28;
  (pFVar8->_IsReadOnly).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a20,
             (FWriteAccessScope *)&local_820);
  if (((int)local_a10 != 0) && (FStack_a18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a18,0,0,0x10);
    local_a10 = local_a10 & 0xffffffff00000000;
  }
  if (local_820.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_820.Accessor,&local_820);
  }
  if (FStack_a18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a20);
  local_a08 = this->IsPassword;
  local_a07 = 1;
  local_9f0 = 0;
  local_a00 = (undefined1  [8])0x0;
  FStack_9f8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_IsPassword).Value = (bool)local_a08;
  (pFVar8->_IsPassword).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_IsPassword).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a00,
             (FWriteAccessScope *)&local_808);
  if (((int)local_9f0 != 0) && (FStack_9f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9f8,0,0,0x10);
    local_9f0 = local_9f0 & 0xffffffff00000000;
  }
  if (local_808.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_808.Accessor,&local_808);
  }
  if (FStack_9f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a00);
  local_9e8 = this->MinimumDesiredWidth;
  local_9e4 = 1;
  local_9d0 = 0;
  local_9e0 = (undefined1  [8])0x0;
  FStack_9d8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_MinDesiredWidth).Value = local_9e8;
  (pFVar8->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9e0,
             (FWriteAccessScope *)&local_7f0);
  if (((int)local_9d0 != 0) && (FStack_9d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d8,0,0,0x10);
    local_9d0 = local_9d0 & 0xffffffff00000000;
  }
  if (local_7f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f0.Accessor,&local_7f0);
  }
  if (FStack_9d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9e0);
  local_9c8 = this->IsCaretMovedWhenGainFocus;
  local_9c7 = 1;
  local_9b0 = 0;
  local_9c0 = (undefined1  [8])0x0;
  FStack_9b8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_IsCaretMovedWhenGainFocus).Value = (bool)local_9c8;
  (pFVar8->_IsCaretMovedWhenGainFocus).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_IsCaretMovedWhenGainFocus).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
             (FWriteAccessScope *)&local_7d8);
  if (((int)local_9b0 != 0) && (FStack_9b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9b8,0,0,0x10);
    local_9b0 = local_9b0 & 0xffffffff00000000;
  }
  if (local_7d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d8.Accessor,&local_7d8);
  }
  if (FStack_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9c0);
  local_9a8 = this->SelectAllTextWhenFocused;
  local_9a7 = 1;
  local_990 = 0;
  local_9a0 = (undefined1  [8])0x0;
  FStack_998.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_SelectAllTextWhenFocused).Value = (bool)local_9a8;
  (pFVar8->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a0,
             (FWriteAccessScope *)&local_7c0);
  if (((int)local_990 != 0) && (FStack_998.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_998.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_998,0,0,0x10);
    local_990 = local_990 & 0xffffffff00000000;
  }
  if (local_7c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
  }
  if (FStack_998.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_998.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9a0);
  local_988 = this->RevertTextOnEscape;
  local_987 = 1;
  local_970 = 0;
  local_980 = (undefined1  [8])0x0;
  FStack_978.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_RevertTextOnEscape).Value = (bool)local_988;
  (pFVar8->_RevertTextOnEscape).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_980);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_980,
             (FWriteAccessScope *)&local_7a8);
  if (((int)local_970 != 0) && (FStack_978.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_978.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_978,0,0,0x10);
    local_970 = local_970 & 0xffffffff00000000;
  }
  if (local_7a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
  }
  if (FStack_978.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_978.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_980);
  local_968 = this->ClearKeyboardFocusOnCommit;
  local_967 = 1;
  local_950 = 0;
  local_960 = (undefined1  [8])0x0;
  FStack_958.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_ClearKeyboardFocusOnCommit).Value = (bool)local_968;
  (pFVar8->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_960);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_960,
             (FWriteAccessScope *)&local_790);
  if (((int)local_950 != 0) && (FStack_958.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_958.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_958,0,0,0x10);
    local_950 = local_950 & 0xffffffff00000000;
  }
  if (local_790.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
  }
  if (FStack_958.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_958.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_960);
  local_948 = this->SelectAllTextOnCommit;
  local_947 = 1;
  local_930 = 0;
  local_940 = (undefined1  [8])0x0;
  FStack_938.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_SelectAllTextOnCommit).Value = (bool)local_948;
  (pFVar8->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_940);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_940,
             (FWriteAccessScope *)&local_778);
  if (((int)local_930 != 0) && (FStack_938.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_938.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_938,0,0,0x10);
    local_930 = local_930 & 0xffffffff00000000;
  }
  if (local_778.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_778.Accessor,&local_778);
  }
  if (FStack_938.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_938.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_940);
  uStack_a60 = 0;
  local_a68 = (FMemScope)HandleOnTextChanged;
  local_a40 = (undefined1  [8])0x0;
  local_a38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a38.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a40,
             (FWriteAccessScope *)&local_6e8);
  local_6d0 = &local_a38;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_a38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEditableText____A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar9 + 4) = local_a68;
    puVar9[5] = CONCAT44(uStack_a5c,uStack_a60);
  }
  if (local_6e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e8.Accessor,&local_6e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnTextChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  uStack_a60 = 0;
  local_a68 = (FMemScope)HandleOnTextCommitted;
  local_a58 = (undefined1  [8])0x0;
  local_a50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a58,
             (FWriteAccessScope *)&local_6c8);
  local_6b0 = &local_a50;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_a50);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEditableText____A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar9 + 4) = local_a68;
    puVar9[5] = CONCAT44(uStack_a5c,uStack_a60);
  }
  if (local_6c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c8.Accessor,&local_6c8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnTextCommitted,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a58);
  switch((this->KeyboardType).Value) {
  default:
    break;
  case '\x01':
    EVar14 = Keyboard_Number;
    break;
  case '\x02':
    EVar14 = Keyboard_Web;
    break;
  case '\x03':
    EVar14 = Keyboard_Email;
    break;
  case '\x04':
    EVar14 = Keyboard_Password;
    break;
  case '\x05':
    EVar14 = Keyboard_AlphaNumeric;
  }
  local_924 = 1;
  local_910 = 0;
  local_920 = (undefined1  [8])0x0;
  FStack_918.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_VirtualKeyboardType).Value = EVar14;
  (pFVar8->_VirtualKeyboardType).bIsSet = true;
  local_928 = EVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_VirtualKeyboardType).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_920);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_920,
             (FWriteAccessScope *)&local_760);
  if (((int)local_910 != 0) && (FStack_918.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_918.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_918,0,0,0x10);
    local_910 = local_910 & 0xffffffff00000000;
  }
  if (local_760.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_760.Accessor,&local_760);
  }
  if (FStack_918.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_918.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_920);
  (pFVar8->_VirtualKeyboardOptions).bEnableAutocorrect =
       (this->VirtualKeyboardOptions).bEnableAutocorrect;
  local_908 = this->VirtualKeyboardTrigger;
  local_907 = 1;
  local_900 = (undefined1  [8])0x0;
  FStack_8f8.Data = (FScriptContainerElement *)0x0;
  local_8f0 = 0;
  (pFVar8->_VirtualKeyboardTrigger).Value = local_908;
  (pFVar8->_VirtualKeyboardTrigger).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_VirtualKeyboardTrigger).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
             (FWriteAccessScope *)&local_748);
  if (((int)local_8f0 != 0) && (FStack_8f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8f8,0,0,0x10);
    local_8f0 = local_8f0 & 0xffffffff00000000;
  }
  if (local_748.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
  }
  if (FStack_8f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_900);
  local_8e8 = this->VirtualKeyboardDismissAction;
  local_8e7 = 1;
  local_8d0 = 0;
  local_8e0 = (undefined1  [8])0x0;
  FStack_8d8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_VirtualKeyboardDismissAction).Value = local_8e8;
  (pFVar8->_VirtualKeyboardDismissAction).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_VirtualKeyboardDismissAction).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e0,
             (FWriteAccessScope *)&local_730);
  if (((int)local_8d0 != 0) && (FStack_8d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8d8,0,0,0x10);
    local_8d0 = local_8d0 & 0xffffffff00000000;
  }
  if (local_730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
  }
  if (FStack_8d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e0);
  local_8c8 = (Type)(this->Justification).Value;
  local_8c4 = 1;
  local_8b0 = 0;
  local_8c0 = (undefined1  [8])0x0;
  FStack_8b8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_Justification).Value = local_8c8;
  (pFVar8->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8c0,
             (FWriteAccessScope *)&local_718);
  if (((int)local_8b0 != 0) && (FStack_8b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8b8,0,0,0x10);
    local_8b0 = local_8b0 & 0xffffffff00000000;
  }
  if (local_718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
  }
  if (FStack_8b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8c0);
  if ((TOptional<ETextOverflowPolicy> *)local_888 != &pFVar8->_OverflowPolicy) {
    (pFVar8->_OverflowPolicy).TypedValue = this->OverflowPolicy;
    (pFVar8->_OverflowPolicy).bIsSet = true;
  }
  local_8a8 = this->EnableIntegratedKeyboard;
  local_8a7 = 1;
  local_890 = 0;
  local_8a0 = (undefined1  [8])0x0;
  FStack_898.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_EnableIntegratedKeyboard).Value = (bool)local_8a8;
  (pFVar8->_EnableIntegratedKeyboard).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_EnableIntegratedKeyboard).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a0,
             (FWriteAccessScope *)&local_700);
  if (((int)local_890 != 0) && (FStack_898.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_898.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_898,0,0,0x10);
    local_890 = local_890 & 0xffffffff00000000;
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  if (FStack_898.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_898.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8a0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_858 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a68,&local_858,true);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
            (&local_880,"SEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\EditableText.cpp"
             ,0x4e,local_res8);
  FMemScope::~FMemScope(&local_a68);
  FLLMScope::~FLLMScope(local_res10);
  pSVar11 = TSharedPtr<SEditableText,1>::operator->(&local_880._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar11,(FSlateBaseNamedArgs *)pFVar8);
  pSVar11 = local_880._Widget.Object;
  SEditableText::Construct(local_880._Widget.Object,pFVar8);
  pSVar12 = TSharedPtr<SEditableText,1>::operator->(&local_880._Widget);
  if ((pSVar12->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar12->_padding_ + 0x228))(pSVar12);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1469fd459;
  }
  bVar6 = 0x20;
LAB_1469fd459:
  *(byte *)&pSVar12->_padding_ = (byte)pSVar12->_padding_ & 0xdf;
  *(byte *)&pSVar12->_padding_ = (byte)pSVar12->_padding_ | bVar6;
  pSVar12 = TSharedPtr<SEditableText,1>::operator->(&local_880._Widget);
  pbVar1 = (byte *)((longlong)&pSVar12->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_880._Widget.Object == (SEditableText *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  FVar4.ReferenceController = local_880._Widget.SharedReferenceCount.ReferenceController;
  local_880._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_880._Widget.Object = (SEditableText *)0x0;
  if ((pSVar11 == (SEditableText *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  local_868 = pSVar11;
  local_860.ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyEditableText != (TSharedPtr<SEditableText,1> *)&local_868) {
    (this->MyEditableText).Object = pSVar11;
    local_868 = (SEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyEditableText).SharedReferenceCount,&local_860);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_860.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a58,
             (FWriteAccessScope *)&local_850);
  if ((local_a50.DelegateSize != 0) &&
     (local_a50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a50,0,0,0x10);
    local_a50.DelegateSize = 0;
  }
  if (local_850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850.Accessor,&local_850);
  }
  if (local_a50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a40,
             (FWriteAccessScope *)&local_838);
  if ((local_a38.DelegateSize != 0) &&
     (local_a38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a38,0,0,0x10);
    local_a38.DelegateSize = 0;
  }
  if (local_838.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_838.Accessor,&local_838);
  }
  if (local_a38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a40);
  SEditableText::FArguments::~FArguments(&local_6a8);
  if (((this->MyEditableText).Object == (SEditableText *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  pTVar2 = (this->MyEditableText).SharedReferenceCount.ReferenceController;
  pSVar11 = (this->MyEditableText).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar11 == (SEditableText *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::ReleaseSlateResources(UEditableText *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyEditableText != (TSharedPtr<SEditableText,1> *)&local_18) {
    (this->MyEditableText).Object = (SEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyEditableText).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetClearKeyboardFocusOnCommit @ 146a12000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetClearKeyboardFocusOnCommit(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->ClearKeyboardFocusOnCommit = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableText::SetClearKeyboardFocusOnCommit(this_00,(TAttribute<bool> *)local_30);
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
  }
  return;
}

// SetEnableIntegratedKeyboard @ 146a13580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetEnableIntegratedKeyboard(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->EnableIntegratedKeyboard = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableText::SetEnableIntegratedKeyboard(this_00,(TAttribute<bool> *)local_30);
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
  }
  return;
}

// SetFont @ 146a13fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetFont(UEditableText *this,FSlateFontInfo *param_1)

{
  SEditableText *this_00;
  
  FSlateFontInfo::operator=(&(this->WidgetStyle).Font,param_1);
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    SEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return;
}

// SetFontMaterial @ 146a141a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetFontMaterial(UEditableText *this,UMaterialInterface *param_1)

{
  SEditableText *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WidgetStyle).Font.FontMaterial.field0_0x0.DebugPtr = (UObject *)param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    SEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// SetFontOutlineMaterial @ 146a142d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEditableText::SetFontOutlineMaterial(UEditableText *this,UMaterialInterface *param_1)

{
  SEditableText *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WidgetStyle).Font.OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr = (UObject *)param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    SEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// SetHintText @ 146a14840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetHintText(UEditableText *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  SEditableText *this_00;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->HintText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->HintText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->HintText).Flags = param_1->Flags;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_40._0_8_ = (this->HintText).TextData.Reference;
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res8);
    }
    local_40._8_4_ = (this->HintText).Flags;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetHintText(this_00,(TAttribute<FText> *)local_40);
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
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetIsCaretMovedWhenGainFocus @ 146a15700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetIsCaretMovedWhenGainFocus(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->IsCaretMovedWhenGainFocus = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableText::SetIsCaretMovedWhenGainFocus(this_00,(TAttribute<bool> *)local_30);
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
  }
  return;
}

// SetIsPassword @ 146a15eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetIsPassword(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  TAttribute<bool> local_28;
  
  this->IsPassword = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    SEditableText::SetIsPassword(this_00,&local_28);
  }
  return;
}

// SetIsReadOnly @ 146a15f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetIsReadOnly(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  TAttribute<bool> local_28;
  
  this->IsReadOnly = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    SEditableText::SetIsReadOnly(this_00,&local_28);
  }
  return;
}

// SetJustification @ 146a16430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetJustification(UEditableText *this,Type param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->Justification).Value = (uchar)param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    SEditableText::SetJustification(this_00,(TAttribute<ETextJustify::Type> *)local_30);
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
  }
  return;
}

// SetKeyboardType @ 146a168b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetKeyboardType(UEditableText *this,Type param_1)

{
  (this->KeyboardType).Value = (uchar)param_1;
  return;
}

// SetMinimumDesiredWidth @ 146a17b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetMinimumDesiredWidth(UEditableText *this,float param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->MinimumDesiredWidth = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SEditableText::SetMinDesiredWidth(this_00,(TAttribute<float> *)local_30);
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
  }
  return;
}

// SetRevertTextOnEscape @ 146a196e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetRevertTextOnEscape(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->RevertTextOnEscape = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableText::SetRevertTextOnEscape(this_00,(TAttribute<bool> *)local_30);
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
  }
  return;
}

// SetSelectAllTextOnCommit @ 146a19ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetSelectAllTextOnCommit(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->SelectAllTextOnCommit = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableText::SetSelectAllTextOnCommit(this_00,(TAttribute<bool> *)local_30);
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
  }
  return;
}

// SetSelectAllTextWhenFocused @ 146a1a1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetSelectAllTextWhenFocused(UEditableText *this,bool param_1)

{
  SEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->SelectAllTextWhenFocused = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableText::SetSelectAllTextWhenFocused(this_00,(TAttribute<bool> *)local_30);
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
  }
  return;
}

// SetText @ 146a1bbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableText::SetText(UEditableText *this,FText *param_1)

{
  SEditableText *this_00;
  ITextData *pIVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  FDestructionSentinel local_58;
  undefined1 local_38 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  bVar2 = SetTextInternal(this,param_1);
  if (bVar2) {
    this_00 = (this->MyEditableText).Object;
    if (this_00 != (SEditableText *)0x0) {
      local_38._0_8_ = (this->Text).TextData.Reference;
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 8))(local_38._0_8_,local_res10);
      }
      local_38._8_4_ = (this->Text).Flags;
      local_38[0x10] = true;
      local_10 = 0;
      local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_18.Data = (FScriptContainerElement *)0x0;
      SEditableText::SetText(this_00,(TAttribute<FText> *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_20,(FWriteAccessScope *)&local_58);
      if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_18.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
        local_10 = local_10 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)
                   CONCAT44(local_58.Accessor._4_4_,(int)local_58.Accessor),&local_58);
      }
      if (FStack_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      }
    }
    local_58.AccessType = FFieldNotificationClassDescriptor::Text.FieldName.ComparisonIndex.Value;
    local_58._4_4_ = FFieldNotificationClassDescriptor::Text.FieldName.Number;
    local_58.Accessor._0_4_ = FFieldNotificationClassDescriptor::Text.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_58);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a1bd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetTextInternal @ 146a1c410

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableText::SetTextInternal(UEditableText *this,FText *param_1)

{
  FText *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  this_00 = &this->Text;
  bVar3 = FText::IdenticalTo(this_00,param_1,LexicalCompareInvariants|DeepCompare);
  if (!bVar3) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this_00->TextData).Reference;
    if (pIVar2 != pIVar1) {
      (this_00->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Text).Flags = param_1->Flags;
    return true;
  }
  return false;
}

// SetTextOverflowPolicy @ 146a1c610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEditableText::SetTextOverflowPolicy(UEditableText *this,ETextOverflowPolicy param_1)

{
  SEditableText *this_00;
  ETextOverflowPolicy local_res10 [24];
  
  this->OverflowPolicy = param_1;
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    local_res10[1] = 1;
    local_res10[0] = param_1;
    SEditableText::SetOverflowPolicy(this_00,SUB82(local_res10,0));
  }
  return;
}

// SetWidgetStyle @ 146a1dd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::SetWidgetStyle(UEditableText *this,FEditableTextStyle *param_1)

{
  SEditableText *this_00;
  
  FEditableTextStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyEditableText).Object;
  if (this_00 != (SEditableText *)0x0) {
    SEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// StaticRegisterNativesUEditableText @ 146a1e7a0

void __cdecl UEditableText::StaticRegisterNativesUEditableText(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UEditableText_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a1fb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableText::SynchronizeProperties(UEditableText *this)

{
  SEditableText *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<FText> *pTVar5;
  TOptional<ETextShapingMethod> *pTVar6;
  TOptional<ETextFlowDirection> *pTVar7;
  undefined4 local_res8;
  TOptional<ETextShapingMethod> local_res10 [4];
  TOptional<ETextFlowDirection> local_res18 [4];
  TOptional<ETextShapingMethod> local_res20 [4];
  TOptional<ETextFlowDirection> local_2c8 [4];
  undefined1 local_2c0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b8;
  ForAnyElementType FStack_2b0;
  ulonglong local_2a8;
  undefined1 local_2a0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_298;
  ForAnyElementType FStack_290;
  ulonglong local_288;
  undefined1 local_280 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_268;
  ForAnyElementType FStack_260;
  ulonglong local_258;
  undefined1 local_250 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  ForAnyElementType FStack_230;
  ulonglong local_228;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  void *pvStack_210;
  undefined8 local_208;
  undefined1 local_200 [4];
  undefined1 local_1fc [4];
  FName local_1f8;
  FName local_1f0;
  TAttribute<bool> local_1e8;
  TAttribute<bool> local_1c8;
  TAttribute<EVirtualKeyboardDismissAction> local_1a8;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  local_res8 = 0;
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyEditableText).Object != (SEditableText *)0x0) {
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TextDelegate);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TextDelegate,
                 &local_68);
      local_1f8.ComparisonIndex.Value = *(uint *)&(this->TextDelegate).field_0x10;
      local_1f8.Number = *(uint *)&(this->TextDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TextDelegate);
      pTVar5 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_c8,pUVar4,&local_1f8);
      bVar2 = true;
      bVar3 = false;
    }
    else {
      local_280._0_8_ = (this->Text).TextData.Reference;
      if ((ITextData *)local_280._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_280._0_8_ + 8))(local_280._0_8_,local_200);
      }
      local_280._8_4_ = (this->Text).Flags;
      pTVar5 = (TAttribute<FText> *)local_280;
      local_280[0x10] = true;
      bVar2 = false;
      bVar3 = true;
      local_258 = 0;
      local_268.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_260.Data = (FScriptContainerElement *)0x0;
    }
    FText::FText((FText *)local_f8,&pTVar5->Value);
    local_f8[0x10] = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_268,(FWriteAccessScope *)&local_188);
      if (((int)local_258 != 0) && (FStack_260.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_260.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_260,0,0,0x10);
        local_258 = local_258 & 0xffffffff00000000;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      if (FStack_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_260.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_268.AccessDetector);
      if ((ITextData *)local_280._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_280._0_8_ + 0x10))();
      }
    }
    if (bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
      }
    }
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate,
                 &local_50);
      local_1f0.ComparisonIndex.Value = *(uint *)&(this->HintTextDelegate).field_0x10;
      local_1f0.Number = *(uint *)&(this->HintTextDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate);
      pTVar5 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_98,pUVar4,&local_1f0);
      bVar2 = true;
      bVar3 = false;
    }
    else {
      local_250._0_8_ = (this->HintText).TextData.Reference;
      if ((ITextData *)local_250._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_250._0_8_ + 8))(local_250._0_8_,local_1fc);
      }
      local_250._8_4_ = (this->HintText).Flags;
      pTVar5 = (TAttribute<FText> *)local_250;
      local_250[0x10] = true;
      bVar2 = false;
      bVar3 = true;
      local_228 = 0;
      local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_230.Data = (FScriptContainerElement *)0x0;
    }
    FText::FText((FText *)local_128,&pTVar5->Value);
    local_128[0x10] = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_110,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_238,(FWriteAccessScope *)&local_170);
      if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_230.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
        local_228 = local_228 & 0xffffffff00000000;
      }
      if (local_170.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
      }
      if (FStack_230.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_230.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
      if ((ITextData *)local_250._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_250._0_8_ + 0x10))();
      }
    }
    if (bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
      if ((void *)local_80._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_80._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_80);
      if ((ITextData *)local_98._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98._0_8_ + 0x10))();
      }
    }
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SEditableText::SetText((this->MyEditableText).Object,(TAttribute<FText> *)local_f8);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SEditableText::SetTextStyle((this->MyEditableText).Object,&this->WidgetStyle);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SEditableText::SetHintText((this->MyEditableText).Object,(TAttribute<FText> *)local_128);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_1e8.Value = this->IsReadOnly;
    local_1e8.Getter._16_8_ = 0;
    local_1e8.bIsSet = true;
    local_1e8.Getter._0_8_ = 0;
    local_1e8.Getter._8_8_ = 0;
    SEditableText::SetIsReadOnly((this->MyEditableText).Object,&local_1e8);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_1c8.Value = this->IsPassword;
    local_1c8.Getter._16_8_ = 0;
    local_1c8.bIsSet = true;
    local_1c8.Getter._0_8_ = 0;
    local_1c8.Getter._8_8_ = 0;
    SEditableText::SetIsPassword((this->MyEditableText).Object,&local_1c8);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_2c0[0] = this->AllowContextMenu;
    local_2a8 = 0;
    local_2c0[1] = true;
    local_2b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_2b0.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetAllowContextMenu((this->MyEditableText).Object,(TAttribute<bool> *)local_2c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2b8,(FWriteAccessScope *)&local_158);
    if (((int)local_2a8 != 0) && (FStack_2b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_2b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b0,0,0,0x10);
      local_2a8 = local_2a8 & 0xffffffff00000000;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (FStack_2b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b8.AccessDetector);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_1a8.Value = this->VirtualKeyboardDismissAction;
    local_1a8.Getter._16_8_ = 0;
    local_1a8.bIsSet = true;
    local_1a8.Getter._0_8_ = 0;
    local_1a8.Getter._8_8_ = 0;
    SEditableText::SetVirtualKeyboardDismissAction((this->MyEditableText).Object,&local_1a8);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_2a0._0_4_ = ZEXT14((this->Justification).Value);
    local_288 = 0;
    local_2a0[4] = true;
    local_298.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_290.Data = (FScriptContainerElement *)0x0;
    SEditableText::SetJustification
              ((this->MyEditableText).Object,(TAttribute<ETextJustify::Type> *)local_2a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_298,(FWriteAccessScope *)&local_140);
    if (((int)local_288 != 0) && (FStack_290.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_290.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_290,0,0,0x10);
      local_288 = local_288 & 0xffffffff00000000;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    if (FStack_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_290.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_298.AccessDetector);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res8._0_2_ = CONCAT11(1,this->OverflowPolicy);
    SEditableText::SetOverflowPolicy((this->MyEditableText).Object,SUB82(&local_res8,0));
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_220[0] = this->EnableIntegratedKeyboard;
    local_208 = 0;
    local_220[1] = true;
    local_218 = (undefined1  [8])0x0;
    pvStack_210 = (void *)0x0;
    SEditableText::SetEnableIntegratedKeyboard
              ((this->MyEditableText).Object,(TAttribute<bool> *)local_220);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
    if (pvStack_210 != (void *)0x0) {
      FMemory::Free(pvStack_210);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_218);
    if ((this->MyEditableText).Object == (SEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (this->MyEditableText).Object;
    if ((this->ShapedTextOptions).bOverride_TextShapingMethod == 0) {
      local_res20[0].bIsSet = false;
      pTVar6 = local_res20;
    }
    else {
      local_res10[0].TypedValue = (this->ShapedTextOptions).TextShapingMethod;
      pTVar6 = local_res10;
      local_res10[0].bIsSet = true;
    }
    SEditableText::SetTextShapingMethod(this_00,pTVar6);
    if ((this->ShapedTextOptions).bOverride_TextFlowDirection == '\0') {
      local_2c8[0].bIsSet = false;
      pTVar7 = local_2c8;
    }
    else {
      local_res18[0].TypedValue = (this->ShapedTextOptions).TextFlowDirection;
      pTVar7 = local_res18;
      local_res18[0].bIsSet = true;
    }
    SEditableText::SetTextFlowDirection(this_00,pTVar7);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_110);
    if ((void *)local_110._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_110._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_110);
    if ((ITextData *)local_128._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_128._0_8_ + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    if ((void *)local_e0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e0);
    if ((ITextData *)local_f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_f8._0_8_ + 0x10))();
    }
  }
  return;
}

// ToggleVirtualKeyboard @ 146a2a700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableText::ToggleVirtualKeyboard(UEditableText *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FSlateApplication *this_00;
  
  if (((this->MyEditableText).Object != (SEditableText *)0x0) &&
     (lVar4 = (**(code **)(this->_padding_ + 0x2e0))(), lVar4 != 0)) {
    this_00 = FSlateApplication::Get();
    iVar3 = FSlateApplication::GetUserIndexForController(this_00,*(int *)(lVar4 + 0xf0));
    if (((this->MyEditableText).Object == (SEditableText *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SEditableText::ToggleVirtualKeyboard((this->MyEditableText).Object,param_1,iVar3);
  }
  return;
}

// execGetFont @ 146a35240

void __cdecl UEditableText::execGetFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateFontInfo::operator=(param_3,(FSlateFontInfo *)(param_1 + 0xd));
  return;
}

// execGetHintText @ 146a352f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execGetHintText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SEditableText **)(param_1 + 0x1f) == (SEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)&param_1[0xb].field_0x20;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)(param_1 + 0xc);
  }
  else {
    SEditableText::GetHintText(*(SEditableText **)(param_1 + 0x1f),&local_18);
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetJustification @ 146a35780

void __cdecl UEditableText::execGetJustification(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1d].field_0x1a;
  return;
}

// execGetText @ 146a36270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execGetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SEditableText **)(param_1 + 0x1f) == (SEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)&param_1[10].field_0x20;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)(param_1 + 0xb);
  }
  else {
    SEditableText::GetText(*(SEditableText **)(param_1 + 0x1f),&local_18);
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetFont @ 146a3c8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execSetFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateFontInfo *pFVar2;
  FSlateFontInfo local_c8;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::FSlateFontInfo(&local_c8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSlateFontInfo::FSlateFontInfo(&local_68,&local_c8);
  FSlateFontInfo::operator=((FSlateFontInfo *)(param_1 + 0xd),pFVar2);
  if (*(SEditableText **)(param_1 + 0x1f) != (SEditableText *)0x0) {
    SEditableText::SetTextStyle
              (*(SEditableText **)(param_1 + 0x1f),(FEditableTextStyle *)&param_1[0xc].field_0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar2->CompositeFont).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execSetFontMaterial @ 146a3cb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execSetFontMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0xd].field_0x8 = pUVar2;
  if (*(SEditableText **)(param_1 + 0x1f) != (SEditableText *)0x0) {
    SEditableText::SetTextStyle
              (*(SEditableText **)(param_1 + 0x1f),(FEditableTextStyle *)&param_1[0xc].field_0x20);
  }
  return;
}

// execSetFontOutlineMaterial @ 146a3cd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEditableText::execSetFontOutlineMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0xd].field_0x18 = pUVar2;
  if (*(SEditableText **)(param_1 + 0x1f) != (SEditableText *)0x0) {
    SEditableText::SetTextStyle
              (*(SEditableText **)(param_1 + 0x1f),(FEditableTextStyle *)&param_1[0xc].field_0x20);
  }
  return;
}

// execSetHintText @ 146a3d3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execSetHintText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res10);
  }
  local_18.Flags = local_28.Flags;
  SetHintText((UEditableText *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetIsPassword @ 146a3e210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execSetIsPassword(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SEditableText *this;
  int local_res8 [2];
  TAttribute<bool> local_28;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.Value = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SEditableText **)(param_1 + 0x1f);
  param_1[0x1d].field_0x9 = local_28.Value;
  if (this != (SEditableText *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableText::SetIsPassword(this,&local_28);
  }
  return;
}

// execSetIsReadOnly @ 146a3e430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execSetIsReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SEditableText *this;
  int local_res8 [2];
  TAttribute<bool> local_28;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.Value = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SEditableText **)(param_1 + 0x1f);
  param_1[0x1d].field_0x8 = local_28.Value;
  if (this != (SEditableText *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableText::SetIsReadOnly(this,&local_28);
  }
  return;
}

// execSetJustification @ 146a3e860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execSetJustification(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetJustification((UEditableText *)param_1,(uint)local_res10[0]);
  return;
}

// execSetMinimumDesiredWidth @ 146a3f9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEditableText::execSetMinimumDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMinimumDesiredWidth((UEditableText *)param_1,local_res10[0]);
  return;
}

// execSetText @ 146a431a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableText::execSetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res10);
  }
  local_18.Flags = local_28.Flags;
  SetText((UEditableText *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetTextOverflowPolicy @ 146a436f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEditableText::execSetTextOverflowPolicy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SEditableText *this;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res11;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SEditableText **)(param_1 + 0x1f);
  param_1[0x1d].field_0x1b = local_res8[0];
  if (this != (SEditableText *)0x0) {
    local_res10 = local_res8[0];
    local_res11 = 1;
    SEditableText::SetOverflowPolicy(this,SUB82(&local_res10,0));
  }
  return;
}

// execToggleVirtualKeyboard @ 146a44ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEditableText::execToggleVirtualKeyboard(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FSlateApplication *this;
  bool bVar6;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 0x1f) != 0) {
    lVar5 = (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
    if (lVar5 != 0) {
      this = FSlateApplication::Get();
      iVar4 = FSlateApplication::GetUserIndexForController(this,*(int *)(lVar5 + 0xf0));
      if (*(longlong *)(param_1 + 0x1f) == 0) {
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
      SEditableText::ToggleVirtualKeyboard(*(SEditableText **)(param_1 + 0x1f),bVar6,iVar4);
    }
  }
  return;
}

