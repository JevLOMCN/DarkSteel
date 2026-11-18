// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// FAnalyticsEventAttribute<std::atomic<bool>_&> @ 14e4ce5a0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<std::atomic<bool>_&>
          (FAnalyticsEventAttribute *this,FString *param_1,atomic<bool> *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  
  pFVar2 = CheckName(this,param_1);
  pwVar3 = L"true";
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (*param_2 == (atomic<bool>)0x0) {
    pwVar3 = L"false";
  }
  ::FString::FString(&this->AttrValueString,pwVar3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<wchar_t_const_(&)[6]> @ 14e4ce850

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<wchar_t_const_(&)[6]>
          (FAnalyticsEventAttribute *this,FString *param_1,wchar_t (*param_2) [6])

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  pFVar2 = CheckName(this,param_1);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::FString(&this->AttrValueString,*param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<FJsonFragment> @ 14e4ce970

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<FJsonFragment>
          (FAnalyticsEventAttribute *this,FString *param_1,FJsonFragment *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  
  pFVar2 = CheckName(this,param_1);
  pwVar3 = L"null";
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (1 < (param_2->FragmentString).Data.ArrayNum) {
    pwVar3 = (wchar_t *)(param_2->FragmentString).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&this->AttrValueString,pwVar3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

