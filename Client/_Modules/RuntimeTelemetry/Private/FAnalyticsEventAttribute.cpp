// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RuntimeTelemetry
// Functions: 1

// FAnalyticsEventAttribute<FName_const_&> @ 14ea1ee10

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<FName_const_&>
          (FAnalyticsEventAttribute *this,FString *param_1,FName *param_2)

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
  ::LexToString(&this->AttrValueString,param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

