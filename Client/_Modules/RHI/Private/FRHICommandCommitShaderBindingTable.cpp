// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9ef00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandCommitShaderBindingTable::Execute
          (FRHICommandCommitShaderBindingTable *this,FRHICommandListBase *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHICommandContext *pIVar1;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x280);
                    /* WARNING: Could not recover jumptable at 0x000145c9ef2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,this->SBT,this->InlineBindingDataBuffer,UNRECOVERED_JUMPTABLE);
  return;
}

