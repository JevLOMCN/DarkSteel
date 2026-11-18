// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FDynamicParameter @ 14761d720

FDynamicParameter * __thiscall
FDynamicParameter::FDynamicParameter(FDynamicParameter *this,float param_1)

{
  this->CurrValue = param_1;
  this->DeltaValue = 0.0;
  this->CurrTimeSec = 0.0;
  this->DurationSec = 0.0;
  this->LastTime = 0.0;
  this->StartValue = param_1;
  this->TargetValue = param_1;
  return this;
}

// Set @ 14765de90

void __thiscall FDynamicParameter::Set(FDynamicParameter *this,float param_1,float param_2)

{
  if ((param_1 != this->TargetValue) || (param_2 != this->DurationSec)) {
    this->TargetValue = param_1;
    if (0.0 < param_2) {
      this->StartValue = this->CurrValue;
      this->DurationSec = param_2;
      this->CurrTimeSec = 0.0;
      this->DeltaValue = param_1 - this->CurrValue;
      return;
    }
    this->StartValue = param_1;
    this->CurrValue = param_1;
    this->DeltaValue = 0.0;
    this->DurationSec = 0.0;
  }
  return;
}

// Update @ 14766cab0

void __thiscall FDynamicParameter::Update(FDynamicParameter *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (0.0 < this->DurationSec) {
    fVar1 = this->CurrTimeSec;
    fVar2 = fVar1 / this->DurationSec;
    if (fVar2 < __real_3f800000) {
      this->CurrValue = this->StartValue + fVar2 * this->DeltaValue;
      this->CurrTimeSec = fVar1 + param_1;
      return;
    }
    this->DurationSec = 0.0;
    this->CurrValue = this->StartValue + this->DeltaValue;
    this->CurrTimeSec = fVar1 + param_1;
  }
  return;
}

