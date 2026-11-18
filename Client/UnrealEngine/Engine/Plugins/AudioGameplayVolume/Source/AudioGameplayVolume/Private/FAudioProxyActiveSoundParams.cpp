// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 2

// FAudioProxyActiveSoundParams @ 14d99eea0

FAudioProxyActiveSoundParams * __thiscall
FAudioProxyActiveSoundParams::FAudioProxyActiveSoundParams
          (FAudioProxyActiveSoundParams *this,FAudioGameplayActiveSoundInfo *param_1,
          FAudioGameplayVolumeListener *param_2)

{
  this->SourceInteriorVolume = param_1->SourceInteriorVolume;
  this->SourceInteriorLPF = param_1->SourceInteriorLPF;
  this->bAllowSpatialization = false;
  this->bUsingWorldSettings = (param_1->InteriorSettings).InteriorSettings.bIsWorldSettings;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSends).ArrayNum = 0;
  (this->SoundSubmixSends).ArrayMax = 0;
  this->bListenerInVolume = false;
  this->bAffectedByAttenuation = false;
  this->bAffectedByFilter = false;
  this->Listener = param_2;
  this->Sound = param_1;
  return this;
}

// UpdateInteriorValues @ 14d9abfc0

void __thiscall
FAudioProxyActiveSoundParams::UpdateInteriorValues(FAudioProxyActiveSoundParams *this)

{
  FAudioGameplayVolumeListener *pFVar1;
  FAudioGameplayActiveSoundInfo *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pFVar1 = this->Listener;
  pFVar2 = this->Sound;
  fVar5 = (pFVar1->InteriorSettings).ExteriorVolumeInterp;
  fVar3 = (pFVar1->InteriorSettings).InteriorVolumeInterp;
  fVar6 = (pFVar1->InteriorSettings).ExteriorLPFInterp;
  fVar7 = (pFVar1->InteriorSettings).InteriorLPFInterp;
  if ((pFVar1->InteriorSettings).InteriorStartTime < (pFVar2->InteriorSettings).InteriorStartTime) {
    fVar5 = (pFVar2->InteriorSettings).ExteriorVolumeInterp;
    fVar3 = (pFVar2->InteriorSettings).InteriorVolumeInterp;
    fVar6 = (pFVar2->InteriorSettings).ExteriorLPFInterp;
    fVar7 = (pFVar2->InteriorSettings).InteriorLPFInterp;
  }
  if ((this->bAffectedByAttenuation == false) && (this->bAllowSpatialization != false)) {
    fVar4 = this->SourceInteriorVolume;
    if (this->bUsingWorldSettings == false) {
      fVar4 = (((pFVar2->InteriorSettings).InteriorSettings.InteriorVolume - fVar4) * fVar3 + fVar4)
              * (((pFVar1->InteriorSettings).InteriorSettings.ExteriorVolume - fVar4) * fVar5 +
                fVar4);
    }
    else {
      fVar4 = ((pFVar1->InteriorSettings).InteriorSettings.ExteriorVolume - fVar4) * fVar5 + fVar4;
    }
  }
  else {
    fVar4 = (__real_3f800000 - this->SourceInteriorVolume) * fVar3 + this->SourceInteriorVolume;
  }
  this->SourceInteriorVolume = fVar4;
  if ((this->bAffectedByFilter == false) && (this->bAllowSpatialization != false)) {
    fVar5 = this->SourceInteriorLPF;
    fVar3 = ((pFVar1->InteriorSettings).InteriorSettings.ExteriorLPF - fVar5) * fVar6 + fVar5;
    if (this->bUsingWorldSettings != false) {
      this->SourceInteriorLPF = fVar3;
      return;
    }
    fVar5 = ((pFVar2->InteriorSettings).InteriorSettings.InteriorLPF - fVar5) * fVar7 + fVar5;
    if (fVar3 <= fVar5) {
      fVar5 = fVar3;
    }
    this->SourceInteriorLPF = fVar5;
    return;
  }
  this->SourceInteriorLPF =
       (__real_469c4000 - this->SourceInteriorLPF) * fVar7 + this->SourceInteriorLPF;
  return;
}

