// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145ca0200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetStereoViewport::Execute
          (FRHICommandSetStereoViewport *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  (**(code **)(pIVar1->_padding_ + 0x1a8))
            (pIVar1,this->LeftMinX,this->RightMinX,this->LeftMinY,this->RightMinY,this->MinZ,
             this->LeftMaxX,this->RightMaxX,this->LeftMaxY,this->RightMaxY,this->MaxZ);
  return;
}

