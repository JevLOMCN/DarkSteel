// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 8

// FJsonValueBoolean @ 141dc4d30

FJsonValueBoolean * __thiscall
FJsonValueBoolean::FJsonValueBoolean(FJsonValueBoolean *this,bool param_1)

{
  this->Value = param_1;
  this->_padding_ = (longlong)&___7FJsonValueBoolean__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  return this;
}

// ~FJsonValueBoolean @ 141dc6520

void __thiscall FJsonValueBoolean::~FJsonValueBoolean(FJsonValueBoolean *this)

{
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  return;
}

// GetMemoryFootprint @ 141dd6870

ulong64 __thiscall FJsonValueBoolean::GetMemoryFootprint(FJsonValueBoolean *this)

{
  return 0x18;
}

// GetType @ 141dd73a0

FString * __thiscall
FJsonValueBoolean::GetType(FJsonValueBoolean *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Boolean");
  return __return_storage_ptr__;
}

// TryGetBool @ 141df9b00

bool __thiscall FJsonValueBoolean::TryGetBool(FJsonValueBoolean *this,bool *param_1)

{
  *param_1 = this->Value;
  return true;
}

// TryGetNumber @ 141dfb810

bool __thiscall FJsonValueBoolean::TryGetNumber(FJsonValueBoolean *this,double *param_1)

{
  *param_1 = (double)(this->Value != false);
  return true;
}

// TryGetString @ 141dfc210

bool __thiscall FJsonValueBoolean::TryGetString(FJsonValueBoolean *this,FString *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (this->Value != false) {
    pwVar1 = L"true";
  }
  ::FString::operator=(param_1,pwVar1);
  return true;
}

// TryGetUtf8String @ 141dfc850

bool __thiscall FJsonValueBoolean::TryGetUtf8String(FJsonValueBoolean *this,FUtf8String *param_1)

{
  char *pcVar1;
  
  pcVar1 = "false";
  if (this->Value != false) {
    pcVar1 = "true";
  }
  FUtf8String::operator=(param_1,(uchar *)pcVar1);
  return true;
}

