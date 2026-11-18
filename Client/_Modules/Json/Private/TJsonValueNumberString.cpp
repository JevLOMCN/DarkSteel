// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 32

// GetMemoryFootprint @ 141dd6770

ulong64 __thiscall
TJsonValueNumberString<char8_t>::GetMemoryFootprint(TJsonValueNumberString<char8_t> *this)

{
  return (longlong)(this->Value).Data.ArrayMax + 0x20;
}

// GetMemoryFootprint @ 141dd6780

ulong64 __thiscall
TJsonValueNumberString<wchar_t>::GetMemoryFootprint(TJsonValueNumberString<wchar_t> *this)

{
  return (longlong)(this->Value).Data.ArrayMax * 2 + 0x20;
}

// GetType @ 141dd72b0

FString * __thiscall
TJsonValueNumberString<char8_t>::GetType
          (TJsonValueNumberString<char8_t> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Utf8NumberString");
  return __return_storage_ptr__;
}

// GetType @ 141dd72e0

FString * __thiscall
TJsonValueNumberString<wchar_t>::GetType
          (TJsonValueNumberString<wchar_t> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"NumberString");
  return __return_storage_ptr__;
}

// PreferStringRepresentation @ 141ddd070

bool __thiscall
TJsonValueNumberString<char8_t>::PreferStringRepresentation(TJsonValueNumberString<char8_t> *this)

{
  return true;
}

// PreferStringRepresentation @ 141ddd080

bool __thiscall
TJsonValueNumberString<wchar_t>::PreferStringRepresentation(TJsonValueNumberString<wchar_t> *this)

{
  return true;
}

// TryGetBool @ 141df9a30

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetBool(TJsonValueNumberString<char8_t> *this,bool *param_1)

{
  bool bVar1;
  
  bVar1 = FUtf8String::ToBool(&this->Value);
  *param_1 = bVar1;
  return true;
}

// TryGetBool @ 141df9a60

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetBool(TJsonValueNumberString<wchar_t> *this,bool *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::ToBool(&this->Value);
  *param_1 = bVar1;
  return true;
}

// TryGetNumber @ 141df9c70

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,schar *param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  char *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = "";
  }
  else {
    _Str = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_Str == (FScriptContainerElement)0x0) {
    *param_1 = '\0';
    return false;
  }
  iVar1 = atoi(_Str);
  *param_1 = (char)iVar1;
  if (((char)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar2 = (FScriptContainerElement)*_Str;
  bVar3 = false;
  while( true ) {
    if (FVar2 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar2 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar2), iVar1 == 0))
    break;
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
  }
  if (FVar2 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (FVar2 == (FScriptContainerElement)0x2e) break;
    if ((bVar3 == false) && (FVar2 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
    bVar3 = true;
    if (FVar2 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetNumber @ 141df9d80

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,uchar *param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  char *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = "";
  }
  else {
    _Str = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_Str == (FScriptContainerElement)0x0) {
    *param_1 = '\0';
    return false;
  }
  iVar1 = atoi(_Str);
  *param_1 = (uchar)iVar1;
  if (((uchar)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar2 = (FScriptContainerElement)*_Str;
  bVar3 = false;
  while( true ) {
    if (FVar2 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar2 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar2), iVar1 == 0))
    break;
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
  }
  if (FVar2 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (FVar2 == (FScriptContainerElement)0x2e) break;
    if ((bVar3 == false) && (FVar2 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
    bVar3 = true;
    if (FVar2 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetNumber @ 141df9e90

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,short *param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  char *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = "";
  }
  else {
    _Str = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_Str == (FScriptContainerElement)0x0) {
    *param_1 = 0;
    return false;
  }
  iVar1 = atoi(_Str);
  *param_1 = (short)iVar1;
  if (((short)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar2 = (FScriptContainerElement)*_Str;
  bVar3 = false;
  while( true ) {
    if (FVar2 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar2 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar2), iVar1 == 0))
    break;
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
  }
  if (FVar2 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (FVar2 == (FScriptContainerElement)0x2e) break;
    if ((bVar3 == false) && (FVar2 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
    bVar3 = true;
    if (FVar2 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetNumber @ 141df9fa0

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,ushort *param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  char *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = "";
  }
  else {
    _Str = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_Str == (FScriptContainerElement)0x0) {
    *param_1 = 0;
    return false;
  }
  iVar1 = atoi(_Str);
  *param_1 = (ushort)iVar1;
  if (((ushort)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar2 = (FScriptContainerElement)*_Str;
  bVar3 = false;
  while( true ) {
    if (FVar2 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar2 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar2), iVar1 == 0))
    break;
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
  }
  if (FVar2 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (FVar2 == (FScriptContainerElement)0x2e) break;
    if ((bVar3 == false) && (FVar2 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
    bVar3 = true;
    if (FVar2 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetNumber @ 141dfa0b0

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,int *param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  char *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = "";
  }
  else {
    _Str = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_Str == (FScriptContainerElement)0x0) {
    *param_1 = 0;
    return false;
  }
  iVar1 = atoi(_Str);
  *param_1 = iVar1;
  if ((iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar2 = (FScriptContainerElement)*_Str;
  bVar3 = false;
  while( true ) {
    if (FVar2 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar2 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar2), iVar1 == 0))
    break;
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
  }
  if (FVar2 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (FVar2 == (FScriptContainerElement)0x2e) break;
    if ((bVar3 == false) && (FVar2 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar2 = *(FScriptContainerElement *)(_Str + 1);
    _Str = _Str + 1;
    bVar3 = true;
    if (FVar2 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetNumber @ 141dfa1c0

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,uint *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  char *_String;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_String == (FScriptContainerElement)0x0) {
    *param_1 = 0;
    return false;
  }
  lVar2 = _strtoi64(_String,(char **)0x0,10);
  *param_1 = (uint)lVar2;
  if (((uint)lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar3 = (FScriptContainerElement)*_String;
  bVar4 = false;
  while( true ) {
    if (FVar3 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar3 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar3), iVar1 == 0))
    break;
    FVar3 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
  }
  if (FVar3 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar3);
    if (iVar1 != 0) {
      return bVar4;
    }
    if (FVar3 == (FScriptContainerElement)0x2e) break;
    if ((bVar4 == false) && (FVar3 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar3 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
    bVar4 = true;
    if (FVar3 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar4;
}

// TryGetNumber @ 141dfa2e0

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,float *param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  char *_String;
  double dVar4;
  float fVar5;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_String == (FScriptContainerElement)0x0) {
    *param_1 = 0.0;
    return false;
  }
  dVar4 = atof(_String);
  fVar5 = (float)dVar4;
  *param_1 = fVar5;
  if ((fVar5 != 0.0) || (iVar1 = _finite((double)fVar5), iVar1 == 0)) {
    return true;
  }
  FVar2 = (FScriptContainerElement)*_String;
  bVar3 = false;
  while( true ) {
    if (FVar2 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar2 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar2), iVar1 == 0))
    break;
    FVar2 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
  }
  if (FVar2 == (FScriptContainerElement)0x0) {
    return false;
  }
  do {
    iVar1 = isspace((uint)(byte)FVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if ((bVar3 == false) && (FVar2 != (FScriptContainerElement)0x30)) {
      if (FVar2 != (FScriptContainerElement)0x2e) {
        return false;
      }
    }
    else {
      bVar3 = true;
    }
    FVar2 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
  } while (FVar2 != (FScriptContainerElement)0x0);
  return bVar3;
}

// TryGetNumber @ 141dfa400

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,double *param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  char *_String;
  double dVar4;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_String == (FScriptContainerElement)0x0) {
    *param_1 = 0.0;
    return false;
  }
  dVar4 = atof(_String);
  *param_1 = dVar4;
  if ((dVar4 != 0.0) || (iVar1 = _finite((double)(float)dVar4), iVar1 == 0)) {
    return true;
  }
  FVar2 = (FScriptContainerElement)*_String;
  bVar3 = false;
  while( true ) {
    if (FVar2 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar2 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar2), iVar1 == 0))
    break;
    FVar2 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
  }
  if (FVar2 == (FScriptContainerElement)0x0) {
    return false;
  }
  do {
    iVar1 = isspace((uint)(byte)FVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if ((bVar3 == false) && (FVar2 != (FScriptContainerElement)0x30)) {
      if (FVar2 != (FScriptContainerElement)0x2e) {
        return false;
      }
    }
    else {
      bVar3 = true;
    }
    FVar2 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
  } while (FVar2 != (FScriptContainerElement)0x0);
  return bVar3;
}

// TryGetNumber @ 141dfa520

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber(TJsonValueNumberString<char8_t> *this,long64 *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  char *_String;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_String == (FScriptContainerElement)0x0) {
    *param_1 = 0;
    return false;
  }
  lVar2 = _strtoi64(_String,(char **)0x0,10);
  *param_1 = lVar2;
  if ((lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar3 = (FScriptContainerElement)*_String;
  bVar4 = false;
  while( true ) {
    if (FVar3 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar3 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar3), iVar1 == 0))
    break;
    FVar3 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
  }
  if (FVar3 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar3);
    if (iVar1 != 0) {
      return bVar4;
    }
    if (FVar3 == (FScriptContainerElement)0x2e) break;
    if ((bVar4 == false) && (FVar3 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar3 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
    bVar4 = true;
    if (FVar3 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar4;
}

// TryGetNumber @ 141dfa640

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetNumber
          (TJsonValueNumberString<char8_t> *this,ulong64 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  char *_String;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _String = "";
  }
  else {
    _String = (char *)(this->Value).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement)*_String == (FScriptContainerElement)0x0) {
    *param_1 = 0;
    return false;
  }
  uVar2 = _strtoui64(_String,(char **)0x0,0);
  *param_1 = uVar2;
  if ((uVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  FVar3 = (FScriptContainerElement)*_String;
  bVar4 = false;
  while( true ) {
    if (FVar3 == (FScriptContainerElement)0x0) {
      return false;
    }
    if ((((char)FVar3 - 0x2bU & 0xfd) != 0) && (iVar1 = isspace((uint)(byte)FVar3), iVar1 == 0))
    break;
    FVar3 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
  }
  if (FVar3 == (FScriptContainerElement)0x0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)(byte)FVar3);
    if (iVar1 != 0) {
      return bVar4;
    }
    if (FVar3 == (FScriptContainerElement)0x2e) break;
    if ((bVar4 == false) && (FVar3 != (FScriptContainerElement)0x30)) {
      return false;
    }
    FVar3 = *(FScriptContainerElement *)(_String + 1);
    _String = _String + 1;
    bVar4 = true;
    if (FVar3 == (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return bVar4;
}

// TryGetNumber @ 141dfa760

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,schar *param_1)

{
  int iVar1;
  wint_t _C;
  bool bVar2;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = '\0';
    return false;
  }
  iVar1 = _wtoi(_Str);
  *param_1 = (char)iVar1;
  if (((char)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar2 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == 0x2e) break;
    if ((bVar2 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar2 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar2;
}

// TryGetNumber @ 141dfa860

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,uchar *param_1)

{
  int iVar1;
  wint_t _C;
  bool bVar2;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = '\0';
    return false;
  }
  iVar1 = _wtoi(_Str);
  *param_1 = (uchar)iVar1;
  if (((uchar)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar2 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == 0x2e) break;
    if ((bVar2 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar2 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar2;
}

// TryGetNumber @ 141dfa960

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,short *param_1)

{
  int iVar1;
  wint_t _C;
  bool bVar2;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0;
    return false;
  }
  iVar1 = _wtoi(_Str);
  *param_1 = (short)iVar1;
  if (((short)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar2 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == 0x2e) break;
    if ((bVar2 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar2 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar2;
}

// TryGetNumber @ 141dfaa60

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,ushort *param_1)

{
  int iVar1;
  wint_t _C;
  bool bVar2;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0;
    return false;
  }
  iVar1 = _wtoi(_Str);
  *param_1 = (ushort)iVar1;
  if (((ushort)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar2 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == 0x2e) break;
    if ((bVar2 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar2 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar2;
}

// TryGetNumber @ 141dfab60

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,int *param_1)

{
  int iVar1;
  wint_t _C;
  bool bVar2;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0;
    return false;
  }
  iVar1 = _wtoi(_Str);
  *param_1 = iVar1;
  if ((iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar2 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == 0x2e) break;
    if ((bVar2 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar2 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar2;
}

// TryGetNumber @ 141dfac60

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,uint *param_1)

{
  int iVar1;
  longlong lVar2;
  wint_t _C;
  bool bVar3;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0;
    return false;
  }
  lVar2 = _wtoi64(_Str);
  *param_1 = (uint)lVar2;
  if (((uint)lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar3 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (_C == 0x2e) break;
    if ((bVar3 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar3 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetNumber @ 141dfad60

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,float *param_1)

{
  bool bVar1;
  int iVar2;
  wint_t _C;
  wchar_t *_Str;
  double dVar3;
  float fVar4;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0.0;
    return false;
  }
  dVar3 = _wtof(_Str);
  fVar4 = (float)dVar3;
  *param_1 = fVar4;
  if ((fVar4 != 0.0) || (iVar2 = _finite((double)fVar4), iVar2 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar1 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(_C), iVar2 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  do {
    iVar2 = iswspace(_C);
    if (iVar2 != 0) {
      return bVar1;
    }
    if ((bVar1) || (_C == 0x30)) {
      bVar1 = true;
    }
    else if (_C != 0x2e) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  } while (_C != 0);
  return bVar1;
}

// TryGetNumber @ 141dfae70

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,double *param_1)

{
  bool bVar1;
  int iVar2;
  wint_t _C;
  wchar_t *_Str;
  double dVar3;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0.0;
    return false;
  }
  dVar3 = wcstod(_Str,(wchar_t **)0x0);
  *param_1 = dVar3;
  if ((dVar3 != 0.0) || (iVar2 = _finite((double)(float)dVar3), iVar2 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar1 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(_C), iVar2 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  do {
    iVar2 = iswspace(_C);
    if (iVar2 != 0) {
      return bVar1;
    }
    if ((bVar1) || (_C == 0x30)) {
      bVar1 = true;
    }
    else if (_C != 0x2e) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  } while (_C != 0);
  return bVar1;
}

// TryGetNumber @ 141dfaf80

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber(TJsonValueNumberString<wchar_t> *this,long64 *param_1)

{
  int iVar1;
  longlong lVar2;
  wint_t _C;
  bool bVar3;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0;
    return false;
  }
  lVar2 = _wtoi64(_Str);
  *param_1 = lVar2;
  if ((lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar3 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (_C == 0x2e) break;
    if ((bVar3 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar3 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetNumber @ 141dfb090

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetNumber
          (TJsonValueNumberString<wchar_t> *this,ulong64 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  wint_t _C;
  bool bVar3;
  wchar_t *_Str;
  
  if ((this->Value).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  if (*_Str == 0) {
    *param_1 = 0;
    return false;
  }
  uVar2 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  *param_1 = uVar2;
  if ((uVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *_Str;
  bVar3 = false;
  while( true ) {
    if (_C == 0) {
      return false;
    }
    if (((_C - 0x2b & 0xfffd) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
  }
  if (_C == 0) {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (_C == 0x2e) break;
    if ((bVar3 == false) && (_C != 0x30)) {
      return false;
    }
    _C = *(wint_t *)((longlong)_Str + 2);
    _Str = (wchar_t *)((longlong)_Str + 2);
    bVar3 = true;
    if (_C == 0) {
      return true;
    }
  }
  return bVar3;
}

// TryGetString @ 141dfc020

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetString
          (TJsonValueNumberString<char8_t> *this,FString *param_1)

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

// TryGetString @ 141dfc0f0

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetString
          (TJsonValueNumberString<wchar_t> *this,FString *param_1)

{
  ::FString::operator=(param_1,&this->Value);
  return true;
}

// TryGetUtf8String @ 141dfc660

bool __thiscall
TJsonValueNumberString<char8_t>::TryGetUtf8String
          (TJsonValueNumberString<char8_t> *this,FUtf8String *param_1)

{
  FUtf8String::operator=(param_1,&this->Value);
  return true;
}

// TryGetUtf8String @ 141dfc680

bool __thiscall
TJsonValueNumberString<wchar_t>::TryGetUtf8String
          (TJsonValueNumberString<wchar_t> *this,FUtf8String *param_1)

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

