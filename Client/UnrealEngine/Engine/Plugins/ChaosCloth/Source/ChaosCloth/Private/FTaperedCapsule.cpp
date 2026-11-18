// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// FTaperedCapsule @ 14db96f10

FTaperedCapsule * __thiscall
Chaos::FTaperedCapsule::FTaperedCapsule
          (FTaperedCapsule *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,TVector<double,3> *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x10');
  this->_padding_ = (longlong)&___7FTaperedCapsule_Chaos__6B_;
  dVar6 = *(double *)&param_1->field_0x8;
  dVar14 = *(double *)param_1;
  *(float *)&(this->Origin).field_0x8 = (float)*(double *)&param_1->field_0x10;
  *(float *)&this->Origin = (float)dVar14;
  *(float *)&(this->Origin).field_0x4 = (float)dVar6;
  dVar6 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  dVar18 = *(double *)param_2 - *(double *)param_1;
  dVar14 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
  dVar12 = dVar18 * dVar18 + dVar6 * dVar6 + dVar14 * dVar14;
  uVar19 = dVar18;
  uVar13 = dVar6;
  uVar3 = dVar14;
  if ((dVar12 != __real_3ff0000000000000) &&
     (uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar12)) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    uVar19 = dVar18 * dVar12;
    uVar13 = dVar6 * dVar12;
    uVar3 = dVar14 * dVar12;
  }
  fVar11 = (float)(double)uVar19;
  *(float *)&this->Axis = fVar11;
  fVar17 = (float)(double)uVar13;
  fVar21 = (float)(double)uVar3;
  *(float *)&(this->Axis).field_0x4 = fVar17;
  *(float *)&(this->Axis).field_0x8 = fVar21;
  fVar1 = __real_38d1b717;
  fVar15 = (float)*(double *)&param_5->field_0x8 * fVar17 + (float)*(double *)param_5 * fVar11 +
           (float)*(double *)&param_5->field_0x10 * fVar21;
  fVar22 = (float)*(double *)param_5 - fVar11 * fVar15;
  fVar17 = (float)*(double *)&param_5->field_0x8 - fVar15 * fVar17;
  fVar15 = (float)*(double *)&param_5->field_0x10 - fVar15 * fVar21;
  fVar11 = fVar17 * fVar17 + fVar22 * fVar22 + fVar15 * fVar15;
  if (fVar11 == __real_3f800000) {
    uVar9 = fVar15;
    uVar13 = CONCAT44(fVar17,fVar22);
  }
  else {
    uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    if (__real_322bcc77 <= fVar11) {
      fVar11 = __real_3f800000 / SQRT(fVar11);
      uVar9 = fVar11 * fVar15;
      uVar13 = CONCAT44(fVar11 * fVar17,fVar11 * fVar22);
    }
  }
  *(undefined8 *)&this->OneSidedPlaneNormal = uVar13;
  *(undefined4 *)&(this->OneSidedPlaneNormal).field_0x8 = uVar9;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar6 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  dVar14 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
  auVar7._0_8_ = dVar6 * dVar6;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (*(double *)param_2 - *(double *)param_1) *
                 (*(double *)param_2 - *(double *)param_1) + auVar7._0_8_ + dVar14 * dVar14;
  auVar8 = sqrtpd(auVar7,auVar8);
  this->Height = (float)auVar8._0_8_;
  this->Radius1 = (float)param_3;
  this->Radius2 = (float)param_4;
  if (((fVar1 < (float)(*(uint *)&this->OneSidedPlaneNormal & uVar4)) ||
      (fVar1 < (float)(*(uint *)&(this->OneSidedPlaneNormal).field_0x4 & uVar4))) ||
     (fVar1 < (float)(*(uint *)&(this->OneSidedPlaneNormal).field_0x8 & uVar4))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  this->bIsOneSided = bVar5;
  uVar13 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)param_1;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = uVar13;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar13 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)param_1;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar13;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  dVar6 = *(double *)&(this->LocalBoundingBox).MMin;
  dVar14 = *(double *)param_2;
  if (dVar6 <= *(double *)param_2) {
    dVar14 = dVar6;
  }
  dVar6 = *(double *)&(this->LocalBoundingBox).MMin.field_0x8;
  uVar9 = SUB84(dVar6,0);
  uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar12 = *(double *)&param_2->field_0x8;
  if (dVar12 <= dVar6) {
    uVar9 = SUB84(dVar12,0);
    uVar10 = (undefined4)((ulonglong)dVar12 >> 0x20);
  }
  dVar6 = *(double *)&(this->LocalBoundingBox).MMin.field_0x10;
  dVar12 = *(double *)&param_2->field_0x10;
  if (dVar6 <= *(double *)&param_2->field_0x10) {
    dVar12 = dVar6;
  }
  *(double *)&(this->LocalBoundingBox).MMin = dVar14;
  *(ulonglong *)&(this->LocalBoundingBox).MMin.field_0x8 = CONCAT44(uVar10,uVar9);
  *(double *)&(this->LocalBoundingBox).MMin.field_0x10 = dVar12;
  dVar6 = *(double *)&(this->LocalBoundingBox).MMax;
  dVar14 = *(double *)param_2;
  if (*(double *)param_2 <= dVar6) {
    dVar14 = dVar6;
  }
  dVar6 = *(double *)&(this->LocalBoundingBox).MMax.field_0x8;
  uVar9 = SUB84(dVar6,0);
  uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar12 = *(double *)&(this->LocalBoundingBox).MMax.field_0x10;
  if (dVar12 <= *(double *)&param_2->field_0x10) {
    dVar12 = *(double *)&param_2->field_0x10;
  }
  dVar18 = *(double *)&param_2->field_0x8;
  if (dVar6 <= dVar18) {
    uVar9 = SUB84(dVar18,0);
    uVar10 = (undefined4)((ulonglong)dVar18 >> 0x20);
  }
  *(double *)&(this->LocalBoundingBox).MMax = dVar14;
  *(ulonglong *)&(this->LocalBoundingBox).MMax.field_0x8 = CONCAT44(uVar10,uVar9);
  *(double *)&(this->LocalBoundingBox).MMax.field_0x10 = dVar12;
  fVar1 = this->Radius1;
  if (this->Radius1 <= this->Radius2) {
    fVar1 = this->Radius2;
  }
  dVar6 = *(double *)&(this->LocalBoundingBox).MMin.field_0x8;
  dVar16 = (double)fVar1;
  dVar14 = *(double *)&(this->LocalBoundingBox).MMax;
  dVar20 = dVar16 + *(double *)&(this->LocalBoundingBox).MMax.field_0x8;
  dVar18 = *(double *)&(this->LocalBoundingBox).MMin.field_0x10;
  *(double *)&(this->LocalBoundingBox).MMin = *(double *)&(this->LocalBoundingBox).MMin - dVar16;
  *(double *)&(this->LocalBoundingBox).MMin.field_0x8 = dVar6 - dVar16;
  auVar2._8_4_ = SUB84(dVar20,0);
  auVar2._0_8_ = dVar16 + dVar14;
  auVar2._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])&(this->LocalBoundingBox).MMax = auVar2;
  *(double *)&(this->LocalBoundingBox).MMax.field_0x10 = dVar16 + dVar12;
  *(double *)&(this->LocalBoundingBox).MMin.field_0x10 = dVar18 - dVar16;
  return this;
}

