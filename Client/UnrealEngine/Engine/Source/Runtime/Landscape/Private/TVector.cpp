// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// TVector<double><int> @ 145ef8330

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double><int>(TVector<double> *this,TIntPoint<int> param_1)

{
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.X = (double)param_1.field0_0x0._0_4_;
  (this->field0_0x0)._s_0.Y = (double)param_1.field0_0x0._4_4_;
  return this;
}

