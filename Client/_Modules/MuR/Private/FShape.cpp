// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FShape @ 14a976c80

FShape * __thiscall UE::Mutable::Private::FShape::FShape(FShape *this)

{
  *(undefined8 *)&(this->position).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->position).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->up).field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->side).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->side).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->size).field0_0x0 + 4) = 0;
  this->type = '\0';
  return this;
}

