// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// FPlate @ 1444f1bf0

FPlate * __thiscall Audio::FPlateReverb::FPlate::FPlate(FPlate *this)

{
  FDelayAPF::FDelayAPF(&this->ModulatedAPF);
  FDelay::FDelay(&this->Delay1);
  (this->LPF).A0 = 1.0;
  (this->LPF).Z1 = 0.0;
  (this->LPF).CutoffFrequency = 0.0;
  (this->LPF).B1 = 0.0;
  FDelayAPF::FDelayAPF(&this->APF);
  FDelay::FDelay(&this->Delay2);
  this->PreviousSample = 0.0;
  this->ModulatedBaseDelayMsec = 0.0;
  this->ModulatedDeltaDelayMsec = 0.0;
  return this;
}

