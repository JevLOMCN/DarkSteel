// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// FTaperedCylinder @ 14db972c0

FTaperedCylinder * __thiscall
Chaos::FTaperedCylinder::FTaperedCylinder
          (FTaperedCylinder *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  undefined8 uVar17;
  uint uVar18;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\t');
  this->_padding_ = (longlong)&___7FTaperedCylinder_Chaos__6B_;
  dVar16 = *(double *)param_2 - *(double *)param_1;
  dVar7 = *(double *)&param_1->field_0x8;
  dVar13 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_2->field_0x8 - dVar7;
  dVar4 = *(double *)&param_2->field_0x10 - dVar13;
  dVar12 = dVar16 * dVar16 + dVar3 * dVar3 + dVar4 * dVar4;
  uVar17 = dVar16;
  uVar5 = dVar3;
  uVar6 = dVar4;
  if ((dVar12 != __real_3ff0000000000000) &&
     (uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar12)) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    uVar17 = dVar16 * dVar12;
    uVar5 = dVar3 * dVar12;
    uVar6 = dVar4 * dVar12;
  }
  *(float *)&(this->MPlane1).MX = (float)*(double *)param_1;
  *(float *)&(this->MPlane1).MX.field_0x4 = (float)dVar7;
  *(float *)&(this->MPlane1).MX.field_0x8 = (float)dVar13;
  *(ulonglong *)&(this->MPlane1).MNormal = CONCAT44((float)(double)uVar5,(float)(double)uVar17);
  *(float *)&(this->MPlane1).MNormal.field_0x8 = (float)(double)uVar6;
  dVar7 = *(double *)&param_2->field_0x8;
  dVar13 = *(double *)&param_2->field_0x10;
  uVar18 = *(uint *)&(this->MPlane1).MNormal ^ __xmm_80000000800000008000000080000000;
  uVar15 = *(uint *)&(this->MPlane1).MNormal.field_0x4 ^ __xmm_80000000800000008000000080000000;
  uVar14 = *(uint *)&(this->MPlane1).MNormal.field_0x8 ^ __xmm_80000000800000008000000080000000;
  *(float *)&(this->MPlane2).MX = (float)*(double *)param_2;
  *(float *)&(this->MPlane2).MX.field_0x4 = (float)dVar7;
  *(float *)&(this->MPlane2).MX.field_0x8 = (float)dVar13;
  *(uint *)&(this->MPlane2).MNormal = uVar18;
  *(uint *)&(this->MPlane2).MNormal.field_0x4 = uVar15;
  *(uint *)&(this->MPlane2).MNormal.field_0x8 = uVar14;
  dVar7 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  dVar13 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
  auVar8._0_8_ = dVar7 * dVar7;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (*(double *)param_2 - *(double *)param_1) *
                 (*(double *)param_2 - *(double *)param_1) + auVar8._0_8_ + dVar13 * dVar13;
  auVar9 = sqrtpd(auVar8,auVar9);
  this->MHeight = (float)auVar9._0_8_;
  this->MRadius2 = (float)param_4;
  this->MRadius1 = (float)param_3;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar5;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar5;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  dVar7 = *(double *)&param_2->field_0x8;
  uVar10 = SUB84(dVar7,0);
  uVar11 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar13 = *(double *)&(this->MLocalBoundingBox).MMin;
  dVar3 = *(double *)param_2;
  if (dVar13 <= *(double *)param_2) {
    dVar3 = dVar13;
  }
  dVar13 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x8;
  if (dVar13 <= dVar7) {
    uVar10 = SUB84(dVar13,0);
    uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
  }
  dVar7 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x10;
  dVar13 = *(double *)&param_2->field_0x10;
  if (dVar7 <= *(double *)&param_2->field_0x10) {
    dVar13 = dVar7;
  }
  *(double *)&(this->MLocalBoundingBox).MMin = dVar3;
  *(ulonglong *)&(this->MLocalBoundingBox).MMin.field_0x8 = CONCAT44(uVar11,uVar10);
  *(double *)&(this->MLocalBoundingBox).MMin.field_0x10 = dVar13;
  dVar7 = *(double *)&(this->MLocalBoundingBox).MMax.field_0x8;
  uVar10 = SUB84(dVar7,0);
  uVar11 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar13 = *(double *)&(this->MLocalBoundingBox).MMax.field_0x10;
  dVar3 = *(double *)&(this->MLocalBoundingBox).MMax;
  dVar4 = *(double *)param_2;
  if (*(double *)param_2 <= dVar3) {
    dVar4 = dVar3;
  }
  dVar3 = *(double *)&param_2->field_0x8;
  if (dVar7 <= dVar3) {
    uVar10 = SUB84(dVar3,0);
    uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  if (dVar13 <= *(double *)&param_2->field_0x10) {
    dVar13 = *(double *)&param_2->field_0x10;
  }
  *(double *)&(this->MLocalBoundingBox).MMax = dVar4;
  *(ulonglong *)&(this->MLocalBoundingBox).MMax.field_0x8 = CONCAT44(uVar11,uVar10);
  *(double *)&(this->MLocalBoundingBox).MMax.field_0x10 = dVar13;
  fVar1 = this->MRadius2;
  if (this->MRadius2 <= this->MRadius1) {
    fVar1 = this->MRadius1;
  }
  dVar7 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x8;
  dVar12 = (double)fVar1;
  dVar3 = *(double *)&(this->MLocalBoundingBox).MMax;
  dVar16 = dVar12 + *(double *)&(this->MLocalBoundingBox).MMax.field_0x8;
  dVar4 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x10;
  *(double *)&(this->MLocalBoundingBox).MMin = *(double *)&(this->MLocalBoundingBox).MMin - dVar12;
  *(double *)&(this->MLocalBoundingBox).MMin.field_0x8 = dVar7 - dVar12;
  auVar2._8_4_ = SUB84(dVar16,0);
  auVar2._0_8_ = dVar12 + dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])&(this->MLocalBoundingBox).MMax = auVar2;
  *(double *)&(this->MLocalBoundingBox).MMax.field_0x10 = dVar12 + dVar13;
  *(double *)&(this->MLocalBoundingBox).MMin.field_0x10 = dVar4 - dVar12;
  return this;
}

