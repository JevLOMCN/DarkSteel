// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraGpuDispatchList @ 1492d1040

FNiagaraGpuDispatchList * __thiscall
FNiagaraGpuDispatchList::FNiagaraGpuDispatchList(FNiagaraGpuDispatchList *this)

{
  (this->CountsToRelease).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CountsToRelease).ArrayNum = 0;
  (this->CountsToRelease).ArrayMax = 0;
  (this->DispatchGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DispatchGroups).ArrayNum = 0;
  (this->DispatchGroups).ArrayMax = 0;
  return this;
}

// ~FNiagaraGpuDispatchList @ 1492d47a0

void __thiscall FNiagaraGpuDispatchList::~FNiagaraGpuDispatchList(FNiagaraGpuDispatchList *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraGpuDispatchGroup,int>
            ((FNiagaraGpuDispatchGroup *)(this->DispatchGroups).AllocatorInstance.Data,
             (this->DispatchGroups).ArrayNum);
  pFVar1 = (this->DispatchGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CountsToRelease).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

