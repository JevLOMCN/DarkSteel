// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// TVector4<float><float> @ 1448d0f90

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float><float>
          (TVector4<float> *this,TVector<float> *param_1,float param_2)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = param_2;
  return this;
}

// TVector4<float><double> @ 1448d10e0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float><double>
          (TVector4<float> *this,TVector<float> *param_1,double param_2)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = (float)param_2;
  return this;
}

