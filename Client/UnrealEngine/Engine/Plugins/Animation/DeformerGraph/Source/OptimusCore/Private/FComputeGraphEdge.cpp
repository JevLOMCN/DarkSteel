// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FComputeGraphEdge @ 14e14f7f0

FComputeGraphEdge * __thiscall
FComputeGraphEdge::FComputeGraphEdge(FComputeGraphEdge *this,FComputeGraphEdge *param_1)

{
  this->KernelIndex = param_1->KernelIndex;
  this->KernelBindingIndex = param_1->KernelBindingIndex;
  this->DataInterfaceIndex = param_1->DataInterfaceIndex;
  this->DataInterfaceBindingIndex = param_1->DataInterfaceBindingIndex;
  this->bKernelInput = param_1->bKernelInput;
  ::FString::FString(&this->BindingFunctionNameOverride,&param_1->BindingFunctionNameOverride);
  ::FString::FString(&this->BindingFunctionNamespace,&param_1->BindingFunctionNamespace);
  return this;
}

// FComputeGraphEdge @ 14e14f850

FComputeGraphEdge * __thiscall FComputeGraphEdge::FComputeGraphEdge(FComputeGraphEdge *this)

{
  this->KernelIndex = 0;
  this->KernelBindingIndex = 0;
  this->DataInterfaceIndex = 0;
  this->DataInterfaceBindingIndex = 0;
  this->bKernelInput = false;
  (this->BindingFunctionNameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingFunctionNameOverride).Data.ArrayNum = 0;
  (this->BindingFunctionNameOverride).Data.ArrayMax = 0;
  (this->BindingFunctionNamespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingFunctionNamespace).Data.ArrayNum = 0;
  (this->BindingFunctionNamespace).Data.ArrayMax = 0;
  return this;
}

// ~FComputeGraphEdge @ 14e161030

void __thiscall FComputeGraphEdge::~FComputeGraphEdge(FComputeGraphEdge *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BindingFunctionNamespace).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingFunctionNameOverride).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

