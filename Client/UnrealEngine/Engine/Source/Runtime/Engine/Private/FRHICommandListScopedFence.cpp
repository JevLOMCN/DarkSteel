// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FRHICommandListScopedFence @ 147c310c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListScopedFence::~FRHICommandListScopedFence(FRHICommandListScopedFence *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *local_res8;
  
  if (this->bFenceRequested != false) {
    (this->RHICmdList->PersistentState).CurrentFenceScope = (FRHICommandListScopedFence *)0x0;
    FRHICommandListBase::RHIThreadFence(this->RHICmdList,true);
    if (local_res8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res8 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  (this->RHICmdList->PersistentState).CurrentFenceScope = this->Previous;
  return;
}

