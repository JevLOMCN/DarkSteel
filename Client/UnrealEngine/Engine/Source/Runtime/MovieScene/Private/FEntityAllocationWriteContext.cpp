// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FEntityAllocationWriteContext @ 1461184b0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationWriteContext * __thiscall
UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
          (FEntityAllocationWriteContext *this,FEntityManager *param_1)

{
  this->SystemSerial = param_1->SystemSerialNumber;
  return this;
}

