// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// FNumericUnit<float> @ 14a7a6640

FNumericUnit<float> * __thiscall
FNumericUnit<float>::FNumericUnit<float>(FNumericUnit<float> *this,float *param_1,EUnit param_2)

{
  this->Value = *param_1;
  this->Units = param_2;
  return this;
}

