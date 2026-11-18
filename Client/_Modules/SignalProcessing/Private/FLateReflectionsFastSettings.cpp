// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// FLateReflectionsFastSettings @ 1444f0490

FLateReflectionsFastSettings * __thiscall
Audio::FLateReflectionsFastSettings::FLateReflectionsFastSettings
          (FLateReflectionsFastSettings *this)

{
  this->Bandwidth = 0.5;
  this->LateDelayMsec = 0.0;
  this->LateGainDB = 0.0;
  this->Diffusion = 0.5;
  this->Dampening = 0.5;
  this->Decay = 0.5;
  this->Density = 0.5;
  return this;
}

// operator== @ 1444f4ba0

bool __thiscall
Audio::FLateReflectionsFastSettings::operator==
          (FLateReflectionsFastSettings *this,FLateReflectionsFastSettings *param_1)

{
  if ((((this->LateDelayMsec == param_1->LateDelayMsec) && (this->LateGainDB == param_1->LateGainDB)
       ) && (this->Bandwidth == param_1->Bandwidth)) &&
     (((this->Diffusion == param_1->Diffusion && (this->Dampening == param_1->Dampening)) &&
      ((this->Decay == param_1->Decay && (this->Density == param_1->Density)))))) {
    return true;
  }
  return false;
}

// operator!= @ 1444f4cb0

bool __thiscall
Audio::FLateReflectionsFastSettings::operator!=
          (FLateReflectionsFastSettings *this,FLateReflectionsFastSettings *param_1)

{
  if ((((this->LateDelayMsec == param_1->LateDelayMsec) && (this->LateGainDB == param_1->LateGainDB)
       ) && (this->Bandwidth == param_1->Bandwidth)) &&
     (((this->Diffusion == param_1->Diffusion && (this->Dampening == param_1->Dampening)) &&
      ((this->Decay == param_1->Decay && (this->Density == param_1->Density)))))) {
    return false;
  }
  return true;
}

