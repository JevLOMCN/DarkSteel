// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 11

// FVirtualKeyboardEntry @ 1429b9fa0

/* WARNING: Enum "Type": Some values do not have unique names */

FVirtualKeyboardEntry * __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::FVirtualKeyboardEntry
          (FVirtualKeyboardEntry *this,FSlateEditableTextLayout *param_1)

{
  this->OwnerLayout = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVirtualKeyboardEntry_FSlateEditableTextLayout__6B_;
  return this;
}

// Create @ 1429de9e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> * __cdecl
FSlateEditableTextLayout::FVirtualKeyboardEntry::Create
          (TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *__return_storage_ptr__,
          FSlateEditableTextLayout *param_1)

{
  FVirtualKeyboardEntry *pFVar1;
  TRawPtrProxy<FSlateEditableTextLayout::FVirtualKeyboardEntry> local_res8;
  
  pFVar1 = ::operator_new(0x28);
  local_res8.Object = (FVirtualKeyboardEntry *)0x0;
  if (pFVar1 != (FVirtualKeyboardEntry *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FVirtualKeyboardEntry_FSlateEditableTextLayout__6B_;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->OwnerLayout = param_1;
    local_res8.Object = pFVar1;
  }
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1>::
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1><FSlateEditableTextLayout::FVirtualKeyboardEntry>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetHintText @ 1429eba90

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetHintText
          (FVirtualKeyboardEntry *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0xf16,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  FSlateEditableTextLayout::GetHintText(this->OwnerLayout,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelection @ 1429ee420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetSelection
          (FVirtualKeyboardEntry *this,int *param_1,int *param_2)

{
  FSlateEditableTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TOptional<FTextLocation> *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_res8;
  int iStackX_c;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xf09,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = this->OwnerLayout;
  local_res8 = (pFVar1->CursorInfo).CursorPosition.LineIndex;
  iVar6 = (pFVar1->CursorInfo).CursorPosition.Offset +
          (uint)((pFVar1->CursorInfo).CursorAlignment == Right);
  iStackX_c = 0;
  if (0 < iVar6) {
    iStackX_c = iVar6;
  }
  pTVar5 = (TOptional<FTextLocation> *)&local_res8;
  if ((pFVar1->SelectionStart).bIsSet != false) {
    pTVar5 = &pFVar1->SelectionStart;
  }
  iVar7 = (pTVar5->TypedValue).Offset;
  iVar8 = (pTVar5->TypedValue).LineIndex;
  iVar6 = iStackX_c;
  if (iVar8 == local_res8) {
    if (iVar7 < iStackX_c) {
      iVar6 = iVar7;
    }
  }
  else if (iVar8 < local_res8) {
    iVar6 = iVar7;
  }
  *param_1 = iVar6;
  if (iVar8 == local_res8) {
    if (iStackX_c < iVar7) {
      iStackX_c = iVar7;
    }
    *param_2 = iStackX_c;
  }
  else {
    if (local_res8 <= iVar8) {
      iStackX_c = iVar7;
    }
    *param_2 = iStackX_c;
  }
  return true;
}

// GetText @ 1429eeca0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetText
          (FVirtualKeyboardEntry *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0xf02,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  FSlateEditableTextLayout::GetText(this->OwnerLayout,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVirtualKeyboardOptions @ 1429efba0

/* WARNING: Enum "Type": Some values do not have unique names */

FVirtualKeyboardOptions __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetVirtualKeyboardOptions
          (FVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 in_DL;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0xf24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FVirtualKeyboardOptions)(bool)uVar3;
    }
  }
  (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 0x78))();
  return (FVirtualKeyboardOptions)(bool)in_DL;
}

// GetVirtualKeyboardType @ 1429efce0

/* WARNING: Enum "Type": Some values do not have unique names */

EKeyboardType __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetVirtualKeyboardType(FVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EKeyboardType EVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0xf1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  cVar3 = (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 8))();
  if (cVar3 != '\0') {
    return Keyboard_Password;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429efd43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar4 = (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 0x70))();
  return EVar4;
}

// IsIntegratedKeyboardEnabled @ 1429f5b30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::IsIntegratedKeyboardEnabled
          (FVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0xf32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001429f5b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 0x60))();
  return (bool)uVar3;
}

// IsMultilineEntry @ 1429f5c00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::IsMultilineEntry(FVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0xf2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001429f5c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 0x10))();
  return (bool)uVar3;
}

// SetSelectionFromVirtualKeyboard @ 142a0ba10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::SetSelectionFromVirtualKeyboard
          (FVirtualKeyboardEntry *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0xef5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->OwnerLayout->bSelectionChangedExternally = true;
  this->OwnerLayout->ExternalSelectionStart = param_1;
  this->OwnerLayout->ExternalSelectionEnd = param_2;
  return;
}

// SetTextFromVirtualKeyboard @ 142a0ced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::SetTextFromVirtualKeyboard
          (FVirtualKeyboardEntry *this,FText *param_1,ETextEntryType param_2)

{
  FSlateEditableTextLayout *pFVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  undefined1 local_res18 [16];
  FReadAccessScope local_38;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xed1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = this->OwnerLayout;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar1->BoundText).Getter,
             &local_38);
  if (((*(int *)&(pFVar1->BoundText).Getter.field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(pFVar1->BoundText).Getter.field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar2 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TAttribute<FText>::Set<FText>(&this->OwnerLayout->BoundText,param_1);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  pFVar1 = this->OwnerLayout;
  pIVar3 = (param_1->TextData).Reference;
  pIVar4 = (pFVar1->VirtualKeyboardText).TextData.Reference;
  if (pIVar4 != pIVar3) {
    (pFVar1->VirtualKeyboardText).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (pFVar1->VirtualKeyboardText).Flags = param_1->Flags;
  this->OwnerLayout->bTextChangedByVirtualKeyboard = true;
  if (param_2 == TextEntryAccepted) {
    cVar7 = (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 0x88))();
    if ((cVar7 != '\x01') &&
       (cVar7 = (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 0x88))(), cVar7 != '\x02'))
    {
      return;
    }
    this->OwnerLayout->VirtualKeyboardTextCommitType = OnEnter;
  }
  else {
    if (param_2 != TextEntryCanceled) {
      return;
    }
    cVar7 = (**(code **)((longlong)*this->OwnerLayout->OwnerWidget + 0x88))();
    if (cVar7 != '\x02') {
      return;
    }
    this->OwnerLayout->VirtualKeyboardTextCommitType = Default;
  }
  this->OwnerLayout->bTextCommittedByVirtualKeyboard = true;
  return;
}

