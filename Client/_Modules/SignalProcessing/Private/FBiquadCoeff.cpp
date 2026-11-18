// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// FBiquadCoeff @ 1444a2580

FBiquadCoeff * __thiscall Audio::FBiquadFilter::FBiquadCoeff::FBiquadCoeff(FBiquadCoeff *this)

{
  this->A0 = 1.0;
  this->A1 = 0.0;
  this->A2 = 0.0;
  this->B1 = 0.0;
  this->B2 = 0.0;
  this->X_Z1 = 0.0;
  this->X_Z2 = 0.0;
  this->Y_Z1 = 0.0;
  this->Y_Z2 = 0.0;
  return this;
}

