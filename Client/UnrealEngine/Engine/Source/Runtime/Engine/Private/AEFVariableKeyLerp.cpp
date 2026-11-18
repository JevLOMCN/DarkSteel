// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 49

// AEFVariableKeyLerp<1> @ 147430d60

AEFVariableKeyLerp<1> * __thiscall
AEFVariableKeyLerp<1>::AEFVariableKeyLerp<1>(AEFVariableKeyLerp<1> *this)

{
  *this = (AEFVariableKeyLerp<1>)&___7__AEFVariableKeyLerp__00__6B_;
  return this;
}

// AEFVariableKeyLerp<2> @ 147430d80

AEFVariableKeyLerp<2> * __thiscall
AEFVariableKeyLerp<2>::AEFVariableKeyLerp<2>(AEFVariableKeyLerp<2> *this)

{
  *this = (AEFVariableKeyLerp<2>)&___7__AEFVariableKeyLerp__01__6B_;
  return this;
}

// AEFVariableKeyLerp<3> @ 147430da0

AEFVariableKeyLerp<3> * __thiscall
AEFVariableKeyLerp<3>::AEFVariableKeyLerp<3>(AEFVariableKeyLerp<3> *this)

{
  *this = (AEFVariableKeyLerp<3>)&___7__AEFVariableKeyLerp__02__6B_;
  return this;
}

// AEFVariableKeyLerp<4> @ 147430dc0

AEFVariableKeyLerp<4> * __thiscall
AEFVariableKeyLerp<4>::AEFVariableKeyLerp<4>(AEFVariableKeyLerp<4> *this)

{
  *this = (AEFVariableKeyLerp<4>)&___7__AEFVariableKeyLerp__03__6B_;
  return this;
}

// AEFVariableKeyLerp<5> @ 147430de0

AEFVariableKeyLerp<5> * __thiscall
AEFVariableKeyLerp<5>::AEFVariableKeyLerp<5>(AEFVariableKeyLerp<5> *this)

{
  *this = (AEFVariableKeyLerp<5>)&___7__AEFVariableKeyLerp__04__6B_;
  return this;
}

// AEFVariableKeyLerp<6> @ 147430e00

AEFVariableKeyLerp<6> * __thiscall
AEFVariableKeyLerp<6>::AEFVariableKeyLerp<6>(AEFVariableKeyLerp<6> *this)

{
  *this = (AEFVariableKeyLerp<6>)&___7__AEFVariableKeyLerp__05__6B_;
  return this;
}

// AEFVariableKeyLerp<0> @ 147430e20

AEFVariableKeyLerp<0> * __thiscall
AEFVariableKeyLerp<0>::AEFVariableKeyLerp<0>(AEFVariableKeyLerp<0> *this)

{
  *this = (AEFVariableKeyLerp<0>)&___7__AEFVariableKeyLerp__0A___6B_;
  return this;
}

// GetBoneAtomRotation @ 14744dd80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<1>::GetBoneAtomRotation
          (AEFVariableKeyLerp<1> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  pfVar9 = (float *)((longlong)*(int *)(pIVar2[1]._padding_ + 8 + (longlong)(param_3 * 4) * 4) +
                    *(longlong *)&pIVar2[3].CompressedNumberOfKeys);
  iVar1 = *(int *)(pIVar2[1]._padding_ + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar1 != 1) {
    dVar12 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar12) {
      dVar12 = __real_3ff0000000000000;
    }
    fVar10 = AnimEncoding::TimeToIndex
                       (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                        (uchar *)((longlong)(iVar1 * 0xc) + 3 + (longlong)pfVar9 &
                                 0xfffffffffffffffc),(float)dVar12,iVar1,local_res20,local_res18);
    if (local_res20[0] == local_res18[0]) {
      lVar8 = (longlong)(local_res20[0] * 0xc);
      fVar10 = *(float *)(lVar8 + (longlong)pfVar9);
      fVar16 = *(float *)(lVar8 + 4 + (longlong)pfVar9);
      fVar17 = *(float *)(lVar8 + 8 + (longlong)pfVar9);
      fVar18 = ((__real_3f800000 - fVar10 * fVar10) - fVar16 * fVar16) - fVar17 * fVar17;
      fVar15 = 0.0;
      if (0.0 < fVar18) {
        fVar15 = SQRT(fVar18);
      }
      auVar6._8_4_ = SUB84((double)fVar16,0);
      auVar6._0_8_ = (double)fVar10;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar6;
      (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar17;
      (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar15;
    }
    else {
      fVar23 = 0.0;
      lVar8 = (longlong)(local_res20[0] * 0xc);
      fVar16 = *(float *)(lVar8 + (longlong)pfVar9);
      fVar17 = *(float *)(lVar8 + 4 + (longlong)pfVar9);
      fVar15 = *(float *)(lVar8 + 8 + (longlong)pfVar9);
      lVar8 = (longlong)(local_res18[0] * 0xc);
      fVar18 = ((__real_3f800000 - fVar16 * fVar16) - fVar17 * fVar17) - fVar15 * fVar15;
      if (0.0 < fVar18) {
        fVar23 = SQRT(fVar18);
      }
      fVar18 = *(float *)(lVar8 + (longlong)pfVar9);
      fVar19 = *(float *)(lVar8 + 4 + (longlong)pfVar9);
      fVar20 = *(float *)(lVar8 + 8 + (longlong)pfVar9);
      fVar21 = ((__real_3f800000 - fVar18 * fVar18) - fVar19 * fVar19) - fVar20 * fVar20;
      fVar11 = 0.0;
      if (0.0 < fVar21) {
        fVar11 = SQRT(fVar21);
      }
      fVar21 = __real_bf800000;
      if (0.0 <= fVar11 * fVar23 + fVar20 * fVar15 + fVar18 * fVar16 + fVar19 * fVar17) {
        fVar21 = __real_3f800000;
      }
      fVar21 = (__real_3f800000 - fVar10) * fVar21;
      fVar18 = fVar21 * fVar16 + fVar10 * fVar18;
      fVar19 = fVar21 * fVar17 + fVar10 * fVar19;
      fVar20 = fVar21 * fVar15 + fVar10 * fVar20;
      fVar23 = fVar21 * fVar23 + fVar10 * fVar11;
      fVar10 = fVar19 * fVar19 + fVar18 * fVar18;
      fVar16 = fVar18 * fVar18 + fVar19 * fVar19;
      fVar17 = fVar23 * fVar23 + fVar20 * fVar20;
      fVar15 = fVar20 * fVar20 + fVar23 * fVar23;
      auVar13._0_4_ = fVar17 + fVar10;
      auVar13._4_4_ = fVar15 + fVar16;
      auVar13._8_4_ = fVar10 + fVar17;
      auVar13._12_4_ = fVar16 + fVar15;
      bVar4 = _UNK_1506895d8 <= auVar13._8_4_;
      auVar14 = sqrtps(auVar13,auVar13);
      auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[2];
      dVar22 = (double)(float)((uint)(auVar14._4_4_ * fVar19) &
                               -(uint)(_UNK_1506895d4 <= auVar13._4_4_) |
                              ~-(uint)(_UNK_1506895d4 <= auVar13._4_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[1]);
      dVar12 = (double)(float)((uint)(auVar14._12_4_ * fVar23) &
                               -(uint)(_UNK_1506895dc <= auVar13._12_4_) |
                              ~-(uint)(_UNK_1506895dc <= auVar13._12_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[3]);
      auVar7._8_4_ = SUB84(dVar22,0);
      auVar7._0_8_ = (double)(float)((uint)(auVar14._0_4_ * fVar18) &
                                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar13._0_4_) |
                                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar13._0_4_) &
                                    GlobalVectorConstants::Float0001.m128_u32[0]);
      auVar7._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar7;
      auVar5._8_4_ = SUB84(dVar12,0);
      auVar5._0_8_ = (double)(float)((uint)(auVar14._8_4_ * fVar20) & -(uint)bVar4 |
                                    ~-(uint)bVar4 & uVar3);
      auVar5._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar5;
    }
    return;
  }
  fVar10 = *pfVar9;
  fVar16 = pfVar9[1];
  fVar17 = pfVar9[2];
  fVar18 = ((__real_3f800000 - fVar10 * fVar10) - fVar16 * fVar16) - fVar17 * fVar17;
  fVar15 = 0.0;
  if (0.0 < fVar18) {
    fVar15 = SQRT(fVar18);
  }
  auVar14._8_4_ = SUB84((double)fVar16,0);
  auVar14._0_8_ = (double)fVar10;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar14;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar17;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar15;
  return;
}

// GetBoneAtomRotation @ 14744e160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<2>::GetBoneAtomRotation
          (AEFVariableKeyLerp<2> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float *pfVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  int local_res18 [2];
  int local_res20 [2];
  TQuat<float> local_38;
  TQuat<float> local_28 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  pfVar8 = (float *)((longlong)*(int *)(pIVar2[1]._padding_ + 8 + (longlong)(param_3 * 4) * 4) +
                    *(longlong *)&pIVar2[3].CompressedNumberOfKeys);
  iVar1 = *(int *)(pIVar2[1]._padding_ + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar1 != 1) {
    dVar10 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000;
    }
    fVar9 = AnimEncoding::TimeToIndex
                      (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                       (uchar *)((longlong)(iVar1 * 6) + 3 + (longlong)pfVar8 & 0xfffffffffffffffc),
                       (float)dVar10,iVar1,local_res20,local_res18);
    if (local_res20[0] == local_res18[0]) {
      FQuatFixed48NoW::ToQuat
                ((FQuatFixed48NoW *)((longlong)(local_res20[0] * 6) + (longlong)pfVar8),local_28);
      auVar6._8_4_ = SUB84((double)local_28[0].Y,0);
      auVar6._0_8_ = (double)local_28[0].X;
      auVar6._12_4_ = (int)((ulonglong)(double)local_28[0].Y >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar6;
      (param_1->Rotation).ZW.m128d_f64[0] = (double)local_28[0].Z;
      (param_1->Rotation).ZW.m128d_f64[1] = (double)local_28[0].W;
    }
    else {
      FQuatFixed48NoW::ToQuat
                ((FQuatFixed48NoW *)((longlong)(local_res20[0] * 6) + (longlong)pfVar8),&local_38);
      FQuatFixed48NoW::ToQuat
                ((FQuatFixed48NoW *)((longlong)(local_res18[0] * 6) + (longlong)pfVar8),local_28);
      fVar14 = __real_bf800000;
      if (0.0 <= local_28[0].W * local_38.W + local_28[0].Z * local_38.Z +
                 local_28[0].Y * local_38.Y + local_28[0].X * local_38.X) {
        fVar14 = __real_3f800000;
      }
      fVar14 = (__real_3f800000 - fVar9) * fVar14;
      fVar16 = fVar14 * local_38.X + fVar9 * local_28[0].X;
      fVar17 = fVar14 * local_38.Y + fVar9 * local_28[0].Y;
      fVar18 = fVar14 * local_38.Z + fVar9 * local_28[0].Z;
      fVar19 = fVar14 * local_38.W + fVar9 * local_28[0].W;
      fVar9 = fVar17 * fVar17 + fVar16 * fVar16;
      fVar14 = fVar16 * fVar16 + fVar17 * fVar17;
      fVar15 = fVar19 * fVar19 + fVar18 * fVar18;
      fVar13 = fVar18 * fVar18 + fVar19 * fVar19;
      auVar11._0_4_ = fVar15 + fVar9;
      auVar11._4_4_ = fVar13 + fVar14;
      auVar11._8_4_ = fVar9 + fVar15;
      auVar11._12_4_ = fVar14 + fVar13;
      bVar4 = _UNK_1506895d8 <= auVar11._8_4_;
      auVar12 = sqrtps(auVar11,auVar11);
      auVar12 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[2];
      dVar20 = (double)(float)((uint)(auVar12._4_4_ * fVar17) &
                               -(uint)(_UNK_1506895d4 <= auVar11._4_4_) |
                              ~-(uint)(_UNK_1506895d4 <= auVar11._4_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[1]);
      dVar10 = (double)(float)((uint)(auVar12._12_4_ * fVar19) &
                               -(uint)(_UNK_1506895dc <= auVar11._12_4_) |
                              ~-(uint)(_UNK_1506895dc <= auVar11._12_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[3]);
      auVar7._8_4_ = SUB84(dVar20,0);
      auVar7._0_8_ = (double)(float)((uint)(auVar12._0_4_ * fVar16) &
                                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar11._0_4_) |
                                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar11._0_4_) &
                                    GlobalVectorConstants::Float0001.m128_u32[0]);
      auVar7._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar7;
      auVar5._8_4_ = SUB84(dVar10,0);
      auVar5._0_8_ = (double)(float)((uint)(auVar12._8_4_ * fVar18) & -(uint)bVar4 |
                                    ~-(uint)bVar4 & uVar3);
      auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar5;
    }
    return;
  }
  fVar9 = *pfVar8;
  fVar14 = pfVar8[1];
  fVar15 = pfVar8[2];
  fVar16 = ((__real_3f800000 - fVar9 * fVar9) - fVar14 * fVar14) - fVar15 * fVar15;
  fVar13 = 0.0;
  if (0.0 < fVar16) {
    fVar13 = SQRT(fVar16);
  }
  auVar12._8_4_ = SUB84((double)fVar14,0);
  auVar12._0_8_ = (double)fVar9;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar12;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar15;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar13;
  return;
}

// GetBoneAtomRotation @ 14744e430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<3>::GetBoneAtomRotation
          (AEFVariableKeyLerp<3> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  TQuat<float> *pTVar8;
  float *pfVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  int local_res18 [2];
  int local_res20 [2];
  TQuat<float> local_48 [3];
  
  pIVar2 = param_2->CompressedAnimData;
  pfVar9 = (float *)((longlong)*(int *)(pIVar2[1]._padding_ + 8 + (longlong)(param_3 * 4) * 4) +
                    *(longlong *)&pIVar2[3].CompressedNumberOfKeys);
  iVar1 = *(int *)(pIVar2[1]._padding_ + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar1 != 1) {
    dVar11 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000;
    }
    fVar10 = AnimEncoding::TimeToIndex
                       (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                        (uchar *)((longlong)(iVar1 * 4) + 0x1b + (longlong)pfVar9 &
                                 0xfffffffffffffffc),(float)dVar11,iVar1,local_res20,local_res18);
    if (local_res20[0] == local_res18[0]) {
      pTVar8 = FQuatIntervalFixed32NoW::ToQuat<1>
                         (local_48,pfVar9,pfVar9 + 3,
                          (uint *)((longlong)(local_res20[0] * 4) + 0x18 + (longlong)pfVar9));
      fVar10 = pTVar8->Y;
      fVar15 = pTVar8->Z;
      fVar16 = pTVar8->W;
      (param_1->Rotation).XY.m128d_f64[0] = (double)pTVar8->X;
      (param_1->Rotation).XY.m128d_f64[1] = (double)fVar10;
      auVar6._8_4_ = SUB84((double)fVar16,0);
      auVar6._0_8_ = (double)fVar15;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar6;
    }
    else {
      pTVar8 = FQuatIntervalFixed32NoW::ToQuat<1>
                         (local_48,pfVar9,pfVar9 + 3,
                          (uint *)((longlong)(local_res20[0] * 4) + 0x18 + (longlong)pfVar9));
      fVar16 = pTVar8->X;
      fVar14 = pTVar8->Y;
      fVar17 = pTVar8->Z;
      fVar20 = pTVar8->W;
      pTVar8 = FQuatIntervalFixed32NoW::ToQuat<1>
                         (local_48,pfVar9,pfVar9 + 3,
                          (uint *)((longlong)(local_res18[0] * 4) + 0x18 + (longlong)pfVar9));
      fVar15 = __real_bf800000;
      if (0.0 <= pTVar8->W * fVar20 + pTVar8->Z * fVar17 + pTVar8->Y * fVar14 + pTVar8->X * fVar16)
      {
        fVar15 = __real_3f800000;
      }
      fVar15 = (__real_3f800000 - fVar10) * fVar15;
      fVar18 = fVar15 * fVar16 + fVar10 * pTVar8->X;
      fVar19 = fVar15 * fVar14 + fVar10 * pTVar8->Y;
      fVar17 = fVar15 * fVar17 + fVar10 * pTVar8->Z;
      fVar20 = fVar15 * fVar20 + fVar10 * pTVar8->W;
      fVar10 = fVar19 * fVar19 + fVar18 * fVar18;
      fVar15 = fVar18 * fVar18 + fVar19 * fVar19;
      fVar16 = fVar20 * fVar20 + fVar17 * fVar17;
      fVar14 = fVar17 * fVar17 + fVar20 * fVar20;
      auVar12._0_4_ = fVar16 + fVar10;
      auVar12._4_4_ = fVar14 + fVar15;
      auVar12._8_4_ = fVar10 + fVar16;
      auVar12._12_4_ = fVar15 + fVar14;
      bVar4 = _UNK_1506895d8 <= auVar12._8_4_;
      auVar13 = sqrtps(auVar12,auVar12);
      auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[2];
      dVar21 = (double)(float)((uint)(auVar13._4_4_ * fVar19) &
                               -(uint)(_UNK_1506895d4 <= auVar12._4_4_) |
                              ~-(uint)(_UNK_1506895d4 <= auVar12._4_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[1]);
      dVar11 = (double)(float)((uint)(auVar13._12_4_ * fVar20) &
                               -(uint)(_UNK_1506895dc <= auVar12._12_4_) |
                              ~-(uint)(_UNK_1506895dc <= auVar12._12_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[3]);
      auVar7._8_4_ = SUB84(dVar21,0);
      auVar7._0_8_ = (double)(float)((uint)(auVar13._0_4_ * fVar18) &
                                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar12._0_4_) |
                                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar12._0_4_) &
                                    GlobalVectorConstants::Float0001.m128_u32[0]);
      auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar7;
      auVar5._8_4_ = SUB84(dVar11,0);
      auVar5._0_8_ = (double)(float)((uint)(auVar13._8_4_ * fVar17) & -(uint)bVar4 |
                                    ~-(uint)bVar4 & uVar3);
      auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar5;
    }
    return;
  }
  fVar10 = *pfVar9;
  fVar15 = pfVar9[1];
  fVar16 = pfVar9[2];
  fVar17 = ((__real_3f800000 - fVar10 * fVar10) - fVar15 * fVar15) - fVar16 * fVar16;
  fVar14 = 0.0;
  if (0.0 < fVar17) {
    fVar14 = SQRT(fVar17);
  }
  auVar13._8_4_ = SUB84((double)fVar15,0);
  auVar13._0_8_ = (double)fVar10;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar13;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar16;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar14;
  return;
}

// GetBoneAtomRotation @ 14744e730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<4>::GetBoneAtomRotation
          (AEFVariableKeyLerp<4> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  TQuat<float> *pTVar8;
  float *pfVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  int local_res18 [2];
  int local_res20 [2];
  TQuat<float> local_38 [3];
  
  pIVar2 = param_2->CompressedAnimData;
  pfVar9 = (float *)((longlong)*(int *)(pIVar2[1]._padding_ + 8 + (longlong)(param_3 * 4) * 4) +
                    *(longlong *)&pIVar2[3].CompressedNumberOfKeys);
  iVar1 = *(int *)(pIVar2[1]._padding_ + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar1 != 1) {
    dVar11 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000;
    }
    fVar10 = AnimEncoding::TimeToIndex
                       (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                        (uchar *)((longlong)(iVar1 * 4) + 3 + (longlong)pfVar9 & 0xfffffffffffffffc)
                        ,(float)dVar11,iVar1,local_res20,local_res18);
    if (local_res20[0] == local_res18[0]) {
      pTVar8 = FQuatFixed32NoW::ToQuat<1>
                         (local_38,(uint *)((longlong)(local_res20[0] * 4) + (longlong)pfVar9));
      fVar10 = pTVar8->Y;
      fVar15 = pTVar8->Z;
      fVar16 = pTVar8->W;
      (param_1->Rotation).XY.m128d_f64[0] = (double)pTVar8->X;
      (param_1->Rotation).XY.m128d_f64[1] = (double)fVar10;
      auVar6._8_4_ = SUB84((double)fVar16,0);
      auVar6._0_8_ = (double)fVar15;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar6;
    }
    else {
      pTVar8 = FQuatFixed32NoW::ToQuat<1>
                         (local_38,(uint *)((longlong)(local_res20[0] * 4) + (longlong)pfVar9));
      fVar16 = pTVar8->X;
      fVar14 = pTVar8->Y;
      fVar17 = pTVar8->Z;
      fVar20 = pTVar8->W;
      pTVar8 = FQuatFixed32NoW::ToQuat<1>
                         (local_38,(uint *)((longlong)(local_res18[0] * 4) + (longlong)pfVar9));
      fVar15 = __real_bf800000;
      if (0.0 <= pTVar8->W * fVar20 + pTVar8->Z * fVar17 + pTVar8->Y * fVar14 + pTVar8->X * fVar16)
      {
        fVar15 = __real_3f800000;
      }
      fVar15 = (__real_3f800000 - fVar10) * fVar15;
      fVar18 = fVar15 * fVar16 + fVar10 * pTVar8->X;
      fVar19 = fVar15 * fVar14 + fVar10 * pTVar8->Y;
      fVar17 = fVar15 * fVar17 + fVar10 * pTVar8->Z;
      fVar20 = fVar15 * fVar20 + fVar10 * pTVar8->W;
      fVar10 = fVar19 * fVar19 + fVar18 * fVar18;
      fVar15 = fVar18 * fVar18 + fVar19 * fVar19;
      fVar16 = fVar20 * fVar20 + fVar17 * fVar17;
      fVar14 = fVar17 * fVar17 + fVar20 * fVar20;
      auVar12._0_4_ = fVar16 + fVar10;
      auVar12._4_4_ = fVar14 + fVar15;
      auVar12._8_4_ = fVar10 + fVar16;
      auVar12._12_4_ = fVar15 + fVar14;
      bVar4 = _UNK_1506895d8 <= auVar12._8_4_;
      auVar13 = sqrtps(auVar12,auVar12);
      auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[2];
      dVar21 = (double)(float)((uint)(auVar13._4_4_ * fVar19) &
                               -(uint)(_UNK_1506895d4 <= auVar12._4_4_) |
                              ~-(uint)(_UNK_1506895d4 <= auVar12._4_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[1]);
      dVar11 = (double)(float)((uint)(auVar13._12_4_ * fVar20) &
                               -(uint)(_UNK_1506895dc <= auVar12._12_4_) |
                              ~-(uint)(_UNK_1506895dc <= auVar12._12_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[3]);
      auVar7._8_4_ = SUB84(dVar21,0);
      auVar7._0_8_ = (double)(float)((uint)(auVar13._0_4_ * fVar18) &
                                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar12._0_4_) |
                                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar12._0_4_) &
                                    GlobalVectorConstants::Float0001.m128_u32[0]);
      auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar7;
      auVar5._8_4_ = SUB84(dVar11,0);
      auVar5._0_8_ = (double)(float)((uint)(auVar13._8_4_ * fVar17) & -(uint)bVar4 |
                                    ~-(uint)bVar4 & uVar3);
      auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar5;
    }
    return;
  }
  fVar10 = *pfVar9;
  fVar15 = pfVar9[1];
  fVar16 = pfVar9[2];
  fVar17 = ((__real_3f800000 - fVar10 * fVar10) - fVar15 * fVar15) - fVar16 * fVar16;
  fVar14 = 0.0;
  if (0.0 < fVar17) {
    fVar14 = SQRT(fVar17);
  }
  auVar13._8_4_ = SUB84((double)fVar15,0);
  auVar13._0_8_ = (double)fVar10;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar13;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar16;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar14;
  return;
}

// GetBoneAtomRotation @ 14744ea20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<5>::GetBoneAtomRotation
          (AEFVariableKeyLerp<5> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  TQuat<float> *pTVar8;
  float *pfVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  int local_res18 [2];
  int local_res20 [2];
  TQuat<float> local_38 [3];
  
  pIVar2 = param_2->CompressedAnimData;
  pfVar9 = (float *)((longlong)*(int *)(pIVar2[1]._padding_ + 8 + (longlong)(param_3 * 4) * 4) +
                    *(longlong *)&pIVar2[3].CompressedNumberOfKeys);
  iVar1 = *(int *)(pIVar2[1]._padding_ + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar1 != 1) {
    dVar11 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000;
    }
    fVar10 = AnimEncoding::TimeToIndex
                       (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                        (uchar *)((longlong)(iVar1 * 4) + 3 + (longlong)pfVar9 & 0xfffffffffffffffc)
                        ,(float)dVar11,iVar1,local_res20,local_res18);
    if (local_res20[0] == local_res18[0]) {
      pTVar8 = FQuatFloat32NoW::ToQuat<1>
                         (local_38,(uint *)((longlong)(local_res20[0] * 4) + (longlong)pfVar9));
      fVar10 = pTVar8->Y;
      fVar15 = pTVar8->Z;
      fVar16 = pTVar8->W;
      (param_1->Rotation).XY.m128d_f64[0] = (double)pTVar8->X;
      (param_1->Rotation).XY.m128d_f64[1] = (double)fVar10;
      auVar6._8_4_ = SUB84((double)fVar16,0);
      auVar6._0_8_ = (double)fVar15;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar6;
    }
    else {
      pTVar8 = FQuatFloat32NoW::ToQuat<1>
                         (local_38,(uint *)((longlong)(local_res20[0] * 4) + (longlong)pfVar9));
      fVar16 = pTVar8->X;
      fVar14 = pTVar8->Y;
      fVar17 = pTVar8->Z;
      fVar20 = pTVar8->W;
      pTVar8 = FQuatFloat32NoW::ToQuat<1>
                         (local_38,(uint *)((longlong)(local_res18[0] * 4) + (longlong)pfVar9));
      fVar15 = __real_bf800000;
      if (0.0 <= pTVar8->W * fVar20 + pTVar8->Z * fVar17 + pTVar8->Y * fVar14 + pTVar8->X * fVar16)
      {
        fVar15 = __real_3f800000;
      }
      fVar15 = (__real_3f800000 - fVar10) * fVar15;
      fVar18 = fVar15 * fVar16 + fVar10 * pTVar8->X;
      fVar19 = fVar15 * fVar14 + fVar10 * pTVar8->Y;
      fVar17 = fVar15 * fVar17 + fVar10 * pTVar8->Z;
      fVar20 = fVar15 * fVar20 + fVar10 * pTVar8->W;
      fVar10 = fVar19 * fVar19 + fVar18 * fVar18;
      fVar15 = fVar18 * fVar18 + fVar19 * fVar19;
      fVar16 = fVar20 * fVar20 + fVar17 * fVar17;
      fVar14 = fVar17 * fVar17 + fVar20 * fVar20;
      auVar12._0_4_ = fVar16 + fVar10;
      auVar12._4_4_ = fVar14 + fVar15;
      auVar12._8_4_ = fVar10 + fVar16;
      auVar12._12_4_ = fVar15 + fVar14;
      bVar4 = _UNK_1506895d8 <= auVar12._8_4_;
      auVar13 = sqrtps(auVar12,auVar12);
      auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[2];
      dVar21 = (double)(float)((uint)(auVar13._4_4_ * fVar19) &
                               -(uint)(_UNK_1506895d4 <= auVar12._4_4_) |
                              ~-(uint)(_UNK_1506895d4 <= auVar12._4_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[1]);
      dVar11 = (double)(float)((uint)(auVar13._12_4_ * fVar20) &
                               -(uint)(_UNK_1506895dc <= auVar12._12_4_) |
                              ~-(uint)(_UNK_1506895dc <= auVar12._12_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[3]);
      auVar7._8_4_ = SUB84(dVar21,0);
      auVar7._0_8_ = (double)(float)((uint)(auVar13._0_4_ * fVar18) &
                                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar12._0_4_) |
                                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar12._0_4_) &
                                    GlobalVectorConstants::Float0001.m128_u32[0]);
      auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar7;
      auVar5._8_4_ = SUB84(dVar11,0);
      auVar5._0_8_ = (double)(float)((uint)(auVar13._8_4_ * fVar17) & -(uint)bVar4 |
                                    ~-(uint)bVar4 & uVar3);
      auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar5;
    }
    return;
  }
  fVar10 = *pfVar9;
  fVar15 = pfVar9[1];
  fVar16 = pfVar9[2];
  fVar17 = ((__real_3f800000 - fVar10 * fVar10) - fVar15 * fVar15) - fVar16 * fVar16;
  fVar14 = 0.0;
  if (0.0 < fVar17) {
    fVar14 = SQRT(fVar17);
  }
  auVar13._8_4_ = SUB84((double)fVar15,0);
  auVar13._0_8_ = (double)fVar10;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar13;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar16;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar14;
  return;
}

// GetBoneAtomRotation @ 14744ed10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<6>::GetBoneAtomRotation
          (AEFVariableKeyLerp<6> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  iVar1 = *(int *)(pIVar2[1]._padding_ + 0xc + (longlong)(param_3 * 4) * 4);
  lVar9 = (longlong)*(int *)(pIVar2[1]._padding_ + 8 + (longlong)(param_3 * 4) * 4);
  lVar3 = *(longlong *)&pIVar2[3].CompressedNumberOfKeys;
  if (iVar1 == 1) {
    fVar10 = *(float *)(lVar9 + lVar3);
    fVar15 = *(float *)(lVar9 + 4 + lVar3);
    fVar16 = *(float *)(lVar9 + 8 + lVar3);
    fVar17 = ((__real_3f800000 - fVar10 * fVar10) - fVar15 * fVar15) - fVar16 * fVar16;
    fVar14 = 0.0;
    if (0.0 < fVar17) {
      fVar14 = SQRT(fVar17);
    }
    auVar13._8_4_ = SUB84((double)fVar15,0);
    auVar13._0_8_ = (double)fVar10;
    auVar13._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar13;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar16;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar14;
    return;
  }
  dVar11 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  fVar10 = AnimEncoding::TimeToIndex
                     (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                      (uchar *)(lVar3 + 3 + lVar9 & 0xfffffffffffffffc),(float)dVar11,iVar1,
                      local_res18,local_res20);
  if (local_res18[0] == local_res20[0]) {
    dVar21 = (double)UE::Math::TQuat<float>::Identity.Z;
    dVar11 = (double)UE::Math::TQuat<float>::Identity.W;
    auVar8._8_4_ = SUB84((double)UE::Math::TQuat<float>::Identity.Y,0);
    auVar8._0_8_ = (double)UE::Math::TQuat<float>::Identity.X;
    auVar8._12_4_ = (int)((ulonglong)(double)UE::Math::TQuat<float>::Identity.Y >> 0x20);
    *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar8;
    (param_1->Rotation).ZW.m128d_f64[0] = dVar21;
    (param_1->Rotation).ZW.m128d_f64[1] = dVar11;
    return;
  }
  fVar15 = __real_bf800000;
  if (0.0 <= UE::Math::TQuat<float>::Identity.Z * UE::Math::TQuat<float>::Identity.Z +
             UE::Math::TQuat<float>::Identity.W * UE::Math::TQuat<float>::Identity.W +
             UE::Math::TQuat<float>::Identity.Y * UE::Math::TQuat<float>::Identity.Y +
             UE::Math::TQuat<float>::Identity.X * UE::Math::TQuat<float>::Identity.X) {
    fVar15 = __real_3f800000;
  }
  fVar15 = (__real_3f800000 - fVar10) * fVar15;
  fVar17 = fVar15 * UE::Math::TQuat<float>::Identity.X + fVar10 * UE::Math::TQuat<float>::Identity.X
  ;
  fVar18 = fVar15 * UE::Math::TQuat<float>::Identity.Y + fVar10 * UE::Math::TQuat<float>::Identity.Y
  ;
  fVar19 = fVar15 * UE::Math::TQuat<float>::Identity.Z + fVar10 * UE::Math::TQuat<float>::Identity.Z
  ;
  fVar20 = fVar15 * UE::Math::TQuat<float>::Identity.W + fVar10 * UE::Math::TQuat<float>::Identity.W
  ;
  fVar10 = fVar18 * fVar18 + fVar17 * fVar17;
  fVar15 = fVar17 * fVar17 + fVar18 * fVar18;
  fVar16 = fVar20 * fVar20 + fVar19 * fVar19;
  fVar14 = fVar19 * fVar19 + fVar20 * fVar20;
  auVar12._0_4_ = fVar16 + fVar10;
  auVar12._4_4_ = fVar14 + fVar15;
  auVar12._8_4_ = fVar10 + fVar16;
  auVar12._12_4_ = fVar15 + fVar14;
  bVar5 = _UNK_1506895d8 <= auVar12._8_4_;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  dVar21 = (double)(float)((uint)(auVar13._4_4_ * fVar18) & -(uint)(_UNK_1506895d4 <= auVar12._4_4_)
                          | ~-(uint)(_UNK_1506895d4 <= auVar12._4_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[1]);
  dVar11 = (double)(float)((uint)(auVar13._12_4_ * fVar20) &
                           -(uint)(_UNK_1506895dc <= auVar12._12_4_) |
                          ~-(uint)(_UNK_1506895dc <= auVar12._12_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[3]);
  auVar7._8_4_ = SUB84(dVar21,0);
  auVar7._0_8_ = (double)(float)((uint)(auVar13._0_4_ * fVar17) &
                                 -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) |
                                ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[0]);
  auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar7;
  auVar6._8_4_ = SUB84(dVar11,0);
  auVar6._0_8_ = (double)(float)((uint)(auVar13._8_4_ * fVar19) & -(uint)bVar5 |
                                ~-(uint)bVar5 & uVar4);
  auVar6._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar6;
  return;
}

// GetBoneAtomRotation @ 14744efa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<0>::GetBoneAtomRotation
          (AEFVariableKeyLerp<0> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  ICompressedAnimData *pIVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar4 = param_2->CompressedAnimData;
  pfVar12 = (float *)((longlong)*(int *)(pIVar4[1]._padding_ + 8 + (longlong)(param_3 * 4) * 4) +
                     *(longlong *)&pIVar4[3].CompressedNumberOfKeys);
  iVar3 = *(int *)(pIVar4[1]._padding_ + 0xc + (longlong)(param_3 * 4) * 4);
  if (iVar3 != 1) {
    dVar14 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar14) {
      dVar14 = __real_3ff0000000000000;
    }
    fVar13 = AnimEncoding::TimeToIndex
                       (param_2->Interpolation,pIVar4->CompressedNumberOfKeys,
                        (uchar *)((longlong)(iVar3 << 4) + 3 + (longlong)pfVar12 &
                                 0xfffffffffffffffc),(float)dVar14,iVar3,local_res20,local_res18);
    if (local_res20[0] == local_res18[0]) {
      lVar10 = (longlong)(local_res20[0] << 4);
      uVar2 = *(undefined8 *)(lVar10 + 8 + (longlong)pfVar12);
      dVar14 = (double)*(float *)(lVar10 + 4 + (longlong)pfVar12);
      auVar8._8_4_ = SUB84(dVar14,0);
      auVar8._0_8_ = (double)*(float *)(lVar10 + (longlong)pfVar12);
      auVar8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar8;
      (param_1->Rotation).ZW.m128d_f64[0] = (double)(float)uVar2;
      (param_1->Rotation).ZW.m128d_f64[1] = (double)(float)((ulonglong)uVar2 >> 0x20);
    }
    else {
      lVar11 = (longlong)(local_res18[0] << 4);
      lVar10 = (longlong)(local_res20[0] << 4);
      fVar19 = *(float *)(lVar11 + 4 + (longlong)pfVar12);
      fVar20 = *(float *)(lVar10 + 4 + (longlong)pfVar12);
      fVar17 = *(float *)(lVar10 + 8 + (longlong)pfVar12);
      fVar21 = *(float *)(lVar11 + 8 + (longlong)pfVar12);
      fVar24 = *(float *)(lVar11 + 0xc + (longlong)pfVar12);
      fVar1 = *(float *)(lVar10 + 0xc + (longlong)pfVar12);
      fVar18 = __real_bf800000;
      if (0.0 <= fVar19 * fVar20 +
                 *(float *)(lVar11 + (longlong)pfVar12) * *(float *)(lVar10 + (longlong)pfVar12) +
                 fVar24 * fVar1 + fVar21 * fVar17) {
        fVar18 = __real_3f800000;
      }
      fVar18 = (__real_3f800000 - fVar13) * fVar18;
      fVar22 = fVar18 * *(float *)(lVar10 + (longlong)pfVar12) +
               fVar13 * *(float *)(lVar11 + (longlong)pfVar12);
      fVar23 = fVar18 * fVar20 + fVar13 * fVar19;
      fVar21 = fVar18 * fVar17 + fVar13 * fVar21;
      fVar24 = fVar18 * fVar1 + fVar13 * fVar24;
      fVar13 = fVar23 * fVar23 + fVar22 * fVar22;
      fVar19 = fVar22 * fVar22 + fVar23 * fVar23;
      fVar20 = fVar24 * fVar24 + fVar21 * fVar21;
      fVar17 = fVar21 * fVar21 + fVar24 * fVar24;
      auVar15._0_4_ = fVar20 + fVar13;
      auVar15._4_4_ = fVar17 + fVar19;
      auVar15._8_4_ = fVar13 + fVar20;
      auVar15._12_4_ = fVar19 + fVar17;
      bVar6 = _UNK_1506895d8 <= auVar15._8_4_;
      auVar16 = sqrtps(auVar15,auVar15);
      auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
      uVar5 = GlobalVectorConstants::Float0001.m128_u32[2];
      dVar25 = (double)(float)((uint)(auVar16._4_4_ * fVar23) &
                               -(uint)(_UNK_1506895d4 <= auVar15._4_4_) |
                              ~-(uint)(_UNK_1506895d4 <= auVar15._4_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[1]);
      dVar14 = (double)(float)((uint)(auVar16._12_4_ * fVar24) &
                               -(uint)(_UNK_1506895dc <= auVar15._12_4_) |
                              ~-(uint)(_UNK_1506895dc <= auVar15._12_4_) &
                              GlobalVectorConstants::Float0001.m128_u32[3]);
      auVar9._8_4_ = SUB84(dVar25,0);
      auVar9._0_8_ = (double)(float)((uint)(auVar16._0_4_ * fVar22) &
                                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar15._0_4_) |
                                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <=
                                            auVar15._0_4_) &
                                    GlobalVectorConstants::Float0001.m128_u32[0]);
      auVar9._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar9;
      auVar7._8_4_ = SUB84(dVar14,0);
      auVar7._0_8_ = (double)(float)((uint)(auVar16._8_4_ * fVar21) & -(uint)bVar6 |
                                    ~-(uint)bVar6 & uVar5);
      auVar7._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar7;
    }
    return;
  }
  fVar13 = *pfVar12;
  fVar19 = pfVar12[1];
  fVar20 = pfVar12[2];
  fVar21 = ((__real_3f800000 - fVar13 * fVar13) - fVar19 * fVar19) - fVar20 * fVar20;
  fVar17 = 0.0;
  if (0.0 < fVar21) {
    fVar17 = SQRT(fVar21);
  }
  auVar16._8_4_ = SUB84((double)fVar19,0);
  auVar16._0_8_ = (double)fVar13;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar16;
  (param_1->Rotation).ZW.m128d_f64[0] = (double)fVar20;
  (param_1->Rotation).ZW.m128d_f64[1] = (double)fVar17;
  return;
}

// GetBoneAtomScale @ 147450770

void __thiscall
AEFVariableKeyLerp<1>::GetBoneAtomScale
          (AEFVariableKeyLerp<1> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  int local_res18 [2];
  int local_res20 [2];
  float fStack_54;
  
  pIVar3 = param_2->CompressedAnimData;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar3 + 2),param_3 * (int)pIVar3[3]._padding_);
  iVar2 = *piVar4;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar3 + 2),param_3 * (int)pIVar3[3]._padding_ + 1);
  lVar7 = *(longlong *)&pIVar3[3].CompressedNumberOfKeys + (longlong)iVar2;
  dVar10 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar10) {
    dVar10 = __real_3ff0000000000000;
  }
  fVar8 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar3->CompressedNumberOfKeys,
                     (uchar *)((longlong)(*piVar4 * 0xc) + 3 + lVar7 & 0xfffffffffffffffc),
                     (float)dVar10,*piVar4,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    uVar1 = *(undefined8 *)(local_res20[0] * 0xc + lVar7);
    fVar9 = (float)uVar1;
    fStack_54 = (float)((ulonglong)uVar1 >> 0x20);
    fVar8 = *(float *)((longlong)(local_res20[0] * 0xc) + 8 + lVar7);
  }
  else {
    lVar6 = (longlong)(local_res20[0] * 0xc);
    lVar5 = (longlong)(local_res18[0] * 0xc);
    fVar9 = (float)*(undefined8 *)(lVar6 + lVar7);
    fVar9 = ((float)*(undefined8 *)(lVar5 + lVar7) - fVar9) * fVar8 + fVar9;
    fStack_54 = (float)((ulonglong)*(undefined8 *)(lVar6 + lVar7) >> 0x20);
    fStack_54 = (*(float *)(lVar5 + 4 + lVar7) - fStack_54) * fVar8 + fStack_54;
    fVar8 = (*(float *)(lVar5 + 8 + lVar7) - *(float *)(lVar6 + 8 + lVar7)) * fVar8 +
            *(float *)(lVar6 + 8 + lVar7);
  }
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar9;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fStack_54;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar8;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 147450910

void __thiscall
AEFVariableKeyLerp<2>::GetBoneAtomScale
          (AEFVariableKeyLerp<2> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_);
  iVar1 = *piVar3;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_ + 1);
  lVar6 = *(longlong *)&pIVar2[3].CompressedNumberOfKeys + (longlong)iVar1;
  dVar10 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar10) {
    dVar10 = __real_3ff0000000000000;
  }
  fVar7 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                     (uchar *)((longlong)(*piVar3 * 0xc) + 3 + lVar6 & 0xfffffffffffffffc),
                     (float)dVar10,*piVar3,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    lVar4 = (longlong)(local_res20[0] * 0xc);
    fVar8 = (float)(int)(*(ushort *)(lVar4 + lVar6) - 0x7fff) * __real_3b800100;
    fVar9 = (float)(int)(*(ushort *)(lVar4 + 2 + lVar6) - 0x7fff) * __real_3b800100;
    fVar11 = (float)(int)(*(ushort *)(lVar4 + 4 + lVar6) - 0x7fff) * __real_3b800100;
  }
  else {
    lVar4 = (longlong)(local_res20[0] * 0xc);
    lVar5 = (longlong)(local_res18[0] * 0xc);
    fVar8 = (float)(int)(*(ushort *)(lVar4 + lVar6) - 0x7fff) * __real_3b800100;
    fVar9 = (float)(int)(*(ushort *)(lVar4 + 2 + lVar6) - 0x7fff) * __real_3b800100;
    fVar11 = (float)(int)(*(ushort *)(lVar4 + 4 + lVar6) - 0x7fff) * __real_3b800100;
    fVar8 = ((float)(int)(*(ushort *)(lVar5 + lVar6) - 0x7fff) * __real_3b800100 - fVar8) * fVar7 +
            fVar8;
    fVar9 = ((float)(int)(*(ushort *)(lVar5 + 2 + lVar6) - 0x7fff) * __real_3b800100 - fVar9) *
            fVar7 + fVar9;
    fVar11 = ((float)(int)(*(ushort *)(lVar5 + 4 + lVar6) - 0x7fff) * __real_3b800100 - fVar11) *
             fVar7 + fVar11;
  }
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar8;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fVar9;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar11;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 147450b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<3>::GetBoneAtomScale
          (AEFVariableKeyLerp<3> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ICompressedAnimData *pIVar5;
  int *piVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar5 = param_2->CompressedAnimData;
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar5 + 2),param_3 * (int)pIVar5[3]._padding_);
  iVar1 = *piVar6;
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar5 + 2),param_3 * (int)pIVar5[3]._padding_ + 1);
  iVar2 = *piVar6;
  pfVar7 = (float *)(*(longlong *)&pIVar5[3].CompressedNumberOfKeys + (longlong)iVar1);
  lVar8 = 0x18;
  if (iVar2 < 2) {
    lVar8 = 0;
  }
  dVar10 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar10) {
    dVar10 = __real_3ff0000000000000;
  }
  fVar9 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar5->CompressedNumberOfKeys,
                     (uchar *)((longlong)pfVar7 + iVar2 * 4 + lVar8 + 3 & 0xfffffffffffffffc),
                     (float)dVar10,iVar2,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    uVar3 = *(uint *)(local_res20[0] * 4 + lVar8 + (longlong)pfVar7);
    fVar11 = (float)(int)((uVar3 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar7[3] + *pfVar7;
    fVar12 = (float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar7[4] + pfVar7[1];
    fVar13 = (float)(int)((uVar3 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar7[5] + pfVar7[2];
  }
  else {
    uVar3 = *(uint *)(local_res20[0] * 4 + lVar8 + (longlong)pfVar7);
    uVar4 = *(uint *)(local_res18[0] * 4 + lVar8 + (longlong)pfVar7);
    fVar11 = (float)(int)((uVar3 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar7[3] + *pfVar7;
    fVar12 = (float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar7[4] + pfVar7[1];
    fVar13 = (float)(int)((uVar3 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar7[5] + pfVar7[2];
    fVar11 = (((float)(int)((uVar4 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar7[3] + *pfVar7) -
             fVar11) * fVar9 + fVar11;
    fVar12 = (((float)(int)((uVar4 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar7[4] + pfVar7[1]
              ) - fVar12) * fVar9 + fVar12;
    fVar13 = (((float)(int)((uVar4 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar7[5] + pfVar7[2]) -
             fVar13) * fVar9 + fVar13;
  }
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar11;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fVar12;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar13;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 147450e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFVariableKeyLerp<4>::GetBoneAtomScale
          (AEFVariableKeyLerp<4> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  float fVar7;
  double dVar8;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_);
  iVar1 = *piVar6;
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_ + 1);
  dVar8 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar8) {
    dVar8 = __real_3ff0000000000000;
  }
  fVar7 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                     (uchar *)((longlong)iVar1 + 3 +
                               (longlong)(*piVar6 * 0xc) +
                               *(longlong *)&pIVar2[3].CompressedNumberOfKeys & 0xfffffffffffffffc),
                     (float)dVar8,*piVar6,local_res18,local_res20);
  if (local_res18[0] == local_res20[0]) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressScale<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressScale<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressScale<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar3) * fVar7 +
            (float)uVar3;
    uVar4 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar4) * fVar7 +
            (float)uVar4;
    uVar5 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar5) * fVar7 +
            (float)uVar5;
  }
  (param_1->Scale3D).XY.m128d_f64[0] = (double)(float)uVar4;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)(float)uVar5;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)(float)uVar3;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 1474510a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFVariableKeyLerp<5>::GetBoneAtomScale
          (AEFVariableKeyLerp<5> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  float fVar7;
  double dVar8;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_);
  iVar1 = *piVar6;
  piVar6 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_ + 1);
  dVar8 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar8) {
    dVar8 = __real_3ff0000000000000;
  }
  fVar7 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                     (uchar *)((longlong)iVar1 + 3 +
                               (longlong)(*piVar6 * 0xc) +
                               *(longlong *)&pIVar2[3].CompressedNumberOfKeys & 0xfffffffffffffffc),
                     (float)dVar8,*piVar6,local_res18,local_res20);
  if (local_res18[0] == local_res20[0]) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressScale<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressScale<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressScale<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar3) * fVar7 +
            (float)uVar3;
    uVar4 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar4) * fVar7 +
            (float)uVar4;
    uVar5 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar5) * fVar7 +
            (float)uVar5;
  }
  (param_1->Scale3D).XY.m128d_f64[0] = (double)(float)uVar4;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)(float)uVar5;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)(float)uVar3;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 1474512d0

void __thiscall
AEFVariableKeyLerp<6>::GetBoneAtomScale
          (AEFVariableKeyLerp<6> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_);
  iVar1 = *piVar3;
  piVar3 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_ + 1);
  dVar5 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  AnimEncoding::TimeToIndex
            (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
             (uchar *)(*(longlong *)&pIVar2[3].CompressedNumberOfKeys + 3 + (longlong)iVar1 &
                      0xfffffffffffffffc),(float)dVar5,*piVar3,local_res18,local_res20);
  dVar5 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar4 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->Scale3D).XY.m128d_f64[0] =
       (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  (param_1->Scale3D).XY.m128d_f64[1] = dVar4;
  (param_1->Scale3D).ZW.m128d_f64[0] = dVar5;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomScale @ 147451400

void __thiscall
AEFVariableKeyLerp<0>::GetBoneAtomScale
          (AEFVariableKeyLerp<0> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  int local_res18 [2];
  int local_res20 [2];
  float fStack_54;
  
  pIVar3 = param_2->CompressedAnimData;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar3 + 2),param_3 * (int)pIVar3[3]._padding_);
  iVar2 = *piVar4;
  piVar4 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar3 + 2),param_3 * (int)pIVar3[3]._padding_ + 1);
  lVar7 = *(longlong *)&pIVar3[3].CompressedNumberOfKeys + (longlong)iVar2;
  dVar10 = ((double)(param_2->SamplingTime).SubFrame +
           (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar10) {
    dVar10 = __real_3ff0000000000000;
  }
  fVar8 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar3->CompressedNumberOfKeys,
                     (uchar *)((longlong)(*piVar4 * 0xc) + 3 + lVar7 & 0xfffffffffffffffc),
                     (float)dVar10,*piVar4,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    uVar1 = *(undefined8 *)(local_res20[0] * 0xc + lVar7);
    fVar9 = (float)uVar1;
    fStack_54 = (float)((ulonglong)uVar1 >> 0x20);
    fVar8 = *(float *)((longlong)(local_res20[0] * 0xc) + 8 + lVar7);
  }
  else {
    lVar6 = (longlong)(local_res20[0] * 0xc);
    lVar5 = (longlong)(local_res18[0] * 0xc);
    fVar9 = (float)*(undefined8 *)(lVar6 + lVar7);
    fVar9 = ((float)*(undefined8 *)(lVar5 + lVar7) - fVar9) * fVar8 + fVar9;
    fStack_54 = (float)((ulonglong)*(undefined8 *)(lVar6 + lVar7) >> 0x20);
    fStack_54 = (*(float *)(lVar5 + 4 + lVar7) - fStack_54) * fVar8 + fStack_54;
    fVar8 = (*(float *)(lVar5 + 8 + lVar7) - *(float *)(lVar6 + 8 + lVar7)) * fVar8 +
            *(float *)(lVar6 + 8 + lVar7);
  }
  (param_1->Scale3D).XY.m128d_f64[0] = (double)fVar9;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fStack_54;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)fVar8;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452740

void __thiscall
AEFVariableKeyLerp<1>::GetBoneAtomTranslation
          (AEFVariableKeyLerp<1> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  int local_res18 [2];
  int local_res20 [2];
  float fStack_34;
  
  pIVar3 = param_2->CompressedAnimData;
  iVar2 = *(int *)(pIVar3[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  lVar6 = *(longlong *)&pIVar3[3].CompressedNumberOfKeys +
          (longlong)*(int *)(pIVar3[1]._padding_ + (longlong)(param_3 * 4) * 4);
  dVar9 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  fVar7 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar3->CompressedNumberOfKeys,
                     (uchar *)(lVar6 + 3 + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc),
                     (float)dVar9,iVar2,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    uVar1 = *(undefined8 *)(local_res20[0] * 0xc + lVar6);
    fVar8 = (float)uVar1;
    fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
    fVar7 = *(float *)((longlong)(local_res20[0] * 0xc) + 8 + lVar6);
  }
  else {
    lVar5 = (longlong)(local_res20[0] * 0xc);
    lVar4 = (longlong)(local_res18[0] * 0xc);
    fVar8 = (float)*(undefined8 *)(lVar5 + lVar6);
    fVar8 = ((float)*(undefined8 *)(lVar4 + lVar6) - fVar8) * fVar7 + fVar8;
    fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar5 + lVar6) >> 0x20);
    fStack_34 = (*(float *)(lVar4 + 4 + lVar6) - fStack_34) * fVar7 + fStack_34;
    fVar7 = (*(float *)(lVar4 + 8 + lVar6) - *(float *)(lVar5 + 8 + lVar6)) * fVar7 +
            *(float *)(lVar5 + 8 + lVar6);
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar8;
  (param_1->Translation).XY.m128d_f64[1] = (double)fStack_34;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar7;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 1474528b0

void __thiscall
AEFVariableKeyLerp<2>::GetBoneAtomTranslation
          (AEFVariableKeyLerp<2> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  iVar1 = *(int *)(pIVar2[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  lVar5 = *(longlong *)&pIVar2[3].CompressedNumberOfKeys +
          (longlong)*(int *)(pIVar2[1]._padding_ + (longlong)(param_3 * 4) * 4);
  dVar9 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  fVar6 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                     (uchar *)(lVar5 + 3 + (longlong)(iVar1 * 0xc) & 0xfffffffffffffffc),
                     (float)dVar9,iVar1,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    lVar3 = (longlong)(local_res20[0] * 0xc);
    fVar7 = (float)(int)(*(ushort *)(lVar3 + lVar5) - 0x7fff) * __real_3b800100;
    fVar8 = (float)(int)(*(ushort *)(lVar3 + 2 + lVar5) - 0x7fff) * __real_3b800100;
    fVar10 = (float)(int)(*(ushort *)(lVar3 + 4 + lVar5) - 0x7fff) * __real_3b800100;
  }
  else {
    lVar3 = (longlong)(local_res20[0] * 0xc);
    lVar4 = (longlong)(local_res18[0] * 0xc);
    fVar7 = (float)(int)(*(ushort *)(lVar3 + lVar5) - 0x7fff) * __real_3b800100;
    fVar8 = (float)(int)(*(ushort *)(lVar3 + 2 + lVar5) - 0x7fff) * __real_3b800100;
    fVar10 = (float)(int)(*(ushort *)(lVar3 + 4 + lVar5) - 0x7fff) * __real_3b800100;
    fVar7 = ((float)(int)(*(ushort *)(lVar4 + lVar5) - 0x7fff) * __real_3b800100 - fVar7) * fVar6 +
            fVar7;
    fVar8 = ((float)(int)(*(ushort *)(lVar4 + 2 + lVar5) - 0x7fff) * __real_3b800100 - fVar8) *
            fVar6 + fVar8;
    fVar10 = ((float)(int)(*(ushort *)(lVar4 + 4 + lVar5) - 0x7fff) * __real_3b800100 - fVar10) *
             fVar6 + fVar10;
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar7;
  (param_1->Translation).XY.m128d_f64[1] = (double)fVar8;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar10;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AEFVariableKeyLerp<3>::GetBoneAtomTranslation
          (AEFVariableKeyLerp<3> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ICompressedAnimData *pIVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar4 = param_2->CompressedAnimData;
  iVar1 = *(int *)(pIVar4[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  pfVar5 = (float *)(*(longlong *)&pIVar4[3].CompressedNumberOfKeys +
                    (longlong)*(int *)(pIVar4[1]._padding_ + (longlong)(param_3 * 4) * 4));
  lVar6 = 0x18;
  if (iVar1 < 2) {
    lVar6 = 0;
  }
  dVar8 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar8) {
    dVar8 = __real_3ff0000000000000;
  }
  fVar7 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar4->CompressedNumberOfKeys,
                     (uchar *)((longlong)pfVar5 + iVar1 * 4 + lVar6 + 3 & 0xfffffffffffffffc),
                     (float)dVar8,iVar1,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    uVar2 = *(uint *)(local_res20[0] * 4 + lVar6 + (longlong)pfVar5);
    fVar9 = (float)(int)((uVar2 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar5[3] + *pfVar5;
    fVar10 = (float)(int)((uVar2 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar5[4] + pfVar5[1];
    fVar11 = (float)(int)((uVar2 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar5[5] + pfVar5[2];
  }
  else {
    uVar2 = *(uint *)(local_res20[0] * 4 + lVar6 + (longlong)pfVar5);
    uVar3 = *(uint *)(local_res18[0] * 4 + lVar6 + (longlong)pfVar5);
    fVar9 = (float)(int)((uVar2 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar5[3] + *pfVar5;
    fVar10 = (float)(int)((uVar2 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar5[4] + pfVar5[1];
    fVar11 = (float)(int)((uVar2 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar5[5] + pfVar5[2];
    fVar9 = (((float)(int)((uVar3 & 0x3ff) - 0x1ff) * ___real_3b004020 * pfVar5[3] + *pfVar5) -
            fVar9) * fVar7 + fVar9;
    fVar10 = (((float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * pfVar5[4] + pfVar5[1]
              ) - fVar10) * fVar7 + fVar10;
    fVar11 = (((float)(int)((uVar3 >> 0x15) - 0x3ff) * __real_3a802008 * pfVar5[5] + pfVar5[2]) -
             fVar11) * fVar7 + fVar11;
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar9;
  (param_1->Translation).XY.m128d_f64[1] = (double)fVar10;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar11;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFVariableKeyLerp<4>::GetBoneAtomTranslation
          (AEFVariableKeyLerp<4> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  iVar1 = *(int *)(pIVar2[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  dVar7 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar7) {
    dVar7 = __real_3ff0000000000000;
  }
  fVar6 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                     (uchar *)((longlong)*(int *)(pIVar2[1]._padding_ + (longlong)(param_3 * 4) * 4)
                               + 3 + (longlong)(iVar1 * 0xc) +
                                     *(longlong *)&pIVar2[3].CompressedNumberOfKeys &
                              0xfffffffffffffffc),(float)dVar7,iVar1,local_res18,local_res20);
  if (local_res18[0] == local_res20[0]) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar3) * fVar6 +
            (float)uVar3;
    uVar4 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar4) * fVar6 +
            (float)uVar4;
    uVar5 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar5) * fVar6 +
            (float)uVar5;
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)(float)uVar4;
  (param_1->Translation).XY.m128d_f64[1] = (double)(float)uVar5;
  (param_1->Translation).ZW.m128d_f64[0] = (double)(float)uVar3;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147452fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFVariableKeyLerp<5>::GetBoneAtomTranslation
          (AEFVariableKeyLerp<5> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  int iVar1;
  ICompressedAnimData *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  iVar1 = *(int *)(pIVar2[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  dVar7 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar7) {
    dVar7 = __real_3ff0000000000000;
  }
  fVar6 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                     (uchar *)((longlong)*(int *)(pIVar2[1]._padding_ + (longlong)(param_3 * 4) * 4)
                               + 3 + (longlong)(iVar1 * 0xc) +
                                     *(longlong *)&pIVar2[3].CompressedNumberOfKeys &
                              0xfffffffffffffffc),(float)dVar7,iVar1,local_res18,local_res20);
  if (local_res18[0] == local_res20[0]) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar3 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar3) * fVar6 +
            (float)uVar3;
    uVar4 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar4) * fVar6 +
            (float)uVar4;
    uVar5 = (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar5) * fVar6 +
            (float)uVar5;
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)(float)uVar4;
  (param_1->Translation).XY.m128d_f64[1] = (double)(float)uVar5;
  (param_1->Translation).ZW.m128d_f64[0] = (double)(float)uVar3;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147453190

void __thiscall
AEFVariableKeyLerp<6>::GetBoneAtomTranslation
          (AEFVariableKeyLerp<6> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  ICompressedAnimData *pIVar1;
  double dVar2;
  double dVar3;
  int local_res18 [2];
  int local_res20 [2];
  
  pIVar1 = param_2->CompressedAnimData;
  dVar3 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar3) {
    dVar3 = __real_3ff0000000000000;
  }
  AnimEncoding::TimeToIndex
            (param_2->Interpolation,pIVar1->CompressedNumberOfKeys,
             (uchar *)((longlong)*(int *)(pIVar1[1]._padding_ + (longlong)(param_3 * 4) * 4) +
                       *(longlong *)&pIVar1[3].CompressedNumberOfKeys + 3 & 0xfffffffffffffffc),
             (float)dVar3,*(int *)(pIVar1[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4),
             local_res18,local_res20);
  dVar3 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (local_res18[0] != local_res20[0]) {
    dVar2 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    (param_1->Translation).XY.m128d_f64[0] =
         (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    (param_1->Translation).XY.m128d_f64[1] = dVar2;
    (param_1->Translation).ZW.m128d_f64[0] = dVar3;
    (param_1->Translation).ZW.m128d_f64[1] = 0.0;
    return;
  }
  dVar2 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->Translation).XY.m128d_f64[0] =
       (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  (param_1->Translation).XY.m128d_f64[1] = dVar2;
  (param_1->Translation).ZW.m128d_f64[0] = dVar3;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 1474532a0

void __thiscall
AEFVariableKeyLerp<0>::GetBoneAtomTranslation
          (AEFVariableKeyLerp<0> *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  int local_res18 [2];
  int local_res20 [2];
  float fStack_34;
  
  pIVar3 = param_2->CompressedAnimData;
  iVar2 = *(int *)(pIVar3[1]._padding_ + 4 + (longlong)(param_3 * 4) * 4);
  lVar6 = *(longlong *)&pIVar3[3].CompressedNumberOfKeys +
          (longlong)*(int *)(pIVar3[1]._padding_ + (longlong)(param_3 * 4) * 4);
  dVar9 = ((double)(param_2->SamplingTime).SubFrame +
          (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  fVar7 = AnimEncoding::TimeToIndex
                    (param_2->Interpolation,pIVar3->CompressedNumberOfKeys,
                     (uchar *)(lVar6 + 3 + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc),
                     (float)dVar9,iVar2,local_res20,local_res18);
  if (local_res20[0] == local_res18[0]) {
    uVar1 = *(undefined8 *)(local_res20[0] * 0xc + lVar6);
    fVar8 = (float)uVar1;
    fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
    fVar7 = *(float *)((longlong)(local_res20[0] * 0xc) + 8 + lVar6);
  }
  else {
    lVar5 = (longlong)(local_res20[0] * 0xc);
    lVar4 = (longlong)(local_res18[0] * 0xc);
    fVar8 = (float)*(undefined8 *)(lVar5 + lVar6);
    fVar8 = ((float)*(undefined8 *)(lVar4 + lVar6) - fVar8) * fVar7 + fVar8;
    fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar5 + lVar6) >> 0x20);
    fStack_34 = (*(float *)(lVar4 + 4 + lVar6) - fStack_34) * fVar7 + fStack_34;
    fVar7 = (*(float *)(lVar4 + 8 + lVar6) - *(float *)(lVar5 + 8 + lVar6)) * fVar7 +
            *(float *)(lVar5 + 8 + lVar6);
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)fVar8;
  (param_1->Translation).XY.m128d_f64[1] = (double)fStack_34;
  (param_1->Translation).ZW.m128d_f64[0] = (double)fVar7;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetPoseRotations @ 14745a400

void __thiscall
AEFVariableKeyLerp<1>::GetPoseRotations
          (AEFVariableKeyLerp<1> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,1,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 14745a5d0

void __thiscall
AEFVariableKeyLerp<2>::GetPoseRotations
          (AEFVariableKeyLerp<2> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,2,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 14745a7a0

void __thiscall
AEFVariableKeyLerp<3>::GetPoseRotations
          (AEFVariableKeyLerp<3> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,3,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 14745a970

void __thiscall
AEFVariableKeyLerp<4>::GetPoseRotations
          (AEFVariableKeyLerp<4> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,4,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 14745ab40

void __thiscall
AEFVariableKeyLerp<5>::GetPoseRotations
          (AEFVariableKeyLerp<5> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,5,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 14745ad10

void __thiscall
AEFVariableKeyLerp<6>::GetPoseRotations
          (AEFVariableKeyLerp<6> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,6,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseRotations @ 14745aee0

void __thiscall
AEFVariableKeyLerp<0>::GetPoseRotations
          (AEFVariableKeyLerp<0> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,0,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomRotation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseScales @ 14745d1d0

void __thiscall
AEFVariableKeyLerp<1>::GetPoseScales
          (AEFVariableKeyLerp<1> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  ICompressedAnimData *pIVar6;
  FScriptContainerElement *pFVar7;
  TTransform<double> *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  dVar19 = __real_3ff0000000000000;
  iVar3 = param_2->ArrayNum;
  local_a0 = (longlong)iVar3;
  if (iVar3 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar6 = param_3->CompressedAnimData;
      dVar19 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar19) {
        dVar19 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar6[2]._padding_,
                 (int)pIVar6[3]._padding_,*(undefined8 *)&pIVar6[3].CompressedNumberOfKeys,
                 pIVar6->CompressedNumberOfKeys,(float)dVar19,param_3->Interpolation,1,iVar3);
      return;
    }
    uVar15 = 0;
    if (0 < local_a0) {
      lVar16 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        iVar3 = *(int *)(pFVar7 + lVar16 * 8 + 4);
        uVar11 = *(uint *)(pFVar7 + lVar16 * 8);
        uVar12 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar8 = param_1->DataPtr;
        pIVar6 = param_3->CompressedAnimData;
        piVar13 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar6 + 2),iVar3 * (int)pIVar6[3]._padding_);
        iVar4 = *piVar13;
        piVar13 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar6 + 2),
                             iVar3 * (int)pIVar6[3]._padding_ + 1);
        lVar14 = *(longlong *)&pIVar6[3].CompressedNumberOfKeys + (longlong)iVar4;
        dVar20 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar19 <= dVar20) {
          dVar20 = dVar19;
        }
        fVar17 = AnimEncoding::TimeToIndex
                           (param_3->Interpolation,pIVar6->CompressedNumberOfKeys,
                            (uchar *)((longlong)(*piVar13 * 0xc) + 3 + lVar14 & 0xfffffffffffffffc),
                            (float)dVar20,*piVar13,&local_a8,&local_a4);
        if (local_a8 == local_a4) {
          local_88 = *(undefined8 *)(local_a8 * 0xc + lVar14);
          dVar21 = (double)(float)((ulonglong)local_88 >> 0x20);
          dVar20 = (double)(float)local_88;
          dVar18 = (double)*(float *)((longlong)(local_a8 * 0xc) + 8 + lVar14);
          local_60 = dVar20;
          dStack_58 = dVar21;
          local_50 = dVar18;
        }
        else {
          uVar2 = *(undefined8 *)(local_a8 * 0xc + lVar14);
          fVar5 = *(float *)((longlong)(local_a8 * 0xc) + 8 + lVar14);
          local_88 = *(undefined8 *)(local_a4 * 0xc + lVar14);
          local_98._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          dVar20 = (double)(((float)local_88 - (float)uVar2) * fVar17 + (float)uVar2);
          dVar21 = (double)(((float)((ulonglong)local_88 >> 0x20) - local_98._4_4_) * fVar17 +
                           local_98._4_4_);
          dVar18 = (double)((*(float *)((longlong)(local_a4 * 0xc) + 8 + lVar14) - fVar5) * fVar17 +
                           fVar5);
          local_98 = uVar2;
          local_78 = dVar20;
          dStack_70 = dVar21;
          local_68 = dVar18;
        }
        pVVar1 = &pTVar8[(int)uVar11].Scale3D;
        (pVVar1->XY).m128d_f64[0] = dVar20;
        (pVVar1->XY).m128d_f64[1] = dVar21;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 1;
        pVVar1 = &pTVar8[(int)uVar11].Scale3D;
        (pVVar1->ZW).m128d_f64[0] = dVar18;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar16 < local_a0);
    }
  }
  return;
}

// GetPoseScales @ 14745d590

void __thiscall
AEFVariableKeyLerp<2>::GetPoseScales
          (AEFVariableKeyLerp<2> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 pIVar3->CompressedNumberOfKeys,(float)dVar11,param_3->Interpolation,2,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseScales @ 14745d780

void __thiscall
AEFVariableKeyLerp<3>::GetPoseScales
          (AEFVariableKeyLerp<3> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 pIVar3->CompressedNumberOfKeys,(float)dVar11,param_3->Interpolation,3,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseScales @ 14745d970

void __thiscall
AEFVariableKeyLerp<4>::GetPoseScales
          (AEFVariableKeyLerp<4> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 pIVar3->CompressedNumberOfKeys,(float)dVar11,param_3->Interpolation,4,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseScales @ 14745db60

void __thiscall
AEFVariableKeyLerp<5>::GetPoseScales
          (AEFVariableKeyLerp<5> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 pIVar3->CompressedNumberOfKeys,(float)dVar11,param_3->Interpolation,5,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomScale(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseScales @ 14745dd50

void __thiscall
AEFVariableKeyLerp<6>::GetPoseScales
          (AEFVariableKeyLerp<6> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  int iVar2;
  int iVar3;
  ICompressedAnimData *pIVar4;
  FScriptContainerElement *pFVar5;
  TTransform<double> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_88;
  int local_84;
  longlong local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  dVar15 = __real_3ff0000000000000;
  iVar2 = param_2->ArrayNum;
  local_80 = (longlong)iVar2;
  if (iVar2 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar4 = param_3->CompressedAnimData;
      dVar15 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar15) {
        dVar15 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar4[2]._padding_,
                 (int)pIVar4[3]._padding_,*(undefined8 *)&pIVar4[3].CompressedNumberOfKeys,
                 pIVar4->CompressedNumberOfKeys,(float)dVar15,param_3->Interpolation,6,iVar2);
      return;
    }
    uVar12 = 0;
    if (0 < local_80) {
      lVar13 = 0;
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
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        uVar9 = *(uint *)(pFVar5 + lVar13 * 8);
        iVar2 = *(int *)(pFVar5 + lVar13 * 8 + 4);
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
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar6 = param_1->DataPtr;
        pIVar4 = param_3->CompressedAnimData;
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar4 + 2),iVar2 * (int)pIVar4[3]._padding_);
        iVar3 = *piVar11;
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar4 + 2),
                             iVar2 * (int)pIVar4[3]._padding_ + 1);
        dVar16 = ((double)(param_3->SamplingTime).FrameNumber.Value +
                 (double)(param_3->SamplingTime).SubFrame) / (double)param_3->NumberOfFrames;
        if (dVar15 <= dVar16) {
          dVar16 = dVar15;
        }
        AnimEncoding::TimeToIndex
                  (param_3->Interpolation,pIVar4->CompressedNumberOfKeys,
                   (uchar *)(*(longlong *)&pIVar4[3].CompressedNumberOfKeys + 3 + (longlong)iVar3 &
                            0xfffffffffffffffc),(float)dVar16,*piVar11,&local_84,&local_88);
        dVar16 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        if (local_84 == local_88) {
          local_60 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          dStack_58 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_50 = dVar16;
        }
        else {
          local_78 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          dStack_70 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_68 = dVar16;
        }
        dVar14 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        pVVar1 = &pTVar6[(int)uVar9].Scale3D;
        (pVVar1->XY).m128d_f64[0] = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        (pVVar1->XY).m128d_f64[1] = dVar14;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 1;
        pVVar1 = &pTVar6[(int)uVar9].Scale3D;
        (pVVar1->ZW).m128d_f64[0] = dVar16;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar13 < local_80);
    }
  }
  return;
}

// GetPoseScales @ 14745e080

void __thiscall
AEFVariableKeyLerp<0>::GetPoseScales
          (AEFVariableKeyLerp<0> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  ICompressedAnimData *pIVar6;
  FScriptContainerElement *pFVar7;
  TTransform<double> *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  dVar19 = __real_3ff0000000000000;
  iVar3 = param_2->ArrayNum;
  local_a0 = (longlong)iVar3;
  if (iVar3 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar6 = param_3->CompressedAnimData;
      dVar19 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar19) {
        dVar19 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar6[2]._padding_,
                 (int)pIVar6[3]._padding_,*(undefined8 *)&pIVar6[3].CompressedNumberOfKeys,
                 pIVar6->CompressedNumberOfKeys,(float)dVar19,param_3->Interpolation,0,iVar3);
      return;
    }
    uVar15 = 0;
    if (0 < local_a0) {
      lVar16 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        iVar3 = *(int *)(pFVar7 + lVar16 * 8 + 4);
        uVar11 = *(uint *)(pFVar7 + lVar16 * 8);
        uVar12 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar8 = param_1->DataPtr;
        pIVar6 = param_3->CompressedAnimData;
        piVar13 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar6 + 2),iVar3 * (int)pIVar6[3]._padding_);
        iVar4 = *piVar13;
        piVar13 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)(pIVar6 + 2),
                             iVar3 * (int)pIVar6[3]._padding_ + 1);
        lVar14 = *(longlong *)&pIVar6[3].CompressedNumberOfKeys + (longlong)iVar4;
        dVar20 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar19 <= dVar20) {
          dVar20 = dVar19;
        }
        fVar17 = AnimEncoding::TimeToIndex
                           (param_3->Interpolation,pIVar6->CompressedNumberOfKeys,
                            (uchar *)((longlong)(*piVar13 * 0xc) + 3 + lVar14 & 0xfffffffffffffffc),
                            (float)dVar20,*piVar13,&local_a8,&local_a4);
        if (local_a8 == local_a4) {
          local_88 = *(undefined8 *)(local_a8 * 0xc + lVar14);
          dVar21 = (double)(float)((ulonglong)local_88 >> 0x20);
          dVar20 = (double)(float)local_88;
          dVar18 = (double)*(float *)((longlong)(local_a8 * 0xc) + 8 + lVar14);
          local_60 = dVar20;
          dStack_58 = dVar21;
          local_50 = dVar18;
        }
        else {
          uVar2 = *(undefined8 *)(local_a8 * 0xc + lVar14);
          fVar5 = *(float *)((longlong)(local_a8 * 0xc) + 8 + lVar14);
          local_88 = *(undefined8 *)(local_a4 * 0xc + lVar14);
          local_98._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          dVar20 = (double)(((float)local_88 - (float)uVar2) * fVar17 + (float)uVar2);
          dVar21 = (double)(((float)((ulonglong)local_88 >> 0x20) - local_98._4_4_) * fVar17 +
                           local_98._4_4_);
          dVar18 = (double)((*(float *)((longlong)(local_a4 * 0xc) + 8 + lVar14) - fVar5) * fVar17 +
                           fVar5);
          local_98 = uVar2;
          local_78 = dVar20;
          dStack_70 = dVar21;
          local_68 = dVar18;
        }
        pVVar1 = &pTVar8[(int)uVar11].Scale3D;
        (pVVar1->XY).m128d_f64[0] = dVar20;
        (pVVar1->XY).m128d_f64[1] = dVar21;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 1;
        pVVar1 = &pTVar8[(int)uVar11].Scale3D;
        (pVVar1->ZW).m128d_f64[0] = dVar18;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar16 < local_a0);
    }
  }
  return;
}

// GetPoseTranslations @ 147460500

void __thiscall
AEFVariableKeyLerp<1>::GetPoseTranslations
          (AEFVariableKeyLerp<1> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  ICompressedAnimData *pIVar5;
  FScriptContainerElement *pFVar6;
  TTransform<double> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int local_res18 [2];
  int local_98 [2];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  dVar17 = __real_3ff0000000000000;
  iVar3 = param_2->ArrayNum;
  local_90 = (longlong)iVar3;
  if (iVar3 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar5 = param_3->CompressedAnimData;
      dVar17 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar5[1]._padding_,
                 *(undefined8 *)&pIVar5[3].CompressedNumberOfKeys,pIVar5->CompressedNumberOfKeys,
                 (float)dVar17,param_3->Interpolation,1,iVar3);
      return;
    }
    uVar13 = 0;
    if (0 < local_90) {
      lVar14 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (param_2->AllocatorInstance).Data;
        uVar10 = *(uint *)(pFVar6 + lVar14 * 8);
        iVar3 = *(int *)(pFVar6 + lVar14 * 8 + 4);
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
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pIVar5 = param_3->CompressedAnimData;
        pTVar7 = param_1->DataPtr;
        lVar12 = (longlong)(iVar3 * 4);
        iVar3 = *(int *)(pIVar5[1]._padding_ + 4 + lVar12 * 4);
        lVar12 = *(longlong *)&pIVar5[3].CompressedNumberOfKeys +
                 (longlong)*(int *)(pIVar5[1]._padding_ + lVar12 * 4);
        dVar18 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar17 <= dVar18) {
          dVar18 = dVar17;
        }
        fVar15 = AnimEncoding::TimeToIndex
                           (param_3->Interpolation,pIVar5->CompressedNumberOfKeys,
                            (uchar *)((longlong)(iVar3 * 0xc) + 3 + lVar12 & 0xfffffffffffffffc),
                            (float)dVar18,iVar3,local_res18,local_98);
        if (local_res18[0] == local_98[0]) {
          local_78 = *(undefined8 *)(local_res18[0] * 0xc + lVar12);
          dVar19 = (double)(float)((ulonglong)local_78 >> 0x20);
          dVar18 = (double)(float)local_78;
          dVar16 = (double)*(float *)((longlong)(local_res18[0] * 0xc) + 8 + lVar12);
          local_50 = dVar18;
          dStack_48 = dVar19;
          local_40 = dVar16;
        }
        else {
          uVar2 = *(undefined8 *)(local_res18[0] * 0xc + lVar12);
          fVar4 = *(float *)((longlong)(local_res18[0] * 0xc) + 8 + lVar12);
          local_78 = *(undefined8 *)(local_98[0] * 0xc + lVar12);
          local_88._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          dVar18 = (double)(((float)local_78 - (float)uVar2) * fVar15 + (float)uVar2);
          dVar19 = (double)(((float)((ulonglong)local_78 >> 0x20) - local_88._4_4_) * fVar15 +
                           local_88._4_4_);
          dVar16 = (double)((*(float *)((longlong)(local_98[0] * 0xc) + 8 + lVar12) - fVar4) *
                            fVar15 + fVar4);
          local_88 = uVar2;
          local_68 = dVar18;
          dStack_60 = dVar19;
          local_58 = dVar16;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        pVVar1 = &pTVar7[(int)uVar10].Translation;
        (pVVar1->XY).m128d_f64[0] = dVar18;
        (pVVar1->XY).m128d_f64[1] = dVar19;
        pVVar1 = &pTVar7[(int)uVar10].Translation;
        (pVVar1->ZW).m128d_f64[0] = dVar16;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar14 < local_90);
    }
  }
  return;
}

// GetPoseTranslations @ 147460880

void __thiscall
AEFVariableKeyLerp<2>::GetPoseTranslations
          (AEFVariableKeyLerp<2> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,2,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomTranslation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseTranslations @ 147460a50

void __thiscall
AEFVariableKeyLerp<3>::GetPoseTranslations
          (AEFVariableKeyLerp<3> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
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
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar11,param_3->Interpolation,3,iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
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
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
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
        GetBoneAtomTranslation(this,param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseTranslations @ 147460c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFVariableKeyLerp<4>::GetPoseTranslations
          (AEFVariableKeyLerp<4> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int local_res18 [2];
  int local_b8 [2];
  longlong local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  
  dVar18 = __real_3ff0000000000000;
  iVar2 = param_2->ArrayNum;
  local_b0 = (longlong)iVar2;
  if (iVar2 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar18 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar18) {
        dVar18 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar18,param_3->Interpolation,4,iVar2);
      return;
    }
    uVar13 = 0;
    if (0 < local_b0) {
      lVar14 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar11 = *(uint *)(pFVar4 + lVar14 * 8);
        iVar2 = *(int *)(pFVar4 + lVar14 * 8 + 4);
        uVar12 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pIVar3 = param_3->CompressedAnimData;
        pTVar5 = param_1->DataPtr;
        lVar15 = (longlong)(iVar2 * 4);
        iVar2 = *(int *)(pIVar3[1]._padding_ + 4 + lVar15 * 4);
        dVar19 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar18 <= dVar19) {
          dVar19 = dVar18;
        }
        fVar16 = AnimEncoding::TimeToIndex
                           (param_3->Interpolation,pIVar3->CompressedNumberOfKeys,
                            (uchar *)((longlong)*(int *)(pIVar3[1]._padding_ + lVar15 * 4) +
                                      (longlong)(iVar2 * 0xc) + 3 +
                                      *(longlong *)&pIVar3[3].CompressedNumberOfKeys &
                                     0xfffffffffffffffc),(float)dVar19,iVar2,local_b8,local_res18);
        if (local_b8[0] == local_res18[0]) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                      ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          dVar19 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          dVar20 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          dVar17 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_90 = dVar20;
          dStack_88 = dVar17;
          local_80 = dVar19;
        }
        else {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                      ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`void___cdecl_DecompressTranslation<4,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                      ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          dVar20 = (double)((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar7)
                            * fVar16 + (float)uVar7);
          dVar19 = (double)((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar9)
                            * fVar16 + (float)uVar9);
          dVar17 = (double)((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar8)
                            * fVar16 + (float)uVar8);
          local_a8 = dVar20;
          dStack_a0 = dVar17;
          local_98 = dVar19;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        pVVar1 = &pTVar5[(int)uVar11].Translation;
        (pVVar1->XY).m128d_f64[0] = dVar20;
        (pVVar1->XY).m128d_f64[1] = dVar17;
        pVVar1 = &pTVar5[(int)uVar11].Translation;
        (pVVar1->ZW).m128d_f64[0] = dVar19;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar14 < local_b0);
    }
  }
  return;
}

// GetPoseTranslations @ 147460ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AEFVariableKeyLerp<5>::GetPoseTranslations
          (AEFVariableKeyLerp<5> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int local_res18 [2];
  int local_b8 [2];
  longlong local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  
  dVar18 = __real_3ff0000000000000;
  iVar2 = param_2->ArrayNum;
  local_b0 = (longlong)iVar2;
  if (iVar2 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar3 = param_3->CompressedAnimData;
      dVar18 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar18) {
        dVar18 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 (float)dVar18,param_3->Interpolation,5,iVar2);
      return;
    }
    uVar13 = 0;
    if (0 < local_b0) {
      lVar14 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar11 = *(uint *)(pFVar4 + lVar14 * 8);
        iVar2 = *(int *)(pFVar4 + lVar14 * 8 + 4);
        uVar12 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pIVar3 = param_3->CompressedAnimData;
        pTVar5 = param_1->DataPtr;
        lVar15 = (longlong)(iVar2 * 4);
        iVar2 = *(int *)(pIVar3[1]._padding_ + 4 + lVar15 * 4);
        dVar19 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar18 <= dVar19) {
          dVar19 = dVar18;
        }
        fVar16 = AnimEncoding::TimeToIndex
                           (param_3->Interpolation,pIVar3->CompressedNumberOfKeys,
                            (uchar *)((longlong)*(int *)(pIVar3[1]._padding_ + lVar15 * 4) +
                                      (longlong)(iVar2 * 0xc) + 3 +
                                      *(longlong *)&pIVar3[3].CompressedNumberOfKeys &
                                     0xfffffffffffffffc),(float)dVar19,iVar2,local_b8,local_res18);
        if (local_b8[0] == local_res18[0]) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                      ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          dVar19 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          dVar20 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          dVar17 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_90 = dVar20;
          dStack_88 = dVar17;
          local_80 = dVar19;
        }
        else {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                      ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`void___cdecl_DecompressTranslation<5,1>(UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                      ::__l20::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          dVar20 = (double)((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X - (float)uVar7)
                            * fVar16 + (float)uVar7);
          dVar19 = (double)((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z - (float)uVar9)
                            * fVar16 + (float)uVar9);
          dVar17 = (double)((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y - (float)uVar8)
                            * fVar16 + (float)uVar8);
          local_a8 = dVar20;
          dStack_a0 = dVar17;
          local_98 = dVar19;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        pVVar1 = &pTVar5[(int)uVar11].Translation;
        (pVVar1->XY).m128d_f64[0] = dVar20;
        (pVVar1->XY).m128d_f64[1] = dVar17;
        pVVar1 = &pTVar5[(int)uVar11].Translation;
        (pVVar1->ZW).m128d_f64[0] = dVar19;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar14 < local_b0);
    }
  }
  return;
}

// GetPoseTranslations @ 1474613c0

void __thiscall
AEFVariableKeyLerp<6>::GetPoseTranslations
          (AEFVariableKeyLerp<6> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  int iVar2;
  int iVar3;
  ICompressedAnimData *pIVar4;
  FScriptContainerElement *pFVar5;
  TTransform<double> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_res18 [4];
  int local_88 [2];
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  
  dVar15 = __real_3ff0000000000000;
  iVar2 = param_2->ArrayNum;
  if (iVar2 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar4 = param_3->CompressedAnimData;
      dVar15 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar15) {
        dVar15 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar4[1]._padding_,
                 *(undefined8 *)&pIVar4[3].CompressedNumberOfKeys,pIVar4->CompressedNumberOfKeys,
                 (float)dVar15,param_3->Interpolation,6,iVar2);
      return;
    }
    uVar11 = 0;
    if (0 < iVar2) {
      lVar12 = 0;
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
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        uVar9 = *(uint *)(pFVar5 + lVar12 * 8);
        iVar3 = *(int *)(pFVar5 + lVar12 * 8 + 4);
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
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pIVar4 = param_3->CompressedAnimData;
        pTVar6 = param_1->DataPtr;
        lVar13 = (longlong)(iVar3 * 4);
        dVar16 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar15 <= dVar16) {
          dVar16 = dVar15;
        }
        AnimEncoding::TimeToIndex
                  (param_3->Interpolation,pIVar4->CompressedNumberOfKeys,
                   (uchar *)((longlong)*(int *)(pIVar4[1]._padding_ + lVar13 * 4) +
                             *(longlong *)&pIVar4[3].CompressedNumberOfKeys + 3 & 0xfffffffffffffffc
                            ),(float)dVar16,*(int *)(pIVar4[1]._padding_ + 4 + lVar13 * 4),local_88,
                   local_res18);
        dVar16 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        if (local_88[0] == local_res18[0]) {
          local_68 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          dStack_60 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_58 = dVar16;
        }
        else {
          local_80 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          dStack_78 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_70 = dVar16;
        }
        dVar14 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        pVVar1 = &pTVar6[(int)uVar9].Translation;
        (pVVar1->XY).m128d_f64[0] = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        (pVVar1->XY).m128d_f64[1] = dVar14;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 1;
        pVVar1 = &pTVar6[(int)uVar9].Translation;
        (pVVar1->ZW).m128d_f64[0] = dVar16;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar12 < iVar2);
    }
  }
  return;
}

// GetPoseTranslations @ 1474616b0

void __thiscall
AEFVariableKeyLerp<0>::GetPoseTranslations
          (AEFVariableKeyLerp<0> *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  VectorRegister4Double *pVVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  ICompressedAnimData *pIVar5;
  FScriptContainerElement *pFVar6;
  TTransform<double> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int local_res18 [2];
  int local_98 [2];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  dVar17 = __real_3ff0000000000000;
  iVar3 = param_2->ArrayNum;
  local_90 = (longlong)iVar3;
  if (iVar3 != 0) {
    if (bAnim_VariableKeyLerp_ISPC_Enabled) {
      pIVar5 = param_3->CompressedAnimData;
      dVar17 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000;
      }
      GetVariableKeyLerpPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar5[1]._padding_,
                 *(undefined8 *)&pIVar5[3].CompressedNumberOfKeys,pIVar5->CompressedNumberOfKeys,
                 (float)dVar17,param_3->Interpolation,0,iVar3);
      return;
    }
    uVar13 = 0;
    if (0 < local_90) {
      lVar14 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (param_2->AllocatorInstance).Data;
        uVar10 = *(uint *)(pFVar6 + lVar14 * 8);
        iVar3 = *(int *)(pFVar6 + lVar14 * 8 + 4);
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
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pIVar5 = param_3->CompressedAnimData;
        pTVar7 = param_1->DataPtr;
        lVar12 = (longlong)(iVar3 * 4);
        iVar3 = *(int *)(pIVar5[1]._padding_ + 4 + lVar12 * 4);
        lVar12 = *(longlong *)&pIVar5[3].CompressedNumberOfKeys +
                 (longlong)*(int *)(pIVar5[1]._padding_ + lVar12 * 4);
        dVar18 = ((double)(param_3->SamplingTime).SubFrame +
                 (double)(param_3->SamplingTime).FrameNumber.Value) /
                 (double)param_3->NumberOfFrames;
        if (dVar17 <= dVar18) {
          dVar18 = dVar17;
        }
        fVar15 = AnimEncoding::TimeToIndex
                           (param_3->Interpolation,pIVar5->CompressedNumberOfKeys,
                            (uchar *)((longlong)(iVar3 * 0xc) + 3 + lVar12 & 0xfffffffffffffffc),
                            (float)dVar18,iVar3,local_res18,local_98);
        if (local_res18[0] == local_98[0]) {
          local_78 = *(undefined8 *)(local_res18[0] * 0xc + lVar12);
          dVar19 = (double)(float)((ulonglong)local_78 >> 0x20);
          dVar18 = (double)(float)local_78;
          dVar16 = (double)*(float *)((longlong)(local_res18[0] * 0xc) + 8 + lVar12);
          local_50 = dVar18;
          dStack_48 = dVar19;
          local_40 = dVar16;
        }
        else {
          uVar2 = *(undefined8 *)(local_res18[0] * 0xc + lVar12);
          fVar4 = *(float *)((longlong)(local_res18[0] * 0xc) + 8 + lVar12);
          local_78 = *(undefined8 *)(local_98[0] * 0xc + lVar12);
          local_88._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          dVar18 = (double)(((float)local_78 - (float)uVar2) * fVar15 + (float)uVar2);
          dVar19 = (double)(((float)((ulonglong)local_78 >> 0x20) - local_88._4_4_) * fVar15 +
                           local_88._4_4_);
          dVar16 = (double)((*(float *)((longlong)(local_98[0] * 0xc) + 8 + lVar12) - fVar4) *
                            fVar15 + fVar4);
          local_88 = uVar2;
          local_68 = dVar18;
          dStack_60 = dVar19;
          local_58 = dVar16;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        pVVar1 = &pTVar7[(int)uVar10].Translation;
        (pVVar1->XY).m128d_f64[0] = dVar18;
        (pVVar1->XY).m128d_f64[1] = dVar19;
        pVVar1 = &pTVar7[(int)uVar10].Translation;
        (pVVar1->ZW).m128d_f64[0] = dVar16;
        (pVVar1->ZW).m128d_f64[1] = 0.0;
      } while (lVar14 < local_90);
    }
  }
  return;
}

