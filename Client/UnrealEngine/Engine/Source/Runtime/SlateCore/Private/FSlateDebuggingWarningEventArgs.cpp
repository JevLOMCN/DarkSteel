// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateDebuggingWarningEventArgs @ 14242d540

FSlateDebuggingWarningEventArgs * __thiscall
FSlateDebuggingWarningEventArgs::FSlateDebuggingWarningEventArgs
          (FSlateDebuggingWarningEventArgs *this,FText *param_1,TSharedPtr<SWidget,1> *param_2)

{
  this->Warning = param_1;
  this->OptionalContextWidget = param_2;
  return this;
}

// ToText @ 142454350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FSlateDebuggingWarningEventArgs::ToText
          (FSlateDebuggingWarningEventArgs *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FString *pFVar2;
  FTextFormat *pFVar3;
  undefined1 local_res8 [8];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&InputEventFormat,L"SlateDebugger",L"WarningEventFormat",L"{0} (Widget: {1})");
      atexit(`FSlateDebuggingWarningEventArgs::ToText'::__l2::
             _dynamic_atexit_destructor_for__InputEventFormat__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar2 = FReflectionMetaData::GetWidgetDebugInfo
                     ((FString *)&local_28,this->OptionalContextWidget->Object);
  FText::FromString(&local_48,pFVar2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  local_38.TextData.Reference = local_48.TextData.Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res8);
  }
  pFVar1 = this->Warning;
  local_38.Flags = local_48.Flags;
  local_28.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_28.Flags = pFVar1->Flags;
  pFVar3 = FTextFormat::FTextFormat(&local_18,&InputEventFormat,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar3,&local_28,&local_38);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

