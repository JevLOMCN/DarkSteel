// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9fce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandResourceTransition::Execute
          (FRHICommandResourceTransition *this,FRHICommandListBase *param_1)

{
  IRHIComputeContext *pIVar1;
  FRHITransition **ppFVar2;
  FRHITransition **local_18;
  undefined4 uStack_10;
  
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  ppFVar2 = &this->Transition;
  uStack_10 = 1;
  local_18 = ppFVar2;
  (**(code **)(pIVar1->_padding_ + 0x48))(pIVar1,&local_18);
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  uStack_10 = 1;
  local_18 = ppFVar2;
  (**(code **)(pIVar1->_padding_ + 0x50))(pIVar1,&local_18);
  FRHITransition::Cleanup(*ppFVar2);
  return;
}

