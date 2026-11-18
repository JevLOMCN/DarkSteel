// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Update @ 1460fc610

/* WARNING: Enum "Type": Some values do not have unique names */

ECachedEntityManagerState __thiscall
UE::MovieScene::FCachedEntityManagerState::Update
          (FCachedEntityManagerState *this,FEntityManager *param_1)

{
  if ((this->LastSystemVersion != 0) &&
     (param_1->StructureMutationSystemSerialNumber <= this->LastSystemVersion)) {
    return UpToDate;
  }
  this->LastSystemVersion = param_1->SystemSerialNumber;
  return Stale;
}

