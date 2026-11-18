// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// BilinearSample<double,1> @ 14cea8d70

TVector4<float> * __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<double,1>
          (TImageBuilder<UE::Math::TVector4<float>_> *this,TVector4<float> *__return_storage_ptr__,
          TVector2<double> *param_1,TVector4<float> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  TVector4<float> *pTVar30;
  longlong lVar31;
  int iVar32;
  int iVar33;
  double dVar34;
  undefined1 auVar35 [16];
  
  uVar27 = (uint)&stack0x00000000;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  iVar3 = (this->Dimensions).Width;
  iVar4 = (this->Dimensions).Height;
  if ((((0.0 <= dVar1) && (dVar1 <= (double)iVar3)) &&
      (dVar2 = (param_1->field0_0x0)._s_0.Y, 0.0 <= dVar2)) && (dVar2 <= (double)iVar4)) {
    dVar9 = dVar1 - __real_3fe0000000000000;
    lVar31 = (longlong)dVar9;
    dVar34 = dVar9;
    if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != dVar9)) {
      auVar35._8_8_ = dVar9;
      auVar35._0_8_ = dVar9;
      uVar27 = movmskpd(uVar27,auVar35);
      uVar27 = uVar27 & 1;
      dVar34 = (double)(longlong)(lVar31 - (ulonglong)uVar27);
    }
    dVar10 = dVar2 - __real_3fe0000000000000;
    lVar31 = (longlong)dVar10;
    dVar8 = dVar10;
    if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != dVar10)) {
      auVar7._8_4_ = SUB84(dVar10,0);
      auVar7._0_8_ = dVar10;
      auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar7);
      uVar27 = uVar27 & 1;
      dVar8 = (double)(longlong)(lVar31 - (ulonglong)uVar27);
    }
    dVar1 = dVar1 + __real_3fe0000000000000;
    iVar33 = (int)dVar34;
    lVar31 = (longlong)dVar1;
    iVar32 = (int)dVar8;
    if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != dVar1)) {
      auVar5._8_4_ = SUB84(dVar1,0);
      auVar5._0_8_ = dVar1;
      auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar5);
      dVar1 = (double)(longlong)(lVar31 - (ulonglong)(uVar27 & 1));
    }
    iVar28 = (int)dVar1;
    dVar2 = dVar2 + __real_3fe0000000000000;
    lVar31 = (longlong)dVar2;
    if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != dVar2)) {
      auVar6._8_4_ = SUB84(dVar2,0);
      auVar6._0_8_ = dVar2;
      auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uVar27 = movmskpd(iVar28,auVar6);
      dVar2 = (double)(longlong)(lVar31 - (ulonglong)(uVar27 & 1));
    }
    dVar9 = dVar9 - dVar34;
    dVar10 = dVar10 - dVar8;
    iVar29 = iVar32 + iVar4;
    if (-1 < iVar32) {
      iVar29 = iVar32;
    }
    iVar32 = iVar3 + iVar33;
    if (-1 < iVar33) {
      iVar32 = iVar33;
    }
    dVar1 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X - dVar9;
    dVar34 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y - dVar10;
    iVar33 = (int)dVar2;
    pTVar30 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,(longlong)iVar3 * (longlong)iVar29 + (longlong)iVar32);
    fVar11 = (pTVar30->field0_0x0)._s_0.X;
    fVar12 = (pTVar30->field0_0x0)._s_0.Y;
    fVar13 = (pTVar30->field0_0x0)._s_0.Z;
    fVar14 = (pTVar30->field0_0x0)._s_0.W;
    if (iVar3 <= iVar28) {
      iVar28 = 0;
    }
    pTVar30 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar29 + (longlong)iVar28);
    fVar15 = (pTVar30->field0_0x0)._s_0.X;
    fVar16 = (pTVar30->field0_0x0)._s_0.Y;
    fVar17 = (pTVar30->field0_0x0)._s_0.Z;
    fVar18 = (pTVar30->field0_0x0)._s_0.W;
    if (iVar4 <= iVar33) {
      iVar33 = 0;
    }
    pTVar30 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar33 + (longlong)iVar32);
    fVar19 = (pTVar30->field0_0x0)._s_0.X;
    fVar20 = (pTVar30->field0_0x0)._s_0.Y;
    fVar21 = (pTVar30->field0_0x0)._s_0.Z;
    fVar22 = (pTVar30->field0_0x0)._s_0.W;
    pTVar30 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar33 + (longlong)iVar28);
    dVar2 = dVar34 * dVar1;
    fVar23 = (pTVar30->field0_0x0)._s_0.Y;
    fVar24 = (pTVar30->field0_0x0)._s_0.Z;
    fVar25 = (pTVar30->field0_0x0)._s_0.W;
    dVar1 = dVar1 * dVar10;
    dVar34 = dVar34 * dVar9;
    dVar10 = dVar10 * dVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (float)((double)fVar11 * dVar2) + (float)((double)fVar19 * dVar1) +
         (float)((double)fVar15 * dVar34) + (float)((double)(pTVar30->field0_0x0)._s_0.X * dVar10);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (float)((double)fVar12 * dVar2) + (float)((double)fVar20 * dVar1) +
         (float)((double)fVar16 * dVar34) + (float)((double)fVar23 * dVar10);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (float)((double)fVar13 * dVar2) + (float)((double)fVar21 * dVar1) +
         (float)((double)fVar17 * dVar34) + (float)((double)fVar24 * dVar10);
    (__return_storage_ptr__->field0_0x0)._s_0.W =
         (float)((double)fVar14 * dVar2) + (float)((double)fVar22 * dVar1) +
         (float)((double)fVar18 * dVar34) + (float)((double)fVar25 * dVar10);
    return __return_storage_ptr__;
  }
  uVar26 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar26;
  return __return_storage_ptr__;
}

// BilinearSample<double,0> @ 14cea9280

TVector4<float> * __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<double,0>
          (TImageBuilder<UE::Math::TVector4<float>_> *this,TVector4<float> *__return_storage_ptr__,
          TVector2<double> *param_1,TVector4<float> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  uint uVar25;
  int iVar26;
  TVector4<float> *pTVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  double dVar33;
  undefined1 auVar34 [16];
  
  uVar25 = (uint)&stack0x00000000;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  iVar29 = (this->Dimensions).Height;
  iVar32 = (this->Dimensions).Width;
  if ((((0.0 <= dVar1) && (dVar1 <= (double)iVar32)) &&
      (dVar2 = (param_1->field0_0x0)._s_0.Y, 0.0 <= dVar2)) && (dVar2 <= (double)iVar29)) {
    dVar7 = dVar1 - __real_3fe0000000000000;
    lVar28 = (longlong)dVar7;
    dVar33 = dVar7;
    if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar7)) {
      auVar34._8_8_ = dVar7;
      auVar34._0_8_ = dVar7;
      uVar25 = movmskpd(uVar25,auVar34);
      uVar25 = uVar25 & 1;
      dVar33 = (double)(longlong)(lVar28 - (ulonglong)uVar25);
    }
    dVar8 = dVar2 - __real_3fe0000000000000;
    lVar28 = (longlong)dVar8;
    dVar6 = dVar8;
    if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar8)) {
      auVar5._8_4_ = SUB84(dVar8,0);
      auVar5._0_8_ = dVar8;
      auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      uVar25 = movmskpd(uVar25,auVar5);
      uVar25 = uVar25 & 1;
      dVar6 = (double)(longlong)(lVar28 - (ulonglong)uVar25);
    }
    dVar1 = dVar1 + __real_3fe0000000000000;
    iVar31 = (int)dVar33;
    lVar28 = (longlong)dVar1;
    iVar30 = (int)dVar6;
    if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar1)) {
      auVar3._8_4_ = SUB84(dVar1,0);
      auVar3._0_8_ = dVar1;
      auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      uVar25 = movmskpd(uVar25,auVar3);
      dVar1 = (double)(longlong)(lVar28 - (ulonglong)(uVar25 & 1));
    }
    iVar26 = (int)dVar1;
    dVar2 = dVar2 + __real_3fe0000000000000;
    lVar28 = (longlong)dVar2;
    if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar2)) {
      auVar4._8_4_ = SUB84(dVar2,0);
      auVar4._0_8_ = dVar2;
      auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uVar25 = movmskpd(iVar26,auVar4);
      dVar2 = (double)(longlong)(lVar28 - (ulonglong)(uVar25 & 1));
    }
    dVar7 = dVar7 - dVar33;
    dVar8 = dVar8 - dVar6;
    iVar29 = iVar29 + -1;
    if (iVar30 < 0) {
      iVar30 = 0;
    }
    if (iVar31 < 0) {
      iVar31 = 0;
    }
    dVar1 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X - dVar7;
    dVar33 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y - dVar8;
    pTVar27 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,(longlong)iVar32 * (longlong)iVar30 + (longlong)iVar31);
    fVar9 = (pTVar27->field0_0x0)._s_0.X;
    fVar10 = (pTVar27->field0_0x0)._s_0.Y;
    fVar11 = (pTVar27->field0_0x0)._s_0.Z;
    fVar12 = (pTVar27->field0_0x0)._s_0.W;
    if (iVar32 + -1 < iVar26) {
      iVar26 = iVar32 + -1;
    }
    pTVar27 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar30 + (longlong)iVar26);
    fVar13 = (pTVar27->field0_0x0)._s_0.X;
    fVar14 = (pTVar27->field0_0x0)._s_0.Y;
    fVar15 = (pTVar27->field0_0x0)._s_0.Z;
    fVar16 = (pTVar27->field0_0x0)._s_0.W;
    iVar32 = (int)dVar2;
    if (iVar29 < (int)dVar2) {
      iVar32 = iVar29;
    }
    pTVar27 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar32 + (longlong)iVar31);
    fVar17 = (pTVar27->field0_0x0)._s_0.X;
    fVar18 = (pTVar27->field0_0x0)._s_0.Y;
    fVar19 = (pTVar27->field0_0x0)._s_0.Z;
    fVar20 = (pTVar27->field0_0x0)._s_0.W;
    pTVar27 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                        (&this->Image,
                         (longlong)(this->Dimensions).Width * (longlong)iVar32 + (longlong)iVar26);
    dVar2 = dVar33 * dVar1;
    fVar21 = (pTVar27->field0_0x0)._s_0.Y;
    fVar22 = (pTVar27->field0_0x0)._s_0.Z;
    fVar23 = (pTVar27->field0_0x0)._s_0.W;
    dVar1 = dVar1 * dVar8;
    dVar33 = dVar33 * dVar7;
    dVar8 = dVar8 * dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (float)((double)fVar17 * dVar1) + (float)((double)fVar9 * dVar2) +
         (float)((double)fVar13 * dVar33) + (float)((double)(pTVar27->field0_0x0)._s_0.X * dVar8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (float)((double)fVar18 * dVar1) + (float)((double)fVar10 * dVar2) +
         (float)((double)fVar14 * dVar33) + (float)((double)fVar21 * dVar8);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (float)((double)fVar19 * dVar1) + (float)((double)fVar11 * dVar2) +
         (float)((double)fVar15 * dVar33) + (float)((double)fVar22 * dVar8);
    (__return_storage_ptr__->field0_0x0)._s_0.W =
         (float)((double)fVar20 * dVar1) + (float)((double)fVar12 * dVar2) +
         (float)((double)fVar16 * dVar33) + (float)((double)fVar23 * dVar8);
    return __return_storage_ptr__;
  }
  uVar24 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar24;
  return __return_storage_ptr__;
}

