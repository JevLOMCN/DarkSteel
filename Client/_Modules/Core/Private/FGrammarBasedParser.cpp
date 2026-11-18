// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ParseCmd @ 1418ea900

TStringView<wchar_t> * __thiscall
_anon_06B1A1F9::FGrammarBasedParser::ParseCmd
          (FGrammarBasedParser *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  EGrammarBasedParseErrorCode *pEVar6;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  pwVar4 = this->Cursor;
  if (*pwVar4 == L'\"') {
    pwVar1 = pwVar4 + 1;
    this->Cursor = pwVar1;
    if ((this->BehaviourFlags & AllowQuotedCommands) == None) {
      (this->Result).At = pwVar4;
      *(undefined8 *)&__return_storage_ptr__->Size = 0;
      __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
      (this->Result).ErrorCode = DisallowedQuotedCommand;
      return __return_storage_ptr__;
    }
    if ((int)(this->Result).ErrorCode < 2) {
      while (*this->Cursor != L'\0') {
        iVar2 = iswspace(*this->Cursor);
        while (iVar2 != 0) {
          this->Cursor = this->Cursor + 1;
          iVar2 = iswspace(*this->Cursor);
        }
        if (*this->Cursor == L'\"') break;
        ParseCmd(this,&local_28);
        if ((local_28.Size == 0) || (1 < (int)(this->Result).ErrorCode)) break;
      }
    }
    if (*this->Cursor == L'\"') {
      pwVar4 = this->Cursor + 1;
      __return_storage_ptr__->DataPtr = pwVar1;
      this->Cursor = pwVar4;
      __return_storage_ptr__->Size = (int)((longlong)pwVar4 - (longlong)pwVar1 >> 1);
      return __return_storage_ptr__;
    }
    (this->Result).At = pwVar4;
    (this->Result).ErrorCode = UnBalancedQuote;
    *(undefined8 *)&__return_storage_ptr__->Size = 0;
    __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
    __return_storage_ptr__->Size = 0;
    return __return_storage_ptr__;
  }
  iVar2 = iswspace(*pwVar4);
  while (iVar2 != 0) {
    this->Cursor = this->Cursor + 1;
    iVar2 = iswspace(*this->Cursor);
  }
  pwVar1 = this->Cursor;
  if (*pwVar1 == L'/') {
    pwVar5 = pwVar1 + 1;
LAB_1418eaa57:
    this->Cursor = pwVar5;
  }
  else {
    pwVar5 = pwVar1;
    if (*pwVar1 == L'-') {
      pwVar5 = pwVar1 + 1;
      this->Cursor = pwVar5;
      if (*pwVar5 == L'-') {
        pwVar5 = pwVar1 + 2;
        goto LAB_1418eaa57;
      }
    }
  }
  iVar2 = iswalpha(*pwVar5);
  if (((iVar2 != 0) || (*this->Cursor == L'_')) && ((int)(this->Result).ErrorCode < 2)) {
    while( true ) {
      if (*this->Cursor == L'\0') break;
      pwVar5 = this->Cursor + 1;
      this->Cursor = pwVar5;
      iVar2 = iswalnum(*pwVar5);
      if ((((iVar2 == 0) && (*this->Cursor != L'_')) && (*this->Cursor != L'.')) ||
         (1 < (int)(this->Result).ErrorCode)) break;
    }
  }
  iVar2 = (int)((longlong)this->Cursor - (longlong)pwVar1 >> 1);
  local_28.Size = iVar2;
  if ((int)(this->Result).ErrorCode < 2) {
    local_28.DataPtr = pwVar1;
    iVar3 = iswspace(*this->Cursor);
    while (iVar3 != 0) {
      this->Cursor = this->Cursor + 1;
      iVar3 = iswspace(*this->Cursor);
    }
    pEVar6 = &(this->Result).ErrorCode;
    if (*this->Cursor == L'=') {
      this->Cursor = this->Cursor + 1;
      ParseValue(this,&local_38);
      if (1 < (int)*pEVar6) goto LAB_1418eab22;
    }
    else if (iVar2 == 0) {
      ParseValue(this,&local_38);
      if (1 < (int)*pEVar6) goto LAB_1418eab22;
      local_28.Size = 0;
      local_28._12_4_ = 0;
      local_28.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_38.Size = 0;
      local_38._12_4_ = 0;
      local_38.DataPtr = (wchar_t *)0x0;
    }
    (**(code **)&this->OnCmd)(*(undefined8 *)&(this->OnCmd).field_0x8,&local_28,&local_38);
    pwVar1 = this->Cursor;
    __return_storage_ptr__->DataPtr = pwVar4;
    __return_storage_ptr__->Size = (int)((longlong)pwVar1 - (longlong)pwVar4 >> 1);
  }
  else {
LAB_1418eab22:
    *(undefined8 *)&__return_storage_ptr__->Size = 0;
    __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  }
  return __return_storage_ptr__;
}

// ParseValue @ 1418ef680

TStringView<wchar_t> * __thiscall
_anon_06B1A1F9::FGrammarBasedParser::ParseValue
          (FGrammarBasedParser *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  wchar_t wVar1;
  EGrammarBasedParseErrorCode EVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar4 = iswspace(*this->Cursor);
  while (iVar4 != 0) {
    this->Cursor = this->Cursor + 1;
    iVar4 = iswspace(*this->Cursor);
  }
  pwVar3 = this->Cursor;
  if (*pwVar3 == L'\"') {
    pwVar5 = pwVar3 + 1;
    this->Cursor = pwVar5;
    wVar1 = *pwVar5;
    while ((wVar1 != L'\0' && (wVar1 != L'\"'))) {
      pwVar5 = pwVar5 + 1;
      this->Cursor = pwVar5;
      wVar1 = *pwVar5;
    }
    if (*pwVar5 != L'\"') {
      iVar4 = 0;
      (this->Result).At = pwVar3;
      (this->Result).ErrorCode = UnBalancedQuote;
      *(undefined8 *)&__return_storage_ptr__->Size = 0;
      __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
      goto LAB_1418ef777;
    }
    pwVar5 = pwVar5 + 1;
    this->Cursor = pwVar5;
  }
  else {
    EVar2 = (this->Result).ErrorCode;
    pwVar5 = pwVar3;
    while (((((int)EVar2 < 2 && (*pwVar5 != L'\0')) && (iVar4 = iswspace(*pwVar5), iVar4 == 0)) &&
           (*this->Cursor != L'\"'))) {
      pwVar5 = this->Cursor + 1;
      this->Cursor = pwVar5;
      EVar2 = (this->Result).ErrorCode;
    }
    pwVar5 = this->Cursor;
  }
  __return_storage_ptr__->DataPtr = pwVar3;
  iVar4 = (int)((longlong)pwVar5 - (longlong)pwVar3 >> 1);
LAB_1418ef777:
  __return_storage_ptr__->Size = iVar4;
  return __return_storage_ptr__;
}

