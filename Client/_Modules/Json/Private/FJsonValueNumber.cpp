// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 8

// FJsonValueNumber @ 141dc4d70

FJsonValueNumber * __thiscall
FJsonValueNumber::FJsonValueNumber(FJsonValueNumber *this,double param_1)

{
  this->Value = param_1;
  this->_padding_ = (longlong)&___7FJsonValueNumber__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  return this;
}

// ~FJsonValueNumber @ 141dc6560

void __thiscall FJsonValueNumber::~FJsonValueNumber(FJsonValueNumber *this)

{
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  return;
}

// GetMemoryFootprint @ 141dd6890

ulong64 __thiscall FJsonValueNumber::GetMemoryFootprint(FJsonValueNumber *this)

{
  return 0x18;
}

// GetType @ 141dd7400

FString * __thiscall
FJsonValueNumber::GetType(FJsonValueNumber *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Number");
  return __return_storage_ptr__;
}

// TryGetBool @ 141df9b10

bool __thiscall FJsonValueNumber::TryGetBool(FJsonValueNumber *this,bool *param_1)

{
  if (this->Value != 0.0) {
    *param_1 = true;
    return true;
  }
  *param_1 = false;
  return true;
}

// TryGetNumber @ 141dfb830

bool __thiscall FJsonValueNumber::TryGetNumber(FJsonValueNumber *this,double *param_1)

{
  *param_1 = this->Value;
  return true;
}

// TryGetString @ 141dfc250

bool __thiscall FJsonValueNumber::TryGetString(FJsonValueNumber *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::SanitizeFloat(&local_18,this->Value,0);
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// TryGetUtf8String @ 141dfc890

bool __thiscall FJsonValueNumber::TryGetUtf8String(FJsonValueNumber *this,FUtf8String *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  FUtf8String local_18;
  
  pFVar2 = FUtf8String::SanitizeFloat(&local_18,this->Value,0);
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

