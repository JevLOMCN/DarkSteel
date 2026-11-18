// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 3

// Apply @ 14d9a2390

void __thiscall
FInterpolatedInteriorSettings::Apply(FInterpolatedInteriorSettings *this,FInteriorSettings *param_1)

{
  float fVar1;
  undefined3 uVar2;
  float fVar3;
  atomic<double> aVar4;
  bool bVar5;
  float fVar6;
  
  bVar5 = FInteriorSettings::operator!=(&this->InteriorSettings,param_1);
  aVar4 = FApp::CurrentTime;
  if (bVar5) {
    this->InteriorStartTime = (double)FApp::CurrentTime;
    if (param_1->bIsWorldSettings == false) {
      this->InteriorEndTime = (double)param_1->InteriorTime + (double)aVar4;
      this->ExteriorEndTime = (double)param_1->ExteriorTime + (double)aVar4;
      this->InteriorLPFEndTime = (double)param_1->InteriorLPFTime + (double)aVar4;
      fVar6 = param_1->ExteriorLPFTime;
    }
    else {
      this->InteriorEndTime = (double)(this->InteriorSettings).InteriorTime + (double)aVar4;
      fVar1 = (this->InteriorSettings).InteriorLPFTime;
      this->ExteriorEndTime = (double)(this->InteriorSettings).ExteriorTime + (double)aVar4;
      fVar6 = (this->InteriorSettings).ExteriorLPFTime;
      this->InteriorLPFEndTime = (double)fVar1 + (double)aVar4;
    }
    this->ExteriorLPFEndTime = (double)fVar6 + (double)aVar4;
    uVar2 = *(undefined3 *)&param_1->field_0x1;
    fVar6 = param_1->ExteriorVolume;
    fVar1 = param_1->ExteriorTime;
    fVar3 = param_1->ExteriorLPF;
    (this->InteriorSettings).bIsWorldSettings = param_1->bIsWorldSettings;
    *(undefined3 *)&(this->InteriorSettings).field_0x1 = uVar2;
    (this->InteriorSettings).ExteriorVolume = fVar6;
    (this->InteriorSettings).ExteriorTime = fVar1;
    (this->InteriorSettings).ExteriorLPF = fVar3;
    fVar6 = param_1->InteriorVolume;
    fVar1 = param_1->InteriorTime;
    fVar3 = param_1->InteriorLPF;
    (this->InteriorSettings).ExteriorLPFTime = param_1->ExteriorLPFTime;
    (this->InteriorSettings).InteriorVolume = fVar6;
    (this->InteriorSettings).InteriorTime = fVar1;
    (this->InteriorSettings).InteriorLPF = fVar3;
    (this->InteriorSettings).InteriorLPFTime = param_1->InteriorLPFTime;
  }
  return;
}

// Interpolate @ 14d9a7830

float __thiscall
FInterpolatedInteriorSettings::Interpolate
          (FInterpolatedInteriorSettings *this,double param_1,double param_2)

{
  double dVar1;
  float fVar2;
  
  dVar1 = this->InteriorStartTime;
  if (param_1 < dVar1) {
    return 0.0;
  }
  if (param_2 <= param_1) {
    return __real_3f800000;
  }
  fVar2 = (float)((param_1 - dVar1) / (param_2 - dVar1));
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// UpdateInteriorValues @ 14d9ac110

void __thiscall
FInterpolatedInteriorSettings::UpdateInteriorValues(FInterpolatedInteriorSettings *this)

{
  double dVar1;
  bool bVar2;
  float fVar3;
  atomic<double> aVar4;
  float fVar5;
  
  aVar4 = FApp::CurrentTime;
  fVar3 = __real_3f800000;
  dVar1 = this->InteriorStartTime;
  if (dVar1 <= (double)FApp::CurrentTime) {
    fVar5 = __real_3f800000;
    if ((double)FApp::CurrentTime < this->InteriorEndTime) {
      fVar5 = (float)(((double)FApp::CurrentTime - dVar1) / (this->InteriorEndTime - dVar1));
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
  }
  else {
    fVar5 = 0.0;
  }
  bVar2 = dVar1 <= (double)FApp::CurrentTime;
  this->InteriorVolumeInterp = fVar5;
  if (bVar2) {
    fVar5 = fVar3;
    if ((double)aVar4 < this->ExteriorEndTime) {
      fVar5 = (float)(((double)aVar4 - dVar1) / (this->ExteriorEndTime - dVar1));
      if (fVar3 <= fVar5) {
        fVar5 = fVar3;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
  }
  else {
    fVar5 = 0.0;
  }
  this->ExteriorVolumeInterp = fVar5;
  if (dVar1 <= (double)aVar4) {
    fVar5 = fVar3;
    if ((double)aVar4 < this->InteriorLPFEndTime) {
      fVar5 = (float)(((double)aVar4 - dVar1) / (this->InteriorLPFEndTime - dVar1));
      if (fVar3 <= fVar5) {
        fVar5 = fVar3;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
  }
  else {
    fVar5 = 0.0;
  }
  this->InteriorLPFInterp = fVar5;
  if (dVar1 <= (double)aVar4) {
    if ((double)aVar4 < this->ExteriorLPFEndTime) {
      fVar5 = (float)(((double)aVar4 - dVar1) / (this->ExteriorLPFEndTime - dVar1));
      if (fVar3 <= fVar5) {
        fVar5 = fVar3;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      this->ExteriorLPFInterp = fVar5;
      return;
    }
    this->ExteriorLPFInterp = fVar3;
    return;
  }
  this->ExteriorLPFInterp = 0.0;
  return;
}

