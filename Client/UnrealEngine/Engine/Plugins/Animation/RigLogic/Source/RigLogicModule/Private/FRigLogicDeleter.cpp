// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 1

// operator() @ 14a661920

void __thiscall FRigLogic::FRigLogicDeleter::operator()(FRigLogicDeleter *this,RigLogic *param_1)

{
  rl4::RigLogic::destroy(param_1);
  return;
}

