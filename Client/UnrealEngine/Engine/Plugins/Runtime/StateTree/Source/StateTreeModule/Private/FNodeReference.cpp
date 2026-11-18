// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FNodeReference @ 14d4b16a0

FNodeReference * __thiscall
UE::StateTree::Debug::FNodeReference::FNodeReference
          (FNodeReference *this,TNotNull<UStateTree_const_*> param_1,FStateTreeIndex16 param_2)

{
  (this->StateTree).Val = param_1.Val;
  (this->Index).Value = param_2.Value;
  return this;
}

