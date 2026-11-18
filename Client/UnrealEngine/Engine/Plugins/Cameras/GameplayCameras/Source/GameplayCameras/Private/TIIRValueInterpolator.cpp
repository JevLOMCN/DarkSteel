// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// OnReset @ 14d669120

void __thiscall
UE::Cameras::TIIRValueInterpolator<double>::OnReset
          (TIIRValueInterpolator<double> *this,double param_1,double param_2)

{
  this->LastTargetValue = (double)this->_padding_;
  this->LastUpdateLeftoverTime = 0.0;
  return;
}

// OnReset @ 14d669140

void __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector2<double>_>::OnReset
          (TIIRValueInterpolator<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1,
          TVector2<double> *param_2)

{
  double dVar1;
  
  dVar1 = (double)this->_padding_;
  this->LastUpdateLeftoverTime = 0.0;
  (this->LastTargetValue).field0_0x0._s_0.X = (double)this->_padding_;
  (this->LastTargetValue).field0_0x0._s_0.Y = dVar1;
  return;
}

// OnReset @ 14d669160

void __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector<double>_>::OnReset
          (TIIRValueInterpolator<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)this->_padding_;
  this->LastUpdateLeftoverTime = 0.0;
  dVar1 = (double)this->_padding_;
  (this->LastTargetValue).field0_0x0._s_0.X = (double)this->_padding_;
  (this->LastTargetValue).field0_0x0._s_0.Y = dVar2;
  (this->LastTargetValue).field0_0x0._s_0.Z = dVar1;
  return;
}

// OnRun @ 14d66a420

void __thiscall
UE::Cameras::TIIRValueInterpolator<double>::OnRun
          (TIIRValueInterpolator<double> *this,FCameraValueInterpolationParams *param_1,
          FCameraValueInterpolationResult *param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  
  if (this->bUseFixedStep == false) {
    dVar12 = (double)this->_padding_;
    if (0.0 < (double)this->Speed) {
      dVar10 = dVar12 - (double)this->_padding_;
      if (__real_3e45798ee0000000 <= dVar10 * dVar10) {
        dVar12 = (double)param_1->DeltaTime * (double)this->Speed;
        if (__real_3ff0000000000000 <= dVar12) {
          dVar12 = __real_3ff0000000000000;
        }
        if (dVar12 <= 0.0) {
          dVar12 = 0.0;
        }
        dVar12 = dVar12 * dVar10 + (double)this->_padding_;
      }
    }
    this->LastUpdateLeftoverTime = 0.0;
    this->_padding_ = (longlong)dVar12;
    return;
  }
  fVar11 = param_1->DeltaTime;
  if ((this->bDoLeftoverRewind != false) && (0.0 < this->LastUpdateLeftoverTime)) {
    fVar11 = fVar11 + this->LastUpdateLeftoverTime;
    this->_padding_ = (longlong)this->ValueAfterLastFullStep;
    this->LastUpdateLeftoverTime = 0.0;
  }
  fVar5 = __real_3c088889;
  dVar4 = __real_3e45798ee0000000;
  fVar3 = __real_38d1b717;
  dVar2 = __real_3ff0000000000000;
  dVar12 = this->LastTargetValue;
  dVar10 = (double)this->_padding_ - dVar12;
  fVar6 = __real_3f800000 / fVar11;
  if (__real_38d1b717 < fVar11) {
    dVar9 = (double)this->_padding_;
    do {
      fVar1 = fVar11;
      if (fVar5 <= fVar11) {
        fVar1 = fVar5;
      }
      if ((this->bDoLeftoverRewind != false) && (fVar1 < fVar5)) {
        this->LastUpdateLeftoverTime = fVar1;
        this->ValueAfterLastFullStep = dVar9;
      }
      fVar11 = fVar11 - fVar1;
      dVar12 = dVar12 + (double)fVar1 * dVar10 * (double)fVar6;
      dVar7 = dVar12;
      if ((0.0 < this->Speed) && (dVar8 = dVar12 - dVar9, dVar4 <= dVar8 * dVar8)) {
        dVar7 = (double)this->Speed * (double)fVar1;
        if (dVar2 <= dVar7) {
          dVar7 = dVar2;
        }
        if (dVar7 <= 0.0) {
          dVar7 = 0.0;
        }
        dVar7 = dVar9 + dVar7 * dVar8;
      }
      dVar9 = dVar7;
    } while (fVar3 < fVar11);
    this->_padding_ = (longlong)dVar7;
  }
  this->LastTargetValue = (double)this->_padding_;
  return;
}

// OnRun @ 14d66a640

void __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector2<double>_>::OnRun
          (TIIRValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TVector2<double>_u_0 local_a8;
  TVector2<double>_u_0 local_98;
  TVector2<double>_u_0 local_88 [8];
  
  if (this->bUseFixedStep != false) {
    fVar12 = param_1->DeltaTime;
    if ((this->bDoLeftoverRewind != false) && (fVar1 = this->LastUpdateLeftoverTime, 0.0 < fVar1)) {
      dVar2 = (this->ValueAfterLastFullStep).field0_0x0._s_0.X;
      dVar3 = (this->ValueAfterLastFullStep).field0_0x0._s_0.Y;
      this->LastUpdateLeftoverTime = 0.0;
      fVar12 = fVar12 + fVar1;
      this->_padding_ = (longlong)dVar2;
      this->_padding_ = (longlong)dVar3;
    }
    fVar9 = __real_3c088889;
    fVar1 = __real_38d1b717;
    dVar2 = (double)this->_padding_;
    dVar3 = (double)this->_padding_;
    dVar4 = (this->LastTargetValue).field0_0x0._s_0.X;
    dVar5 = (this->LastTargetValue).field0_0x0._s_0.Y;
    fVar10 = __real_3f800000 / fVar12;
    dVar7 = (this->LastTargetValue).field0_0x0._s_0.X;
    dVar6 = (this->LastTargetValue).field0_0x0._s_0.Y;
    for (; fVar1 < fVar12; fVar12 = fVar12 - fVar11) {
      fVar11 = fVar12;
      if (fVar9 <= fVar12) {
        fVar11 = fVar9;
      }
      if ((this->bDoLeftoverRewind != false) && (fVar11 < fVar9)) {
        dVar8 = (double)this->_padding_;
        this->LastUpdateLeftoverTime = fVar11;
        (this->ValueAfterLastFullStep).field0_0x0._s_0.X = (double)this->_padding_;
        (this->ValueAfterLastFullStep).field0_0x0._s_0.Y = dVar8;
      }
      dVar6 = dVar6 + (double)fVar11 * (dVar3 - dVar5) * (double)fVar10;
      dVar7 = dVar7 + (double)fVar11 * (dVar2 - dVar4) * (double)fVar10;
      local_98._s_0.X = (double)this->_padding_;
      local_98._s_0.Y = (double)this->_padding_;
      local_a8._s_0.X = dVar7;
      local_a8._s_0.Y = dVar6;
      FMath::Vector2DInterpTo<double>
                ((TVector2<double> *)&local_88[0]._s_0,(TVector2<double> *)&local_98._s_0,
                 (TVector2<double> *)&local_a8._s_0,fVar11,this->Speed);
      this->_padding_ = local_88[0]._s_0.X;
      this->_padding_ = local_88[0]._s_0.Y;
    }
    dVar2 = (double)this->_padding_;
    (this->LastTargetValue).field0_0x0._s_0.X = (double)this->_padding_;
    (this->LastTargetValue).field0_0x0._s_0.Y = dVar2;
    return;
  }
  local_88[0]._0_8_ = this->_padding_;
  local_88[0]._8_8_ = this->_padding_;
  local_98._s_0.X = (double)this->_padding_;
  local_98._s_0.Y = (double)this->_padding_;
  FMath::Vector2DInterpTo<double>
            ((TVector2<double> *)&local_a8._s_0,(TVector2<double> *)&local_98._s_0,
             (TVector2<double> *)&local_88[0]._s_0,param_1->DeltaTime,this->Speed);
  this->LastUpdateLeftoverTime = 0.0;
  this->_padding_ = (longlong)local_a8._s_0.X;
  this->_padding_ = (longlong)local_a8._s_0.Y;
  return;
}

// OnRun @ 14d66a840

void __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector<double>_>::OnRun
          (TIIRValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8 [7];
  
  if (this->bUseFixedStep != false) {
    fVar16 = param_1->DeltaTime;
    if ((this->bDoLeftoverRewind != false) && (fVar1 = this->LastUpdateLeftoverTime, 0.0 < fVar1)) {
      dVar3 = (this->ValueAfterLastFullStep).field0_0x0._s_0.X;
      dVar4 = (this->ValueAfterLastFullStep).field0_0x0._s_0.Y;
      this->LastUpdateLeftoverTime = 0.0;
      fVar16 = fVar16 + fVar1;
      dVar2 = (this->ValueAfterLastFullStep).field0_0x0._s_0.Z;
      this->_padding_ = (longlong)dVar3;
      this->_padding_ = (longlong)dVar4;
      this->_padding_ = (longlong)dVar2;
    }
    fVar12 = __real_3c088889;
    fVar1 = __real_38d1b717;
    dVar2 = (double)this->_padding_;
    dVar3 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    dVar5 = (this->LastTargetValue).field0_0x0._s_0.X;
    dVar6 = (this->LastTargetValue).field0_0x0._s_0.Y;
    dVar7 = (this->LastTargetValue).field0_0x0._s_0.Z;
    dVar13 = (double)(__real_3f800000 / fVar16);
    dVar10 = (this->LastTargetValue).field0_0x0._s_0.X;
    dVar9 = (this->LastTargetValue).field0_0x0._s_0.Y;
    dVar8 = (this->LastTargetValue).field0_0x0._s_0.Z;
    for (; fVar1 < fVar16; fVar16 = fVar16 - fVar15) {
      fVar15 = fVar16;
      if (fVar12 <= fVar16) {
        fVar15 = fVar12;
      }
      if ((this->bDoLeftoverRewind != false) && (fVar15 < fVar12)) {
        dVar11 = (double)this->_padding_;
        dVar14 = (double)this->_padding_;
        (this->ValueAfterLastFullStep).field0_0x0._s_0.X = (double)this->_padding_;
        (this->ValueAfterLastFullStep).field0_0x0._s_0.Y = dVar11;
        (this->ValueAfterLastFullStep).field0_0x0._s_0.Z = dVar14;
        this->LastUpdateLeftoverTime = fVar15;
      }
      dVar14 = (double)fVar15;
      dVar10 = dVar10 + dVar14 * (dVar2 - dVar5) * dVar13;
      local_d8._s_0.X = (double)this->_padding_;
      local_d8._s_0.Y = (double)this->_padding_;
      dVar9 = dVar9 + dVar14 * (dVar3 - dVar6) * dVar13;
      local_d8._s_0.Z = (double)this->_padding_;
      dVar8 = dVar8 + dVar14 * (dVar4 - dVar7) * dVar13;
      local_f8._s_0.X = dVar10;
      local_f8._s_0.Y = dVar9;
      local_f8._s_0.Z = dVar8;
      FMath::VInterpTo((TVector<double> *)&local_b8[0]._s_0,(TVector<double> *)&local_d8._s_0,
                       (TVector<double> *)&local_f8._s_0,fVar15,this->Speed);
      this->_padding_ = local_b8[0]._s_0.X;
      this->_padding_ = local_b8[0]._s_0.Y;
      this->_padding_ = local_b8[0]._s_0.Z;
    }
    dVar3 = (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    (this->LastTargetValue).field0_0x0._s_0.X = (double)this->_padding_;
    (this->LastTargetValue).field0_0x0._s_0.Y = dVar3;
    (this->LastTargetValue).field0_0x0._s_0.Z = dVar2;
    return;
  }
  local_b8[0]._0_8_ = this->_padding_;
  local_b8[0]._8_8_ = this->_padding_;
  local_b8[0]._16_8_ = this->_padding_;
  local_d8._s_0.X = (double)this->_padding_;
  local_d8._s_0.Y = (double)this->_padding_;
  local_d8._s_0.Z = (double)this->_padding_;
  FMath::VInterpTo((TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_d8._s_0,
                   (TVector<double> *)&local_b8[0]._s_0,param_1->DeltaTime,this->Speed);
  this->LastUpdateLeftoverTime = 0.0;
  this->_padding_ = (longlong)local_f8._s_0.X;
  this->_padding_ = (longlong)local_f8._s_0.Y;
  this->_padding_ = (longlong)local_f8._s_0.Z;
  return;
}

// OnSerialize @ 14d66e0a0

void __thiscall
UE::Cameras::TIIRValueInterpolator<double>::OnSerialize
          (TIIRValueInterpolator<double> *this,FCameraValueInterpolatorSerializeParams *param_1,
          FArchive *param_2)

{
  float *pfVar1;
  double *pdVar2;
  double *pdVar3;
  float *pfVar4;
  
  pdVar2 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->ValueAfterLastFullStep,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)&this->ValueAfterLastFullStep);
    }
  }
  else {
    this->ValueAfterLastFullStep = *pdVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  pdVar2 = &this->LastTargetValue;
  pdVar3 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar3 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pdVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)pdVar2);
    }
  }
  else {
    *pdVar2 = *pdVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  pfVar1 = &this->LastUpdateLeftoverTime;
  pfVar4 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar4 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  ::operator<<(param_2,&this->bDoLeftoverRewind);
  return;
}

// OnSerialize @ 14d66e1b0

void __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector2<double>_>::OnSerialize
          (TIIRValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  float *pfVar1;
  
  UE::Math::operator<<(param_2,&this->ValueAfterLastFullStep);
  UE::Math::operator<<(param_2,&this->LastTargetValue);
  pfVar1 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->LastUpdateLeftoverTime,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)&this->LastUpdateLeftoverTime);
    }
  }
  else {
    this->LastUpdateLeftoverTime = *pfVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  ::operator<<(param_2,&this->bDoLeftoverRewind);
  return;
}

// OnSerialize @ 14d66e240

void __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector<double>_>::OnSerialize
          (TIIRValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  float *pfVar1;
  
  UE::Math::operator<<(param_2,&this->ValueAfterLastFullStep);
  UE::Math::operator<<(param_2,&this->LastTargetValue);
  pfVar1 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->LastUpdateLeftoverTime,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)&this->LastUpdateLeftoverTime);
    }
  }
  else {
    this->LastUpdateLeftoverTime = *pfVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  ::operator<<(param_2,&this->bDoLeftoverRewind);
  return;
}

