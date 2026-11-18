// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9f930

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandExecuteMultiIndirectClusterOperation::Execute
          (FRHICommandExecuteMultiIndirectClusterOperation *this,FRHICommandListBase *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHIComputeContext *pIVar1;
  
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x128);
                    /* WARNING: Could not recover jumptable at 0x000145c9f957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,&this->Params,UNRECOVERED_JUMPTABLE);
  return;
}

