// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// OnRun @ 14d669270

void __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<double>::OnRun
          (TAccelerationDecelerationValueInterpolator<double> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  
  dVar5 = (double)this->_padding_ - (double)this->_padding_;
  uVar7 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar8,uVar7) < 0.0 || (double)CONCAT44(uVar8,uVar7) == 0.0) {
    this->_padding_ = this->_padding_;
    this->CurrentSpeed = 0.0;
    *(undefined1 *)&this->_padding_ = 1;
    return;
  }
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pUVar2 = UAccelerationDecelerationValueInterpolator::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14d6692ec;
  }
  lVar3 = 0;
LAB_14d6692ec:
  auVar6._0_8_ = ((double)*(float *)(lVar3 + 0x30) + (double)*(float *)(lVar3 + 0x30)) *
                 (double)CONCAT44(uVar8,uVar7);
  auVar6._8_8_ = 0;
  auVar6 = sqrtpd(in_XMM2,auVar6);
  dVar5 = auVar6._0_8_;
  if ((double)*(float *)(lVar3 + 0x2c) <= auVar6._0_8_) {
    dVar5 = (double)*(float *)(lVar3 + 0x2c);
  }
  dVar4 = (double)(*(float *)(lVar3 + 0x28) * param_1->DeltaTime + this->CurrentSpeed);
  if (dVar4 <= dVar5) {
    dVar5 = dVar4;
  }
  dVar4 = (double)this->_padding_;
  this->CurrentSpeed = (float)dVar5;
  dVar5 = (double)((float)dVar5 * param_1->DeltaTime);
  if (dVar5 < (double)CONCAT44(uVar8,uVar7)) {
    iVar1 = -1;
    if ((double)this->_padding_ <= dVar4 && dVar4 != (double)this->_padding_) {
      iVar1 = 1;
    }
    this->_padding_ = (longlong)((double)iVar1 * dVar5 + (double)this->_padding_);
  }
  else {
    this->_padding_ = (longlong)dVar4;
    this->CurrentSpeed = 0.0;
    *(undefined1 *)&this->_padding_ = 1;
  }
  return;
}

// OnRun @ 14d6693b0

void __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<UE::Math::TVector2<double>_>::OnRun
          (TAccelerationDecelerationValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  UClass *pUVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM2 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar11 [16];
  
  dVar7 = (double)this->_padding_ - (double)this->_padding_;
  dVar6 = (double)this->_padding_ - (double)this->_padding_;
  dVar8 = 0.0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar7 * dVar7 + dVar6 * dVar6;
  auVar11 = sqrtpd(unaff_XMM7,auVar11);
  dVar7 = auVar11._0_8_;
  if (dVar7 <= 0.0) {
    this->CurrentSpeed = 0.0;
    *(undefined1 *)&this->_padding_ = 1;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    return;
  }
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    pUVar4 = UAccelerationDecelerationValueInterpolator::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14d669447;
  }
  lVar5 = 0;
LAB_14d669447:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ((double)*(float *)(lVar5 + 0x30) + (double)*(float *)(lVar5 + 0x30)) * dVar7;
  auVar11 = sqrtpd(in_XMM2,auVar2);
  dVar6 = auVar11._0_8_;
  if ((double)*(float *)(lVar5 + 0x2c) <= auVar11._0_8_) {
    dVar6 = (double)*(float *)(lVar5 + 0x2c);
  }
  dVar10 = (double)(*(float *)(lVar5 + 0x28) * param_1->DeltaTime + this->CurrentSpeed);
  if (dVar10 <= dVar6) {
    dVar6 = dVar10;
  }
  this->CurrentSpeed = (float)dVar6;
  dVar6 = (double)((float)dVar6 * param_1->DeltaTime);
  if (dVar6 < dVar7) {
    dVar10 = (double)this->_padding_ - (double)this->_padding_;
    dVar9 = (double)this->_padding_ - (double)this->_padding_;
    dVar7 = dVar10 * dVar10 + dVar9 * dVar9;
    if (dVar7 <= __real_3e45798ee0000000) {
      dVar10 = 0.0;
    }
    else {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar7);
      dVar10 = dVar8 * dVar10;
      dVar8 = dVar8 * dVar9;
    }
    dVar7 = dVar8 * dVar6 + (double)this->_padding_;
    dVar8 = dVar10 * dVar6 + (double)this->_padding_;
    auVar3._8_4_ = SUB84(dVar8,0);
    auVar3._0_8_ = dVar7;
    auVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    this->_padding_ = (longlong)dVar7;
    this->_padding_ = auVar3._8_8_;
  }
  else {
    this->CurrentSpeed = 0.0;
    *(undefined1 *)&this->_padding_ = 1;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
  }
  return;
}

// OnRun @ 14d669570

void __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<UE::Math::TVector<double>_>::OnRun
          (TAccelerationDecelerationValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar13 [16];
  
  dVar6 = (double)this->_padding_ - (double)this->_padding_;
  dVar7 = (double)this->_padding_ - (double)this->_padding_;
  dVar4 = (double)this->_padding_ - (double)this->_padding_;
  auVar9._0_8_ = dVar6 * dVar6 + dVar4 * dVar4 + dVar7 * dVar7;
  auVar9._8_8_ = 0;
  auVar13 = sqrtpd(unaff_XMM6,auVar9);
  dVar7 = auVar13._0_8_;
  if (dVar7 <= 0.0) {
    this->CurrentSpeed = 0.0;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    *(undefined1 *)&this->_padding_ = 1;
    this->_padding_ = this->_padding_;
    return;
  }
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pUVar2 = UAccelerationDecelerationValueInterpolator::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14d669613;
  }
  lVar3 = 0;
LAB_14d669613:
  auVar13._8_8_ = 0;
  auVar13._0_8_ = ((double)*(float *)(lVar3 + 0x30) + (double)*(float *)(lVar3 + 0x30)) * dVar7;
  auVar9 = sqrtpd(auVar9,auVar13);
  dVar4 = auVar9._0_8_;
  if ((double)*(float *)(lVar3 + 0x2c) <= auVar9._0_8_) {
    dVar4 = (double)*(float *)(lVar3 + 0x2c);
  }
  dVar6 = (double)(*(float *)(lVar3 + 0x28) * param_1->DeltaTime + this->CurrentSpeed);
  if (dVar6 <= dVar4) {
    dVar4 = dVar6;
  }
  this->CurrentSpeed = (float)dVar4;
  dVar4 = (double)((float)dVar4 * param_1->DeltaTime);
  if (dVar4 < dVar7) {
    dVar11 = (double)this->_padding_ - (double)this->_padding_;
    dVar12 = (double)this->_padding_ - (double)this->_padding_;
    dVar6 = (double)this->_padding_ - (double)this->_padding_;
    dVar7 = dVar12 * dVar12 + dVar11 * dVar11 + dVar6 * dVar6;
    uVar5 = dVar12;
    uVar10 = dVar6;
    uVar8 = dVar11;
    if ((dVar7 != __real_3ff0000000000000) &&
       (uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar7)) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar5 = dVar12 * dVar7;
      uVar10 = dVar6 * dVar7;
      uVar8 = dVar11 * dVar7;
    }
    this->_padding_ = (longlong)((double)uVar8 * dVar4 + (double)this->_padding_);
    this->_padding_ = (longlong)((double)uVar5 * dVar4 + (double)this->_padding_);
    this->_padding_ = (longlong)((double)uVar10 * dVar4 + (double)this->_padding_);
  }
  else {
    this->CurrentSpeed = 0.0;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    *(undefined1 *)&this->_padding_ = 1;
    this->_padding_ = this->_padding_;
  }
  return;
}

// OnSerialize @ 14d66dca0

void __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<double>::OnSerialize
          (TAccelerationDecelerationValueInterpolator<double> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = &this->CurrentSpeed;
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d66dcd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar1);
  return;
}

// OnSerialize @ 14d66dcf0

void __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<UE::Math::TVector2<double>_>::OnSerialize
          (TAccelerationDecelerationValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = &this->CurrentSpeed;
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d66dd29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar1);
  return;
}

// OnSerialize @ 14d66dd40

void __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<UE::Math::TVector<double>_>::OnSerialize
          (TAccelerationDecelerationValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = &this->CurrentSpeed;
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d66dd79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar1);
  return;
}

