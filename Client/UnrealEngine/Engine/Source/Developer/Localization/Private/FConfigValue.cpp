// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// FConfigValue @ 146b42830

FConfigValue * __thiscall
FConfigValue::FConfigValue(FConfigValue *this,FString *param_1,EValueType param_2)

{
  bool bVar1;
  uint uVar2;
  wchar_t *pwVar3;
  
  (this->SavedValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedValue).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedValue).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->SavedValue).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  this->ValueType = param_2;
  this->bExpandOnDemand = false;
  if ((this->SavedValue).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::StrCrc32<wchar_t>(pwVar3,0);
  this->SavedValueHash = uVar2;
  bVar1 = NeedsToExpandValue(this);
  this->bExpandOnDemand = bVar1;
  return this;
}

// FConfigValue @ 146b428a0

FConfigValue * __thiscall
FConfigValue::FConfigValue(FConfigValue *this,wchar_t *param_1,EValueType param_2)

{
  bool bVar1;
  uint uVar2;
  wchar_t *pwVar3;
  
  ::FString::FString(&this->SavedValue,param_1);
  this->ValueType = param_2;
  this->bExpandOnDemand = false;
  if ((this->SavedValue).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::StrCrc32<wchar_t>(pwVar3,0);
  this->SavedValueHash = uVar2;
  bVar1 = NeedsToExpandValue(this);
  this->bExpandOnDemand = bVar1;
  return this;
}

