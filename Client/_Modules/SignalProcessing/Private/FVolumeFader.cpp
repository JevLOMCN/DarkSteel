// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 19

// FVolumeFader @ 1445211a0

FVolumeFader * __thiscall Audio::FVolumeFader::FVolumeFader(FVolumeFader *this)

{
  this->Alpha = 1.0;
  this->Target = 1.0;
  this->ActiveDuration = -1.0;
  this->FadeDuration = -1.0;
  this->Elapsed = 0.0;
  this->FadeCurve = Linear;
  return this;
}

// Activate @ 1445213a0

void __thiscall Audio::FVolumeFader::Activate(FVolumeFader *this)

{
  if (this->ActiveDuration == 0.0) {
    this->ActiveDuration = -1.0;
  }
  return;
}

// AlphaToVolume @ 1445213c0

float __cdecl
Audio::FVolumeFader::AlphaToVolume(float param_1,EFaderCurve param_2,float param_3,float param_4)

{
  float fVar1;
  TVector2<float>_u_0 local_48;
  TVector2<float>_u_0 local_40 [7];
  
  if (param_2 != Linear) {
    if (param_2 == Logarithmic) {
      fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
      return fVar1;
    }
    if (param_2 == SCurve) {
      local_40[0]._s_0.X = 0.0;
      local_40[0]._s_0.Y = 1.0;
      local_48._s_0.X = param_3;
      local_48._s_0.Y = param_4;
      fVar1 = FMath::GetMappedRangeValueClamped<float,float>
                        ((TVector2<float> *)&local_48._s_0,(TVector2<float> *)&local_40[0]._s_0,
                         param_1);
      fVar1 = fVar1 * __real_40490fdb - __real_3fc90fdb;
      fVar1 = (__real_3f22f983 -
              (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3e4f817a) *
              fVar1 + __real_3f000000;
    }
    else {
      if (param_2 != Sin) {
        return __real_3f800000;
      }
      local_48._s_0.X = 0.0;
      local_48._s_0.Y = 1.0;
      local_40[0]._0_4_ = param_3;
      local_40[0]._4_4_ = param_4;
      fVar1 = FMath::GetMappedRangeValueClamped<float,float>
                        ((TVector2<float> *)&local_40[0]._s_0,(TVector2<float> *)&local_48._s_0,
                         param_1);
      fVar1 = (__real_3fa2f983 -
              (float)((uint)(fVar1 * __real_3fc90fdb) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
              __real_3ecf817a) * fVar1 * __real_3fc90fdb;
    }
    local_48._s_0.Y = 1.0;
    local_48._s_0.X = 0.0;
    local_40[0]._0_4_ = param_3;
    local_40[0]._4_4_ = param_4;
    param_1 = FMath::GetMappedRangeValueClamped<float,float>
                        ((TVector2<float> *)&local_48._s_0,(TVector2<float> *)&local_40[0]._s_0,
                         fVar1);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
  }
  return param_1;
}

// Deactivate @ 144522790

void __thiscall Audio::FVolumeFader::Deactivate(FVolumeFader *this)

{
  float fVar1;
  
  if (this->FadeCurve == Logarithmic) {
    fVar1 = powf(__real_41200000,this->Alpha * __real_3d4ccccd);
    this->Alpha = fVar1;
  }
  this->Target = this->Alpha;
  this->Elapsed = this->ActiveDuration;
  this->ActiveDuration = 0.0;
  this->FadeCurve = Linear;
  this->FadeDuration = -1.0;
  return;
}

// GetActiveDuration @ 144523390

float __thiscall Audio::FVolumeFader::GetActiveDuration(FVolumeFader *this)

{
  return this->ActiveDuration;
}

// GetCurve @ 1445233c0

EFaderCurve __thiscall Audio::FVolumeFader::GetCurve(FVolumeFader *this)

{
  return this->FadeCurve;
}

// GetFadeDuration @ 1445233d0

float __thiscall Audio::FVolumeFader::GetFadeDuration(FVolumeFader *this)

{
  return this->FadeDuration;
}

// GetTargetVolume @ 144523420

float __thiscall Audio::FVolumeFader::GetTargetVolume(FVolumeFader *this)

{
  EFaderCurve EVar1;
  float fVar2;
  
  EVar1 = this->FadeCurve;
  if (EVar1 != Linear) {
    if (EVar1 == Logarithmic) {
      fVar2 = powf(__real_41200000,this->Target * __real_3d4ccccd);
      return fVar2;
    }
    if ((EVar1 != SCurve) && (EVar1 != Sin)) {
      return __real_3f800000;
    }
  }
  return this->Target;
}

// GetVolume @ 144523470

float __thiscall Audio::FVolumeFader::GetVolume(FVolumeFader *this)

{
  float fVar1;
  
  fVar1 = AlphaToVolume(this->Alpha,this->FadeCurve,this->StartingValue,this->Target);
  return fVar1;
}

// GetVolumeAfterTime @ 144523490

float __thiscall Audio::FVolumeFader::GetVolumeAfterTime(FVolumeFader *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->Alpha;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar2 = this->Elapsed + param_1;
  if ((0.0 <= this->ActiveDuration) && (this->ActiveDuration < fVar2)) {
    return __real_3f800000;
  }
  if (fVar2 < this->FadeDuration) {
    fVar2 = this->Target;
    fVar3 = fVar2;
    fVar4 = fVar1;
    if (fVar1 < fVar2) {
      fVar3 = fVar1;
      fVar4 = fVar2;
    }
    fVar1 = ((fVar2 - fVar1) * param_1) / (this->FadeDuration - this->Elapsed) + fVar1;
    if (fVar4 <= fVar1) {
      fVar1 = fVar4;
    }
    if (fVar1 <= fVar3) {
      fVar1 = fVar3;
    }
  }
  fVar1 = AlphaToVolume(fVar1,this->FadeCurve,this->StartingValue,this->Target);
  return fVar1;
}

// IsActive @ 144523570

bool __thiscall Audio::FVolumeFader::IsActive(FVolumeFader *this)

{
  float fVar1;
  
  fVar1 = this->ActiveDuration;
  if ((fVar1 < this->Elapsed || fVar1 == this->Elapsed) && (0.0 <= fVar1)) {
    return false;
  }
  return true;
}

// IsFading @ 144523590

bool __thiscall Audio::FVolumeFader::IsFading(FVolumeFader *this)

{
  return this->Elapsed < this->FadeDuration;
}

// IsFadingIn @ 1445235b0

bool __thiscall Audio::FVolumeFader::IsFadingIn(FVolumeFader *this)

{
  if ((this->Elapsed <= this->FadeDuration && this->FadeDuration != this->Elapsed) &&
     (this->Alpha < this->Target)) {
    return true;
  }
  return false;
}

// IsFadingOut @ 1445235e0

bool __thiscall Audio::FVolumeFader::IsFadingOut(FVolumeFader *this)

{
  if ((this->Elapsed <= this->FadeDuration && this->FadeDuration != this->Elapsed) &&
     (this->Target <= this->Alpha && this->Alpha != this->Target)) {
    return true;
  }
  return false;
}

// SetActiveDuration @ 144525210

void __thiscall Audio::FVolumeFader::SetActiveDuration(FVolumeFader *this,float param_1)

{
  if (0.0 <= param_1) {
    this->ActiveDuration = param_1;
    this->Elapsed = 0.0;
  }
  else if (this->ActiveDuration == 0.0) {
    this->ActiveDuration = -1.0;
    return;
  }
  return;
}

// SetVolume @ 1445255b0

void __thiscall Audio::FVolumeFader::SetVolume(FVolumeFader *this,float param_1)

{
  this->Alpha = param_1;
  this->Target = param_1;
  this->Elapsed = 0.0;
  this->FadeCurve = Linear;
  this->FadeDuration = -1.0;
  return;
}

// StartFade @ 1445255e0

void __thiscall
Audio::FVolumeFader::StartFade(FVolumeFader *this,float param_1,float param_2,EFaderCurve param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_bf800000;
  if (0.0 < param_2) {
    if (param_3 == Logarithmic) {
      if (this->FadeCurve == Logarithmic) {
        fVar1 = this->Alpha;
      }
      else {
        fVar1 = this->Alpha;
        if (this->Alpha <= __real_38d1b717) {
          fVar1 = __real_38d1b717;
        }
        fVar1 = logf(fVar1);
        fVar1 = fVar1 * __real_410af967;
        this->Alpha = fVar1;
      }
      if (param_1 <= __real_38d1b717) {
        param_1 = __real_38d1b717;
      }
      fVar2 = logf(param_1);
      param_1 = fVar2 * __real_410af967;
    }
    else if (this->FadeCurve == Logarithmic) {
      fVar1 = powf(__real_41200000,this->Alpha * __real_3d4ccccd);
      this->Alpha = fVar1;
    }
    else {
      fVar1 = this->Alpha;
    }
    this->Target = param_1;
    this->StartingValue = fVar1;
  }
  else {
    param_3 = Linear;
    this->Alpha = param_1;
    this->Target = param_1;
    param_2 = fVar1;
  }
  this->Elapsed = 0.0;
  this->FadeCurve = param_3;
  this->FadeDuration = param_2;
  return;
}

// StopFade @ 1445259c0

void __thiscall Audio::FVolumeFader::StopFade(FVolumeFader *this)

{
  float fVar1;
  
  if (this->FadeCurve == Logarithmic) {
    fVar1 = powf(__real_41200000,this->Alpha * __real_3d4ccccd);
    this->Alpha = fVar1;
  }
  this->Target = this->Alpha;
  this->Elapsed = this->ActiveDuration;
  this->FadeCurve = Linear;
  this->FadeDuration = -1.0;
  return;
}

// Update @ 144525a10

void __thiscall Audio::FVolumeFader::Update(FVolumeFader *this,float param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = this->Elapsed;
  fVar6 = this->FadeDuration;
  if ((fVar1 < this->ActiveDuration) || (this->ActiveDuration < 0.0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  fVar7 = fVar1 + param_1;
  this->Elapsed = fVar7;
  fVar3 = __real_322bcc77;
  if ((fVar1 < fVar6) && (bVar2)) {
    fVar1 = this->Target;
    if (fVar6 < fVar7) {
      this->Alpha = fVar1;
      StopFade(this);
      return;
    }
    fVar5 = this->Alpha;
    fVar4 = fVar5;
    if (fVar5 <= fVar1) {
      fVar4 = fVar1;
    }
    fVar6 = ((fVar1 - fVar5) * param_1) / (fVar6 - fVar7) + fVar5;
    if (fVar1 <= fVar5) {
      fVar5 = fVar1;
    }
    if (fVar4 <= fVar6) {
      fVar6 = fVar4;
    }
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    this->Alpha = fVar6;
    if ((fVar3 < param_1) &&
       ((float)((uint)(fVar6 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar3)) {
      StopFade(this);
    }
  }
  return;
}

