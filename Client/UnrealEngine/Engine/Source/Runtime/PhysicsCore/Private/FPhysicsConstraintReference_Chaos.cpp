// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// IsValid @ 1441b1840

bool __thiscall FPhysicsConstraintReference_Chaos::IsValid(FPhysicsConstraintReference_Chaos *this)

{
  if (this->Constraint == (FConstraintBase *)0x0) {
    return false;
  }
  return this->Constraint->Proxy != (IPhysicsProxyBase *)0x0;
}

