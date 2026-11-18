// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// FPlateReverbFastSettings @ 1444f21a0

FPlateReverbFastSettings * __thiscall
Audio::FPlateReverbFastSettings::FPlateReverbFastSettings(FPlateReverbFastSettings *this)

{
  FEarlyReflectionsFastSettings::FEarlyReflectionsFastSettings(&this->EarlyReflections);
  (this->LateReflections).Bandwidth = 0.5;
  (this->LateReflections).LateDelayMsec = 0.0;
  (this->LateReflections).LateGainDB = 0.0;
  this->QuadBehavior = StereoOnly;
  (this->LateReflections).Diffusion = 0.5;
  (this->LateReflections).Dampening = 0.5;
  (this->LateReflections).Decay = 0.5;
  (this->LateReflections).Density = 0.5;
  this->bEnableEarlyReflections = true;
  this->bEnableLateReflections = true;
  return this;
}

// operator== @ 1444f4c00

bool __thiscall
Audio::FPlateReverbFastSettings::operator==
          (FPlateReverbFastSettings *this,FPlateReverbFastSettings *param_1)

{
  bool bVar1;
  
  bVar1 = FEarlyReflectionsFastSettings::operator==
                    (&param_1->EarlyReflections,&this->EarlyReflections);
  if ((((((bVar1) &&
         ((param_1->LateReflections).LateDelayMsec == (this->LateReflections).LateDelayMsec)) &&
        ((param_1->LateReflections).LateGainDB == (this->LateReflections).LateGainDB)) &&
       (((param_1->LateReflections).Bandwidth == (this->LateReflections).Bandwidth &&
        ((param_1->LateReflections).Diffusion == (this->LateReflections).Diffusion)))) &&
      (((param_1->LateReflections).Dampening == (this->LateReflections).Dampening &&
       (((param_1->LateReflections).Decay == (this->LateReflections).Decay &&
        ((param_1->LateReflections).Density == (this->LateReflections).Density)))))) &&
     ((param_1->bEnableEarlyReflections == this->bEnableEarlyReflections &&
      ((param_1->bEnableLateReflections == this->bEnableLateReflections &&
       (param_1->QuadBehavior == this->QuadBehavior)))))) {
    return true;
  }
  return false;
}

// operator!= @ 1444f4d10

bool __thiscall
Audio::FPlateReverbFastSettings::operator!=
          (FPlateReverbFastSettings *this,FPlateReverbFastSettings *param_1)

{
  bool bVar1;
  
  bVar1 = FEarlyReflectionsFastSettings::operator==
                    (&param_1->EarlyReflections,&this->EarlyReflections);
  if ((((((bVar1) &&
         ((param_1->LateReflections).LateDelayMsec == (this->LateReflections).LateDelayMsec)) &&
        ((param_1->LateReflections).LateGainDB == (this->LateReflections).LateGainDB)) &&
       (((param_1->LateReflections).Bandwidth == (this->LateReflections).Bandwidth &&
        ((param_1->LateReflections).Diffusion == (this->LateReflections).Diffusion)))) &&
      (((param_1->LateReflections).Dampening == (this->LateReflections).Dampening &&
       (((param_1->LateReflections).Decay == (this->LateReflections).Decay &&
        ((param_1->LateReflections).Density == (this->LateReflections).Density)))))) &&
     ((param_1->bEnableEarlyReflections == this->bEnableEarlyReflections &&
      ((param_1->bEnableLateReflections == this->bEnableLateReflections &&
       (param_1->QuadBehavior == this->QuadBehavior)))))) {
    return false;
  }
  return true;
}

