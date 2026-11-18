// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateLoss @ 147fffa70

void __thiscall
TPacketLossData<3>::UpdateLoss(TPacketLossData<3> *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  TPacketLossData<3> *pTVar2;
  float fVar3;
  float fVar4;
  
  piVar1 = &this->TotalPacketsAtPeriodStart;
  fVar3 = 0.0;
  if (param_2 - *piVar1 < 1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)param_1 / (float)(param_2 - *piVar1);
  }
  this->LossPercentage = fVar4;
  this->LossSamples[(int)((uint)param_3 % 3)] = fVar4;
  for (pTVar2 = this; pTVar2 != (TPacketLossData<3> *)piVar1;
      pTVar2 = (TPacketLossData<3> *)(pTVar2->LossSamples + 1)) {
    fVar3 = fVar3 + pTVar2->LossSamples[0];
  }
  fVar3 = fVar3 * __real_3eaaaaab;
  *piVar1 = param_2;
  this->AvgLossPercentage = fVar3;
  return;
}

