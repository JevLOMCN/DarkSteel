// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9ffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetGPUMask::Execute(FRHICommandSetGPUMask *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIContextArray *pFVar2;
  
  (param_1->PersistentState).CurrentGPUMask.GPUMask = (this->GPUMask).GPUMask;
  for (pFVar2 = &param_1->Contexts; pFVar2 != (FRHIContextArray *)&param_1->NumCommands;
      pFVar2 = (FRHIContextArray *)&pFVar2->field_0x8) {
    plVar1 = *(longlong **)pFVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe8))(plVar1,(this->GPUMask).GPUMask);
    }
  }
  return;
}

