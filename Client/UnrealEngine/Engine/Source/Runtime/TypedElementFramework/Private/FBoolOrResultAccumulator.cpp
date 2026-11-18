// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// Add @ 142cec740

void __thiscall
UE::Editor::DataStorage::Queries::Tests::FBoolOrResultAccumulator::Add
          (FBoolOrResultAccumulator *this,bool param_1)

{
  if ((this->Value == false) && (!param_1)) {
    this->Value = false;
    return;
  }
  this->Value = true;
  return;
}

