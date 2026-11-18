// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FComputeKernelDefinition @ 149737260

FComputeKernelDefinition * __thiscall
FComputeKernelDefinition::FComputeKernelDefinition
          (FComputeKernelDefinition *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  (this->Symbol).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Symbol).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Symbol).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Symbol).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Define).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Define).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Define).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->Define).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

