// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 77

// ClosestPointOnLine<float> @ 141788db0

TVector<float> * __cdecl
FMath::ClosestPointOnLine<float>
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar6 = (((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) * fVar4 +
           ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * fVar3 +
          ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) * fVar5) /
          (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6 * fVar5 + (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar6 * fVar3 + fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar6 * fVar4 + fVar2;
  return __return_storage_ptr__;
}

// ClosestPointOnLine<double> @ 141788e80

TVector<double> * __cdecl
FMath::ClosestPointOnLine<double>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar3 = (((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) * dVar5 +
           ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * dVar4 +
          ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) * dVar6) /
          (dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6);
  if (__real_3ff0000000000000 <= dVar3) {
    dVar3 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar6 + (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 * dVar4 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 * dVar5 + dVar2;
  return __return_storage_ptr__;
}

// ClosestPointOnSegment2D<float> @ 141788f50

TVector2<float> __cdecl
FMath::ClosestPointOnSegment2D<float>
          (TVector2<float> *param_1,TVector2<float> *param_2,TVector2<float> *param_3)

{
  float fVar1;
  TVector2<float>_u_0_s_0 *in_R9;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_3->field0_0x0)._s_0.X;
  fVar4 = in_R9->X - fVar1;
  fVar5 = in_R9->Y - (param_3->field0_0x0)._s_0.Y;
  fVar2 = ((param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) * fVar5 +
          ((param_2->field0_0x0)._s_0.X - fVar1) * fVar4;
  if (fVar2 <= 0.0) {
    param_1->field0_0x0 = param_3->field0_0x0;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  fVar3 = fVar4 * fVar4 + fVar5 * fVar5;
  if (fVar3 <= fVar2) {
    (param_1->field0_0x0)._s_0 = *in_R9;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  fVar2 = fVar2 / fVar3;
  (param_1->field0_0x0)._s_0.Y = fVar2 * fVar5 + (param_3->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = fVar2 * fVar4 + fVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// ClosestPointOnSegment2D<double> @ 141788ff0

TVector2<double> * __cdecl
FMath::ClosestPointOnSegment2D<double>
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.X - dVar1;
  dVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = ((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) * dVar5 +
          ((param_1->field0_0x0)._s_0.X - dVar1) * dVar4;
  if (dVar2 <= 0.0) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  dVar3 = dVar4 * dVar4 + dVar5 * dVar5;
  if (dVar3 <= dVar2) {
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  dVar2 = dVar2 / dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar5 + (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * dVar4 + dVar1;
  return __return_storage_ptr__;
}

// ClosestPointOnSegment<float> @ 141789090

TVector<float> * __cdecl
FMath::ClosestPointOnSegment<float>
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  fVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  fVar6 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  fVar2 = ((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) * fVar5 +
          ((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) * fVar4 +
          ((param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) * fVar6;
  if (fVar2 <= 0.0) {
    fVar2 = (param_2->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
    return __return_storage_ptr__;
  }
  fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  if (fVar3 <= fVar2) {
    fVar2 = (param_3->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
    return __return_storage_ptr__;
  }
  fVar2 = fVar2 / fVar3;
  fVar3 = (param_2->field0_0x0)._s_0.X;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar6 + (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2 * fVar4 + fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 * fVar5 + fVar1;
  return __return_storage_ptr__;
}

// ClosestPointOnSegment<double> @ 1417891a0

TVector<double> * __cdecl
FMath::ClosestPointOnSegment<double>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar2 = ((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) * dVar5 +
          ((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) * dVar4 +
          ((param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) * dVar1;
  if (dVar2 <= 0.0) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  dVar3 = dVar4 * dVar4 + dVar5 * dVar5 + dVar1 * dVar1;
  if (dVar3 <= dVar2) {
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  dVar2 = dVar2 / dVar3;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 * dVar1 + (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * dVar4 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar5 + dVar1;
  return __return_storage_ptr__;
}

// QInterpConstantTo<float> @ 141798950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
FMath::QInterpConstantTo<float>
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined4 in_EAX;
  int iVar8;
  TQuat<float> *pTVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  TQuat<float> local_48 [4];
  
  if (0.0 < param_4) {
    auVar12._4_4_ =
         -(uint)(_UNK_1506895e4 < (float)((uint)(param_1->Y - param_2->Y) & _UNK_15061cc74));
    auVar12._0_4_ =
         -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                (float)((uint)(param_1->X - param_2->X) & __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar12._8_4_ =
         -(uint)(_UNK_1506895e8 < (float)((uint)(param_1->Z - param_2->Z) & _UNK_15061cc78));
    auVar12._12_4_ =
         -(uint)(_UNK_1506895ec < (float)((uint)(param_1->W - param_2->W) & _UNK_15061cc7c));
    iVar8 = movmskps(in_EAX,auVar12);
    if ((iVar8 != 0) &&
       (auVar17._4_4_ =
             -(uint)(_UNK_1506895e4 < (float)((uint)(param_2->Y + param_1->Y) & _UNK_15061cc74)),
       auVar17._0_4_ =
            -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                   (float)((uint)(param_2->X + param_1->X) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                   ),
       auVar17._8_4_ =
            -(uint)(_UNK_1506895e8 < (float)((uint)(param_2->Z + param_1->Z) & _UNK_15061cc78)),
       auVar17._12_4_ =
            -(uint)(_UNK_1506895ec < (float)((uint)(param_2->W + param_1->W) & _UNK_15061cc7c)),
       iVar8 = movmskps(iVar8,auVar17), iVar8 != 0)) {
      fVar18 = param_3 * param_4;
      if (__real_3f800000 <= param_3 * param_4) {
        fVar18 = __real_3f800000;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar10 = UE::Math::TQuat<float>::AngularDistance(param_2,param_1);
      if (fVar10 <= __real_322bcc77) {
        fVar10 = __real_322bcc77;
      }
      fVar19 = fVar18 / fVar10;
      if (__real_3f800000 <= fVar18 / fVar10) {
        fVar19 = __real_3f800000;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      pTVar9 = UE::Math::TQuat<float>::Slerp_NotNormalized(local_48,param_1,param_2,fVar19);
      fVar18 = pTVar9->X;
      fVar10 = pTVar9->Y;
      fVar19 = pTVar9->Z;
      fVar7 = pTVar9->W;
      fVar13 = fVar10 * fVar10 + fVar18 * fVar18;
      fVar14 = fVar18 * fVar18 + fVar10 * fVar10;
      fVar15 = fVar7 * fVar7 + fVar19 * fVar19;
      fVar16 = fVar19 * fVar19 + fVar7 * fVar7;
      auVar11._0_4_ = fVar15 + fVar13;
      auVar11._4_4_ = fVar16 + fVar14;
      auVar11._8_4_ = fVar13 + fVar15;
      auVar11._12_4_ = fVar14 + fVar16;
      bVar4 = _UNK_1506895d4 <= auVar11._4_4_;
      bVar5 = _UNK_1506895d8 <= auVar11._8_4_;
      bVar6 = _UNK_1506895dc <= auVar11._12_4_;
      auVar12 = sqrtps(auVar11,auVar11);
      auVar12 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
      uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
      __return_storage_ptr__->X =
           (float)((uint)(auVar12._0_4_ * fVar18) &
                   -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar11._0_4_) |
                  ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar11._0_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[0]);
      __return_storage_ptr__->Y =
           (float)((uint)(auVar12._4_4_ * fVar10) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1);
      __return_storage_ptr__->Z =
           (float)((uint)(auVar12._8_4_ * fVar19) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
      __return_storage_ptr__->W =
           (float)((uint)(auVar12._12_4_ * fVar7) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
      return __return_storage_ptr__;
    }
  }
  fVar18 = param_2->Y;
  fVar10 = param_2->Z;
  fVar19 = param_2->W;
  __return_storage_ptr__->X = param_2->X;
  __return_storage_ptr__->Y = fVar18;
  __return_storage_ptr__->Z = fVar10;
  __return_storage_ptr__->W = fVar19;
  return __return_storage_ptr__;
}

// QInterpConstantTo<double> @ 141798aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
FMath::QInterpConstantTo<double>
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          float param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  ulonglong uVar7;
  uint uVar8;
  TQuat<double> *pTVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar20;
  undefined1 auVar17 [16];
  double dVar16;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  TQuat<double> local_78 [3];
  
  if (0.0 < param_4) {
    dVar4 = param_2->Z + param_1->Z;
    dVar5 = param_2->W + param_1->W;
    dVar15 = param_1->Z - param_2->Z;
    dVar20 = param_1->W - param_2->W;
    dVar3 = param_2->X + param_1->X;
    dVar16 = param_2->Y + param_1->Y;
    dVar22 = param_1->X - param_2->X;
    dVar25 = param_1->Y - param_2->Y;
    auVar17._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar17._8_4_ = SUB84(dVar20,0) & _UNK_15061cc88;
    auVar17._12_4_ = (uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c;
    auVar23._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar23._8_4_ = SUB84(dVar25,0) & _UNK_15061cc88;
    auVar23._12_4_ = (uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c;
    lVar13 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar17._8_8_);
    auVar24._8_4_ = (int)lVar13;
    auVar24._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar17._0_8_);
    auVar24._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar10 = movmskpd((int)__return_storage_ptr__,auVar24);
    lVar13 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar23._8_8_);
    auVar27._8_4_ = (int)lVar13;
    auVar27._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar23._0_8_);
    auVar27._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar8 = movmskpd((int)&stack0x00000000,auVar27);
    uVar11 = iVar10 << 2 | uVar8;
    if (uVar11 != 0) {
      lVar13 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar5,0) & _UNK_15061cc88));
      auVar1._8_4_ = (int)lVar13;
      auVar1._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar11 = movmskpd(uVar11,auVar1);
      auVar26._8_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
      auVar26._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      iVar10 = movmskpd(uVar8,auVar26);
      if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
        fVar29 = param_3 * param_4;
        if (__real_3f800000 <= param_3 * param_4) {
          fVar29 = __real_3f800000;
        }
        if (fVar29 <= 0.0) {
          fVar29 = 0.0;
        }
        dVar3 = UE::Math::TQuat<double>::AngularDistance(param_2,param_1);
        fVar6 = (float)dVar3;
        if ((float)dVar3 <= __real_322bcc77) {
          fVar6 = __real_322bcc77;
        }
        fVar30 = fVar29 / fVar6;
        if (__real_3f800000 <= fVar29 / fVar6) {
          fVar30 = __real_3f800000;
        }
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        pTVar9 = UE::Math::TQuat<double>::Slerp_NotNormalized
                           (local_78,param_1,param_2,(double)fVar30);
        dVar22 = __real_3e45798ee0000000;
        dVar3 = pTVar9->Y;
        __return_storage_ptr__->X = pTVar9->X;
        __return_storage_ptr__->Y = dVar3;
        dVar4 = pTVar9->Z;
        dVar5 = pTVar9->W;
        __return_storage_ptr__->Z = dVar4;
        __return_storage_ptr__->W = dVar5;
        dVar15 = __return_storage_ptr__->X;
        dVar20 = __return_storage_ptr__->Y;
        dVar16 = dVar4 * dVar4 + dVar15 * dVar15;
        dVar25 = dVar5 * dVar5 + dVar20 * dVar20;
        dVar3 = dVar25 + dVar16;
        dVar16 = dVar16 + dVar25;
        auVar2._8_4_ = SUB84(dVar16,0);
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        auVar24 = sqrtpd(auVar23,auVar2);
        uVar12 = -(ulonglong)(dVar22 <= dVar3);
        uVar14 = -(ulonglong)(dVar22 <= dVar16);
        uVar8 = (uint)(uVar12 >> 0x20);
        uVar11 = (uint)(uVar14 >> 0x20);
        auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
        auVar28._0_8_ = uVar12 & (ulonglong)(auVar27._0_8_ * dVar15);
        uVar7 = uVar14 & (ulonglong)(auVar27._8_8_ * dVar20);
        auVar28._8_4_ = (undefined4)uVar7;
        auVar28._12_4_ = (undefined4)(uVar7 >> 0x20);
        auVar18._0_4_ =
             ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar18._4_4_ =
             ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                            );
        auVar18._8_4_ =
             ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar18._12_4_ =
             ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
        auVar21._0_4_ =
             ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar21._4_4_ =
             ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                            );
        auVar21._8_4_ =
             ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar21._12_4_ =
             ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        __return_storage_ptr__->X = (double)SUB168(auVar28 | auVar18,0);
        __return_storage_ptr__->Y = (double)SUB168(auVar28 | auVar18,8);
        auVar19._0_8_ = (ulonglong)(auVar24._0_8_ * dVar4) & uVar12;
        uVar14 = (ulonglong)(auVar24._8_8_ * dVar5) & uVar14;
        auVar19._8_4_ = (undefined4)uVar14;
        auVar19._12_4_ = (undefined4)(uVar14 >> 0x20);
        __return_storage_ptr__->Z = (double)SUB168(auVar21 | auVar19,0);
        __return_storage_ptr__->W = (double)SUB168(auVar21 | auVar19,8);
        return __return_storage_ptr__;
      }
    }
  }
  dVar3 = param_2->Y;
  __return_storage_ptr__->X = param_2->X;
  __return_storage_ptr__->Y = dVar3;
  dVar3 = param_2->W;
  __return_storage_ptr__->Z = param_2->Z;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// QInterpTo<float> @ 141798cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
FMath::QInterpTo<float>
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_EAX;
  int iVar10;
  TQuat<float> *pTVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  TQuat<float> local_48 [4];
  
  if (0.0 < param_4) {
    auVar13._4_4_ =
         -(uint)(_UNK_1506895e4 < (float)((uint)(param_1->Y - param_2->Y) & _UNK_15061cc74));
    auVar13._0_4_ =
         -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                (float)((uint)(param_1->X - param_2->X) & __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar13._8_4_ =
         -(uint)(_UNK_1506895e8 < (float)((uint)(param_1->Z - param_2->Z) & _UNK_15061cc78));
    auVar13._12_4_ =
         -(uint)(_UNK_1506895ec < (float)((uint)(param_1->W - param_2->W) & _UNK_15061cc7c));
    iVar10 = movmskps(in_EAX,auVar13);
    if ((iVar10 != 0) &&
       (auVar18._4_4_ =
             -(uint)(_UNK_1506895e4 < (float)((uint)(param_2->Y + param_1->Y) & _UNK_15061cc74)),
       auVar18._0_4_ =
            -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                   (float)((uint)(param_2->X + param_1->X) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                   ),
       auVar18._8_4_ =
            -(uint)(_UNK_1506895e8 < (float)((uint)(param_2->Z + param_1->Z) & _UNK_15061cc78)),
       auVar18._12_4_ =
            -(uint)(_UNK_1506895ec < (float)((uint)(param_2->W + param_1->W) & _UNK_15061cc7c)),
       iVar10 = movmskps(iVar10,auVar18), iVar10 != 0)) {
      fVar19 = param_3 * param_4;
      if (__real_3f800000 <= param_3 * param_4) {
        fVar19 = __real_3f800000;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      pTVar11 = UE::Math::TQuat<float>::Slerp_NotNormalized(local_48,param_1,param_2,fVar19);
      fVar19 = pTVar11->X;
      fVar7 = pTVar11->Y;
      fVar8 = pTVar11->Z;
      fVar9 = pTVar11->W;
      fVar14 = fVar7 * fVar7 + fVar19 * fVar19;
      fVar15 = fVar19 * fVar19 + fVar7 * fVar7;
      fVar16 = fVar9 * fVar9 + fVar8 * fVar8;
      fVar17 = fVar8 * fVar8 + fVar9 * fVar9;
      auVar12._0_4_ = fVar16 + fVar14;
      auVar12._4_4_ = fVar17 + fVar15;
      auVar12._8_4_ = fVar14 + fVar16;
      auVar12._12_4_ = fVar15 + fVar17;
      bVar4 = _UNK_1506895d4 <= auVar12._4_4_;
      bVar5 = _UNK_1506895d8 <= auVar12._8_4_;
      bVar6 = _UNK_1506895dc <= auVar12._12_4_;
      auVar13 = sqrtps(auVar12,auVar12);
      auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
      uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
      __return_storage_ptr__->X =
           (float)((uint)(auVar13._0_4_ * fVar19) &
                   -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) |
                  ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[0]);
      __return_storage_ptr__->Y =
           (float)((uint)(auVar13._4_4_ * fVar7) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1);
      __return_storage_ptr__->Z =
           (float)((uint)(auVar13._8_4_ * fVar8) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
      __return_storage_ptr__->W =
           (float)((uint)(auVar13._12_4_ * fVar9) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
      return __return_storage_ptr__;
    }
  }
  fVar19 = param_2->Y;
  fVar7 = param_2->Z;
  fVar8 = param_2->W;
  __return_storage_ptr__->X = param_2->X;
  __return_storage_ptr__->Y = fVar19;
  __return_storage_ptr__->Z = fVar7;
  __return_storage_ptr__->W = fVar8;
  return __return_storage_ptr__;
}

// QInterpTo<double> @ 141798dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
FMath::QInterpTo<double>
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          float param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  TQuat<double> *pTVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar19;
  undefined1 auVar16 [16];
  double dVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  TQuat<double> local_78 [3];
  
  if (0.0 < param_4) {
    dVar4 = param_2->Z + param_1->Z;
    dVar5 = param_2->W + param_1->W;
    dVar14 = param_1->Z - param_2->Z;
    dVar19 = param_1->W - param_2->W;
    dVar3 = param_2->X + param_1->X;
    dVar15 = param_2->Y + param_1->Y;
    dVar21 = param_1->X - param_2->X;
    dVar24 = param_1->Y - param_2->Y;
    auVar16._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar16._8_4_ = SUB84(dVar19,0) & _UNK_15061cc88;
    auVar16._12_4_ = (uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c;
    auVar22._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar22._8_4_ = SUB84(dVar24,0) & _UNK_15061cc88;
    auVar22._12_4_ = (uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c;
    lVar12 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar16._8_8_);
    auVar23._8_4_ = (int)lVar12;
    auVar23._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar16._0_8_);
    auVar23._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    iVar9 = movmskpd((int)__return_storage_ptr__,auVar23);
    lVar12 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar22._8_8_);
    auVar26._8_4_ = (int)lVar12;
    auVar26._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar22._0_8_);
    auVar26._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar7 = movmskpd((int)&stack0x00000000,auVar26);
    uVar10 = iVar9 << 2 | uVar7;
    if (uVar10 != 0) {
      lVar12 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar5,0) & _UNK_15061cc88));
      auVar1._8_4_ = (int)lVar12;
      auVar1._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar1._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar1);
      auVar25._8_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar15,0) & _UNK_15061cc88));
      auVar25._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      iVar9 = movmskpd(uVar7,auVar25);
      if ((uVar10 & 0x3fffffff) != 0 || iVar9 != 0) {
        fVar28 = param_3 * param_4;
        if (__real_3f800000 <= param_3 * param_4) {
          fVar28 = __real_3f800000;
        }
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        pTVar8 = UE::Math::TQuat<double>::Slerp_NotNormalized
                           (local_78,param_1,param_2,(double)fVar28);
        dVar21 = __real_3e45798ee0000000;
        dVar3 = pTVar8->Y;
        __return_storage_ptr__->X = pTVar8->X;
        __return_storage_ptr__->Y = dVar3;
        dVar4 = pTVar8->Z;
        dVar5 = pTVar8->W;
        __return_storage_ptr__->Z = dVar4;
        __return_storage_ptr__->W = dVar5;
        dVar14 = __return_storage_ptr__->X;
        dVar19 = __return_storage_ptr__->Y;
        dVar15 = dVar4 * dVar4 + dVar14 * dVar14;
        dVar24 = dVar5 * dVar5 + dVar19 * dVar19;
        dVar3 = dVar24 + dVar15;
        dVar15 = dVar15 + dVar24;
        auVar2._8_4_ = SUB84(dVar15,0);
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        auVar23 = sqrtpd(auVar22,auVar2);
        uVar11 = -(ulonglong)(dVar21 <= dVar3);
        uVar13 = -(ulonglong)(dVar21 <= dVar15);
        uVar7 = (uint)(uVar11 >> 0x20);
        uVar10 = (uint)(uVar13 >> 0x20);
        auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
        auVar27._0_8_ = uVar11 & (ulonglong)(auVar26._0_8_ * dVar14);
        uVar6 = uVar13 & (ulonglong)(auVar26._8_8_ * dVar19);
        auVar27._8_4_ = (undefined4)uVar6;
        auVar27._12_4_ = (undefined4)(uVar6 >> 0x20);
        auVar17._0_4_ =
             ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar17._4_4_ =
             ~uVar7 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                            );
        auVar17._8_4_ =
             ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar17._12_4_ =
             ~uVar10 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
        auVar20._0_4_ =
             ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar20._4_4_ =
             ~uVar7 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                            );
        auVar20._8_4_ =
             ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar20._12_4_ =
             ~uVar10 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        __return_storage_ptr__->X = (double)SUB168(auVar27 | auVar17,0);
        __return_storage_ptr__->Y = (double)SUB168(auVar27 | auVar17,8);
        auVar18._0_8_ = (ulonglong)(auVar23._0_8_ * dVar4) & uVar11;
        uVar13 = (ulonglong)(auVar23._8_8_ * dVar5) & uVar13;
        auVar18._8_4_ = (undefined4)uVar13;
        auVar18._12_4_ = (undefined4)(uVar13 >> 0x20);
        __return_storage_ptr__->Z = (double)SUB168(auVar20 | auVar18,0);
        __return_storage_ptr__->W = (double)SUB168(auVar20 | auVar18,8);
        return __return_storage_ptr__;
      }
    }
  }
  dVar3 = param_2->Y;
  __return_storage_ptr__->X = param_2->X;
  __return_storage_ptr__->Y = dVar3;
  dVar3 = param_2->W;
  __return_storage_ptr__->Z = param_2->Z;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// SegmentDistToSegmentSafe<float> @ 141799ad0

void __cdecl
FMath::SegmentDistToSegmentSafe<float>
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3,
          TVector<float> *param_4,TVector<float> *param_5,TVector<float> *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TVector<float>_u_0 local_d8;
  undefined1 local_c8 [28];
  float fStack_ac;
  undefined4 local_a8;
  float local_a4;
  float fStack_a0;
  undefined4 local_9c;
  TVector<float>_u_0 local_98 [12];
  
  uVar1 = local_d8._0_8_;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  fVar6 = (param_1->field0_0x0)._s_0.Z;
  fVar7 = (param_1->field0_0x0)._s_0.X;
  local_c8._24_4_ = (param_2->field0_0x0)._s_0.X - fVar7;
  local_98[0]._0_4_ = fVar7 - (param_3->field0_0x0)._s_0.X;
  local_a4 = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  fStack_a0 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  local_9c = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  fStack_ac = (param_2->field0_0x0)._s_0.Y - fVar5;
  local_98[0]._4_4_ = fVar5 - (param_3->field0_0x0)._s_0.Y;
  local_a8 = (param_2->field0_0x0)._s_0.Z - fVar6;
  local_98[0]._8_4_ = fVar6 - (param_3->field0_0x0)._s_0.Z;
  fVar6 = fStack_ac * fStack_ac + (float)local_c8._24_4_ * (float)local_c8._24_4_ +
          (float)local_a8 * (float)local_a8;
  local_d8._s_0.X = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uVar10 = local_d8._s_0.X;
  fVar5 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if (fVar6 == __real_3f800000) {
    fVar6 = fStack_ac;
    uVar11 = local_c8._24_4_;
    uVar9 = local_a8;
    local_d8._0_8_ = CONCAT44(fStack_ac,local_c8._24_4_);
  }
  else if (__real_322bcc77 <= fVar6) {
    fVar7 = __real_3f800000 / SQRT(fVar6);
    fVar6 = fVar7 * fStack_ac;
    uVar11 = fVar7 * (float)local_c8._24_4_;
    uVar9 = fVar7 * (float)local_a8;
    local_d8._0_8_ = uVar1;
  }
  else {
    local_d8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar6 = fVar5;
    uVar11 = uVar10;
    uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  fVar7 = local_a4 * local_a4 + fStack_a0 * fStack_a0 + (float)local_9c * (float)local_9c;
  if (fVar7 == __real_3f800000) {
    local_d8._0_8_ = CONCAT44(fStack_a0,local_a4);
    fVar5 = fStack_a0;
    uVar10 = local_a4;
    uVar8 = local_9c;
  }
  else if (__real_322bcc77 <= fVar7) {
    fVar7 = __real_3f800000 / SQRT(fVar7);
    fVar5 = fVar7 * fStack_a0;
    uVar10 = fVar7 * local_a4;
    uVar8 = fVar7 * (float)local_9c;
  }
  else {
    local_d8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  if ((((float)uVar11 == 0.0) && (fVar6 == 0.0)) && ((float)uVar9 == 0.0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((((float)uVar10 == 0.0) && (fVar5 == 0.0)) && ((float)uVar8 == 0.0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  if (bVar2) {
    fVar5 = (param_1->field0_0x0)._s_0.Z;
    *(undefined8 *)&param_5->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    (param_5->field0_0x0)._s_0.Z = fVar5;
    if (bVar3) {
      fVar5 = (param_3->field0_0x0)._s_0.Z;
      *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
      (param_6->field0_0x0)._s_0.Z = fVar5;
    }
    else {
      pTVar4 = ClosestPointOnSegment<float>
                         ((TVector<float> *)&local_d8._s_0,param_1,param_3,param_4);
      *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)&pTVar4->field0_0x0;
      (param_6->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
    }
  }
  else if (bVar3) {
    pTVar4 = ClosestPointOnSegment<float>((TVector<float> *)&local_d8._s_0,param_3,param_1,param_2);
    *(undefined8 *)&param_5->field0_0x0 = *(undefined8 *)&pTVar4->field0_0x0;
    uVar1 = *(undefined8 *)&param_3->field0_0x0;
    (param_5->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
    fVar5 = (param_3->field0_0x0)._s_0.Z;
    *(undefined8 *)&param_6->field0_0x0 = uVar1;
    (param_6->field0_0x0)._s_0.Z = fVar5;
  }
  else {
    fVar7 = fVar5 * fVar6 + (float)uVar10 * (float)uVar11 + (float)uVar8 * (float)uVar9;
    local_c8[0] = (fVar5 * fVar5 + (float)uVar10 * (float)uVar10 + (float)uVar8 * (float)uVar8) *
                  (fVar6 * fVar6 + (float)uVar11 * (float)uVar11 + (float)uVar9 * (float)uVar9) -
                  fVar7 * fVar7 < __real_38d1b717;
    SegmentDistToSegment_Solver<float>::Solve
              ((SegmentDistToSegment_Solver<float> *)local_c8,param_5,param_6);
  }
  return;
}

// SegmentDistToSegmentSafe<double> @ 141799e90

void __cdecl
FMath::SegmentDistToSegmentSafe<double>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  double dVar11;
  undefined8 uVar12;
  TVector<double> local_e8;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  undefined8 local_88;
  TVector<double>_u_0 local_80 [5];
  
  dVar11 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  uVar3 = (param_2->field0_0x0)._s_0.Y - dVar1;
  local_80[0]._8_8_ = dVar1 - (param_3->field0_0x0)._s_0.Y;
  local_88 = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  local_b0._0_8_ = (param_2->field0_0x0)._s_0.X - dVar11;
  local_80[0]._0_8_ = dVar11 - (param_3->field0_0x0)._s_0.X;
  local_b0._16_8_ = (param_2->field0_0x0)._s_0.Z - dVar2;
  local_98 = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  uVar12 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  local_80[0]._16_8_ = dVar2 - (param_3->field0_0x0)._s_0.Z;
  dVar11 = (double)uVar3 * (double)uVar3 + (double)local_b0._0_8_ * (double)local_b0._0_8_ +
           (double)local_b0._16_8_ * (double)local_b0._16_8_;
  local_b0._8_8_ = uVar3;
  dStack_90 = (double)uVar12;
  if (dVar11 == __real_3ff0000000000000) {
    local_b0._8_4_ = (int)uVar3;
    local_b0._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    uVar5 = local_b0._0_8_;
    uVar6 = local_b0._16_8_;
    local_e8.field0_0x0._s_0.Z = (double)local_b0._16_8_;
  }
  else if (__real_3e45798ee0000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    uVar5 = (double)local_b0._0_8_ * dVar11;
    uVar3 = (double)uVar3 * dVar11;
    uVar6 = (double)local_b0._16_8_ * dVar11;
  }
  else {
    local_e8.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar11 = local_98 * local_98 + (double)uVar12 * (double)uVar12 +
           (double)local_88 * (double)local_88;
  if (dVar11 == __real_3ff0000000000000) {
    unique0x10000203 = (int)uVar12;
    unique0x10000207 = (int)((ulonglong)uVar12 >> 0x20);
    uVar7 = local_98;
    uVar4 = local_88;
    local_e8.field0_0x0._s_0.Z = (double)local_88;
  }
  else if (__real_3e45798ee0000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    uVar7 = local_98 * dVar11;
    uVar12 = (double)uVar12 * dVar11;
    uVar4 = (double)local_88 * dVar11;
  }
  else {
    local_e8.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  if ((((double)uVar5 == 0.0) && ((double)uVar3 == 0.0)) && ((double)uVar6 == 0.0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((((double)uVar7 == 0.0) && ((double)uVar12 == 0.0)) && ((double)uVar4 == 0.0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  if (bVar8) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar11 = (param_1->field0_0x0)._s_0.Z;
    (param_5->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar1;
    (param_5->field0_0x0)._s_0.Z = dVar11;
    if (!bVar9) {
      pTVar10 = ClosestPointOnSegment<double>(&local_e8,param_1,param_3,param_4);
      dVar11 = (pTVar10->field0_0x0)._s_0.Y;
      (param_6->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar11;
      (param_6->field0_0x0)._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
      return;
    }
  }
  else {
    if (!bVar9) {
      dVar11 = (double)uVar12 * (double)uVar3 + (double)uVar7 * (double)uVar5 +
               (double)uVar4 * (double)uVar6;
      local_c8[0] = ((double)uVar12 * (double)uVar12 + (double)uVar7 * (double)uVar7 +
                    (double)uVar4 * (double)uVar4) *
                    ((double)uVar3 * (double)uVar3 + (double)uVar5 * (double)uVar5 +
                    (double)uVar6 * (double)uVar6) - dVar11 * dVar11 < __real_3f1a36e2e0000000;
      SegmentDistToSegment_Solver<double>::Solve
                ((SegmentDistToSegment_Solver<double> *)local_c8,param_5,param_6);
      return;
    }
    pTVar10 = ClosestPointOnSegment<double>(&local_e8,param_3,param_1,param_2);
    dVar11 = (pTVar10->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar11;
    (param_5->field0_0x0)._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar11 = (param_3->field0_0x0)._s_0.Z;
  (param_6->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (param_6->field0_0x0)._s_0.Y = dVar1;
  (param_6->field0_0x0)._s_0.Z = dVar11;
  return;
}

// SinCos<float> @ 14179ac80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FMath::SinCos<float>(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = __real_3f000000;
  if (param_3 < 0.0) {
    fVar3 = param_3 * __real_3e22f983 - __real_3f000000;
  }
  else {
    fVar3 = param_3 * __real_3e22f983 + __real_3f000000;
  }
  fVar3 = param_3 - (float)(longlong)fVar3 * __real_40c90fdb;
  if (fVar3 <= __real_3fc90fdb) {
    fVar5 = __real_3f800000;
    if (fVar3 < __real_bfc90fdb) {
      fVar3 = __real_c0490fdb - fVar3;
      fVar5 = __real_bf800000;
    }
  }
  else {
    fVar3 = __real_40490fdb - fVar3;
    fVar5 = __real_bf800000;
  }
  fVar4 = fVar3 * fVar3;
  fVar2 = fVar4 * ___real_348bdd11;
  *param_1 = (((((__real_3638b88e - fVar4 * __real_32cd365b) * fVar4 - __real_39500bf1) * fVar4 +
               ___real_3c088886) * fVar4 - __real_3e2aaaab) * fVar4 + __real_3f800000) * fVar3;
  *param_2 = (((((__real_37cfb4c2 - fVar2) * fVar4 - ___real_3ab609aa) * fVar4 + ___real_3d2aaaa3) *
               fVar4 - fVar1) * fVar4 + __real_3f800000) * fVar5;
  return;
}

// Vector2DInterpTo<float> @ 14179b030

TVector2<float> __cdecl
FMath::Vector2DInterpTo<float>
          (TVector2<float> *param_1,TVector2<float> *param_2,float param_3,float param_4)

{
  float fVar1;
  TVector2<float>_u_0_s_0 *in_R8;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_stack_00000028;
  
  if (in_stack_00000028 <= 0.0) {
    (param_1->field0_0x0)._s_0 = *in_R8;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  fVar3 = in_R8->X - (param_2->field0_0x0)._s_0.X;
  fVar4 = in_R8->Y - (param_2->field0_0x0)._s_0.Y;
  if (fVar4 * fVar4 + fVar3 * fVar3 < __real_38d1b717) {
    (param_1->field0_0x0)._s_0 = *in_R8;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  fVar2 = param_4 * in_stack_00000028;
  if (__real_3f800000 <= param_4 * in_stack_00000028) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = (param_2->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = fVar2 * fVar4 + (param_2->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = fVar2 * fVar3 + fVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Vector2DInterpTo<double> @ 14179b0e0

TVector2<double> * __cdecl
FMath::Vector2DInterpTo<double>
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  if (0.0 < param_4) {
    dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    if (__real_3f1a36e2e0000000 <= dVar2 * dVar2 + dVar4 * dVar4) {
      fVar3 = param_3 * param_4;
      if (__real_3f800000 <= param_3 * param_4) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      dVar1 = (param_1->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (double)fVar3 * dVar2 + (param_1->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar3 * dVar4 + dVar1;
      return __return_storage_ptr__;
    }
  }
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// ApplyScaleToFloat @ 1417b4cf0

void __cdecl FMath::ApplyScaleToFloat(float *param_1,TVector<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (((dVar1 <= 0.0) && ((param_2->field0_0x0)._s_0.Y <= 0.0)) &&
     ((param_2->field0_0x0)._s_0.Z <= 0.0)) {
    param_3 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
  }
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  auVar4._0_8_ = dVar3 * dVar3;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + auVar4._0_8_;
  auVar5 = sqrtpd(auVar4,auVar5);
  fVar6 = (float)auVar5._0_8_ * param_3 + *param_1;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *param_1 = fVar6;
  return;
}

// CInterpTo @ 1417b6bc0

FLinearColor * __cdecl
FMath::CInterpTo(FLinearColor *__return_storage_ptr__,FLinearColor *param_1,FLinearColor *param_2,
                float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0.0 < param_4) {
    fVar1 = (param_2->field0_0x0)._s_0.R;
    fVar2 = (param_2->field0_0x0)._s_0.G;
    fVar11 = (param_1->field0_0x0)._s_0.R - fVar1;
    fVar3 = (param_2->field0_0x0)._s_0.B;
    fVar10 = (param_1->field0_0x0)._s_0.G - fVar2;
    fVar4 = (param_2->field0_0x0)._s_0.A;
    fVar8 = (param_1->field0_0x0)._s_0.B - fVar3;
    fVar9 = (param_1->field0_0x0)._s_0.A - fVar4;
    if (__real_38d1b717 <= SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11))
    {
      fVar8 = (param_1->field0_0x0)._s_0.G;
      fVar9 = (param_1->field0_0x0)._s_0.B;
      fVar10 = (param_1->field0_0x0)._s_0.A;
      fVar11 = param_3 * param_4;
      if (__real_3f800000 <= param_3 * param_4) {
        fVar11 = __real_3f800000;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar5 = (param_1->field0_0x0)._s_0.G;
      fVar6 = (param_1->field0_0x0)._s_0.B;
      (__return_storage_ptr__->field0_0x0)._s_0.R =
           (fVar1 - (param_1->field0_0x0)._s_0.R) * fVar11 + (param_1->field0_0x0)._s_0.R;
      fVar1 = (param_1->field0_0x0)._s_0.A;
      (__return_storage_ptr__->field0_0x0)._s_0.G = (fVar2 - fVar8) * fVar11 + fVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.B = (fVar3 - fVar9) * fVar11 + fVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.A = (fVar4 - fVar10) * fVar11 + fVar1;
      return __return_storage_ptr__;
    }
  }
  uVar7 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
  return __return_storage_ptr__;
}

// ClosestPointOnInfiniteLine @ 1417b8a30

TVector<double> * __cdecl
FMath::ClosestPointOnInfiniteLine
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.Z - dVar2;
  dVar6 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
  if (__real_3e45798ee0000000 <= dVar6) {
    dVar6 = (((param_3->field0_0x0)._s_0.Y - dVar1) * dVar4 +
             ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * dVar3 +
            ((param_3->field0_0x0)._s_0.Z - dVar2) * dVar5) / dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * dVar3 + (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * dVar4 + dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * dVar5 + dVar2;
  }
  else {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}

// ClosestPointOnTetrahedronToPoint @ 1417b8b50

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __cdecl
FMath::ClosestPointOnTetrahedronToPoint
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  bool bVar8;
  byte bVar9;
  TVector<double> *pTVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double local_2e8;
  TVector<double>_u_0 local_2d8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_298;
  double local_288;
  double local_280;
  TVector<double>_u_0 local_278;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double local_230;
  double local_228;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  
  dVar11 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar22 = (param_4->field0_0x0)._s_0.Y;
  dVar23 = (param_5->field0_0x0)._s_0.Y - dVar22;
  dVar21 = (param_4->field0_0x0)._s_0.Z;
  dVar15 = (param_4->field0_0x0)._s_0.X;
  dVar24 = (param_5->field0_0x0)._s_0.Z - dVar21;
  dVar4 = (param_5->field0_0x0)._s_0.X - dVar15;
  dVar17 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar22 = (dVar4 * dVar11 - dVar24 * dVar17) * (dVar22 - (param_2->field0_0x0)._s_0.Y) +
           (dVar24 * dVar5 - dVar23 * dVar11) * (dVar15 - (param_2->field0_0x0)._s_0.X) +
           (dVar23 * dVar17 - dVar4 * dVar5) * (dVar21 - (param_2->field0_0x0)._s_0.Z);
  uVar29 = SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar30 = (uint)((ulonglong)dVar22 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar30,uVar29) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar30,uVar29) == __real_3f1a36e2e0000000) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::Abs((C-A) | ((B-A)^(D-C))) > 0.0001f && \"Coplanar points in FMath::ComputeBaryCentric3D()\""
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                         ,0x913,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar1)();
    return pTVar10;
  }
  local_208._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
  local_208._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_220._0_16_ = *(undefined1 (*) [16])&param_4->field0_0x0;
  local_2d8._0_16_ = *(undefined1 (*) [16])&param_3->field0_0x0;
  uVar25 = local_2d8._8_4_;
  uVar27 = local_2d8._12_4_;
  uVar31 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 4);
  uVar32 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
  uVar7 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
  dVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  dVar4 = local_208._0_8_;
  dVar15 = local_220._0_8_ - dVar4;
  local_2d8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar18 = local_2d8._0_8_;
  local_220._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_278._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  dVar22 = (param_2->field0_0x0)._s_0.Z;
  dVar11 = (param_3->field0_0x0)._s_0.Z - dVar22;
  dVar23 = local_208._8_8_;
  dVar5 = local_220._8_8_ - dVar23;
  dVar22 = (param_4->field0_0x0)._s_0.Z - dVar22;
  dVar21 = local_2d8._8_8_;
  dVar17 = dVar5 * (dVar18 - dVar4) - dVar15 * (dVar21 - dVar23);
  dVar5 = dVar22 * (dVar21 - dVar23) - dVar5 * dVar11;
  dVar22 = dVar15 * dVar11 - dVar22 * (dVar18 - dVar4);
  dVar12 = dVar22 * dVar22 + dVar5 * dVar5 + dVar17 * dVar17;
  uVar2 = dVar17;
  dVar15 = dVar5;
  dVar11 = dVar22;
  if ((dVar12 != __real_3ff0000000000000) &&
     (uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar15 = dVar24,
     dVar11 = dVar6, __real_3e45798ee0000000 <= dVar12)) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar12);
    uVar2 = dVar17 * dVar11;
    dVar15 = dVar5 * dVar11;
    dVar11 = dVar22 * dVar11;
  }
  local_278._0_4_ = *(undefined4 *)&param_5->field0_0x0;
  local_278._4_4_ = uVar31;
  local_278._8_4_ = uVar32;
  local_278._12_4_ = uVar7;
  uVar33 = local_220._0_4_;
  uVar34 = local_220._4_4_;
  uVar35 = local_220._8_4_;
  uVar36 = local_220._12_4_;
  if ((dVar15 * (param_5->field0_0x0)._s_0.X + dVar11 * (param_5->field0_0x0)._s_0.Y +
      (double)uVar2 * (param_5->field0_0x0)._s_0.Z) -
      (dVar11 * dVar23 + dVar4 * dVar15 + (double)uVar2 * (param_2->field0_0x0)._s_0.Z) < 0.0) {
    local_220._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    local_278._0_4_ = *(undefined4 *)&param_4->field0_0x0;
    local_278._4_4_ = *(undefined4 *)((longlong)&param_4->field0_0x0 + 4);
    local_278._8_4_ = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
    local_278._12_4_ = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
    local_278._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    uVar33 = *(undefined4 *)&param_5->field0_0x0;
    uVar34 = uVar31;
    uVar35 = uVar32;
    uVar36 = uVar7;
    local_220._0_16_ = *(undefined1 (*) [16])&param_5->field0_0x0;
  }
  dVar5 = (double)CONCAT44(local_278._4_4_,local_278._0_4_);
  local_238 = (double)CONCAT44(uVar34,uVar33) - dVar5;
  local_280 = local_220._s_0.Z - local_278._s_0.Z;
  dVar11 = (param_2->field0_0x0)._s_0.Z - local_278._s_0.Z;
  dVar15 = dVar4 - (double)CONCAT44(local_278._4_4_,local_278._0_4_);
  dVar22 = (double)CONCAT44(local_278._12_4_,local_278._8_4_);
  local_288 = (double)CONCAT44(uVar36,uVar35) - dVar22;
  dVar12 = dVar23 - (double)CONCAT44(local_278._12_4_,local_278._8_4_);
  dVar17 = local_288 * dVar11 - local_280 * dVar12;
  local_198._8_4_ = uVar35;
  local_198._0_8_ = dVar17;
  local_198._12_4_ = uVar36;
  dVar11 = local_280 * dVar15 - local_238 * dVar11;
  dVar15 = local_238 * dVar12 - local_288 * dVar15;
  dVar12 = dVar11 * dVar11 + dVar17 * dVar17 + dVar15 * dVar15;
  local_298 = dVar15;
  if (dVar12 != __real_3ff0000000000000) {
    uVar31 = uVar26;
    uVar32 = uVar28;
    local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar13 = dVar24;
    dVar19 = dVar6;
    if (__real_3e45798ee0000000 <= dVar12) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      uVar31 = uVar35;
      uVar32 = uVar36;
      local_298 = dVar15 * dVar12;
      dVar13 = dVar17 * dVar12;
      dVar19 = dVar11 * dVar12;
    }
    dVar11 = dVar19;
    dVar17 = dVar13;
    local_198._8_4_ = uVar31;
    local_198._0_8_ = dVar17;
    local_198._12_4_ = uVar32;
  }
  local_1b8 = (double)CONCAT44(local_278._4_4_,local_278._0_4_) * dVar17 +
              (double)CONCAT44(local_278._12_4_,local_278._8_4_) * dVar11 +
              local_278._s_0.Z * local_298;
  dVar15 = (param_3->field0_0x0)._s_0.Z - local_278._s_0.Z;
  dVar13 = dVar18 - (double)CONCAT44(local_278._4_4_,local_278._0_4_);
  dVar19 = dVar21 - (double)CONCAT44(local_278._12_4_,local_278._8_4_);
  dVar17 = dVar19 * local_280 - local_288 * dVar15;
  local_188._8_4_ = uVar25;
  local_188._0_8_ = dVar17;
  local_188._12_4_ = uVar27;
  dVar12 = local_238 * dVar15 - dVar13 * local_280;
  dVar15 = local_288 * dVar13 - local_238 * dVar19;
  dVar13 = dVar12 * dVar12 + dVar17 * dVar17 + dVar15 * dVar15;
  local_2e8 = dVar15;
  if (dVar13 != __real_3ff0000000000000) {
    uVar31 = uVar26;
    uVar32 = uVar28;
    local_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar19 = dVar24;
    dVar16 = dVar6;
    if (__real_3e45798ee0000000 <= dVar13) {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      uVar31 = uVar25;
      uVar32 = uVar27;
      local_2e8 = dVar15 * dVar13;
      dVar19 = dVar17 * dVar13;
      dVar16 = dVar12 * dVar13;
    }
    dVar12 = dVar16;
    dVar17 = dVar19;
    local_188._8_4_ = uVar31;
    local_188._0_8_ = dVar17;
    local_188._12_4_ = uVar32;
  }
  dVar20 = dVar4 - (double)CONCAT44(local_278._4_4_,local_278._0_4_);
  dVar19 = dVar23 - (double)CONCAT44(local_278._12_4_,local_278._8_4_);
  local_230 = (double)CONCAT44(local_278._4_4_,local_278._0_4_) * dVar17 +
              (double)CONCAT44(local_278._12_4_,local_278._8_4_) * dVar12 +
              local_278._s_0.Z * local_2e8;
  dVar17 = dVar18 - (double)CONCAT44(local_278._4_4_,local_278._0_4_);
  dVar15 = dVar21 - (double)CONCAT44(local_278._12_4_,local_278._8_4_);
  dVar14 = (param_2->field0_0x0)._s_0.Z - local_278._s_0.Z;
  dVar13 = (param_3->field0_0x0)._s_0.Z - local_278._s_0.Z;
  dVar16 = dVar13 * dVar19 - dVar15 * dVar14;
  local_1e8._8_8_ = 0;
  local_1e8._0_8_ = dVar16;
  uVar31 = 0;
  uVar32 = 0;
  dVar13 = dVar17 * dVar14 - dVar13 * dVar20;
  uVar2 = dVar15 * dVar20 - dVar17 * dVar19;
  local_258._8_4_ = uVar25;
  local_258._0_8_ = uVar2;
  local_258._12_4_ = uVar27;
  dVar15 = dVar13 * dVar13 + dVar16 * dVar16 + (double)uVar2 * (double)uVar2;
  if (dVar15 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar15) {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
      dVar16 = dVar16 * dVar15;
      dVar13 = dVar13 * dVar15;
      uVar2 = (double)uVar2 * dVar15;
    }
    else {
      uVar25 = 0;
      uVar27 = 0;
      uVar31 = uVar26;
      uVar32 = uVar28;
      dVar16 = dVar24;
      dVar13 = dVar6;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    local_258._8_4_ = uVar25;
    local_258._0_8_ = uVar2;
    local_258._12_4_ = uVar27;
    local_1e8._8_4_ = uVar31;
    local_1e8._0_8_ = dVar16;
    local_1e8._12_4_ = uVar32;
  }
  local_248._0_8_ = local_220._0_8_;
  dVar17 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  local_228 = (double)CONCAT44(local_278._4_4_,local_278._0_4_) * dVar16 +
              (double)CONCAT44(local_278._12_4_,local_278._8_4_) * dVar13 +
              local_278._s_0.Z * (double)uVar2;
  dVar19 = (double)CONCAT44(uVar36,uVar35) - dVar23;
  local_168._8_4_ = local_208._8_4_;
  local_168._0_8_ = dVar23;
  local_168._12_4_ = local_208._12_4_;
  dVar15 = local_220._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  local_1d8._0_8_ = dVar17 * dVar19 - (dVar21 - dVar23) * dVar15;
  local_1d8._8_8_ = 0;
  dVar17 = (dVar18 - dVar4) * dVar15 - dVar17 * ((double)local_248._0_8_ - dVar4);
  dVar15 = (dVar21 - dVar23) * ((double)local_248._0_8_ - dVar4) - (dVar18 - dVar4) * dVar19;
  dVar16 = dVar17 * dVar17 + (double)local_1d8._0_8_ * (double)local_1d8._0_8_ + dVar15 * dVar15;
  dVar19 = (double)local_1d8._0_8_;
  if (dVar16 != __real_3ff0000000000000) {
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar16) {
      dVar19 = __real_3ff0000000000000 / SQRT(dVar16);
      dVar24 = (double)local_1d8._0_8_ * dVar19;
      uVar26 = 0;
      uVar28 = 0;
      dVar6 = dVar17 * dVar19;
      uVar2 = dVar15 * dVar19;
    }
    dVar15 = (double)uVar2;
    dVar17 = dVar6;
    local_1d8._8_4_ = uVar26;
    local_1d8._0_8_ = dVar24;
    local_1d8._12_4_ = uVar28;
    dVar19 = dVar24;
  }
  local_2b8 = (param_1->field0_0x0)._s_0.X;
  dStack_2b0 = (param_1->field0_0x0)._s_0.Y;
  local_2a8 = (param_1->field0_0x0)._s_0.Z;
  bVar9 = 0.0 < (dVar11 * dStack_2b0 + (double)local_198._0_8_ * local_2b8 + local_298 * local_2a8)
                - local_1b8;
  if (0.0 < (dVar12 * dStack_2b0 + (double)local_188._0_8_ * local_2b8 + local_2e8 * local_2a8) -
            local_230) {
    bVar9 = bVar9 | 2;
  }
  if (0.0 < (dVar13 * dStack_2b0 + (double)local_1e8._0_8_ * local_2b8 +
            (double)local_258._0_8_ * local_2a8) - local_228) {
    bVar9 = bVar9 | 4;
  }
  if (0.0 < (dVar17 * dStack_2b0 + (double)local_1d8._0_8_ * local_2b8 + dVar15 * local_2a8) -
            (dVar19 * dVar4 + dVar17 * dVar23 + dVar15 * (param_2->field0_0x0)._s_0.Z)) {
    bVar9 = bVar9 | 8;
  }
  local_248._8_8_ = local_220._8_8_;
  local_248 = local_220._0_16_;
  local_1b0 = local_208._s_0.Z;
  local_1a8 = local_2d8._s_0.Z;
  local_178 = local_278._8_4_;
  uStack_174 = local_278._12_4_;
  uStack_170 = local_278._8_4_;
  uStack_16c = local_278._12_4_;
  switch(bVar9) {
  case 1:
    ClosestPointOnTriangleToPoint
              (__return_storage_ptr__,param_1,(TVector<double> *)&local_278._s_0,
               (TVector<double> *)&local_220._s_0,(TVector<double> *)&local_208._s_0);
    break;
  case 2:
    ClosestPointOnTriangleToPoint
              (__return_storage_ptr__,param_1,(TVector<double> *)&local_278._s_0,
               (TVector<double> *)&local_2d8._s_0,(TVector<double> *)&local_220._s_0);
    break;
  case 3:
    dVar15 = (dStack_2b0 - (double)CONCAT44(local_278._12_4_,local_278._8_4_)) * local_288 +
             (local_2b8 - (double)CONCAT44(local_278._4_4_,local_278._0_4_)) * local_238 +
             (local_2a8 - local_278._s_0.Z) * local_280;
    local_2a8 = local_278._s_0.Z;
    if ((dVar15 <= 0.0) ||
       (dVar21 = local_238 * local_238 + local_288 * local_288 + local_280 * local_280,
       dVar5 = (double)local_248._0_8_, local_2a8 = local_220._s_0.Z,
       dVar22 = (double)local_248._8_8_, dVar21 <= dVar15)) goto LAB_1417b99da;
    dVar15 = dVar15 / dVar21;
    dVar21 = dVar15 * local_288;
    goto LAB_1417b958a;
  case 4:
    ClosestPointOnTriangleToPoint
              (__return_storage_ptr__,param_1,(TVector<double> *)&local_278._s_0,
               (TVector<double> *)&local_208._s_0,(TVector<double> *)&local_2d8._s_0);
    break;
  case 5:
    local_280 = local_208._s_0.Z - local_278._s_0.Z;
    dVar4 = dVar4 - (double)CONCAT44(local_278._4_4_,local_278._0_4_);
    dVar23 = dVar23 - (double)CONCAT44(local_278._12_4_,local_278._8_4_);
    dVar15 = (dStack_2b0 - (double)CONCAT44(local_278._12_4_,local_278._8_4_)) * dVar23 +
             (local_2b8 - (double)CONCAT44(local_278._4_4_,local_278._0_4_)) * dVar4 +
             (local_2a8 - local_278._s_0.Z) * local_280;
    local_2a8 = local_278._s_0.Z;
    if (dVar15 <= 0.0) goto LAB_1417b99da;
    dVar22 = dVar4 * dVar4 + dVar23 * dVar23 + local_280 * local_280;
    if (dVar22 <= dVar15) goto LAB_1417b964b;
    dVar15 = dVar15 / dVar22;
    local_238 = dVar15 * dVar4;
    dVar21 = dVar15 * dVar23;
    goto LAB_1417b9591;
  case 6:
    local_280 = local_2d8._s_0.Z - local_278._s_0.Z;
    local_238 = dVar18 - (double)CONCAT44(local_278._4_4_,local_278._0_4_);
    dVar21 = dVar21 - (double)CONCAT44(local_278._12_4_,local_278._8_4_);
    dVar15 = (dStack_2b0 - (double)CONCAT44(local_278._12_4_,local_278._8_4_)) * dVar21 +
             (local_2b8 - (double)CONCAT44(local_278._4_4_,local_278._0_4_)) * local_238 +
             (local_2a8 - local_278._s_0.Z) * local_280;
    local_2a8 = local_278._s_0.Z;
    if (dVar15 <= 0.0) goto LAB_1417b99da;
    dVar22 = local_238 * local_238 + dVar21 * dVar21 + local_280 * local_280;
    if (dVar22 <= dVar15) {
      local_2a8 = (param_3->field0_0x0)._s_0.Z;
      dVar5 = (param_3->field0_0x0)._s_0.X;
      dVar22 = *(double *)((longlong)&param_3->field0_0x0 + 8);
      goto LAB_1417b99da;
    }
    dVar15 = dVar15 / dVar22;
    dVar21 = dVar15 * dVar21;
LAB_1417b958a:
    local_238 = dVar15 * local_238;
LAB_1417b9591:
    dVar5 = (double)CONCAT44(local_278._4_4_,local_278._0_4_) + local_238;
    dVar22 = dVar21 + (double)CONCAT44(local_278._12_4_,local_278._8_4_);
    local_2a8 = dVar15 * local_280 + local_278._s_0.Z;
    goto LAB_1417b99da;
  case 7:
    *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_278._0_4_;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_278._4_4_;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_278._8_4_;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_278._12_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_278._s_0.Z;
    break;
  case 8:
    ClosestPointOnTriangleToPoint
              (__return_storage_ptr__,param_1,(TVector<double> *)&local_208._s_0,
               (TVector<double> *)&local_220._s_0,(TVector<double> *)&local_2d8._s_0);
    break;
  case 9:
    dVar24 = local_220._s_0.Z - local_208._s_0.Z;
    dVar21 = (double)local_248._0_8_ - dVar4;
    dVar15 = (double)CONCAT44(uVar36,uVar35) - dVar23;
    dVar17 = (dStack_2b0 - dVar23) * dVar15 + (local_2b8 - dVar4) * dVar21 +
             (local_2a8 - local_208._s_0.Z) * dVar24;
    if (0.0 < dVar17) {
      dVar11 = dVar21 * dVar21 + dVar15 * dVar15 + dVar24 * dVar24;
      dVar5 = (double)local_248._0_8_;
      local_2a8 = local_220._s_0.Z;
      dVar22 = (double)local_248._8_8_;
      if (dVar17 < dVar11) {
        dVar17 = dVar17 / dVar11;
        dVar5 = dVar17 * dVar21 + dVar4;
        local_2a8 = dVar17 * dVar24 + local_208._s_0.Z;
        dVar22 = dVar17 * dVar15 + dVar23;
      }
    }
    else {
      local_2a8 = (param_2->field0_0x0)._s_0.Z;
      dVar5 = dVar4;
      dVar22 = dVar23;
    }
    goto LAB_1417b99da;
  case 10:
    dVar4 = local_220._s_0.Z - local_2d8._s_0.Z;
    dVar24 = (double)CONCAT44(uVar36,uVar35) - dVar21;
    dVar15 = (double)local_248._0_8_ - dVar18;
    dVar23 = (local_2b8 - dVar18) * dVar15 + (dStack_2b0 - dVar21) * dVar24 +
             (local_2a8 - local_2d8._s_0.Z) * dVar4;
    if (0.0 < dVar23) {
      dVar17 = dVar15 * dVar15 + dVar24 * dVar24 + dVar4 * dVar4;
      dVar5 = (double)local_248._0_8_;
      local_2a8 = local_220._s_0.Z;
      dVar22 = (double)local_248._8_8_;
      if (dVar23 < dVar17) {
        dVar23 = dVar23 / dVar17;
        local_2a8 = dVar23 * dVar4 + local_2d8._s_0.Z;
        dVar5 = dVar23 * dVar15 + dVar18;
        dVar22 = dVar23 * dVar24 + dVar21;
      }
      goto LAB_1417b99da;
    }
    goto LAB_1417b985b;
  case 0xb:
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_248._0_8_;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_248._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_220._s_0.Z;
    break;
  case 0xc:
    dVar22 = local_208._s_0.Z - local_2d8._s_0.Z;
    dVar4 = dVar4 - dVar18;
    dVar23 = dVar23 - dVar21;
    dVar15 = (dStack_2b0 - dVar21) * dVar23 + (local_2b8 - dVar18) * dVar4 +
             (local_2a8 - local_2d8._s_0.Z) * dVar22;
    if (0.0 < dVar15) {
      dVar24 = dVar4 * dVar4 + dVar23 * dVar23 + dVar22 * dVar22;
      if (dVar15 < dVar24) {
        dVar15 = dVar15 / dVar24;
        local_2a8 = dVar15 * dVar22 + local_2d8._s_0.Z;
        dVar5 = dVar15 * dVar4 + dVar18;
        dVar22 = dVar15 * dVar23 + dVar21;
        goto LAB_1417b99da;
      }
LAB_1417b964b:
      local_2a8 = (param_2->field0_0x0)._s_0.Z;
      dVar5 = (param_2->field0_0x0)._s_0.X;
      dVar22 = *(double *)((longlong)&param_2->field0_0x0 + 8);
      goto LAB_1417b99da;
    }
LAB_1417b985b:
    local_2a8 = (param_3->field0_0x0)._s_0.Z;
    dVar5 = dVar18;
    dVar22 = dVar21;
    goto LAB_1417b99da;
  case 0xd:
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = local_208._0_16_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_208._s_0.Z;
    break;
  case 0xe:
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = local_2d8._0_16_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_2d8._s_0.Z;
    break;
  default:
    if (4 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
  case 0:
    dVar5 = local_2b8;
    dVar22 = dStack_2b0;
LAB_1417b99da:
    auVar3._8_4_ = SUB84(dVar22,0);
    auVar3._0_8_ = dVar5;
    auVar3._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_2a8;
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// ClosestPointOnTriangleToPoint @ 1417b9a80

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __cdecl
FMath::ClosestPointOnTriangleToPoint
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  TVector<double> *pTVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TVector<double>_u_0 local_e8;
  double local_c8;
  double local_c0;
  double local_b8;
  
  dVar7 = (param_4->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar8 = (param_4->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar12 = (param_3->field0_0x0)._s_0.Y;
  dVar16 = (param_3->field0_0x0)._s_0.Z;
  dVar15 = (param_2->field0_0x0)._s_0.Y - dVar12;
  dVar9 = (param_3->field0_0x0)._s_0.X;
  dVar13 = (param_2->field0_0x0)._s_0.Z - dVar16;
  dVar12 = dVar12 - (param_4->field0_0x0)._s_0.Y;
  dVar16 = dVar16 - (param_4->field0_0x0)._s_0.Z;
  dVar11 = (param_4->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.X - dVar9;
  dVar9 = dVar9 - (param_4->field0_0x0)._s_0.X;
  dVar14 = dVar16 * dVar15 - dVar12 * dVar13;
  dVar10 = dVar9 * dVar13 - dVar16 * dVar1;
  local_b8 = dVar12 * dVar1 - dVar9 * dVar15;
  dVar17 = dVar10 * dVar13 - local_b8 * dVar15;
  dVar13 = local_b8 * dVar1 - dVar14 * dVar13;
  dVar1 = dVar14 * dVar15 - dVar10 * dVar1;
  local_c0 = dVar10 * dVar7 - local_b8 * dVar8;
  dVar7 = local_b8 * dVar11 - dVar14 * dVar7;
  local_c8 = dVar14 * dVar8 - dVar10 * dVar11;
  local_e8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar8 = dVar10 * dVar16 - local_b8 * dVar12;
  local_e8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_e8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  dVar16 = local_b8 * dVar9 - dVar14 * dVar16;
  dVar12 = dVar14 * dVar12 - dVar10 * dVar9;
  bVar5 = 0.0 < (local_e8._s_0.X * dVar17 + local_e8._s_0.Y * dVar13 + local_e8._s_0.Z * dVar1) -
                ((param_3->field0_0x0)._s_0.Y * dVar13 + (param_3->field0_0x0)._s_0.X * dVar17 +
                (param_3->field0_0x0)._s_0.Z * dVar1);
  if (0.0 < (local_e8._s_0.Y * dVar7 + local_e8._s_0.X * local_c0 + local_e8._s_0.Z * local_c8) -
            ((param_2->field0_0x0)._s_0.Y * dVar7 + (param_2->field0_0x0)._s_0.X * local_c0 +
            (param_2->field0_0x0)._s_0.Z * local_c8)) {
    bVar5 = bVar5 | 2;
  }
  if (0.0 < (local_e8._s_0.Y * dVar16 + local_e8._s_0.X * dVar8 + local_e8._s_0.Z * dVar12) -
            ((param_4->field0_0x0)._s_0.Y * dVar16 + (param_4->field0_0x0)._s_0.X * dVar8 +
            (param_4->field0_0x0)._s_0.Z * dVar12)) {
    bVar5 = bVar5 | 4;
  }
  switch(bVar5) {
  case 0:
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    dVar12 = (param_2->field0_0x0)._s_0.Z;
    dVar9 = (param_4->field0_0x0)._s_0.X - dVar1;
    dVar14 = (param_4->field0_0x0)._s_0.Z - dVar12;
    dVar11 = (param_3->field0_0x0)._s_0.Z - dVar12;
    dVar13 = (param_3->field0_0x0)._s_0.X - dVar1;
    dVar16 = (param_4->field0_0x0)._s_0.Y - dVar8;
    dVar17 = (param_3->field0_0x0)._s_0.Y - dVar8;
    dVar7 = dVar9 * dVar11 - dVar14 * dVar13;
    dVar9 = dVar16 * dVar13 - dVar9 * dVar17;
    dVar16 = dVar14 * dVar17 - dVar16 * dVar11;
    dVar11 = dVar7 * dVar7 + dVar16 * dVar16 + dVar9 * dVar9;
    uVar2 = dVar7;
    uVar3 = dVar9;
    uVar4 = dVar16;
    if ((dVar11 != __real_3ff0000000000000) &&
       (uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar11)) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      uVar2 = dVar7 * dVar11;
      uVar3 = dVar9 * dVar11;
      uVar4 = dVar16 * dVar11;
    }
    dVar12 = (local_e8._s_0.X * (double)uVar4 + local_e8._s_0.Y * (double)uVar2 +
             local_e8._s_0.Z * (double)uVar3) -
             (dVar1 * (double)uVar4 + (double)uVar2 * dVar8 + (double)uVar3 * dVar12);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_e8._s_0.X - dVar12 * (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_e8._s_0.Y - dVar12 * (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_e8._s_0.Z - dVar12 * (double)uVar3;
    return __return_storage_ptr__;
  case 1:
    param_4 = param_2;
    goto LAB_1417b9f32;
  case 2:
    pTVar6 = ClosestPointOnSegment<double>
                       ((TVector<double> *)&local_e8._s_0,param_1,param_2,param_4);
    local_e8._0_4_ = *(undefined4 *)&pTVar6->field0_0x0;
    local_e8._4_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 4);
    local_e8._8_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 8);
    local_e8._12_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 0xc);
    local_e8._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    break;
  case 3:
    dVar12 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
    local_e8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    goto LAB_1417b9fc0;
  case 4:
LAB_1417b9f32:
    pTVar6 = ClosestPointOnSegment<double>
                       ((TVector<double> *)&local_e8._s_0,param_1,param_3,param_4);
    local_e8._0_4_ = *(undefined4 *)&pTVar6->field0_0x0;
    local_e8._4_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 4);
    local_e8._8_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 8);
    local_e8._12_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 0xc);
    local_e8._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    break;
  case 5:
    dVar12 = (param_3->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
    local_e8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    goto LAB_1417b9fc0;
  case 6:
    dVar12 = (param_4->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
    local_e8._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    goto LAB_1417b9fc0;
  default:
    if (4 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_e8._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_e8._4_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_e8._8_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_e8._12_4_;
LAB_1417b9fc0:
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_e8._s_0.Z;
  return __return_storage_ptr__;
}

// ComputeBaryCentric2D @ 1417baf20

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __cdecl
FMath::ComputeBaryCentric2D
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = __real_3e45798ee2308c3a;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  bVar2 = ComputeBarycentricTri(param_1,param_2,param_3,param_4,__return_storage_ptr__,dVar1);
  if ((!bVar2) && (2 < (byte)LogUnrealMath._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
  }
  return __return_storage_ptr__;
}

// ComputeBaryCentric3D @ 1417bafa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector4<double> * __cdecl
FMath::ComputeBaryCentric3D
          (TVector4<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  TVector4<double> *pTVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar15 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_4->field0_0x0)._s_0.X - dVar15;
  dVar8 = (param_4->field0_0x0)._s_0.Y - dVar1;
  dVar9 = (param_4->field0_0x0)._s_0.Z - dVar2;
  local_1c0 = (param_3->field0_0x0)._s_0.Z - dVar2;
  local_1c8 = (param_3->field0_0x0)._s_0.Y - dVar1;
  dVar4 = (param_3->field0_0x0)._s_0.X - dVar15;
  dVar1 = (param_5->field0_0x0)._s_0.Y - dVar1;
  dVar2 = (param_5->field0_0x0)._s_0.Z - dVar2;
  dVar15 = (param_5->field0_0x0)._s_0.X - dVar15;
  dVar16 = (dVar2 * dVar8 - dVar1 * dVar9) * dVar4 + (dVar15 * dVar9 - dVar2 * dVar7) * local_1c8 +
           (dVar1 * dVar7 - dVar15 * dVar8) * local_1c0;
  if ((double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee0000000) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("FMath::Abs(B1 | (B2 ^ B3)) > (1.e-8f) && \"Coplanar points in FMath::ComputeBaryCentric3D()\""
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                        ,0x8ff,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TVector4<double> *)(*pcVar3)();
      return pTVar14;
    }
  }
  dVar12 = __real_3ff0000000000000;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_2->field0_0x0)._s_0.X;
  dVar11 = (param_2->field0_0x0)._s_0.Y;
  dVar16 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  local_138.M[0][1] = local_1c8;
  local_138.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_138.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_138.M[0][2] = local_1c0;
  local_138.M[0][3] = 0.0;
  local_138.M[1][3] = 0.0;
  local_138.M[2][3] = 0.0;
  local_138.M[3][3] = __real_3ff0000000000000;
  local_138.M[0][0] = dVar4;
  local_138.M[1][0] = dVar7;
  local_138.M[1][1] = dVar8;
  local_138.M[1][2] = dVar9;
  local_138.M[2][0] = dVar15;
  local_138.M[2][1] = dVar1;
  local_138.M[2][2] = dVar2;
  UE::Math::TMatrix<double>::Inverse(&local_138,&local_1b8);
  dVar5 = dVar5 - dVar10;
  dVar6 = dVar6 - dVar11;
  dVar1 = local_1b8.M[1][0] * dVar6 + local_1b8.M[0][0] * dVar5 + local_1b8.M[2][0] * dVar16 +
          local_1b8.M[3][0] * 0.0;
  dVar2 = local_1b8.M[1][1] * dVar6 + local_1b8.M[0][1] * dVar5 + local_1b8.M[2][1] * dVar16 +
          local_1b8.M[3][1] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  dVar15 = local_1b8.M[1][2] * dVar6 + local_1b8.M[0][2] * dVar5 + local_1b8.M[2][2] * dVar16 +
           local_1b8.M[3][2] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.X = ((dVar12 - dVar1) - dVar2) - dVar15;
  return __return_storage_ptr__;
}

// ComputeBarycentricTri @ 1417bb2e0

bool __cdecl
FMath::ComputeBarycentricTri
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,double param_6)

{
  double dVar1;
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
  double dVar12;
  double dVar13;
  
  dVar6 = __real_3ff0000000000000;
  dVar12 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar10 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar4 = dVar2 - (param_2->field0_0x0)._s_0.X;
  dVar8 = dVar1 - (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  dVar7 = dVar3 - (param_2->field0_0x0)._s_0.Z;
  dVar9 = (param_4->field0_0x0)._s_0.X;
  dVar11 = dVar9 - (param_2->field0_0x0)._s_0.X;
  dVar5 = dVar7 * dVar12 - dVar8 * dVar10;
  dVar7 = dVar11 * dVar10 - dVar7 * dVar4;
  dVar4 = dVar8 * dVar4 - dVar11 * dVar12;
  dVar8 = dVar7 * dVar7 + dVar5 * dVar5 + dVar4 * dVar4;
  if (param_6 < dVar8) {
    dVar2 = dVar2 - (param_1->field0_0x0)._s_0.X;
    dVar1 = dVar1 - (param_1->field0_0x0)._s_0.Y;
    dVar11 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar12 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    dVar3 = dVar3 - (param_1->field0_0x0)._s_0.Z;
    dVar9 = dVar9 - (param_1->field0_0x0)._s_0.X;
    dVar10 = __real_3ff0000000000000 / SQRT(dVar8);
    dVar3 = ((dVar3 * dVar11 - dVar1 * dVar12) * dVar5 * dVar10 +
             (dVar9 * dVar12 - dVar3 * dVar2) * dVar7 * dVar10 +
            (dVar1 * dVar2 - dVar9 * dVar11) * dVar4 * dVar10) * dVar10;
    (param_5->field0_0x0)._s_0.X = dVar3;
    dVar13 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar9 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    dVar12 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar1 = (param_4->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar11 = (param_4->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    dVar2 = (param_4->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar10 = ((dVar9 * dVar1 - dVar13 * dVar11) * dVar5 * dVar10 +
              (dVar12 * dVar11 - dVar9 * dVar2) * dVar7 * dVar10 +
             (dVar13 * dVar2 - dVar12 * dVar1) * dVar4 * dVar10) * dVar10;
    (param_5->field0_0x0)._s_0.Y = dVar10;
    (param_5->field0_0x0)._s_0.Z = (dVar6 - dVar3) - dVar10;
  }
  return param_6 < dVar8;
}

// ComputeProjectedSphereScissorRect @ 1417bb850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
FMath::ComputeProjectedSphereScissorRect
          (TIntRect<int> *param_1,TVector<double> *param_2,float param_3,TVector<double> *param_4,
          TMatrix<double> *param_5,TMatrix<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_78 [4];
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar11 = dVar1 - (param_4->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = dVar2 - (param_4->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar9 = dVar3 - (param_4->field0_0x0)._s_0.X;
  if (dVar11 * dVar11 + dVar9 * dVar9 + dVar7 * dVar7 <= (double)(param_3 * param_3)) {
    uVar6 = 2;
  }
  else {
    dVar9 = param_5->M[1][1];
    dVar11 = param_5->M[0][1];
    auVar8._8_4_ = SUB84(dVar3,0);
    auVar8._0_8_ = dVar3;
    auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar4 = param_5->M[2][1];
    dVar10 = __real_3ff0000000000000 * param_5->M[3][1];
    dVar7 = param_5->M[0][2] * dVar3 + param_5->M[1][2] * dVar1 + param_5->M[2][2] * dVar2 +
            param_5->M[3][2] * __real_3ff0000000000000;
    local_78[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_78[0]._s_0.Y = _UNK_150689518;
    local_78[0]._s_0.Z = 0.0;
    bVar5 = ComputeProjectedSphereShaft
                      (dVar1 * param_5->M[1][0] + dVar3 * param_5->M[0][0] +
                       dVar2 * param_5->M[2][0] + __real_3ff0000000000000 * param_5->M[3][0],dVar7,
                       (double)param_3,param_6,(TVector<double> *)&local_78[0]._s_0,
                       __real_3ff0000000000000,(int *)param_1,
                       (int *)((longlong)&param_1->field0_0x0 + 8));
    if (bVar5) {
      local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_78[0]._s_0.Y = _UNK_15061cbc8;
      local_78[0]._s_0.Z = 0.0;
      bVar5 = ComputeProjectedSphereShaft
                        (dVar1 * dVar9 + auVar8._8_8_ * dVar11 + dVar2 * dVar4 + dVar10,dVar7,
                         (double)param_3,param_6,(TVector<double> *)&local_78[0]._s_0,
                         __real_bff0000000000000,(int *)((longlong)&param_1->field0_0x0 + 4),
                         (int *)((longlong)&param_1->field0_0x0 + 0xc));
      uVar6 = (uint)bVar5;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

// Eval @ 1417c6880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FMath::Eval(FString *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FStaticBasicLogRecord *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  FString local_48;
  FString local_38;
  
  bVar10 = true;
  iVar9 = 0;
  iVar7 = 0;
  while( true ) {
    iVar8 = (param_1->Data).ArrayNum;
    iVar3 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar3 = 0;
    }
    if (iVar3 <= iVar9) break;
    pFVar4 = ::FString::Mid(param_1,&local_48,iVar9,1);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"(");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar8 = iVar7 + 1;
    if (iVar3 != 0) {
      iVar8 = iVar7;
    }
    pFVar4 = ::FString::Mid(param_1,&local_38,iVar9,1);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L")");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar9 = iVar9 + 1;
    iVar7 = iVar8 + -1;
    if (iVar3 != 0) {
      iVar7 = iVar8;
    }
  }
  if (iVar7 == 0) {
    bVar2 = SubEval(param_1,param_2,0);
    if (bVar2) goto LAB_1417c69d9;
    if (4 < (byte)LogUnrealMath._0_1_) {
      pFVar6 = &::LOG_Static;
      goto LAB_1417c69ca;
    }
  }
  else if (4 < (byte)LogUnrealMath._0_1_) {
    pFVar6 = &::LOG_Static;
LAB_1417c69ca:
    UE::Logging::Private::BasicLog<5>(pFVar6,(FLogCategoryBase *)&LogUnrealMath);
  }
  bVar10 = false;
LAB_1417c69d9:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar10;
}

// FixedTurn @ 1417cea40

float __cdecl FMath::FixedTurn(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = __real_43b40000;
  if (param_3 == 0.0) {
    fVar2 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + fVar1;
    }
  }
  else {
    if (param_3 < __real_43b40000) {
      fVar2 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
      if (fVar2 < 0.0) {
        fVar2 = fVar2 + fVar1;
      }
      fVar3 = FGenericPlatformMath::Fmod(param_2,fVar1);
      if (fVar3 < 0.0) {
        fVar3 = fVar3 + fVar1;
      }
      fVar5 = (float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar2 <= fVar3) {
        fVar4 = fVar3 - fVar2;
        if (__real_43340000 <= fVar4) {
          fVar3 = (fVar2 + fVar1) - fVar3;
          if (fVar5 <= fVar3) {
            fVar3 = fVar5;
          }
          param_2 = fVar2 - fVar3;
        }
        else {
          if (fVar5 <= fVar4) {
            fVar4 = fVar5;
          }
          param_2 = fVar4 + fVar2;
        }
      }
      else {
        fVar4 = fVar2 - fVar3;
        if (__real_43340000 <= fVar4) {
          fVar3 = (fVar3 + fVar1) - fVar2;
          if (fVar5 <= fVar3) {
            fVar3 = fVar5;
          }
          param_2 = fVar3 + fVar2;
        }
        else {
          if (fVar4 <= fVar5) {
            fVar5 = fVar4;
          }
          param_2 = fVar2 - fVar5;
        }
      }
    }
    fVar2 = FGenericPlatformMath::Fmod(param_2,fVar1);
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + fVar1;
    }
  }
  return fVar2;
}

// FormatIntToHumanReadable @ 1417cf150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl FMath::FormatIntToHumanReadable(FString *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  int iVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::PrintfImpl(&local_38,L"%i");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_48,(wchar_t *)FVar8.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  while( true ) {
    iVar6 = local_48.Data.ArrayNum;
    iVar10 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar10 = 0;
    }
    if (iVar10 < 4) break;
    iVar10 = iVar6 + -5;
    if (iVar6 == 0) {
      iVar10 = -4;
    }
    iVar7 = 0;
    if (((iVar10 < 0) || (iVar6 == 0)) || (iVar6 + -1 <= iVar10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      iVar6 = local_48.Data.ArrayNum;
    }
    if (*(short *)(local_48.Data.AllocatorInstance.Data + (longlong)iVar10 * 2) == 0x2d) break;
    pwVar9 = L"";
    iVar10 = 0;
    if (iVar6 != 0) {
      pwVar9 = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      iVar10 = iVar6 + -1;
    }
    iVar6 = iVar10;
    if (3 < iVar10) {
      iVar6 = 3;
    }
    iVar4 = iVar7;
    if (0 < iVar6) {
      iVar4 = iVar6;
    }
    ::FString::FString(&local_28,
                       (wchar_t *)((longlong)pwVar9 + ((longlong)iVar10 - (longlong)iVar4) * 2));
    ::FString::PrintfImpl(&local_68,L",%s%s");
    if (__return_storage_ptr__ != &local_68) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar4 = local_48.Data.ArrayNum;
    iVar10 = iVar4 + -4;
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = -3;
      iVar6 = iVar7;
    }
    iVar4 = iVar6;
    if (iVar10 < iVar6) {
      iVar4 = iVar10;
    }
    if (0 < iVar4) {
      iVar7 = iVar4;
    }
    ::FString::RemoveAt(&local_48,iVar7,iVar6 - iVar7,No);
  }
  ::FString::ConcatFF(&local_58,&local_48,__return_storage_ptr__);
  if (__return_storage_ptr__ != &local_58) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAzimuthAndElevation @ 1417d16f0

TVector2<double> * __cdecl
FMath::GetAzimuthAndElevation
          (TVector2<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double _X;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  
  _X = __real_bff0000000000000;
  dVar4 = __real_3ff0000000000000;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar7 = dVar6 * dVar6 + dVar5 * dVar5 + dVar1 * dVar1;
  if (dVar7 == __real_3ff0000000000000) {
    uVar9 = (param_1->field0_0x0)._s_0.Z;
    uVar2 = (param_1->field0_0x0)._s_0.X;
    uVar3 = (param_1->field0_0x0)._s_0.Y;
  }
  else {
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar9 = dVar1 * dVar7;
      uVar2 = dVar5 * dVar7;
      uVar3 = dVar6 * dVar7;
    }
  }
  dVar5 = (param_4->field0_0x0)._s_0.Y * (double)uVar3 +
          (param_4->field0_0x0)._s_0.X * (double)uVar2 +
          (param_4->field0_0x0)._s_0.Z * (double)uVar9;
  dVar6 = (double)uVar2 - dVar5 * (param_4->field0_0x0)._s_0.X;
  dVar1 = (double)uVar3 - dVar5 * (param_4->field0_0x0)._s_0.Y;
  dVar8 = (double)uVar9 - dVar5 * (param_4->field0_0x0)._s_0.Z;
  dVar7 = dVar1 * dVar1 + dVar6 * dVar6 + dVar8 * dVar8;
  uVar9 = dVar8;
  uVar2 = dVar6;
  uVar3 = dVar1;
  if ((dVar7 != __real_3ff0000000000000) &&
     (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar7)) {
    dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
    uVar9 = dVar8 * dVar7;
    uVar2 = dVar6 * dVar7;
    uVar3 = dVar1 * dVar7;
  }
  dVar1 = __real_3ff0000000000000;
  if ((double)uVar3 * (param_3->field0_0x0)._s_0.Y + (double)uVar2 * (param_3->field0_0x0)._s_0.X +
      (double)uVar9 * (param_3->field0_0x0)._s_0.Z < 0.0) {
    dVar1 = __real_bff0000000000000;
  }
  dVar6 = (double)uVar3 * (param_2->field0_0x0)._s_0.Y +
          (double)uVar2 * (param_2->field0_0x0)._s_0.X +
          (double)uVar9 * (param_2->field0_0x0)._s_0.Z;
  dVar7 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar5) && (dVar7 = dVar5, __real_3ff0000000000000 <= dVar5)) {
    dVar7 = __real_3ff0000000000000;
  }
  dVar5 = asin(dVar7);
  if ((_X <= dVar6) && (_X = dVar6, dVar4 <= dVar6)) {
    _X = dVar4;
  }
  dVar6 = acos(_X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * dVar1;
  return __return_storage_ptr__;
}

// GetBaryCentric2D @ 1417d1940

TVector<double> * __cdecl
FMath::GetBaryCentric2D
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = __real_3ff0000000000000;
  dVar1 = (param_4->field0_0x0)._s_0.X;
  dVar7 = dVar1 - (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.X - dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.X - dVar1;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar8 = (param_3->field0_0x0)._s_0.Y - dVar2;
  dVar4 = (param_1->field0_0x0)._s_0.Y - dVar2;
  dVar6 = __real_3ff0000000000000 / (((param_2->field0_0x0)._s_0.Y - dVar2) * dVar7 + dVar8 * dVar1)
  ;
  dVar1 = ((dVar2 - (param_2->field0_0x0)._s_0.Y) * dVar3 + dVar4 * dVar1) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  dVar6 = (dVar4 * dVar7 + dVar3 * dVar8) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar5 - dVar6) - dVar1;
  return __return_storage_ptr__;
}

// GetBaryCentric2D @ 1417d1a50

TVector<double> * __cdecl
FMath::GetBaryCentric2D
          (TVector<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = __real_3ff0000000000000;
  dVar1 = (param_4->field0_0x0)._s_0.X;
  dVar7 = dVar1 - (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.X - dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.X - dVar1;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar8 = (param_3->field0_0x0)._s_0.Y - dVar2;
  dVar4 = (param_1->field0_0x0)._s_0.Y - dVar2;
  dVar6 = __real_3ff0000000000000 / (((param_2->field0_0x0)._s_0.Y - dVar2) * dVar7 + dVar8 * dVar1)
  ;
  dVar1 = ((dVar2 - (param_2->field0_0x0)._s_0.Y) * dVar3 + dVar4 * dVar1) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  dVar6 = (dVar4 * dVar7 + dVar3 * dVar8) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar5 - dVar6) - dVar1;
  return __return_storage_ptr__;
}

// GetDistanceWithinConeSegment @ 1417d3080

bool __cdecl
FMath::GetDistanceWithinConeSegment
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4,
          float param_5,float *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  
  if ((((param_4 < 0.0) || (param_5 < 0.0)) ||
      (dVar1 = (param_3->field0_0x0)._s_0.X, dVar2 = (param_3->field0_0x0)._s_0.Y,
      dVar3 = (param_3->field0_0x0)._s_0.Z, dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3 <= 0.0))
     && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("RadiusAtStart >= 0.0f && RadiusAtEnd >= 0.0f && ConeLine.SizeSquared() > 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                             ,0x984,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    uVar15 = (*pcVar6)();
    return (bool)uVar15;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  dVar9 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar9 == __real_3ff0000000000000) {
    uVar11 = (param_3->field0_0x0)._s_0.X;
    uVar12 = (param_3->field0_0x0)._s_0.Y;
    uVar13 = (param_3->field0_0x0)._s_0.Z;
  }
  else {
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar9) {
      dVar22 = __real_3ff0000000000000 / SQRT(dVar9);
      uVar11 = dVar1 * dVar22;
      uVar12 = dVar2 * dVar22;
      uVar13 = dVar3 * dVar22;
    }
  }
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar22 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  *param_6 = 0.0;
  dVar3 = (dVar3 - dVar2) * (double)uVar12 + (dVar4 - dVar1) * (double)uVar11 +
          (dVar5 - dVar22) * (double)uVar13;
  dVar23 = dVar3 * (double)uVar11 + dVar1;
  dVar4 = dVar3 * (double)uVar12 + dVar2;
  dVar5 = dVar3 * (double)uVar13 + dVar22;
  dVar19 = dVar23 - (param_1->field0_0x0)._s_0.X;
  dVar3 = dVar4 - (param_1->field0_0x0)._s_0.Y;
  dVar10 = (dVar2 + (param_3->field0_0x0)._s_0.Y) - dVar4;
  dVar16 = dVar5 - (param_1->field0_0x0)._s_0.Z;
  auVar18._0_8_ = dVar16 * dVar16;
  auVar18._8_8_ = 0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar3 * dVar3 + dVar19 * dVar19 + auVar18._0_8_;
  auVar17 = sqrtpd(auVar18,auVar17);
  dVar3 = (dVar22 + (param_3->field0_0x0)._s_0.Z) - dVar5;
  auVar21._0_8_ = (dVar22 - dVar5) * (dVar22 - dVar5);
  auVar21._8_8_ = 0;
  auVar20._0_8_ = (dVar1 - dVar23) * (dVar1 - dVar23);
  auVar20._8_8_ = 0;
  dVar23 = (dVar1 + (param_3->field0_0x0)._s_0.X) - dVar23;
  dVar1 = (dVar2 - dVar4) * (dVar2 - dVar4) + auVar20._0_8_ + auVar21._0_8_;
  if ((dVar1 <= dVar9) && (dVar10 * dVar10 + dVar23 * dVar23 + dVar3 * dVar3 <= dVar9)) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar9;
    auVar18 = sqrtpd(auVar21,auVar8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar1;
    auVar21 = sqrtpd(auVar20,auVar7);
    dVar1 = ((double)(param_5 - param_4) / auVar18._0_8_) * auVar21._0_8_ + (double)param_4;
    if ((double)(float)auVar17._0_8_ <= dVar1) {
      if (__real_0000000000000000 < dVar1) {
        *param_6 = (float)((dVar1 - (double)(float)auVar17._0_8_) / dVar1);
        return true;
      }
      *param_6 = __real_3f800000;
      return true;
    }
  }
  return false;
}

// GetDotDistance @ 1417d33b0

bool __cdecl
FMath::GetDotDistance
          (TVector2<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  uVar9 = SUB84(__real_3ff0000000000000,0);
  uVar10 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar5 = dVar8 * dVar8 + dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar5 == __real_3ff0000000000000) {
    uVar7 = (param_2->field0_0x0)._s_0.Y;
    uVar3 = (param_2->field0_0x0)._s_0.X;
    uVar4 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
      uVar7 = dVar8 * dVar5;
      uVar3 = dVar2 * dVar5;
      uVar4 = dVar1 * dVar5;
    }
  }
  dVar2 = (param_5->field0_0x0)._s_0.Y * (double)uVar7 +
          (param_5->field0_0x0)._s_0.X * (double)uVar3 +
          (param_5->field0_0x0)._s_0.Z * (double)uVar4;
  dVar1 = (double)uVar3 - dVar2 * (param_5->field0_0x0)._s_0.X;
  dVar6 = (double)uVar7 - dVar2 * (param_5->field0_0x0)._s_0.Y;
  dVar8 = (double)uVar4 - dVar2 * (param_5->field0_0x0)._s_0.Z;
  dVar5 = dVar6 * dVar6 + dVar1 * dVar1 + dVar8 * dVar8;
  uVar7 = dVar6;
  uVar3 = dVar1;
  uVar4 = dVar8;
  if ((dVar5 != __real_3ff0000000000000) &&
     (uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar5)) {
    dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
    uVar7 = dVar6 * dVar5;
    uVar3 = dVar1 * dVar5;
    uVar4 = dVar8 * dVar5;
  }
  if ((double)uVar7 * (param_4->field0_0x0)._s_0.Y + (double)uVar3 * (param_4->field0_0x0)._s_0.X +
      (double)uVar4 * (param_4->field0_0x0)._s_0.Z < 0.0) {
    uVar9 = (undefined4)__real_bff0000000000000;
    uVar10 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  (param_1->field0_0x0)._s_0.Y = dVar2;
  dVar8 = (double)uVar7 * (param_3->field0_0x0)._s_0.Y +
          (double)uVar3 * (param_3->field0_0x0)._s_0.X +
          (double)uVar4 * (param_3->field0_0x0)._s_0.Z;
  (param_1->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
       (double)CONCAT44(uVar10,uVar9);
  return 0.0 <= dVar8;
}

// GetReflectionVector @ 1417d5200

TVector<double> * __cdecl
FMath::GetReflectionVector
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar7 = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar7 == __real_3ff0000000000000) {
    uVar4 = (param_2->field0_0x0)._s_0.X;
    uVar5 = (param_2->field0_0x0)._s_0.Y;
    uVar6 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar4 = dVar2 * dVar7;
      uVar5 = dVar3 * dVar7;
      uVar6 = dVar1 * dVar7;
    }
  }
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = dVar2 * (double)uVar5 + dVar1 * (double)uVar4 + dVar3 * (double)uVar6;
  dVar7 = dVar7 + dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar7 * (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar7 * (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar7 * (double)uVar6;
  return __return_storage_ptr__;
}

// GetTForSegmentPlaneIntersect @ 1417d8190

float __cdecl
FMath::GetTForSegmentPlaneIntersect
          (TVector<double> *param_1,TVector<double> *param_2,TPlane<double> *param_3)

{
  return (float)((param_3->W -
                 ((double)param_3->_padding_ * (param_1->field0_0x0)._s_0.Y +
                  (double)param_3->_padding_ * (param_1->field0_0x0)._s_0.X +
                 (double)param_3->_padding_ * (param_1->field0_0x0)._s_0.Z)) /
                (((param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) *
                 (double)param_3->_padding_ +
                 ((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) *
                 (double)param_3->_padding_ +
                ((param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) *
                (double)param_3->_padding_));
}

// LineExtentBoxIntersection @ 1417dfe40

bool __cdecl
FMath::LineExtentBoxIntersection
          (TBox<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,float *param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dStack_e0;
  
  fVar12 = __real_3f800000;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_4->field0_0x0)._s_0.Y + (param_1->Max).field0_0x0._s_0.Y;
  uVar17 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar7 = (param_3->field0_0x0)._s_0.Y - dVar1;
  uVar16 = (undefined4)__real_3ff0000000000000;
  uVar18 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  bVar11 = true;
  auVar3 = *(undefined1 (*) [16])&(param_1->Min).field0_0x0;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Z - dVar2;
  dVar15 = (param_1->Min).field0_0x0._s_0.Z - (param_4->field0_0x0)._s_0.Z;
  dVar10 = auVar3._0_8_ - (param_4->field0_0x0)._s_0.X;
  dStack_e0 = auVar3._8_8_;
  dVar5 = (param_4->field0_0x0)._s_0.X + (param_1->Max).field0_0x0._s_0.X;
  dStack_e0 = dStack_e0 - (param_4->field0_0x0)._s_0.Y;
  dVar13 = (param_2->field0_0x0)._s_0.X;
  dVar9 = (param_3->field0_0x0)._s_0.X - dVar13;
  dVar14 = (param_1->Max).field0_0x0._s_0.Z + (param_4->field0_0x0)._s_0.Z;
  if (dVar10 <= dVar13) {
    uVar20 = uVar16;
    uVar21 = uVar18;
    if (dVar13 <= dVar5) {
      dVar13 = 0.0;
    }
    else {
      if (0.0 <= dVar9) {
        return false;
      }
      bVar11 = false;
      dVar13 = (dVar5 - dVar13) / dVar9;
    }
  }
  else {
    if (dVar9 <= 0.0) {
      return false;
    }
    bVar11 = false;
    dVar13 = (dVar10 - dVar13) / dVar9;
    uVar20 = (int)__real_bff0000000000000;
    uVar21 = uVar17;
  }
  if (dStack_e0 <= dVar1) {
    if (dVar1 <= dVar4) {
      dVar1 = 0.0;
    }
    else {
      if (0.0 <= dVar7) {
        return false;
      }
      bVar11 = false;
      dVar1 = (dVar4 - dVar1) / dVar7;
    }
  }
  else {
    if (dVar7 <= 0.0) {
      return false;
    }
    bVar11 = false;
    dVar1 = (dStack_e0 - dVar1) / dVar7;
    uVar16 = (int)__real_bff0000000000000;
    uVar18 = uVar17;
  }
  if (dVar15 <= dVar2) {
    fVar19 = __real_3f800000;
    if (dVar2 <= dVar14) {
      dVar2 = 0.0;
      if (bVar11) {
        dVar1 = (param_2->field0_0x0)._s_0.Y;
        (param_5->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
        (param_5->field0_0x0)._s_0.Y = dVar1;
        (param_5->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        (param_6->field0_0x0)._s_0.X = 0.0;
        (param_6->field0_0x0)._s_0.Y = 0.0;
        (param_6->field0_0x0)._s_0.Z = 1.0;
        *param_7 = 0.0;
        return true;
      }
    }
    else {
      if (0.0 <= dVar6) {
        return false;
      }
      dVar2 = (dVar14 - dVar2) / dVar6;
    }
  }
  else {
    if (dVar6 <= 0.0) {
      return false;
    }
    dVar2 = (dVar15 - dVar2) / dVar6;
    fVar19 = __real_bf800000;
  }
  if (dVar1 <= dVar2) {
    dVar8 = (double)fVar19;
    uVar16 = 0;
    uVar18 = 0;
  }
  else {
    dVar8 = 0.0;
    dVar2 = dVar1;
  }
  *param_7 = (float)dVar2;
  (param_6->field0_0x0)._s_0.X = 0.0;
  (param_6->field0_0x0)._s_0.Y = (double)CONCAT44(uVar18,uVar16);
  (param_6->field0_0x0)._s_0.Z = dVar8;
  if ((double)*param_7 < dVar13) {
    *param_7 = (float)dVar13;
    (param_6->field0_0x0)._s_0.X = (double)CONCAT44(uVar21,uVar20);
    (param_6->field0_0x0)._s_0.Y = 0.0;
    (param_6->field0_0x0)._s_0.Z = 0.0;
  }
  fVar19 = *param_7;
  if ((0.0 <= fVar19) && (fVar19 <= fVar12)) {
    dVar1 = (double)fVar19;
    dVar13 = dVar1 * dVar9 + (param_2->field0_0x0)._s_0.X;
    dVar2 = dVar1 * dVar7 + (param_2->field0_0x0)._s_0.Y;
    dVar1 = dVar1 * dVar6 + (param_2->field0_0x0)._s_0.Z;
    (param_5->field0_0x0)._s_0.X = dVar13;
    (param_5->field0_0x0)._s_0.Y = dVar2;
    (param_5->field0_0x0)._s_0.Z = dVar1;
    if (((dVar10 - __real_3fb99999a0000000 < dVar13) &&
        (((dVar13 < dVar5 + __real_3fb99999a0000000 && (dStack_e0 - __real_3fb99999a0000000 < dVar2)
          ) && (dVar2 < dVar4 + __real_3fb99999a0000000)))) &&
       (dVar15 - __real_3fb99999a0000000 < dVar1)) {
      return dVar1 < dVar14 + __real_3fb99999a0000000;
    }
  }
  return false;
}

// MatrixInverse @ 1417e3350

bool __cdecl FMath::MatrixInverse(TMatrix<float> *param_1,TMatrix<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  fVar22 = param_2->M[3][3];
  fVar15 = param_2->M[3][2];
  fVar20 = param_2->M[1][2];
  fVar21 = param_2->M[1][3];
  fVar23 = param_2->M[0][3];
  fVar24 = param_2->M[2][3];
  fVar33 = param_2->M[2][2];
  fVar18 = param_2->M[0][2];
  fVar25 = fVar33 * fVar22 - fVar24 * fVar15;
  fVar1 = param_2->M[2][1];
  fVar27 = fVar20 * fVar22 - fVar21 * fVar15;
  fVar2 = param_2->M[3][1];
  fVar29 = fVar20 * fVar24 - fVar21 * fVar33;
  fVar3 = param_2->M[1][1];
  fVar31 = fVar18 * fVar22 - fVar23 * fVar15;
  fVar22 = param_2->M[0][1];
  fVar33 = fVar18 * fVar24 - fVar23 * fVar33;
  fVar24 = fVar18 * fVar21 - fVar23 * fVar20;
  fVar21 = (fVar3 * fVar25 - fVar1 * fVar27) + fVar2 * fVar29;
  fVar23 = (fVar22 * fVar25 - fVar1 * fVar31) + fVar2 * fVar33;
  fVar15 = (fVar22 * fVar27 - fVar3 * fVar31) + fVar2 * fVar24;
  fVar20 = (fVar22 * fVar29 - fVar3 * fVar33) + fVar1 * fVar24;
  fVar22 = ((fVar21 * param_2->M[0][0] - fVar23 * param_2->M[1][0]) + fVar15 * param_2->M[2][0]) -
           fVar20 * param_2->M[3][0];
  if ((fVar22 != 0.0) && (iVar14 = _finite((double)fVar22), iVar14 != 0)) {
    fVar18 = param_2->M[2][1];
    fVar1 = param_2->M[1][1];
    fVar2 = param_2->M[0][1];
    fVar3 = param_2->M[1][3];
    fVar17 = param_2->M[2][3];
    fVar4 = param_2->M[2][0];
    fVar5 = param_2->M[0][0];
    fVar22 = __real_3f800000 / fVar22;
    fVar6 = param_2->M[3][1];
    fVar7 = param_2->M[1][0];
    fVar8 = param_2->M[3][0];
    fVar19 = param_2->M[3][3];
    fVar16 = fVar1 * fVar17 - fVar3 * fVar18;
    fVar9 = param_2->M[3][2];
    fVar30 = param_2->M[0][3];
    fVar10 = param_2->M[1][2];
    fVar35 = fVar19 * fVar1 - fVar6 * fVar3;
    fVar11 = param_2->M[2][2];
    fVar26 = fVar19 * fVar18 - fVar6 * fVar17;
    fVar34 = fVar2 * fVar17 - fVar30 * fVar18;
    fVar28 = fVar2 * fVar19 - fVar30 * fVar6;
    fVar30 = fVar2 * fVar3 - fVar30 * fVar1;
    fVar17 = fVar11 * fVar1 - fVar10 * fVar18;
    fVar36 = fVar9 * fVar1 - fVar10 * fVar6;
    fVar3 = param_2->M[0][2];
    fVar32 = fVar9 * fVar18 - fVar11 * fVar6;
    fVar19 = fVar11 * fVar2 - fVar3 * fVar18;
    fVar18 = fVar9 * fVar2 - fVar3 * fVar6;
    param_1->M[0][0] = fVar22 * fVar21;
    uVar12 = __xmm_80000000800000008000000080000000;
    fVar21 = fVar10 * fVar2 - fVar3 * fVar1;
    param_1->M[0][1] = (float)((uint)(fVar22 * fVar23) ^ __xmm_80000000800000008000000080000000);
    param_1->M[0][2] = fVar22 * fVar15;
    param_1->M[0][3] = (float)((uint)(fVar22 * fVar20) ^ uVar12);
    param_1->M[1][0] =
         (float)((uint)(((fVar7 * fVar25 - fVar4 * fVar27) + fVar8 * fVar29) * fVar22) ^ uVar12);
    param_1->M[1][1] = ((fVar5 * fVar25 - fVar4 * fVar31) + fVar8 * fVar33) * fVar22;
    param_1->M[1][2] =
         (float)((uint)(((fVar5 * fVar27 - fVar7 * fVar31) + fVar8 * fVar24) * fVar22) ^ uVar12);
    param_1->M[1][3] = ((fVar5 * fVar29 - fVar7 * fVar33) + fVar4 * fVar24) * fVar22;
    param_1->M[2][0] = ((fVar7 * fVar26 - fVar4 * fVar35) + fVar8 * fVar16) * fVar22;
    param_1->M[2][1] =
         (float)((uint)(((fVar5 * fVar26 - fVar4 * fVar28) + fVar8 * fVar34) * fVar22) ^ uVar12);
    param_1->M[2][2] = ((fVar5 * fVar35 - fVar7 * fVar28) + fVar8 * fVar30) * fVar22;
    param_1->M[2][3] =
         (float)((uint)(((fVar5 * fVar16 - fVar7 * fVar34) + fVar4 * fVar30) * fVar22) ^ uVar12);
    param_1->M[3][0] =
         (float)((uint)(((fVar7 * fVar32 - fVar4 * fVar36) + fVar8 * fVar17) * fVar22) ^ uVar12);
    param_1->M[3][1] = ((fVar5 * fVar32 - fVar4 * fVar18) + fVar8 * fVar19) * fVar22;
    param_1->M[3][2] =
         (float)((uint)(((fVar5 * fVar36 - fVar7 * fVar18) + fVar8 * fVar21) * fVar22) ^ uVar12);
    param_1->M[3][3] = ((fVar5 * fVar17 - fVar7 * fVar19) + fVar4 * fVar21) * fVar22;
    return true;
  }
  uVar13 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)param_1->M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(param_1->M[0] + 2) = uVar13;
  uVar13 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)param_1->M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(param_1->M[1] + 2) = uVar13;
  uVar13 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)param_1->M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(param_1->M[2] + 2) = uVar13;
  uVar13 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)param_1->M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(param_1->M[3] + 2) = uVar13;
  return false;
}

// MatrixInverse @ 1417e3a00

bool __cdecl FMath::MatrixInverse(TMatrix<double> *param_1,TMatrix<double> *param_2)

{
  double dVar1;
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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  int iVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint uVar32;
  double dVar33;
  uint uVar34;
  double dVar35;
  
  dVar1 = param_2->M[3][3];
  dVar30 = param_2->M[3][2];
  dVar2 = param_2->M[1][2];
  dVar35 = param_2->M[1][3];
  dVar33 = param_2->M[0][3];
  dVar3 = param_2->M[2][3];
  dVar29 = param_2->M[2][2];
  dVar4 = param_2->M[0][2];
  dVar19 = dVar29 * dVar1 - dVar3 * dVar30;
  dVar5 = param_2->M[2][1];
  dVar21 = dVar2 * dVar1 - dVar35 * dVar30;
  dVar6 = param_2->M[3][1];
  dVar22 = dVar2 * dVar3 - dVar35 * dVar29;
  dVar7 = param_2->M[1][1];
  dVar23 = dVar4 * dVar1 - dVar33 * dVar30;
  dVar1 = param_2->M[0][1];
  dVar18 = dVar4 * dVar35 - dVar33 * dVar2;
  dVar3 = dVar4 * dVar3 - dVar33 * dVar29;
  dVar33 = (dVar7 * dVar19 - dVar5 * dVar21) + dVar6 * dVar22;
  dVar2 = (dVar1 * dVar19 - dVar5 * dVar23) + dVar6 * dVar3;
  dVar30 = (dVar1 * dVar21 - dVar7 * dVar23) + dVar6 * dVar18;
  dVar35 = (dVar1 * dVar22 - dVar7 * dVar3) + dVar5 * dVar18;
  dVar1 = ((dVar33 * param_2->M[0][0] - dVar2 * param_2->M[1][0]) + dVar30 * param_2->M[2][0]) -
          dVar35 * param_2->M[3][0];
  if ((dVar1 != 0.0) && (iVar28 = _finite(dVar1), iVar28 != 0)) {
    dVar29 = param_2->M[2][1];
    dVar4 = param_2->M[1][1];
    dVar5 = param_2->M[0][1];
    dVar6 = param_2->M[1][3];
    dVar7 = param_2->M[2][3];
    dVar8 = param_2->M[2][0];
    dVar9 = param_2->M[0][0];
    dVar1 = __real_3ff0000000000000 / dVar1;
    dVar10 = param_2->M[3][1];
    dVar11 = param_2->M[1][0];
    dVar12 = param_2->M[3][0];
    dVar13 = param_2->M[3][3];
    dVar17 = dVar4 * dVar7 - dVar6 * dVar29;
    dVar14 = param_2->M[3][2];
    dVar15 = param_2->M[0][3];
    dVar16 = param_2->M[1][2];
    dVar26 = dVar13 * dVar4 - dVar10 * dVar6;
    dVar31 = param_2->M[2][2];
    dVar20 = dVar13 * dVar29 - dVar10 * dVar7;
    dVar25 = dVar5 * dVar7 - dVar15 * dVar29;
    dVar13 = dVar5 * dVar13 - dVar15 * dVar10;
    dVar15 = dVar5 * dVar6 - dVar15 * dVar4;
    dVar7 = dVar31 * dVar4 - dVar16 * dVar29;
    dVar6 = param_2->M[0][2];
    dVar27 = dVar14 * dVar4 - dVar16 * dVar10;
    dVar24 = dVar14 * dVar29 - dVar31 * dVar10;
    dVar31 = dVar31 * dVar5 - dVar6 * dVar29;
    dVar29 = dVar14 * dVar5 - dVar6 * dVar10;
    param_1->M[0][0] = dVar1 * dVar33;
    dVar33 = dVar16 * dVar5 - dVar6 * dVar4;
    dVar2 = dVar1 * dVar2;
    uVar32 = (uint)__xmm_80000000000000008000000000000000;
    uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    param_1->M[0][1] =
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar34,SUB84(dVar2,0) ^ uVar32);
    dVar35 = dVar1 * dVar35;
    param_1->M[0][2] = dVar1 * dVar30;
    param_1->M[0][3] =
         (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar34,SUB84(dVar35,0) ^ uVar32);
    dVar30 = ((dVar11 * dVar19 - dVar8 * dVar21) + dVar12 * dVar22) * dVar1;
    param_1->M[1][0] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar34,SUB84(dVar30,0) ^ uVar32);
    param_1->M[1][1] = ((dVar9 * dVar19 - dVar8 * dVar23) + dVar12 * dVar3) * dVar1;
    dVar30 = ((dVar9 * dVar21 - dVar11 * dVar23) + dVar12 * dVar18) * dVar1;
    param_1->M[1][2] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar34,SUB84(dVar30,0) ^ uVar32);
    param_1->M[1][3] = ((dVar9 * dVar22 - dVar11 * dVar3) + dVar8 * dVar18) * dVar1;
    param_1->M[2][0] = ((dVar11 * dVar20 - dVar8 * dVar26) + dVar12 * dVar17) * dVar1;
    dVar30 = ((dVar9 * dVar20 - dVar8 * dVar13) + dVar12 * dVar25) * dVar1;
    param_1->M[2][1] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar34,SUB84(dVar30,0) ^ uVar32);
    param_1->M[2][2] = ((dVar9 * dVar26 - dVar11 * dVar13) + dVar12 * dVar15) * dVar1;
    dVar30 = ((dVar9 * dVar17 - dVar11 * dVar25) + dVar8 * dVar15) * dVar1;
    param_1->M[2][3] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar34,SUB84(dVar30,0) ^ uVar32);
    dVar30 = ((dVar11 * dVar24 - dVar8 * dVar27) + dVar12 * dVar7) * dVar1;
    param_1->M[3][0] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar34,SUB84(dVar30,0) ^ uVar32);
    param_1->M[3][1] = ((dVar9 * dVar24 - dVar8 * dVar29) + dVar12 * dVar31) * dVar1;
    dVar30 = ((dVar9 * dVar27 - dVar11 * dVar29) + dVar12 * dVar33) * dVar1;
    param_1->M[3][2] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar34,SUB84(dVar30,0) ^ uVar32);
    param_1->M[3][3] = ((dVar9 * dVar7 - dVar11 * dVar31) + dVar8 * dVar33) * dVar1;
    return true;
  }
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  param_1->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  param_1->M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  param_1->M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  param_1->M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  param_1->M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  param_1->M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  param_1->M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  param_1->M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  param_1->M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  param_1->M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  param_1->M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  param_1->M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  param_1->M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  param_1->M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  param_1->M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  param_1->M[3][3] = dVar1;
  return false;
}

// MemoryTest @ 1417e4290

bool __cdecl FMath::MemoryTest(void *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint local_res18 [4];
  
  local_res18[0] = 0xdeadbeef;
  uVar7 = (ulonglong)(param_2 >> 2);
  local_res18[1] = 0x1337c0de;
  bVar5 = true;
  lVar6 = 0;
  do {
    if (param_2 >> 2 == 0) {
      if (param_2 >> 2 != 0) goto LAB_1417e432f;
    }
    else {
      uVar2 = local_res18[lVar6];
      puVar3 = param_1;
      uVar4 = uVar7;
      do {
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar3 = param_1;
      uVar4 = uVar7;
      do {
        if (*puVar3 != uVar2) {
          FGenericPlatformMisc::LowLevelOutputDebugStringf
                    (L"Failed memory test at 0x%08x, wrote: 0x%08x, read: 0x%08x\n");
          bVar5 = false;
        }
        *puVar3 = ~uVar2;
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
LAB_1417e432f:
      uVar2 = local_res18[lVar6];
      puVar3 = (uint *)((longlong)param_1 + uVar7 * 4);
      uVar4 = uVar7;
      do {
        puVar1 = puVar3 + -1;
        puVar3 = puVar3 + -1;
        if (*puVar1 != ~uVar2) {
          FGenericPlatformMisc::LowLevelOutputDebugStringf
                    (L"Failed memory test at 0x%08x, wrote: 0x%08x, read: 0x%08x\n");
          bVar5 = false;
        }
        *puVar3 = uVar2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    lVar6 = lVar6 + 1;
    if (1 < lVar6) {
      return bVar5;
    }
  } while( true );
}

// PerlinNoise1D @ 1417e9230

float __cdecl FMath::PerlinNoise1D(float param_1)

{
  ulonglong uVar1;
  float fVar2;
  undefined1 in_XMM3 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  
  auVar3 = roundps(in_XMM3,ZEXT416((uint)param_1),1);
  fVar5 = param_1 - auVar3._0_4_;
  uVar1 = (ulonglong)((int)auVar3._0_4_ & 0xff);
  fVar2 = fVar5 * fVar5 * fVar5;
  fVar4 = fVar5 * *(float *)((longlong)
                             &`float___cdecl_FMathPerlinHelpers::Grad1(int,float)'::__l2::
                              Grad1Scales +
                            (ulonglong)(FMathPerlinHelpers::Permutation[uVar1] & 0xf) * 4);
  return ((fVar5 - __real_3f800000) *
          *(float *)((longlong)
                     &`float___cdecl_FMathPerlinHelpers::Grad1(int,float)'::__l2::Grad1Scales +
                    (ulonglong)(FMathPerlinHelpers::Permutation[uVar1 + 1] & 0xf) * 4) - fVar4) *
         ((fVar2 * fVar5 * __real_41400000 - fVar2 * __real_41f00000) * fVar5 +
         fVar2 * __real_41a00000) + fVar4 + fVar4;
}

// PerlinNoise2D @ 1417e92e0

float __cdecl FMath::PerlinNoise2D(TVector2<double> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar10 = (float)(param_1->field0_0x0)._s_0.X;
  fVar12 = (float)(param_1->field0_0x0)._s_0.Y;
  auVar8 = roundps(in_XMM3,ZEXT416((uint)fVar10),1);
  fVar10 = fVar10 - auVar8._0_4_;
  auVar7 = roundps(in_XMM2,ZEXT416((uint)fVar12),1);
  fVar12 = fVar12 - auVar7._0_4_;
  uVar2 = (int)auVar7._0_4_ & 0xff;
  fVar9 = fVar10 - __real_3f800000;
  uVar1 = (ulonglong)((int)auVar8._0_4_ & 0xff);
  fVar11 = fVar12 - __real_3f800000;
  lVar4 = (longlong)(int)(FMathPerlinHelpers::Permutation[uVar1 + 1] + uVar2);
  fVar13 = ((fVar10 * __real_40c00000 - __real_41700000) * fVar10 + __real_41200000) * fVar10 *
           fVar10 * fVar10;
  fVar14 = ((fVar12 * __real_40c00000 - __real_41700000) * fVar12 + __real_41200000) * fVar12;
  fVar5 = fVar12 * fVar12;
  switch(FMathPerlinHelpers::Permutation[lVar4 + 1] & 7) {
  case 0:
    fVar6 = fVar9;
    break;
  case 1:
    fVar6 = fVar11 + fVar9;
    break;
  case 2:
    fVar6 = fVar11;
    break;
  case 3:
    fVar6 = fVar11 - fVar9;
    break;
  case 4:
    fVar6 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
    break;
  case 5:
    fVar6 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000) - fVar11;
    break;
  case 6:
    fVar6 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
    break;
  case 7:
    fVar6 = fVar9 - fVar11;
  }
  lVar3 = (longlong)(int)(FMathPerlinHelpers::Permutation[uVar1] + uVar2);
  switch(FMathPerlinHelpers::Permutation[lVar3 + 1] & 7) {
  case 0:
    fVar11 = fVar10;
    break;
  case 1:
    fVar11 = fVar11 + fVar10;
    break;
  case 3:
    fVar11 = fVar11 - fVar10;
    break;
  case 4:
    fVar11 = fVar10;
  case 6:
    fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
    break;
  case 5:
    fVar11 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000) - fVar11;
    break;
  case 7:
    fVar11 = fVar10 - fVar11;
  }
  switch(FMathPerlinHelpers::Permutation[lVar4] & 7) {
  case 1:
    fVar9 = fVar9 + fVar12;
    break;
  case 2:
    fVar9 = fVar12;
    break;
  case 3:
    fVar9 = fVar12 - fVar9;
    break;
  case 5:
    fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
  case 7:
    fVar9 = fVar9 - fVar12;
    break;
  case 6:
    fVar9 = fVar12;
  case 4:
    fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
  }
  switch(FMathPerlinHelpers::Permutation[lVar3] & 7) {
  case 1:
    fVar12 = fVar12 + fVar10;
  case 2:
    fVar10 = fVar12;
    break;
  case 3:
    fVar10 = fVar12 - fVar10;
    break;
  case 5:
    fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
  case 7:
    fVar10 = fVar10 - fVar12;
    break;
  case 6:
    fVar10 = fVar12;
  case 4:
    fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
  }
  fVar10 = (fVar9 - fVar10) * fVar13 + fVar10;
  return (((fVar6 - fVar11) * fVar13 + fVar11) - fVar10) * fVar14 * fVar5 + fVar10;
}

// PerlinNoise3D @ 1417e95e0

float __cdecl FMath::PerlinNoise3D(TVector<double> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar19 = (float)(param_1->field0_0x0)._s_0.X;
  fVar18 = (float)(param_1->field0_0x0)._s_0.Y;
  fVar16 = (float)(param_1->field0_0x0)._s_0.Z;
  auVar13 = roundps(in_XMM4,ZEXT416((uint)fVar19),1);
  fVar19 = fVar19 - auVar13._0_4_;
  auVar11 = roundps(in_XMM3,ZEXT416((uint)fVar18),1);
  fVar18 = fVar18 - auVar11._0_4_;
  auVar10 = roundps(in_XMM2,ZEXT416((uint)fVar16),1);
  fVar16 = fVar16 - auVar10._0_4_;
  uVar4 = (int)auVar11._0_4_ & 0xff;
  fVar14 = fVar19 - __real_3f800000;
  uVar5 = (int)auVar10._0_4_ & 0xff;
  uVar3 = (ulonglong)((int)auVar13._0_4_ & 0xff);
  fVar15 = fVar18 - __real_3f800000;
  lVar1 = (longlong)(int)(FMathPerlinHelpers::Permutation[uVar3] + uVar4);
  fVar17 = fVar16 - __real_3f800000;
  lVar2 = (longlong)(int)(FMathPerlinHelpers::Permutation[uVar3 + 1] + uVar4);
  fVar21 = ((fVar16 * __real_40c00000 - __real_41700000) * fVar16 + __real_41200000) * fVar16;
  fVar12 = ((fVar19 * __real_40c00000 - __real_41700000) * fVar19 + __real_41200000) * fVar19 *
           fVar19 * fVar19;
  fVar20 = ((fVar18 * __real_40c00000 - __real_41700000) * fVar18 + __real_41200000) * fVar18 *
           fVar18 * fVar18;
  fVar6 = fVar16 * fVar16;
  switch(FMathPerlinHelpers::Permutation
         [(longlong)(int)(FMathPerlinHelpers::Permutation[lVar2 + 1] + uVar5) + 1] & 0xf) {
  case 0:
    fVar8 = fVar17 + fVar14;
    break;
  default:
    fVar8 = fVar15 + fVar14;
    break;
  case 2:
    fVar8 = fVar17 + fVar15;
    break;
  case 3:
  case 0xd:
    fVar8 = fVar15 - fVar14;
    break;
  case 4:
    fVar8 = fVar17 - fVar14;
    break;
  case 5:
    fVar8 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar15;
    break;
  case 6:
  case 0xe:
    fVar8 = fVar17 - fVar15;
    break;
  case 7:
    fVar8 = fVar14 - fVar15;
    break;
  case 8:
    fVar8 = fVar14 - fVar17;
    break;
  case 9:
    fVar8 = fVar15 - fVar17;
    break;
  case 10:
    fVar8 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar17;
    break;
  case 0xb:
  case 0xf:
    fVar8 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000) - fVar17;
  }
  switch(FMathPerlinHelpers::Permutation
         [(longlong)(int)(FMathPerlinHelpers::Permutation[lVar1 + 1] + uVar5) + 1] & 0xf) {
  case 0:
    fVar7 = fVar17 + fVar19;
    break;
  default:
    fVar7 = fVar15 + fVar19;
    break;
  case 2:
    fVar7 = fVar17 + fVar15;
    break;
  case 3:
  case 0xd:
    fVar7 = fVar15 - fVar19;
    break;
  case 4:
    fVar7 = fVar17 - fVar19;
    break;
  case 5:
    fVar7 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000) - fVar15;
    break;
  case 6:
  case 0xe:
    fVar7 = fVar17 - fVar15;
    break;
  case 7:
    fVar7 = fVar19 - fVar15;
    break;
  case 8:
    fVar7 = fVar19 - fVar17;
    break;
  case 9:
    fVar7 = fVar15 - fVar17;
    break;
  case 10:
    fVar7 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000) - fVar17;
    break;
  case 0xb:
  case 0xf:
    fVar7 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000) - fVar17;
  }
  switch(FMathPerlinHelpers::Permutation
         [(longlong)(int)(FMathPerlinHelpers::Permutation[lVar2] + uVar5) + 1] & 0xf) {
  case 0:
    fVar9 = fVar17 + fVar14;
    break;
  default:
    fVar9 = fVar14 + fVar18;
    break;
  case 2:
    fVar9 = fVar17 + fVar18;
    break;
  case 3:
  case 0xd:
    fVar9 = fVar18 - fVar14;
    break;
  case 4:
    fVar9 = fVar17 - fVar14;
    break;
  case 5:
    fVar9 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar18;
    break;
  case 6:
  case 0xe:
    fVar9 = fVar17 - fVar18;
    break;
  case 7:
    fVar9 = fVar14 - fVar18;
    break;
  case 8:
    fVar9 = fVar14 - fVar17;
    break;
  case 9:
    fVar9 = fVar18 - fVar17;
    break;
  case 10:
    fVar9 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar17;
    break;
  case 0xb:
  case 0xf:
    fVar9 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000) - fVar17;
  }
  switch(FMathPerlinHelpers::Permutation
         [(longlong)(int)(FMathPerlinHelpers::Permutation[lVar1] + uVar5) + 1] & 0xf) {
  case 0:
    fVar17 = fVar17 + fVar19;
    break;
  default:
    fVar17 = fVar18 + fVar19;
    break;
  case 2:
    fVar17 = fVar17 + fVar18;
    break;
  case 3:
  case 0xd:
    fVar17 = fVar18;
  case 4:
    fVar17 = fVar17 - fVar19;
    break;
  case 5:
    fVar17 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
  case 6:
  case 0xe:
    fVar17 = fVar17 - fVar18;
    break;
  case 7:
    fVar17 = fVar19 - fVar18;
    break;
  case 8:
    fVar17 = fVar19 - fVar17;
    break;
  case 9:
    fVar17 = fVar18 - fVar17;
    break;
  case 10:
    fVar17 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000) - fVar17;
    break;
  case 0xb:
  case 0xf:
    fVar17 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000) - fVar17;
  }
  fVar17 = (fVar9 - fVar17) * fVar12 + fVar17;
  switch(FMathPerlinHelpers::Permutation[(int)(FMathPerlinHelpers::Permutation[lVar2 + 1] + uVar5)]
         & 0xf) {
  case 0:
    fVar9 = fVar14 + fVar16;
    break;
  default:
    fVar9 = fVar15 + fVar14;
    break;
  case 2:
    fVar9 = fVar15 + fVar16;
    break;
  case 3:
  case 0xd:
    fVar9 = fVar15 - fVar14;
    break;
  case 4:
    fVar9 = fVar16 - fVar14;
    break;
  case 5:
    fVar9 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar15;
    break;
  case 6:
  case 0xe:
    fVar9 = fVar16 - fVar15;
    break;
  case 7:
    fVar9 = fVar14 - fVar15;
    break;
  case 8:
    fVar9 = fVar14 - fVar16;
    break;
  case 9:
    fVar9 = fVar15 - fVar16;
    break;
  case 10:
    fVar9 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar16;
    break;
  case 0xb:
  case 0xf:
    fVar9 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000) - fVar16;
  }
  switch(FMathPerlinHelpers::Permutation[(int)(FMathPerlinHelpers::Permutation[lVar1 + 1] + uVar5)]
         & 0xf) {
  case 0:
    fVar15 = fVar16;
  default:
    fVar15 = fVar15 + fVar19;
    break;
  case 2:
    fVar15 = fVar15 + fVar16;
    break;
  case 4:
    fVar15 = fVar16;
  case 3:
  case 0xd:
    fVar15 = fVar15 - fVar19;
    break;
  case 5:
    fVar15 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000) - fVar15;
    break;
  case 6:
  case 0xe:
    fVar15 = fVar16 - fVar15;
    break;
  case 7:
    fVar15 = fVar19 - fVar15;
    break;
  case 8:
    fVar15 = fVar19;
  case 9:
    fVar15 = fVar15 - fVar16;
    break;
  case 10:
    fVar15 = fVar19;
  case 0xb:
  case 0xf:
    fVar15 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000) - fVar16;
  }
  switch(FMathPerlinHelpers::Permutation[(int)(FMathPerlinHelpers::Permutation[lVar2] + uVar5)] &
         0xf) {
  case 0:
    fVar14 = fVar14 + fVar16;
    break;
  case 2:
    fVar14 = fVar16;
  default:
    fVar14 = fVar14 + fVar18;
    break;
  case 3:
  case 0xd:
    fVar14 = fVar18 - fVar14;
    break;
  case 4:
    fVar14 = fVar16 - fVar14;
    break;
  case 5:
    fVar14 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
  case 7:
    fVar14 = fVar14 - fVar18;
    break;
  case 6:
  case 0xe:
    fVar14 = fVar16 - fVar18;
    break;
  case 9:
    fVar14 = fVar18;
  case 8:
    fVar14 = fVar14 - fVar16;
    break;
  case 0xb:
  case 0xf:
    fVar14 = fVar18;
  case 10:
    fVar14 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar16;
  }
  switch(FMathPerlinHelpers::Permutation[(int)(FMathPerlinHelpers::Permutation[lVar1] + uVar5)] &
         0xf) {
  case 0:
    fVar18 = fVar16 + fVar19;
    break;
  default:
    fVar18 = fVar18 + fVar19;
    break;
  case 2:
    fVar18 = fVar16 + fVar18;
    break;
  case 3:
  case 0xd:
    fVar16 = fVar18;
  case 4:
    fVar18 = fVar16 - fVar19;
    break;
  case 5:
    fVar16 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
  case 6:
  case 0xe:
    fVar18 = fVar16 - fVar18;
    break;
  case 7:
    fVar18 = fVar19 - fVar18;
    break;
  case 10:
    fVar19 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
  case 8:
    fVar18 = fVar19 - fVar16;
    break;
  case 0xb:
  case 0xf:
    fVar18 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
  case 9:
    fVar18 = fVar18 - fVar16;
  }
  fVar18 = (fVar14 - fVar18) * fVar12 + fVar18;
  fVar18 = (((fVar9 - fVar15) * fVar12 + fVar15) - fVar18) * fVar20 + fVar18;
  fVar14 = ((((((fVar8 - fVar7) * fVar12 + fVar7) - fVar17) * fVar20 + fVar17) - fVar18) *
            fVar21 * fVar6 + fVar18) * __real_3f7851ec;
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  if (fVar14 <= __real_bf800000) {
    fVar14 = __real_bf800000;
  }
  return fVar14;
}

// PlaneAABBIntersection @ 1417e9eb0

bool __cdecl FMath::PlaneAABBIntersection(TPlane<double> *param_1,TBox<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  TBox<double> *pTVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  TBox<double> *pTVar12;
  
  dVar2 = (double)param_1->_padding_;
  pdVar10 = &(param_2->Max).field0_0x0._s_0.Y;
  dVar3 = (double)param_1->_padding_;
  pdVar1 = &(param_2->Min).field0_0x0._s_0.Z;
  pdVar11 = &(param_2->Max).field0_0x0._s_0.Z;
  dVar4 = (double)param_1->_padding_;
  pTVar6 = param_2;
  if (dVar3 < 0.0) {
    pTVar6 = (TBox<double> *)&param_2->Max;
  }
  pdVar9 = &(param_2->Min).field0_0x0._s_0.Y;
  pdVar7 = pdVar9;
  if (dVar4 < 0.0) {
    pdVar7 = pdVar10;
  }
  pdVar8 = pdVar1;
  if (dVar2 < 0.0) {
    pdVar8 = pdVar11;
  }
  if (dVar4 < 0.0) {
    pdVar10 = pdVar9;
  }
  pTVar12 = (TBox<double> *)&param_2->Max;
  if (dVar3 < 0.0) {
    pTVar12 = param_2;
  }
  if (dVar2 < 0.0) {
    pdVar11 = pdVar1;
  }
  if (0.0 <= (dVar4 * *pdVar10 + dVar3 * (pTVar12->Min).field0_0x0._s_0.X + dVar2 * *pdVar11) -
             param_1->W) {
    uVar5 = (uint)(0.0 < (*pdVar7 * dVar4 + (pTVar6->Min).field0_0x0._s_0.X * dVar3 +
                         *pdVar8 * dVar2) - param_1->W);
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5 == 0;
}

// PlaneAABBRelativePosition @ 1417e9fb0

int __cdecl FMath::PlaneAABBRelativePosition(TPlane<double> *param_1,TBox<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  TBox<double> *pTVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  TBox<double> *pTVar10;
  double *pdVar11;
  double *pdVar12;
  
  dVar2 = (double)param_1->_padding_;
  pdVar11 = &(param_2->Max).field0_0x0._s_0.Y;
  dVar3 = (double)param_1->_padding_;
  dVar4 = (double)param_1->_padding_;
  pdVar1 = &(param_2->Min).field0_0x0._s_0.Z;
  pdVar12 = &(param_2->Max).field0_0x0._s_0.Z;
  pTVar6 = param_2;
  if (dVar4 < 0.0) {
    pTVar6 = (TBox<double> *)&param_2->Max;
  }
  pdVar9 = &(param_2->Min).field0_0x0._s_0.Y;
  pdVar7 = pdVar9;
  if (dVar2 < 0.0) {
    pdVar7 = pdVar11;
  }
  pdVar8 = pdVar1;
  if (dVar3 < 0.0) {
    pdVar8 = pdVar12;
  }
  pTVar10 = (TBox<double> *)&param_2->Max;
  if (dVar4 < 0.0) {
    pTVar10 = param_2;
  }
  if (dVar2 < 0.0) {
    pdVar11 = pdVar9;
  }
  if (dVar3 < 0.0) {
    pdVar12 = pdVar1;
  }
  if (0.0 <= (dVar4 * (pTVar10->Min).field0_0x0._s_0.X + dVar2 * *pdVar11 + dVar3 * *pdVar12) -
             param_1->W) {
    uVar5 = (uint)(0.0 < ((pTVar6->Min).field0_0x0._s_0.X * dVar4 + dVar2 * *pdVar7 +
                         *pdVar8 * dVar3) - param_1->W);
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

// PointDistToLine @ 1417ea0a0

float __cdecl
FMath::PointDistToLine(TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar7 = dVar5 * dVar5 + dVar1 * dVar1 + dVar8 * dVar8;
  if (dVar7 == __real_3ff0000000000000) {
    uVar2 = (param_2->field0_0x0)._s_0.X;
    uVar3 = (param_2->field0_0x0)._s_0.Y;
    uVar4 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar2 = dVar1 * dVar7;
      uVar3 = dVar5 * dVar7;
      uVar4 = dVar8 * dVar7;
    }
  }
  dVar8 = ((param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) * (double)uVar3 +
          ((param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) * (double)uVar2 +
          ((param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z) * (double)uVar4;
  dVar5 = (dVar8 * (double)uVar3 + (param_3->field0_0x0)._s_0.Y) - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (dVar8 * (double)uVar4 + (param_3->field0_0x0)._s_0.Z) - (param_1->field0_0x0)._s_0.Z;
  dVar8 = (dVar8 * (double)uVar2 + (param_3->field0_0x0)._s_0.X) - (param_1->field0_0x0)._s_0.X;
  auVar6._0_8_ = dVar5 * dVar5 + dVar8 * dVar8 + dVar1 * dVar1;
  auVar6._8_8_ = 0;
  auVar6 = sqrtpd(auVar6,auVar6);
  return (float)auVar6._0_8_;
}

// PointDistToLine @ 1417ea210

float __cdecl
FMath::PointDistToLine
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar9 = (param_2->field0_0x0)._s_0.Y;
  dVar8 = dVar9 * dVar9 + dVar5 * dVar5 + dVar1 * dVar1;
  if (dVar8 == __real_3ff0000000000000) {
    uVar2 = (param_2->field0_0x0)._s_0.X;
    uVar3 = (param_2->field0_0x0)._s_0.Y;
    uVar4 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar2 = dVar5 * dVar8;
      uVar3 = dVar9 * dVar8;
      uVar4 = dVar1 * dVar8;
    }
  }
  dVar9 = ((param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) * (double)uVar3 +
          ((param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) * (double)uVar2 +
          ((param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z) * (double)uVar4;
  dVar1 = dVar9 * (double)uVar3 + (param_3->field0_0x0)._s_0.Y;
  dVar5 = dVar9 * (double)uVar2 + (param_3->field0_0x0)._s_0.X;
  dVar9 = dVar9 * (double)uVar4 + (param_3->field0_0x0)._s_0.Z;
  (param_4->field0_0x0)._s_0.X = dVar5;
  (param_4->field0_0x0)._s_0.Y = dVar1;
  (param_4->field0_0x0)._s_0.Z = dVar9;
  dVar1 = dVar1 - (param_1->field0_0x0)._s_0.Y;
  dVar5 = dVar5 - (param_1->field0_0x0)._s_0.X;
  dVar9 = dVar9 - (param_1->field0_0x0)._s_0.Z;
  auVar6._0_8_ = dVar5 * dVar5;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar1 * dVar1 + auVar6._0_8_ + dVar9 * dVar9;
  auVar7 = sqrtpd(auVar6,auVar7);
  return (float)auVar7._0_8_;
}

// PointDistToSegment @ 1417ea370

float __cdecl
FMath::PointDistToSegment
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  TVector<double>_u_0 local_28;
  
  ClosestPointOnSegment<double>((TVector<double> *)&local_28._s_0,param_1,param_2,param_3);
  dVar5 = (param_1->field0_0x0)._s_0.Y - local_28._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z - local_28._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.X - local_28._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + auVar2._0_8_;
  auVar3 = sqrtpd(auVar2,auVar3);
  return (float)auVar3._0_8_;
}

// PointDistToSegmentSquared @ 1417ea3e0

float __cdecl
FMath::PointDistToSegmentSquared
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double>_u_0 local_28;
  
  ClosestPointOnSegment<double>((TVector<double> *)&local_28._s_0,param_1,param_2,param_3);
  dVar3 = (param_1->field0_0x0)._s_0.Y - local_28._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z - local_28._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X - local_28._s_0.X;
  return (float)(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
}

// PointsAreCoplanar @ 1417eab60

bool __cdecl
FMath::PointsAreCoplanar
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  
  if (3 < param_1->ArrayNum) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    dVar22 = *(double *)(pFVar6 + 0x18);
    dVar21 = *(double *)(pFVar6 + 0x20);
    dVar1 = *(double *)(pFVar6 + 0x28);
    dVar2 = *(double *)pFVar6;
    dVar3 = *(double *)(pFVar6 + 8);
    dVar4 = *(double *)(pFVar6 + 0x10);
    if ((param_1->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      uVar16 = (*pcVar8)();
      return (bool)uVar16;
    }
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar7 = (param_1->AllocatorInstance).Data;
    dVar9 = (*(double *)(pFVar6 + 0x38) - *(double *)(pFVar7 + 8)) * (dVar1 - dVar4) -
            (*(double *)(pFVar6 + 0x40) - *(double *)(pFVar7 + 0x10)) * (dVar21 - dVar3);
    dVar1 = (*(double *)(pFVar6 + 0x40) - *(double *)(pFVar7 + 0x10)) * (dVar22 - dVar2) -
            (*(double *)(pFVar6 + 0x30) - *(double *)pFVar7) * (dVar1 - dVar4);
    dVar22 = (*(double *)(pFVar6 + 0x30) - *(double *)pFVar7) * (dVar21 - dVar3) -
             (*(double *)(pFVar6 + 0x38) - *(double *)(pFVar7 + 8)) * (dVar22 - dVar2);
    dVar21 = dVar1 * dVar1 + dVar9 * dVar9 + dVar22 * dVar22;
    uVar10 = dVar9;
    uVar11 = dVar1;
    uVar12 = dVar22;
    if ((dVar21 != __real_3ff0000000000000) &&
       (uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar21)) {
      dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
      uVar10 = dVar9 * dVar21;
      uVar11 = dVar1 * dVar21;
      uVar12 = dVar22 * dVar21;
    }
    iVar5 = param_1->ArrayNum;
    uVar20 = 3;
    if (3 < (longlong)iVar5) {
      lVar18 = 3;
      lVar19 = 0x48;
      do {
        if ((param_1->ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar6 = (param_1->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar7 = (param_1->AllocatorInstance).Data;
        dVar22 = (*(double *)(pFVar7 + lVar19 + 8) - *(double *)(pFVar6 + 8)) * (double)uVar11 +
                 (*(double *)(pFVar7 + lVar19) - *(double *)pFVar6) * (double)uVar10 +
                 (*(double *)(pFVar7 + lVar19 + 0x10) - *(double *)(pFVar6 + 0x10)) * (double)uVar12
        ;
        if ((double)param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar14,SUB84(dVar22,0) & uVar13)) {
          return false;
        }
        uVar20 = uVar20 + 1;
        lVar18 = lVar18 + 1;
        lVar19 = lVar19 + 0x18;
      } while (lVar18 < iVar5);
    }
  }
  return true;
}

// RInterpConstantTo @ 1417ef260

TRotator<double> * __cdecl
FMath::RInterpConstantTo
          (TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,
          TRotator<double> *param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar3;
  undefined1 auVar2 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  
  if (param_3 != 0.0) {
    if (((param_1->Pitch != param_2->Pitch) || (param_2->Yaw != param_1->Yaw)) ||
       (param_2->Roll != param_1->Roll)) {
      if (param_4 <= 0.0) {
        dVar5 = param_2->Yaw;
        __return_storage_ptr__->Pitch = param_2->Pitch;
        __return_storage_ptr__->Yaw = dVar5;
        __return_storage_ptr__->Roll = param_2->Roll;
        return __return_storage_ptr__;
      }
      dVar32 = param_2->Pitch - param_1->Pitch;
      auVar25._0_8_ = param_2->Yaw - param_1->Yaw;
      auVar25._8_8_ = 0;
      auVar14._0_8_ = param_2->Roll - param_1->Roll;
      auVar13._8_4_ = SUB84(auVar25._0_8_,0);
      auVar13._0_8_ = dVar32;
      auVar13._12_4_ = (int)((ulonglong)auVar25._0_8_ >> 0x20);
      auVar13 = divpd(auVar13,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar13 = roundpd(auVar25,auVar13,3);
      dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar26._0_8_ = auVar13._0_8_ * dVar5;
      dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar26._8_8_ = auVar13._8_8_ * dVar4;
      auVar14._8_8_ = 0;
      dVar32 = dVar32 - auVar26._0_8_;
      dVar38 = auVar25._0_8_ - auVar26._8_8_;
      auVar13 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar13 = roundpd(auVar26,auVar13,3);
      dVar40 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar15._8_4_ = SUB84(dVar38,0);
      auVar15._0_8_ = dVar32;
      auVar15._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      dVar39 = auVar14._0_8_ - auVar13._0_8_ * dVar40;
      dVar41 = 0.0 - auVar13._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      dVar24 = auVar15._8_8_ + dVar4;
      uVar9 = -(ulonglong)(0.0 <= dVar32);
      uVar11 = -(ulonglong)(0.0 <= dVar38);
      auVar27._0_8_ = uVar9 & (ulonglong)dVar32;
      auVar27._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar38);
      auVar27._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar38) >> 0x20);
      auVar34._0_4_ = ~(uint)uVar9 & SUB84(dVar32 + dVar5,0);
      auVar34._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar5) >> 0x20);
      auVar34._8_4_ = ~(uint)uVar11 & SUB84(dVar24,0);
      auVar34._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
      auVar16._8_4_ = SUB84(dVar41,0);
      auVar16._0_8_ = dVar39;
      auVar16._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      auVar34 = auVar34 | auVar27;
      dVar24 = auVar16._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar9 = -(ulonglong)(0.0 <= dVar39);
      uVar11 = -(ulonglong)(0.0 <= dVar41);
      auVar36._0_4_ = ~(uint)uVar9 & SUB84(dVar39 + dVar40,0);
      auVar36._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar39 + dVar40) >> 0x20);
      auVar36._8_4_ = ~(uint)uVar11 & SUB84(dVar24,0);
      auVar36._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
      auVar33._0_8_ = uVar9 & (ulonglong)dVar39;
      auVar33._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar41);
      auVar33._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar41) >> 0x20);
      auVar36 = auVar36 | auVar33;
      uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar36._0_8_);
      uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar34._0_8_);
      uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar34._8_8_);
      auVar42._0_8_ = uVar10 & (ulonglong)(auVar34._0_8_ - dVar5);
      uVar9 = uVar12 & (ulonglong)(auVar34._8_8_ - dVar4);
      auVar42._8_4_ = (undefined4)uVar9;
      auVar42._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar17._0_4_ = ~(uint)uVar10 & auVar34._0_4_;
      auVar17._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar34._4_4_;
      auVar17._8_4_ = ~(uint)uVar12 & auVar34._8_4_;
      auVar17._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar34._12_4_;
      dVar5 = (double)(param_3 * param_4);
      auVar42 = auVar42 | auVar17;
      uVar1 = param_1->Pitch;
      uVar3 = param_1->Yaw;
      auVar7._4_8_ = auVar17._8_8_;
      auVar7._0_4_ = auVar42._4_4_;
      auVar18._0_8_ = auVar7._0_8_ << 0x20;
      auVar18._8_4_ = auVar42._8_4_;
      auVar18._12_4_ = auVar42._12_4_;
      dVar40 = (double)(uVar11 & (ulonglong)(auVar36._0_8_ - dVar40) |
                       CONCAT44(~(uint)(uVar11 >> 0x20) & auVar36._4_4_,
                                ~(uint)uVar11 & auVar36._0_4_));
      dVar4 = dVar5;
      if (auVar18._8_8_ <= dVar5) {
        dVar4 = auVar18._8_8_;
      }
      auVar8._4_8_ = auVar42._8_8_;
      auVar8._0_4_ = (int)((ulonglong)uVar1 >> 0x20);
      auVar19._0_8_ = auVar8._0_8_ << 0x20;
      auVar19._8_4_ = (int)uVar3;
      auVar19._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
      dVar32 = (double)(float)((uint)(param_3 * param_4) ^ __xmm_80000000800000008000000080000000);
      dVar24 = dVar5;
      if (auVar42._0_8_ <= dVar5) {
        dVar24 = auVar42._0_8_;
      }
      if (dVar40 <= dVar5) {
        dVar5 = dVar40;
      }
      if (dVar4 <= dVar32) {
        dVar4 = dVar32;
      }
      if (dVar24 <= dVar32) {
        dVar24 = dVar32;
      }
      if (dVar5 <= dVar32) {
        dVar5 = dVar32;
      }
      auVar28._0_8_ = dVar5 + param_1->Roll;
      auVar28._8_8_ = 0;
      __return_storage_ptr__->Pitch = dVar24 + (double)uVar1;
      __return_storage_ptr__->Yaw = dVar4 + auVar19._8_8_;
      __return_storage_ptr__->Roll = auVar28._0_8_;
      auVar2._0_8_ = __return_storage_ptr__->Pitch;
      auVar2._8_8_ = __return_storage_ptr__->Yaw;
      dVar41 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar13 = divpd(auVar2,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar13 = roundpd(auVar28,auVar13,3);
      dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar29._0_8_ = auVar13._0_8_ * dVar5;
      dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar29._8_8_ = auVar13._8_8_ * dVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = __return_storage_ptr__->Roll;
      auVar13 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar24 = (double)auVar2._0_8_ - auVar29._0_8_;
      dVar32 = (double)auVar2._8_8_ - auVar29._8_8_;
      auVar13 = roundpd(auVar29,auVar13,3);
      auVar21._8_4_ = SUB84(dVar32,0);
      auVar21._0_8_ = dVar24;
      auVar21._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      dVar38 = __return_storage_ptr__->Roll - auVar13._0_8_ * dVar41;
      dVar39 = 0.0 - auVar13._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      dVar40 = auVar21._8_8_ + dVar4;
      uVar9 = -(ulonglong)(0.0 <= dVar38);
      uVar10 = -(ulonglong)(0.0 <= dVar39);
      uVar11 = -(ulonglong)(0.0 <= dVar24);
      uVar12 = -(ulonglong)(0.0 <= dVar32);
      auVar30._0_8_ = uVar11 & (ulonglong)dVar24;
      auVar30._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar32);
      auVar30._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar32) >> 0x20);
      auVar37._0_4_ = ~(uint)uVar11 & SUB84(dVar24 + dVar5,0);
      auVar37._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar24 + dVar5) >> 0x20);
      auVar37._8_4_ = ~(uint)uVar12 & SUB84(dVar40,0);
      auVar37._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
      auVar22._8_4_ = SUB84(dVar39,0);
      auVar22._0_8_ = dVar38;
      auVar22._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      dVar40 = auVar22._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar37 = auVar37 | auVar30;
      auVar31._0_4_ = ~(uint)uVar9 & SUB84(dVar38 + dVar41,0);
      auVar31._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar38 + dVar41) >> 0x20);
      auVar31._8_4_ = ~(uint)uVar10 & SUB84(dVar40,0);
      auVar31._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
      auVar6._8_4_ = (int)(uVar10 & (ulonglong)dVar39);
      auVar6._0_8_ = uVar9 & (ulonglong)dVar38;
      auVar6._12_4_ = (int)((uVar10 & (ulonglong)dVar39) >> 0x20);
      auVar31 = auVar31 | auVar6;
      uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar31._0_8_);
      uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar37._0_8_);
      uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar37._8_8_);
      auVar23._0_8_ = (ulonglong)(auVar37._0_8_ - dVar5) & uVar10;
      uVar9 = uVar12 & (ulonglong)(auVar37._8_8_ - dVar4);
      auVar23._8_4_ = (undefined4)uVar9;
      auVar23._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar35._0_4_ = ~(uint)uVar10 & auVar37._0_4_;
      auVar35._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar37._4_4_;
      auVar35._8_4_ = ~(uint)uVar12 & auVar37._8_4_;
      auVar35._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar37._12_4_;
      __return_storage_ptr__->Pitch = (double)SUB168(auVar23 | auVar35,0);
      __return_storage_ptr__->Yaw = (double)SUB168(auVar23 | auVar35,8);
      __return_storage_ptr__->Roll =
           (double)(uVar11 & (ulonglong)(auVar31._0_8_ - dVar41) |
                   CONCAT44(~(uint)(uVar11 >> 0x20) & auVar31._4_4_,~(uint)uVar11 & auVar31._0_4_));
      return __return_storage_ptr__;
    }
  }
  dVar5 = param_1->Yaw;
  __return_storage_ptr__->Pitch = param_1->Pitch;
  __return_storage_ptr__->Yaw = dVar5;
  __return_storage_ptr__->Roll = param_1->Roll;
  return __return_storage_ptr__;
}

// RInterpTo @ 1417ef530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotator<double> * __cdecl
FMath::RInterpTo(TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,
                TRotator<double> *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar32;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  double dVar63;
  undefined1 auVar62 [16];
  float fVar64;
  
  if (param_3 != 0.0) {
    dVar1 = param_1->Pitch;
    if (((dVar1 != param_2->Pitch) || (param_2->Yaw != param_1->Yaw)) ||
       (param_2->Roll != param_1->Roll)) {
      if (0.0 < param_4) {
        dVar48 = param_2->Pitch - dVar1;
        auVar18._0_8_ = param_2->Roll - param_1->Roll;
        auVar33._0_8_ = param_2->Yaw - param_1->Yaw;
        auVar33._8_8_ = 0;
        auVar16._8_4_ = SUB84(auVar33._0_8_,0);
        auVar16._0_8_ = dVar48;
        auVar16._12_4_ = (int)((ulonglong)auVar33._0_8_ >> 0x20);
        auVar17 = divpd(auVar16,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar17 = roundpd(auVar33,auVar17,3);
        dVar50 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar34._0_8_ = auVar17._0_8_ * dVar50;
        dVar54 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar34._8_8_ = auVar17._8_8_ * dVar54;
        auVar18._8_8_ = 0;
        auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar48 = dVar48 - auVar34._0_8_;
        dVar60 = auVar33._0_8_ - auVar34._8_8_;
        auVar17 = roundpd(auVar34,auVar17,3);
        dVar2 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        dVar49 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar19._8_4_ = SUB84(dVar60,0);
        auVar19._0_8_ = dVar48;
        auVar19._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
        dVar61 = auVar18._0_8_ - auVar17._0_8_ * dVar2;
        dVar63 = 0.0 - auVar17._8_8_ * dVar49;
        dVar32 = auVar19._8_8_ + dVar54;
        uVar9 = -(ulonglong)(0.0 <= dVar48);
        uVar11 = -(ulonglong)(0.0 <= dVar60);
        auVar35._0_8_ = uVar9 & (ulonglong)dVar48;
        auVar35._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar60);
        auVar35._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar60) >> 0x20);
        auVar55._0_4_ = ~(uint)uVar9 & SUB84(dVar48 + dVar50,0);
        auVar55._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar48 + dVar50) >> 0x20);
        auVar55._8_4_ = ~(uint)uVar11 & SUB84(dVar32,0);
        auVar55._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
        auVar20._8_4_ = SUB84(dVar63,0);
        auVar20._0_8_ = dVar61;
        auVar20._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
        dVar32 = auVar20._8_8_ + dVar49;
        auVar55 = auVar55 | auVar35;
        uVar9 = -(ulonglong)(0.0 <= dVar61);
        uVar11 = -(ulonglong)(0.0 <= dVar63);
        auVar51._0_8_ = uVar9 & (ulonglong)dVar61;
        auVar51._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar63);
        auVar51._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar63) >> 0x20);
        auVar58._0_4_ = ~(uint)uVar9 & SUB84(dVar61 + dVar2,0);
        auVar58._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar61 + dVar2) >> 0x20);
        auVar58._8_4_ = ~(uint)uVar11 & SUB84(dVar32,0);
        auVar58._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
        uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar55._0_8_);
        uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar55._8_8_);
        auVar58 = auVar58 | auVar51;
        uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar58._0_8_);
        lVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar58._8_8_);
        auVar52._0_8_ = uVar11 & (ulonglong)(auVar55._0_8_ - dVar50);
        uVar9 = uVar12 & (ulonglong)(auVar55._8_8_ - dVar54);
        auVar52._8_4_ = (undefined4)uVar9;
        auVar52._12_4_ = (undefined4)(uVar9 >> 0x20);
        auVar21._0_4_ = ~(uint)uVar11 & auVar55._0_4_;
        auVar21._4_4_ = ~(uint)(uVar11 >> 0x20) & auVar55._4_4_;
        auVar21._8_4_ = ~(uint)uVar12 & auVar55._8_4_;
        auVar21._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar55._12_4_;
        auVar52 = auVar52 | auVar21;
        auVar36._0_8_ =
             CONCAT44(~(uint)(uVar10 >> 0x20) & auVar58._4_4_,~(uint)uVar10 & auVar58._0_4_);
        auVar36._8_4_ = ~(uint)lVar13 & auVar58._8_4_;
        auVar36._12_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar58._12_4_;
        auVar22._0_8_ = (double)((ulonglong)(auVar58._0_8_ - dVar2) & uVar10 | auVar36._0_8_);
        auVar17 = divpd(auVar52,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar37 = roundpd(auVar36,auVar17,3);
        auVar22._8_8_ = 0;
        auVar17 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        auVar38._0_8_ = auVar37._0_8_ * dVar50;
        auVar38._8_8_ = auVar37._8_8_ * dVar54;
        dVar48 = auVar52._0_8_ - auVar38._0_8_;
        dVar60 = auVar52._8_8_ - auVar38._8_8_;
        auVar17 = roundpd(auVar38,auVar17,3);
        auVar23._8_4_ = SUB84(dVar60,0);
        auVar23._0_8_ = dVar48;
        auVar23._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
        dVar61 = auVar22._0_8_ - auVar17._0_8_ * dVar2;
        dVar63 = 0.0 - auVar17._8_8_ * dVar49;
        dVar32 = auVar23._8_8_ + dVar54;
        uVar9 = -(ulonglong)(0.0 <= dVar48);
        uVar10 = -(ulonglong)(0.0 <= dVar60);
        uVar11 = -(ulonglong)(0.0 <= dVar61);
        uVar12 = -(ulonglong)(0.0 <= dVar63);
        auVar62._0_4_ = ~(uint)uVar9 & SUB84(dVar48 + dVar50,0);
        auVar62._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar48 + dVar50) >> 0x20);
        auVar62._8_4_ = ~(uint)uVar10 & SUB84(dVar32,0);
        auVar62._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
        auVar39._0_8_ = uVar9 & (ulonglong)dVar48;
        auVar39._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar60);
        auVar39._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar60) >> 0x20);
        auVar62 = auVar62 | auVar39;
        uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar62._0_8_);
        uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar62._8_8_);
        auVar24._8_4_ = SUB84(dVar63,0);
        auVar24._0_8_ = dVar61;
        auVar24._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
        auVar53._0_8_ = uVar11 & (ulonglong)dVar61;
        auVar53._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar63);
        auVar53._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar63) >> 0x20);
        dVar32 = auVar24._8_8_ + dVar49;
        auVar56._0_4_ = ~(uint)uVar11 & SUB84(dVar61 + dVar2,0);
        auVar56._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar61 + dVar2) >> 0x20);
        auVar56._8_4_ = ~(uint)uVar12 & SUB84(dVar32,0);
        auVar56._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
        auVar25._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
        auVar25._0_8_ = __real_3f1a36e2e0000000;
        auVar25._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
        auVar56 = auVar56 | auVar53;
        uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar56._0_8_);
        uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar56._8_8_);
        auVar40._0_8_ = uVar11 & (ulonglong)(auVar56._0_8_ - dVar2);
        uVar9 = uVar12 & (ulonglong)(auVar56._8_8_ - dVar49);
        auVar40._8_4_ = (undefined4)uVar9;
        auVar40._12_4_ = (undefined4)(uVar9 >> 0x20);
        auVar37._4_4_ = ~(uint)(uVar11 >> 0x20) & auVar56._4_4_;
        auVar37._0_4_ = ~(uint)uVar11 & auVar56._0_4_;
        auVar37._8_4_ = ~(uint)uVar12 & auVar56._8_4_;
        auVar37._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar56._12_4_;
        auVar40 = auVar40 | auVar37;
        auVar41._0_8_ =
             (double)CONCAT44(auVar40._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar40._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar41._8_4_ = auVar40._8_4_ & _UNK_15061cc88;
        auVar41._12_4_ = auVar40._12_4_ & _UNK_15061cc8c;
        lVar13 = -(ulonglong)(auVar25._8_8_ < auVar41._8_8_);
        auVar26._8_8_ = lVar13;
        auVar26._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar41._0_8_);
        uVar8 = movmskpd((int)__return_storage_ptr__,auVar26);
        auVar42._0_8_ = uVar10 & (ulonglong)(auVar62._0_8_ - dVar50);
        uVar9 = uVar14 & (ulonglong)(auVar62._8_8_ - dVar54);
        auVar42._8_4_ = (undefined4)uVar9;
        auVar42._12_4_ = (undefined4)(uVar9 >> 0x20);
        auVar4._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar62._4_4_;
        auVar4._0_4_ = ~(uint)uVar10 & auVar62._0_4_;
        auVar4._8_4_ = ~(uint)uVar14 & auVar62._8_4_;
        auVar4._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar62._12_4_;
        auVar42 = auVar42 | auVar4;
        auVar43._0_8_ =
             (double)CONCAT44(auVar42._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar42._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar43._8_4_ = auVar42._8_4_ & _UNK_15061cc88;
        auVar43._12_4_ = auVar42._12_4_ & _UNK_15061cc8c;
        lVar15 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar43._8_8_);
        auVar17._8_4_ = (int)lVar15;
        auVar17._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar43._0_8_);
        auVar17._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        iVar7 = movmskpd(in_EAX,auVar17);
        if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
          auVar6._4_8_ = lVar13;
          auVar6._0_4_ = auVar52._4_4_;
          auVar27._0_8_ = auVar6._0_8_ << 0x20;
          auVar27._8_4_ = auVar52._8_4_;
          auVar27._12_4_ = auVar52._12_4_;
          fVar64 = param_3 * param_4;
          if (__real_3f800000 <= param_3 * param_4) {
            fVar64 = __real_3f800000;
          }
          if (fVar64 <= 0.0) {
            fVar64 = 0.0;
          }
          dVar49 = (double)fVar64;
          auVar44._0_8_ = dVar49 * auVar27._8_8_ + param_1->Yaw;
          auVar44._8_8_ = 0;
          dVar2 = param_1->Roll;
          __return_storage_ptr__->Pitch = dVar49 * auVar52._0_8_ + dVar1;
          __return_storage_ptr__->Yaw = auVar44._0_8_;
          __return_storage_ptr__->Roll = dVar49 * auVar22._0_8_ + dVar2;
          auVar3._0_8_ = __return_storage_ptr__->Pitch;
          auVar3._8_8_ = __return_storage_ptr__->Yaw;
          dVar60 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
          auVar17 = divpd(auVar3,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
          auVar17 = roundpd(auVar44,auVar17,3);
          dVar1 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
          auVar45._0_8_ = auVar17._0_8_ * dVar1;
          dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
          auVar45._8_8_ = auVar17._8_8_ * dVar2;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = __return_storage_ptr__->Roll;
          auVar17 = divpd(auVar28,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
          dVar50 = (double)auVar3._0_8_ - auVar45._0_8_;
          dVar54 = (double)auVar3._8_8_ - auVar45._8_8_;
          auVar17 = roundpd(auVar45,auVar17,3);
          auVar29._8_4_ = SUB84(dVar54,0);
          auVar29._0_8_ = dVar50;
          auVar29._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          dVar32 = __return_storage_ptr__->Roll - auVar17._0_8_ * dVar60;
          dVar48 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          dVar49 = auVar29._8_8_ + dVar2;
          uVar9 = -(ulonglong)(0.0 <= dVar50);
          uVar11 = -(ulonglong)(0.0 <= dVar54);
          auVar46._0_8_ = uVar9 & (ulonglong)dVar50;
          auVar46._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar54);
          auVar46._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar54) >> 0x20);
          auVar59._0_4_ = ~(uint)uVar9 & SUB84(dVar50 + dVar1,0);
          auVar59._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar50 + dVar1) >> 0x20);
          auVar59._8_4_ = ~(uint)uVar11 & SUB84(dVar49,0);
          auVar59._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar49 >> 0x20);
          auVar30._8_4_ = SUB84(dVar48,0);
          auVar30._0_8_ = dVar32;
          auVar30._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
          dVar49 = auVar30._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          auVar59 = auVar59 | auVar46;
          uVar9 = -(ulonglong)(0.0 <= dVar32);
          uVar11 = -(ulonglong)(0.0 <= dVar48);
          auVar47._0_4_ = ~(uint)uVar9 & SUB84(dVar32 + dVar60,0);
          auVar47._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar60) >> 0x20);
          auVar47._8_4_ = ~(uint)uVar11 & SUB84(dVar49,0);
          auVar47._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar49 >> 0x20);
          auVar5._8_4_ = (int)((ulonglong)dVar48 & uVar11);
          auVar5._0_8_ = (ulonglong)dVar32 & uVar9;
          auVar5._12_4_ = (int)(((ulonglong)dVar48 & uVar11) >> 0x20);
          auVar47 = auVar47 | auVar5;
          uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar47._0_8_);
          uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar59._0_8_);
          uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar59._8_8_);
          auVar31._0_8_ = (ulonglong)(auVar59._0_8_ - dVar1) & uVar10;
          uVar9 = uVar12 & (ulonglong)(auVar59._8_8_ - dVar2);
          auVar31._8_4_ = (undefined4)uVar9;
          auVar31._12_4_ = (undefined4)(uVar9 >> 0x20);
          auVar57._0_4_ = ~(uint)uVar10 & auVar59._0_4_;
          auVar57._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar59._4_4_;
          auVar57._8_4_ = ~(uint)uVar12 & auVar59._8_4_;
          auVar57._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar59._12_4_;
          __return_storage_ptr__->Pitch = (double)SUB168(auVar31 | auVar57,0);
          __return_storage_ptr__->Yaw = (double)SUB168(auVar31 | auVar57,8);
          __return_storage_ptr__->Roll =
               (double)(uVar11 & (ulonglong)(auVar47._0_8_ - dVar60) |
                       CONCAT44(~(uint)(uVar11 >> 0x20) & auVar47._4_4_,
                                ~(uint)uVar11 & auVar47._0_4_));
          return __return_storage_ptr__;
        }
      }
      dVar1 = param_2->Yaw;
      __return_storage_ptr__->Pitch = param_2->Pitch;
      __return_storage_ptr__->Yaw = dVar1;
      __return_storage_ptr__->Roll = param_2->Roll;
      return __return_storage_ptr__;
    }
  }
  dVar1 = param_1->Yaw;
  __return_storage_ptr__->Pitch = param_1->Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  __return_storage_ptr__->Roll = param_1->Roll;
  return __return_storage_ptr__;
}

// RandPointInBox @ 1417ef9b0

TVector<double> * __cdecl
FMath::RandPointInBox(TVector<double> *__return_storage_ptr__,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  uVar7 = rand();
  fVar8 = (float)(uVar7 & 0x7fff) * __real_38000100;
  dVar3 = (param_1->Max).field0_0x0._s_0.Y;
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  uVar7 = rand();
  fVar9 = (float)(uVar7 & 0x7fff) * __real_38000100;
  dVar5 = (param_1->Max).field0_0x0._s_0.X;
  dVar6 = (param_1->Min).field0_0x0._s_0.X;
  uVar7 = rand();
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar9 * (dVar3 - dVar4) + dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar8 * (dVar1 - dVar2) + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((float)(uVar7 & 0x7fff) * __real_38000100) * (dVar5 - dVar6) + dVar6;
  return __return_storage_ptr__;
}

// RandPointInCircle @ 1417efab0

TVector2<double> * __cdecl
FMath::RandPointInCircle(TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  
  fVar4 = __real_38800100;
  fVar3 = __real_3f800000;
  dVar2 = __real_3ff0000000000000;
  do {
    uVar5 = rand();
    dVar1 = (double)((float)(uVar5 & 0x7fff) * fVar4 - fVar3);
    uVar5 = rand();
    dVar6 = (double)((float)(uVar5 & 0x7fff) * fVar4 - fVar3);
  } while (dVar2 < dVar6 * dVar6 + dVar1 * dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * (double)param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * (double)param_1;
  return __return_storage_ptr__;
}

// RoundHalfFromZero @ 1417f7b40

float __cdecl FMath::RoundHalfFromZero(float param_1)

{
  float fVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar1 = modff(param_1,local_res8);
  if (0.0 <= param_1) {
    if (__real_3f000000 <= fVar1) {
      local_res8[0] = local_res8[0] + __real_3f800000;
    }
  }
  else if (fVar1 <= __real_bf000000) {
    return local_res8[0] - __real_3f800000;
  }
  return local_res8[0];
}

// RoundHalfFromZero @ 1417f7bc0

double __cdecl FMath::RoundHalfFromZero(double param_1)

{
  double dVar1;
  double local_res8 [4];
  
  local_res8[0] = 0.0;
  dVar1 = modf(param_1,local_res8);
  if (0.0 <= param_1) {
    if (__real_3fe0000000000000 <= dVar1) {
      local_res8[0] = local_res8[0] + __real_3ff0000000000000;
    }
  }
  else if (dVar1 <= __real_bfe0000000000000) {
    return local_res8[0] - __real_3ff0000000000000;
  }
  return local_res8[0];
}

// RoundHalfToEven @ 1417f7c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl FMath::RoundHalfToEven(float param_1)

{
  bool bVar1;
  float fVar2;
  uint extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar3 [16];
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar2 = modff(param_1,local_res8);
  if (0.0 <= param_1) {
    if (__real_322bcc77 <
        (float)((uint)(fVar2 - __real_3f000000) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    goto LAB_1417f7c96;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    fVar4 = __real_3f000000;
  }
  else {
    uVar5 = 0;
    fVar4 = __real_bf000000;
    uVar6 = 0;
    uVar7 = 0;
    if (__real_322bcc77 <
        (float)((uint)(fVar2 - __real_bf000000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
LAB_1417f7c96:
      fVar4 = fVar2;
      uVar5 = extraout_XMM0_Db;
      uVar6 = (uint)extraout_XMM0_Qb;
      uVar7 = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
    }
  }
  fVar4 = fVar4 + local_res8[0];
  bVar1 = 0.0 <= fVar4;
  auVar3._4_4_ = uVar5;
  auVar3._0_4_ = (uint)fVar4;
  auVar3._8_4_ = uVar6;
  auVar3._12_4_ = uVar7;
  if (!bVar1) {
    auVar3._0_4_ = (uint)fVar4 ^ __xmm_80000000800000008000000080000000;
    auVar3._4_4_ = uVar5 ^ _UNK_150651574;
    auVar3._8_4_ = uVar6 ^ _UNK_150651578;
    auVar3._12_4_ = uVar7 ^ _UNK_15065157c;
  }
  auVar3 = roundps(auVar3,ZEXT416(auVar3._0_4_),1);
  if (((longlong)auVar3._0_4_ & 1U) == 0) {
    if (bVar1) {
LAB_1417f7d0a:
      auVar3 = roundps(ZEXT416((uint)(fVar4 - __real_3f000000)),
                       ZEXT416((uint)(fVar4 - __real_3f000000)),2);
      return auVar3._0_4_;
    }
  }
  else if (!bVar1) goto LAB_1417f7d0a;
  auVar3 = roundps(ZEXT416((uint)(fVar4 + __real_3f000000)),ZEXT416((uint)(fVar4 + __real_3f000000))
                   ,1);
  return auVar3._0_4_;
}

// RoundHalfToEven @ 1417f7d30

double __cdecl FMath::RoundHalfToEven(double param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double local_res8 [4];
  
  local_res8[0] = 0.0;
  dVar3 = modf(param_1,local_res8);
  auVar9._8_4_ = (int)extraout_XMM0_Qb;
  auVar9._0_8_ = dVar3;
  auVar9._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if (0.0 <= param_1) {
    dVar8 = __real_3fe0000000000000;
    if (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)(dVar3 - __real_3fe0000000000000) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3 - __real_3fe0000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) goto LAB_1417f7d8a;
  }
  else {
    uVar6 = SUB84(dVar3 - __real_bfe0000000000000,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)(dVar3 - __real_bfe0000000000000) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar8 = __real_bfe0000000000000;
    if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar7,uVar6) &&
        (double)CONCAT44(uVar7,uVar6) != __real_3e45798ee0000000) {
LAB_1417f7d8a:
      dVar8 = dVar3;
    }
  }
  dVar8 = dVar8 + local_res8[0];
  bVar1 = 0.0 <= dVar8;
  dVar3 = dVar8;
  if (!bVar1) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar3;
  auVar9 = roundpd(auVar9,auVar2,1);
  dVar3 = auVar9._0_8_;
  if (__real_43e0000000000000 <= dVar3) {
    dVar3 = dVar3 - __real_43e0000000000000;
  }
  if (((longlong)dVar3 & 1U) == 0) {
    if (bVar1) {
LAB_1417f7e31:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar8 - __real_3fe0000000000000;
      auVar9 = roundpd(auVar5,auVar5,2);
      return auVar9._0_8_;
    }
  }
  else if (!bVar1) goto LAB_1417f7e31;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar8 + __real_3fe0000000000000;
  auVar9 = roundpd(auVar4,auVar4,1);
  return auVar9._0_8_;
}

// RoundHalfToZero @ 1417f7e60

float __cdecl FMath::RoundHalfToZero(float param_1)

{
  float fVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar1 = modff(param_1,local_res8);
  if (0.0 <= param_1) {
    if (__real_3f000000 < fVar1) {
      local_res8[0] = local_res8[0] + __real_3f800000;
    }
  }
  else if (fVar1 < __real_bf000000) {
    return local_res8[0] - __real_3f800000;
  }
  return local_res8[0];
}

// RoundHalfToZero @ 1417f7ee0

double __cdecl FMath::RoundHalfToZero(double param_1)

{
  double dVar1;
  double local_res8 [4];
  
  local_res8[0] = 0.0;
  dVar1 = modf(param_1,local_res8);
  if (0.0 <= param_1) {
    if (__real_3fe0000000000000 < dVar1) {
      local_res8[0] = local_res8[0] + __real_3ff0000000000000;
    }
  }
  else if (dVar1 < __real_bfe0000000000000) {
    return local_res8[0] - __real_3ff0000000000000;
  }
  return local_res8[0];
}

// SegmentDistToSegment @ 1417f8540

void __cdecl
FMath::SegmentDistToSegment
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  SegmentDistToSegment_Solver<double> local_88;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  local_88.bLinesAreNearlyParallel = false;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  local_88.S1.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y - dVar2;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  local_88.S3.field0_0x0._s_0.Y = dVar2 - (param_3->field0_0x0)._s_0.Y;
  local_88.S1.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X - dVar3;
  local_88.S3.field0_0x0._s_0.X = dVar3 - (param_3->field0_0x0)._s_0.X;
  local_88.S2.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  local_88.S1.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z - dVar1;
  local_88.S3.field0_0x0._s_0.Z = dVar1 - (param_3->field0_0x0)._s_0.Z;
  local_88.S2.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  local_88.S2.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  local_88.A1 = param_1;
  local_88.A2 = param_3;
  SegmentDistToSegment_Solver<double>::Solve(&local_88,param_5,param_6);
  return;
}

// SegmentIntersection2D @ 1417f8620

bool __cdecl
FMath::SegmentIntersection2D
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar8 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar1 = dVar1 - (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = __real_3ff0000000000000 / (dVar9 * dVar4 - dVar10 * dVar5);
  dVar9 = (dVar1 * dVar10 - dVar8 * dVar9) * dVar7;
  dVar7 = (dVar1 * dVar4 - dVar8 * dVar5) * dVar7;
  if ((((dVar7 < 0.0) || (__real_3ff0000000000000 < dVar7)) || (dVar9 < 0.0)) ||
     (__real_3ff0000000000000 < dVar9)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    (param_5->field0_0x0)._s_0.X = dVar4 * dVar9 + (param_1->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar5 * dVar9 + (param_1->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.Z = (dVar2 - dVar3) * dVar9 + (param_1->field0_0x0)._s_0.Z;
  }
  return bVar6;
}

// SegmentPlaneIntersection @ 1417f8750

bool __cdecl
FMath::SegmentPlaneIntersection
          (TVector<double> *param_1,TVector<double> *param_2,TPlane<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.Z - dVar2;
  dVar7 = (double)(float)((param_3->W -
                          ((double)param_3->_padding_ * dVar1 +
                           (double)param_3->_padding_ * (param_1->field0_0x0)._s_0.X +
                          (double)param_3->_padding_ * dVar2)) /
                         ((double)param_3->_padding_ * dVar4 + (double)param_3->_padding_ * dVar3 +
                         (double)param_3->_padding_ * dVar5));
  if ((dVar7 <= __real_bf1a36e2e0000000) || (__real_3ff00068db8b8000 <= dVar7)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    (param_4->field0_0x0)._s_0.X = dVar3 * dVar7 + (param_1->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar4 * dVar7 + dVar1;
    (param_4->field0_0x0)._s_0.Z = dVar5 * dVar7 + dVar2;
  }
  return bVar6;
}

// SegmentTriangleIntersection @ 1417f8860

bool __cdecl
FMath::SegmentTriangleIntersection
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_c8 [2];
  double local_98;
  
  dVar11 = (param_3->field0_0x0)._s_0.X;
  dVar10 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_4->field0_0x0)._s_0.X - dVar11;
  dVar4 = (param_4->field0_0x0)._s_0.Y - dVar10;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar6 = (param_4->field0_0x0)._s_0.Z - dVar1;
  dVar9 = dVar4 * dVar4 + dVar3 * dVar3 + dVar6 * dVar6;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    dVar3 = dVar3 * dVar9;
    dVar4 = dVar4 * dVar9;
    dVar6 = dVar6 * dVar9;
  }
  dVar11 = (param_5->field0_0x0)._s_0.X - dVar11;
  dVar10 = (param_5->field0_0x0)._s_0.Y - dVar10;
  dVar1 = (param_5->field0_0x0)._s_0.Z - dVar1;
  dVar9 = dVar10 * dVar10 + dVar11 * dVar11 + dVar1 * dVar1;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    dVar11 = dVar11 * dVar9;
    dVar10 = dVar10 * dVar9;
    dVar1 = dVar1 * dVar9;
  }
  dVar9 = dVar10 * dVar6 - dVar1 * dVar4;
  dVar1 = dVar1 * dVar3 - dVar11 * dVar6;
  local_98 = dVar11 * dVar4 - dVar10 * dVar3;
  dVar11 = dVar1 * dVar1 + dVar9 * dVar9 + local_98 * local_98;
  if (__real_3e45798ee0000000 < dVar11) {
    dVar10 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = (param_2->field0_0x0)._s_0.X - dVar10;
    dVar4 = (param_1->field0_0x0)._s_0.Z;
    dVar5 = (param_2->field0_0x0)._s_0.Y - dVar3;
    dVar7 = (param_2->field0_0x0)._s_0.Z - dVar4;
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    local_98 = local_98 * dVar11;
    dVar1 = dVar1 * dVar11;
    dVar9 = dVar9 * dVar11;
    local_c8[0]._16_8_ = (param_3->field0_0x0)._s_0.Z;
    dVar11 = (double)(float)(((dVar1 * (param_3->field0_0x0)._s_0.Y +
                               dVar9 * (param_3->field0_0x0)._s_0.X +
                              local_98 * (double)local_c8[0]._16_8_) -
                             (dVar10 * dVar9 + dVar3 * dVar1 + dVar4 * local_98)) /
                            (dVar6 * dVar9 + dVar5 * dVar1 + dVar7 * local_98));
    if ((__real_bf1a36e2e0000000 < dVar11) && (dVar11 < __real_3ff00068db8b8000)) {
      (param_6->field0_0x0)._s_0.X = dVar6 * dVar11 + dVar10;
      (param_6->field0_0x0)._s_0.Y = dVar5 * dVar11 + dVar3;
      (param_6->field0_0x0)._s_0.Z = dVar7 * dVar11 + dVar4;
      bVar8 = ComputeBarycentricTri
                        (param_6,param_3,param_4,param_5,(TVector<double> *)&local_c8[0]._s_0,
                         __real_3e45798ee2308c3a);
      if ((bVar8) &&
         (((0.0 <= (double)local_c8[0]._0_8_ && (0.0 <= (double)local_c8[0]._8_8_)) &&
          (0.0 <= (double)local_c8[0]._16_8_)))) {
        auVar2._8_4_ = SUB84(dVar1,0);
        auVar2._0_8_ = dVar9;
        auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        *(undefined1 (*) [16])&param_7->field0_0x0 = auVar2;
        (param_7->field0_0x0)._s_0.Z = local_98;
        return true;
      }
    }
  }
  return false;
}

// SphereConeIntersection @ 141800280

bool __cdecl
FMath::SphereConeIntersection
          (TVector<double> *param_1,float param_2,TVector<double> *param_3,float param_4,
          float param_5)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (double)((__real_bf800000 / param_4) * param_2);
  dVar6 = dVar1 - (param_3->field0_0x0)._s_0.X * dVar4;
  dVar8 = dVar7 - (param_3->field0_0x0)._s_0.Y * dVar4;
  dVar4 = dVar2 - (param_3->field0_0x0)._s_0.Z * dVar4;
  dVar5 = dVar8 * (param_3->field0_0x0)._s_0.Y + dVar6 * (param_3->field0_0x0)._s_0.X +
          dVar4 * (param_3->field0_0x0)._s_0.Z;
  if ((dVar5 <= 0.0) ||
     (dVar5 * dVar5 < (dVar8 * dVar8 + dVar6 * dVar6 + dVar4 * dVar4) * (double)(param_5 * param_5))
     ) {
    bVar3 = false;
  }
  else {
    dVar6 = dVar7 * dVar7 + dVar1 * dVar1 + dVar2 * dVar2;
    dVar7 = dVar7 * (param_3->field0_0x0)._s_0.Y + dVar1 * (param_3->field0_0x0)._s_0.X +
            dVar2 * (param_3->field0_0x0)._s_0.Z;
    if ((__real_8000000000000000 <= dVar7) || (dVar7 * dVar7 < (double)(param_4 * param_4) * dVar6))
    {
      bVar3 = true;
    }
    else {
      bVar3 = dVar6 <= (double)(param_2 * param_2);
    }
  }
  return bVar3;
}

// SphereDistToLine @ 141800400

void __cdecl
FMath::SphereDistToLine
          (TVector<double> *param_1,float param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar12 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar9 = (param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar8 = (param_4->field0_0x0)._s_0.Y;
  dVar6 = (param_4->field0_0x0)._s_0.Z;
  dVar7 = dVar8 * dVar12 + dVar4 * dVar11 + dVar6 * dVar9;
  auVar5._0_8_ = dVar7 * dVar7 * __real_4010000000000000 -
                 ((dVar12 * dVar12 + dVar11 * dVar11 + dVar9 * dVar9) - (double)(param_2 * param_2))
                 * __real_4010000000000000;
  auVar5._8_8_ = 0;
  if (__real_3f1a36e2e0000000 < auVar5._0_8_) {
    auVar5 = sqrtpd(auVar5,auVar5);
    dVar12 = auVar5._0_8_ * __real_3fe0000000000000 + dVar7;
    dVar10 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar7 = ((dVar7 + dVar7) - auVar5._0_8_) * __real_3fe0000000000000;
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar9 = dVar10;
    if ((dVar10 != dVar11) && (dVar9 = dVar7, dVar10 < dVar11)) {
      dVar9 = dVar12;
    }
    dVar6 = dVar6 * dVar9 + (param_3->field0_0x0)._s_0.Z;
    dVar8 = dVar8 * dVar9 + (param_3->field0_0x0)._s_0.Y;
    dVar4 = dVar4 * dVar9 + (param_3->field0_0x0)._s_0.X;
  }
  else {
    dVar4 = (dVar4 * dVar7 + (param_3->field0_0x0)._s_0.X) - (param_1->field0_0x0)._s_0.X;
    dVar8 = (dVar8 * dVar7 + (param_3->field0_0x0)._s_0.Y) - (param_1->field0_0x0)._s_0.Y;
    dVar6 = (dVar6 * dVar7 + (param_3->field0_0x0)._s_0.Z) - (param_1->field0_0x0)._s_0.Z;
    dVar7 = dVar8 * dVar8 + dVar4 * dVar4 + dVar6 * dVar6;
    uVar1 = dVar4;
    uVar2 = dVar8;
    uVar3 = dVar6;
    if ((dVar7 != __real_3ff0000000000000) &&
       (uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar7)) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar1 = dVar4 * dVar7;
      uVar2 = dVar8 * dVar7;
      uVar3 = dVar6 * dVar7;
    }
    dVar4 = (double)param_2;
    dVar6 = dVar4 * (double)uVar3 + (param_1->field0_0x0)._s_0.Z;
    dVar8 = dVar4 * (double)uVar2 + (param_1->field0_0x0)._s_0.Y;
    dVar4 = dVar4 * (double)uVar1 + (param_1->field0_0x0)._s_0.X;
  }
  (param_5->field0_0x0)._s_0.X = dVar4;
  (param_5->field0_0x0)._s_0.Y = dVar8;
  (param_5->field0_0x0)._s_0.Z = dVar6;
  return;
}

// TruncateToHalfIfClose @ 141809890

float __cdecl FMath::TruncateToHalfIfClose(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar2 = modff(param_1,local_res8);
  if (0.0 <= param_1) {
    fVar1 = __real_3f000000;
    if (param_2 < (float)((uint)(fVar2 - __real_3f000000) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = __real_bf000000;
    if (param_2 < (float)((uint)(fVar2 - __real_bf000000) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      fVar1 = fVar2;
    }
  }
  return fVar1 + local_res8[0];
}

// TruncateToHalfIfClose @ 141809930

double __cdecl FMath::TruncateToHalfIfClose(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double local_res8 [4];
  
  local_res8[0] = 0.0;
  dVar2 = modf(param_1,local_res8);
  if (0.0 <= param_1) {
    dVar1 = __real_3fe0000000000000;
    if (param_2 < (double)CONCAT44((uint)((ulonglong)(dVar2 - __real_3fe0000000000000) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar2 - __real_3fe0000000000000,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar1 = dVar2;
    }
  }
  else {
    dVar1 = __real_bfe0000000000000;
    if (param_2 < (double)CONCAT44((uint)((ulonglong)(dVar2 - __real_bfe0000000000000) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar2 - __real_bfe0000000000000,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar1 = dVar2;
    }
  }
  return dVar1 + local_res8[0];
}

// VInterpConstantTo @ 14180be90

TVector<double> * __cdecl
FMath::VInterpConstantTo
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar14 = (param_2->field0_0x0)._s_0.X - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Y - dVar2;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_2->field0_0x0)._s_0.Z - dVar3;
  auVar11._0_8_ = dVar6 * dVar6;
  auVar11._8_8_ = 0;
  dVar13 = (double)(param_3 * param_4);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar5 * dVar5 + dVar14 * dVar14 + auVar11._0_8_;
  auVar12 = sqrtpd(auVar11,auVar12);
  if (auVar12._0_8_ <= dVar13) {
    uVar7 = *(undefined4 *)&param_2->field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    dVar1 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    if (0.0 < dVar13) {
      dVar4 = __real_3ff0000000000000 / auVar12._0_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 * dVar14 * dVar13 + dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * dVar5 * dVar13 + dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * dVar6 * dVar13 + dVar3;
      return __return_storage_ptr__;
    }
    uVar7 = *(undefined4 *)&param_1->field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    dVar1 = (param_1->field0_0x0)._s_0.Z;
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar9;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// VInterpNormalRotationTo @ 14180bfb0

TVector<double> * __cdecl
FMath::VInterpNormalRotationTo
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,float param_3,float param_4)

{
  double dVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_XMM0_Db;
  double dVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  auVar14._4_12_ = in_register_000012c4;
  auVar14._0_4_ = param_3;
  UE::Math::TQuat<double>::FindBetweenVectors(local_68,param_1,param_2);
  uVar6 = SUB84(local_68[0].W,0);
  uVar8 = (undefined4)((ulonglong)local_68[0].W >> 0x20);
  dVar11 = __real_bff0000000000000;
  if (__real_bff0000000000000 <= local_68[0].W) {
    if (__real_3ff0000000000000 <= local_68[0].W) {
      uVar6 = SUB84(__real_3ff0000000000000,0);
      uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar11 = (double)CONCAT44(uVar8,uVar6);
  }
  dVar11 = acos(dVar11);
  dVar10 = local_68[0].Z * local_68[0].Z + local_68[0].X * local_68[0].X;
  dVar13 = local_68[0].Y * local_68[0].Y + 0.0;
  dVar1 = dVar13 + dVar10;
  dVar10 = dVar10 + dVar13;
  auVar15._8_4_ = SUB84(dVar10,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar14 = sqrtpd(auVar14,auVar15);
  uVar3 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
  uVar5 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar10);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  uVar4 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
  auVar16._0_8_ = uVar3 & (ulonglong)(auVar15._0_8_ * local_68[0].X);
  uVar2 = uVar5 & (ulonglong)(auVar15._8_8_ * local_68[0].Y);
  auVar16._8_4_ = (undefined4)uVar2;
  auVar16._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar12._0_4_ = ~(uint)uVar3 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar12._4_4_ =
       ~(uint)(uVar3 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar12._12_4_ =
       ~(uint)(uVar5 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  uVar7 = SUB84(dVar11 + dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)(dVar11 + dVar11) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_88._s_0.Z =
       (double)(CONCAT44(~(uint)(uVar4 >> 0x20) &
                         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                               0x20),
                         ~(uint)uVar4 &
                         SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
               uVar4 & (ulonglong)(auVar14._0_8_ * local_68[0].Z));
  dVar11 = (double)(param_4 * __real_3c8efa35 * param_3);
  if ((double)CONCAT44(uVar9,uVar7) < dVar11 || (double)CONCAT44(uVar9,uVar7) == dVar11) {
    dVar11 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    __libm_sse2_sincos_();
    local_68[0].X =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar16 | auVar12,0);
    local_68[0].Y =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar16 | auVar12,8);
    local_68[0].Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_88._s_0.Z;
    local_88._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_88._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  }
  return __return_storage_ptr__;
}

// VInterpTo @ 14180c1b0

TVector<double> * __cdecl
FMath::VInterpTo(TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                TVector<double> *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  if (0.0 < param_4) {
    dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    if (__real_3f1a36e2e0000000 <= dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5) {
      fVar7 = param_3 * param_4;
      if (__real_3f800000 <= param_3 * param_4) {
        fVar7 = __real_3f800000;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      dVar6 = (double)fVar7;
      dVar1 = (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * dVar3 + (param_1->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * dVar4 + dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * dVar5 + dVar2;
      return __return_storage_ptr__;
    }
  }
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  return __return_storage_ptr__;
}

// VRandCone @ 14180c2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
FMath::VRandCone(TVector<double> *__return_storage_ptr__,TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  TRotationMatrix<double> *pTVar8;
  TVector<double> *pTVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  TRotator<double> local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148 [6];
  TRotationMatrix<double> local_a8;
  
  if (param_2 <= 0.0) {
    UE::Math::TVector<double>::GetSafeNormal
              (param_1,__return_storage_ptr__,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
  }
  else {
    uVar6 = rand();
    uVar7 = rand();
    fVar10 = (float)(uVar7 & 0x7fff) * __real_38800100 - __real_3f800000;
    fVar11 = __real_bf800000;
    if ((__real_bf800000 <= fVar10) && (fVar11 = fVar10, __real_3f800000 <= fVar10)) {
      fVar11 = __real_3f800000;
    }
    fVar11 = acosf(fVar11);
    fVar11 = FGenericPlatformMath::Fmod(fVar11,param_2);
    UE::Math::TVector<double>::ToOrientationRotator(param_1,&local_178);
    pTVar8 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_a8,&local_178);
    local_148[0]._0_8_ = *(undefined8 *)pTVar8;
    local_148[0]._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
    local_160._s_0.X = (double)*(undefined8 *)&pTVar8->field_0x20;
    local_160._s_0.Y = (double)*(undefined8 *)&pTVar8->field_0x28;
    local_148[0]._16_8_ = *(undefined8 *)&pTVar8->field_0x10;
    local_160._s_0.Z = (double)*(undefined8 *)&pTVar8->field_0x30;
    UE::Math::TVector<double>::RotateAngleAxis
              (param_1,(TVector<double> *)&local_178,(double)(fVar11 * __real_42652ee0),
               (TVector<double> *)&local_160._s_0);
    pTVar9 = UE::Math::TVector<double>::RotateAngleAxis
                       ((TVector<double> *)&local_178,(TVector<double> *)&local_160._s_0,
                        (double)((float)(uVar6 & 0x7fff) * ___real_3c340168),
                        (TVector<double> *)&local_148[0]._s_0);
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar2 = (pTVar9->field0_0x0)._s_0.X;
    dVar3 = (pTVar9->field0_0x0)._s_0.Y;
    dVar1 = (pTVar9->field0_0x0)._s_0.Z;
    dVar12 = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
    if (dVar12 == __real_3ff0000000000000) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    }
    else if (__real_3e45798ee0000000 <= dVar12) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * dVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 * dVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar12;
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar5;
    }
  }
  return __return_storage_ptr__;
}

// VRandCone @ 14180c4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
FMath::VRandCone(TVector<double> *__return_storage_ptr__,TVector<double> *param_1,float param_2,
                float param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  TRotationMatrix<double> *pTVar9;
  TVector<double> *pTVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Db;
  double dVar14;
  undefined8 uVar15;
  TRotator<double> local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188 [6];
  TRotationMatrix<double> local_e8;
  
  if ((param_3 <= 0.0) || (param_2 <= 0.0)) {
    UE::Math::TVector<double>::GetSafeNormal
              (param_1,__return_storage_ptr__,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
  }
  else {
    uVar7 = rand();
    uVar8 = rand();
    fVar13 = __real_3f800000;
    fVar11 = (float)(uVar8 & 0x7fff) * __real_38800100 - __real_3f800000;
    fVar12 = __real_bf800000;
    if ((__real_bf800000 <= fVar11) && (fVar12 = fVar11, __real_3f800000 <= fVar11)) {
      fVar12 = __real_3f800000;
    }
    __libm_sse2_sincosf_();
    fVar12 = acosf(fVar12);
    fVar13 = FGenericPlatformMath::Fmod
                       (fVar12,SQRT(fVar13 / ((extraout_XMM0_Da / param_2) *
                                              (extraout_XMM0_Da / param_2) +
                                             (extraout_XMM0_Db / param_3) *
                                             (extraout_XMM0_Db / param_3))));
    UE::Math::TVector<double>::ToOrientationRotator(param_1,&local_1b8);
    pTVar9 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_e8,&local_1b8);
    local_188[0]._0_8_ = *(undefined8 *)pTVar9;
    local_188[0]._8_8_ = *(undefined8 *)&pTVar9->field_0x8;
    local_1a0._s_0.X = (double)*(undefined8 *)&pTVar9->field_0x20;
    local_1a0._s_0.Y = (double)*(undefined8 *)&pTVar9->field_0x28;
    local_188[0]._16_8_ = *(undefined8 *)&pTVar9->field_0x10;
    local_1a0._s_0.Z = (double)*(undefined8 *)&pTVar9->field_0x30;
    UE::Math::TVector<double>::RotateAngleAxis
              (param_1,(TVector<double> *)&local_1b8,(double)(fVar13 * __real_42652ee0),
               (TVector<double> *)&local_1a0._s_0);
    pTVar10 = UE::Math::TVector<double>::RotateAngleAxis
                        ((TVector<double> *)&local_1b8,(TVector<double> *)&local_1a0._s_0,
                         (double)((float)(uVar7 & 0x7fff) * ___real_3c340168),
                         (TVector<double> *)&local_188[0]._s_0);
    dVar5 = (pTVar10->field0_0x0)._s_0.X;
    dVar6 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (pTVar10->field0_0x0)._s_0.Z;
    dVar14 = dVar6 * dVar6 + dVar5 * dVar5 + dVar1 * dVar1;
    uVar15 = dVar1;
    uVar3 = dVar6;
    uVar4 = dVar5;
    if ((dVar14 != __real_3ff0000000000000) &&
       (uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar14)) {
      dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
      uVar15 = dVar1 * dVar14;
      uVar3 = dVar6 * dVar14;
      uVar4 = dVar5 * dVar14;
    }
    auVar2._8_4_ = (int)uVar3;
    auVar2._0_8_ = uVar4;
    auVar2._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar15;
  }
  return __return_storage_ptr__;
}

// Vector2DInterpConstantTo @ 14180c860

TVector2<double> * __cdecl
FMath::Vector2DInterpConstantTo
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar11 [16];
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar9 = (param_2->field0_0x0)._s_0.X - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_2->field0_0x0)._s_0.Y - dVar2;
  dVar8 = (double)(param_3 * param_4);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar10 * dVar10 + dVar9 * dVar9;
  auVar11 = sqrtpd(unaff_XMM8,auVar11);
  if (auVar11._0_8_ <= dVar8) {
    uVar4 = *(undefined4 *)&param_2->field0_0x0;
    uVar5 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  }
  else {
    if (0.0 < param_3 * param_4) {
      dVar3 = __real_3ff0000000000000 / auVar11._0_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 * dVar10 * dVar8 + dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 * dVar9 * dVar8 + dVar1;
      return __return_storage_ptr__;
    }
    uVar4 = *(undefined4 *)&param_1->field0_0x0;
    uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar7;
  return __return_storage_ptr__;
}

// WindRelativeAnglesDegrees @ 14180d240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FMath::WindRelativeAnglesDegrees(float param_1,float *param_2)

{
  float fVar1;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  
  fVar1 = param_1 - *param_2;
  auVar3._0_4_ = (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  auVar3._4_4_ = in_XMM0_Db & _UNK_15061cc74;
  auVar3._8_4_ = in_XMM0_Dc & _UNK_15061cc78;
  auVar3._12_4_ = in_XMM0_Dd & _UNK_15061cc7c;
  if (__real_43340000 < auVar3._0_4_) {
    fVar4 = __real_43b40000;
    if ((fVar1 <= 0.0) && (fVar4 = 0.0, fVar1 < 0.0)) {
      fVar4 = __real_c3b40000;
    }
    auVar2._4_12_ = auVar3._4_12_;
    auVar2._0_4_ = auVar3._0_4_ * __real_3b360b61 + __real_3f000000;
    auVar3 = roundps(auVar2,ZEXT416((uint)auVar2._0_4_),1);
    *param_2 = auVar3._0_4_ * fVar4 + *param_2;
  }
  return;
}

// WindRelativeAnglesDegrees @ 14180d2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FMath::WindRelativeAnglesDegrees(double param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar2 = param_1 - *param_2;
  auVar4._0_8_ = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar4._8_4_ = in_XMM0_Dc & _UNK_15061cc88;
  auVar4._12_4_ = in_XMM0_Dd & _UNK_15061cc8c;
  if (__real_4066800000000000 < auVar4._0_8_) {
    dVar5 = __real_4076800000000000;
    if ((dVar2 <= 0.0) && (dVar5 = 0.0, dVar2 < 0.0)) {
      dVar5 = __real_c076800000000000;
    }
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._0_8_ = auVar4._0_8_ * __real_3f66c16c16c16c17 + __real_3fe0000000000000;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar3._0_8_;
    auVar4 = roundpd(auVar3,auVar1,1);
    *param_2 = auVar4._0_8_ * dVar5 + *param_2;
  }
  return;
}

// TIsNearlyEqualByULP<float,unsigned_int,2147483648> @ 141c7cdc0

bool __cdecl
FMath::TIsNearlyEqualByULP<float,unsigned_int,2147483648>(float param_1,float param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = _isnan((double)param_1);
  if (iVar1 == 0) {
    iVar1 = _isnan((double)param_2);
    if (iVar1 == 0) {
      iVar1 = _finite((double)param_1);
      if ((iVar1 != 0) && (iVar1 = _finite((double)param_2), iVar1 != 0)) {
        if ((int)param_1 < 0) {
          uVar4 = -(int)param_1;
        }
        else {
          uVar4 = (uint)param_1 | 0x80000000;
        }
        if ((int)param_2 < 0) {
          uVar3 = -(int)param_2;
        }
        else {
          uVar3 = (uint)param_2 | 0x80000000;
        }
        uVar2 = uVar4 - uVar3;
        if (uVar4 < uVar3) {
          uVar2 = uVar3 - uVar4;
        }
        return uVar2 <= (uint)param_3;
      }
      if (param_1 == param_2) {
        return true;
      }
    }
  }
  return false;
}

// Log2 @ 141c94e80

float __cdecl FMath::Log2(float param_1)

{
  float fVar1;
  
  fVar1 = logf(param_1);
  return fVar1 * __real_3fb8aa3b;
}

// Log2 @ 141c94ea0

double __cdecl FMath::Log2(double param_1)

{
  double dVar1;
  
  dVar1 = log(param_1);
  return dVar1 * __real_3ff71547652b82fe;
}

