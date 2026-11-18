// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// TShear2<float> @ 143055bf0

TShear2<float> * __thiscall
TShear2<float>::TShear2<float>(TShear2<float> *this,float param_1,float param_2)

{
  (this->Shear).field0_0x0._s_0.X = param_1;
  (this->Shear).field0_0x0._s_0.Y = param_2;
  return this;
}

// TShear2<float> @ 143055c10

TShear2<float> * __thiscall TShear2<float>::TShear2<float>(TShear2<float> *this)

{
  (this->Shear).field0_0x0 = (TVector2<float>_u_0)0x0;
  return this;
}

// GetVector @ 1430ceb00

TVector2<float> * __thiscall TShear2<float>::GetVector(TShear2<float> *this)

{
  return &this->Shear;
}

