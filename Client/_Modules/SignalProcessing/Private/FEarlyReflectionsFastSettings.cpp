// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// FEarlyReflectionsFastSettings @ 1444a3f90

FEarlyReflectionsFastSettings * __thiscall
Audio::FEarlyReflectionsFastSettings::FEarlyReflectionsFastSettings
          (FEarlyReflectionsFastSettings *this)

{
  this->Gain = 1.0;
  this->PreDelayMsec = 0.0;
  this->Bandwidth = 0.8;
  this->Decay = 0.5;
  this->Absorption = 0.7;
  return this;
}

// operator== @ 1444a6be0

bool __thiscall
Audio::FEarlyReflectionsFastSettings::operator==
          (FEarlyReflectionsFastSettings *this,FEarlyReflectionsFastSettings *param_1)

{
  if ((((this->Gain == param_1->Gain) && (this->PreDelayMsec == param_1->PreDelayMsec)) &&
      (this->Bandwidth == param_1->Bandwidth)) &&
     ((this->Decay == param_1->Decay && (this->Absorption == param_1->Absorption)))) {
    return true;
  }
  return false;
}

// operator!= @ 1444a6c30

bool __thiscall
Audio::FEarlyReflectionsFastSettings::operator!=
          (FEarlyReflectionsFastSettings *this,FEarlyReflectionsFastSettings *param_1)

{
  if ((((this->Gain == param_1->Gain) && (this->PreDelayMsec == param_1->PreDelayMsec)) &&
      (this->Bandwidth == param_1->Bandwidth)) &&
     ((this->Decay == param_1->Decay && (this->Absorption == param_1->Absorption)))) {
    return false;
  }
  return true;
}

