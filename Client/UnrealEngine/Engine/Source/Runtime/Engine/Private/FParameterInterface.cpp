// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FParameterInterface @ 14869a260

void __thiscall Audio::FParameterInterface::~FParameterInterface(FParameterInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UClassOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FParameterInterface::FEnvironmentVariable,int>
            ((FEnvironmentVariable *)(this->Environment).AllocatorInstance.Data,
             (this->Environment).ArrayNum);
  pFVar1 = (this->Environment).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FParameterInterface::FOutput,int>
            ((FOutput *)(this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FParameterInterface::FInput,int>
            ((FInput *)(this->Inputs).AllocatorInstance.Data,(this->Inputs).ArrayNum);
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

