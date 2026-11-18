// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9f560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandDrawIndexedIndirect::Execute
          (FRHICommandDrawIndexedIndirect *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  (**(code **)(pIVar1->_padding_ + 0x1f0))
            (pIVar1,this->IndexBufferRHI,this->ArgumentsBufferRHI,this->DrawArgumentsIndex,
             this->NumInstances);
  return;
}

