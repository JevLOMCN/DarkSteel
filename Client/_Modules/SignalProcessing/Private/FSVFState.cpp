// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// ProcessSample @ 1444e0790

void __thiscall
Audio::FDynamicStateVariableFilter::FSVFState::ProcessSample
          (FSVFState *this,FSVFCoefficients *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->Z2;
  fVar2 = this->Z1;
  fVar4 = param_2 - fVar1;
  this->V3 = fVar4;
  fVar3 = fVar2 * param_1->A1 + fVar4 * param_1->A2;
  this->V1 = fVar3;
  fVar4 = fVar2 * param_1->A2 + fVar1 + fVar4 * param_1->A3;
  this->Z1 = (fVar3 + fVar3) - fVar2;
  this->V2 = fVar4;
  this->Z2 = (fVar4 + fVar4) - fVar1;
  return;
}

