// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// BilinearSample<float,0> @ 14cb5acf0

float __thiscall
UE::Geometry::TImageBuilder<float>::BilinearSample<float,0>
          (TImageBuilder<float> *this,TVector2<double> *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  undefined1 auVar21 [16];
  
  uVar13 = (uint)&stack0x00000000;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  iVar19 = (this->Dimensions).Width;
  iVar17 = (this->Dimensions).Height;
  if ((((0.0 <= dVar4) && (dVar4 <= (double)iVar19)) &&
      (dVar5 = (param_1->field0_0x0)._s_0.Y, 0.0 <= dVar5)) && (dVar5 <= (double)iVar17)) {
    dVar11 = dVar4 - __real_3fe0000000000000;
    lVar15 = (longlong)dVar11;
    dVar20 = dVar11;
    if ((lVar15 != -0x8000000000000000) && ((double)lVar15 != dVar11)) {
      auVar21._8_8_ = dVar11;
      auVar21._0_8_ = dVar11;
      uVar13 = movmskpd(uVar13,auVar21);
      uVar13 = uVar13 & 1;
      dVar20 = (double)(longlong)(lVar15 - (ulonglong)uVar13);
    }
    dVar10 = dVar5 - __real_3fe0000000000000;
    lVar15 = (longlong)dVar10;
    dVar9 = dVar10;
    if ((lVar15 != -0x8000000000000000) && ((double)lVar15 != dVar10)) {
      auVar8._8_4_ = SUB84(dVar10,0);
      auVar8._0_8_ = dVar10;
      auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uVar13 = movmskpd(uVar13,auVar8);
      uVar13 = uVar13 & 1;
      dVar9 = (double)(longlong)(lVar15 - (ulonglong)uVar13);
    }
    dVar4 = dVar4 + __real_3fe0000000000000;
    iVar18 = (int)dVar20;
    lVar15 = (longlong)dVar4;
    iVar16 = (int)dVar9;
    if ((lVar15 != -0x8000000000000000) && ((double)lVar15 != dVar4)) {
      auVar6._8_4_ = SUB84(dVar4,0);
      auVar6._0_8_ = dVar4;
      auVar6._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uVar13 = movmskpd(uVar13,auVar6);
      uVar13 = uVar13 & 1;
      dVar4 = (double)(longlong)(lVar15 - (ulonglong)uVar13);
    }
    dVar5 = dVar5 + __real_3fe0000000000000;
    lVar15 = (longlong)dVar5;
    if ((lVar15 != -0x8000000000000000) && ((double)lVar15 != dVar5)) {
      auVar7._8_4_ = SUB84(dVar5,0);
      auVar7._0_8_ = dVar5;
      auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uVar13 = movmskpd(uVar13,auVar7);
      dVar5 = (double)(longlong)(lVar15 - (ulonglong)(uVar13 & 1));
    }
    dVar11 = dVar11 - dVar20;
    dVar10 = dVar10 - dVar9;
    iVar17 = iVar17 + -1;
    if (iVar16 < 0) {
      iVar16 = 0;
    }
    if (iVar18 < 0) {
      iVar18 = 0;
    }
    dVar20 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X - dVar11;
    dVar9 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y - dVar10;
    pfVar14 = TDenseGrid2<float>::operator[]
                        (&this->Image,(longlong)iVar19 * (longlong)iVar16 + (longlong)iVar18);
    fVar1 = *pfVar14;
    iVar12 = (int)dVar4;
    if (iVar19 + -1 < (int)dVar4) {
      iVar12 = iVar19 + -1;
    }
    pfVar14 = TDenseGrid2<float>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar16 + (longlong)iVar12);
    fVar2 = *pfVar14;
    iVar19 = (int)dVar5;
    if (iVar17 < (int)dVar5) {
      iVar19 = iVar17;
    }
    pfVar14 = TDenseGrid2<float>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar19 + (longlong)iVar18);
    fVar3 = *pfVar14;
    pfVar14 = TDenseGrid2<float>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar19 + (longlong)iVar12);
    return (float)(dVar20 * dVar10) * fVar3 + (float)(dVar9 * dVar20) * fVar1 +
           (float)(dVar10 * dVar11) * *pfVar14 + (float)(dVar9 * dVar11) * fVar2;
  }
  return *param_2;
}

// BilinearSample<float,0> @ 14cb5b010

TVector<float> * __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>::BilinearSample<float,0>
          (TImageBuilder<UE::Math::TVector<float>_> *this,TVector<float> *__return_storage_ptr__,
          TVector2<double> *param_1,TVector<float> *param_2)

{
  TDenseGrid2<UE::Math::TVector<float>_> *this_00;
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  int iVar16;
  TVector<float> *pTVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar15 = (uint)&stack0x00000000;
  auVar24._0_8_ = (param_1->field0_0x0)._s_0.X;
  iVar6 = (this->Dimensions).Width;
  iVar20 = (this->Dimensions).Height;
  if ((((0.0 <= auVar24._0_8_) && (auVar24._0_8_ <= (double)iVar6)) &&
      (dVar2 = (param_1->field0_0x0)._s_0.Y, 0.0 <= dVar2)) && (dVar2 <= (double)iVar20)) {
    dVar14 = auVar24._0_8_ - __real_3fe0000000000000;
    lVar18 = (longlong)dVar14;
    dVar22 = dVar14;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar14)) {
      auVar23._8_8_ = dVar14;
      auVar23._0_8_ = dVar14;
      uVar15 = movmskpd(uVar15,auVar23);
      uVar15 = uVar15 & 1;
      dVar22 = (double)(longlong)(lVar18 - (ulonglong)uVar15);
    }
    dVar13 = dVar2 - __real_3fe0000000000000;
    lVar18 = (longlong)dVar13;
    dVar12 = dVar13;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar13)) {
      auVar11._8_4_ = SUB84(dVar13,0);
      auVar11._0_8_ = dVar13;
      auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      uVar15 = movmskpd(uVar15,auVar11);
      uVar15 = uVar15 & 1;
      dVar12 = (double)(longlong)(lVar18 - (ulonglong)uVar15);
    }
    auVar24._0_8_ = auVar24._0_8_ + __real_3fe0000000000000;
    iVar21 = (int)dVar22;
    lVar18 = (longlong)auVar24._0_8_;
    iVar19 = (int)dVar12;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != auVar24._0_8_)) {
      auVar24._8_8_ = auVar24._0_8_;
      uVar15 = movmskpd(uVar15,auVar24);
      auVar24._0_8_ = (double)(longlong)(lVar18 - (ulonglong)(uVar15 & 1));
    }
    iVar16 = (int)auVar24._0_8_;
    dVar2 = dVar2 + __real_3fe0000000000000;
    lVar18 = (longlong)dVar2;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar2)) {
      auVar10._8_4_ = SUB84(dVar2,0);
      auVar10._0_8_ = dVar2;
      auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uVar15 = movmskpd(iVar16,auVar10);
      dVar2 = (double)(longlong)(lVar18 - (ulonglong)(uVar15 & 1));
    }
    dVar14 = dVar14 - dVar22;
    dVar13 = dVar13 - dVar12;
    this_00 = &this->Image;
    iVar20 = iVar20 + -1;
    if (iVar19 < 0) {
      iVar19 = 0;
    }
    if (iVar21 < 0) {
      iVar21 = 0;
    }
    dVar22 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X - dVar14;
    auVar24._0_8_ = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y - dVar13;
    pTVar17 = TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                        (this_00,(longlong)iVar6 * (longlong)iVar19 + (longlong)iVar21);
    uVar3 = *(undefined8 *)&pTVar17->field0_0x0;
    fVar7 = (pTVar17->field0_0x0)._s_0.Z;
    if (iVar6 + -1 < iVar16) {
      iVar16 = iVar6 + -1;
    }
    pTVar17 = TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                        (this_00,(longlong)(this->Dimensions).Width * (longlong)iVar19 +
                                 (longlong)iVar16);
    iVar6 = (int)dVar2;
    if (iVar20 < (int)dVar2) {
      iVar6 = iVar20;
    }
    uVar4 = *(undefined8 *)&pTVar17->field0_0x0;
    fVar8 = (pTVar17->field0_0x0)._s_0.Z;
    pTVar17 = TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                        (this_00,(longlong)(this->Dimensions).Width * (longlong)iVar6 +
                                 (longlong)iVar21);
    uVar5 = *(undefined8 *)&pTVar17->field0_0x0;
    fVar9 = (pTVar17->field0_0x0)._s_0.Z;
    pTVar17 = TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                        (this_00,(longlong)(this->Dimensions).Width * (longlong)iVar6 +
                                 (longlong)iVar16);
    fVar28 = (float)(auVar24._0_8_ * dVar22);
    fVar27 = (float)(dVar22 * dVar13);
    fVar26 = (float)(auVar24._0_8_ * dVar14);
    fVar25 = (float)(dVar13 * dVar14);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         fVar27 * (float)uVar5 + fVar28 * (float)uVar3 +
         (float)*(undefined8 *)&pTVar17->field0_0x0 * fVar25 + (float)uVar4 * fVar26;
    fVar1 = (pTVar17->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         fVar27 * (float)((ulonglong)uVar5 >> 0x20) + fVar28 * (float)((ulonglong)uVar3 >> 0x20) +
         (pTVar17->field0_0x0)._s_0.Y * fVar25 + (float)((ulonglong)uVar4 >> 0x20) * fVar26;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         fVar1 * fVar25 + fVar8 * fVar26 + fVar27 * fVar9 + fVar28 * fVar7;
    return __return_storage_ptr__;
  }
  fVar7 = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar7;
  return __return_storage_ptr__;
}

