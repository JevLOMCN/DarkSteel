// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// TTransform2<float><float> @ 14acbf660

TTransform2<float> * __thiscall
TTransform2<float>::TTransform2<float><float>
          (TTransform2<float> *this,TMatrix2x2<float> *param_1,TVector2<float> *param_2)

{
  float afVar1 [2];
  
  afVar1 = param_1->M[1];
  (this->M).M[0] = param_1->M[0];
  (this->M).M[1] = afVar1;
  (this->Trans).field0_0x0 = param_2->field0_0x0;
  return this;
}

