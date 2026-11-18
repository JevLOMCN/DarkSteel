// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9f6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandEndDrawingViewport::Execute
          (FRHICommandEndDrawingViewport *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145c9f6f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 400))(pIVar1,this->Viewport,this->bPresent,this->bLockToVsync);
  return;
}

