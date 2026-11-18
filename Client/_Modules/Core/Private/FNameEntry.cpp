// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// FNameEntry @ 141a6ce90

FNameEntry * __thiscall FNameEntry::FNameEntry(FNameEntry *this,FClangKeepDebugInfo param_1)

{
  return this;
}

// AppendAnsiNameToString @ 141a758a0

void __thiscall
FNameEntry::AppendAnsiNameToString(FNameEntry *this,TStringBuilderBase<char> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  if (this.bIsWide != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsWide()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xa08,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = this.Len;
  if (param_1->End < param_1->CurPos + uVar4) {
    TStringBuilderBase<char>::Extend(param_1,uVar4);
  }
  iVar1 = *(int *)&param_1->CurPos;
  param_1->CurPos = param_1->CurPos + uVar4;
  memcpy(param_1->Base + (iVar1 - *(int *)&param_1->Base),&this->field1_0x2,this.Len);
  return;
}

// AppendNameToPathString @ 141a75a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNameEntry::AppendNameToPathString(FNameEntry *this,FString *param_1)

{
  FNameEntryHeader FVar1;
  FNameEntryHeader *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_848 [32];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  if (this->bIsWide == 0) {
    GetAnsiName(this,(char (*) [1024])local_828);
    uVar4 = (ulonglong)(this.Len + 1);
    do {
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar3;
      local_828[uVar4] = (short)*(char *)((longlong)local_828 + uVar4);
    } while (uVar3 != 0);
  }
  else {
    uVar4 = this->Len;
    memcpy(local_828,&this->field1_0x2,uVar4 * 2);
    local_828[uVar4] = L'\0';
  }
  ::FString::PathAppend(param_1,local_828,this->Len);
  return;
}

// AppendNameToString @ 141a75b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNameEntry::AppendNameToString(FNameEntry *this,TStringBuilderBase<char8_t> *param_1)

{
  code *pcVar1;
  ushort uVar2;
  FNameEntryHeader *pFVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
  FNameEntry_u_2 *pFVar7;
  ulonglong uVar8;
  size_t _Size;
  undefined1 auStack_848 [32];
  FNameEntry_u_2 local_828;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  if (this->bIsWide == 0) {
    uVar8 = this->Len;
    if (param_1->End < param_1->CurPos + uVar8) {
      TStringBuilderBase<char8_t>::Extend(param_1,uVar8);
    }
    iVar5 = *(int *)&param_1->CurPos;
    param_1->CurPos = param_1->CurPos + uVar8;
    memcpy(param_1->Base + (iVar5 - *(int *)&param_1->Base),&this->field1_0x2,this.Len);
    return;
  }
  if (((ushort)(this->Len << 6) < 0x40) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.Len != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x976,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = &this->field1_0x2;
  uVar2 = this->Len;
  if (this.bIsWide == 0) {
    if (pFVar7 != (FNameEntry_u_2 *)0x0) goto LAB_141a75bb5;
    _Size = this->Len;
  }
  else {
    if (pFVar7 != (FNameEntry_u_2 *)0x0) goto LAB_141a75bb5;
    _Size = this->Len * 2;
  }
  memcpy(&local_828,(void *)0x0,_Size);
  pFVar7 = &local_828;
LAB_141a75bb5:
  iVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pFVar7->WideName,(uint)uVar2);
  if (param_1->End < param_1->CurPos + iVar5) {
    TStringBuilderBase<char8_t>::Extend(param_1,(longlong)iVar5);
  }
  if (uVar2 != 0) {
    puVar6 = UE::Core::Private::Convert(param_1->CurPos,iVar5,pFVar7->WideName,(uint)uVar2);
    param_1->CurPos = puVar6;
  }
  return;
}

// AppendNameToString @ 141a75c70

void __thiscall
FNameEntry::AppendNameToString(FNameEntry *this,TStringBuilderBase<wchar_t> *param_1)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  
  uVar3 = this.Len;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(param_1,uVar3);
  }
  pwVar5 = param_1->CurPos;
  param_1->CurPos = pwVar5 + uVar3;
  pwVar5 = param_1->Base + (int)((longlong)pwVar5 - (longlong)param_1->Base >> 1);
  uVar3 = this.Len;
  if (this.bIsWide != 0) {
    memcpy(pwVar5,&this->field1_0x2,uVar3 * 2);
    return;
  }
  memcpy(pwVar5,&this->field1_0x2,uVar3);
  uVar2 = this.Len;
  uVar3 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    lVar4 = uVar3 + (longlong)pwVar5;
    pwVar5 = pwVar5 + uVar3;
    do {
      pcVar1 = (char *)(lVar4 + -1);
      lVar4 = lVar4 + -1;
      pwVar5[-1] = (short)*pcVar1;
      pwVar5 = pwVar5 + -1;
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 != 0);
  }
  return;
}

// AppendNameToString @ 141a75d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNameEntry::AppendNameToString(FNameEntry *this,FString *param_1)

{
  FNameEntryHeader FVar1;
  FNameEntryHeader *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_848 [32];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  if (this->bIsWide == 0) {
    GetAnsiName(this,(char (*) [1024])local_828);
    uVar4 = (ulonglong)(this.Len + 1);
    do {
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar3;
      local_828[uVar4] = (short)*(char *)((longlong)local_828 + uVar4);
    } while (uVar3 != 0);
  }
  else {
    uVar4 = this->Len;
    memcpy(local_828,&this->field1_0x2,uVar4 * 2);
    local_828[uVar4] = L'\0';
  }
  ::FString::AppendChars(param_1,local_828,this->Len);
  return;
}

// AppendNameToString @ 141a75e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNameEntry::AppendNameToString(FNameEntry *this,FUtf8String *param_1)

{
  FNameEntryHeader FVar1;
  FNameEntryHeader *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_848 [32];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  if (this->bIsWide == 0) {
    GetAnsiName(this,(char (*) [1024])local_828);
    uVar4 = (ulonglong)(this.Len + 1);
    do {
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar3;
      local_828[uVar4] = (short)*(char *)((longlong)local_828 + uVar4);
    } while (uVar3 != 0);
  }
  else {
    uVar4 = this->Len;
    memcpy(local_828,&this->field1_0x2,uVar4 * 2);
    local_828[uVar4] = L'\0';
  }
  FUtf8String::AppendChars(param_1,local_828,this->Len);
  return;
}

// CopyAndConvertUnterminatedName @ 141a7ca40

void __thiscall
FNameEntry::CopyAndConvertUnterminatedName(FNameEntry *this,wchar_t *param_1,uint param_2)

{
  char *pcVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  uint uVar4;
  ulonglong _Size;
  
  _Size = (ulonglong)param_2;
  if (this.bIsWide != 0) {
    memcpy(param_1,&this->field1_0x2,_Size * 2);
    return;
  }
  memcpy(param_1,&this->field1_0x2,_Size);
  if (param_2 != 0) {
    lVar2 = _Size + (longlong)param_1;
    pwVar3 = param_1 + _Size;
    do {
      pcVar1 = (char *)(lVar2 + -1);
      lVar2 = lVar2 + -1;
      pwVar3[-1] = (short)*pcVar1;
      pwVar3 = pwVar3 + -1;
      uVar4 = (int)_Size - 1;
      _Size = (ulonglong)uVar4;
    } while (uVar4 != 0);
  }
  return;
}

// CopyUnterminatedName @ 141a7cab0

void __thiscall FNameEntry::CopyUnterminatedName(FNameEntry *this,char *param_1,uint param_2)

{
  memcpy(param_1,&this->field1_0x2,(ulonglong)param_2);
  return;
}

// CopyUnterminatedName @ 141a7cad0

void __thiscall FNameEntry::CopyUnterminatedName(FNameEntry *this,wchar_t *param_1,uint param_2)

{
  memcpy(param_1,&this->field1_0x2,(ulonglong)param_2 * 2);
  return;
}

// DebugDump @ 141a7d3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNameEntry::DebugDump(FNameEntry *this,FOutputDevice *param_1)

{
  char *pcVar1;
  ushort uVar2;
  FNameEntryHeader *pFVar3;
  FNameEntryHeader FVar4;
  longlong lVar5;
  uint uVar6;
  wchar_t *pwVar7;
  undefined1 auStack_838 [32];
  wchar_t local_818 [1024];
  ulonglong local_18;
  ulonglong _Size;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  uVar2 = this->Len;
  _Size = (ulonglong)uVar2;
  if (this->bIsWide == 0) {
    memcpy(local_818,&this->field1_0x2,_Size);
    if (uVar2 != 0) {
      lVar5 = (longlong)local_818 + _Size;
      pwVar7 = local_818 + _Size;
      do {
        pcVar1 = (char *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        pwVar7[-1] = (short)*pcVar1;
        pwVar7 = pwVar7 + -1;
        uVar6 = (int)_Size - 1;
        _Size = (ulonglong)uVar6;
      } while (uVar6 != 0);
    }
  }
  else {
    memcpy(local_818,&this->field1_0x2,_Size * 2);
  }
  local_818[this->Len] = L'\0';
  FOutputDevice::Log(param_1,local_818);
  return;
}

// GetAnsiName @ 141a807c0

void __thiscall FNameEntry::GetAnsiName(FNameEntry *this,char (*param_1) [1024])

{
  code *pcVar1;
  bool bVar2;
  
  if (this.bIsWide != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsWide()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x99e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy(param_1,&this->field1_0x2,this.Len);
  (*param_1)[this.Len] = '\0';
  return;
}

// GetName @ 141a80b90

void __thiscall FNameEntry::GetName(FNameEntry *this,wchar_t (*param_1) [1024])

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  ulonglong _Size;
  
  uVar2 = this.Len;
  _Size = (ulonglong)uVar2;
  if (this.bIsWide == 0) {
    memcpy(param_1,&this->field1_0x2,_Size);
    if (uVar2 != 0) {
      lVar3 = (longlong)*param_1 + _Size;
      pwVar4 = *param_1 + _Size;
      do {
        pcVar1 = (char *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        pwVar4[-1] = (short)*pcVar1;
        pwVar4 = pwVar4 + -1;
        uVar2 = (int)_Size - 1;
        _Size = (ulonglong)uVar2;
      } while (uVar2 != 0);
    }
  }
  else {
    memcpy(param_1,&this->field1_0x2,(ulonglong)uVar2 * 2);
  }
  (*param_1)[this.Len] = L'\0';
  return;
}

// GetNameLengthUtf8 @ 141a80d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FNameEntry::GetNameLengthUtf8(FNameEntry *this)

{
  FNameEntryHeader *pFVar1;
  FNameEntry_u_2 *pFVar2;
  uint uVar3;
  undefined1 auStack_838 [32];
  FNameEntry_u_2 local_818;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  uVar3 = this->Len;
  if (this->bIsWide != 0) {
    pFVar2 = &this->field1_0x2;
    if (pFVar2 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_818,(void *)0x0,this->Len * 2);
      pFVar2 = &local_818;
    }
    uVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pFVar2->WideName,uVar3);
  }
  return uVar3;
}

// GetPlainNameString @ 141a810f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FNameEntry::GetPlainNameString(FNameEntry *this,FString *__return_storage_ptr__)

{
  FNameEntryHeader *pFVar1;
  FNameEntry_u_2 *pFVar2;
  uint uVar3;
  undefined1 auStack_838 [32];
  FNameEntry_u_2 local_818;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  pFVar2 = &this->field1_0x2;
  uVar3 = this->Len;
  if (this->bIsWide == 0) {
    if (pFVar2 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_818,(void *)0x0,this->Len);
      pFVar2 = &local_818;
    }
    ::FString::ConstructFromPtrSize(__return_storage_ptr__,pFVar2->AnsiName,uVar3);
  }
  else {
    if (pFVar2 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_818,(void *)0x0,this->Len * 2);
      pFVar2 = &local_818;
    }
    ::FString::ConstructFromPtrSize(__return_storage_ptr__,pFVar2->WideName,uVar3);
  }
  return __return_storage_ptr__;
}

// GetPlainNameUtf8String @ 141a811e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __thiscall
FNameEntry::GetPlainNameUtf8String(FNameEntry *this,FUtf8String *__return_storage_ptr__)

{
  FNameEntryHeader *pFVar1;
  FNameEntry_u_2 *pFVar2;
  uint uVar3;
  undefined1 auStack_838 [32];
  FNameEntry_u_2 local_818;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  pFVar2 = &this->field1_0x2;
  uVar3 = this->Len;
  if (this->bIsWide == 0) {
    if (pFVar2 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_818,(void *)0x0,this->Len);
      pFVar2 = &local_818;
    }
    FUtf8String::ConstructFromPtrSize(__return_storage_ptr__,pFVar2->AnsiName,uVar3);
  }
  else {
    if (pFVar2 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_818,(void *)0x0,this->Len * 2);
      pFVar2 = &local_818;
    }
    FUtf8String::ConstructFromPtrSize(__return_storage_ptr__,pFVar2->WideName,uVar3);
  }
  return __return_storage_ptr__;
}

// GetSizeInBytes @ 141a812c0

int __thiscall FNameEntry::GetSizeInBytes(FNameEntry *this)

{
  return (this.bIsWide + 1) * this.Len + 3 & 0xfffffffe;
}

// GetUnterminatedName @ 141a82ac0

void __thiscall FNameEntry::GetUnterminatedName(FNameEntry *this,wchar_t *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  ulonglong _Size;
  
  uVar2 = this.Len;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  _Size = (ulonglong)param_2;
  if (this.bIsWide != 0) {
    memcpy(param_1,&this->field1_0x2,_Size * 2);
    return;
  }
  memcpy(param_1,&this->field1_0x2,_Size);
  if (param_2 != 0) {
    lVar3 = _Size + (longlong)param_1;
    pwVar4 = param_1 + _Size;
    do {
      pcVar1 = (char *)(lVar3 + -1);
      lVar3 = lVar3 + -1;
      pwVar4[-1] = (short)*pcVar1;
      pwVar4 = pwVar4 + -1;
      uVar2 = (int)_Size - 1;
      _Size = (ulonglong)uVar2;
    } while (uVar2 != 0);
  }
  return;
}

// GetWideName @ 141a82c60

void __thiscall FNameEntry::GetWideName(FNameEntry *this,wchar_t (*param_1) [1024])

{
  code *pcVar1;
  bool bVar2;
  
  if (this.bIsWide == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsWide()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x9a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy(param_1,&this->field1_0x2,this.Len * 2);
  (*param_1)[this.Len] = L'\0';
  return;
}

// Write @ 141a9a1b0

void __thiscall FNameEntry::Write(FNameEntry *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNameEntrySerialized local_818;
  
  if ((param_1->field_0x28 & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x1117,
                       L"FNameEntry does not support reading from an archive. Serialize into a FNameEntrySerialized and construct a FNameEntry from that."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNameEntrySerialized::FNameEntrySerialized(&local_818,this);
  ::operator<<(param_1,&local_818);
  return;
}

