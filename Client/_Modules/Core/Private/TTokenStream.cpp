// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 54

// TTokenStream<char> @ 1418ba3c0

TTokenStream<char> * __thiscall
TTokenStream<char>::TTokenStream<char>(TTokenStream<char> *this,char *param_1)

{
  size_t sVar1;
  
  this->Start = param_1;
  sVar1 = strlen(param_1);
  this->ReadPos = param_1;
  this->End = param_1 + (int)sVar1;
  return this;
}

// TTokenStream<char8_t> @ 1418ba400

TTokenStream<char8_t> * __thiscall
TTokenStream<char8_t>::TTokenStream<char8_t>(TTokenStream<char8_t> *this,uchar *param_1)

{
  size_t sVar1;
  
  this->Start = param_1;
  sVar1 = strlen((char *)param_1);
  this->ReadPos = param_1;
  this->End = param_1 + (int)sVar1;
  return this;
}

// TTokenStream<wchar_t> @ 1418ba440

TTokenStream<wchar_t> * __thiscall
TTokenStream<wchar_t>::TTokenStream<wchar_t>(TTokenStream<wchar_t> *this,wchar_t *param_1)

{
  size_t sVar1;
  
  this->Start = param_1;
  sVar1 = wcslen(param_1);
  this->ReadPos = param_1;
  this->End = param_1 + (int)sVar1;
  return this;
}

// CharsRemaining @ 1418ca1e0

int __thiscall TTokenStream<char>::CharsRemaining(TTokenStream<char> *this)

{
  return *(int *)&this->End - *(int *)&this->ReadPos;
}

// CharsRemaining @ 1418ca1f0

int __thiscall TTokenStream<char8_t>::CharsRemaining(TTokenStream<char8_t> *this)

{
  return *(int *)&this->End - *(int *)&this->ReadPos;
}

// CharsRemaining @ 1418ca200

int __thiscall TTokenStream<wchar_t>::CharsRemaining(TTokenStream<wchar_t> *this)

{
  return (int)((longlong)this->End - (longlong)this->ReadPos >> 1);
}

// GenerateToken @ 1418dbf70

TOptional<TStringToken<char>_> * __thiscall
TTokenStream<char>::GenerateToken
          (TTokenStream<char> *this,TOptional<TStringToken<char>_> *__return_storage_ptr__,
          int param_1,TStringToken<char> *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 == (TStringToken<char> *)0x0) {
    pcVar3 = this->ReadPos;
  }
  else {
    pcVar3 = param_2->TokenEnd;
  }
  pcVar2 = this->Start;
  if ((pcVar2 <= pcVar3) && (pcVar3 <= this->End + -(longlong)param_1)) {
    pcVar1 = pcVar3 + param_1;
    if ((param_2 != (TStringToken<char> *)0x0) && (param_2->TokenEnd < pcVar1)) {
      param_2->TokenEnd = pcVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = pcVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = pcVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex = (int)pcVar3 - (int)pcVar2;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GenerateToken @ 1418dbff0

TOptional<TStringToken<char8_t>_> * __thiscall
TTokenStream<char8_t>::GenerateToken
          (TTokenStream<char8_t> *this,TOptional<TStringToken<char8_t>_> *__return_storage_ptr__,
          int param_1,TStringToken<char8_t> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if (param_2 == (TStringToken<char8_t> *)0x0) {
    puVar3 = this->ReadPos;
  }
  else {
    puVar3 = param_2->TokenEnd;
  }
  puVar2 = this->Start;
  if ((puVar2 <= puVar3) && (puVar3 <= this->End + -(longlong)param_1)) {
    puVar1 = puVar3 + param_1;
    if ((param_2 != (TStringToken<char8_t> *)0x0) && (param_2->TokenEnd < puVar1)) {
      param_2->TokenEnd = puVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = puVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = puVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex = (int)puVar3 - (int)puVar2;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GenerateToken @ 1418dc070

TOptional<TStringToken<wchar_t>_> * __thiscall
TTokenStream<wchar_t>::GenerateToken
          (TTokenStream<wchar_t> *this,TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,
          int param_1,TStringToken<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (param_2 == (TStringToken<wchar_t> *)0x0) {
    pwVar3 = this->ReadPos;
  }
  else {
    pwVar3 = param_2->TokenEnd;
  }
  pwVar2 = this->Start;
  if ((pwVar2 <= pwVar3) && (pwVar3 <= this->End + -(longlong)param_1)) {
    pwVar1 = pwVar3 + param_1;
    if ((param_2 != (TStringToken<wchar_t> *)0x0) && (param_2->TokenEnd < pwVar1)) {
      param_2->TokenEnd = pwVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = pwVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = pwVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex =
         (int)((longlong)pwVar3 - (longlong)pwVar2 >> 1);
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetEnd @ 1418df190

char * __thiscall TTokenStream<char>::GetEnd(TTokenStream<char> *this)

{
  return this->End;
}

// GetEnd @ 1418df1a0

uchar * __thiscall TTokenStream<char8_t>::GetEnd(TTokenStream<char8_t> *this)

{
  return this->End;
}

// GetEnd @ 1418df1b0

wchar_t * __thiscall TTokenStream<wchar_t>::GetEnd(TTokenStream<wchar_t> *this)

{
  return this->End;
}

// GetErrorContext @ 1418df260

FString * __thiscall
TTokenStream<char>::GetErrorContext(TTokenStream<char> *this,FString *__return_storage_ptr__)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar2 = this->ReadPos;
  iVar3 = iswspace((short)*pcVar2);
  pcVar5 = pcVar2;
  while (iVar3 != 0) {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    iVar3 = iswspace((short)*pcVar1);
  }
  iVar3 = iswspace((short)*pcVar5);
  for (; (iVar3 == 0 && (*pcVar5 != '\0')); pcVar5 = pcVar5 + 1) {
    iVar3 = iswspace((short)pcVar5[1]);
  }
  iVar4 = (int)pcVar5 - (int)pcVar2;
  iVar3 = 0x20;
  if (iVar4 < 0x20) {
    iVar3 = iVar4;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,pcVar2,iVar3);
  if (0x20 < (longlong)pcVar5 - (longlong)pcVar2) {
    ::FString::AppendChars(__return_storage_ptr__,L"...",3);
  }
  return __return_storage_ptr__;
}

// GetErrorContext @ 1418df320

FString * __thiscall
TTokenStream<char8_t>::GetErrorContext(TTokenStream<char8_t> *this,FString *__return_storage_ptr__)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar2 = this->ReadPos;
  iVar3 = iswspace((ushort)*pbVar2);
  pbVar5 = pbVar2;
  while (iVar3 != 0) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    iVar3 = iswspace((ushort)*pbVar1);
  }
  iVar3 = iswspace((ushort)*pbVar5);
  for (; (iVar3 == 0 && (*pbVar5 != 0)); pbVar5 = pbVar5 + 1) {
    iVar3 = iswspace((ushort)pbVar5[1]);
  }
  iVar4 = (int)pbVar5 - (int)pbVar2;
  iVar3 = 0x20;
  if (iVar4 < 0x20) {
    iVar3 = iVar4;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,pbVar2,iVar3);
  if (0x20 < (longlong)pbVar5 - (longlong)pbVar2) {
    ::FString::AppendChars(__return_storage_ptr__,L"...",3);
  }
  return __return_storage_ptr__;
}

// GetErrorContext @ 1418df3e0

FString * __thiscall
TTokenStream<wchar_t>::GetErrorContext(TTokenStream<wchar_t> *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  
  pwVar2 = this->ReadPos;
  iVar3 = iswspace(*pwVar2);
  pwVar5 = pwVar2;
  while (iVar3 != 0) {
    pwVar1 = pwVar5 + 1;
    pwVar5 = pwVar5 + 1;
    iVar3 = iswspace(*pwVar1);
  }
  iVar3 = iswspace(*pwVar5);
  for (; (iVar3 == 0 && (*pwVar5 != L'\0')); pwVar5 = pwVar5 + 1) {
    iVar3 = iswspace(pwVar5[1]);
  }
  lVar6 = (longlong)pwVar5 - (longlong)pwVar2 >> 1;
  iVar4 = (int)lVar6;
  iVar3 = 0x20;
  if (iVar4 < 0x20) {
    iVar3 = iVar4;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,pwVar2,iVar3);
  if (0x20 < lVar6) {
    ::FString::AppendChars(__return_storage_ptr__,L"...",3);
  }
  return __return_storage_ptr__;
}

// GetPosition @ 1418e11e0

int __thiscall TTokenStream<char>::GetPosition(TTokenStream<char> *this)

{
  return *(int *)&this->ReadPos - *(int *)&this->Start;
}

// GetPosition @ 1418e11f0

int __thiscall TTokenStream<char8_t>::GetPosition(TTokenStream<char8_t> *this)

{
  return *(int *)&this->ReadPos - *(int *)&this->Start;
}

// GetPosition @ 1418e1200

int __thiscall TTokenStream<wchar_t>::GetPosition(TTokenStream<wchar_t> *this)

{
  return (int)((longlong)this->ReadPos - (longlong)this->Start >> 1);
}

// GetRead @ 1418e12b0

char * __thiscall TTokenStream<char>::GetRead(TTokenStream<char> *this)

{
  return this->ReadPos;
}

// GetRead @ 1418e12c0

uchar * __thiscall TTokenStream<char8_t>::GetRead(TTokenStream<char8_t> *this)

{
  return this->ReadPos;
}

// GetRead @ 1418e12d0

wchar_t * __thiscall TTokenStream<wchar_t>::GetRead(TTokenStream<wchar_t> *this)

{
  return this->ReadPos;
}

// GetStart @ 1418e18a0

char * __thiscall TTokenStream<char>::GetStart(TTokenStream<char> *this)

{
  return this->Start;
}

// GetStart @ 1418e18b0

uchar * __thiscall TTokenStream<char8_t>::GetStart(TTokenStream<char8_t> *this)

{
  return this->Start;
}

// GetStart @ 1418e18c0

wchar_t * __thiscall TTokenStream<wchar_t>::GetStart(TTokenStream<wchar_t> *this)

{
  return this->Start;
}

// IsEmpty @ 1418e2c80

bool __thiscall TTokenStream<char>::IsEmpty(TTokenStream<char> *this)

{
  return this->ReadPos == this->End;
}

// IsEmpty @ 1418e2ca0

bool __thiscall TTokenStream<char8_t>::IsEmpty(TTokenStream<char8_t> *this)

{
  return this->ReadPos == this->End;
}

// IsEmpty @ 1418e2cc0

bool __thiscall TTokenStream<wchar_t>::IsEmpty(TTokenStream<wchar_t> *this)

{
  return this->ReadPos == this->End;
}

// IsReadPosValid @ 1418e3550

bool __thiscall
TTokenStream<char>::IsReadPosValid(TTokenStream<char> *this,char *param_1,int param_2)

{
  if ((this->Start <= param_1) && (param_1 <= this->End + -(longlong)param_2)) {
    return true;
  }
  return false;
}

// IsReadPosValid @ 1418e3570

bool __thiscall
TTokenStream<char8_t>::IsReadPosValid(TTokenStream<char8_t> *this,uchar *param_1,int param_2)

{
  if ((this->Start <= param_1) && (param_1 <= this->End + -(longlong)param_2)) {
    return true;
  }
  return false;
}

// IsReadPosValid @ 1418e3590

bool __thiscall
TTokenStream<wchar_t>::IsReadPosValid(TTokenStream<wchar_t> *this,wchar_t *param_1,int param_2)

{
  if ((this->Start <= param_1) && (param_1 <= this->End + -(longlong)param_2)) {
    return true;
  }
  return false;
}

// ParseSymbol @ 1418eebc0

TOptional<TStringToken<char>_> * __thiscall
TTokenStream<char>::ParseSymbol
          (TTokenStream<char> *this,TOptional<TStringToken<char>_> *__return_storage_ptr__,
          char param_1,TStringToken<char> *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 == (TStringToken<char> *)0x0) {
    pcVar3 = this->ReadPos;
  }
  else {
    pcVar3 = param_2->TokenEnd;
  }
  pcVar2 = this->Start;
  if (((pcVar2 <= pcVar3) && (pcVar3 <= this->End + -1)) && (*pcVar3 == param_1)) {
    pcVar1 = pcVar3 + 1;
    if ((param_2 != (TStringToken<char> *)0x0) && (param_2->TokenEnd < pcVar1)) {
      param_2->TokenEnd = pcVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = pcVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = pcVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex = (int)pcVar3 - (int)pcVar2;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSymbol @ 1418eec30

TOptional<TStringToken<char>_> * __thiscall
TTokenStream<char>::ParseSymbol
          (TTokenStream<char> *this,TOptional<TStringToken<char>_> *__return_storage_ptr__,
          TStringToken<char> *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 == (TStringToken<char> *)0x0) {
    pcVar3 = this->ReadPos;
  }
  else {
    pcVar3 = param_1->TokenEnd;
  }
  pcVar2 = this->Start;
  if ((pcVar2 <= pcVar3) && (pcVar3 <= this->End + -1)) {
    pcVar1 = pcVar3 + 1;
    if ((param_1 != (TStringToken<char> *)0x0) && (param_1->TokenEnd < pcVar1)) {
      param_1->TokenEnd = pcVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = pcVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = pcVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex = (int)pcVar3 - (int)pcVar2;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSymbol @ 1418eeca0

TOptional<TStringToken<char8_t>_> * __thiscall
TTokenStream<char8_t>::ParseSymbol
          (TTokenStream<char8_t> *this,TOptional<TStringToken<char8_t>_> *__return_storage_ptr__,
          TStringToken<char8_t> *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if (param_1 == (TStringToken<char8_t> *)0x0) {
    puVar3 = this->ReadPos;
  }
  else {
    puVar3 = param_1->TokenEnd;
  }
  puVar2 = this->Start;
  if ((puVar2 <= puVar3) && (puVar3 <= this->End + -1)) {
    puVar1 = puVar3 + 1;
    if ((param_1 != (TStringToken<char8_t> *)0x0) && (param_1->TokenEnd < puVar1)) {
      param_1->TokenEnd = puVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = puVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = puVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex = (int)puVar3 - (int)puVar2;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSymbol @ 1418eed10

TOptional<TStringToken<char8_t>_> * __thiscall
TTokenStream<char8_t>::ParseSymbol
          (TTokenStream<char8_t> *this,TOptional<TStringToken<char8_t>_> *__return_storage_ptr__,
          uchar param_1,TStringToken<char8_t> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if (param_2 == (TStringToken<char8_t> *)0x0) {
    puVar3 = this->ReadPos;
  }
  else {
    puVar3 = param_2->TokenEnd;
  }
  puVar2 = this->Start;
  if (((puVar2 <= puVar3) && (puVar3 <= this->End + -1)) && (*puVar3 == param_1)) {
    puVar1 = puVar3 + 1;
    if ((param_2 != (TStringToken<char8_t> *)0x0) && (param_2->TokenEnd < puVar1)) {
      param_2->TokenEnd = puVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = puVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = puVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex = (int)puVar3 - (int)puVar2;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSymbol @ 1418eed80

TOptional<TStringToken<wchar_t>_> * __thiscall
TTokenStream<wchar_t>::ParseSymbol
          (TTokenStream<wchar_t> *this,TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,
          TStringToken<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (param_1 == (TStringToken<wchar_t> *)0x0) {
    pwVar3 = this->ReadPos;
  }
  else {
    pwVar3 = param_1->TokenEnd;
  }
  pwVar2 = this->Start;
  if ((pwVar2 <= pwVar3) && (pwVar3 <= this->End + -1)) {
    pwVar1 = pwVar3 + 1;
    if ((param_1 != (TStringToken<wchar_t> *)0x0) && (param_1->TokenEnd < pwVar1)) {
      param_1->TokenEnd = pwVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = pwVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = pwVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex =
         (int)((longlong)pwVar3 - (longlong)pwVar2 >> 1);
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSymbol @ 1418eedf0

TOptional<TStringToken<wchar_t>_> * __thiscall
TTokenStream<wchar_t>::ParseSymbol
          (TTokenStream<wchar_t> *this,TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,
          wchar_t param_1,TStringToken<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (param_2 == (TStringToken<wchar_t> *)0x0) {
    pwVar3 = this->ReadPos;
  }
  else {
    pwVar3 = param_2->TokenEnd;
  }
  pwVar2 = this->Start;
  if (((pwVar2 <= pwVar3) && (pwVar3 <= this->End + -1)) && (*pwVar3 == param_1)) {
    pwVar1 = pwVar3 + 1;
    if ((param_2 != (TStringToken<wchar_t> *)0x0) && (param_2->TokenEnd < pwVar1)) {
      param_2->TokenEnd = pwVar1;
    }
    (__return_storage_ptr__->TypedValue).TokenStart = pwVar3;
    (__return_storage_ptr__->TypedValue).TokenEnd = pwVar1;
    (__return_storage_ptr__->TypedValue).LineNumber = 0;
    (__return_storage_ptr__->TypedValue).CharacterIndex =
         (int)((longlong)pwVar3 - (longlong)pwVar2 >> 1);
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseToken @ 1418eee70

TOptional<TStringToken<char>_> * __thiscall
TTokenStream<char>::ParseToken
          (TTokenStream<char> *this,TOptional<TStringToken<char>_> *__return_storage_ptr__,
          char *param_1,TStringToken<char> *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *_Str1;
  
  if (param_2 == (TStringToken<char> *)0x0) {
    _Str1 = this->ReadPos;
  }
  else {
    _Str1 = param_2->TokenEnd;
  }
  sVar4 = strlen(param_1);
  pcVar2 = this->Start;
  sVar4 = (size_t)(int)sVar4;
  if (((pcVar2 <= _Str1) && (_Str1 <= this->End + -sVar4)) && (*_Str1 == *param_1)) {
    iVar3 = strncmp(_Str1,param_1,sVar4);
    if (iVar3 == 0) {
      pcVar1 = _Str1 + sVar4;
      if ((param_2 != (TStringToken<char> *)0x0) && (param_2->TokenEnd < pcVar1)) {
        param_2->TokenEnd = pcVar1;
      }
      (__return_storage_ptr__->TypedValue).TokenStart = _Str1;
      (__return_storage_ptr__->TypedValue).TokenEnd = pcVar1;
      (__return_storage_ptr__->TypedValue).LineNumber = 0;
      (__return_storage_ptr__->TypedValue).CharacterIndex = (int)_Str1 - (int)pcVar2;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseToken @ 1418eef40

TOptional<TStringToken<char>_> * __thiscall
TTokenStream<char>::ParseToken
          (TTokenStream<char> *this,TOptional<TStringToken<char>_> *__return_storage_ptr__,
          TFunctionRef<EParseState___cdecl(char)> *param_1,TStringToken<char> *param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_res8 [8];
  char *pcStack_30;
  
  if (param_2 == (TStringToken<char> *)0x0) {
    pcVar5 = this->ReadPos;
  }
  else {
    pcVar5 = param_2->TokenEnd;
  }
  pcVar1 = this->Start;
  if (((pcVar1 <= pcVar5) && (pcVar5 <= this->End + -1)) &&
     (pcVar4 = pcVar5, pcStack_30 = pcVar5, pcVar5 != this->End)) {
    do {
      local_res8[0] = *pcVar4;
      uVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
      if (uVar3 == 3) goto LAB_1418ef024;
    } while (((1 < uVar3) || (pcVar4 = pcVar4 + 1, pcStack_30 = pcVar4, uVar3 != 1)) &&
            ((uVar3 != 2 && (pcVar4 != this->End))));
    if (pcVar4 != pcVar5) {
      if ((param_2 != (TStringToken<char> *)0x0) && (param_2->TokenEnd < pcVar4)) {
        param_2->TokenEnd = pcVar4;
      }
      __return_storage_ptr__->bIsSet = true;
      lVar2 = (ulonglong)(uint)((int)pcVar5 - (int)pcVar1) << 0x20;
      (__return_storage_ptr__->TypedValue).TokenStart = pcVar5;
      (__return_storage_ptr__->TypedValue).TokenEnd = pcStack_30;
      (__return_storage_ptr__->TypedValue).LineNumber = (int)lVar2;
      (__return_storage_ptr__->TypedValue).CharacterIndex = (int)((ulonglong)lVar2 >> 0x20);
      return __return_storage_ptr__;
    }
  }
LAB_1418ef024:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseToken @ 1418ef050

TOptional<TStringToken<char8_t>_> * __thiscall
TTokenStream<char8_t>::ParseToken
          (TTokenStream<char8_t> *this,TOptional<TStringToken<char8_t>_> *__return_storage_ptr__,
          uchar *param_1,TStringToken<char8_t> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  size_t sVar4;
  uchar *_Str1;
  
  if (param_2 == (TStringToken<char8_t> *)0x0) {
    _Str1 = this->ReadPos;
  }
  else {
    _Str1 = param_2->TokenEnd;
  }
  sVar4 = strlen((char *)param_1);
  puVar2 = this->Start;
  sVar4 = (size_t)(int)sVar4;
  if (((puVar2 <= _Str1) && (_Str1 <= this->End + -sVar4)) && (*_Str1 == *param_1)) {
    iVar3 = strncmp((char *)_Str1,(char *)param_1,sVar4);
    if (iVar3 == 0) {
      puVar1 = _Str1 + sVar4;
      if ((param_2 != (TStringToken<char8_t> *)0x0) && (param_2->TokenEnd < puVar1)) {
        param_2->TokenEnd = puVar1;
      }
      (__return_storage_ptr__->TypedValue).TokenStart = _Str1;
      (__return_storage_ptr__->TypedValue).TokenEnd = puVar1;
      (__return_storage_ptr__->TypedValue).LineNumber = 0;
      (__return_storage_ptr__->TypedValue).CharacterIndex = (int)_Str1 - (int)puVar2;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseToken @ 1418ef120

TOptional<TStringToken<char8_t>_> * __thiscall
TTokenStream<char8_t>::ParseToken
          (TTokenStream<char8_t> *this,TOptional<TStringToken<char8_t>_> *__return_storage_ptr__,
          TFunctionRef<EParseState___cdecl(char8_t)> *param_1,TStringToken<char8_t> *param_2)

{
  uchar *puVar1;
  longlong lVar2;
  uint uVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  uchar *puStack_30;
  
  if (param_2 == (TStringToken<char8_t> *)0x0) {
    puVar5 = this->ReadPos;
  }
  else {
    puVar5 = param_2->TokenEnd;
  }
  puVar1 = this->Start;
  if (((puVar1 <= puVar5) && (puVar5 <= this->End + -1)) &&
     (puVar4 = puVar5, puStack_30 = puVar5, puVar5 != this->End)) {
    do {
      local_res8[0] = *puVar4;
      uVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
      if (uVar3 == 3) goto LAB_1418ef204;
    } while (((1 < uVar3) || (puVar4 = puVar4 + 1, puStack_30 = puVar4, uVar3 != 1)) &&
            ((uVar3 != 2 && (puVar4 != this->End))));
    if (puVar4 != puVar5) {
      if ((param_2 != (TStringToken<char8_t> *)0x0) && (param_2->TokenEnd < puVar4)) {
        param_2->TokenEnd = puVar4;
      }
      __return_storage_ptr__->bIsSet = true;
      lVar2 = (ulonglong)(uint)((int)puVar5 - (int)puVar1) << 0x20;
      (__return_storage_ptr__->TypedValue).TokenStart = puVar5;
      (__return_storage_ptr__->TypedValue).TokenEnd = puStack_30;
      (__return_storage_ptr__->TypedValue).LineNumber = (int)lVar2;
      (__return_storage_ptr__->TypedValue).CharacterIndex = (int)((ulonglong)lVar2 >> 0x20);
      return __return_storage_ptr__;
    }
  }
LAB_1418ef204:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseToken @ 1418ef230

TOptional<TStringToken<wchar_t>_> * __thiscall
TTokenStream<wchar_t>::ParseToken
          (TTokenStream<wchar_t> *this,TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,
          wchar_t *param_1,TStringToken<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str1;
  
  if (param_2 == (TStringToken<wchar_t> *)0x0) {
    _Str1 = this->ReadPos;
  }
  else {
    _Str1 = param_2->TokenEnd;
  }
  sVar4 = wcslen(param_1);
  pwVar2 = this->Start;
  sVar4 = (size_t)(int)sVar4;
  if (((pwVar2 <= _Str1) && (_Str1 <= this->End + -sVar4)) && (*_Str1 == *param_1)) {
    iVar3 = wcsncmp(_Str1,param_1,sVar4);
    if (iVar3 == 0) {
      pwVar1 = _Str1 + sVar4;
      if ((param_2 != (TStringToken<wchar_t> *)0x0) && (param_2->TokenEnd < pwVar1)) {
        param_2->TokenEnd = pwVar1;
      }
      (__return_storage_ptr__->TypedValue).TokenStart = _Str1;
      (__return_storage_ptr__->TypedValue).TokenEnd = pwVar1;
      (__return_storage_ptr__->TypedValue).LineNumber = 0;
      (__return_storage_ptr__->TypedValue).CharacterIndex =
           (int)((longlong)_Str1 - (longlong)pwVar2 >> 1);
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseToken @ 1418ef310

TOptional<TStringToken<wchar_t>_> * __thiscall
TTokenStream<wchar_t>::ParseToken
          (TTokenStream<wchar_t> *this,TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,
          TFunctionRef<EParseState___cdecl(wchar_t)> *param_1,TStringToken<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  longlong lVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t local_res8 [4];
  wchar_t *pwStack_30;
  
  if (param_2 == (TStringToken<wchar_t> *)0x0) {
    pwVar5 = this->ReadPos;
  }
  else {
    pwVar5 = param_2->TokenEnd;
  }
  pwVar1 = this->Start;
  if (((pwVar1 <= pwVar5) && (pwVar5 <= this->End + -1)) &&
     (pwVar4 = pwVar5, pwStack_30 = pwVar5, pwVar5 != this->End)) {
    do {
      local_res8[0] = *pwVar4;
      uVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
      if (uVar3 == 3) goto LAB_1418ef3f6;
    } while (((1 < uVar3) || (pwVar4 = pwVar4 + 1, pwStack_30 = pwVar4, uVar3 != 1)) &&
            ((uVar3 != 2 && (pwVar4 != this->End))));
    if (pwVar4 != pwVar5) {
      if ((param_2 != (TStringToken<wchar_t> *)0x0) && (param_2->TokenEnd < pwVar4)) {
        param_2->TokenEnd = pwVar4;
      }
      __return_storage_ptr__->bIsSet = true;
      lVar2 = ((longlong)pwVar5 - (longlong)pwVar1 >> 1) << 0x20;
      (__return_storage_ptr__->TypedValue).TokenStart = pwVar5;
      (__return_storage_ptr__->TypedValue).TokenEnd = pwStack_30;
      (__return_storage_ptr__->TypedValue).LineNumber = (int)lVar2;
      (__return_storage_ptr__->TypedValue).CharacterIndex = (int)((ulonglong)lVar2 >> 0x20);
      return __return_storage_ptr__;
    }
  }
LAB_1418ef3f6:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseTokenIgnoreCase @ 1418ef420

TOptional<TStringToken<char>_> * __thiscall
TTokenStream<char>::ParseTokenIgnoreCase
          (TTokenStream<char> *this,TOptional<TStringToken<char>_> *__return_storage_ptr__,
          char *param_1,TStringToken<char> *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  ulong64 uVar6;
  
  if (param_2 == (TStringToken<char> *)0x0) {
    pcVar5 = this->ReadPos;
  }
  else {
    pcVar5 = param_2->TokenEnd;
  }
  sVar4 = strlen(param_1);
  pcVar2 = this->Start;
  uVar6 = (ulong64)(int)sVar4;
  if ((pcVar2 <= pcVar5) && (pcVar5 <= this->End + -uVar6)) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(pcVar5,param_1,uVar6);
    if (iVar3 == 0) {
      pcVar1 = pcVar5 + uVar6;
      if ((param_2 != (TStringToken<char> *)0x0) && (param_2->TokenEnd < pcVar1)) {
        param_2->TokenEnd = pcVar1;
      }
      (__return_storage_ptr__->TypedValue).TokenStart = pcVar5;
      (__return_storage_ptr__->TypedValue).TokenEnd = pcVar1;
      (__return_storage_ptr__->TypedValue).LineNumber = 0;
      (__return_storage_ptr__->TypedValue).CharacterIndex = (int)pcVar5 - (int)pcVar2;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseTokenIgnoreCase @ 1418ef4f0

TOptional<TStringToken<char8_t>_> * __thiscall
TTokenStream<char8_t>::ParseTokenIgnoreCase
          (TTokenStream<char8_t> *this,TOptional<TStringToken<char8_t>_> *__return_storage_ptr__,
          uchar *param_1,TStringToken<char8_t> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  size_t sVar4;
  uchar *puVar5;
  ulong64 uVar6;
  
  if (param_2 == (TStringToken<char8_t> *)0x0) {
    puVar5 = this->ReadPos;
  }
  else {
    puVar5 = param_2->TokenEnd;
  }
  sVar4 = strlen((char *)param_1);
  puVar2 = this->Start;
  uVar6 = (ulong64)(int)sVar4;
  if ((puVar2 <= puVar5) && (puVar5 <= this->End + -uVar6)) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(puVar5,param_1,uVar6);
    if (iVar3 == 0) {
      puVar1 = puVar5 + uVar6;
      if ((param_2 != (TStringToken<char8_t> *)0x0) && (param_2->TokenEnd < puVar1)) {
        param_2->TokenEnd = puVar1;
      }
      (__return_storage_ptr__->TypedValue).TokenStart = puVar5;
      (__return_storage_ptr__->TypedValue).TokenEnd = puVar1;
      (__return_storage_ptr__->TypedValue).LineNumber = 0;
      (__return_storage_ptr__->TypedValue).CharacterIndex = (int)puVar5 - (int)puVar2;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseTokenIgnoreCase @ 1418ef5c0

TOptional<TStringToken<wchar_t>_> * __thiscall
TTokenStream<wchar_t>::ParseTokenIgnoreCase
          (TTokenStream<wchar_t> *this,TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,
          wchar_t *param_1,TStringToken<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  size_t sVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  
  if (param_2 == (TStringToken<wchar_t> *)0x0) {
    pwVar6 = this->ReadPos;
  }
  else {
    pwVar6 = param_2->TokenEnd;
  }
  sVar4 = wcslen(param_1);
  pwVar2 = this->Start;
  uVar5 = (ulong64)(int)sVar4;
  if ((pwVar2 <= pwVar6) && (pwVar6 <= this->End + -uVar5)) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar6,param_1,uVar5);
    if (iVar3 == 0) {
      pwVar1 = pwVar6 + uVar5;
      if ((param_2 != (TStringToken<wchar_t> *)0x0) && (param_2->TokenEnd < pwVar1)) {
        param_2->TokenEnd = pwVar1;
      }
      (__return_storage_ptr__->TypedValue).TokenStart = pwVar6;
      (__return_storage_ptr__->TypedValue).TokenEnd = pwVar1;
      (__return_storage_ptr__->TypedValue).LineNumber = 0;
      (__return_storage_ptr__->TypedValue).CharacterIndex =
           (int)((longlong)pwVar6 - (longlong)pwVar2 >> 1);
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseWhitespace @ 1418f0030

TOptional<TStringToken<char>_> * __thiscall
TTokenStream<char>::ParseWhitespace
          (TTokenStream<char> *this,TOptional<TStringToken<char>_> *__return_storage_ptr__,
          TStringToken<char> *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  char **ppcVar5;
  byte *pbVar6;
  
  if (param_1 == (TStringToken<char> *)0x0) {
    pbVar4 = (byte *)this->ReadPos;
  }
  else {
    pbVar4 = (byte *)param_1->TokenEnd;
  }
  pbVar1 = (byte *)this->Start;
  if (pbVar1 <= pbVar4) {
    pbVar6 = (byte *)(this->End + -1);
    if (pbVar4 <= pbVar6) {
      ppcVar5 = &param_1->TokenEnd;
      if (param_1 == (TStringToken<char> *)0x0) {
        ppcVar5 = &this->ReadPos;
      }
      pbVar4 = (byte *)*ppcVar5;
      if ((pbVar1 <= pbVar4) && (pbVar4 <= pbVar6)) {
        pbVar6 = pbVar4;
        if (pbVar4 != (byte *)this->End) {
          do {
            iVar3 = isspace((uint)*pbVar6);
            if (iVar3 == 0) break;
            pbVar6 = pbVar6 + 1;
          } while (pbVar6 != (byte *)this->End);
          if (pbVar6 != pbVar4) {
            if ((param_1 != (TStringToken<char> *)0x0) && (param_1->TokenEnd < pbVar6)) {
              param_1->TokenEnd = (char *)pbVar6;
            }
            lVar2 = (ulonglong)(uint)((int)pbVar4 - (int)pbVar1) << 0x20;
            (__return_storage_ptr__->TypedValue).TokenStart = (char *)pbVar4;
            (__return_storage_ptr__->TypedValue).TokenEnd = (char *)pbVar6;
            (__return_storage_ptr__->TypedValue).LineNumber = (int)lVar2;
            (__return_storage_ptr__->TypedValue).CharacterIndex = (int)((ulonglong)lVar2 >> 0x20);
            __return_storage_ptr__->bIsSet = true;
            return __return_storage_ptr__;
          }
        }
      }
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseWhitespace @ 1418f0170

TOptional<TStringToken<char8_t>_> * __thiscall
TTokenStream<char8_t>::ParseWhitespace
          (TTokenStream<char8_t> *this,TOptional<TStringToken<char8_t>_> *__return_storage_ptr__,
          TStringToken<char8_t> *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  uchar **ppuVar5;
  byte *pbVar6;
  
  if (param_1 == (TStringToken<char8_t> *)0x0) {
    pbVar4 = this->ReadPos;
  }
  else {
    pbVar4 = param_1->TokenEnd;
  }
  pbVar1 = this->Start;
  if (pbVar1 <= pbVar4) {
    pbVar6 = this->End + -1;
    if (pbVar4 <= pbVar6) {
      ppuVar5 = &param_1->TokenEnd;
      if (param_1 == (TStringToken<char8_t> *)0x0) {
        ppuVar5 = &this->ReadPos;
      }
      pbVar4 = *ppuVar5;
      if ((pbVar1 <= pbVar4) && (pbVar4 <= pbVar6)) {
        pbVar6 = pbVar4;
        if (pbVar4 != this->End) {
          do {
            iVar3 = isspace((uint)*pbVar6);
            if (iVar3 == 0) break;
            pbVar6 = pbVar6 + 1;
          } while (pbVar6 != this->End);
          if (pbVar6 != pbVar4) {
            if ((param_1 != (TStringToken<char8_t> *)0x0) && (param_1->TokenEnd < pbVar6)) {
              param_1->TokenEnd = pbVar6;
            }
            lVar2 = (ulonglong)(uint)((int)pbVar4 - (int)pbVar1) << 0x20;
            (__return_storage_ptr__->TypedValue).TokenStart = pbVar4;
            (__return_storage_ptr__->TypedValue).TokenEnd = pbVar6;
            (__return_storage_ptr__->TypedValue).LineNumber = (int)lVar2;
            (__return_storage_ptr__->TypedValue).CharacterIndex = (int)((ulonglong)lVar2 >> 0x20);
            __return_storage_ptr__->bIsSet = true;
            return __return_storage_ptr__;
          }
        }
      }
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseWhitespace @ 1418f02b0

TOptional<TStringToken<wchar_t>_> * __thiscall
TTokenStream<wchar_t>::ParseWhitespace
          (TTokenStream<wchar_t> *this,TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,
          TStringToken<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1 == (TStringToken<wchar_t> *)0x0) {
    pwVar1 = this->ReadPos;
  }
  else {
    pwVar1 = param_1->TokenEnd;
  }
  if ((this->Start <= pwVar1) && (pwVar1 <= this->End + -1)) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TTokenStream<wchar_t>::ParseWhitespace'::__l5::<lambda_1>,enum_EParseState,wchar_t>
               ::Call;
    ParseToken(this,__return_storage_ptr__,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_18,
               param_1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// PeekChar @ 1418f0430

char __thiscall TTokenStream<char>::PeekChar(TTokenStream<char> *this,int param_1)

{
  if (this->ReadPos + param_1 < this->End) {
    return this->ReadPos[param_1];
  }
  return '\0';
}

// PeekChar @ 1418f0450

uchar __thiscall TTokenStream<char8_t>::PeekChar(TTokenStream<char8_t> *this,int param_1)

{
  if (this->ReadPos + param_1 < this->End) {
    return this->ReadPos[param_1];
  }
  return '\0';
}

// PeekChar @ 1418f0470

wchar_t __thiscall TTokenStream<wchar_t>::PeekChar(TTokenStream<wchar_t> *this,int param_1)

{
  if (this->ReadPos + param_1 < this->End) {
    return this->ReadPos[param_1];
  }
  return L'\0';
}

// SetReadPos @ 1418f9010

void __thiscall TTokenStream<char>::SetReadPos(TTokenStream<char> *this,TStringToken<char> *param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar1 = param_1->TokenEnd;
  if ((this->Start <= pcVar1) && (pcVar1 <= this->End)) {
    this->ReadPos = pcVar1;
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6855721686587670253>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                     ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetReadPos @ 1418f9070

void __thiscall
TTokenStream<char8_t>::SetReadPos(TTokenStream<char8_t> *this,TStringToken<char8_t> *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = param_1->TokenEnd;
  if ((this->Start <= puVar1) && (puVar1 <= this->End)) {
    this->ReadPos = puVar1;
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6855721686587670253>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                     ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetReadPos @ 1418f90d0

void __thiscall
TTokenStream<wchar_t>::SetReadPos(TTokenStream<wchar_t> *this,TStringToken<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  
  pwVar1 = param_1->TokenEnd;
  if ((this->Start <= pwVar1) && (pwVar1 <= this->End)) {
    this->ReadPos = pwVar1;
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6855721686587670253>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                     ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

