// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FNavigationInvokerRaw @ 146d73f40

FNavigationInvokerRaw * __thiscall
FNavigationInvokerRaw::FNavigationInvokerRaw
          (FNavigationInvokerRaw *this,TVector<double> *param_1,float param_2,float param_3,
          FNavAgentSelector *param_4,ENavigationInvokerPriority param_5)

{
  FNavAgentSelector_u_0 FVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  this->RadiusMin = param_2;
  this->RadiusMax = param_3;
  FVar1 = param_4->field0_0x0;
  this->Priority = param_5;
  (this->SupportedAgents).field0_0x0 = FVar1;
  return this;
}

