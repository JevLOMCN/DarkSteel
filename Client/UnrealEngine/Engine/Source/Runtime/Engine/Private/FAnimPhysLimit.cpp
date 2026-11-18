// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAnimPhysLimit @ 1474b1ab0

FAnimPhysLimit * __thiscall
FAnimPhysLimit::FAnimPhysLimit
          (FAnimPhysLimit *this,FAnimPhysRigidBody *param_1,FAnimPhysRigidBody *param_2)

{
  this->Bodies[0] = param_1;
  this->Bodies[1] = param_2;
  return this;
}

