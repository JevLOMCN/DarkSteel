// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// SetValue @ 146522a30

void __thiscall Audio::FParam::SetValue(FParam *this,float param_1,int param_2)

{
  this->TargetValue = param_1;
  if ((this->bIsInit == false) && (param_2 != 0)) {
    this->DeltaValue = (param_1 - this->CurrentValue) / (float)param_2;
    this->StartingValue = this->CurrentValue;
    return;
  }
  this->CurrentValue = param_1;
  this->bIsInit = false;
  this->DeltaValue = 0.0;
  this->StartingValue = param_1;
  return;
}

