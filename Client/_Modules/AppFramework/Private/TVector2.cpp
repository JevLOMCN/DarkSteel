// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// TVector2<double><float> @ 14303ff90

TVector2<double> * __thiscall
UE::Math::TVector2<double>::TVector2<double><float>(TVector2<double> *this,TVector2<float> *param_1)

{
  TVector2<float>_u_0_s_0 TVar1;
  
  TVar1 = (param_1->field0_0x0)._s_0;
  (this->field0_0x0)._s_0.X = (double)TVar1.X;
  (this->field0_0x0)._s_0.Y = (double)TVar1.Y;
  return this;
}

