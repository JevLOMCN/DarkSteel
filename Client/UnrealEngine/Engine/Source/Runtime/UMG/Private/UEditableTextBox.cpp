// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 85

// GetText_WrapperImpl @ 146966840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::GetText_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = GetText(param_1,&local_18);
  FText::operator=(param_2,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetText_WrapperImpl @ 146966880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetText_WrapperImpl(void *param_1,void *param_2)

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

// GetWidgetStyle_WrapperImpl @ 1469668f0

void __cdecl UEditableTextBox::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FEditableTextBoxStyle *pFVar1;
  FEditableTextBoxStyle local_c88;
  
  pFVar1 = FEditableTextBoxStyle::FEditableTextBoxStyle
                     (&local_c88,(FEditableTextBoxStyle *)((longlong)param_1 + 0x1e0));
  FEditableTextBoxStyle::operator=(param_2,pFVar1);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_c88);
  return;
}

// SetWidgetStyle_WrapperImpl @ 146966960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FEditableTextBoxStyle::operator=((FEditableTextBoxStyle *)((longlong)param_1 + 0x1e0),param_2);
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    SEditableTextBox::SetStyle(*(SEditableTextBox **)((longlong)param_1 + 0xed0),param_2);
  }
  return;
}

// GetHintText_WrapperImpl @ 146966a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::GetHintText_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0xed0);
  if (lVar1 == 0) {
    local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0xe60);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)((longlong)param_1 + 0xe68);
  }
  else {
    if (*(longlong *)(lVar1 + 0x2f8) == 0) {
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
    SEditableText::GetHintText(*(SEditableText **)(lVar1 + 0x2f8),&local_18);
  }
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetHintText_WrapperImpl @ 146966b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetHintText_WrapperImpl(void *param_1,void *param_2)

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

// GetIsReadOnly_WrapperImpl @ 146966b80

void __cdecl UEditableTextBox::GetIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe88);
  return;
}

// SetIsReadOnly_WrapperImpl @ 146966bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<bool> local_28;
  
  local_28.Value = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0xe88) = local_28.Value;
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableTextBox::SetIsReadOnly(*(SEditableTextBox **)((longlong)param_1 + 0xed0),&local_28);
  }
  return;
}

// GetIsPassword_WrapperImpl @ 146966c20

void __cdecl UEditableTextBox::GetIsPassword_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe89);
  return;
}

// SetIsPassword_WrapperImpl @ 146966c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetIsPassword_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<bool> local_28;
  
  local_28.Value = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0xe89) = local_28.Value;
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableTextBox::SetIsPassword(*(SEditableTextBox **)((longlong)param_1 + 0xed0),&local_28);
  }
  return;
}

// GetMinimumDesiredWidth_WrapperImpl @ 146966d20

void __cdecl UEditableTextBox::GetMinimumDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0xe8c);
  return;
}

// SetMinimumDesiredWidth_WrapperImpl @ 146966d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetMinimumDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_4_ = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0xe8c) = local_30._0_4_;
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetMinimumDesiredWidth
              (*(SEditableTextBox **)((longlong)param_1 + 0xed0),(TAttribute<float> *)local_30);
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

// GetIsCaretMovedWhenGainFocus_WrapperImpl @ 146966e50

void __cdecl UEditableTextBox::GetIsCaretMovedWhenGainFocus_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe90);
  return;
}

// SetIsCaretMovedWhenGainFocus_WrapperImpl @ 146966f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetIsCaretMovedWhenGainFocus_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xe90) = local_30[0];
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetIsCaretMovedWhenGainFocus
              (*(SEditableTextBox **)((longlong)param_1 + 0xed0),(TAttribute<bool> *)local_30);
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

// GetSelectAllTextWhenFocused_WrapperImpl @ 146966fe0

void __cdecl UEditableTextBox::GetSelectAllTextWhenFocused_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe91);
  return;
}

// SetSelectAllTextWhenFocused_WrapperImpl @ 146967020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetSelectAllTextWhenFocused_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xe91) = local_30[0];
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetSelectAllTextWhenFocused
              (*(SEditableTextBox **)((longlong)param_1 + 0xed0),(TAttribute<bool> *)local_30);
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

// GetRevertTextOnEscape_WrapperImpl @ 146967100

void __cdecl UEditableTextBox::GetRevertTextOnEscape_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe92);
  return;
}

// SetRevertTextOnEscape_WrapperImpl @ 1469671e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetRevertTextOnEscape_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xe92) = local_30[0];
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetRevertTextOnEscape
              (*(SEditableTextBox **)((longlong)param_1 + 0xed0),(TAttribute<bool> *)local_30);
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

// GetClearKeyboardFocusOnCommit_WrapperImpl @ 146967300

void __cdecl
UEditableTextBox::GetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe93);
  return;
}

// SetClearKeyboardFocusOnCommit_WrapperImpl @ 146967370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEditableTextBox::SetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xe93) = local_30[0];
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetClearKeyboardFocusOnCommit
              (*(SEditableTextBox **)((longlong)param_1 + 0xed0),(TAttribute<bool> *)local_30);
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

// GetSelectAllTextOnCommit_WrapperImpl @ 146967450

void __cdecl UEditableTextBox::GetSelectAllTextOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe94);
  return;
}

// SetSelectAllTextOnCommit_WrapperImpl @ 146967490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetSelectAllTextOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xe94) = local_30[0];
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetSelectAllTextOnCommit
              (*(SEditableTextBox **)((longlong)param_1 + 0xed0),(TAttribute<bool> *)local_30);
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

// GetJustification_WrapperImpl @ 146967570

void __cdecl UEditableTextBox::GetJustification_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe9a);
  return;
}

// SetJustification_WrapperImpl @ 146967650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetJustification_WrapperImpl(void *param_1,void *param_2)

{
  SetJustification(param_1,(uint)*(byte *)param_2);
  return;
}

// GetOverflowPolicy_WrapperImpl @ 146967670

void __cdecl UEditableTextBox::GetOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe9b);
  return;
}

// SetOverflowPolicy_WrapperImpl @ 1469676a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::SetOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8;
  undefined1 local_res9;
  
  local_res8 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xe9b) = local_res8;
  if (*(SEditableTextBox **)((longlong)param_1 + 0xed0) != (SEditableTextBox *)0x0) {
    local_res9 = 1;
    SEditableTextBox::SetOverflowPolicy
              (*(SEditableTextBox **)((longlong)param_1 + 0xed0),SUB82(&local_res8,0));
  }
  return;
}

// StaticClass @ 146967730

UClass * __cdecl UEditableTextBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"EditableTextBox",
               &Z_Registration_Info_UClass_UEditableTextBox.InnerSingleton,
               StaticRegisterNativesUEditableTextBox,0xee0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEditableTextBox>,
               InternalVTableHelperCtorCaller<UEditableTextBox>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextBox.InnerSingleton;
}

// UEditableTextBox @ 146989e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UEditableTextBox * __thiscall
UEditableTextBox::UEditableTextBox(UEditableTextBox *this,FVTableHelper *param_1)

{
  FShapedTextOptions *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->Text);
  *(undefined8 *)&this->TextDelegate = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x10 = 0;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->WidgetStyle);
  FText::FText(&this->HintText);
  *(undefined8 *)&this->HintTextDelegate = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x10 = 0;
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
  (this->MyEditableTextBlock).Object = (SEditableTextBox *)0x0;
  (this->MyEditableTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UEditableTextBox @ 146989f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UEditableTextBox * __thiscall
UEditableTextBox::UEditableTextBox(UEditableTextBox *this,FObjectInitializer *param_1)

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
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->WidgetStyle);
  FText::FText(&this->HintText);
  *(undefined8 *)&this->HintTextDelegate = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x10 = 0;
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
  (this->MyEditableTextBlock).Object = (SEditableTextBox *)0x0;
  (this->MyEditableTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->IsReadOnly = false;
  this->IsPassword = false;
  this->MinimumDesiredWidth = 0.0;
  this->IsCaretMovedWhenGainFocus = true;
  this->SelectAllTextWhenFocused = false;
  this->RevertTextOnEscape = false;
  this->ClearKeyboardFocusOnCommit = true;
  this->SelectAllTextOnCommit = false;
  this->AllowContextMenu = true;
  this->VirtualKeyboardDismissAction = TextChangeOnDismiss;
  this->OverflowPolicy = Clip;
  pFVar4 = UE::Slate::Private::FDefaultStyleCache::Get();
  FEditableTextBoxStyle::operator=(&this->WidgetStyle,&(pFVar4->Runtime).EditableTextBoxStyle);
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
      atexit(`UEditableTextBox::UEditableTextBox'::__l5::
             _dynamic_atexit_destructor_for__DefaultFontObj__);
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
       (this->WidgetStyle).TextStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController;
  local_68.CompositeFont.Object = (this->WidgetStyle).TextStyle.Font.CompositeFont.Object;
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
  FSlateFontInfo::operator=(&(this->WidgetStyle).TextStyle.Font,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// ~UEditableTextBox @ 146992ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableTextBox::~UEditableTextBox(UEditableTextBox *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyEditableTextBlock).SharedReferenceCount.ReferenceController);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HintTextDelegate);
  pIVar2 = (this->HintText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TextDelegate);
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// ClearError @ 1469a63c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::ClearError(UEditableTextBox *this)

{
  SEditableTextBox *this_00;
  FText *pFVar1;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    pFVar1 = FText::GetEmpty();
    SEditableTextBox::SetError(this_00,pFVar1);
    return;
  }
  return;
}

// FOnEditableTextBoxChangedEvent_DelegateWrapper @ 1469c7680

void __cdecl
UEditableTextBox::FOnEditableTextBoxChangedEvent_DelegateWrapper
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

// FOnEditableTextBoxCommittedEvent_DelegateWrapper @ 1469c7710

void __cdecl
UEditableTextBox::FOnEditableTextBoxCommittedEvent_DelegateWrapper
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

// GetAccessibleWidget @ 1469ccdc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UEditableTextBox::GetAccessibleWidget
          (UEditableTextBox *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MyEditableTextBlock).Object;
  pTVar1 = (this->MyEditableTextBlock).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetClearKeyboardFocusOnCommit @ 1469ce4b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::GetClearKeyboardFocusOnCommit(UEditableTextBox *this)

{
  return this->ClearKeyboardFocusOnCommit;
}

// GetFieldNotificationDescriptor @ 1469d0470

/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UEditableTextBox::GetFieldNotificationDescriptor(UEditableTextBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UEditableTextBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetHintText @ 1469d1070

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UEditableTextBox::GetHintText(UEditableTextBox *this,FText *__return_storage_ptr__)

{
  SEditableTextBox *pSVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  pSVar1 = (this->MyEditableTextBlock).Object;
  if (pSVar1 == (SEditableTextBox *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (this->HintText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = (this->HintText).Flags;
    return __return_storage_ptr__;
  }
  if ((pSVar1->EditableText).Object == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  SEditableText::GetHintText((pSVar1->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetIsCaretMovedWhenGainFocus @ 1469d15d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::GetIsCaretMovedWhenGainFocus(UEditableTextBox *this)

{
  return this->IsCaretMovedWhenGainFocus;
}

// GetIsPassword @ 1469d16b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::GetIsPassword(UEditableTextBox *this)

{
  return this->IsPassword;
}

// GetIsReadOnly @ 1469d16d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::GetIsReadOnly(UEditableTextBox *this)

{
  return this->IsReadOnly;
}

// GetJustification @ 1469d1b60

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall UEditableTextBox::GetJustification(UEditableTextBox *this)

{
  return (Type)(this->Justification).Value;
}

// GetMinimumDesiredWidth @ 1469d1f00

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UEditableTextBox::GetMinimumDesiredWidth(UEditableTextBox *this)

{
  return this->MinimumDesiredWidth;
}

// GetPrivateStaticClass @ 1469d3f70

UClass * __cdecl UEditableTextBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"EditableTextBox",
               &Z_Registration_Info_UClass_UEditableTextBox.InnerSingleton,
               StaticRegisterNativesUEditableTextBox,0xee0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEditableTextBox>,
               InternalVTableHelperCtorCaller<UEditableTextBox>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextBox.InnerSingleton;
}

// GetRevertTextOnEscape @ 1469d6f70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::GetRevertTextOnEscape(UEditableTextBox *this)

{
  return this->RevertTextOnEscape;
}

// GetSelectAllTextOnCommit @ 1469d7180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::GetSelectAllTextOnCommit(UEditableTextBox *this)

{
  return this->SelectAllTextOnCommit;
}

// GetSelectAllTextWhenFocused @ 1469d71b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::GetSelectAllTextWhenFocused(UEditableTextBox *this)

{
  return this->SelectAllTextWhenFocused;
}

// GetText @ 1469d8b20

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UEditableTextBox::GetText(UEditableTextBox *this,FText *__return_storage_ptr__)

{
  SEditableTextBox *pSVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  pSVar1 = (this->MyEditableTextBlock).Object;
  if (pSVar1 == (SEditableTextBox *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (this->Text).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = (this->Text).Flags;
    return __return_storage_ptr__;
  }
  if ((pSVar1->EditableText).Object == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  SEditableText::GetText((pSVar1->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTextOverflowPolicy @ 1469d8e80

/* WARNING: Enum "Type": Some values do not have unique names */

ETextOverflowPolicy __thiscall UEditableTextBox::GetTextOverflowPolicy(UEditableTextBox *this)

{
  return this->OverflowPolicy;
}

// GetWidgetStyle @ 1469da380

/* WARNING: Enum "Type": Some values do not have unique names */

FEditableTextBoxStyle * __thiscall UEditableTextBox::GetWidgetStyle(UEditableTextBox *this)

{
  return &this->WidgetStyle;
}

// HandleOnTextChanged @ 1469dd190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableTextBox::HandleOnTextChanged(UEditableTextBox *this,FText *param_1)

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

// HandleOnTextCommitted @ 1469dd4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UEditableTextBox::HandleOnTextCommitted(UEditableTextBox *this,FText *param_1,Type param_2)

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

// HasError @ 1469de0d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::HasError(UEditableTextBox *this)

{
  IErrorReportingWidget *pIVar1;
  SEditableTextBox *pSVar2;
  char cVar3;
  
  pSVar2 = (this->MyEditableTextBlock).Object;
  if (pSVar2 == (SEditableTextBox *)0x0) {
    return false;
  }
  pIVar1 = (pSVar2->ErrorReporting).Object;
  if (pIVar1 != (IErrorReportingWidget *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x10))();
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

// RebuildWidget @ 1469fd720

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UEditableTextBox::RebuildWidget
          (UEditableTextBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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
  SEditableTextBox *pSVar11;
  SEditableTextBox *pSVar12;
  TSharedRef<SWidget,1> *pTVar13;
  EKeyboardType EVar14;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UEditableTextBox *local_res18;
  UEditableTextBox *local_res20;
  FMemScope local_ab8;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined1 local_aa8 [8];
  FDelegateAllocation local_aa0;
  undefined1 local_a90 [8];
  FDelegateAllocation local_a88;
  undefined1 local_a78;
  undefined1 local_a77;
  undefined1 local_a70 [8];
  ForAnyElementType FStack_a68;
  ulonglong local_a60;
  undefined1 local_a58;
  undefined1 local_a57;
  undefined1 local_a50 [8];
  ForAnyElementType FStack_a48;
  ulonglong local_a40;
  float local_a38;
  undefined1 local_a34;
  undefined1 local_a30 [8];
  ForAnyElementType FStack_a28;
  ulonglong local_a20;
  undefined1 local_a18;
  undefined1 local_a17;
  undefined1 local_a10 [8];
  ForAnyElementType FStack_a08;
  ulonglong local_a00;
  undefined1 local_9f8;
  undefined1 local_9f7;
  undefined1 local_9f0 [8];
  ForAnyElementType FStack_9e8;
  ulonglong local_9e0;
  undefined1 local_9d8;
  undefined1 local_9d7;
  undefined1 local_9d0 [8];
  ForAnyElementType FStack_9c8;
  ulonglong local_9c0;
  undefined1 local_9b8;
  undefined1 local_9b7;
  undefined1 local_9b0 [8];
  ForAnyElementType FStack_9a8;
  ulonglong local_9a0;
  undefined1 local_998;
  undefined1 local_997;
  undefined1 local_990 [8];
  ForAnyElementType FStack_988;
  ulonglong local_980;
  undefined1 local_978;
  undefined1 local_977;
  undefined1 local_970 [8];
  ForAnyElementType FStack_968;
  ulonglong local_960;
  EKeyboardType local_958;
  undefined1 local_954;
  undefined1 local_950 [8];
  ForAnyElementType FStack_948;
  ulonglong local_940;
  EVirtualKeyboardTrigger local_938;
  undefined1 local_937;
  undefined1 local_930 [8];
  ForAnyElementType FStack_928;
  ulonglong local_920;
  EVirtualKeyboardDismissAction local_918;
  undefined1 local_917;
  undefined1 local_910 [8];
  ForAnyElementType FStack_908;
  ulonglong local_900;
  Type local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0 [8];
  ForAnyElementType FStack_8e8;
  ulonglong local_8e0;
  undefined1 local_8d8 [8];
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_8d0;
  SEditableTextBox *local_8b8;
  FSharedReferencer<1> local_8b0;
  FName local_8a8;
  FDestructionSentinel local_8a0;
  FDestructionSentinel local_888;
  FDestructionSentinel local_870;
  FDestructionSentinel local_858;
  FDestructionSentinel local_840;
  FDestructionSentinel local_828;
  FDestructionSentinel local_810;
  FDestructionSentinel local_7f8;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDestructionSentinel local_738;
  FDelegateAllocation *local_720;
  FDestructionSentinel local_718;
  FDelegateAllocation *local_700;
  FArguments local_6f8;
  
  pFVar8 = SEditableTextBox::FArguments::FArguments(&local_6f8);
  pFVar8->_Style = &this->WidgetStyle;
  local_a78 = this->IsReadOnly;
  local_a77 = 1;
  EVar14 = Keyboard_Default;
  local_a60 = 0;
  local_a70 = (undefined1  [8])0x0;
  FStack_a68.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_IsReadOnly).Value = (bool)local_a78;
  (pFVar8->_IsReadOnly).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a70,
             (FWriteAccessScope *)&local_870);
  if (((int)local_a60 != 0) && (FStack_a68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a68,0,0,0x10);
    local_a60 = local_a60 & 0xffffffff00000000;
  }
  if (local_870.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_870.Accessor,&local_870);
  }
  if (FStack_a68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a70);
  local_a58 = this->IsPassword;
  local_a57 = 1;
  local_a40 = 0;
  local_a50 = (undefined1  [8])0x0;
  FStack_a48.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_IsPassword).Value = (bool)local_a58;
  (pFVar8->_IsPassword).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_IsPassword).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a50,
             (FWriteAccessScope *)&local_858);
  if (((int)local_a40 != 0) && (FStack_a48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a48,0,0,0x10);
    local_a40 = local_a40 & 0xffffffff00000000;
  }
  if (local_858.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_858.Accessor,&local_858);
  }
  if (FStack_a48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a50);
  local_a38 = this->MinimumDesiredWidth;
  local_a34 = 1;
  local_a20 = 0;
  local_a30 = (undefined1  [8])0x0;
  FStack_a28.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_MinDesiredWidth).Value = local_a38;
  (pFVar8->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a30,
             (FWriteAccessScope *)&local_840);
  if (((int)local_a20 != 0) && (FStack_a28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a28,0,0,0x10);
    local_a20 = local_a20 & 0xffffffff00000000;
  }
  if (local_840.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_840.Accessor,&local_840);
  }
  if (FStack_a28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a30);
  local_a18 = this->IsCaretMovedWhenGainFocus;
  local_a17 = 1;
  local_a00 = 0;
  local_a10 = (undefined1  [8])0x0;
  FStack_a08.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_IsCaretMovedWhenGainFocus).Value = (bool)local_a18;
  (pFVar8->_IsCaretMovedWhenGainFocus).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_IsCaretMovedWhenGainFocus).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a10,
             (FWriteAccessScope *)&local_828);
  if (((int)local_a00 != 0) && (FStack_a08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a08,0,0,0x10);
    local_a00 = local_a00 & 0xffffffff00000000;
  }
  if (local_828.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_828.Accessor,&local_828);
  }
  if (FStack_a08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a10);
  local_9f8 = this->SelectAllTextWhenFocused;
  local_9f7 = 1;
  local_9e0 = 0;
  local_9f0 = (undefined1  [8])0x0;
  FStack_9e8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_SelectAllTextWhenFocused).Value = (bool)local_9f8;
  (pFVar8->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f0,
             (FWriteAccessScope *)&local_810);
  if (((int)local_9e0 != 0) && (FStack_9e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9e8,0,0,0x10);
    local_9e0 = local_9e0 & 0xffffffff00000000;
  }
  if (local_810.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810.Accessor,&local_810);
  }
  if (FStack_9e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9f0);
  local_9d8 = this->RevertTextOnEscape;
  local_9d7 = 1;
  local_9c0 = 0;
  local_9d0 = (undefined1  [8])0x0;
  FStack_9c8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_RevertTextOnEscape).Value = (bool)local_9d8;
  (pFVar8->_RevertTextOnEscape).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d0,
             (FWriteAccessScope *)&local_7f8);
  if (((int)local_9c0 != 0) && (FStack_9c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9c8,0,0,0x10);
    local_9c0 = local_9c0 & 0xffffffff00000000;
  }
  if (local_7f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
  }
  if (FStack_9c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d0);
  local_9b8 = this->ClearKeyboardFocusOnCommit;
  local_9b7 = 1;
  local_9a0 = 0;
  local_9b0 = (undefined1  [8])0x0;
  FStack_9a8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_ClearKeyboardFocusOnCommit).Value = (bool)local_9b8;
  (pFVar8->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9b0,
             (FWriteAccessScope *)&local_7e0);
  if (((int)local_9a0 != 0) && (FStack_9a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9a8,0,0,0x10);
    local_9a0 = local_9a0 & 0xffffffff00000000;
  }
  if (local_7e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
  }
  if (FStack_9a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b0);
  local_998 = this->SelectAllTextOnCommit;
  local_997 = 1;
  local_980 = 0;
  local_990 = (undefined1  [8])0x0;
  FStack_988.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_SelectAllTextOnCommit).Value = (bool)local_998;
  (pFVar8->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
             (FWriteAccessScope *)&local_7c8);
  if (((int)local_980 != 0) && (FStack_988.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_988.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_988,0,0,0x10);
    local_980 = local_980 & 0xffffffff00000000;
  }
  if (local_7c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
  }
  if (FStack_988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_988.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_990);
  local_978 = this->AllowContextMenu;
  local_977 = 1;
  local_960 = 0;
  local_970 = (undefined1  [8])0x0;
  FStack_968.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_AllowContextMenu).Value = (bool)local_978;
  (pFVar8->_AllowContextMenu).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_AllowContextMenu).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_970);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_970,
             (FWriteAccessScope *)&local_7b0);
  if (((int)local_960 != 0) && (FStack_968.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_968.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_968,0,0,0x10);
    local_960 = local_960 & 0xffffffff00000000;
  }
  if (local_7b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
  }
  if (FStack_968.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_968.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_970);
  uStack_ab0 = 0;
  local_ab8 = (FMemScope)_vcall__784__flat______;
  local_a90 = (undefined1  [8])0x0;
  local_a88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a88.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a90,
             (FWriteAccessScope *)&local_738);
  local_720 = &local_a88;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_a88);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEditableTextBox____A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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
    *(FMemScope *)(puVar9 + 4) = local_ab8;
    puVar9[5] = CONCAT44(uStack_aac,uStack_ab0);
  }
  if (local_738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnTextChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a90);
  uStack_ab0 = 0;
  local_ab8 = (FMemScope)_vcall__792__flat______;
  local_aa8 = (undefined1  [8])0x0;
  local_aa0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_aa0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_aa8,
             (FWriteAccessScope *)&local_718);
  local_700 = &local_aa0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_aa0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEditableTextBox____A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
    *(FMemScope *)(puVar9 + 4) = local_ab8;
    puVar9[5] = CONCAT44(uStack_aac,uStack_ab0);
  }
  if (local_718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnTextCommitted,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_aa8);
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
  local_954 = 1;
  local_940 = 0;
  local_950 = (undefined1  [8])0x0;
  FStack_948.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_VirtualKeyboardType).Value = EVar14;
  (pFVar8->_VirtualKeyboardType).bIsSet = true;
  local_958 = EVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_VirtualKeyboardType).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_950);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_950,
             (FWriteAccessScope *)&local_798);
  if (((int)local_940 != 0) && (FStack_948.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_948.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_948,0,0,0x10);
    local_940 = local_940 & 0xffffffff00000000;
  }
  if (local_798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
  }
  if (FStack_948.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_948.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_950);
  (pFVar8->_VirtualKeyboardOptions).bEnableAutocorrect =
       (this->VirtualKeyboardOptions).bEnableAutocorrect;
  local_938 = this->VirtualKeyboardTrigger;
  local_937 = 1;
  local_930 = (undefined1  [8])0x0;
  FStack_928.Data = (FScriptContainerElement *)0x0;
  local_920 = 0;
  (pFVar8->_VirtualKeyboardTrigger).Value = local_938;
  (pFVar8->_VirtualKeyboardTrigger).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_VirtualKeyboardTrigger).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
             (FWriteAccessScope *)&local_780);
  if (((int)local_920 != 0) && (FStack_928.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_928.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_928,0,0,0x10);
    local_920 = local_920 & 0xffffffff00000000;
  }
  if (local_780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
  }
  if (FStack_928.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_928.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_930);
  local_918 = this->VirtualKeyboardDismissAction;
  local_917 = 1;
  local_900 = 0;
  local_910 = (undefined1  [8])0x0;
  FStack_908.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_VirtualKeyboardDismissAction).Value = local_918;
  (pFVar8->_VirtualKeyboardDismissAction).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_VirtualKeyboardDismissAction).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_910);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_910,
             (FWriteAccessScope *)&local_768);
  if (((int)local_900 != 0) && (FStack_908.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_908.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_908,0,0,0x10);
    local_900 = local_900 & 0xffffffff00000000;
  }
  if (local_768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
  }
  if (FStack_908.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_908.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_910);
  local_8f8 = (Type)(this->Justification).Value;
  local_8f4 = 1;
  local_8e0 = 0;
  local_8f0 = (undefined1  [8])0x0;
  FStack_8e8.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_Justification).Value = local_8f8;
  (pFVar8->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f0,
             (FWriteAccessScope *)&local_750);
  if (((int)local_8e0 != 0) && (FStack_8e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8e8,0,0,0x10);
    local_8e0 = local_8e0 & 0xffffffff00000000;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  if (FStack_8e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8f0);
  if ((TOptional<ETextOverflowPolicy> *)local_8d8 != &pFVar8->_OverflowPolicy) {
    (pFVar8->_OverflowPolicy).TypedValue = this->OverflowPolicy;
    (pFVar8->_OverflowPolicy).bIsSet = true;
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_8a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ab8,&local_8a8,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_8d0,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\EditableTextBox.cpp"
             ,0x5e,local_res8);
  FMemScope::~FMemScope(&local_ab8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar11 = TSharedPtr<SEditableTextBox,1>::operator->(&local_8d0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar11,(FSlateBaseNamedArgs *)pFVar8);
  pSVar11 = local_8d0._Widget.Object;
  SEditableTextBox::Construct(local_8d0._Widget.Object,pFVar8);
  pSVar12 = TSharedPtr<SEditableTextBox,1>::operator->(&local_8d0._Widget);
  if ((pSVar12->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar12->_padding_ + 0x228))(pSVar12);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1469fe489;
  }
  bVar6 = 0x20;
LAB_1469fe489:
  *(byte *)&pSVar12->_padding_ = (byte)pSVar12->_padding_ & 0xdf;
  *(byte *)&pSVar12->_padding_ = (byte)pSVar12->_padding_ | bVar6;
  pSVar12 = TSharedPtr<SEditableTextBox,1>::operator->(&local_8d0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar12->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_8d0._Widget.Object == (SEditableTextBox *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  FVar4.ReferenceController = local_8d0._Widget.SharedReferenceCount.ReferenceController;
  local_8d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_8d0._Widget.Object = (SEditableTextBox *)0x0;
  if ((pSVar11 == (SEditableTextBox *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  local_8b8 = pSVar11;
  local_8b0.ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyEditableTextBlock != (TSharedPtr<SEditableTextBox,1> *)&local_8b8) {
    (this->MyEditableTextBlock).Object = pSVar11;
    local_8b8 = (SEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyEditableTextBlock).SharedReferenceCount,&local_8b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_aa8,
             (FWriteAccessScope *)&local_8a0);
  if ((local_aa0.DelegateSize != 0) &&
     (local_aa0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_aa0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_aa0,0,0,0x10);
    local_aa0.DelegateSize = 0;
  }
  if (local_8a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8a0.Accessor,&local_8a0);
  }
  if (local_aa0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_aa0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_aa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a90,
             (FWriteAccessScope *)&local_888);
  if ((local_a88.DelegateSize != 0) &&
     (local_a88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a88,0,0,0x10);
    local_a88.DelegateSize = 0;
  }
  if (local_888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_888.Accessor,&local_888);
  }
  if (local_a88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a90);
  SEditableTextBox::FArguments::~FArguments(&local_6f8);
  if (((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  pTVar2 = (this->MyEditableTextBlock).SharedReferenceCount.ReferenceController;
  pSVar11 = (this->MyEditableTextBlock).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar11 == (SEditableTextBox *)0x0) &&
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

// ReleaseSlateResources @ 146a0a3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::ReleaseSlateResources(UEditableTextBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyEditableTextBlock != (TSharedPtr<SEditableTextBox,1> *)&local_18) {
    (this->MyEditableTextBlock).Object = (SEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyEditableTextBlock).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// Serialize @ 146a108a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::Serialize(UEditableTextBox *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 146a108e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::Serialize(UEditableTextBox *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5ReleaseStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetClearKeyboardFocusOnCommit @ 146a120d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetClearKeyboardFocusOnCommit(UEditableTextBox *this,bool param_1)

{
  SEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->ClearKeyboardFocusOnCommit = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableTextBox::SetClearKeyboardFocusOnCommit(this_00,(TAttribute<bool> *)local_30);
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

// SetError @ 146a13ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetError(UEditableTextBox *this,FText *param_1)

{
  SEditableTextBox *this_00;
  ITextData *pIVar1;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    SEditableTextBox::SetError(this_00,param_1);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a13d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetForegroundColor @ 146a14400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetForegroundColor(UEditableTextBox *this,FLinearColor *param_1)

{
  SEditableTextBox *pSVar1;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pSVar1 = (this->MyEditableTextBlock).Object;
  local_58._16_4_ = local_58._16_4_ & 0xffffff00;
  *(undefined8 *)&(this->WidgetStyle).ForegroundColor.SpecifiedColor.field0_0x0 = local_40._0_8_;
  *(undefined8 *)((longlong)&(this->WidgetStyle).ForegroundColor.SpecifiedColor.field0_0x0 + 8) =
       local_40._8_8_;
  (this->WidgetStyle).ForegroundColor.ColorUseRule = local_58.bDestroyed;
  (this->WidgetStyle).ForegroundColor.ColorTableId = local_58._17_1_;
  *(undefined2 *)&(this->WidgetStyle).ForegroundColor.field_0x12 = local_58._18_2_;
  if (pSVar1 != (SEditableTextBox *)0x0) {
    local_30 = 0;
    local_18 = 0;
    local_2c = 1;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FSlateColor> *)&local_40._s_0,None)
    ;
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
  }
  return;
}

// SetHintText @ 146a14990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetHintText(UEditableTextBox *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  SEditableTextBox *this_00;
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
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_40._0_8_ = (this->HintText).TextData.Reference;
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res8);
    }
    local_40._8_4_ = (this->HintText).Flags;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetHintText(this_00,(TAttribute<FText> *)local_40);
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

// SetIsCaretMovedWhenGainFocus @ 146a157d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetIsCaretMovedWhenGainFocus(UEditableTextBox *this,bool param_1)

{
  SEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->IsCaretMovedWhenGainFocus = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableTextBox::SetIsCaretMovedWhenGainFocus(this_00,(TAttribute<bool> *)local_30);
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

// SetIsPassword @ 146a15f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetIsPassword(UEditableTextBox *this,bool param_1)

{
  SEditableTextBox *this_00;
  TAttribute<bool> local_28;
  
  this->IsPassword = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    SEditableTextBox::SetIsPassword(this_00,&local_28);
  }
  return;
}

// SetIsReadOnly @ 146a15fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetIsReadOnly(UEditableTextBox *this,bool param_1)

{
  SEditableTextBox *this_00;
  TAttribute<bool> local_28;
  
  this->IsReadOnly = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    SEditableTextBox::SetIsReadOnly(this_00,&local_28);
  }
  return;
}

// SetJustification @ 146a16500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetJustification(UEditableTextBox *this,Type param_1)

{
  SEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->Justification).Value = (uchar)param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    SEditableTextBox::SetJustification(this_00,(TAttribute<ETextJustify::Type> *)local_30);
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

// SetMinDesiredWidth @ 146a174a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetMinDesiredWidth(UEditableTextBox *this,float param_1)

{
  SEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->MinimumDesiredWidth = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SEditableTextBox::SetMinimumDesiredWidth(this_00,(TAttribute<float> *)local_30);
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

// SetRevertTextOnEscape @ 146a197b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetRevertTextOnEscape(UEditableTextBox *this,bool param_1)

{
  SEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->RevertTextOnEscape = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableTextBox::SetRevertTextOnEscape(this_00,(TAttribute<bool> *)local_30);
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

// SetSelectAllTextOnCommit @ 146a1a0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetSelectAllTextOnCommit(UEditableTextBox *this,bool param_1)

{
  SEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->SelectAllTextOnCommit = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableTextBox::SetSelectAllTextOnCommit(this_00,(TAttribute<bool> *)local_30);
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

// SetSelectAllTextWhenFocused @ 146a1a280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEditableTextBox::SetSelectAllTextWhenFocused(UEditableTextBox *this,bool param_1)

{
  SEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->SelectAllTextWhenFocused = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SEditableTextBox::SetSelectAllTextWhenFocused(this_00,(TAttribute<bool> *)local_30);
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

// SetText @ 146a1bd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableTextBox::SetText(UEditableTextBox *this,FText *param_1)

{
  SEditableTextBox *this_00;
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
    this_00 = (this->MyEditableTextBlock).Object;
    if (this_00 != (SEditableTextBox *)0x0) {
      local_38._0_8_ = (this->Text).TextData.Reference;
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 8))(local_38._0_8_,local_res10);
      }
      local_38._8_4_ = (this->Text).Flags;
      local_38[0x10] = true;
      local_10 = 0;
      local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_18.Data = (FScriptContainerElement *)0x0;
      SEditableTextBox::SetText(this_00,(TAttribute<FText> *)local_38);
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
                    /* WARNING: Could not recover jumptable at 0x000146a1be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetTextInternal @ 146a1c490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEditableTextBox::SetTextInternal(UEditableTextBox *this,FText *param_1)

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

// SetTextOverflowPolicy @ 146a1c650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEditableTextBox::SetTextOverflowPolicy(UEditableTextBox *this,ETextOverflowPolicy param_1)

{
  SEditableTextBox *this_00;
  ETextOverflowPolicy local_res10 [24];
  
  this->OverflowPolicy = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    local_res10[1] = 1;
    local_res10[0] = param_1;
    SEditableTextBox::SetOverflowPolicy(this_00,SUB82(local_res10,0));
  }
  return;
}

// SetWidgetStyle @ 146a1dda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEditableTextBox::SetWidgetStyle(UEditableTextBox *this,FEditableTextBoxStyle *param_1)

{
  SEditableTextBox *this_00;
  
  FEditableTextBoxStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SEditableTextBox *)0x0) {
    SEditableTextBox::SetStyle(this_00,param_1);
  }
  return;
}

// StaticRegisterNativesUEditableTextBox @ 146a1e7e0

void __cdecl UEditableTextBox::StaticRegisterNativesUEditableTextBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UEditableTextBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a20470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UEditableTextBox::SynchronizeProperties(UEditableTextBox *this)

{
  SEditableTextBox *this_00;
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
  TOptional<ETextFlowDirection> local_398 [4];
  undefined1 local_390 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_388;
  ForAnyElementType FStack_380;
  ulonglong local_378;
  undefined1 local_370 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_368;
  ForAnyElementType FStack_360;
  ulonglong local_358;
  undefined1 local_350 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_348;
  ForAnyElementType FStack_340;
  ulonglong local_338;
  undefined1 local_330 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_328;
  ForAnyElementType FStack_320;
  ulonglong local_318;
  undefined1 local_310 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  ForAnyElementType FStack_2f0;
  ulonglong local_2e8;
  undefined1 local_2e0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c8;
  ForAnyElementType FStack_2c0;
  ulonglong local_2b8;
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  void *pvStack_2a0;
  undefined8 local_298;
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  void *pvStack_280;
  undefined8 local_278;
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  void *pvStack_260;
  undefined8 local_258;
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  FName local_248;
  FName local_240;
  TAttribute<bool> local_238;
  TAttribute<bool> local_218;
  TAttribute<bool> local_1f8;
  TAttribute<EVirtualKeyboardDismissAction> local_1d8;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
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
  if ((this->MyEditableTextBlock).Object != (SEditableTextBox *)0x0) {
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TextDelegate);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TextDelegate,
                 &local_68);
      local_248.ComparisonIndex.Value = *(uint *)&(this->TextDelegate).field_0x10;
      local_248.Number = *(uint *)&(this->TextDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TextDelegate);
      pTVar5 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_c8,pUVar4,&local_248);
      bVar2 = true;
      bVar3 = false;
    }
    else {
      local_310._0_8_ = (this->Text).TextData.Reference;
      if ((ITextData *)local_310._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_310._0_8_ + 8))(local_310._0_8_,local_250);
      }
      local_310._8_4_ = (this->Text).Flags;
      pTVar5 = (TAttribute<FText> *)local_310;
      local_310[0x10] = true;
      bVar2 = false;
      bVar3 = true;
      local_2e8 = 0;
      local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2f0.Data = (FScriptContainerElement *)0x0;
    }
    FText::FText((FText *)local_f8,&pTVar5->Value);
    local_f8[0x10] = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2f8,(FWriteAccessScope *)&local_1b8);
      if (((int)local_2e8 != 0) && (FStack_2f0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2f0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f0,0,0,0x10);
        local_2e8 = local_2e8 & 0xffffffff00000000;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (FStack_2f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2f0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
      if ((ITextData *)local_310._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_310._0_8_ + 0x10))();
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
      local_240.ComparisonIndex.Value = *(uint *)&(this->HintTextDelegate).field_0x10;
      local_240.Number = *(uint *)&(this->HintTextDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate);
      pTVar5 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_98,pUVar4,&local_240);
      bVar2 = true;
      bVar3 = false;
    }
    else {
      local_2e0._0_8_ = (this->HintText).TextData.Reference;
      if ((ITextData *)local_2e0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2e0._0_8_ + 8))(local_2e0._0_8_,local_24c);
      }
      local_2e0._8_4_ = (this->HintText).Flags;
      pTVar5 = (TAttribute<FText> *)local_2e0;
      local_2e0[0x10] = true;
      bVar2 = false;
      bVar3 = true;
      local_2b8 = 0;
      local_2c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2c0.Data = (FScriptContainerElement *)0x0;
    }
    FText::FText((FText *)local_128,&pTVar5->Value);
    local_128[0x10] = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_110,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2c8,(FWriteAccessScope *)&local_1a0);
      if (((int)local_2b8 != 0) && (FStack_2c0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2c0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c0,0,0,0x10);
        local_2b8 = local_2b8 & 0xffffffff00000000;
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      if (FStack_2c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2c0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c8.AccessDetector);
      if ((ITextData *)local_2e0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2e0._0_8_ + 0x10))();
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
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    SEditableTextBox::SetStyle((this->MyEditableTextBlock).Object,&this->WidgetStyle);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    SEditableTextBox::SetText((this->MyEditableTextBlock).Object,(TAttribute<FText> *)local_f8);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    SEditableTextBox::SetHintText((this->MyEditableTextBlock).Object,(TAttribute<FText> *)local_128)
    ;
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_238.Value = this->IsReadOnly;
    local_238.Getter._16_8_ = 0;
    local_238.bIsSet = true;
    local_238.Getter._0_8_ = 0;
    local_238.Getter._8_8_ = 0;
    SEditableTextBox::SetIsReadOnly((this->MyEditableTextBlock).Object,&local_238);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_218.Value = this->IsPassword;
    local_218.Getter._16_8_ = 0;
    local_218.bIsSet = true;
    local_218.Getter._0_8_ = 0;
    local_218.Getter._8_8_ = 0;
    SEditableTextBox::SetIsPassword((this->MyEditableTextBlock).Object,&local_218);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_2b0._0_4_ = this->MinimumDesiredWidth;
    local_2a8 = (undefined1  [8])0x0;
    pvStack_2a0 = (void *)0x0;
    local_2b0[4] = true;
    local_298 = 0;
    SEditableTextBox::SetMinimumDesiredWidth
              ((this->MyEditableTextBlock).Object,(TAttribute<float> *)local_2b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a8);
    if (pvStack_2a0 != (void *)0x0) {
      FMemory::Free(pvStack_2a0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2a8);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_390[0] = this->IsCaretMovedWhenGainFocus;
    local_378 = 0;
    local_390[1] = true;
    local_388.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_380.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetIsCaretMovedWhenGainFocus
              ((this->MyEditableTextBlock).Object,(TAttribute<bool> *)local_390);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_388,(FWriteAccessScope *)&local_188);
    if (((int)local_378 != 0) && (FStack_380.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_380.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_380,0,0,0x10);
      local_378 = local_378 & 0xffffffff00000000;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (FStack_380.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_380.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_388.AccessDetector);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_370[0] = this->SelectAllTextWhenFocused;
    local_358 = 0;
    local_370[1] = true;
    local_368.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_360.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetSelectAllTextWhenFocused
              ((this->MyEditableTextBlock).Object,(TAttribute<bool> *)local_370);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_368,(FWriteAccessScope *)&local_170);
    if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_360.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
      local_358 = local_358 & 0xffffffff00000000;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (FStack_360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_360.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_368.AccessDetector);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_350[0] = this->RevertTextOnEscape;
    local_338 = 0;
    local_350[1] = true;
    local_348.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_340.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetRevertTextOnEscape
              ((this->MyEditableTextBlock).Object,(TAttribute<bool> *)local_350);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_348,(FWriteAccessScope *)&local_158);
    if (((int)local_338 != 0) && (FStack_340.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_340.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_340,0,0,0x10);
      local_338 = local_338 & 0xffffffff00000000;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (FStack_340.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_340.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_348.AccessDetector);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_330[0] = this->ClearKeyboardFocusOnCommit;
    local_318 = 0;
    local_330[1] = true;
    local_328.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_320.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetClearKeyboardFocusOnCommit
              ((this->MyEditableTextBlock).Object,(TAttribute<bool> *)local_330);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_328,(FWriteAccessScope *)&local_140);
    if (((int)local_318 != 0) && (FStack_320.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_320.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_320,0,0,0x10);
      local_318 = local_318 & 0xffffffff00000000;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    if (FStack_320.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_320.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_328.AccessDetector);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_290[0] = this->SelectAllTextOnCommit;
    local_278 = 0;
    local_290[1] = true;
    local_288 = (undefined1  [8])0x0;
    pvStack_280 = (void *)0x0;
    SEditableTextBox::SetSelectAllTextOnCommit
              ((this->MyEditableTextBlock).Object,(TAttribute<bool> *)local_290);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
    if (pvStack_280 != (void *)0x0) {
      FMemory::Free(pvStack_280);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_288);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_1f8.Value = this->AllowContextMenu;
    local_1f8.Getter._16_8_ = 0;
    local_1f8.bIsSet = true;
    local_1f8.Getter._0_8_ = 0;
    local_1f8.Getter._8_8_ = 0;
    SEditableTextBox::SetAllowContextMenu((this->MyEditableTextBlock).Object,&local_1f8);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_1d8.Value = this->VirtualKeyboardDismissAction;
    local_1d8.Getter._16_8_ = 0;
    local_1d8.bIsSet = true;
    local_1d8.Getter._0_8_ = 0;
    local_1d8.Getter._8_8_ = 0;
    SEditableTextBox::SetVirtualKeyboardDismissAction((this->MyEditableTextBlock).Object,&local_1d8)
    ;
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    local_270._0_4_ = ZEXT14((this->Justification).Value);
    local_258 = 0;
    local_270[4] = true;
    local_268 = (undefined1  [8])0x0;
    pvStack_260 = (void *)0x0;
    SEditableTextBox::SetJustification
              ((this->MyEditableTextBlock).Object,(TAttribute<ETextJustify::Type> *)local_270);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
    if (pvStack_260 != (void *)0x0) {
      FMemory::Free(pvStack_260);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_268);
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    SEditableTextBox::SetOverflowPolicy((this->MyEditableTextBlock).Object,SUB82(&local_res8,0));
    if ((this->MyEditableTextBlock).Object == (SEditableTextBox *)0x0) {
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
    this_00 = (this->MyEditableTextBlock).Object;
    if ((this->ShapedTextOptions).bOverride_TextShapingMethod == 0) {
      local_res20[0].bIsSet = false;
      pTVar6 = local_res20;
    }
    else {
      local_res10[0].TypedValue = (this->ShapedTextOptions).TextShapingMethod;
      pTVar6 = local_res10;
      local_res10[0].bIsSet = true;
    }
    SEditableTextBox::SetTextShapingMethod(this_00,pTVar6);
    if ((this->ShapedTextOptions).bOverride_TextFlowDirection == '\0') {
      local_398[0].bIsSet = false;
      pTVar7 = local_398;
    }
    else {
      local_res18[0].TypedValue = (this->ShapedTextOptions).TextFlowDirection;
      pTVar7 = local_res18;
      local_res18[0].bIsSet = true;
    }
    SEditableTextBox::SetTextFlowDirection(this_00,pTVar7);
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

// execClearError @ 146a32e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execClearError(UObject *param_1,FFrame *param_2,void *param_3)

{
  SEditableTextBox *this;
  FText *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SEditableTextBox **)&param_1[0x5e].field_0x20;
  if (this != (SEditableTextBox *)0x0) {
    pFVar1 = FText::GetEmpty();
    SEditableTextBox::SetError(this,pFVar1);
    return;
  }
  return;
}

// execGetText @ 146a36310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execGetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetText((UEditableTextBox *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execHasError @ 146a36cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execHasError(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SEditableTextBox **)&param_1[0x5e].field_0x20 != (SEditableTextBox *)0x0) {
    bVar1 = SEditableTextBox::HasError(*(SEditableTextBox **)&param_1[0x5e].field_0x20);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetError @ 146a3c400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execSetError(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
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
              (local_28.TextData.Reference,local_res8);
  }
  local_18.Flags = local_28.Flags;
  if (*(SEditableTextBox **)&param_1[0x5e].field_0x20 != (SEditableTextBox *)0x0) {
    SEditableTextBox::SetError(*(SEditableTextBox **)&param_1[0x5e].field_0x20,&local_18);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))(local_18.TextData.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetForegroundColor @ 146a3cfb0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UEditableTextBox::execSetForegroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWidget *pSVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58._16_4_ = local_58._16_4_ & 0xffffff00;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pSVar2 = *(SWidget **)&param_1[0x5e].field_0x20;
  *(undefined8 *)&param_1[0x30].field_0x20 = local_68;
  *(undefined8 *)(param_1 + 0x31) = uStack_60;
  param_1[0x31].field_0x8 = local_58.bDestroyed;
  *(undefined3 *)&param_1[0x31].field_0x9 = local_58._17_3_;
  if (pSVar2 != (SWidget *)0x0) {
    local_30 = 0;
    local_18 = 0;
    local_2c = 1;
    local_40._0_8_ = local_68;
    local_40._8_8_ = uStack_60;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar2[1].PersistentState.InitialClipState.TypedValue.ScissorRect.TypedValue.
                 BottomRight,pSVar2,(TAttribute<FSlateColor> *)&local_40._s_0,None);
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
  }
  return;
}

// execSetHintText @ 146a3d470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execSetHintText(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetHintText((UEditableTextBox *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetIsPassword @ 146a3e2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execSetIsPassword(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SEditableTextBox *this;
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
  this = *(SEditableTextBox **)&param_1[0x5e].field_0x20;
  param_1[0x5d].field_0x1 = local_28.Value;
  if (this != (SEditableTextBox *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableTextBox::SetIsPassword(this,&local_28);
  }
  return;
}

// execSetIsReadOnly @ 146a3e4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execSetIsReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SEditableTextBox *this;
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
  this = *(SEditableTextBox **)&param_1[0x5e].field_0x20;
  *(bool *)(param_1 + 0x5d) = local_28.Value;
  if (this != (SEditableTextBox *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SEditableTextBox::SetIsReadOnly(this,&local_28);
  }
  return;
}

// execSetJustification @ 146a3e8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execSetJustification(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetJustification((UEditableTextBox *)param_1,(uint)local_res10[0]);
  return;
}

// execSetText @ 146a43260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEditableTextBox::execSetText(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetText((UEditableTextBox *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetTextOverflowPolicy @ 146a43790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEditableTextBox::execSetTextOverflowPolicy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SEditableTextBox *this;
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
  this = *(SEditableTextBox **)&param_1[0x5e].field_0x20;
  param_1[0x5d].field_0x13 = local_res8[0];
  if (this != (SEditableTextBox *)0x0) {
    local_res10 = local_res8[0];
    local_res11 = 1;
    SEditableTextBox::SetOverflowPolicy(this,SUB82(&local_res10,0));
  }
  return;
}

