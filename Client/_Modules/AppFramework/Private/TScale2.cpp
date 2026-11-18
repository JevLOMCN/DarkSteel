// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// TScale2<float> @ 1430555a0

TScale2<float> * __thiscall
TScale2<float>::TScale2<float>(TScale2<float> *this,float param_1,float param_2)

{
  (this->Scale).field0_0x0._s_0.X = param_1;
  (this->Scale).field0_0x0._s_0.Y = param_2;
  return this;
}

// TScale2<float> @ 1430555c0

TScale2<float> * __thiscall TScale2<float>::TScale2<float>(TScale2<float> *this)

{
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  return this;
}

// GetVector @ 1430ceaf0

TVector2<float> * __thiscall TScale2<float>::GetVector(TScale2<float> *this)

{
  return &this->Scale;
}

