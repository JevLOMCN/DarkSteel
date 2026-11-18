// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FRigElementKeyAndIndex @ 14a2da320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyAndIndex * __thiscall
FRigElementKeyAndIndex::FRigElementKeyAndIndex
          (FRigElementKeyAndIndex *this,FRigBaseElement *param_1)

{
  this->Key = &param_1->Key;
  this->Index = &param_1->Index;
  return this;
}

