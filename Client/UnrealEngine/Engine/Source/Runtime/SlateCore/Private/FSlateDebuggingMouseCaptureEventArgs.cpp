// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateDebuggingMouseCaptureEventArgs @ 14242d4f0

FSlateDebuggingMouseCaptureEventArgs * __thiscall
FSlateDebuggingMouseCaptureEventArgs::FSlateDebuggingMouseCaptureEventArgs
          (FSlateDebuggingMouseCaptureEventArgs *this,bool param_1,uint param_2,uint param_3,
          TSharedPtr<SWidget_const_,1> *param_4)

{
  this->CaptureWidget = param_4;
  this->Captured = param_1;
  this->UserIndex = param_2;
  this->PointerIndex = param_3;
  return this;
}

// ToText @ 142453d70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FSlateDebuggingMouseCaptureEventArgs::ToText
          (FSlateDebuggingMouseCaptureEventArgs *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  FText *pFVar4;
  FString *pFVar5;
  FTextFormat *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined4 local_res8 [2];
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_res8[0] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&StateChangeEventFormat,L"SlateDebugger",L"StateChangeEventFormat",
               L"{0}({1}:{2}) : {3}");
    atexit(`FSlateDebuggingMouseCaptureEventArgs::ToText'::__l2::
           _dynamic_atexit_destructor_for__StateChangeEventFormat__);
    _Init_thread_footer(&::_TSS0);
  }
  bVar1 = this->Captured;
  pwVar8 = L"Mouse Captured";
  pwVar7 = L"MouseCaptured";
  pFVar4 = &local_38;
  if (bVar1 == false) {
    pwVar8 = L"Mouse Capture Lost";
    pwVar7 = L"MouseCaptureLost";
    pFVar4 = &local_28;
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText(pFVar4,L"SlateDebugger",pwVar7,pwVar8);
  FText::FText(&local_48,pFVar4);
  if (((2U - (bVar1 != false) & 2) != 0) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if ((bVar1 != false) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar5 = FReflectionMetaData::GetWidgetDebugInfo((FString *)&local_28,this->CaptureWidget->Object)
  ;
  FText::FromString(&local_58,pFVar5);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  local_38.TextData.Reference = local_58.TextData.Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res8);
  }
  uVar2 = this->PointerIndex;
  uVar3 = this->UserIndex;
  local_38.Flags = local_58.Flags;
  local_28.TextData.Reference = local_48.TextData.Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res8);
  }
  local_28.Flags = local_48.Flags;
  pFVar6 = FTextFormat::FTextFormat(&local_18,&StateChangeEventFormat,Default);
  FText::Format<FText,unsigned_int,unsigned_int,FText>
            (__return_storage_ptr__,pFVar6,&local_28,uVar3,uVar2,&local_38);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

