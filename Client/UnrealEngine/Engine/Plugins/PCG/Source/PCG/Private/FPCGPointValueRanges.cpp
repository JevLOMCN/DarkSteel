// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPCGPointValueRanges @ 1497dfbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FPCGPointValueRanges * __thiscall
FPCGPointValueRanges::FPCGPointValueRanges
          (FPCGPointValueRanges *this,UPCGBasePointData *param_1,bool param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  long64 lVar16;
  bool bVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (this->TransformRange).ElementView.FirstElementPtr = (TTransform<double> *)0x0;
  (this->TransformRange).ElementView.BytesBetweenElements = 0;
  (this->TransformRange).ElementView.NumElements = 0;
  (this->TransformRange).NumElements = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Scale3D.ZW.m128d_f64 = auVar9;
  (this->DensityRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->DensityRange).ElementView.BytesBetweenElements = 0;
  (this->DensityRange).ElementView.NumElements = 0;
  (this->DensityRange).NumElements = 0;
  (this->SteepnessRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->SteepnessRange).ElementView.BytesBetweenElements = 0;
  (this->SteepnessRange).ElementView.NumElements = 0;
  (this->SteepnessRange).NumElements = 0;
  (this->BoundsMinRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMinRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMinRange).ElementView.NumElements = 0;
  (this->BoundsMinRange).NumElements = 0;
  (this->BoundsMaxRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMaxRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMaxRange).ElementView.NumElements = 0;
  (this->BoundsMaxRange).NumElements = 0;
  (this->ColorRange).ElementView.FirstElementPtr = (TVector4<double> *)0x0;
  (this->ColorRange).ElementView.BytesBetweenElements = 0;
  (this->ColorRange).ElementView.NumElements = 0;
  (this->ColorRange).NumElements = 0;
  (this->ColorRange).StubValue.field0_0x0._s_0.X = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Y = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Z = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.W = 1.0;
  (this->SeedRange).ElementView.FirstElementPtr = (int *)0x0;
  (this->SeedRange).ElementView.BytesBetweenElements = 0;
  (this->SeedRange).ElementView.NumElements = 0;
  (this->SeedRange).NumElements = 0;
  (this->MetadataEntryRange).ElementView.FirstElementPtr = (long64 *)0x0;
  (this->MetadataEntryRange).ElementView.BytesBetweenElements = 0;
  (this->MetadataEntryRange).ElementView.NumElements = 0;
  (this->MetadataEntryRange).NumElements = 0;
  bVar18 = (**(code **)(param_1->_padding_ + 0x640))(param_1,0);
  if ((param_2) ||
     ((iVar20 = (**(code **)(param_1->_padding_ + 0x488))(param_1), iVar20 == 1 &&
      (cVar19 = (**(code **)(param_1->_padding_ + 0x440))(param_1), cVar19 == '\0')))) {
    bVar17 = true;
LAB_1497dfd24:
    puVar21 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x4c0))(param_1,local_b8,param_2);
    uVar1 = puVar21[1];
    (this->TransformRange).ElementView.FirstElementPtr = (TTransform<double> *)*puVar21;
    (this->TransformRange).ElementView.BytesBetweenElements = (int)uVar1;
    (this->TransformRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
    lVar14 = puVar21[3];
    *(undefined8 *)&(this->TransformRange).NumElements = puVar21[2];
    (this->TransformRange)._padding_ = lVar14;
    dVar15 = (double)puVar21[5];
    (this->TransformRange).StubValue.Rotation.XY.m128d_f64[0] = (double)puVar21[4];
    (this->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar15;
    dVar15 = (double)puVar21[7];
    (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] = (double)puVar21[6];
    (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar15;
    dVar15 = (double)puVar21[9];
    (this->TransformRange).StubValue.Translation.XY.m128d_f64[0] = (double)puVar21[8];
    (this->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar15;
    dVar15 = (double)puVar21[0xb];
    (this->TransformRange).StubValue.Translation.ZW.m128d_f64[0] = (double)puVar21[10];
    (this->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar15;
    uVar10 = *(undefined4 *)((longlong)puVar21 + 100);
    uVar11 = *(undefined4 *)(puVar21 + 0xd);
    uVar12 = *(undefined4 *)((longlong)puVar21 + 0x6c);
    *(undefined4 *)(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 =
         *(undefined4 *)(puVar21 + 0xc);
    *(undefined4 *)((longlong)(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 + 4) = uVar10;
    *(undefined4 *)((this->TransformRange).StubValue.Scale3D.XY.m128d_f64 + 1) = uVar11;
    *(undefined4 *)((longlong)(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 + 0xc) = uVar12;
    dVar15 = (double)puVar21[0xf];
    (this->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] = (double)puVar21[0xe];
    (this->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = dVar15;
    if (!bVar17) goto LAB_1497dfd7c;
LAB_1497dfd82:
    puVar22 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x4c8))(param_1,local_b8,param_2);
    uVar10 = puVar22[1];
    iVar20 = puVar22[2];
    iVar13 = puVar22[3];
    *(undefined4 *)&(this->DensityRange).ElementView.FirstElementPtr = *puVar22;
    *(undefined4 *)((longlong)&(this->DensityRange).ElementView.FirstElementPtr + 4) = uVar10;
    (this->DensityRange).ElementView.BytesBetweenElements = iVar20;
    (this->DensityRange).ElementView.NumElements = iVar13;
    uVar1 = *(undefined8 *)(puVar22 + 4);
    (this->DensityRange).NumElements = (int)uVar1;
    (this->DensityRange).StubValue = (float)(int)((ulonglong)uVar1 >> 0x20);
    if (!bVar17) goto LAB_1497dfdb3;
LAB_1497dfdb9:
    puVar22 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x4e8))(param_1,local_b8,param_2);
    uVar10 = puVar22[1];
    iVar20 = puVar22[2];
    iVar13 = puVar22[3];
    *(undefined4 *)&(this->SteepnessRange).ElementView.FirstElementPtr = *puVar22;
    *(undefined4 *)((longlong)&(this->SteepnessRange).ElementView.FirstElementPtr + 4) = uVar10;
    (this->SteepnessRange).ElementView.BytesBetweenElements = iVar20;
    (this->SteepnessRange).ElementView.NumElements = iVar13;
    uVar1 = *(undefined8 *)(puVar22 + 4);
    (this->SteepnessRange).NumElements = (int)uVar1;
    (this->SteepnessRange).StubValue = (float)(int)((ulonglong)uVar1 >> 0x20);
    if (!bVar17) goto LAB_1497dfdea;
LAB_1497dfdf0:
    puVar21 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x4d0))(param_1,local_b8,param_2);
    uVar1 = puVar21[1];
    (this->BoundsMinRange).ElementView.FirstElementPtr = (TVector<double> *)*puVar21;
    (this->BoundsMinRange).ElementView.BytesBetweenElements = (int)uVar1;
    (this->BoundsMinRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
    dVar15 = (double)puVar21[3];
    *(undefined8 *)&(this->BoundsMinRange).NumElements = puVar21[2];
    (this->BoundsMinRange).StubValue.field0_0x0._s_0.X = dVar15;
    uVar10 = *(undefined4 *)((longlong)puVar21 + 0x24);
    uVar11 = *(undefined4 *)(puVar21 + 5);
    uVar12 = *(undefined4 *)((longlong)puVar21 + 0x2c);
    *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 8) =
         *(undefined4 *)(puVar21 + 4);
    *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 0xc) = uVar10;
    *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 0x10) = uVar11;
    *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 0x14) = uVar12;
    if (!bVar17) goto LAB_1497dfe2a;
LAB_1497dfe30:
    puVar21 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x4d8))(param_1,local_b8,param_2);
    uVar1 = puVar21[1];
    (this->BoundsMaxRange).ElementView.FirstElementPtr = (TVector<double> *)*puVar21;
    (this->BoundsMaxRange).ElementView.BytesBetweenElements = (int)uVar1;
    (this->BoundsMaxRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
    dVar15 = (double)puVar21[3];
    *(undefined8 *)&(this->BoundsMaxRange).NumElements = puVar21[2];
    (this->BoundsMaxRange).StubValue.field0_0x0._s_0.X = dVar15;
    uVar10 = *(undefined4 *)((longlong)puVar21 + 0x24);
    uVar11 = *(undefined4 *)(puVar21 + 5);
    uVar12 = *(undefined4 *)((longlong)puVar21 + 0x2c);
    *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 8) =
         *(undefined4 *)(puVar21 + 4);
    *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 0xc) = uVar10;
    *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 0x10) = uVar11;
    *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 0x14) = uVar12;
    if (!bVar17) goto LAB_1497dfe6a;
LAB_1497dfe70:
    puVar21 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x4e0))(param_1,local_b8,param_2);
    uVar1 = puVar21[1];
    (this->ColorRange).ElementView.FirstElementPtr = (TVector4<double> *)*puVar21;
    (this->ColorRange).ElementView.BytesBetweenElements = (int)uVar1;
    (this->ColorRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
    lVar14 = puVar21[3];
    *(undefined8 *)&(this->ColorRange).NumElements = puVar21[2];
    (this->ColorRange)._padding_ = lVar14;
    uVar10 = *(undefined4 *)((longlong)puVar21 + 0x24);
    uVar11 = *(undefined4 *)(puVar21 + 5);
    uVar12 = *(undefined4 *)((longlong)puVar21 + 0x2c);
    *(undefined4 *)&(this->ColorRange).StubValue.field0_0x0 = *(undefined4 *)(puVar21 + 4);
    *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 4) = uVar10;
    *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 8) = uVar11;
    *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 0xc) = uVar12;
    dVar15 = (double)puVar21[7];
    (this->ColorRange).StubValue.field0_0x0._s_0.Z = (double)puVar21[6];
    (this->ColorRange).StubValue.field0_0x0._s_0.W = dVar15;
    if (!bVar17) goto LAB_1497dfeb5;
LAB_1497dfebb:
    puVar22 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x4f0))(param_1,local_b8,param_2);
    uVar10 = puVar22[1];
    iVar20 = puVar22[2];
    iVar13 = puVar22[3];
    *(undefined4 *)&(this->SeedRange).ElementView.FirstElementPtr = *puVar22;
    *(undefined4 *)((longlong)&(this->SeedRange).ElementView.FirstElementPtr + 4) = uVar10;
    (this->SeedRange).ElementView.BytesBetweenElements = iVar20;
    (this->SeedRange).ElementView.NumElements = iVar13;
    uVar1 = *(undefined8 *)(puVar22 + 4);
    (this->SeedRange).NumElements = (int)uVar1;
    (this->SeedRange).StubValue = (int)((ulonglong)uVar1 >> 0x20);
    if (bVar17) goto LAB_1497dfef1;
  }
  else {
    bVar17 = false;
    if ((bVar18 & 1) != 0) goto LAB_1497dfd24;
LAB_1497dfd7c:
    if ((bVar18 & 2) != 0) goto LAB_1497dfd82;
LAB_1497dfdb3:
    if ((bVar18 & 0x20) != 0) goto LAB_1497dfdb9;
LAB_1497dfdea:
    if ((bVar18 & 4) != 0) goto LAB_1497dfdf0;
LAB_1497dfe2a:
    if ((bVar18 & 8) != 0) goto LAB_1497dfe30;
LAB_1497dfe6a:
    if ((bVar18 & 0x10) != 0) goto LAB_1497dfe70;
LAB_1497dfeb5:
    if ((bVar18 & 0x40) != 0) goto LAB_1497dfebb;
  }
  if (-1 < (char)bVar18) {
    return this;
  }
LAB_1497dfef1:
  puVar21 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x4f8))(param_1,local_b8,param_2);
  uVar1 = puVar21[1];
  (this->MetadataEntryRange).ElementView.FirstElementPtr = (long64 *)*puVar21;
  (this->MetadataEntryRange).ElementView.BytesBetweenElements = (int)uVar1;
  (this->MetadataEntryRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
  lVar16 = puVar21[3];
  *(undefined8 *)&(this->MetadataEntryRange).NumElements = puVar21[2];
  (this->MetadataEntryRange).StubValue = lVar16;
  return this;
}

// SetFromPoint @ 149a0c570

void __thiscall
FPCGPointValueRanges::SetFromPoint(FPCGPointValueRanges *this,int param_1,FPCGPoint *param_2)

{
  float fVar1;
  double dVar2;
  long64 lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  TTransform<double> *pTVar18;
  float *pfVar19;
  TVector<double> *pTVar20;
  int *piVar21;
  long64 *plVar22;
  TVector4<double>_u_0 *pTVar23;
  int iVar24;
  
  if ((this->TransformRange).NumElements != 0) {
    dVar2 = (param_2->Transform).Rotation.XY.m128d_f64[0];
    dVar5 = (param_2->Transform).Rotation.XY.m128d_f64[1];
    dVar6 = (param_2->Transform).Rotation.ZW.m128d_f64[0];
    dVar7 = (param_2->Transform).Rotation.ZW.m128d_f64[1];
    dVar8 = (param_2->Transform).Translation.XY.m128d_f64[0];
    dVar9 = (param_2->Transform).Translation.XY.m128d_f64[1];
    dVar10 = (param_2->Transform).Translation.ZW.m128d_f64[0];
    dVar11 = (param_2->Transform).Translation.ZW.m128d_f64[1];
    dVar12 = (param_2->Transform).Scale3D.XY.m128d_f64[0];
    dVar13 = (param_2->Transform).Scale3D.XY.m128d_f64[1];
    dVar14 = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
    dVar15 = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
    pTVar18 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
              ::operator[](&this->TransformRange,param_1);
    (pTVar18->Rotation).XY.m128d_f64[0] = dVar2;
    (pTVar18->Rotation).XY.m128d_f64[1] = dVar5;
    (pTVar18->Rotation).ZW.m128d_f64[0] = dVar6;
    (pTVar18->Rotation).ZW.m128d_f64[1] = dVar7;
    (pTVar18->Translation).XY.m128d_f64[0] = dVar8;
    (pTVar18->Translation).XY.m128d_f64[1] = dVar9;
    (pTVar18->Translation).ZW.m128d_f64[0] = dVar10;
    (pTVar18->Translation).ZW.m128d_f64[1] = dVar11;
    (pTVar18->Scale3D).XY.m128d_f64[0] = dVar12;
    (pTVar18->Scale3D).XY.m128d_f64[1] = dVar13;
    (pTVar18->Scale3D).ZW.m128d_f64[0] = dVar14;
    (pTVar18->Scale3D).ZW.m128d_f64[1] = dVar15;
  }
  if ((this->DensityRange).NumElements != 0) {
    fVar1 = param_2->Density;
    pfVar19 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                        (&this->DensityRange,param_1);
    *pfVar19 = fVar1;
  }
  if ((this->SteepnessRange).NumElements != 0) {
    fVar1 = param_2->Steepness;
    pfVar19 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                        (&this->SteepnessRange,param_1);
    *pfVar19 = fVar1;
  }
  if ((this->BoundsMinRange).NumElements != 0) {
    dVar5 = (param_2->BoundsMin).field0_0x0._s_0.X;
    dVar6 = (param_2->BoundsMin).field0_0x0._s_0.Y;
    dVar2 = (param_2->BoundsMin).field0_0x0._s_0.Z;
    pTVar20 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
              ::operator[](&this->BoundsMinRange,param_1);
    (pTVar20->field0_0x0)._s_0.X = dVar5;
    (pTVar20->field0_0x0)._s_0.Y = dVar6;
    (pTVar20->field0_0x0)._s_0.Z = dVar2;
  }
  if ((this->BoundsMaxRange).NumElements != 0) {
    dVar5 = (param_2->BoundsMax).field0_0x0._s_0.X;
    dVar6 = (param_2->BoundsMax).field0_0x0._s_0.Y;
    dVar2 = (param_2->BoundsMax).field0_0x0._s_0.Z;
    pTVar20 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
              ::operator[](&this->BoundsMaxRange,param_1);
    (pTVar20->field0_0x0)._s_0.X = dVar5;
    (pTVar20->field0_0x0)._s_0.Y = dVar6;
    (pTVar20->field0_0x0)._s_0.Z = dVar2;
  }
  iVar24 = (this->ColorRange).NumElements;
  if (iVar24 != 0) {
    dVar2 = (param_2->Color).field0_0x0._s_0.X;
    dVar5 = (param_2->Color).field0_0x0._s_0.Y;
    dVar6 = (param_2->Color).field0_0x0._s_0.Z;
    dVar7 = (param_2->Color).field0_0x0._s_0.W;
    uVar17 = 0;
    if (param_1 < iVar24) {
      uVar17 = (uint)~param_1 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar16) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar24 = param_1 % (this->ColorRange).ElementView.NumElements;
    if (param_1 == iVar24) {
      pTVar23 = (TVector4<double>_u_0 *)
                ((longlong)&((this->ColorRange).ElementView.FirstElementPtr)->field0_0x0 +
                (longlong)(this->ColorRange).ElementView.BytesBetweenElements * (longlong)iVar24);
    }
    else {
      pTVar23 = &(this->ColorRange).StubValue.field0_0x0;
    }
    (pTVar23->_s_0).X = dVar2;
    *(double *)((longlong)pTVar23 + 8) = dVar5;
    *(double *)((longlong)pTVar23 + 0x10) = dVar6;
    *(double *)((longlong)pTVar23 + 0x18) = dVar7;
  }
  if ((this->SeedRange).NumElements != 0) {
    iVar24 = param_2->Seed;
    piVar21 = TPCGValueRange<int,TStridedView<int,int>_>::operator[](&this->SeedRange,param_1);
    *piVar21 = iVar24;
  }
  if ((this->MetadataEntryRange).NumElements != 0) {
    lVar3 = param_2->MetadataEntry;
    plVar22 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                        (&this->MetadataEntryRange,param_1);
    *plVar22 = lVar3;
  }
  return;
}

// SetFromValueRanges @ 149b25c80

void __thiscall
FPCGPointValueRanges::SetFromValueRanges
          (FPCGPointValueRanges *this,int param_1,FConstPCGPointValueRanges *param_2,int param_3)

{
  float fVar1;
  double dVar2;
  int iVar3;
  long64 lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TTransform<double> *pTVar16;
  float *pfVar17;
  TVector<double> *pTVar18;
  TVector4<double> *pTVar19;
  int *piVar20;
  long64 *plVar21;
  
  if ((this->TransformRange).NumElements != 0) {
    pTVar16 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
              ::GetElement(&param_2->TransformRange,param_3);
    dVar2 = (pTVar16->Rotation).XY.m128d_f64[0];
    dVar5 = (pTVar16->Rotation).XY.m128d_f64[1];
    dVar6 = (pTVar16->Rotation).ZW.m128d_f64[0];
    dVar7 = (pTVar16->Rotation).ZW.m128d_f64[1];
    dVar8 = (pTVar16->Translation).XY.m128d_f64[0];
    dVar9 = (pTVar16->Translation).XY.m128d_f64[1];
    dVar10 = (pTVar16->Translation).ZW.m128d_f64[0];
    dVar11 = (pTVar16->Translation).ZW.m128d_f64[1];
    dVar12 = (pTVar16->Scale3D).XY.m128d_f64[0];
    dVar13 = (pTVar16->Scale3D).XY.m128d_f64[1];
    dVar14 = (pTVar16->Scale3D).ZW.m128d_f64[0];
    dVar15 = (pTVar16->Scale3D).ZW.m128d_f64[1];
    pTVar16 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
              ::operator[](&this->TransformRange,param_1);
    (pTVar16->Rotation).XY.m128d_f64[0] = dVar2;
    (pTVar16->Rotation).XY.m128d_f64[1] = dVar5;
    (pTVar16->Rotation).ZW.m128d_f64[0] = dVar6;
    (pTVar16->Rotation).ZW.m128d_f64[1] = dVar7;
    (pTVar16->Translation).XY.m128d_f64[0] = dVar8;
    (pTVar16->Translation).XY.m128d_f64[1] = dVar9;
    (pTVar16->Translation).ZW.m128d_f64[0] = dVar10;
    (pTVar16->Translation).ZW.m128d_f64[1] = dVar11;
    (pTVar16->Scale3D).XY.m128d_f64[0] = dVar12;
    (pTVar16->Scale3D).XY.m128d_f64[1] = dVar13;
    (pTVar16->Scale3D).ZW.m128d_f64[0] = dVar14;
    (pTVar16->Scale3D).ZW.m128d_f64[1] = dVar15;
  }
  if ((this->DensityRange).NumElements != 0) {
    pfVar17 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                        (&param_2->DensityRange,param_3);
    fVar1 = *pfVar17;
    pfVar17 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                        (&this->DensityRange,param_1);
    *pfVar17 = fVar1;
  }
  if ((this->SteepnessRange).NumElements != 0) {
    pfVar17 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                        (&param_2->SteepnessRange,param_3);
    fVar1 = *pfVar17;
    pfVar17 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                        (&this->SteepnessRange,param_1);
    *pfVar17 = fVar1;
  }
  if ((this->BoundsMinRange).NumElements != 0) {
    pTVar18 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
              ::GetElement(&param_2->BoundsMinRange,param_3);
    dVar5 = (pTVar18->field0_0x0)._s_0.X;
    dVar6 = (pTVar18->field0_0x0)._s_0.Y;
    dVar2 = (pTVar18->field0_0x0)._s_0.Z;
    pTVar18 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
              ::operator[](&this->BoundsMinRange,param_1);
    (pTVar18->field0_0x0)._s_0.X = dVar5;
    (pTVar18->field0_0x0)._s_0.Y = dVar6;
    (pTVar18->field0_0x0)._s_0.Z = dVar2;
  }
  if ((this->BoundsMaxRange).NumElements != 0) {
    pTVar18 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
              ::GetElement(&param_2->BoundsMaxRange,param_3);
    dVar5 = (pTVar18->field0_0x0)._s_0.X;
    dVar6 = (pTVar18->field0_0x0)._s_0.Y;
    dVar2 = (pTVar18->field0_0x0)._s_0.Z;
    pTVar18 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
              ::operator[](&this->BoundsMaxRange,param_1);
    (pTVar18->field0_0x0)._s_0.X = dVar5;
    (pTVar18->field0_0x0)._s_0.Y = dVar6;
    (pTVar18->field0_0x0)._s_0.Z = dVar2;
  }
  if ((this->ColorRange).NumElements != 0) {
    pTVar19 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
              ::GetElement(&param_2->ColorRange,param_3);
    dVar2 = (pTVar19->field0_0x0)._s_0.X;
    dVar5 = (pTVar19->field0_0x0)._s_0.Y;
    dVar6 = (pTVar19->field0_0x0)._s_0.Z;
    dVar7 = (pTVar19->field0_0x0)._s_0.W;
    pTVar19 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
              ::operator[](&this->ColorRange,param_1);
    (pTVar19->field0_0x0)._s_0.X = dVar2;
    (pTVar19->field0_0x0)._s_0.Y = dVar5;
    (pTVar19->field0_0x0)._s_0.Z = dVar6;
    (pTVar19->field0_0x0)._s_0.W = dVar7;
  }
  if ((this->SeedRange).NumElements != 0) {
    piVar20 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                        (&param_2->SeedRange,param_3);
    iVar3 = *piVar20;
    piVar20 = TPCGValueRange<int,TStridedView<int,int>_>::operator[](&this->SeedRange,param_1);
    *piVar20 = iVar3;
  }
  if ((this->MetadataEntryRange).NumElements != 0) {
    plVar21 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                        (&param_2->MetadataEntryRange,param_3);
    lVar4 = *plVar21;
    plVar21 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                        (&this->MetadataEntryRange,param_1);
    *plVar21 = lVar4;
  }
  return;
}

// FPCGPointValueRanges @ 149be5d80

/* WARNING: Type propagation algorithm not settling */

FPCGPointValueRanges * __thiscall
FPCGPointValueRanges::FPCGPointValueRanges(FPCGPointValueRanges *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->TransformRange).ElementView.FirstElementPtr = (TTransform<double> *)0x0;
  (this->TransformRange).ElementView.BytesBetweenElements = 0;
  (this->TransformRange).ElementView.NumElements = 0;
  (this->TransformRange).NumElements = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TransformRange).StubValue.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TransformRange).StubValue.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TransformRange).StubValue.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformRange).StubValue.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->DensityRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->DensityRange).ElementView.BytesBetweenElements = 0;
  (this->DensityRange).ElementView.NumElements = 0;
  (this->DensityRange).NumElements = 0;
  (this->SteepnessRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->SteepnessRange).ElementView.BytesBetweenElements = 0;
  (this->SteepnessRange).ElementView.NumElements = 0;
  (this->SteepnessRange).NumElements = 0;
  (this->BoundsMinRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMinRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMinRange).ElementView.NumElements = 0;
  (this->BoundsMinRange).NumElements = 0;
  (this->BoundsMaxRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMaxRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMaxRange).ElementView.NumElements = 0;
  (this->BoundsMaxRange).NumElements = 0;
  (this->ColorRange).ElementView.FirstElementPtr = (TVector4<double> *)0x0;
  (this->ColorRange).ElementView.BytesBetweenElements = 0;
  (this->ColorRange).ElementView.NumElements = 0;
  (this->ColorRange).StubValue.field0_0x0._s_0.W = 1.0;
  (this->ColorRange).NumElements = 0;
  (this->ColorRange).StubValue.field0_0x0._s_0.X = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Y = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Z = 0.0;
  (this->SeedRange).ElementView.FirstElementPtr = (int *)0x0;
  (this->SeedRange).ElementView.BytesBetweenElements = 0;
  (this->SeedRange).ElementView.NumElements = 0;
  (this->SeedRange).NumElements = 0;
  (this->MetadataEntryRange).ElementView.FirstElementPtr = (long64 *)0x0;
  (this->MetadataEntryRange).ElementView.BytesBetweenElements = 0;
  (this->MetadataEntryRange).ElementView.NumElements = 0;
  (this->MetadataEntryRange).NumElements = 0;
  return this;
}

