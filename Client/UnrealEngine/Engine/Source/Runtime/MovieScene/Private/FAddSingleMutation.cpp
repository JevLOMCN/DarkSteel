// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// CreateMutation @ 14612aa10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAddSingleMutation::CreateMutation
          (FAddSingleMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  FComponentMask::Set(param_2,(FComponentTypeID)(this->ComponentToAdd).Value);
  return;
}

