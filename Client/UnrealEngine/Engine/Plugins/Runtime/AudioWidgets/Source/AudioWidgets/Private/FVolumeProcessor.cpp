// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 9

// GetDbValueFromSliderValue @ 14d92c4f0

float __thiscall
FVolumeProcessor::GetDbValueFromSliderValue
          (FVolumeProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = powf(__real_41200000,(float)(param_1->field0_0x0)._s_0.X * __real_3d4ccccd);
  fVar2 = powf(__real_41200000,(float)(param_1->field0_0x0)._s_0.Y * __real_3d4ccccd);
  dVar6 = FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
          FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  uVar3 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee2308c3a) {
    dVar6 = ((double)param_2 - FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X) /
            dVar6;
  }
  else {
    dVar6 = __real_3ff0000000000000;
    if ((double)param_2 < FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.Y) {
      dVar6 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar6) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  fVar1 = (float)(dVar6 * ((double)fVar2 - (double)fVar1) + (double)fVar1);
  if (fVar1 <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  fVar1 = logf(fVar1);
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (double)(fVar1 * __real_410af967);
  if (dVar6 <= (double)(fVar1 * __real_410af967)) {
    dVar5 = dVar6;
  }
  dVar6 = (param_1->field0_0x0)._s_0.X;
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  return (float)dVar5;
}

// GetDefaultOutputRange @ 14d92d460

TVector2<double> * __thiscall
FVolumeProcessor::GetDefaultOutputRange
          (FVolumeProcessor *this,TVector2<double> *__return_storage_ptr__)

{
  if (this->bUseLinearOutput != false) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)FAudioUnitProcessor::NormalizedLinearSliderRange;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = -100.0;
  return __return_storage_ptr__;
}

// GetOutputRange @ 14d932150

TVector2<double> * __thiscall
FVolumeProcessor::GetOutputRange
          (FVolumeProcessor *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  double dVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  uVar4 = SUB84(dVar1,0);
  uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (this->bUseLinearOutput != false) {
    fVar2 = (float)dVar3;
    if ((float)dVar3 <= __real_322bcc77) {
      fVar2 = __real_322bcc77;
    }
    fVar2 = logf(fVar2);
    dVar3 = (double)(fVar2 * __real_410af967);
    if ((double)(fVar2 * __real_410af967) <= __real_c064000000000000) {
      dVar3 = __real_c064000000000000;
    }
    fVar2 = (float)dVar1;
    if ((float)dVar1 <= __real_322bcc77) {
      fVar2 = __real_322bcc77;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
    fVar2 = logf(fVar2);
    dVar3 = (double)(fVar2 * __real_410af967);
    if (__real_4088100000000000 <= (double)(fVar2 * __real_410af967)) {
      dVar3 = __real_4088100000000000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    return __return_storage_ptr__;
  }
  if (__real_4088100000000000 <= dVar1) {
    uVar4 = SUB84(__real_4088100000000000,0);
    uVar5 = (undefined4)((ulonglong)__real_4088100000000000 >> 0x20);
  }
  if (dVar3 <= __real_c064000000000000) {
    dVar3 = __real_c064000000000000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar5,uVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  return __return_storage_ptr__;
}

// GetOutputValue @ 14d9322a0

float __thiscall
FVolumeProcessor::GetOutputValue(FVolumeProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  TVector2<double>_u_0 local_38 [3];
  
  if (this->bUseLinearOutput == false) {
    local_38[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_38[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    fVar1 = GetDbValueFromSliderValue(this,(TVector2<double> *)&local_38[0]._s_0,param_2);
    return fVar1;
  }
  fVar1 = powf(__real_41200000,(float)(param_1->field0_0x0)._s_0.X * __real_3d4ccccd);
  fVar2 = powf(__real_41200000,(float)(param_1->field0_0x0)._s_0.Y * __real_3d4ccccd);
  dVar5 = FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
          FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  uVar3 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee2308c3a) {
    dVar5 = ((double)param_2 - FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X) /
            dVar5;
  }
  else {
    dVar5 = __real_3ff0000000000000;
    if ((double)param_2 < FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.Y) {
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

// GetOutputValueForText @ 14d932a10

float __thiscall
FVolumeProcessor::GetOutputValueForText
          (FVolumeProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  fVar1 = GetDbValueFromSliderValue(this,(TVector2<double> *)&local_18._s_0,param_2);
  return fVar1;
}

// GetSliderValue @ 14d935b80

float __thiscall
FVolumeProcessor::GetSliderValue(FVolumeProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  TVector2<double>_u_0 local_38 [3];
  
  if (this->bUseLinearOutput == false) {
    local_38[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_38[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    fVar1 = GetSliderValueFromDb(this,(TVector2<double> *)&local_38[0]._s_0,param_2);
    return fVar1;
  }
  fVar1 = powf(__real_41200000,(float)(param_1->field0_0x0)._s_0.Y * __real_3d4ccccd);
  fVar2 = powf(__real_41200000,(float)(param_1->field0_0x0)._s_0.X * __real_3d4ccccd);
  dVar5 = (double)fVar1 - (double)fVar2;
  uVar3 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee2308c3a) {
    dVar5 = ((double)param_2 - (double)fVar2) / dVar5;
  }
  else {
    dVar5 = __real_3ff0000000000000;
    if ((double)param_2 < (double)fVar1) {
      dVar5 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  return (float)(dVar5 * (FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
                         FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X) +
                FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X);
}

// GetSliderValueForText @ 14d936360

float __thiscall
FVolumeProcessor::GetSliderValueForText
          (FVolumeProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  fVar1 = GetSliderValueFromDb(this,(TVector2<double> *)&local_18._s_0,param_2);
  return fVar1;
}

// GetSliderValueFromDb @ 14d936450

float __thiscall
FVolumeProcessor::GetSliderValueFromDb
          (FVolumeProcessor *this,TVector2<double> *param_1,float param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = powf(__real_41200000,(float)dVar6 * __real_3d4ccccd);
  fVar3 = powf(__real_41200000,(float)dVar1 * __real_3d4ccccd);
  dVar5 = (double)param_2;
  if (dVar6 <= (double)param_2) {
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
  return (float)(dVar6 * (FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
                         FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X) +
                FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X);
}

// GetUnitsText @ 14d938130

FText * __thiscall
FVolumeProcessor::GetUnitsText(FVolumeProcessor *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"dB");
  return __return_storage_ptr__;
}

