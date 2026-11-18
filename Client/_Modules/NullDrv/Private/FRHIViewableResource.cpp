// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// SetTrackedAccessFromContext @ 1446c9280

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHIViewableResource::SetTrackedAccessFromContext
          (FRHIViewableResource *this,FRHITrackedAccess param_1)

{
  this->TrackedAccess = param_1;
  return;
}

