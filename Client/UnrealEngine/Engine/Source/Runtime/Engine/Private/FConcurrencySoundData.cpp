// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// GetLerpTime @ 1486c09e0

float __thiscall FConcurrencySoundData::GetLerpTime(FConcurrencySoundData *this)

{
  return this->LerpTime;
}

// GetTargetVolume @ 1486c8c80

float __thiscall FConcurrencySoundData::GetTargetVolume(FConcurrencySoundData *this,bool param_1)

{
  float fVar1;
  
  if (param_1) {
    return this->DbTargetVolume;
  }
  fVar1 = powf(__real_41200000,this->DbTargetVolume * __real_3d4ccccd);
  if ((fVar1 < ConcurrencyMinVolumeScaleCVar) ||
     ((float)((uint)(fVar1 - ConcurrencyMinVolumeScaleCVar) & __xmm_7fffffff7fffffff7fffffff7fffffff
             ) <= __real_322bcc77)) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetVolume @ 1486c99e0

float __thiscall FConcurrencySoundData::GetVolume(FConcurrencySoundData *this,bool param_1)

{
  float fVar1;
  
  fVar1 = this->LerpTime;
  if (this->LerpTime <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  fVar1 = this->Elapsed / fVar1;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * (this->DbTargetVolume - this->DbStartVolume) + this->DbStartVolume;
  if (param_1) {
    return fVar1;
  }
  fVar1 = powf(__real_41200000,fVar1 * __real_3d4ccccd);
  if ((ConcurrencyMinVolumeScaleCVar <= fVar1) &&
     (__real_322bcc77 <
      (float)((uint)(fVar1 - ConcurrencyMinVolumeScaleCVar) & __xmm_7fffffff7fffffff7fffffff7fffffff
             ))) {
    return fVar1;
  }
  return 0.0;
}

// SetTarget @ 1486f0010

void __thiscall
FConcurrencySoundData::SetTarget(FConcurrencySoundData *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = this->LerpTime;
  if (this->LerpTime <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  fVar1 = this->Elapsed / fVar1;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  this->DbStartVolume = fVar1 * (this->DbTargetVolume - this->DbStartVolume) + this->DbStartVolume;
  fVar1 = ConcurrencyMinVolumeScaleCVar;
  if (ConcurrencyMinVolumeScaleCVar <= param_1) {
    fVar1 = param_1;
  }
  fVar1 = logf(fVar1);
  fVar1 = fVar1 * __real_410af967;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  this->Elapsed = 0.0;
  this->DbTargetVolume = fVar1;
  this->LerpTime = param_2;
  return;
}

// Update @ 1486f3ba0

void __thiscall FConcurrencySoundData::Update(FConcurrencySoundData *this,float param_1)

{
  this->Elapsed = param_1 + this->Elapsed;
  return;
}

