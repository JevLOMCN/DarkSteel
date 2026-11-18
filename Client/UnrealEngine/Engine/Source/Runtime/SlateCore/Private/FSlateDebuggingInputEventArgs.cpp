// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateDebuggingInputEventArgs @ 14242d480

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDebuggingInputEventArgs * __thiscall
FSlateDebuggingInputEventArgs::FSlateDebuggingInputEventArgs
          (FSlateDebuggingInputEventArgs *this,ESlateDebuggingInputEvent param_1,
          FInputEvent *param_2,FReply *param_3,TSharedPtr<SWidget,1> *param_4,FString *param_5)

{
  this->HandlerWidget = param_4;
  this->AdditionalContent = param_5;
  this->InputEventType = param_1;
  this->InputEvent = param_2;
  this->Reply = param_3;
  return this;
}

// ToText @ 142453af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FSlateDebuggingInputEventArgs::ToText
          (FSlateDebuggingInputEventArgs *this,FText *__return_storage_ptr__)

{
  FInputEvent *pFVar1;
  UPackage *pUVar2;
  FText *pFVar3;
  FString *pFVar4;
  FTextFormat *pFVar5;
  undefined1 local_res8 [8];
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&InputEventFormat,L"SlateDebugger",L"InputEventFormat",
                 L"{0} - ({1}) - ({2}) - [{3}]");
      atexit(`FSlateDebuggingInputEventArgs::ToText'::__l2::
             _dynamic_atexit_destructor_for__InputEventFormat__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent,(UObject *)pUVar2,
                       L"ESlateDebuggingInputEvent");
  }
  UEnum::GetDisplayNameTextByValue
            (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton,&local_48,
             (ulonglong)this->InputEventType);
  pFVar1 = this->InputEvent;
  if (pFVar1 == (FInputEvent *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"SlateDebugger",L"NullEvent",L"<null event>");
    FText::FText(&local_88,pFVar3);
  }
  else {
    pFVar3 = (FText *)(**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_98);
    FText::FText(&local_88,pFVar3);
    local_78.TextData.Reference = local_98.TextData.Reference;
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FText::FromString(&local_58,this->AdditionalContent);
  pFVar4 = FReflectionMetaData::GetWidgetDebugInfo((FString *)&local_98,this->HandlerWidget->Object)
  ;
  FText::FromString(&local_68,pFVar4);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_98.TextData.Reference);
  }
  local_38.TextData.Reference = local_58.TextData.Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res8);
  }
  local_38.Flags = local_58.Flags;
  local_28.TextData.Reference = local_88.TextData.Reference;
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 8))
              (local_88.TextData.Reference,local_res8);
  }
  local_28.Flags = local_88.Flags;
  local_78.TextData.Reference = local_68.TextData.Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res8);
  }
  local_78.Flags = local_68.Flags;
  local_98.TextData.Reference = local_48.TextData.Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res8);
  }
  local_98.Flags = local_48.Flags;
  pFVar5 = FTextFormat::FTextFormat(&local_18,&InputEventFormat,Default);
  FText::Format<FText,FText,FText,FText>
            (__return_storage_ptr__,pFVar5,&local_98,&local_78,&local_28,&local_38);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

