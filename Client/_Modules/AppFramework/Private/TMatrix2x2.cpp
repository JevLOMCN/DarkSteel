// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// TMatrix2x2<float> @ 143055480

TMatrix2x2<float> * __thiscall
TMatrix2x2<float>::TMatrix2x2<float>
          (TMatrix2x2<float> *this,float param_1,float param_2,float param_3,float param_4)

{
  this->M[1][1] = param_4;
  this->M[0][0] = param_1;
  this->M[0][1] = param_2;
  this->M[1][0] = param_3;
  return this;
}

