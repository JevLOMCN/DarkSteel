// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// operator() @ 143d97a30

void __thiscall
Chaos::FPhysicsObjectDeleter::operator()(FPhysicsObjectDeleter *this,FPhysicsObject *param_1)

{
  ::operator_delete(param_1,0x18);
  return;
}

