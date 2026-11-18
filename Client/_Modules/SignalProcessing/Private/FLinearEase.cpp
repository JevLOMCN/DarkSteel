// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// FLinearEase @ 1444a4d70

FLinearEase * __thiscall Audio::FLinearEase::FLinearEase(FLinearEase *this)

{
  this->SampleRate = 44100.0;
  this->DurationTicks = 0;
  this->StartValue = 0.0;
  this->CurrentValue = 0.0;
  this->DeltaValue = 0.0;
  this->DefaultDurationTicks = 0;
  this->CurrentTick = 0;
  this->bIsInit = true;
  return this;
}

// ~FLinearEase @ 1444a6820

void __thiscall Audio::FLinearEase::~FLinearEase(FLinearEase *this)

{
  return;
}

