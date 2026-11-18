// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FSlateDebuggingFocusEventArgs @ 14242d450

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDebuggingFocusEventArgs * __thiscall
FSlateDebuggingFocusEventArgs::FSlateDebuggingFocusEventArgs
          (FSlateDebuggingFocusEventArgs *this,ESlateDebuggingFocusEvent param_1,
          FFocusEvent *param_2,FWeakWidgetPath *param_3,TSharedPtr<SWidget,1> *param_4,
          FWidgetPath *param_5,TSharedPtr<SWidget,1> *param_6)

{
  this->OldFocusedWidget = param_4;
  this->NewFocusedWidgetPath = param_5;
  this->NewFocusedWidget = param_6;
  this->FocusEventType = param_1;
  this->FocusEvent = param_2;
  this->OldFocusedWidgetPath = param_3;
  return this;
}

// ToText @ 142453780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FSlateDebuggingFocusEventArgs::ToText
          (FSlateDebuggingFocusEventArgs *this,FText *__return_storage_ptr__)

{
  ESlateDebuggingFocusEvent EVar1;
  uint uVar2;
  FText *pFVar3;
  FString *pFVar4;
  FTextFormat *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
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
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&FocusEventFormat,L"SlateDebugger",L"FocusEventFormat",L"{0}({1}:{2}) - {3} -> {4}");
    atexit(`FSlateDebuggingFocusEventArgs::ToText'::__l2::
           _dynamic_atexit_destructor_for__FocusEventFormat__);
    _Init_thread_footer(&::_TSS0);
  }
  FText::FText(&local_78);
  EVar1 = this->FocusEventType;
  if (EVar1 == FocusChanging) {
    pwVar7 = L"Focus Changing";
    pwVar6 = L"FocusChanging";
LAB_14245381d:
    pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_98,L"SlateDebugger",pwVar6,pwVar7);
    FText::operator=(&local_78,pFVar3);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  else {
    if (EVar1 == FocusLost) {
      pwVar7 = L"Focus Lost";
      pwVar6 = L"FocusLost";
      goto LAB_14245381d;
    }
    if (EVar1 == FocusReceived) {
      pwVar7 = L"Focus Received";
      pwVar6 = L"FocusReceived";
      goto LAB_14245381d;
    }
    `FSlateDebuggingFocusEventArgs::ToText'::__l4::<lambda_1>::operator()(local_res8);
  }
  FText::FText(&local_88);
  switch(this->FocusEvent->Cause) {
  case Mouse:
    pwVar7 = L"Mouse";
    pwVar6 = L"FocusCause_Mouse";
    break;
  case Navigation:
    pwVar7 = L"Navigation";
    pwVar6 = L"FocusCause_Navigation";
    break;
  case SetDirectly:
    pwVar7 = L"SetDirectly";
    pwVar6 = L"FocusCause_SetDirectly";
    break;
  case Cleared:
    pwVar7 = L"Cleared";
    pwVar6 = L"FocusCause_Cleared";
    break;
  case OtherWidgetLostFocus:
    pwVar7 = L"OtherWidgetLostFocus";
    pwVar6 = L"FocusCause_OtherWidgetLostFocus";
    break;
  case WindowActivate:
    pwVar7 = L"WindowActivate";
    pwVar6 = L"FocusCause_WindowActivate";
    break;
  default:
    `FSlateDebuggingFocusEventArgs::ToText'::__l6::<lambda_2>::operator()(local_res8);
    goto LAB_14245390a;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_98,L"SlateDebugger",pwVar6,pwVar7);
  FText::operator=(&local_88,pFVar3);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
LAB_14245390a:
  uVar2 = this->FocusEvent->UserIndex;
  pFVar4 = FReflectionMetaData::GetWidgetDebugInfo
                     ((FString *)&local_98,this->OldFocusedWidget->Object);
  FText::FromString(&local_58,pFVar4);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_98.TextData.Reference);
  }
  pFVar4 = FReflectionMetaData::GetWidgetDebugInfo
                     ((FString *)&local_98,this->NewFocusedWidget->Object);
  FText::FromString(&local_68,pFVar4);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_98.TextData.Reference);
  }
  local_48.TextData.Reference = local_68.TextData.Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res8);
  }
  local_48.Flags = local_68.Flags;
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
  local_98.TextData.Reference = local_78.TextData.Reference;
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 8))
              (local_78.TextData.Reference,local_res8);
  }
  local_98.Flags = local_78.Flags;
  pFVar5 = FTextFormat::FTextFormat(&local_18,&FocusEventFormat,Default);
  FText::Format<FText,int,FText,FText,FText>
            (__return_storage_ptr__,pFVar5,&local_98,uVar2,&local_28,&local_38,&local_48);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 15048c8e0

bool __thiscall `FSlateDebuggingFocusEventArgs::ToText'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3136527668950859683>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3136527668950859683>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ce00

bool __thiscall `FSlateDebuggingFocusEventArgs::ToText'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3136527668950859658>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3136527668950859658>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

