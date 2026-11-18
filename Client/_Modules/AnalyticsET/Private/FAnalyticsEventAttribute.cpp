// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 12

// FAnalyticsEventAttribute<int_const_&> @ 14318f1c0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,int *param_2)

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
  ::FString::PrintfImpl(&this->AttrValueString,L"%d");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<float_const_&> @ 14318f250

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<float_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,float *param_2)

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
  AnalyticsConversionToString(&this->AttrValueString,*param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<double_const_&> @ 14318f2e0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,double *param_2)

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
  AnalyticsConversionToString(&this->AttrValueString,*param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<wchar_t_const_*_const_&> @ 14318f370

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<wchar_t_const_*_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,wchar_t **param_2)

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

// FAnalyticsEventAttribute<FJsonFragment_const_&> @ 14318f400

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<FJsonFragment_const_&>
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

// FAnalyticsEventAttribute<FJsonNull_const_&> @ 14318f4a0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<FJsonNull_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,FJsonNull *param_2)

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
  ::FString::FString(&this->AttrValueString,L"null");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<FString_const_&> @ 14318f520

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,FString *param_2)

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
  ::FString::FString(&this->AttrValueString,param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<__int64_const_&> @ 14318f5b0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<__int64_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,long64 *param_2)

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
  ::FString::PrintfImpl(&this->AttrValueString,L"%lld");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<unsigned___int64_const_&> @ 14318f640

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned___int64_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,ulong64 *param_2)

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
  ::FString::PrintfImpl(&this->AttrValueString,L"%llu");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<bool_const_&> @ 14318f6d0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,bool *param_2)

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
  if (*param_2 == false) {
    pwVar3 = L"false";
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

// FAnalyticsEventAttribute<wchar_t_const_*> @ 14318f770

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<wchar_t_const_*>
          (FAnalyticsEventAttribute *this,FString *param_1,wchar_t **param_2)

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

// FAnalyticsEventAttribute<bool> @ 14318f800

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool>
          (FAnalyticsEventAttribute *this,FString *param_1,bool *param_2)

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
  if (*param_2 == false) {
    pwVar3 = L"false";
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

