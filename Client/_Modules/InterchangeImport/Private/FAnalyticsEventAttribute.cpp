// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 11

// FAnalyticsEventAttribute<char_const_(&)[5]> @ 14e6755d0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[5]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [5])

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

// FAnalyticsEventAttribute<char_const_(&)[8]> @ 14e675660

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[8]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [8])

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

// FAnalyticsEventAttribute<char_const_(&)[25]> @ 14e6756f0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[25]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [25])

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

// FAnalyticsEventAttribute<char_const_(&)[31]> @ 14e675780

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[31]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [31])

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

// FAnalyticsEventAttribute<char_const_(&)[36]> @ 14e675810

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[36]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [36])

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

// FAnalyticsEventAttribute<char_const_(&)[40]> @ 14e6758a0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[40]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [40])

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

// FAnalyticsEventAttribute<char_const_(&)[12]> @ 14e675930

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[12]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [12])

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

// FAnalyticsEventAttribute<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_&> @ 14e6ad420

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::
FAnalyticsEventAttribute<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_&>
          (FAnalyticsEventAttribute *this,FString *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

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
  AnalyticsConversionToString<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            (&this->AttrValueString,param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FAnalyticsEventAttribute<char_const_(&)[24]> @ 14e6ad4b0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[24]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [24])

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

// FAnalyticsEventAttribute<char_const_(&)[38]> @ 14e6ad540

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_(&)[38]>
          (FAnalyticsEventAttribute *this,FString *param_1,char (*param_2) [38])

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

// FAnalyticsEventAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> @ 14e6ad5d0

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::
FAnalyticsEventAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

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
  AnalyticsConversionToString<FString,TSizedDefaultAllocator<32>_>(&this->AttrValueString,param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

