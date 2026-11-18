// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 49

// AEFConstantKeyLerp<1> @ 147430c80

AEFConstantKeyLerp<1> * __thiscall
AEFConstantKeyLerp<1>::AEFConstantKeyLerp<1>(AEFConstantKeyLerp<1> *this)

{
  *this = (AEFConstantKeyLerp<1>)&___7__AEFConstantKeyLerp__00__6B_;
  return this;
}

// AEFConstantKeyLerp<2> @ 147430ca0

AEFConstantKeyLerp<2> * __thiscall
AEFConstantKeyLerp<2>::AEFConstantKeyLerp<2>(AEFConstantKeyLerp<2> *this)

{
  *this = (AEFConstantKeyLerp<2>)&___7__AEFConstantKeyLerp__01__6B_;
  return this;
}

// AEFConstantKeyLerp<3> @ 147430cc0

AEFConstantKeyLerp<3> * __thiscall
AEFConstantKeyLerp<3>::AEFConstantKeyLerp<3>(AEFConstantKeyLerp<3> *this)

{
  *this = (AEFConstantKeyLerp<3>)&___7__AEFConstantKeyLerp__02__6B_;
  return this;
}

// AEFConstantKeyLerp<4> @ 147430ce0

AEFConstantKeyLerp<4> * __thiscall
AEFConstantKeyLerp<4>::AEFConstantKeyLerp<4>(AEFConstantKeyLerp<4> *this)

{
  *this = (AEFConstantKeyLerp<4>)&___7__AEFConstantKeyLerp__03__6B_;
  return this;
}

// AEFConstantKeyLerp<5> @ 147430d00

AEFConstantKeyLerp<5> * __thiscall
AEFConstantKeyLerp<5>::AEFConstantKeyLerp<5>(AEFConstantKeyLerp<5> *this)

{
  *this = (AEFConstantKeyLerp<5>)&___7__AEFConstantKeyLerp__04__6B_;
  return this;
}

// AEFConstantKeyLerp<6> @ 147430d20

AEFConstantKeyLerp<6> * __thiscall
AEFConstantKeyLerp<6>::AEFConstantKeyLerp<6>(AEFConstantKeyLerp<6> *this)

{
  *this = (AEFConstantKeyLerp<6>)&___7__AEFConstantKeyLerp__05__6B_;
  return this;
}

// AEFConstantKeyLerp<0> @ 147430d40

AEFConstantKeyLerp<0> * __thiscall
AEFConstantKeyLerp<0>::AEFConstantKeyLerp<0>(AEFConstantKeyLerp<0> *this)

{
  *this = (AEFConstantKeyLerp<0>)&___7__AEFConstantKeyLerp__0A___6B_;
  return this;
}

// GetBoneAtomRotation @ 14744c650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<1>::GetBoneAtomRotation
          (AEFConstantKeyLerp<1> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar8 = param_2->CompressedAnimData[1]._padding_;
  pfVar11 = (float *)((longlong)*(int *)(lVar8 + 8 + (longlong)(param_3 * 4) * 4) +
                     *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys);
  iVar6 = *(int *)(lVar8 + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar6 == 1) {
    fVar22 = *pfVar11;
    fVar12 = pfVar11[1];
    fVar18 = pfVar11[2];
    fVar17 = ((__real_3f800000 - fVar22 * fVar22) - fVar12 * fVar12) - fVar18 * fVar18;
    fVar16 = 0.0;
    if (0.0 < fVar17) {
      fVar16 = SQRT(fVar17);
    }
    (param_1->Rotation).XY.m128d_f64[0] = (double)fVar22;
    (param_1->Rotation).XY.m128d_f64[1] = (double)fVar12;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar18;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar16;
    return;
  }
  fVar22 = 0.0;
  dVar19 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar19) {
    dVar19 = __real_3ff0000000000000;
  }
  fVar12 = (float)dVar19;
  if ((iVar6 < 2) || (fVar12 <= 0.0)) {
    iVar7 = 0;
  }
  else {
    iVar6 = iVar6 + -1;
    iVar7 = iVar6;
    if (fVar12 < __real_3f800000) {
      fVar12 = (float)iVar6 * fVar12;
      iVar9 = (int)fVar12;
      fVar18 = fVar12;
      if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar12)) {
        auVar15._4_4_ = fVar12;
        auVar15._0_4_ = fVar12;
        auVar15._8_8_ = 0;
        uVar5 = movmskps((int)lVar8,auVar15);
        fVar18 = (float)(int)(iVar9 - (uVar5 & 1));
      }
      if ((int)fVar18 < iVar6) {
        iVar7 = (int)fVar18;
      }
      if (param_2->Interpolation == Step) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar12 - fVar18;
      }
      if (iVar7 + 1 < iVar6) {
        iVar6 = iVar7 + 1;
      }
      if (iVar7 != iVar6) {
        lVar8 = (longlong)(iVar7 * 0xc);
        fVar24 = 0.0;
        fVar22 = *(float *)(lVar8 + (longlong)pfVar11);
        fVar18 = *(float *)(lVar8 + 4 + (longlong)pfVar11);
        lVar10 = (longlong)(iVar6 * 0xc);
        fVar16 = *(float *)(lVar8 + 8 + (longlong)pfVar11);
        fVar17 = ((__real_3f800000 - fVar22 * fVar22) - fVar18 * fVar18) - fVar16 * fVar16;
        if (0.0 < fVar17) {
          fVar24 = SQRT(fVar17);
        }
        fVar17 = *(float *)(lVar10 + (longlong)pfVar11);
        fVar20 = *(float *)(lVar10 + 4 + (longlong)pfVar11);
        fVar21 = *(float *)(lVar10 + 8 + (longlong)pfVar11);
        fVar23 = ((__real_3f800000 - fVar17 * fVar17) - fVar20 * fVar20) - fVar21 * fVar21;
        fVar13 = 0.0;
        if (0.0 < fVar23) {
          fVar13 = SQRT(fVar23);
        }
        fVar23 = __real_bf800000;
        if (0.0 <= fVar13 * fVar24 + fVar21 * fVar16 + fVar17 * fVar22 + fVar20 * fVar18) {
          fVar23 = __real_3f800000;
        }
        fVar23 = (__real_3f800000 - fVar12) * fVar23;
        fVar17 = fVar23 * fVar22 + fVar12 * fVar17;
        fVar20 = fVar23 * fVar18 + fVar12 * fVar20;
        fVar21 = fVar23 * fVar16 + fVar12 * fVar21;
        fVar24 = fVar23 * fVar24 + fVar12 * fVar13;
        fVar22 = fVar20 * fVar20 + fVar17 * fVar17;
        fVar12 = fVar17 * fVar17 + fVar20 * fVar20;
        fVar18 = fVar24 * fVar24 + fVar21 * fVar21;
        fVar16 = fVar21 * fVar21 + fVar24 * fVar24;
        auVar14._0_4_ = fVar18 + fVar22;
        auVar14._4_4_ = fVar16 + fVar12;
        auVar14._8_4_ = fVar22 + fVar18;
        auVar14._12_4_ = fVar12 + fVar16;
        bVar2 = _UNK_1506895d8 <= auVar14._8_4_;
        bVar3 = _UNK_1506895dc <= auVar14._12_4_;
        auVar15 = sqrtps(auVar14,auVar14);
        auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
        uVar5 = GlobalVectorConstants::Float0001.m128_u32[2];
        uVar1 = GlobalVectorConstants::Float0001.m128_u32[3];
        dVar19 = (double)(float)((uint)(auVar15._4_4_ * fVar20) &
                                 -(uint)(_UNK_1506895d4 <= auVar14._4_4_) |
                                ~-(uint)(_UNK_1506895d4 <= auVar14._4_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[1]);
        auVar4._8_4_ = SUB84(dVar19,0);
        auVar4._0_8_ = (double)(float)((uint)(auVar15._0_4_ * fVar17) &
                                       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar14._0_4_) |
                                      ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar14._0_4_) &
                                      GlobalVectorConstants::Float0001.m128_u32[0]);
        auVar4._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar4;
        (param_1->Rotation).ZW.m128d_f64[0] =
             (double)(float)((uint)(auVar15._8_4_ * fVar21) & -(uint)bVar2 | ~-(uint)bVar2 & uVar5);
        (param_1->Rotation).ZW.m128d_f64[1] =
             (double)(float)((uint)(auVar15._12_4_ * fVar24) & -(uint)bVar3 | ~-(uint)bVar3 & uVar1)
        ;
        return;
      }
    }
  }
  lVar8 = (longlong)(iVar7 * 0xc);
  fVar12 = *(float *)(lVar8 + (longlong)pfVar11);
  fVar18 = *(float *)(lVar8 + 4 + (longlong)pfVar11);
  fVar16 = *(float *)(lVar8 + 8 + (longlong)pfVar11);
  fVar17 = ((__real_3f800000 - fVar12 * fVar12) - fVar18 * fVar18) - fVar16 * fVar16;
  if (0.0 < fVar17) {
    fVar22 = SQRT(fVar17);
  }
  (param_1->Rotation).XY.m128d_f64[0] = (double)fVar12;
  (param_1->Rotation).XY.m128d_f64[1] = (double)fVar18;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar16;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar22;
  return;
}

// GetBoneAtomRotation @ 14744ca40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<2>::GetBoneAtomRotation
          (AEFConstantKeyLerp<2> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  TQuat<float> local_58;
  TQuat<float> local_48 [4];
  
  fVar15 = __real_3f800000;
  lVar1 = param_2->CompressedAnimData[1]._padding_;
  pfVar10 = (float *)((longlong)*(int *)(lVar1 + 8 + (longlong)(param_3 * 4) * 4) +
                     *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys);
  iVar8 = *(int *)(lVar1 + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar8 == 1) {
    fVar15 = *pfVar10;
    fVar11 = pfVar10[1];
    fVar17 = pfVar10[2];
    fVar16 = ((__real_3f800000 - fVar15 * fVar15) - fVar11 * fVar11) - fVar17 * fVar17;
    fVar14 = 0.0;
    if (0.0 < fVar16) {
      fVar14 = SQRT(fVar16);
    }
    (param_1->Rotation).XY.m128d_f64[0] = (double)fVar15;
    (param_1->Rotation).XY.m128d_f64[1] = (double)fVar11;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar17;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar14;
    return;
  }
  dVar18 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar18) {
    dVar18 = __real_3ff0000000000000;
  }
  fVar11 = (float)dVar18;
  if ((iVar8 < 2) || (fVar11 <= 0.0)) {
    iVar7 = 0;
  }
  else {
    iVar8 = iVar8 + -1;
    iVar7 = iVar8;
    if (fVar11 < __real_3f800000) {
      fVar11 = (float)iVar8 * fVar11;
      iVar9 = (int)fVar11;
      fVar17 = fVar11;
      if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar11)) {
        auVar13._4_4_ = fVar11;
        auVar13._0_4_ = fVar11;
        auVar13._8_8_ = 0;
        uVar6 = movmskps((int)lVar1,auVar13);
        fVar17 = (float)(int)(iVar9 - (uVar6 & 1));
      }
      if ((int)fVar17 < iVar8) {
        iVar7 = (int)fVar17;
      }
      if (param_2->Interpolation == Step) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = fVar11 - fVar17;
      }
      if (iVar7 + 1 < iVar8) {
        iVar8 = iVar7 + 1;
      }
      if (iVar7 != iVar8) {
        FQuatFixed48NoW::ToQuat
                  ((FQuatFixed48NoW *)((longlong)(iVar7 * 6) + (longlong)pfVar10),&local_58);
        FQuatFixed48NoW::ToQuat
                  ((FQuatFixed48NoW *)((longlong)(iVar8 * 6) + (longlong)pfVar10),local_48);
        fVar17 = __real_bf800000;
        if (0.0 <= local_48[0].W * local_58.W + local_48[0].Z * local_58.Z +
                   local_48[0].Y * local_58.Y + local_48[0].X * local_58.X) {
          fVar17 = fVar15;
        }
        fVar17 = (fVar15 - fVar11) * fVar17;
        fVar16 = fVar17 * local_58.X + fVar11 * local_48[0].X;
        fVar19 = fVar17 * local_58.Y + fVar11 * local_48[0].Y;
        fVar20 = fVar17 * local_58.Z + fVar11 * local_48[0].Z;
        fVar21 = fVar17 * local_58.W + fVar11 * local_48[0].W;
        fVar15 = fVar19 * fVar19 + fVar16 * fVar16;
        fVar11 = fVar16 * fVar16 + fVar19 * fVar19;
        fVar17 = fVar21 * fVar21 + fVar20 * fVar20;
        fVar14 = fVar20 * fVar20 + fVar21 * fVar21;
        auVar12._0_4_ = fVar17 + fVar15;
        auVar12._4_4_ = fVar14 + fVar11;
        auVar12._8_4_ = fVar15 + fVar17;
        auVar12._12_4_ = fVar11 + fVar14;
        bVar3 = _UNK_1506895d8 <= auVar12._8_4_;
        bVar4 = _UNK_1506895dc <= auVar12._12_4_;
        auVar13 = sqrtps(auVar12,auVar12);
        auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
        uVar6 = GlobalVectorConstants::Float0001.m128_u32[2];
        uVar2 = GlobalVectorConstants::Float0001.m128_u32[3];
        dVar18 = (double)(float)((uint)(auVar13._4_4_ * fVar19) &
                                 -(uint)(_UNK_1506895d4 <= auVar12._4_4_) |
                                ~-(uint)(_UNK_1506895d4 <= auVar12._4_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[1]);
        auVar5._8_4_ = SUB84(dVar18,0);
        auVar5._0_8_ = (double)(float)((uint)(auVar13._0_4_ * fVar16) &
                                       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar12._0_4_) |
                                      ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar12._0_4_) &
                                      GlobalVectorConstants::Float0001.m128_u32[0]);
        auVar5._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar5;
        (param_1->Rotation).ZW.m128d_f64[0] =
             (double)(float)((uint)(auVar13._8_4_ * fVar20) & -(uint)bVar3 | ~-(uint)bVar3 & uVar6);
        (param_1->Rotation).ZW.m128d_f64[1] =
             (double)(float)((uint)(auVar13._12_4_ * fVar21) & -(uint)bVar4 | ~-(uint)bVar4 & uVar2)
        ;
        return;
      }
    }
  }
  FQuatFixed48NoW::ToQuat((FQuatFixed48NoW *)((longlong)(iVar7 * 6) + (longlong)pfVar10),local_48);
  (param_1->Rotation).XY.m128d_f64[0] = (double)local_48[0].X;
  (param_1->Rotation).XY.m128d_f64[1] = (double)local_48[0].Y;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)local_48[0].Z;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)local_48[0].W;
  return;
}

// GetBoneAtomRotation @ 14744cd50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<3>::GetBoneAtomRotation
          (AEFConstantKeyLerp<3> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  TQuat<float> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  TQuat<float> local_58 [5];
  
  fVar16 = __real_3f800000;
  lVar1 = param_2->CompressedAnimData[1]._padding_;
  pfVar11 = (float *)((longlong)*(int *)(lVar1 + 8 + (longlong)(param_3 * 4) * 4) +
                     *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys);
  iVar8 = *(int *)(lVar1 + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar8 == 1) {
    fVar16 = *pfVar11;
    fVar12 = pfVar11[1];
    fVar18 = pfVar11[2];
    fVar17 = ((__real_3f800000 - fVar16 * fVar16) - fVar12 * fVar12) - fVar18 * fVar18;
    fVar15 = 0.0;
    if (0.0 < fVar17) {
      fVar15 = SQRT(fVar17);
    }
    (param_1->Rotation).XY.m128d_f64[0] = (double)fVar16;
    (param_1->Rotation).XY.m128d_f64[1] = (double)fVar12;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar18;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar15;
    return;
  }
  dVar20 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar20) {
    dVar20 = __real_3ff0000000000000;
  }
  fVar12 = (float)dVar20;
  if ((iVar8 < 2) || (fVar12 <= 0.0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar8 + -1;
    if (fVar12 < __real_3f800000) {
      fVar12 = (float)iVar8 * fVar12;
      iVar10 = (int)fVar12;
      fVar18 = fVar12;
      if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar12)) {
        auVar14._4_4_ = fVar12;
        auVar14._0_4_ = fVar12;
        auVar14._8_8_ = 0;
        uVar6 = movmskps((int)lVar1,auVar14);
        fVar18 = (float)(int)(iVar10 - (uVar6 & 1));
      }
      iVar10 = iVar8;
      if ((int)fVar18 < iVar8) {
        iVar10 = (int)fVar18;
      }
      if (param_2->Interpolation == Step) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar12 - fVar18;
      }
      iVar9 = iVar8;
      if (iVar10 + 1 < iVar8) {
        iVar9 = iVar10 + 1;
      }
      iVar8 = iVar10;
      if (iVar10 != iVar9) {
        pTVar7 = FQuatIntervalFixed32NoW::ToQuat<1>
                           (local_58,pfVar11,pfVar11 + 3,
                            (uint *)((longlong)(iVar10 * 4) + 0x18 + (longlong)pfVar11));
        fVar15 = pTVar7->X;
        fVar17 = pTVar7->Y;
        fVar21 = pTVar7->Z;
        fVar22 = pTVar7->W;
        pTVar7 = FQuatIntervalFixed32NoW::ToQuat<1>
                           (local_58,pfVar11,pfVar11 + 3,
                            (uint *)((longlong)(iVar9 * 4) + 0x18 + (longlong)pfVar11));
        fVar18 = __real_bf800000;
        if (0.0 <= pTVar7->W * fVar22 + pTVar7->Z * fVar21 + pTVar7->Y * fVar17 + pTVar7->X * fVar15
           ) {
          fVar18 = fVar16;
        }
        fVar18 = (fVar16 - fVar12) * fVar18;
        fVar19 = fVar18 * fVar15 + fVar12 * pTVar7->X;
        fVar17 = fVar18 * fVar17 + fVar12 * pTVar7->Y;
        fVar21 = fVar18 * fVar21 + fVar12 * pTVar7->Z;
        fVar22 = fVar18 * fVar22 + fVar12 * pTVar7->W;
        fVar16 = fVar17 * fVar17 + fVar19 * fVar19;
        fVar12 = fVar19 * fVar19 + fVar17 * fVar17;
        fVar18 = fVar22 * fVar22 + fVar21 * fVar21;
        fVar15 = fVar21 * fVar21 + fVar22 * fVar22;
        auVar13._0_4_ = fVar18 + fVar16;
        auVar13._4_4_ = fVar15 + fVar12;
        auVar13._8_4_ = fVar16 + fVar18;
        auVar13._12_4_ = fVar12 + fVar15;
        bVar3 = _UNK_1506895d8 <= auVar13._8_4_;
        bVar4 = _UNK_1506895dc <= auVar13._12_4_;
        auVar14 = sqrtps(auVar13,auVar13);
        auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
        uVar6 = GlobalVectorConstants::Float0001.m128_u32[2];
        uVar2 = GlobalVectorConstants::Float0001.m128_u32[3];
        dVar20 = (double)(float)((uint)(auVar14._4_4_ * fVar17) &
                                 -(uint)(_UNK_1506895d4 <= auVar13._4_4_) |
                                ~-(uint)(_UNK_1506895d4 <= auVar13._4_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[1]);
        auVar5._8_4_ = SUB84(dVar20,0);
        auVar5._0_8_ = (double)(float)((uint)(auVar14._0_4_ * fVar19) &
                                       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar13._0_4_) |
                                      ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar13._0_4_) &
                                      GlobalVectorConstants::Float0001.m128_u32[0]);
        auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar5;
        (param_1->Rotation).ZW.m128d_f64[0] =
             (double)(float)((uint)(auVar14._8_4_ * fVar21) & -(uint)bVar3 | ~-(uint)bVar3 & uVar6);
        (param_1->Rotation).ZW.m128d_f64[1] =
             (double)(float)((uint)(auVar14._12_4_ * fVar22) & -(uint)bVar4 | ~-(uint)bVar4 & uVar2)
        ;
        return;
      }
    }
  }
  pTVar7 = FQuatIntervalFixed32NoW::ToQuat<1>
                     (local_58,pfVar11,pfVar11 + 3,
                      (uint *)((longlong)(iVar8 * 4) + 0x18 + (longlong)pfVar11));
  fVar16 = pTVar7->Y;
  fVar12 = pTVar7->Z;
  fVar18 = pTVar7->W;
  (param_1->Rotation).XY.m128d_f64[0] = (double)pTVar7->X;
  (param_1->Rotation).XY.m128d_f64[1] = (double)fVar16;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar12;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar18;
  return;
}

// GetBoneAtomRotation @ 14744d0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<4>::GetBoneAtomRotation
          (AEFConstantKeyLerp<4> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  TQuat<float> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  TQuat<float> local_58 [5];
  
  fVar16 = __real_3f800000;
  lVar1 = param_2->CompressedAnimData[1]._padding_;
  pfVar11 = (float *)((longlong)*(int *)(lVar1 + 8 + (longlong)(param_3 * 4) * 4) +
                     *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys);
  iVar9 = *(int *)(lVar1 + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar9 == 1) {
    fVar16 = *pfVar11;
    fVar12 = pfVar11[1];
    fVar18 = pfVar11[2];
    fVar17 = ((__real_3f800000 - fVar16 * fVar16) - fVar12 * fVar12) - fVar18 * fVar18;
    fVar15 = 0.0;
    if (0.0 < fVar17) {
      fVar15 = SQRT(fVar17);
    }
    (param_1->Rotation).XY.m128d_f64[0] = (double)fVar16;
    (param_1->Rotation).XY.m128d_f64[1] = (double)fVar12;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar18;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar15;
    return;
  }
  dVar20 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar20) {
    dVar20 = __real_3ff0000000000000;
  }
  fVar12 = (float)dVar20;
  if ((iVar9 < 2) || (fVar12 <= 0.0)) {
    iVar8 = 0;
  }
  else {
    iVar9 = iVar9 + -1;
    iVar8 = iVar9;
    if (fVar12 < __real_3f800000) {
      fVar12 = (float)iVar9 * fVar12;
      iVar10 = (int)fVar12;
      fVar18 = fVar12;
      if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar12)) {
        auVar14._4_4_ = fVar12;
        auVar14._0_4_ = fVar12;
        auVar14._8_8_ = 0;
        uVar6 = movmskps((int)lVar1,auVar14);
        fVar18 = (float)(int)(iVar10 - (uVar6 & 1));
      }
      if ((int)fVar18 < iVar9) {
        iVar8 = (int)fVar18;
      }
      if (param_2->Interpolation == Step) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar12 - fVar18;
      }
      if (iVar8 + 1 < iVar9) {
        iVar9 = iVar8 + 1;
      }
      if (iVar8 != iVar9) {
        pTVar7 = FQuatFixed32NoW::ToQuat<1>
                           (local_58,(uint *)((longlong)(iVar8 * 4) + (longlong)pfVar11));
        fVar15 = pTVar7->X;
        fVar17 = pTVar7->Y;
        fVar21 = pTVar7->Z;
        fVar22 = pTVar7->W;
        pTVar7 = FQuatFixed32NoW::ToQuat<1>
                           (local_58,(uint *)((longlong)(iVar9 * 4) + (longlong)pfVar11));
        fVar18 = __real_bf800000;
        if (0.0 <= pTVar7->W * fVar22 + pTVar7->Z * fVar21 + pTVar7->Y * fVar17 + pTVar7->X * fVar15
           ) {
          fVar18 = fVar16;
        }
        fVar18 = (fVar16 - fVar12) * fVar18;
        fVar19 = fVar18 * fVar15 + fVar12 * pTVar7->X;
        fVar17 = fVar18 * fVar17 + fVar12 * pTVar7->Y;
        fVar21 = fVar18 * fVar21 + fVar12 * pTVar7->Z;
        fVar22 = fVar18 * fVar22 + fVar12 * pTVar7->W;
        fVar16 = fVar17 * fVar17 + fVar19 * fVar19;
        fVar12 = fVar19 * fVar19 + fVar17 * fVar17;
        fVar18 = fVar22 * fVar22 + fVar21 * fVar21;
        fVar15 = fVar21 * fVar21 + fVar22 * fVar22;
        auVar13._0_4_ = fVar18 + fVar16;
        auVar13._4_4_ = fVar15 + fVar12;
        auVar13._8_4_ = fVar16 + fVar18;
        auVar13._12_4_ = fVar12 + fVar15;
        bVar3 = _UNK_1506895d8 <= auVar13._8_4_;
        bVar4 = _UNK_1506895dc <= auVar13._12_4_;
        auVar14 = sqrtps(auVar13,auVar13);
        auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
        uVar6 = GlobalVectorConstants::Float0001.m128_u32[2];
        uVar2 = GlobalVectorConstants::Float0001.m128_u32[3];
        dVar20 = (double)(float)((uint)(auVar14._4_4_ * fVar17) &
                                 -(uint)(_UNK_1506895d4 <= auVar13._4_4_) |
                                ~-(uint)(_UNK_1506895d4 <= auVar13._4_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[1]);
        auVar5._8_4_ = SUB84(dVar20,0);
        auVar5._0_8_ = (double)(float)((uint)(auVar14._0_4_ * fVar19) &
                                       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar13._0_4_) |
                                      ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar13._0_4_) &
                                      GlobalVectorConstants::Float0001.m128_u32[0]);
        auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar5;
        (param_1->Rotation).ZW.m128d_f64[0] =
             (double)(float)((uint)(auVar14._8_4_ * fVar21) & -(uint)bVar3 | ~-(uint)bVar3 & uVar6);
        (param_1->Rotation).ZW.m128d_f64[1] =
             (double)(float)((uint)(auVar14._12_4_ * fVar22) & -(uint)bVar4 | ~-(uint)bVar4 & uVar2)
        ;
        return;
      }
    }
  }
  pTVar7 = FQuatFixed32NoW::ToQuat<1>(local_58,(uint *)((longlong)(iVar8 * 4) + (longlong)pfVar11));
  fVar16 = pTVar7->Y;
  fVar12 = pTVar7->Z;
  fVar18 = pTVar7->W;
  (param_1->Rotation).XY.m128d_f64[0] = (double)pTVar7->X;
  (param_1->Rotation).XY.m128d_f64[1] = (double)fVar16;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar12;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar18;
  return;
}

// GetBoneAtomRotation @ 14744d430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<5>::GetBoneAtomRotation
          (AEFConstantKeyLerp<5> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  TQuat<float> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  TQuat<float> local_58 [5];
  
  fVar16 = __real_3f800000;
  lVar1 = param_2->CompressedAnimData[1]._padding_;
  pfVar11 = (float *)((longlong)*(int *)(lVar1 + 8 + (longlong)(param_3 * 4) * 4) +
                     *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys);
  iVar9 = *(int *)(lVar1 + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar9 == 1) {
    fVar16 = *pfVar11;
    fVar12 = pfVar11[1];
    fVar18 = pfVar11[2];
    fVar17 = ((__real_3f800000 - fVar16 * fVar16) - fVar12 * fVar12) - fVar18 * fVar18;
    fVar15 = 0.0;
    if (0.0 < fVar17) {
      fVar15 = SQRT(fVar17);
    }
    (param_1->Rotation).XY.m128d_f64[0] = (double)fVar16;
    (param_1->Rotation).XY.m128d_f64[1] = (double)fVar12;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar18;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar15;
    return;
  }
  dVar20 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar20) {
    dVar20 = __real_3ff0000000000000;
  }
  fVar12 = (float)dVar20;
  if ((iVar9 < 2) || (fVar12 <= 0.0)) {
    iVar8 = 0;
  }
  else {
    iVar9 = iVar9 + -1;
    iVar8 = iVar9;
    if (fVar12 < __real_3f800000) {
      fVar12 = (float)iVar9 * fVar12;
      iVar10 = (int)fVar12;
      fVar18 = fVar12;
      if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar12)) {
        auVar14._4_4_ = fVar12;
        auVar14._0_4_ = fVar12;
        auVar14._8_8_ = 0;
        uVar6 = movmskps((int)lVar1,auVar14);
        fVar18 = (float)(int)(iVar10 - (uVar6 & 1));
      }
      if ((int)fVar18 < iVar9) {
        iVar8 = (int)fVar18;
      }
      if (param_2->Interpolation == Step) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar12 - fVar18;
      }
      if (iVar8 + 1 < iVar9) {
        iVar9 = iVar8 + 1;
      }
      if (iVar8 != iVar9) {
        pTVar7 = FQuatFloat32NoW::ToQuat<1>
                           (local_58,(uint *)((longlong)(iVar8 * 4) + (longlong)pfVar11));
        fVar15 = pTVar7->X;
        fVar17 = pTVar7->Y;
        fVar21 = pTVar7->Z;
        fVar22 = pTVar7->W;
        pTVar7 = FQuatFloat32NoW::ToQuat<1>
                           (local_58,(uint *)((longlong)(iVar9 * 4) + (longlong)pfVar11));
        fVar18 = __real_bf800000;
        if (0.0 <= pTVar7->W * fVar22 + pTVar7->Z * fVar21 + pTVar7->Y * fVar17 + pTVar7->X * fVar15
           ) {
          fVar18 = fVar16;
        }
        fVar18 = (fVar16 - fVar12) * fVar18;
        fVar19 = fVar18 * fVar15 + fVar12 * pTVar7->X;
        fVar17 = fVar18 * fVar17 + fVar12 * pTVar7->Y;
        fVar21 = fVar18 * fVar21 + fVar12 * pTVar7->Z;
        fVar22 = fVar18 * fVar22 + fVar12 * pTVar7->W;
        fVar16 = fVar17 * fVar17 + fVar19 * fVar19;
        fVar12 = fVar19 * fVar19 + fVar17 * fVar17;
        fVar18 = fVar22 * fVar22 + fVar21 * fVar21;
        fVar15 = fVar21 * fVar21 + fVar22 * fVar22;
        auVar13._0_4_ = fVar18 + fVar16;
        auVar13._4_4_ = fVar15 + fVar12;
        auVar13._8_4_ = fVar16 + fVar18;
        auVar13._12_4_ = fVar12 + fVar15;
        bVar3 = _UNK_1506895d8 <= auVar13._8_4_;
        bVar4 = _UNK_1506895dc <= auVar13._12_4_;
        auVar14 = sqrtps(auVar13,auVar13);
        auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
        uVar6 = GlobalVectorConstants::Float0001.m128_u32[2];
        uVar2 = GlobalVectorConstants::Float0001.m128_u32[3];
        dVar20 = (double)(float)((uint)(auVar14._4_4_ * fVar17) &
                                 -(uint)(_UNK_1506895d4 <= auVar13._4_4_) |
                                ~-(uint)(_UNK_1506895d4 <= auVar13._4_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[1]);
        auVar5._8_4_ = SUB84(dVar20,0);
        auVar5._0_8_ = (double)(float)((uint)(auVar14._0_4_ * fVar19) &
                                       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar13._0_4_) |
                                      ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar13._0_4_) &
                                      GlobalVectorConstants::Float0001.m128_u32[0]);
        auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar5;
        (param_1->Rotation).ZW.m128d_f64[0] =
             (double)(float)((uint)(auVar14._8_4_ * fVar21) & -(uint)bVar3 | ~-(uint)bVar3 & uVar6);
        (param_1->Rotation).ZW.m128d_f64[1] =
             (double)(float)((uint)(auVar14._12_4_ * fVar22) & -(uint)bVar4 | ~-(uint)bVar4 & uVar2)
        ;
        return;
      }
    }
  }
  pTVar7 = FQuatFloat32NoW::ToQuat<1>(local_58,(uint *)((longlong)(iVar8 * 4) + (longlong)pfVar11));
  fVar16 = pTVar7->Y;
  fVar12 = pTVar7->Z;
  fVar18 = pTVar7->W;
  (param_1->Rotation).XY.m128d_f64[0] = (double)pTVar7->X;
  (param_1->Rotation).XY.m128d_f64[1] = (double)fVar16;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar12;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar18;
  return;
}

// GetBoneAtomRotation @ 14744d780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<6>::GetBoneAtomRotation
          (AEFConstantKeyLerp<6> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  
  lVar1 = param_2->CompressedAnimData[1]._padding_;
  iVar8 = *(int *)(lVar1 + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar8 == 1) {
    lVar9 = (longlong)*(int *)(lVar1 + 8 + (longlong)(param_3 * 4) * 4);
    lVar1 = *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys;
    fVar11 = *(float *)(lVar9 + lVar1);
    fVar18 = *(float *)(lVar9 + 4 + lVar1);
    fVar16 = *(float *)(lVar9 + 8 + lVar1);
    fVar17 = ((__real_3f800000 - fVar11 * fVar11) - fVar18 * fVar18) - fVar16 * fVar16;
    fVar14 = 0.0;
    if (0.0 < fVar17) {
      fVar14 = SQRT(fVar17);
    }
    (param_1->Rotation).XY.m128d_f64[0] = (double)fVar11;
    (param_1->Rotation).XY.m128d_f64[1] = (double)fVar18;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar16;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar14;
    return;
  }
  dVar19 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar19) {
    dVar19 = __real_3ff0000000000000;
  }
  fVar11 = (float)dVar19;
  if (((1 < iVar8) && (0.0 < fVar11)) && (iVar8 = iVar8 + -1, fVar11 < __real_3f800000)) {
    fVar11 = (float)iVar8 * fVar11;
    iVar10 = (int)fVar11;
    fVar18 = fVar11;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar11)) {
      auVar13._4_4_ = fVar11;
      auVar13._0_4_ = fVar11;
      auVar13._8_8_ = 0;
      uVar7 = movmskps((int)lVar1,auVar13);
      fVar18 = (float)(int)(iVar10 - (uVar7 & 1));
    }
    iVar10 = iVar8;
    if ((int)fVar18 < iVar8) {
      iVar10 = (int)fVar18;
    }
    if (param_2->Interpolation == Step) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = fVar11 - fVar18;
    }
    if (iVar10 + 1 < iVar8) {
      iVar8 = iVar10 + 1;
    }
    if (iVar10 != iVar8) {
      fVar18 = __real_bf800000;
      if (0.0 <= UE::Math::TQuat<float>::Identity.Z * UE::Math::TQuat<float>::Identity.Z +
                 UE::Math::TQuat<float>::Identity.W * UE::Math::TQuat<float>::Identity.W +
                 UE::Math::TQuat<float>::Identity.Y * UE::Math::TQuat<float>::Identity.Y +
                 UE::Math::TQuat<float>::Identity.X * UE::Math::TQuat<float>::Identity.X) {
        fVar18 = __real_3f800000;
      }
      fVar18 = (__real_3f800000 - fVar11) * fVar18;
      fVar17 = fVar18 * UE::Math::TQuat<float>::Identity.X +
               fVar11 * UE::Math::TQuat<float>::Identity.X;
      fVar20 = fVar18 * UE::Math::TQuat<float>::Identity.Y +
               fVar11 * UE::Math::TQuat<float>::Identity.Y;
      fVar21 = fVar18 * UE::Math::TQuat<float>::Identity.Z +
               fVar11 * UE::Math::TQuat<float>::Identity.Z;
      fVar22 = fVar18 * UE::Math::TQuat<float>::Identity.W +
               fVar11 * UE::Math::TQuat<float>::Identity.W;
      fVar11 = fVar20 * fVar20 + fVar17 * fVar17;
      fVar18 = fVar17 * fVar17 + fVar20 * fVar20;
      fVar16 = fVar22 * fVar22 + fVar21 * fVar21;
      fVar14 = fVar21 * fVar21 + fVar22 * fVar22;
      auVar12._0_4_ = fVar16 + fVar11;
      auVar12._4_4_ = fVar14 + fVar18;
      auVar12._8_4_ = fVar11 + fVar16;
      auVar12._12_4_ = fVar18 + fVar14;
      bVar4 = _UNK_1506895d4 <= auVar12._4_4_;
      bVar5 = _UNK_1506895d8 <= auVar12._8_4_;
      bVar6 = _UNK_1506895dc <= auVar12._12_4_;
      auVar13 = sqrtps(auVar12,auVar12);
      auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
      uVar7 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
      (param_1->Rotation).XY.m128d_f64[0] =
           (double)(float)((uint)(auVar13._0_4_ * fVar17) &
                           -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) |
                          ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[0]);
      (param_1->Rotation).XY.m128d_f64[1] =
           (double)(float)((uint)(auVar13._4_4_ * fVar20) & -(uint)bVar4 | ~-(uint)bVar4 & uVar7);
      (param_1->Rotation).ZW.m128d_f64[0] =
           (double)(float)((uint)(auVar13._8_4_ * fVar21) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
      (param_1->Rotation).ZW.m128d_f64[1] =
           (double)(float)((uint)(auVar13._12_4_ * fVar22) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
      return;
    }
  }
  dVar23 = (double)UE::Math::TQuat<float>::Identity.Y;
  dVar15 = (double)UE::Math::TQuat<float>::Identity.Z;
  dVar19 = (double)UE::Math::TQuat<float>::Identity.W;
  (param_1->Rotation).XY.m128d_f64[0] = (double)UE::Math::TQuat<float>::Identity.X;
  (param_1->Rotation).XY.m128d_f64[1] = dVar23;
  (param_1->Rotation).ZW.m128d_f64[0] = dVar15;
  (param_1->Rotation).ZW.m128d_f64[1] = dVar19;
  return;
}

// GetBoneAtomRotation @ 14744da60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<0>::GetBoneAtomRotation
          (AEFConstantKeyLerp<0> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar8 = param_2->CompressedAnimData[1]._padding_;
  pfVar13 = (float *)((longlong)*(int *)(lVar8 + 8 + (longlong)(param_3 * 4) * 4) +
                     *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys);
  iVar10 = *(int *)(lVar8 + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar10 == 1) {
    fVar14 = *pfVar13;
    fVar20 = pfVar13[1];
    fVar18 = pfVar13[2];
    fVar19 = ((__real_3f800000 - fVar14 * fVar14) - fVar20 * fVar20) - fVar18 * fVar18;
    fVar17 = 0.0;
    if (0.0 < fVar19) {
      fVar17 = SQRT(fVar19);
    }
    (param_1->Rotation).XY.m128d_f64[0] = (double)fVar14;
    (param_1->Rotation).XY.m128d_f64[1] = (double)fVar20;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar18;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar17;
    return;
  }
  dVar22 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar22) {
    dVar22 = __real_3ff0000000000000;
  }
  fVar14 = (float)dVar22;
  if ((iVar10 < 2) || (fVar14 <= 0.0)) {
    iVar9 = 0;
  }
  else {
    iVar10 = iVar10 + -1;
    iVar9 = iVar10;
    if (fVar14 < __real_3f800000) {
      fVar14 = (float)iVar10 * fVar14;
      iVar12 = (int)fVar14;
      fVar20 = fVar14;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar14)) {
        auVar16._4_4_ = fVar14;
        auVar16._0_4_ = fVar14;
        auVar16._8_8_ = 0;
        uVar7 = movmskps((int)lVar8,auVar16);
        fVar20 = (float)(int)(iVar12 - (uVar7 & 1));
      }
      if ((int)fVar20 < iVar10) {
        iVar9 = (int)fVar20;
      }
      if (param_2->Interpolation == Step) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = fVar14 - fVar20;
      }
      if (iVar9 + 1 < iVar10) {
        iVar10 = iVar9 + 1;
      }
      if (iVar9 != iVar10) {
        lVar11 = (longlong)(iVar10 << 4);
        lVar8 = (longlong)(iVar9 << 4);
        fVar20 = *(float *)(lVar11 + 4 + (longlong)pfVar13);
        fVar18 = *(float *)(lVar8 + 8 + (longlong)pfVar13);
        fVar17 = *(float *)(lVar11 + 8 + (longlong)pfVar13);
        fVar19 = *(float *)(lVar11 + 0xc + (longlong)pfVar13);
        fVar23 = *(float *)(lVar8 + 4 + (longlong)pfVar13);
        fVar1 = *(float *)(lVar8 + 0xc + (longlong)pfVar13);
        fVar25 = __real_bf800000;
        if (0.0 <= *(float *)(lVar11 + (longlong)pfVar13) * *(float *)(lVar8 + (longlong)pfVar13) +
                   fVar20 * fVar23 + fVar19 * fVar1 + fVar17 * fVar18) {
          fVar25 = __real_3f800000;
        }
        fVar25 = (__real_3f800000 - fVar14) * fVar25;
        fVar21 = fVar25 * *(float *)(lVar8 + (longlong)pfVar13) +
                 fVar14 * *(float *)(lVar11 + (longlong)pfVar13);
        fVar23 = fVar25 * fVar23 + fVar14 * fVar20;
        fVar24 = fVar25 * fVar18 + fVar14 * fVar17;
        fVar19 = fVar25 * fVar1 + fVar14 * fVar19;
        fVar14 = fVar23 * fVar23 + fVar21 * fVar21;
        fVar20 = fVar21 * fVar21 + fVar23 * fVar23;
        fVar18 = fVar19 * fVar19 + fVar24 * fVar24;
        fVar17 = fVar24 * fVar24 + fVar19 * fVar19;
        auVar15._0_4_ = fVar18 + fVar14;
        auVar15._4_4_ = fVar17 + fVar20;
        auVar15._8_4_ = fVar14 + fVar18;
        auVar15._12_4_ = fVar20 + fVar17;
        bVar4 = _UNK_1506895d8 <= auVar15._8_4_;
        bVar5 = _UNK_1506895dc <= auVar15._12_4_;
        auVar16 = sqrtps(auVar15,auVar15);
        auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
        uVar7 = GlobalVectorConstants::Float0001.m128_u32[2];
        uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
        dVar22 = (double)(float)((uint)(auVar16._4_4_ * fVar23) &
                                 -(uint)(_UNK_1506895d4 <= auVar15._4_4_) |
                                ~-(uint)(_UNK_1506895d4 <= auVar15._4_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[1]);
        auVar6._8_4_ = SUB84(dVar22,0);
        auVar6._0_8_ = (double)(float)((uint)(auVar16._0_4_ * fVar21) &
                                       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar15._0_4_) |
                                      ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                              auVar15._0_4_) &
                                      GlobalVectorConstants::Float0001.m128_u32[0]);
        auVar6._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar6;
        (param_1->Rotation).ZW.m128d_f64[0] =
             (double)(float)((uint)(auVar16._8_4_ * fVar24) & -(uint)bVar4 | ~-(uint)bVar4 & uVar7);
        (param_1->Rotation).ZW.m128d_f64[1] =
             (double)(float)((uint)(auVar16._12_4_ * fVar19) & -(uint)bVar5 | ~-(uint)bVar5 & uVar3)
        ;
        return;
      }
    }
  }
  lVar8 = (longlong)(iVar9 << 4);
  fVar14 = *(float *)(lVar8 + 4 + (longlong)pfVar13);
  uVar2 = *(undefined8 *)(lVar8 + 8 + (longlong)pfVar13);
  (param_1->Rotation).XY.m128d_f64[0] = (double)*(float *)(lVar8 + (longlong)pfVar13);
  (param_1->Rotation).XY.m128d_f64[1] = (double)fVar14;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)(float)uVar2;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)(float)((ulonglong)uVar2 >> 0x20);
  return;
}

// GetBoneAtomScale @ 14744f7d0

void __thiscall
AEFConstantKeyLerp<1>::GetBoneAtomScale
          (AEFConstantKeyLerp<1> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  ICompressedAnimData *pIVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fStack_44;
  
  pIVar2 = param_2->CompressedAnimData;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_);
  iVar5 = *piVar4;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_ + 1);
  lVar10 = (longlong)iVar5 + *(longlong *)&pIVar2[3].CompressedNumberOfKeys;
  dVar13 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar13) {
    dVar13 = __real_3ff0000000000000;
  }
  fVar11 = (float)dVar13;
  if ((*piVar4 < 2) || (fVar15 = 0.0, fVar11 <= 0.0)) {
    iVar5 = 0;
  }
  else {
    iVar6 = *piVar4 + -1;
    iVar5 = iVar6;
    if (fVar11 < __real_3f800000) {
      fVar11 = (float)iVar6 * fVar11;
      iVar8 = (int)fVar11;
      fVar12 = fVar11;
      if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
        auVar14._4_4_ = fVar11;
        auVar14._0_4_ = fVar11;
        auVar14._8_8_ = 0;
        uVar3 = movmskps((int)piVar4,auVar14);
        fVar12 = (float)(int)(iVar8 - (uVar3 & 1));
      }
      if ((int)fVar12 < iVar6) {
        iVar5 = (int)fVar12;
      }
      if (param_2->Interpolation != Step) {
        fVar15 = fVar11 - fVar12;
      }
      if (iVar5 + 1 < iVar6) {
        iVar6 = iVar5 + 1;
      }
      if (iVar5 != iVar6) {
        lVar9 = (longlong)(iVar5 * 0xc);
        lVar7 = (longlong)(iVar6 * 0xc);
        fVar12 = (float)*(undefined8 *)(lVar9 + lVar10);
        fVar12 = ((float)*(undefined8 *)(lVar7 + lVar10) - fVar12) * fVar15 + fVar12;
        fStack_44 = (float)((ulonglong)*(undefined8 *)(lVar9 + lVar10) >> 0x20);
        fStack_44 = (*(float *)(lVar7 + 4 + lVar10) - fStack_44) * fVar15 + fStack_44;
        fVar11 = (*(float *)(lVar7 + 8 + lVar10) - *(float *)(lVar9 + 8 + lVar10)) * fVar15 +
                 *(float *)(lVar9 + 8 + lVar10);
        goto LAB_14744f887;
      }
    }
  }
  uVar1 = *(undefined8 *)(iVar5 * 0xc + lVar10);
  fVar12 = (float)uVar1;
  fStack_44 = (float)((ulonglong)uVar1 >> 0x20);
  fVar11 = *(float *)((longlong)(iVar5 * 0xc) + 8 + lVar10);
LAB_14744f887:
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar12;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fStack_44;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar11;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 14744f9c0

void __thiscall
AEFConstantKeyLerp<2>::GetBoneAtomScale
          (AEFConstantKeyLerp<2> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  ICompressedAnimData *pIVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  
  pIVar1 = param_2->CompressedAnimData;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_);
  iVar4 = *piVar3;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_ + 1);
  lVar9 = (longlong)iVar4 + *(longlong *)&pIVar1[3].CompressedNumberOfKeys;
  dVar13 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar13) {
    dVar13 = __real_3ff0000000000000;
  }
  fVar10 = (float)dVar13;
  if ((*piVar3 < 2) || (fVar15 = 0.0, fVar10 <= 0.0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = *piVar3 + -1;
    iVar4 = iVar5;
    if (fVar10 < __real_3f800000) {
      fVar10 = (float)iVar5 * fVar10;
      iVar7 = (int)fVar10;
      fVar11 = fVar10;
      if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar10)) {
        auVar14._4_4_ = fVar10;
        auVar14._0_4_ = fVar10;
        auVar14._8_8_ = 0;
        uVar2 = movmskps((int)piVar3,auVar14);
        fVar11 = (float)(int)(iVar7 - (uVar2 & 1));
      }
      if ((int)fVar11 < iVar5) {
        iVar4 = (int)fVar11;
      }
      if (param_2->Interpolation != Step) {
        fVar15 = fVar10 - fVar11;
      }
      if (iVar4 + 1 < iVar5) {
        iVar5 = iVar4 + 1;
      }
      if (iVar4 != iVar5) {
        lVar6 = (longlong)(iVar4 * 0xc);
        lVar8 = (longlong)(iVar5 * 0xc);
        fVar11 = (float)(int)(*(ushort *)(lVar6 + lVar9) - 0x7fff) * __real_3b800100;
        fVar12 = (float)(int)(*(ushort *)(lVar6 + 2 + lVar9) - 0x7fff) * __real_3b800100;
        fVar10 = (float)(int)(*(ushort *)(lVar6 + 4 + lVar9) - 0x7fff) * __real_3b800100;
        fVar11 = ((float)(int)(*(ushort *)(lVar8 + lVar9) - 0x7fff) * __real_3b800100 - fVar11) *
                 fVar15 + fVar11;
        fVar12 = ((float)(int)(*(ushort *)(lVar8 + 2 + lVar9) - 0x7fff) * __real_3b800100 - fVar12)
                 * fVar15 + fVar12;
        fVar10 = ((float)(int)(*(ushort *)(lVar8 + 4 + lVar9) - 0x7fff) * __real_3b800100 - fVar10)
                 * fVar15 + fVar10;
        goto LAB_14744facd;
      }
    }
  }
  lVar6 = (longlong)(iVar4 * 0xc);
  fVar11 = (float)(int)(*(ushort *)(lVar6 + lVar9) - 0x7fff) * __real_3b800100;
  fVar12 = (float)(int)(*(ushort *)(lVar6 + 2 + lVar9) - 0x7fff) * __real_3b800100;
  fVar10 = (float)(int)(*(ushort *)(lVar6 + 4 + lVar9) - 0x7fff) * __real_3b800100;
LAB_14744facd:
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar11;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fVar12;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar10;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 14744fc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<3>::GetBoneAtomScale
          (AEFConstantKeyLerp<3> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  ICompressedAnimData *pIVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  
  pIVar1 = param_2->CompressedAnimData;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_);
  iVar6 = *piVar3;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_ + 1);
  pfVar8 = (float *)(*(longlong *)&pIVar1[3].CompressedNumberOfKeys + (longlong)iVar6);
  dVar12 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar12) {
    dVar12 = __real_3ff0000000000000;
  }
  fVar9 = (float)dVar12;
  pfVar5 = pfVar8;
  if (1 < *piVar3) {
    fVar14 = 0.0;
    if (0.0 < fVar9) {
      iVar6 = *piVar3 + -1;
      iVar7 = iVar6;
      if (fVar9 < __real_3f800000) {
        fVar9 = (float)iVar6 * fVar9;
        iVar4 = (int)fVar9;
        fVar10 = fVar9;
        if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar9)) {
          auVar13._4_4_ = fVar9;
          auVar13._0_4_ = fVar9;
          auVar13._8_8_ = 0;
          uVar2 = movmskps((int)piVar3,auVar13);
          fVar10 = (float)(int)(iVar4 - (uVar2 & 1));
        }
        if ((int)fVar10 < iVar6) {
          iVar7 = (int)fVar10;
        }
        if (param_2->Interpolation != Step) {
          fVar14 = fVar9 - fVar10;
        }
        if (iVar7 + 1 < iVar6) {
          iVar6 = iVar7 + 1;
        }
      }
    }
    else {
      iVar6 = 0;
      iVar7 = 0;
    }
    pfVar5 = (float *)((longlong)(iVar7 * 4) + 0x18 + (longlong)pfVar8);
    if (iVar7 != iVar6) {
      fVar9 = *pfVar5;
      uVar2 = *(uint *)((longlong)(iVar6 * 4) + 0x18 + (longlong)pfVar8);
      fVar10 = (float)(int)(((uint)fVar9 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar8[3] + *pfVar8;
      fVar11 = (float)(int)(((uint)fVar9 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar8[4] +
               pfVar8[1];
      fVar9 = (float)(int)(((uint)fVar9 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar8[5] + pfVar8[2];
      fVar10 = (((float)(int)((uVar2 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar8[3] + *pfVar8) -
               fVar10) * fVar14 + fVar10;
      fVar11 = (((float)(int)((uVar2 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar8[4] +
                pfVar8[1]) - fVar11) * fVar14 + fVar11;
      fVar9 = (((float)(int)((uVar2 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar8[5] + pfVar8[2]) -
              fVar9) * fVar14 + fVar9;
      goto LAB_14744fd89;
    }
  }
  fVar9 = *pfVar5;
  fVar10 = (float)(int)(((uint)fVar9 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar8[3] + *pfVar8;
  fVar11 = (float)(int)(((uint)fVar9 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar8[4] +
           pfVar8[1];
  fVar9 = (float)(int)(((uint)fVar9 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar8[5] + pfVar8[2];
LAB_14744fd89:
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar10;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fVar11;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar9;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 14744ffa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFConstantKeyLerp<4>::GetBoneAtomScale
          (AEFConstantKeyLerp<4> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  ICompressedAnimData *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  
  pIVar1 = param_2->CompressedAnimData;
  TArrayView<int,int>::operator[]
            ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_);
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_ + 1);
  dVar11 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  fVar9 = (float)dVar11;
  if (((1 < *piVar6) && (fVar13 = 0.0, 0.0 < fVar9)) &&
     (iVar7 = *piVar6 + -1, fVar9 < __real_3f800000)) {
    fVar9 = (float)iVar7 * fVar9;
    iVar8 = (int)fVar9;
    fVar10 = fVar9;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar9)) {
      auVar12._4_4_ = fVar9;
      auVar12._0_4_ = fVar9;
      auVar12._8_8_ = 0;
      uVar5 = movmskps((int)piVar6,auVar12);
      fVar10 = (float)(int)(iVar8 - (uVar5 & 1));
    }
    iVar8 = iVar7;
    if ((int)fVar10 < iVar7) {
      iVar8 = (int)fVar10;
    }
    if (param_2->Interpolation != Step) {
      fVar13 = fVar9 - fVar10;
    }
    if (iVar8 + 1 < iVar7) {
      iVar7 = iVar8 + 1;
    }
    if (iVar8 != iVar7) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressScale<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressScale<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar2 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar2) * fVar13 +
              (float)uVar2;
      uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar3) * fVar13 +
              (float)uVar3;
      uVar4 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar4) * fVar13 +
              (float)uVar4;
      goto LAB_1474501b0;
    }
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)
             &`void___cdecl_DecompressScale<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
              ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
LAB_1474501b0:
  (param_1->Scale3D).XY.m128d_f64[0] = (double)(float)uVar3;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)(float)uVar4;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)(float)uVar2;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 1474501e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFConstantKeyLerp<5>::GetBoneAtomScale
          (AEFConstantKeyLerp<5> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  ICompressedAnimData *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  
  pIVar1 = param_2->CompressedAnimData;
  TArrayView<int,int>::operator[]
            ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_);
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_ + 1);
  dVar11 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  fVar9 = (float)dVar11;
  if (((1 < *piVar6) && (fVar13 = 0.0, 0.0 < fVar9)) &&
     (iVar7 = *piVar6 + -1, fVar9 < __real_3f800000)) {
    fVar9 = (float)iVar7 * fVar9;
    iVar8 = (int)fVar9;
    fVar10 = fVar9;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar9)) {
      auVar12._4_4_ = fVar9;
      auVar12._0_4_ = fVar9;
      auVar12._8_8_ = 0;
      uVar5 = movmskps((int)piVar6,auVar12);
      fVar10 = (float)(int)(iVar8 - (uVar5 & 1));
    }
    iVar8 = iVar7;
    if ((int)fVar10 < iVar7) {
      iVar8 = (int)fVar10;
    }
    if (param_2->Interpolation != Step) {
      fVar13 = fVar9 - fVar10;
    }
    if (iVar8 + 1 < iVar7) {
      iVar7 = iVar8 + 1;
    }
    if (iVar8 != iVar7) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressScale<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressScale<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar2 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar2) * fVar13 +
              (float)uVar2;
      uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar3) * fVar13 +
              (float)uVar3;
      uVar4 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar4) * fVar13 +
              (float)uVar4;
      goto LAB_1474503f0;
    }
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)
             &`void___cdecl_DecompressScale<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
              ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
LAB_1474503f0:
  (param_1->Scale3D).XY.m128d_f64[0] = (double)(float)uVar3;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)(float)uVar4;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)(float)uVar2;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 147450420

void __thiscall
AEFConstantKeyLerp<6>::GetBoneAtomScale
          (AEFConstantKeyLerp<6> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  ICompressedAnimData *pIVar1;
  int *piVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  
  pIVar1 = param_2->CompressedAnimData;
  TArrayView<int,int>::operator[]
            ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_);
  piVar2 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar1 + 2),param_3 * (int)pIVar1[3]._padding_ + 1);
  dVar5 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  fVar6 = (float)dVar5;
  if (((1 < *piVar2) && (0.0 < fVar6)) && (fVar6 < __real_3f800000)) {
    auVar4._0_4_ = (float)(*piVar2 + -1) * fVar6;
    if (((int)auVar4._0_4_ != -0x80000000) && ((float)(int)auVar4._0_4_ != auVar4._0_4_)) {
      auVar4._4_4_ = auVar4._0_4_;
      auVar4._8_8_ = 0;
      movmskps((int)piVar2,auVar4);
    }
  }
  dVar3 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  dVar5 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (param_1->Scale3D).XY.m128d_f64[0] =
       (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  (param_1->Scale3D).XY.m128d_f64[1] = dVar3;
  (param_1->Scale3D).ZW.m128d_f64[0] = dVar5;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 147450580

void __thiscall
AEFConstantKeyLerp<0>::GetBoneAtomScale
          (AEFConstantKeyLerp<0> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  ICompressedAnimData *pIVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fStack_44;
  
  pIVar2 = param_2->CompressedAnimData;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_);
  iVar5 = *piVar4;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_ + 1);
  lVar10 = (longlong)iVar5 + *(longlong *)&pIVar2[3].CompressedNumberOfKeys;
  dVar13 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar13) {
    dVar13 = __real_3ff0000000000000;
  }
  fVar11 = (float)dVar13;
  if ((*piVar4 < 2) || (fVar15 = 0.0, fVar11 <= 0.0)) {
    iVar5 = 0;
  }
  else {
    iVar6 = *piVar4 + -1;
    iVar5 = iVar6;
    if (fVar11 < __real_3f800000) {
      fVar11 = (float)iVar6 * fVar11;
      iVar8 = (int)fVar11;
      fVar12 = fVar11;
      if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
        auVar14._4_4_ = fVar11;
        auVar14._0_4_ = fVar11;
        auVar14._8_8_ = 0;
        uVar3 = movmskps((int)piVar4,auVar14);
        fVar12 = (float)(int)(iVar8 - (uVar3 & 1));
      }
      if ((int)fVar12 < iVar6) {
        iVar5 = (int)fVar12;
      }
      if (param_2->Interpolation != Step) {
        fVar15 = fVar11 - fVar12;
      }
      if (iVar5 + 1 < iVar6) {
        iVar6 = iVar5 + 1;
      }
      if (iVar5 != iVar6) {
        lVar9 = (longlong)(iVar5 * 0xc);
        lVar7 = (longlong)(iVar6 * 0xc);
        fVar12 = (float)*(undefined8 *)(lVar9 + lVar10);
        fVar12 = ((float)*(undefined8 *)(lVar7 + lVar10) - fVar12) * fVar15 + fVar12;
        fStack_44 = (float)((ulonglong)*(undefined8 *)(lVar9 + lVar10) >> 0x20);
        fStack_44 = (*(float *)(lVar7 + 4 + lVar10) - fStack_44) * fVar15 + fStack_44;
        fVar11 = (*(float *)(lVar7 + 8 + lVar10) - *(float *)(lVar9 + 8 + lVar10)) * fVar15 +
                 *(float *)(lVar9 + 8 + lVar10);
        goto LAB_147450637;
      }
    }
  }
  uVar1 = *(undefined8 *)(iVar5 * 0xc + lVar10);
  fVar12 = (float)uVar1;
  fStack_44 = (float)((ulonglong)uVar1 >> 0x20);
  fVar11 = *(float *)((longlong)(iVar5 * 0xc) + 8 + lVar10);
LAB_147450637:
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar12;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fStack_44;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar11;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147451930

void __thiscall
AEFConstantKeyLerp<1>::GetBoneAtomTranslation
          (AEFConstantKeyLerp<1> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fStack_34;
  
  lVar5 = param_2->CompressedAnimData[1]._padding_;
  lVar8 = (longlong)*(int *)(lVar5 + (longlong)(param_3 * 4) * 4) +
          *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys;
  iVar4 = *(int *)(lVar5 + 4 + (longlong)(param_3 * 4) * 4);
  dVar11 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  fVar9 = (float)dVar11;
  if ((iVar4 < 2) || (fVar13 = 0.0, fVar9 <= 0.0)) {
    iVar3 = 0;
  }
  else {
    iVar4 = iVar4 + -1;
    iVar3 = iVar4;
    if (fVar9 < __real_3f800000) {
      fVar9 = (float)iVar4 * fVar9;
      iVar6 = (int)fVar9;
      fVar10 = fVar9;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar9)) {
        auVar12._4_4_ = fVar9;
        auVar12._0_4_ = fVar9;
        auVar12._8_8_ = 0;
        uVar2 = movmskps((int)lVar5,auVar12);
        fVar10 = (float)(int)(iVar6 - (uVar2 & 1));
      }
      if ((int)fVar10 < iVar4) {
        iVar3 = (int)fVar10;
      }
      if (param_2->Interpolation != Step) {
        fVar13 = fVar9 - fVar10;
      }
      if (iVar3 + 1 < iVar4) {
        iVar4 = iVar3 + 1;
      }
      if (iVar3 != iVar4) {
        lVar7 = (longlong)(iVar3 * 0xc);
        lVar5 = (longlong)(iVar4 * 0xc);
        fVar10 = (float)*(undefined8 *)(lVar7 + lVar8);
        fVar10 = ((float)*(undefined8 *)(lVar5 + lVar8) - fVar10) * fVar13 + fVar10;
        fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar7 + lVar8) >> 0x20);
        fStack_34 = (*(float *)(lVar5 + 4 + lVar8) - fStack_34) * fVar13 + fStack_34;
        fVar9 = (*(float *)(lVar5 + 8 + lVar8) - *(float *)(lVar7 + 8 + lVar8)) * fVar13 +
                *(float *)(lVar7 + 8 + lVar8);
        goto LAB_1474519bc;
      }
    }
  }
  uVar1 = *(undefined8 *)(iVar3 * 0xc + lVar8);
  fVar10 = (float)uVar1;
  fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
  fVar9 = *(float *)((longlong)(iVar3 * 0xc) + 8 + lVar8);
LAB_1474519bc:
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar10;
  (param_1->Translation).XY.m128d_f64[1] = (double)fStack_34;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar9;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147451ae0

void __thiscall
AEFConstantKeyLerp<2>::GetBoneAtomTranslation
          (AEFConstantKeyLerp<2> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  
  lVar4 = param_2->CompressedAnimData[1]._padding_;
  lVar7 = (longlong)*(int *)(lVar4 + (longlong)(param_3 * 4) * 4) +
          *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys;
  iVar3 = *(int *)(lVar4 + 4 + (longlong)(param_3 * 4) * 4);
  dVar11 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  fVar8 = (float)dVar11;
  if ((iVar3 < 2) || (fVar13 = 0.0, fVar8 <= 0.0)) {
    iVar2 = 0;
  }
  else {
    iVar3 = iVar3 + -1;
    iVar2 = iVar3;
    if (fVar8 < __real_3f800000) {
      fVar8 = (float)iVar3 * fVar8;
      iVar5 = (int)fVar8;
      fVar9 = fVar8;
      if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar8)) {
        auVar12._4_4_ = fVar8;
        auVar12._0_4_ = fVar8;
        auVar12._8_8_ = 0;
        uVar1 = movmskps((int)lVar4,auVar12);
        fVar9 = (float)(int)(iVar5 - (uVar1 & 1));
      }
      if ((int)fVar9 < iVar3) {
        iVar2 = (int)fVar9;
      }
      if (param_2->Interpolation != Step) {
        fVar13 = fVar8 - fVar9;
      }
      if (iVar2 + 1 < iVar3) {
        iVar3 = iVar2 + 1;
      }
      if (iVar2 != iVar3) {
        lVar4 = (longlong)(iVar2 * 0xc);
        lVar6 = (longlong)(iVar3 * 0xc);
        fVar9 = (float)(int)(*(ushort *)(lVar4 + lVar7) - 0x7fff) * __real_3b800100;
        fVar10 = (float)(int)(*(ushort *)(lVar4 + 2 + lVar7) - 0x7fff) * __real_3b800100;
        fVar8 = (float)(int)(*(ushort *)(lVar4 + 4 + lVar7) - 0x7fff) * __real_3b800100;
        fVar9 = ((float)(int)(*(ushort *)(lVar6 + lVar7) - 0x7fff) * __real_3b800100 - fVar9) *
                fVar13 + fVar9;
        fVar10 = ((float)(int)(*(ushort *)(lVar6 + 2 + lVar7) - 0x7fff) * __real_3b800100 - fVar10)
                 * fVar13 + fVar10;
        fVar8 = ((float)(int)(*(ushort *)(lVar6 + 4 + lVar7) - 0x7fff) * __real_3b800100 - fVar8) *
                fVar13 + fVar8;
        goto LAB_147451ba5;
      }
    }
  }
  lVar4 = (longlong)(iVar2 * 0xc);
  fVar9 = (float)(int)(*(ushort *)(lVar4 + lVar7) - 0x7fff) * __real_3b800100;
  fVar10 = (float)(int)(*(ushort *)(lVar4 + 2 + lVar7) - 0x7fff) * __real_3b800100;
  fVar8 = (float)(int)(*(ushort *)(lVar4 + 4 + lVar7) - 0x7fff) * __real_3b800100;
LAB_147451ba5:
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar9;
  (param_1->Translation).XY.m128d_f64[1] = (double)fVar10;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar8;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147451d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFConstantKeyLerp<3>::GetBoneAtomTranslation
          (AEFConstantKeyLerp<3> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  
  lVar1 = param_2->CompressedAnimData[1]._padding_;
  iVar5 = *(int *)(lVar1 + 4 + (longlong)(param_3 * 4) * 4);
  pfVar7 = (float *)(*(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys +
                    (longlong)*(int *)(lVar1 + (longlong)(param_3 * 4) * 4));
  dVar11 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  fVar8 = (float)dVar11;
  pfVar4 = pfVar7;
  if (1 < iVar5) {
    fVar13 = 0.0;
    if (0.0 < fVar8) {
      iVar5 = iVar5 + -1;
      iVar6 = iVar5;
      if (fVar8 < __real_3f800000) {
        fVar8 = (float)iVar5 * fVar8;
        iVar3 = (int)fVar8;
        fVar9 = fVar8;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar8)) {
          auVar12._4_4_ = fVar8;
          auVar12._0_4_ = fVar8;
          auVar12._8_8_ = 0;
          uVar2 = movmskps((int)lVar1,auVar12);
          fVar9 = (float)(int)(iVar3 - (uVar2 & 1));
        }
        if ((int)fVar9 < iVar5) {
          iVar6 = (int)fVar9;
        }
        if (param_2->Interpolation != Step) {
          fVar13 = fVar8 - fVar9;
        }
        if (iVar6 + 1 < iVar5) {
          iVar5 = iVar6 + 1;
        }
      }
    }
    else {
      iVar5 = 0;
      iVar6 = 0;
    }
    pfVar4 = (float *)((longlong)(iVar6 * 4) + 0x18 + (longlong)pfVar7);
    if (iVar6 != iVar5) {
      fVar8 = *pfVar4;
      uVar2 = *(uint *)((longlong)(iVar5 * 4) + 0x18 + (longlong)pfVar7);
      fVar9 = (float)(int)(((uint)fVar8 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar7[3] + *pfVar7;
      fVar10 = (float)(int)(((uint)fVar8 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar7[4] +
               pfVar7[1];
      fVar8 = (float)(int)(((uint)fVar8 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar7[5] + pfVar7[2];
      fVar9 = (((float)(int)((uVar2 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar7[3] + *pfVar7) -
              fVar9) * fVar13 + fVar9;
      fVar10 = (((float)(int)((uVar2 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar7[4] +
                pfVar7[1]) - fVar10) * fVar13 + fVar10;
      fVar8 = (((float)(int)((uVar2 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar7[5] + pfVar7[2]) -
              fVar8) * fVar13 + fVar8;
      goto LAB_147451e27;
    }
  }
  fVar8 = *pfVar4;
  fVar9 = (float)(int)(((uint)fVar8 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar7[3] + *pfVar7;
  fVar10 = (float)(int)(((uint)fVar8 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar7[4] +
           pfVar7[1];
  fVar8 = (float)(int)(((uint)fVar8 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar7[5] + pfVar7[2];
LAB_147451e27:
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar9;
  (param_1->Translation).XY.m128d_f64[1] = (double)fVar10;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar8;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFConstantKeyLerp<4>::GetBoneAtomTranslation
          (AEFConstantKeyLerp<4> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  iVar5 = *(int *)(param_2->CompressedAnimData[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  dVar9 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  fVar7 = (float)dVar9;
  if (((1 < iVar5) && (fVar11 = 0.0, 0.0 < fVar7)) && (iVar5 = iVar5 + -1, fVar7 < __real_3f800000))
  {
    fVar7 = (float)iVar5 * fVar7;
    iVar6 = (int)fVar7;
    fVar8 = fVar7;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar7)) {
      auVar10._4_4_ = fVar7;
      auVar10._0_4_ = fVar7;
      auVar10._8_8_ = 0;
      uVar4 = movmskps((int)param_2->CompressedAnimData,auVar10);
      fVar8 = (float)(int)(iVar6 - (uVar4 & 1));
    }
    iVar6 = iVar5;
    if ((int)fVar8 < iVar5) {
      iVar6 = (int)fVar8;
    }
    if (param_2->Interpolation != Step) {
      fVar11 = fVar7 - fVar8;
    }
    if (iVar6 + 1 < iVar5) {
      iVar5 = iVar6 + 1;
    }
    if (iVar6 != iVar5) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar1 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar1) * fVar11 +
              (float)uVar1;
      uVar2 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar2) * fVar11 +
              (float)uVar2;
      uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar3) * fVar11 +
              (float)uVar3;
      goto LAB_147452222;
    }
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)
             &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
              ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
LAB_147452222:
  (param_1->Translation).XY.m128d_f64[0] = (double)(float)uVar2;
  (param_1->Translation).XY.m128d_f64[1] = (double)(float)uVar3;
  (param_1->Translation).ZW.m128d_f64[0] = (double)(float)uVar1;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFConstantKeyLerp<5>::GetBoneAtomTranslation
          (AEFConstantKeyLerp<5> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  iVar5 = *(int *)(param_2->CompressedAnimData[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  dVar9 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  fVar7 = (float)dVar9;
  if (((1 < iVar5) && (fVar11 = 0.0, 0.0 < fVar7)) && (iVar5 = iVar5 + -1, fVar7 < __real_3f800000))
  {
    fVar7 = (float)iVar5 * fVar7;
    iVar6 = (int)fVar7;
    fVar8 = fVar7;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar7)) {
      auVar10._4_4_ = fVar7;
      auVar10._0_4_ = fVar7;
      auVar10._8_8_ = 0;
      uVar4 = movmskps((int)param_2->CompressedAnimData,auVar10);
      fVar8 = (float)(int)(iVar6 - (uVar4 & 1));
    }
    iVar6 = iVar5;
    if ((int)fVar8 < iVar5) {
      iVar6 = (int)fVar8;
    }
    if (param_2->Interpolation != Step) {
      fVar11 = fVar7 - fVar8;
    }
    if (iVar6 + 1 < iVar5) {
      iVar5 = iVar6 + 1;
    }
    if (iVar6 != iVar5) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      uVar1 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar1) * fVar11 +
              (float)uVar1;
      uVar2 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar2) * fVar11 +
              (float)uVar2;
      uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar3) * fVar11 +
              (float)uVar3;
      goto LAB_147452432;
    }
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)
             &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
              ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
LAB_147452432:
  (param_1->Translation).XY.m128d_f64[0] = (double)(float)uVar2;
  (param_1->Translation).XY.m128d_f64[1] = (double)(float)uVar3;
  (param_1->Translation).ZW.m128d_f64[0] = (double)(float)uVar1;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452460

void __thiscall
AEFConstantKeyLerp<6>::GetBoneAtomTranslation
          (AEFConstantKeyLerp<6> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_2->CompressedAnimData[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  dVar4 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  fVar5 = (float)dVar4;
  if (((1 < iVar1) && (0.0 < fVar5)) && (fVar5 < __real_3f800000)) {
    auVar3._0_4_ = (float)(iVar1 + -1) * fVar5;
    if (((int)auVar3._0_4_ != -0x80000000) && ((float)(int)auVar3._0_4_ != auVar3._0_4_)) {
      auVar3._4_4_ = auVar3._0_4_;
      auVar3._8_8_ = 0;
      movmskps((int)param_2->CompressedAnimData,auVar3);
    }
  }
  dVar2 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  dVar4 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (param_1->Translation).XY.m128d_f64[0] =
       (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  (param_1->Translation).XY.m128d_f64[1] = dVar2;
  (param_1->Translation).ZW.m128d_f64[0] = dVar4;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452590

void __thiscall
AEFConstantKeyLerp<0>::GetBoneAtomTranslation
          (AEFConstantKeyLerp<0> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fStack_34;
  
  lVar5 = param_2->CompressedAnimData[1]._padding_;
  lVar8 = (longlong)*(int *)(lVar5 + (longlong)(param_3 * 4) * 4) +
          *(longlong *)&param_2->CompressedAnimData[3].CompressedNumberOfKeys;
  iVar4 = *(int *)(lVar5 + 4 + (longlong)(param_3 * 4) * 4);
  dVar11 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  fVar9 = (float)dVar11;
  if ((iVar4 < 2) || (fVar13 = 0.0, fVar9 <= 0.0)) {
    iVar3 = 0;
  }
  else {
    iVar4 = iVar4 + -1;
    iVar3 = iVar4;
    if (fVar9 < __real_3f800000) {
      fVar9 = (float)iVar4 * fVar9;
      iVar6 = (int)fVar9;
      fVar10 = fVar9;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar9)) {
        auVar12._4_4_ = fVar9;
        auVar12._0_4_ = fVar9;
        auVar12._8_8_ = 0;
        uVar2 = movmskps((int)lVar5,auVar12);
        fVar10 = (float)(int)(iVar6 - (uVar2 & 1));
      }
      if ((int)fVar10 < iVar4) {
        iVar3 = (int)fVar10;
      }
      if (param_2->Interpolation != Step) {
        fVar13 = fVar9 - fVar10;
      }
      if (iVar3 + 1 < iVar4) {
        iVar4 = iVar3 + 1;
      }
      if (iVar3 != iVar4) {
        lVar7 = (longlong)(iVar3 * 0xc);
        lVar5 = (longlong)(iVar4 * 0xc);
        fVar10 = (float)*(undefined8 *)(lVar7 + lVar8);
        fVar10 = ((float)*(undefined8 *)(lVar5 + lVar8) - fVar10) * fVar13 + fVar10;
        fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar7 + lVar8) >> 0x20);
        fStack_34 = (*(float *)(lVar5 + 4 + lVar8) - fStack_34) * fVar13 + fStack_34;
        fVar9 = (*(float *)(lVar5 + 8 + lVar8) - *(float *)(lVar7 + 8 + lVar8)) * fVar13 +
                *(float *)(lVar7 + 8 + lVar8);
        goto LAB_14745261c;
      }
    }
  }
  uVar1 = *(undefined8 *)(iVar3 * 0xc + lVar8);
  fVar10 = (float)uVar1;
  fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
  fVar9 = *(float *)((longlong)(iVar3 * 0xc) + 8 + lVar8);
LAB_14745261c:
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar10;
  (param_1->Translation).XY.m128d_f64[1] = (double)fStack_34;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar9;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetPoseRotations @ 147459440

void __thiscall
AEFConstantKeyLerp<1>::GetPoseRotations
          (AEFConstantKeyLerp<1> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar10 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar10,param_3->Interpolation,1,
                 iVar1);
      return;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar9 * 8);
        iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar6,param_3,iVar2);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 147459680

void __thiscall
AEFConstantKeyLerp<2>::GetPoseRotations
          (AEFConstantKeyLerp<2> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar10 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar10,param_3->Interpolation,2,
                 iVar1);
      return;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar9 * 8);
        iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar6,param_3,iVar2);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 1474598c0

void __thiscall
AEFConstantKeyLerp<3>::GetPoseRotations
          (AEFConstantKeyLerp<3> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar10 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar10,param_3->Interpolation,3,
                 iVar1);
      return;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar9 * 8);
        iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar6,param_3,iVar2);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 147459b00

void __thiscall
AEFConstantKeyLerp<4>::GetPoseRotations
          (AEFConstantKeyLerp<4> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar10 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar10,param_3->Interpolation,4,
                 iVar1);
      return;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar9 * 8);
        iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar6,param_3,iVar2);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 147459d40

void __thiscall
AEFConstantKeyLerp<5>::GetPoseRotations
          (AEFConstantKeyLerp<5> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar10 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar10,param_3->Interpolation,5,
                 iVar1);
      return;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar9 * 8);
        iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar6,param_3,iVar2);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 147459f80

void __thiscall
AEFConstantKeyLerp<6>::GetPoseRotations
          (AEFConstantKeyLerp<6> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar10 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar10,param_3->Interpolation,6,
                 iVar1);
      return;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar9 * 8);
        iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar6,param_3,iVar2);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 14745a1c0

void __thiscall
AEFConstantKeyLerp<0>::GetPoseRotations
          (AEFConstantKeyLerp<0> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar10 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar10,param_3->Interpolation,0,
                 iVar1);
      return;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar9 * 8);
        iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar6,param_3,iVar2);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
  }
  return;
}

// GetPoseScales @ 14745b320

void __thiscall
AEFConstantKeyLerp<1>::GetPoseScales
          (AEFConstantKeyLerp<1> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  undefined8 uVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fStack_b4;
  
  iVar12 = param_2->ArrayNum;
  lVar16 = (longlong)iVar12;
  if (iVar12 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar22 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar22) {
        dVar22 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar22,param_3->Interpolation,1,
                 iVar12);
      return;
    }
    if ((iVar12 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = 1;
    if (iVar12 < 1) {
      iVar2 = iVar12;
    }
    uVar15 = 0;
    if (0 < iVar12) {
      lVar17 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar7 = __real_3f800000;
        dVar22 = __real_3ff0000000000000;
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar16);
      lVar17 = 0;
      uVar15 = 0;
      do {
        if (iVar2 + lVar17 < lVar16) {
          uVar9 = 0;
          if ((int)(uVar15 + iVar2) < param_2->ArrayNum) {
            uVar9 = ~(uVar15 + iVar2) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar9 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar9 = *(uint *)(pFVar4 + lVar17 * 8);
        iVar12 = *(int *)(pFVar4 + lVar17 * 8 + 4);
        uVar10 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = param_1->DataPtr;
        pIVar3 = param_3->CompressedAnimData;
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar3 + 2),iVar12 * (int)pIVar3[3]._padding_);
        iVar14 = *piVar11;
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar3 + 2),
                             iVar12 * (int)pIVar3[3]._padding_ + 1);
        puVar19 = (undefined8 *)(*(longlong *)&pIVar3[3].CompressedNumberOfKeys + (longlong)iVar14);
        dVar23 = ((double)(param_3->SamplingTime).FrameNumber.Value +
                 (double)(param_3->SamplingTime).SubFrame) / (double)param_3->NumberOfFrames;
        if (dVar22 <= dVar23) {
          dVar23 = dVar22;
        }
        fVar20 = (float)dVar23;
        puVar18 = puVar19;
        if (*piVar11 < 2) {
LAB_14745b705:
          fVar21 = (float)*puVar18;
          fStack_b4 = (float)((ulonglong)*puVar18 >> 0x20);
          fVar20 = *(float *)(puVar18 + 1);
        }
        else {
          if (0.0 < fVar20) {
            iVar12 = *piVar11 + -1;
            iVar14 = iVar12;
            if (fVar20 < fVar7) {
              fVar20 = (float)iVar12 * fVar20;
              iVar13 = (int)fVar20;
              fVar21 = fVar20;
              if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar20)) {
                auVar24._4_4_ = fVar20;
                auVar24._0_4_ = fVar20;
                auVar24._8_8_ = 0;
                uVar10 = movmskps((int)piVar11,auVar24);
                fVar21 = (float)(int)(iVar13 - (uVar10 & 1));
              }
              if ((int)fVar21 < iVar12) {
                iVar14 = (int)fVar21;
              }
              if (param_3->Interpolation == Step) {
                fVar20 = 0.0;
              }
              else {
                fVar20 = fVar20 - fVar21;
              }
              if (iVar14 + 1 < iVar12) {
                iVar12 = iVar14 + 1;
              }
            }
            else {
              fVar20 = 0.0;
            }
          }
          else {
            fVar20 = 0.0;
            iVar14 = 0;
            iVar12 = 0;
          }
          puVar18 = (undefined8 *)((longlong)(iVar14 * 0xc) + (longlong)puVar19);
          if (iVar14 == iVar12) goto LAB_14745b705;
          uVar1 = *(undefined8 *)((longlong)(iVar12 * 0xc) + (longlong)puVar19);
          fVar21 = (float)*puVar18;
          fVar21 = ((float)uVar1 - fVar21) * fVar20 + fVar21;
          fStack_b4 = (float)((ulonglong)*puVar18 >> 0x20);
          fStack_b4 = ((float)((ulonglong)uVar1 >> 0x20) - fStack_b4) * fVar20 + fStack_b4;
          fVar20 = (*(float *)((longlong)(iVar12 * 0xc) + 8 + (longlong)puVar19) -
                   *(float *)(puVar18 + 1)) * fVar20 + *(float *)(puVar18 + 1);
        }
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
        pTVar5[(int)uVar9].Scale3D.XY.m128d_f64[0] = (double)fVar21;
        pTVar5[(int)uVar9].Scale3D.XY.m128d_f64[1] = (double)fStack_b4;
        pTVar5[(int)uVar9].Scale3D.ZW.m128d_f64[0] = (double)fVar20;
        pTVar5[(int)uVar9].Scale3D.ZW.m128d_f64[1] = 0.0;
      } while (lVar17 < lVar16);
    }
  }
  return;
}

// GetPoseScales @ 14745b8f0

void __thiscall
AEFConstantKeyLerp<2>::GetPoseScales
          (AEFConstantKeyLerp<2> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  
  iVar1 = param_2->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar12 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar12,param_3->Interpolation,2,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
      lVar11 = 0;
      uVar9 = 0;
      do {
        if (lVar11 + iVar2 < lVar10) {
          uVar7 = 0;
          if ((int)(uVar9 + iVar2) < param_2->ArrayNum) {
            uVar7 = ~(uVar9 + iVar2) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar11 * 8);
        iVar1 = *(int *)(pFVar4 + lVar11 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar1);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
    }
  }
  return;
}

// GetPoseScales @ 14745bc70

void __thiscall
AEFConstantKeyLerp<3>::GetPoseScales
          (AEFConstantKeyLerp<3> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  
  iVar1 = param_2->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar12 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar12,param_3->Interpolation,3,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
      lVar11 = 0;
      uVar9 = 0;
      do {
        if (lVar11 + iVar2 < lVar10) {
          uVar7 = 0;
          if ((int)(uVar9 + iVar2) < param_2->ArrayNum) {
            uVar7 = ~(uVar9 + iVar2) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar11 * 8);
        iVar1 = *(int *)(pFVar4 + lVar11 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar1);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
    }
  }
  return;
}

// GetPoseScales @ 14745bff0

void __thiscall
AEFConstantKeyLerp<4>::GetPoseScales
          (AEFConstantKeyLerp<4> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  
  iVar1 = param_2->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar12 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar12,param_3->Interpolation,4,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
      lVar11 = 0;
      uVar9 = 0;
      do {
        if (lVar11 + iVar2 < lVar10) {
          uVar7 = 0;
          if ((int)(uVar9 + iVar2) < param_2->ArrayNum) {
            uVar7 = ~(uVar9 + iVar2) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar11 * 8);
        iVar1 = *(int *)(pFVar4 + lVar11 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar1);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
    }
  }
  return;
}

// GetPoseScales @ 14745c370

void __thiscall
AEFConstantKeyLerp<5>::GetPoseScales
          (AEFConstantKeyLerp<5> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  
  iVar1 = param_2->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar12 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar12,param_3->Interpolation,5,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
      lVar11 = 0;
      uVar9 = 0;
      do {
        if (lVar11 + iVar2 < lVar10) {
          uVar7 = 0;
          if ((int)(uVar9 + iVar2) < param_2->ArrayNum) {
            uVar7 = ~(uVar9 + iVar2) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar11 * 8);
        iVar1 = *(int *)(pFVar4 + lVar11 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar1);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar10);
    }
  }
  return;
}

// GetPoseScales @ 14745c6f0

void __thiscall
AEFConstantKeyLerp<6>::GetPoseScales
          (AEFConstantKeyLerp<6> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  
  iVar1 = param_2->ArrayNum;
  lVar13 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar18 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar18) {
        dVar18 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar18,param_3->Interpolation,6,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar12 = 0;
    if (0 < iVar1) {
      lVar14 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar7 = __real_3f800000;
        dVar18 = __real_3ff0000000000000;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar13);
      lVar14 = 0;
      uVar12 = 0;
      do {
        if (iVar2 + lVar14 < lVar13) {
          uVar9 = 0;
          if ((int)(uVar12 + iVar2) < param_2->ArrayNum) {
            uVar9 = ~(uVar12 + iVar2) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar9 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar9 = *(uint *)(pFVar4 + lVar14 * 8);
        iVar1 = *(int *)(pFVar4 + lVar14 * 8 + 4);
        uVar10 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = param_1->DataPtr;
        pIVar3 = param_3->CompressedAnimData;
        TArrayView<int,int>::operator[]
                  ((TArrayView<int,int> *)(pIVar3 + 2),iVar1 * (int)pIVar3[3]._padding_);
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar3 + 2),
                             iVar1 * (int)pIVar3[3]._padding_ + 1);
        dVar19 = ((double)(param_3->SamplingTime).FrameNumber.Value +
                 (double)(param_3->SamplingTime).SubFrame) / (double)param_3->NumberOfFrames;
        if (dVar18 <= dVar19) {
          dVar19 = dVar18;
        }
        fVar15 = (float)dVar19;
        if (((1 < *piVar11) && (0.0 < fVar15)) && (fVar15 < fVar7)) {
          auVar17._0_4_ = (float)(*piVar11 + -1) * fVar15;
          if (((int)auVar17._0_4_ != -0x80000000) && ((float)(int)auVar17._0_4_ != auVar17._0_4_)) {
            auVar17._4_4_ = auVar17._0_4_;
            auVar17._8_8_ = 0;
            movmskps((int)param_3,auVar17);
          }
        }
        dVar16 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        dVar19 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar12 = uVar12 + 1;
        pTVar5[(int)uVar9].Scale3D.XY.m128d_f64[0] =
             (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        pTVar5[(int)uVar9].Scale3D.XY.m128d_f64[1] = dVar16;
        lVar14 = lVar14 + 1;
        pTVar5[(int)uVar9].Scale3D.ZW.m128d_f64[0] = dVar19;
        pTVar5[(int)uVar9].Scale3D.ZW.m128d_f64[1] = 0.0;
      } while (lVar14 < lVar13);
    }
  }
  return;
}

// GetPoseScales @ 14745cc00

void __thiscall
AEFConstantKeyLerp<0>::GetPoseScales
          (AEFConstantKeyLerp<0> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  undefined8 uVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fStack_b4;
  
  iVar12 = param_2->ArrayNum;
  lVar16 = (longlong)iVar12;
  if (iVar12 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar22 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar22) {
        dVar22 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar22,param_3->Interpolation,0,
                 iVar12);
      return;
    }
    if ((iVar12 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = 1;
    if (iVar12 < 1) {
      iVar2 = iVar12;
    }
    uVar15 = 0;
    if (0 < iVar12) {
      lVar17 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar7 = __real_3f800000;
        dVar22 = __real_3ff0000000000000;
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar16);
      lVar17 = 0;
      uVar15 = 0;
      do {
        if (iVar2 + lVar17 < lVar16) {
          uVar9 = 0;
          if ((int)(uVar15 + iVar2) < param_2->ArrayNum) {
            uVar9 = ~(uVar15 + iVar2) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar9 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar9 = *(uint *)(pFVar4 + lVar17 * 8);
        iVar12 = *(int *)(pFVar4 + lVar17 * 8 + 4);
        uVar10 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = param_1->DataPtr;
        pIVar3 = param_3->CompressedAnimData;
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar3 + 2),iVar12 * (int)pIVar3[3]._padding_);
        iVar14 = *piVar11;
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar3 + 2),
                             iVar12 * (int)pIVar3[3]._padding_ + 1);
        puVar19 = (undefined8 *)(*(longlong *)&pIVar3[3].CompressedNumberOfKeys + (longlong)iVar14);
        dVar23 = ((double)(param_3->SamplingTime).FrameNumber.Value +
                 (double)(param_3->SamplingTime).SubFrame) / (double)param_3->NumberOfFrames;
        if (dVar22 <= dVar23) {
          dVar23 = dVar22;
        }
        fVar20 = (float)dVar23;
        puVar18 = puVar19;
        if (*piVar11 < 2) {
LAB_14745cfe5:
          fVar21 = (float)*puVar18;
          fStack_b4 = (float)((ulonglong)*puVar18 >> 0x20);
          fVar20 = *(float *)(puVar18 + 1);
        }
        else {
          if (0.0 < fVar20) {
            iVar12 = *piVar11 + -1;
            iVar14 = iVar12;
            if (fVar20 < fVar7) {
              fVar20 = (float)iVar12 * fVar20;
              iVar13 = (int)fVar20;
              fVar21 = fVar20;
              if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar20)) {
                auVar24._4_4_ = fVar20;
                auVar24._0_4_ = fVar20;
                auVar24._8_8_ = 0;
                uVar10 = movmskps((int)piVar11,auVar24);
                fVar21 = (float)(int)(iVar13 - (uVar10 & 1));
              }
              if ((int)fVar21 < iVar12) {
                iVar14 = (int)fVar21;
              }
              if (param_3->Interpolation == Step) {
                fVar20 = 0.0;
              }
              else {
                fVar20 = fVar20 - fVar21;
              }
              if (iVar14 + 1 < iVar12) {
                iVar12 = iVar14 + 1;
              }
            }
            else {
              fVar20 = 0.0;
            }
          }
          else {
            fVar20 = 0.0;
            iVar14 = 0;
            iVar12 = 0;
          }
          puVar18 = (undefined8 *)((longlong)(iVar14 * 0xc) + (longlong)puVar19);
          if (iVar14 == iVar12) goto LAB_14745cfe5;
          uVar1 = *(undefined8 *)((longlong)(iVar12 * 0xc) + (longlong)puVar19);
          fVar21 = (float)*puVar18;
          fVar21 = ((float)uVar1 - fVar21) * fVar20 + fVar21;
          fStack_b4 = (float)((ulonglong)*puVar18 >> 0x20);
          fStack_b4 = ((float)((ulonglong)uVar1 >> 0x20) - fStack_b4) * fVar20 + fStack_b4;
          fVar20 = (*(float *)((longlong)(iVar12 * 0xc) + 8 + (longlong)puVar19) -
                   *(float *)(puVar18 + 1)) * fVar20 + *(float *)(puVar18 + 1);
        }
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
        pTVar5[(int)uVar9].Scale3D.XY.m128d_f64[0] = (double)fVar21;
        pTVar5[(int)uVar9].Scale3D.XY.m128d_f64[1] = (double)fStack_b4;
        pTVar5[(int)uVar9].Scale3D.ZW.m128d_f64[0] = (double)fVar20;
        pTVar5[(int)uVar9].Scale3D.ZW.m128d_f64[1] = 0.0;
      } while (lVar17 < lVar16);
    }
  }
  return;
}

// GetPoseTranslations @ 14745e750

void __thiscall
AEFConstantKeyLerp<1>::GetPoseTranslations
          (AEFConstantKeyLerp<1> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fStack_a4;
  
  iVar12 = param_2->ArrayNum;
  lVar17 = (longlong)iVar12;
  if (iVar12 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar3 = (param_3->SamplingRate).Denominator;
      dVar23 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar23) {
        dVar23 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar3 * (longlong)param_3->NumberOfFrames) + (float)iVar3 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar23,param_3->Interpolation,1,
                 iVar12);
      return;
    }
    if ((iVar12 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = 1;
    if (iVar12 < 1) {
      iVar3 = iVar12;
    }
    uVar16 = 0;
    if (0 < iVar12) {
      lVar18 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar8 = __real_3f800000;
        dVar23 = __real_3ff0000000000000;
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar17);
      lVar18 = 0;
      uVar16 = 0;
      do {
        if (iVar3 + lVar18 < lVar17) {
          uVar10 = 0;
          if ((int)(uVar16 + iVar3) < param_2->ArrayNum) {
            uVar10 = ~(uVar16 + iVar3) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar10 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar10 = *(uint *)(pFVar4 + lVar18 * 8);
        iVar12 = *(int *)(pFVar4 + lVar18 * 8 + 4);
        uVar11 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar5 = param_1->DataPtr;
        lVar13 = (longlong)(iVar12 * 4);
        lVar6 = param_3->CompressedAnimData[1]._padding_;
        iVar12 = *(int *)(lVar6 + 4 + lVar13 * 4);
        puVar20 = (undefined8 *)
                  (*(longlong *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys +
                  (longlong)*(int *)(lVar6 + lVar13 * 4));
        dVar24 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar23 <= dVar24) {
          dVar24 = dVar23;
        }
        fVar21 = (float)dVar24;
        puVar19 = puVar20;
        if (iVar12 < 2) {
LAB_14745eadf:
          fVar22 = (float)*puVar19;
          fStack_a4 = (float)((ulonglong)*puVar19 >> 0x20);
          fVar21 = *(float *)(puVar19 + 1);
        }
        else {
          if (0.0 < fVar21) {
            iVar12 = iVar12 + -1;
            iVar15 = iVar12;
            if (fVar21 < fVar8) {
              fVar21 = (float)iVar12 * fVar21;
              iVar14 = (int)fVar21;
              fVar22 = fVar21;
              if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar21)) {
                auVar25._4_4_ = fVar21;
                auVar25._0_4_ = fVar21;
                auVar25._8_8_ = 0;
                uVar11 = movmskps((int)lVar6,auVar25);
                fVar22 = (float)(int)(iVar14 - (uVar11 & 1));
              }
              if ((int)fVar22 < iVar12) {
                iVar15 = (int)fVar22;
              }
              if (param_3->Interpolation == Step) {
                fVar21 = 0.0;
              }
              else {
                fVar21 = fVar21 - fVar22;
              }
              if (iVar15 + 1 < iVar12) {
                iVar12 = iVar15 + 1;
              }
            }
            else {
              fVar21 = 0.0;
            }
          }
          else {
            fVar21 = 0.0;
            iVar15 = 0;
            iVar12 = 0;
          }
          puVar19 = (undefined8 *)((longlong)(iVar15 * 0xc) + (longlong)puVar20);
          if (iVar15 == iVar12) goto LAB_14745eadf;
          uVar2 = *(undefined8 *)((longlong)(iVar12 * 0xc) + (longlong)puVar20);
          fVar22 = (float)*puVar19;
          fVar22 = ((float)uVar2 - fVar22) * fVar21 + fVar22;
          fStack_a4 = (float)((ulonglong)*puVar19 >> 0x20);
          fStack_a4 = ((float)((ulonglong)uVar2 >> 0x20) - fStack_a4) * fVar21 + fStack_a4;
          fVar21 = (*(float *)((longlong)(iVar12 * 0xc) + 8 + (longlong)puVar20) -
                   *(float *)(puVar19 + 1)) * fVar21 + *(float *)(puVar19 + 1);
        }
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 1;
        pVVar1 = &pTVar5[(int)uVar10].Translation;
        (pVVar1->XY).m128d_f64[0] = (double)fVar22;
        (pVVar1->XY).m128d_f64[1] = (double)fStack_a4;
        pVVar1 = &pTVar5[(int)uVar10].Translation;
        (pVVar1->ZW).m128d_f64[0] = (double)fVar21;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar18 < lVar17);
    }
  }
  return;
}

// GetPoseTranslations @ 14745ecd0

void __thiscall
AEFConstantKeyLerp<2>::GetPoseTranslations
          (AEFConstantKeyLerp<2> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar11,param_3->Interpolation,2,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
      lVar10 = 0;
      uVar8 = 0;
      do {
        if (lVar10 + iVar2 < lVar9) {
          uVar6 = 0;
          if ((int)(uVar8 + iVar2) < param_2->ArrayNum) {
            uVar6 = ~(uVar8 + iVar2) >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar10 * 8);
        iVar1 = *(int *)(pFVar3 + lVar10 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomTranslation(this,param_1->DataPtr + (int)uVar6,param_3,iVar1);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
  }
  return;
}

// GetPoseTranslations @ 14745f040

void __thiscall
AEFConstantKeyLerp<3>::GetPoseTranslations
          (AEFConstantKeyLerp<3> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar11,param_3->Interpolation,3,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
      lVar10 = 0;
      uVar8 = 0;
      do {
        if (lVar10 + iVar2 < lVar9) {
          uVar6 = 0;
          if ((int)(uVar8 + iVar2) < param_2->ArrayNum) {
            uVar6 = ~(uVar8 + iVar2) >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar10 * 8);
        iVar1 = *(int *)(pFVar3 + lVar10 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomTranslation(this,param_1->DataPtr + (int)uVar6,param_3,iVar1);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
  }
  return;
}

// GetPoseTranslations @ 14745f3b0

void __thiscall
AEFConstantKeyLerp<4>::GetPoseTranslations
          (AEFConstantKeyLerp<4> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar11,param_3->Interpolation,4,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
      lVar10 = 0;
      uVar8 = 0;
      do {
        if (lVar10 + iVar2 < lVar9) {
          uVar6 = 0;
          if ((int)(uVar8 + iVar2) < param_2->ArrayNum) {
            uVar6 = ~(uVar8 + iVar2) >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar10 * 8);
        iVar1 = *(int *)(pFVar3 + lVar10 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomTranslation(this,param_1->DataPtr + (int)uVar6,param_3,iVar1);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
  }
  return;
}

// GetPoseTranslations @ 14745f720

void __thiscall
AEFConstantKeyLerp<5>::GetPoseTranslations
          (AEFConstantKeyLerp<5> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar11,param_3->Interpolation,5,
                 iVar1);
      return;
    }
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    uVar8 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
      lVar10 = 0;
      uVar8 = 0;
      do {
        if (lVar10 + iVar2 < lVar9) {
          uVar6 = 0;
          if ((int)(uVar8 + iVar2) < param_2->ArrayNum) {
            uVar6 = ~(uVar8 + iVar2) >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar6 = *(uint *)(pFVar3 + lVar10 * 8);
        iVar1 = *(int *)(pFVar3 + lVar10 * 8 + 4);
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        GetBoneAtomTranslation(this,param_1->DataPtr + (int)uVar6,param_3,iVar1);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
  }
  return;
}

// GetPoseTranslations @ 14745fa90

void __thiscall
AEFConstantKeyLerp<6>::GetPoseTranslations
          (AEFConstantKeyLerp<6> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  
  iVar2 = param_2->ArrayNum;
  lVar12 = (longlong)iVar2;
  if (iVar2 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar3 = (param_3->SamplingRate).Denominator;
      dVar17 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar3 * (longlong)param_3->NumberOfFrames) + (float)iVar3 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar17,param_3->Interpolation,6,
                 iVar2);
      return;
    }
    if ((iVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    uVar11 = 0;
    if (0 < iVar2) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar7 = __real_3f800000;
        dVar17 = __real_3ff0000000000000;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < lVar12);
      lVar13 = 0;
      uVar11 = 0;
      do {
        if (iVar3 + lVar13 < lVar12) {
          uVar9 = 0;
          if ((int)(uVar11 + iVar3) < param_2->ArrayNum) {
            uVar9 = ~(uVar11 + iVar3) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar9 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar9 = *(uint *)(pFVar4 + lVar13 * 8);
        iVar2 = *(int *)(pFVar4 + lVar13 * 8 + 4);
        uVar10 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = param_1->DataPtr;
        iVar2 = *(int *)(param_3->CompressedAnimData[1]._padding_ + 4 + (longlong)(iVar2 * 4) * 4);
        dVar18 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar17 <= dVar18) {
          dVar18 = dVar17;
        }
        fVar14 = (float)dVar18;
        if (((1 < iVar2) && (0.0 < fVar14)) && (fVar14 < fVar7)) {
          auVar16._0_4_ = (float)(iVar2 + -1) * fVar14;
          if (((int)auVar16._0_4_ != -0x80000000) && ((float)(int)auVar16._0_4_ != auVar16._0_4_)) {
            auVar16._4_4_ = auVar16._0_4_;
            auVar16._8_8_ = 0;
            movmskps((int)param_3->CompressedAnimData,auVar16);
          }
        }
        dVar15 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        dVar18 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
        pVVar1 = &pTVar5[(int)uVar9].Translation;
        (pVVar1->XY).m128d_f64[0] = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        (pVVar1->XY).m128d_f64[1] = dVar15;
        pVVar1 = &pTVar5[(int)uVar9].Translation;
        (pVVar1->ZW).m128d_f64[0] = dVar18;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar13 < lVar12);
    }
  }
  return;
}

// GetPoseTranslations @ 14745ff80

void __thiscall
AEFConstantKeyLerp<0>::GetPoseTranslations
          (AEFConstantKeyLerp<0> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fStack_ac;
  
  iVar12 = param_2->ArrayNum;
  lVar17 = (longlong)iVar12;
  if (iVar12 != 0) {
    if (bAnim_ConstantKeyLerp_ISPC_Enabled) {
      iVar3 = (param_3->SamplingRate).Denominator;
      dVar23 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar23) {
        dVar23 = __real_3ff0000000000000;
      }
      GetConstantKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,
                 param_3->CompressedAnimData[1]._padding_,
                 *(undefined8 *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys,
                 ((float)((longlong)iVar3 * (longlong)param_3->NumberOfFrames) + (float)iVar3 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar23,param_3->Interpolation,0,
                 iVar12);
      return;
    }
    if ((iVar12 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = 1;
    if (iVar12 < 1) {
      iVar3 = iVar12;
    }
    uVar16 = 0;
    if (0 < iVar12) {
      lVar18 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar8 = __real_3f800000;
        dVar23 = __real_3ff0000000000000;
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar17);
      lVar18 = 0;
      uVar16 = 0;
      do {
        if (iVar3 + lVar18 < lVar17) {
          uVar10 = 0;
          if ((int)(uVar16 + iVar3) < param_2->ArrayNum) {
            uVar10 = ~(uVar16 + iVar3) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar10 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar10 = *(uint *)(pFVar4 + lVar18 * 8);
        iVar12 = *(int *)(pFVar4 + lVar18 * 8 + 4);
        uVar11 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar5 = param_1->DataPtr;
        lVar13 = (longlong)(iVar12 * 4);
        lVar6 = param_3->CompressedAnimData[1]._padding_;
        iVar12 = *(int *)(lVar6 + 4 + lVar13 * 4);
        puVar20 = (undefined8 *)
                  (*(longlong *)&param_3->CompressedAnimData[3].CompressedNumberOfKeys +
                  (longlong)*(int *)(lVar6 + lVar13 * 4));
        dVar24 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar23 <= dVar24) {
          dVar24 = dVar23;
        }
        fVar21 = (float)dVar24;
        puVar19 = puVar20;
        if (iVar12 < 2) {
LAB_14746031b:
          fVar22 = (float)*puVar19;
          fStack_ac = (float)((ulonglong)*puVar19 >> 0x20);
          fVar21 = *(float *)(puVar19 + 1);
        }
        else {
          if (0.0 < fVar21) {
            iVar12 = iVar12 + -1;
            iVar15 = iVar12;
            if (fVar21 < fVar8) {
              fVar21 = (float)iVar12 * fVar21;
              iVar14 = (int)fVar21;
              fVar22 = fVar21;
              if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar21)) {
                auVar25._4_4_ = fVar21;
                auVar25._0_4_ = fVar21;
                auVar25._8_8_ = 0;
                uVar11 = movmskps((int)lVar6,auVar25);
                fVar22 = (float)(int)(iVar14 - (uVar11 & 1));
              }
              if ((int)fVar22 < iVar12) {
                iVar15 = (int)fVar22;
              }
              if (param_3->Interpolation == Step) {
                fVar21 = 0.0;
              }
              else {
                fVar21 = fVar21 - fVar22;
              }
              if (iVar15 + 1 < iVar12) {
                iVar12 = iVar15 + 1;
              }
            }
            else {
              fVar21 = 0.0;
            }
          }
          else {
            fVar21 = 0.0;
            iVar15 = 0;
            iVar12 = 0;
          }
          puVar19 = (undefined8 *)((longlong)(iVar15 * 0xc) + (longlong)puVar20);
          if (iVar15 == iVar12) goto LAB_14746031b;
          uVar2 = *(undefined8 *)((longlong)(iVar12 * 0xc) + (longlong)puVar20);
          fVar22 = (float)*puVar19;
          fVar22 = ((float)uVar2 - fVar22) * fVar21 + fVar22;
          fStack_ac = (float)((ulonglong)*puVar19 >> 0x20);
          fStack_ac = ((float)((ulonglong)uVar2 >> 0x20) - fStack_ac) * fVar21 + fStack_ac;
          fVar21 = (*(float *)((longlong)(iVar12 * 0xc) + 8 + (longlong)puVar20) -
                   *(float *)(puVar19 + 1)) * fVar21 + *(float *)(puVar19 + 1);
        }
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 1;
        pVVar1 = &pTVar5[(int)uVar10].Translation;
        (pVVar1->XY).m128d_f64[0] = (double)fVar22;
        (pVVar1->XY).m128d_f64[1] = (double)fStack_ac;
        pVVar1 = &pTVar5[(int)uVar10].Translation;
        (pVVar1->ZW).m128d_f64[0] = (double)fVar21;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar18 < lVar17);
    }
  }
  return;
}

