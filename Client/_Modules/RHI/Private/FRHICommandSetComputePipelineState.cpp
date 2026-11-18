// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9ff10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetComputePipelineState::Execute
          (FRHICommandSetComputePipelineState *this,FRHICommandListBase *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FRHIComputePipelineState *pFVar1;
  IRHIComputeContext *pIVar2;
  
  pFVar1 = ExecuteSetComputePipelineState(this->ComputePipelineState);
  pIVar2 = FRHICommandListBase::GetComputeContext(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000145c9ff48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar2,pFVar1,UNRECOVERED_JUMPTABLE);
  return;
}

