// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 20

// GetMemoryFootprint @ 141dd67a0

ulong64 __thiscall TJsonValueString<char8_t>::GetMemoryFootprint(TJsonValueString<char8_t> *this)

{
  return (longlong)(this->Value).Data.ArrayMax + 0x20;
}

// GetMemoryFootprint @ 141dd67b0

ulong64 __thiscall TJsonValueString<wchar_t>::GetMemoryFootprint(TJsonValueString<wchar_t> *this)

{
  return (longlong)(this->Value).Data.ArrayMax * 2 + 0x20;
}

// GetType @ 141dd7310

FString * __thiscall
TJsonValueString<char8_t>::GetType(TJsonValueString<char8_t> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Utf8String");
  return __return_storage_ptr__;
}

// GetType @ 141dd7340

FString * __thiscall
TJsonValueString<wchar_t>::GetType(TJsonValueString<wchar_t> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"String");
  return __return_storage_ptr__;
}

// TryGetBool @ 141df9a90

bool __thiscall TJsonValueString<char8_t>::TryGetBool(TJsonValueString<char8_t> *this,bool *param_1)

{
  bool bVar1;
  
  bVar1 = FUtf8String::ToBool(&this->Value);
  *param_1 = bVar1;
  return true;
}

// TryGetBool @ 141df9ac0

bool __thiscall TJsonValueString<wchar_t>::TryGetBool(TJsonValueString<wchar_t> *this,bool *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::ToBool(&this->Value);
  *param_1 = bVar1;
  return true;
}

// TryGetNumber @ 141dfb1a0

bool __thiscall
TJsonValueString<char8_t>::TryGetNumber(TJsonValueString<char8_t> *this,int *param_1)

{
  int iVar1;
  
  if ((this->Value).Data.ArrayNum != 0) {
    iVar1 = atoi((char *)(this->Value).Data.AllocatorInstance.Data);
    *param_1 = iVar1;
    return true;
  }
  iVar1 = atoi("");
  *param_1 = iVar1;
  return true;
}

// TryGetNumber @ 141dfb1e0

bool __thiscall
TJsonValueString<char8_t>::TryGetNumber(TJsonValueString<char8_t> *this,uint *param_1)

{
  longlong lVar1;
  char *_String;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  lVar1 = _strtoi64(_String,(char **)0x0,10);
  *param_1 = (uint)lVar1;
  return true;
}

// TryGetNumber @ 141dfb220

bool __thiscall
TJsonValueString<char8_t>::TryGetNumber(TJsonValueString<char8_t> *this,double *param_1)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = FUtf8String::IsNumeric(&this->Value);
  if (!bVar1) {
    return false;
  }
  if ((this->Value).Data.ArrayNum != 0) {
    dVar2 = atof((char *)(this->Value).Data.AllocatorInstance.Data);
    *param_1 = dVar2;
    return true;
  }
  dVar2 = atof("");
  *param_1 = dVar2;
  return true;
}

// TryGetNumber @ 141dfb290

bool __thiscall
TJsonValueString<char8_t>::TryGetNumber(TJsonValueString<char8_t> *this,long64 *param_1)

{
  longlong lVar1;
  char *_String;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  lVar1 = _strtoi64(_String,(char **)0x0,10);
  *param_1 = lVar1;
  return true;
}

// TryGetNumber @ 141dfb2d0

bool __thiscall
TJsonValueString<char8_t>::TryGetNumber(TJsonValueString<char8_t> *this,ulong64 *param_1)

{
  ulonglong uVar1;
  char *_String;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  uVar1 = _strtoui64(_String,(char **)0x0,0);
  *param_1 = uVar1;
  return true;
}

// TryGetNumber @ 141dfb310

bool __thiscall
TJsonValueString<wchar_t>::TryGetNumber(TJsonValueString<wchar_t> *this,int *param_1)

{
  int iVar1;
  
  if ((this->Value).Data.ArrayNum != 0) {
    iVar1 = _wtoi((wchar_t *)(this->Value).Data.AllocatorInstance.Data);
    *param_1 = iVar1;
    return true;
  }
  iVar1 = _wtoi(L"");
  *param_1 = iVar1;
  return true;
}

// TryGetNumber @ 141dfb350

bool __thiscall
TJsonValueString<wchar_t>::TryGetNumber(TJsonValueString<wchar_t> *this,uint *param_1)

{
  longlong lVar1;
  
  if ((this->Value).Data.ArrayNum != 0) {
    lVar1 = _wtoi64((wchar_t *)(this->Value).Data.AllocatorInstance.Data);
    *param_1 = (uint)lVar1;
    return true;
  }
  lVar1 = _wtoi64(L"");
  *param_1 = (uint)lVar1;
  return true;
}

// TryGetNumber @ 141dfb390

bool __thiscall
TJsonValueString<wchar_t>::TryGetNumber(TJsonValueString<wchar_t> *this,double *param_1)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = ::FString::IsNumeric(&this->Value);
  if (!bVar1) {
    return false;
  }
  if ((this->Value).Data.ArrayNum != 0) {
    dVar2 = wcstod((wchar_t *)(this->Value).Data.AllocatorInstance.Data,(wchar_t **)0x0);
    *param_1 = dVar2;
    return true;
  }
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  *param_1 = dVar2;
  return true;
}

// TryGetNumber @ 141dfb410

bool __thiscall
TJsonValueString<wchar_t>::TryGetNumber(TJsonValueString<wchar_t> *this,long64 *param_1)

{
  longlong lVar1;
  
  if ((this->Value).Data.ArrayNum != 0) {
    lVar1 = _wtoi64((wchar_t *)(this->Value).Data.AllocatorInstance.Data);
    *param_1 = lVar1;
    return true;
  }
  lVar1 = _wtoi64(L"");
  *param_1 = lVar1;
  return true;
}

// TryGetNumber @ 141dfb460

bool __thiscall
TJsonValueString<wchar_t>::TryGetNumber(TJsonValueString<wchar_t> *this,ulong64 *param_1)

{
  ulonglong uVar1;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  uVar1 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  *param_1 = uVar1;
  return true;
}

// TryGetString @ 141dfc110

bool __thiscall
TJsonValueString<char8_t>::TryGetString(TJsonValueString<char8_t> *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  FString local_28;
  FString local_18;
  
  iVar1 = (this->Value).Data.ArrayNum;
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_28,(uchar *)(this->Value).Data.AllocatorInstance.Data,iVar6);
  iVar6 = iVar5;
  if (&local_18 != pFVar3) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar6 = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (param_1 == &local_18) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->Data).AllocatorInstance.Data = pFVar4;
    (param_1->Data).ArrayNum = iVar5;
    (param_1->Data).ArrayMax = iVar6;
  }
  return true;
}

// TryGetString @ 141dfc1e0

bool __thiscall
TJsonValueString<wchar_t>::TryGetString(TJsonValueString<wchar_t> *this,FString *param_1)

{
  ::FString::operator=(param_1,&this->Value);
  return true;
}

// TryGetUtf8String @ 141dfc750

bool __thiscall
TJsonValueString<char8_t>::TryGetUtf8String(TJsonValueString<char8_t> *this,FUtf8String *param_1)

{
  FUtf8String::operator=(param_1,&this->Value);
  return true;
}

// TryGetUtf8String @ 141dfc770

bool __thiscall
TJsonValueString<wchar_t>::TryGetUtf8String(TJsonValueString<wchar_t> *this,FUtf8String *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FUtf8String *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  FUtf8String local_28;
  FUtf8String local_18;
  
  iVar1 = (this->Value).Data.ArrayNum;
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar3 = FUtf8String::ConstructFromPtrSize
                     (&local_28,(wchar_t *)(this->Value).Data.AllocatorInstance.Data,iVar6);
  iVar6 = iVar5;
  if (&local_18 != pFVar3) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar6 = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (param_1 == &local_18) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->Data).AllocatorInstance.Data = pFVar4;
    (param_1->Data).ArrayNum = iVar5;
    (param_1->Data).ArrayMax = iVar6;
  }
  return true;
}

