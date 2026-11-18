// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 10

// SAudioVolumeRadialSlider @ 14d8b8130

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioVolumeRadialSlider * __thiscall
SAudioVolumeRadialSlider::SAudioVolumeRadialSlider(SAudioVolumeRadialSlider *this)

{
  SAudioRadialSlider::SAudioRadialSlider((SAudioRadialSlider *)this);
  this->bUseLinearOutput = true;
  this->_padding_ = (longlong)&___7SAudioVolumeRadialSlider__6B_;
  return this;
}

// Construct @ 14d8ee270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVolumeRadialSlider::Construct(SAudioVolumeRadialSlider *this,FArguments *param_1)

{
  SAudioTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TVector2<double>_u_0 local_28;
  FText local_18;
  
  SAudioRadialSlider::Construct((SAudioRadialSlider *)this,param_1);
  local_28._s_0.X = ___xmm_0000000000000000c064000000000000;
  local_28._s_0.Y = _UNK_152c289d8;
  SAudioRadialSlider::SetOutputRange((SAudioRadialSlider *)this,(TVector2<double> *)&local_28._s_0);
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (SAudioTextBox *)this->_padding_;
  pFVar3 = FText::FromString(&local_18,"dB");
  SAudioTextBox::SetUnitsText(this_00,pFVar3);
  return;
}

// GetDbValueFromSliderValue @ 14d92c610

float __thiscall
SAudioVolumeRadialSlider::GetDbValueFromSliderValue(SAudioVolumeRadialSlider *this,float param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  
  fVar1 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  fVar2 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  dVar5 = SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
          SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  uVar3 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee2308c3a) {
    dVar5 = ((double)param_1 - SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X) /
            dVar5;
  }
  else {
    dVar5 = __real_3ff0000000000000;
    if ((double)param_1 < SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y) {
      dVar5 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  fVar1 = (float)(dVar5 * ((double)fVar2 - (double)fVar1) + (double)fVar1);
  if (fVar1 <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  fVar1 = logf(fVar1);
  dVar5 = (double)(fVar1 * __real_410af967);
  if ((double)this->_padding_ <= (double)(fVar1 * __real_410af967)) {
    dVar5 = (double)this->_padding_;
  }
  if (dVar5 <= (double)this->_padding_) {
    dVar5 = (double)this->_padding_;
  }
  return (float)dVar5;
}

// GetOutputValue @ 14d9326c0

float __thiscall
SAudioVolumeRadialSlider::GetOutputValue(SAudioVolumeRadialSlider *this,float param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  
  if (this->bUseLinearOutput == false) {
    fVar1 = GetDbValueFromSliderValue(this,param_1);
    return fVar1;
  }
  fVar1 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  fVar2 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  dVar5 = SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
          SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  uVar3 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee2308c3a) {
    dVar5 = ((double)param_1 - SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X) /
            dVar5;
  }
  else {
    dVar5 = __real_3ff0000000000000;
    if ((double)param_1 < SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y) {
      dVar5 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  return (float)(dVar5 * ((double)fVar2 - (double)fVar1) + (double)fVar1);
}

// GetOutputValueForText @ 14d932ae0

float __thiscall
SAudioVolumeRadialSlider::GetOutputValueForText(SAudioVolumeRadialSlider *this,float param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  
  fVar1 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  fVar2 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  dVar5 = SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
          SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  uVar3 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee2308c3a) {
    dVar5 = ((double)param_1 - SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X) /
            dVar5;
  }
  else {
    dVar5 = __real_3ff0000000000000;
    if ((double)param_1 < SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y) {
      dVar5 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  fVar1 = (float)(dVar5 * ((double)fVar2 - (double)fVar1) + (double)fVar1);
  if (fVar1 <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  fVar1 = logf(fVar1);
  dVar5 = (double)(fVar1 * __real_410af967);
  if ((double)this->_padding_ <= (double)(fVar1 * __real_410af967)) {
    dVar5 = (double)this->_padding_;
  }
  if (dVar5 <= (double)this->_padding_) {
    dVar5 = (double)this->_padding_;
  }
  return (float)dVar5;
}

// GetSliderValue @ 14d936030

float __thiscall
SAudioVolumeRadialSlider::GetSliderValue(SAudioVolumeRadialSlider *this,float param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  if (this->bUseLinearOutput == false) {
    fVar1 = GetSliderValueFromDb(this,param_1);
    return fVar1;
  }
  fVar1 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  fVar2 = powf(__real_41200000,(float)(double)this->_padding_ * __real_3d4ccccd);
  dVar3 = (double)fVar1 - (double)fVar2;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar3 = ((double)param_1 - (double)fVar2) / dVar3;
  }
  else {
    dVar3 = __real_3ff0000000000000;
    if ((double)param_1 < (double)fVar1) {
      dVar3 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar3) {
    dVar3 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return (float)(dVar3 * (SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
                         SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X) +
                SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X);
}

// GetSliderValueForText @ 14d936430

float __thiscall
SAudioVolumeRadialSlider::GetSliderValueForText(SAudioVolumeRadialSlider *this,float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  fVar2 = powf(__real_41200000,(float)dVar6 * __real_3d4ccccd);
  fVar3 = powf(__real_41200000,(float)dVar1 * __real_3d4ccccd);
  dVar5 = (double)param_1;
  if (dVar6 <= (double)param_1) {
    dVar5 = dVar6;
  }
  dVar6 = (double)fVar2 - (double)fVar3;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  fVar4 = powf(__real_41200000,(float)dVar5 * __real_3d4ccccd);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar6 = ((double)fVar4 - (double)fVar3) / dVar6;
  }
  else {
    dVar6 = __real_3ff0000000000000;
    if ((double)fVar4 < (double)fVar2) {
      dVar6 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar6) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  return (float)(dVar6 * (SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
                         SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X) +
                SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X);
}

// GetSliderValueFromDb @ 14d9365a0

float __thiscall
SAudioVolumeRadialSlider::GetSliderValueFromDb(SAudioVolumeRadialSlider *this,float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  fVar2 = powf(__real_41200000,(float)dVar6 * __real_3d4ccccd);
  fVar3 = powf(__real_41200000,(float)dVar1 * __real_3d4ccccd);
  dVar5 = (double)param_1;
  if (dVar6 <= (double)param_1) {
    dVar5 = dVar6;
  }
  dVar6 = (double)fVar2 - (double)fVar3;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  fVar4 = powf(__real_41200000,(float)dVar5 * __real_3d4ccccd);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar6 = ((double)fVar4 - (double)fVar3) / dVar6;
  }
  else {
    dVar6 = __real_3ff0000000000000;
    if ((double)fVar4 < (double)fVar2) {
      dVar6 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar6) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  return (float)(dVar6 * (SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
                         SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X) +
                SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X);
}

// SetOutputRange @ 14d96b880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVolumeRadialSlider::SetOutputRange(SAudioVolumeRadialSlider *this,TVector2<double> *param_1)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TVector2<double>_u_0 local_28 [2];
  
  local_28[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
  dVar3 = (double)local_28[0]._0_8_ - (double)this->_padding_;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar4 = dVar1 - (double)this->_padding_;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    if (this->bUseLinearOutput == false) {
      if ((double)local_28[0]._0_8_ <= __real_c064000000000000) {
        local_28[0]._0_8_ = __real_c064000000000000;
      }
      if (__real_4088100000000000 <= dVar1) {
        uVar5 = SUB84(__real_4088100000000000,0);
        uVar6 = (undefined4)((ulonglong)__real_4088100000000000 >> 0x20);
      }
      local_28[0]._8_8_ = CONCAT44(uVar6,uVar5);
    }
    else {
      fVar2 = (float)(double)local_28[0]._0_8_;
      if ((float)(double)local_28[0]._0_8_ <= __real_322bcc77) {
        fVar2 = __real_322bcc77;
      }
      fVar2 = logf(fVar2);
      local_28[0]._0_8_ = (double)(fVar2 * __real_410af967);
      if ((double)(fVar2 * __real_410af967) <= __real_c064000000000000) {
        local_28[0]._0_8_ = __real_c064000000000000;
      }
      fVar2 = (float)dVar1;
      if ((float)dVar1 <= __real_322bcc77) {
        fVar2 = __real_322bcc77;
      }
      fVar2 = logf(fVar2);
      local_28[0]._8_8_ = (undefined8)(fVar2 * __real_410af967);
      if (__real_4088100000000000 <= (double)local_28[0]._8_8_) {
        local_28[0]._8_8_ = __real_4088100000000000;
      }
    }
    SAudioRadialSlider::SetOutputRange
              ((SAudioRadialSlider *)this,(TVector2<double> *)&local_28[0]._s_0);
  }
  return;
}

// SetUseLinearOutput @ 14d96eb40

void __thiscall
SAudioVolumeRadialSlider::SetUseLinearOutput(SAudioVolumeRadialSlider *this,bool param_1)

{
  this->bUseLinearOutput = param_1;
  return;
}

