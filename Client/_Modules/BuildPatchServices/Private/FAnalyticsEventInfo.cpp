// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FAnalyticsEventInfo @ 14327e1e0

FAnalyticsEventInfo * __thiscall
BuildPatchServices::FAnalyticsEventInfo::FAnalyticsEventInfo
          (FAnalyticsEventInfo *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  (this->EventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventName).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventName).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->EventName).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = param_2->ArrayNum;
  (this->Attributes).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

