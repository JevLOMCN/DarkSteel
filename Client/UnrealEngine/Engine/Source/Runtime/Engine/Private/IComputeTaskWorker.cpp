// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SubmitWork @ 1479ee2a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IComputeTaskWorker::SubmitWork
          (IComputeTaskWorker *this,FRDGBuilder *param_1,FName param_2,Type param_3)

{
  FRDGBuilder *local_38;
  FName local_30;
  Type local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  (**(code **)((longlong)*this + 0x18))(0,&local_38);
  return;
}

