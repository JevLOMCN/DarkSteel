// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// FFDNDelayData @ 1444ee5c0

FFDNDelayData * __thiscall
Audio::FEarlyReflections::FFDNDelayData::FFDNDelayData(FFDNDelayData *this)

{
  FDelay::FDelay(&this->PreDelay);
  (this->InputLPF).A0 = 1.0;
  (this->InputLPF).Z1 = 0.0;
  (this->InputLPF).CutoffFrequency = 0.0;
  (this->InputLPF).B1 = 0.0;
  FDelayAPF::FDelayAPF(this->APF);
  FDelayAPF::FDelayAPF(this->APF + 1);
  FDelayAPF::FDelayAPF(this->APF + 2);
  FDelayAPF::FDelayAPF(this->APF + 3);
  this->LPF[0].CutoffFrequency = 0.0;
  this->LPF[0].B1 = 0.0;
  this->LPF[0].A0 = 1.0;
  this->LPF[0].Z1 = 0.0;
  this->LPF[1].CutoffFrequency = 0.0;
  this->LPF[1].B1 = 0.0;
  this->LPF[1].A0 = 1.0;
  this->LPF[1].Z1 = 0.0;
  this->LPF[2].CutoffFrequency = 0.0;
  this->LPF[2].B1 = 0.0;
  this->LPF[2].A0 = 1.0;
  this->LPF[2].Z1 = 0.0;
  this->LPF[3].CutoffFrequency = 0.0;
  this->LPF[3].B1 = 0.0;
  this->LPF[3].A0 = 1.0;
  this->LPF[3].Z1 = 0.0;
  return this;
}

// ~FFDNDelayData @ 1444f3780

void __thiscall Audio::FEarlyReflections::FFDNDelayData::~FFDNDelayData(FFDNDelayData *this)

{
  FDelayAPF::~FDelayAPF(this->APF + 3);
  FDelayAPF::~FDelayAPF(this->APF + 2);
  FDelayAPF::~FDelayAPF(this->APF + 1);
  FDelayAPF::~FDelayAPF(this->APF);
  FDelay::~FDelay(&this->PreDelay);
  return;
}

