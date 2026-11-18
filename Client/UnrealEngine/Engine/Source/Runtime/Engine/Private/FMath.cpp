// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// SpringDamper<float> @ 1474ac640

void __cdecl
FMath::SpringDamper<float>
          (float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6,
          float param_7)

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
  float local_a8 [40];
  
  fVar3 = param_7;
  fVar2 = param_5;
  fVar1 = __real_3f800000;
  if (0.0 < param_5) {
    fVar8 = param_6 * __real_40c90fdb;
    if (__real_322bcc77 <= fVar8) {
      fVar7 = *param_3;
      fVar6 = __real_3f800000 / fVar8;
      if (__real_322bcc77 <= param_7) {
        fVar4 = *param_2;
        fVar7 = (fVar6 + fVar6) * param_7 * *param_4 + fVar7;
        fVar6 = *param_1 - fVar7;
        if (param_7 <= __real_3f800000) {
          if (__real_3f800000 <= param_7) {
            fVar2 = fVar8 * param_5;
            fVar1 = fVar6 * fVar8 + fVar4;
            fVar3 = __real_3f800000 /
                    ((fVar2 * __real_3e83b5ca * fVar2 + __real_3f80f478 + fVar2 * __real_3ee6ad0d) *
                     fVar2 + __real_3f800000);
            *param_1 = (fVar1 * param_5 + fVar6) * fVar3 + fVar7;
            *param_2 = (fVar4 - fVar1 * fVar2) * fVar3;
          }
          else {
            fVar9 = fVar8 * param_7;
            fVar5 = SQRT(__real_3f800000 - param_7 * param_7) * fVar8;
            fVar4 = (fVar9 * fVar6 + fVar4) / fVar5;
            SinCos<float>(&param_5,local_a8,fVar5 * param_5);
            fVar9 = fVar9 * fVar2;
            fVar1 = fVar1 / (((fVar9 * __real_3e83b5ca + __real_3ee6ad0d) * fVar9 + __real_3f80f478)
                             * fVar9 + fVar1);
            fVar2 = (fVar4 * param_5 + fVar6 * local_a8[0]) * fVar1;
            *param_1 = fVar2;
            *param_2 = (fVar5 * local_a8[0] * fVar4 - fVar5 * param_5 * fVar6) * fVar1 -
                       fVar2 * fVar3 * fVar8;
            *param_1 = fVar7 + *param_1;
          }
        }
        else {
          fVar1 = SQRT(param_7 * param_7 - __real_3f800000) * fVar8;
          fVar8 = fVar8 * param_7;
          fVar9 = (float)((uint)(fVar8 + fVar1) ^ __xmm_80000000800000008000000080000000);
          fVar3 = (fVar1 - fVar8) * param_5;
          fVar2 = fVar9 * param_5;
          fVar4 = ((fVar8 - fVar1) * fVar6 + fVar4) * (__real_bf000000 / fVar1);
          fVar2 = fVar4 / (((__real_3ee6ad0d - fVar2 * __real_3e83b5ca) * fVar2 * fVar2 -
                           fVar2 * __real_3f80f478) + __real_3f800000);
          fVar3 = (fVar6 - fVar4) /
                  (((__real_3ee6ad0d - fVar3 * __real_3e83b5ca) * fVar3 * fVar3 -
                   fVar3 * __real_3f80f478) + __real_3f800000);
          *param_1 = fVar3 + fVar7 + fVar2;
          *param_2 = fVar2 * fVar9 + fVar3 * (fVar1 - fVar8);
        }
      }
      else {
        fVar1 = *param_1;
        SinCos<float>(&param_5,local_a8,fVar8 * param_5);
        *param_1 = fVar6 * *param_2 * param_5 + (fVar1 - fVar7) * local_a8[0] + fVar7;
        *param_2 = local_a8[0] * *param_2 - param_5 * fVar8 * (fVar1 - fVar7);
      }
    }
    else {
      *param_1 = param_5 * *param_2 + *param_1;
    }
  }
  return;
}

// UnwindRadians<float> @ 1474b0070

float __cdecl FMath::UnwindRadians<float>(float param_1)

{
  for (; __real_40490fdb < param_1; param_1 = param_1 + __real_c0c90fdb) {
  }
  for (; param_1 < __real_c0490fdb; param_1 = param_1 + __real_40c90fdb) {
  }
  return param_1;
}

// CubicCRSplineInterpSafe<UE::Math::TVector<double>_> @ 1475926e0

TVector<double> * __cdecl
FMath::CubicCRSplineInterpSafe<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4,float param_5,float param_6,
          float param_7,float param_8,float param_9)

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
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  
  if (((((float)((uint)(param_6 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) ||
       ((float)((uint)(param_7 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) ||
      ((float)((uint)(param_8 - param_7) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) ||
     (((float)((uint)(param_7 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77 ||
      ((float)((uint)(param_8 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)))) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  else {
    fVar15 = __real_3f800000 / (param_6 - param_5);
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar7 = (double)((param_6 - param_9) * fVar15);
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    fVar16 = __real_3f800000 / (param_7 - param_6);
    dVar18 = (double)((param_9 - param_5) * fVar15);
    dVar4 = (param_3->field0_0x0)._s_0.X;
    dVar9 = (double)((param_7 - param_9) * fVar16);
    dVar12 = (double)((param_9 - param_6) * fVar16);
    dVar8 = dVar4 * dVar12 + dVar1 * dVar9;
    dVar11 = dVar2 * dVar12 + dVar3 * dVar9;
    dVar17 = (param_3->field0_0x0)._s_0.Z * dVar12 + (param_2->field0_0x0)._s_0.Z * dVar9;
    fVar15 = __real_3f800000 / (param_8 - param_7);
    fVar22 = __real_3f800000 / (param_8 - param_6);
    fVar16 = __real_3f800000 / (param_7 - param_5);
    dVar13 = (double)((param_8 - param_9) * fVar15);
    dVar14 = (double)((param_9 - param_7) * fVar15);
    dVar20 = (double)(fVar16 * (param_7 - param_9));
    dVar19 = (double)(fVar22 * (param_9 - param_6));
    dVar21 = (double)(fVar16 * (param_9 - param_5));
    dVar10 = (double)(fVar22 * (param_8 - param_9));
    dVar5 = (param_4->field0_0x0)._s_0.Y;
    dVar6 = (param_4->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((dVar7 * (param_1->field0_0x0)._s_0.X + dVar1 * dVar18) * dVar20 + dVar21 * dVar8) * dVar9
         + ((dVar14 * (param_4->field0_0x0)._s_0.X + dVar4 * dVar13) * dVar19 + dVar10 * dVar8) *
           dVar12;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    dVar8 = (param_3->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((dVar7 * (param_1->field0_0x0)._s_0.Y + dVar3 * dVar18) * dVar20 + dVar21 * dVar11) *
         dVar9 + ((dVar14 * dVar5 + dVar2 * dVar13) * dVar19 + dVar10 * dVar11) * dVar12;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((dVar7 * dVar1 + dVar4 * dVar18) * dVar20 + dVar21 * dVar17) * dVar9 +
         ((dVar14 * dVar6 + dVar8 * dVar13) * dVar19 + dVar10 * dVar17) * dVar12;
  }
  return __return_storage_ptr__;
}

// FindDeltaAngleRadians<float,float> @ 14767a780

float __cdecl FMath::FindDeltaAngleRadians<float,float>(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_c0490fdb;
  fVar3 = __real_40490fdb;
  fVar2 = param_2 - param_1;
  if (__real_c0490fdb <= fVar2) {
    if (fVar2 <= __real_40490fdb) {
      return fVar2;
    }
    fVar1 = FGenericPlatformMath::Fmod(fVar2 - __real_40490fdb,__real_40c90fdb);
    if (fVar1 != 0.0) {
      return fVar1 - fVar3;
    }
  }
  else {
    fVar2 = FGenericPlatformMath::Fmod(__real_c0490fdb - fVar2,__real_40c90fdb);
    fVar3 = fVar1;
    if (fVar2 != 0.0) {
      return __real_40490fdb - fVar2;
    }
  }
  return fVar3;
}

// ClampAngle<float> @ 1476dbaf0

float __cdecl FMath::ClampAngle<float>(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = __real_43b40000;
  fVar3 = FGenericPlatformMath::Fmod(param_3 - param_2,__real_43b40000);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar2;
  }
  fVar3 = fVar3 * __real_3f000000;
  fVar4 = FGenericPlatformMath::Fmod(fVar3 + param_2,fVar2);
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + fVar2;
  }
  fVar5 = FGenericPlatformMath::Fmod(param_1 - fVar4,fVar2);
  fVar1 = __real_43340000;
  if (fVar5 < 0.0) {
    fVar5 = fVar5 + fVar2;
  }
  if (__real_43340000 < fVar5) {
    fVar5 = fVar5 - fVar2;
  }
  if (fVar5 <= fVar3) {
    if (fVar5 < (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000)) {
      param_1 = fVar4 - fVar3;
    }
  }
  else {
    param_1 = fVar4 + fVar3;
  }
  fVar3 = FGenericPlatformMath::Fmod(param_1,fVar2);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar2;
  }
  if (fVar1 < fVar3) {
    fVar3 = fVar3 - fVar2;
  }
  return fVar3;
}

// LinePlaneIntersection<double> @ 14775f100

TVector<double> * __cdecl
FMath::LinePlaneIntersection<double>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar2 = (((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) *
           (param_4->field0_0x0)._s_0.Y +
           ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) *
           (param_4->field0_0x0)._s_0.X +
          ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) *
          (param_4->field0_0x0)._s_0.Z) /
          (dVar4 * (param_4->field0_0x0)._s_0.Y + dVar3 * (param_4->field0_0x0)._s_0.X +
          dVar5 * (param_4->field0_0x0)._s_0.Z);
  dVar1 = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 * dVar5 + (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * dVar3 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar4 + dVar5;
  return __return_storage_ptr__;
}

// ComputeBoundingSphereForCone<double> @ 147998db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSphere<double> * __cdecl
FMath::ComputeBoundingSphereForCone<double>
          (TSphere<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  if (param_4 < ___real_3fe6a09e60000000) {
    (__return_storage_ptr__->Center).field0_0x0._s_0.X =
         dVar1 * param_3 * param_4 + (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar2 * param_3 * param_4 + dVar4;
    (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar3 * param_3 * param_4 + dVar5;
    __return_storage_ptr__->W = param_3 * param_5;
    return __return_storage_ptr__;
  }
  dVar6 = (__real_3fe0000000000000 / param_4) * param_3;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = dVar6 * dVar1 + (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar6 * dVar2 + dVar4;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar6 * dVar3 + dVar5;
  __return_storage_ptr__->W = dVar6;
  return __return_storage_ptr__;
}

// LinePlaneIntersection<double> @ 1479a0d90

TVector<double> * __cdecl
FMath::LinePlaneIntersection<double>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TPlane<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_3->W -
          ((double)param_3->_padding_ * (param_1->field0_0x0)._s_0.Y +
           (double)param_3->_padding_ * (param_1->field0_0x0)._s_0.X +
          (double)param_3->_padding_ * (param_1->field0_0x0)._s_0.Z)) /
          (dVar4 * (double)param_3->_padding_ + dVar3 * (double)param_3->_padding_ +
          dVar5 * (double)param_3->_padding_);
  dVar1 = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 * dVar5 + (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * dVar3 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar4 + dVar5;
  return __return_storage_ptr__;
}

// DynamicWeightedMovingAverage<double> @ 147d65de0

double __cdecl
FMath::DynamicWeightedMovingAverage<double>
          (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (0.0 < param_3) {
    dVar1 = (double)CONCAT44((uint)((ulonglong)(param_1 - param_2) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(param_1 - param_2,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) / param_3;
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    param_4 = param_4 + dVar1 * (param_5 - param_4);
  }
  if (__real_3ff0000000000000 <= param_4) {
    param_4 = __real_3ff0000000000000;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  return (__real_3ff0000000000000 - param_4) * param_2 + param_4 * param_1;
}

// SpringDamper<UE::Math::TQuat<double>_> @ 147d733d0

void __cdecl
FMath::SpringDamper<UE::Math::TQuat<double>_>
          (TQuat<double> *param_1,TQuat<double> *param_2,TQuat<double> *param_3,
          TQuat<double> *param_4,float param_5,float param_6,float param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  float fVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  double dVar43;
  double dVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  float local_d8;
  float local_d4 [3];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  
  fVar26 = param_7;
  fVar23 = __real_3f800000;
  if (0.0 < param_5) {
    fVar45 = param_6 * __real_40c90fdb;
    if (__real_322bcc77 <= fVar45) {
      if (__real_322bcc77 <= param_7) {
        dVar28 = (double)((__real_40000000 / fVar45) * param_7);
        dVar11 = dVar28 * param_4->X + param_3->X;
        dVar12 = dVar28 * param_4->Y + param_3->Y;
        dVar24 = dVar28 * param_4->Z + param_3->Z;
        dVar21 = dVar28 * param_4->W + param_3->W;
        local_b8 = param_1->X - dVar11;
        dStack_b0 = param_1->Y - dVar12;
        dVar28 = param_1->Z - dVar24;
        dVar19 = param_1->W - dVar21;
        local_c8._8_4_ = SUB84(dVar19,0);
        local_c8._0_8_ = dVar28;
        local_c8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        if (param_7 <= __real_3f800000) {
          if (__real_3f800000 <= param_7) {
            dVar34 = (double)fVar45;
            fVar45 = fVar45 * param_5;
            dVar40 = dVar28 * dVar34 + param_2->Z;
            dVar43 = dVar19 * dVar34 + param_2->W;
            dVar30 = (double)param_5;
            dVar31 = param_2->X + local_b8 * dVar34;
            dVar41 = param_2->Y + dStack_b0 * dVar34;
            dVar39 = (double)(__real_3f800000 /
                             (((fVar45 * __real_3e83b5ca + __real_3ee6ad0d) * fVar45 +
                              __real_3f80f478) * fVar45 + __real_3f800000));
            dVar11 = (dVar30 * dVar31 + local_b8) * dVar39 + dVar11;
            dVar12 = (dVar30 * dVar41 + dStack_b0) * dVar39 + dVar12;
            auVar29._8_4_ = SUB84(dVar12,0);
            auVar29._0_8_ = dVar11;
            auVar29._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            param_1->X = dVar11;
            param_1->Y = (double)auVar29._8_8_;
            param_1->Z = (dVar30 * dVar40 + dVar28) * dVar39 + dVar24;
            param_1->W = (dVar30 * dVar43 + dVar19) * dVar39 + dVar21;
            dVar24 = (double)fVar45;
            dVar11 = ((dVar31 - local_b8 * dVar34) - dVar24 * dVar31) * dVar39;
            dVar12 = ((dVar41 - dStack_b0 * dVar34) - dVar24 * dVar41) * dVar39;
            auVar17._8_4_ = SUB84(dVar12,0);
            auVar17._0_8_ = dVar11;
            auVar17._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            param_2->X = dVar11;
            param_2->Y = (double)auVar17._8_8_;
            dVar11 = ((dVar40 - dVar28 * dVar34) - dVar24 * dVar40) * dVar39;
            dVar39 = ((dVar43 - dVar19 * dVar34) - dVar24 * dVar43) * dVar39;
            auVar36._8_4_ = SUB84(dVar39,0);
            auVar36._0_8_ = dVar11;
            auVar36._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            param_2->Z = dVar11;
            param_2->W = (double)auVar36._8_8_;
          }
          else {
            fVar27 = fVar45 * param_7;
            dVar34 = (double)fVar27;
            auVar37._8_4_ = SUB84(dVar34,0);
            auVar37._0_8_ = dVar34;
            auVar37._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            fVar32 = SQRT(__real_3f800000 - param_7 * param_7) * fVar45;
            auVar42._0_8_ = dVar34 * dVar28 + param_2->Z;
            auVar42._8_8_ = dVar34 * dVar19 + param_2->W;
            auVar38._0_8_ = dVar34 * local_b8 + param_2->X;
            auVar38._8_8_ = auVar37._8_8_ * dStack_b0 + param_2->Y;
            auVar9._8_4_ = SUB84((double)fVar32,0);
            auVar9._0_8_ = (double)fVar32;
            auVar9._12_4_ = (int)((ulonglong)(double)fVar32 >> 0x20);
            auVar29 = divpd(auVar38,auVar9);
            auVar10._8_4_ = SUB84((double)fVar32,0);
            auVar10._0_8_ = (double)fVar32;
            auVar10._12_4_ = (int)((ulonglong)(double)fVar32 >> 0x20);
            auVar36 = divpd(auVar42,auVar10);
            SinCos<float>(local_d4,&local_d8,param_5 * fVar32);
            fVar27 = fVar27 * param_5;
            dVar39 = (double)local_d8;
            dVar34 = (double)local_d4[0];
            dVar40 = (double)(fVar23 / (((fVar27 * __real_3e83b5ca + __real_3ee6ad0d) * fVar27 +
                                        __real_3f80f478) * fVar27 + fVar23));
            dVar28 = (local_b8 * dVar39 + auVar29._0_8_ * dVar34) * dVar40;
            dVar19 = (dStack_b0 * dVar39 + auVar29._8_8_ * dVar34) * dVar40;
            auVar15._8_4_ = SUB84(dVar19,0);
            auVar15._0_8_ = dVar28;
            auVar15._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
            param_1->X = dVar28;
            param_1->Y = (double)auVar15._8_8_;
            dVar28 = (double)fVar26;
            param_1->Z = (auVar36._0_8_ * dVar34 + (double)local_c8._0_8_ * dVar39) * dVar40;
            param_1->W = (auVar36._8_8_ * dVar34 + (double)local_c8._8_8_ * dVar39) * dVar40;
            dVar43 = (double)fVar45;
            dVar19 = (double)(local_d4[0] * fVar32);
            dVar34 = (0.0 - param_1->X) * dVar28 * dVar43;
            dVar39 = (0.0 - param_1->Y) * dVar28 * dVar43;
            dVar30 = (0.0 - param_1->Z) * dVar28 * dVar43;
            dVar43 = (0.0 - param_1->W) * dVar28 * dVar43;
            dVar28 = (double)(local_d8 * fVar32);
            auVar16._8_4_ = SUB84(dVar39,0);
            auVar16._0_8_ = dVar34;
            auVar16._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            param_2->X = dVar34;
            param_2->Y = (double)auVar16._8_8_;
            param_2->Z = dVar30;
            param_2->W = dVar43;
            param_2->X = (auVar29._0_8_ * dVar28 - local_b8 * dVar19) * dVar40 + param_2->X;
            param_2->Y = (auVar29._8_8_ * dVar28 - dStack_b0 * dVar19) * dVar40 + param_2->Y;
            param_2->Z = (auVar36._0_8_ * dVar28 - (double)local_c8._0_8_ * dVar19) * dVar40 +
                         dVar30;
            param_2->W = (auVar36._8_8_ * dVar28 - (double)local_c8._8_8_ * dVar19) * dVar40 +
                         dVar43;
            dVar11 = dVar11 + param_1->X;
            dVar12 = dVar12 + param_1->Y;
            dVar24 = dVar24 + param_1->Z;
            dVar21 = dVar21 + param_1->W;
            auVar22._8_4_ = SUB84(dVar12,0);
            auVar22._0_8_ = dVar11;
            auVar22._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            param_1->X = dVar11;
            param_1->Y = (double)auVar22._8_8_;
            auVar20._8_4_ = SUB84(dVar21,0);
            auVar20._0_8_ = dVar24;
            auVar20._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
            param_1->Z = dVar24;
            param_1->W = (double)auVar20._8_8_;
          }
        }
        else {
          fVar27 = SQRT(param_7 * param_7 - __real_3f800000) * fVar45;
          fVar45 = fVar45 * param_7;
          fVar23 = fVar27 + fVar27;
          dVar19 = (double)(fVar45 - fVar27);
          fVar46 = (float)((uint)(fVar45 + fVar27) ^ __xmm_80000000800000008000000080000000);
          fVar32 = fVar46 * param_5;
          auVar33._0_8_ = 0.0 - (dVar19 * local_b8 + param_2->X);
          auVar33._8_8_ = 0.0 - (dVar19 * dStack_b0 + param_2->Y);
          auVar6._8_4_ = SUB84((double)fVar23,0);
          auVar6._0_8_ = (double)fVar23;
          auVar6._12_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
          auVar29 = divpd(auVar33,auVar6);
          auVar35._0_8_ = 0.0 - (dVar19 * dVar28 + param_2->Z);
          auVar35._8_8_ = 0.0 - (dVar19 * (double)local_c8._8_8_ + param_2->W);
          fVar26 = (fVar27 - fVar45) * param_5;
          auVar7._8_4_ = SUB84((double)fVar23,0);
          auVar7._0_8_ = (double)fVar23;
          auVar7._12_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
          auVar36 = divpd(auVar35,auVar7);
          dVar34 = (double)(__real_3f800000 /
                           (((__real_3ee6ad0d - fVar26 * __real_3e83b5ca) * fVar26 * fVar26 -
                            fVar26 * __real_3f80f478) + __real_3f800000));
          dVar41 = (local_b8 - auVar29._0_8_) * dVar34;
          dVar44 = (dStack_b0 - auVar29._8_8_) * dVar34;
          dVar43 = (dVar28 - auVar36._0_8_) * dVar34;
          dVar34 = ((double)local_c8._8_8_ - auVar36._8_8_) * dVar34;
          auVar25._8_4_ = SUB84(dVar44,0);
          auVar25._0_8_ = dVar41;
          auVar25._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
          dVar39 = (double)(__real_3f800000 /
                           (((__real_3ee6ad0d - fVar32 * __real_3e83b5ca) * fVar32 * fVar32 -
                            fVar32 * __real_3f80f478) + __real_3f800000));
          dVar30 = dVar39 * auVar29._0_8_;
          dVar31 = dVar39 * auVar29._8_8_;
          dVar40 = dVar39 * auVar36._0_8_;
          dVar39 = dVar39 * auVar36._8_8_;
          dVar28 = dVar43 + dVar24 + dVar40;
          dVar19 = dVar34 + dVar21 + dVar39;
          param_1->X = dVar41 + dVar11 + dVar30;
          param_1->Y = auVar25._8_8_ + dVar12 + dVar31;
          dVar24 = (double)(fVar27 - fVar45);
          auVar8._8_4_ = SUB84(dVar19,0);
          auVar8._0_8_ = dVar28;
          auVar8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          param_1->Z = dVar28;
          param_1->W = (double)auVar8._8_8_;
          dVar28 = (double)fVar46;
          dVar11 = dVar24 * dVar41 + dVar28 * dVar30;
          dVar12 = dVar24 * dVar44 + dVar28 * dVar31;
          auVar14._8_4_ = SUB84(dVar12,0);
          auVar14._0_8_ = dVar11;
          auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          param_2->X = dVar11;
          param_2->Y = (double)auVar14._8_8_;
          param_2->Z = dVar28 * dVar40 + dVar24 * dVar43;
          param_2->W = dVar28 * dVar39 + dVar24 * dVar34;
        }
      }
      else {
        dVar12 = param_3->X;
        dVar19 = param_3->Y;
        dVar24 = param_3->Z;
        dVar21 = param_3->W;
        dVar34 = param_1->X - dVar12;
        dVar39 = param_1->Y - dVar19;
        dVar40 = param_1->Z - dVar24;
        dVar43 = param_1->W - dVar21;
        SinCos<float>(&local_d8,&param_5,fVar45 * param_5);
        auVar1._0_8_ = param_2->X;
        auVar1._8_8_ = param_2->Y;
        auVar2._0_8_ = param_2->Z;
        auVar2._8_8_ = param_2->W;
        dVar28 = (double)param_5;
        auVar4._8_4_ = SUB84((double)fVar45,0);
        auVar4._0_8_ = (double)fVar45;
        auVar4._12_4_ = (int)((ulonglong)(double)fVar45 >> 0x20);
        auVar29 = divpd(auVar1,auVar4);
        dVar11 = (double)local_d8;
        param_1->X = auVar29._0_8_ * dVar11 + dVar28 * dVar34 + dVar12;
        param_1->Y = auVar29._8_8_ * dVar11 + dVar28 * dVar39 + dVar19;
        auVar5._8_4_ = SUB84((double)fVar45,0);
        auVar5._0_8_ = (double)fVar45;
        auVar5._12_4_ = (int)((ulonglong)(double)fVar45 >> 0x20);
        auVar29 = divpd(auVar2,auVar5);
        param_1->Z = auVar29._0_8_ * dVar11 + dVar28 * dVar40 + dVar24;
        param_1->W = auVar29._8_8_ * dVar11 + dVar28 * dVar43 + dVar21;
        dVar24 = (double)(local_d8 * fVar45);
        dVar11 = dVar28 * param_2->X - dVar24 * dVar34;
        dVar12 = dVar28 * param_2->Y - dVar24 * dVar39;
        dVar19 = dVar28 * param_2->Z - dVar24 * dVar40;
        dVar28 = dVar28 * param_2->W - dVar24 * dVar43;
        auVar13._8_4_ = SUB84(dVar12,0);
        auVar13._0_8_ = dVar11;
        auVar13._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        param_2->X = dVar11;
        param_2->Y = (double)auVar13._8_8_;
        auVar18._8_4_ = SUB84(dVar28,0);
        auVar18._0_8_ = dVar19;
        auVar18._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        param_2->Z = dVar19;
        param_2->W = (double)auVar18._8_8_;
      }
    }
    else {
      dVar24 = (double)param_5;
      dVar28 = param_2->Z;
      dVar19 = param_2->W;
      dVar11 = dVar24 * param_2->X + param_1->X;
      dVar12 = dVar24 * param_2->Y + param_1->Y;
      auVar3._8_4_ = SUB84(dVar12,0);
      auVar3._0_8_ = dVar11;
      auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      param_1->X = dVar11;
      param_1->Y = (double)auVar3._8_8_;
      param_1->Z = dVar24 * dVar28 + param_1->Z;
      param_1->W = dVar24 * dVar19 + param_1->W;
    }
  }
  return;
}

// SpringDamper<UE::Math::TVector<double>_> @ 147d73a80

void __cdecl
FMath::SpringDamper<UE::Math::TVector<double>_>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float local_d8;
  float local_d4;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  
  if (0.0 < param_5) {
    fVar23 = param_6 * __real_40c90fdb;
    if (__real_322bcc77 <= fVar23) {
      if (__real_322bcc77 <= param_7) {
        dVar1 = (double)((__real_40000000 / fVar23) * param_7);
        local_b8 = dVar1 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
        local_b0 = dVar1 * (param_4->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
        dVar1 = dVar1 * (param_4->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z;
        local_c8 = (param_1->field0_0x0)._s_0.X - local_b8;
        local_c0 = (param_1->field0_0x0)._s_0.Y - local_b0;
        local_d0 = (param_1->field0_0x0)._s_0.Z - dVar1;
        if (param_7 <= __real_3f800000) {
          dVar2 = (param_2->field0_0x0)._s_0.X;
          if (__real_3f800000 <= param_7) {
            dVar3 = (param_2->field0_0x0)._s_0.Y;
            dVar10 = (double)fVar23;
            fVar23 = fVar23 * param_5;
            dVar11 = (double)param_5;
            dVar12 = dVar10 * local_c8 + dVar2;
            dVar5 = (param_2->field0_0x0)._s_0.Z;
            dVar4 = dVar10 * local_d0 + dVar5;
            dVar8 = dVar10 * local_c0 + dVar3;
            dVar6 = (double)(__real_3f800000 /
                            (((fVar23 * __real_3e83b5ca + __real_3ee6ad0d) * fVar23 +
                             __real_3f80f478) * fVar23 + __real_3f800000));
            (param_1->field0_0x0)._s_0.X = (dVar11 * dVar12 + local_c8) * dVar6 + local_b8;
            (param_1->field0_0x0)._s_0.Y = (dVar11 * dVar8 + local_c0) * dVar6 + local_b0;
            dVar10 = (double)fVar23;
            (param_1->field0_0x0)._s_0.Z = (dVar11 * dVar4 + local_d0) * dVar6 + dVar1;
            (param_2->field0_0x0)._s_0.X = (dVar2 - dVar10 * dVar12) * dVar6;
            (param_2->field0_0x0)._s_0.Y = (dVar3 - dVar10 * dVar8) * dVar6;
            (param_2->field0_0x0)._s_0.Z = (dVar5 - dVar10 * dVar4) * dVar6;
          }
          else {
            fVar7 = fVar23 * param_7;
            dVar3 = (double)fVar7;
            fVar13 = SQRT(__real_3f800000 - param_7 * param_7) * fVar23;
            dVar11 = __real_3ff0000000000000 / (double)fVar13;
            dVar10 = (dVar3 * local_c8 + dVar2) * dVar11;
            dVar4 = (dVar3 * local_c0 + (param_2->field0_0x0)._s_0.Y) * dVar11;
            dVar11 = (dVar3 * local_d0 + (param_2->field0_0x0)._s_0.Z) * dVar11;
            SinCos<float>(&local_d4,&local_d8,fVar13 * param_5);
            fVar7 = fVar7 * param_5;
            dVar5 = (double)local_d8;
            dVar6 = (double)local_d4;
            dVar15 = (double)param_7;
            dVar14 = (double)fVar23;
            dVar3 = (double)(__real_3f800000 /
                            (((fVar7 * __real_3e83b5ca + __real_3ee6ad0d) * fVar7 + __real_3f80f478)
                             * fVar7 + __real_3f800000));
            dVar9 = (dVar5 * local_c8 + dVar10 * dVar6) * dVar3;
            (param_1->field0_0x0)._s_0.X = dVar9;
            dVar2 = (dVar5 * local_c0 + dVar4 * dVar6) * dVar3;
            dVar12 = (double)(fVar13 * local_d8);
            dVar8 = (double)(fVar13 * local_d4);
            dVar5 = (dVar5 * local_d0 + dVar11 * dVar6) * dVar3;
            (param_1->field0_0x0)._s_0.Y = dVar2;
            (param_1->field0_0x0)._s_0.Z = dVar5;
            (param_2->field0_0x0)._s_0.X =
                 (dVar10 * dVar12 - dVar8 * local_c8) * dVar3 - dVar15 * dVar9 * dVar14;
            (param_2->field0_0x0)._s_0.Y =
                 (dVar4 * dVar12 - dVar8 * local_c0) * dVar3 - dVar15 * dVar2 * dVar14;
            (param_2->field0_0x0)._s_0.Z =
                 (dVar11 * dVar12 - dVar8 * local_d0) * dVar3 - dVar15 * dVar5 * dVar14;
            (param_1->field0_0x0)._s_0.X = local_b8 + (param_1->field0_0x0)._s_0.X;
            (param_1->field0_0x0)._s_0.Y = local_b0 + (param_1->field0_0x0)._s_0.Y;
            (param_1->field0_0x0)._s_0.Z = dVar1 + (param_1->field0_0x0)._s_0.Z;
          }
        }
        else {
          fVar13 = SQRT(param_7 * param_7 - __real_3f800000) * fVar23;
          fVar23 = fVar23 * param_7;
          dVar5 = (double)(fVar23 - fVar13);
          dVar10 = __real_3ff0000000000000 / (double)(fVar13 + fVar13);
          dVar3 = (dVar5 * local_c8 + (param_2->field0_0x0)._s_0.X) * dVar10;
          dVar2 = (dVar5 * local_c0 + (param_2->field0_0x0)._s_0.Y) * dVar10;
          fVar24 = (float)((uint)(fVar23 + fVar13) ^ __xmm_80000000800000008000000080000000);
          uVar21 = (uint)__xmm_80000000000000008000000000000000;
          uVar19 = SUB84(dVar3,0) ^ uVar21;
          uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          uVar20 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar22;
          fVar16 = fVar24 * param_5;
          uVar17 = SUB84(dVar2,0) ^ uVar21;
          uVar18 = (uint)((ulonglong)dVar2 >> 0x20) ^ uVar22;
          dVar10 = (dVar5 * local_d0 + (param_2->field0_0x0)._s_0.Z) * dVar10;
          fVar7 = (fVar13 - fVar23) * param_5;
          uVar21 = SUB84(dVar10,0) ^ uVar21;
          uVar22 = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar22;
          dVar11 = (double)(__real_3f800000 /
                           (((__real_3ee6ad0d - fVar7 * __real_3e83b5ca) * fVar7 * fVar7 -
                            fVar7 * __real_3f80f478) + __real_3f800000));
          dVar10 = (local_c8 - (double)CONCAT44(uVar20,uVar19)) * dVar11;
          dVar4 = (local_c0 - (double)CONCAT44(uVar18,uVar17)) * dVar11;
          dVar11 = (local_d0 - (double)CONCAT44(uVar22,uVar21)) * dVar11;
          dVar5 = (double)(__real_3f800000 /
                          (((__real_3ee6ad0d - fVar16 * __real_3e83b5ca) * fVar16 * fVar16 -
                           fVar16 * __real_3f80f478) + __real_3f800000));
          dVar3 = (double)CONCAT44(uVar20,uVar19) * dVar5;
          dVar2 = (double)CONCAT44(uVar18,uVar17) * dVar5;
          dVar5 = (double)CONCAT44(uVar22,uVar21) * dVar5;
          dVar12 = (double)(fVar13 - fVar23);
          (param_1->field0_0x0)._s_0.X = dVar10 + local_b8 + dVar3;
          (param_1->field0_0x0)._s_0.Y = dVar4 + local_b0 + dVar2;
          dVar6 = (double)fVar24;
          (param_1->field0_0x0)._s_0.Z = dVar11 + dVar1 + dVar5;
          (param_2->field0_0x0)._s_0.X = dVar3 * dVar6 + dVar10 * dVar12;
          (param_2->field0_0x0)._s_0.Y = dVar2 * dVar6 + dVar4 * dVar12;
          (param_2->field0_0x0)._s_0.Z = dVar5 * dVar6 + dVar11 * dVar12;
        }
      }
      else {
        dVar1 = (param_3->field0_0x0)._s_0.X;
        dVar2 = (param_3->field0_0x0)._s_0.Y;
        dVar11 = (param_1->field0_0x0)._s_0.X - dVar1;
        dVar3 = (param_3->field0_0x0)._s_0.Z;
        dVar6 = (param_1->field0_0x0)._s_0.Y - dVar2;
        dVar12 = (param_1->field0_0x0)._s_0.Z - dVar3;
        dVar4 = __real_3ff0000000000000 / (double)fVar23;
        SinCos<float>(&local_d8,&param_5,fVar23 * param_5);
        dVar5 = (param_2->field0_0x0)._s_0.Y;
        dVar14 = (double)param_5;
        dVar8 = (double)local_d8;
        dVar10 = (param_2->field0_0x0)._s_0.Z;
        dVar9 = (double)(local_d8 * fVar23);
        (param_1->field0_0x0)._s_0.X =
             dVar4 * (param_2->field0_0x0)._s_0.X * dVar8 + dVar11 * dVar14 + dVar1;
        (param_1->field0_0x0)._s_0.Y = dVar6 * dVar14 + dVar2 + dVar4 * dVar5 * dVar8;
        (param_1->field0_0x0)._s_0.Z = dVar12 * dVar14 + dVar3 + dVar4 * dVar10 * dVar8;
        (param_2->field0_0x0)._s_0.Y = dVar14 * (param_2->field0_0x0)._s_0.Y - dVar6 * dVar9;
        (param_2->field0_0x0)._s_0.X = dVar14 * (param_2->field0_0x0)._s_0.X - dVar11 * dVar9;
        (param_2->field0_0x0)._s_0.Z = dVar14 * (param_2->field0_0x0)._s_0.Z - dVar12 * dVar9;
      }
    }
    else {
      dVar3 = (double)param_5;
      dVar1 = (param_2->field0_0x0)._s_0.Z;
      dVar2 = (param_2->field0_0x0)._s_0.X;
      (param_1->field0_0x0)._s_0.Y =
           dVar3 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      (param_1->field0_0x0)._s_0.Z = dVar3 * dVar1 + (param_1->field0_0x0)._s_0.Z;
      (param_1->field0_0x0)._s_0.X = dVar3 * dVar2 + (param_1->field0_0x0)._s_0.X;
    }
  }
  return;
}

// LerpRange<double,float> @ 1480f1220

TRotator<double> * __cdecl
FMath::LerpRange<double,float>
          (TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,
          TRotator<double> *param_2,float param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  
  dVar23 = (double)param_3;
  dVar18 = __real_3ff0000000000000 - dVar23;
  dVar1 = dVar18 * param_1->Roll + dVar23 * param_2->Roll;
  auVar19._0_8_ = dVar23 * param_2->Pitch;
  auVar19._8_8_ = dVar23 * param_2->Yaw;
  dVar17 = dVar18 * param_1->Pitch + auVar19._0_8_;
  dVar3 = dVar18 * param_1->Yaw + auVar19._8_8_;
  uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar17;
  auVar2._12_4_ = uVar26;
  __return_storage_ptr__->Pitch = dVar17;
  __return_storage_ptr__->Yaw = (double)auVar2._8_8_;
  __return_storage_ptr__->Roll = dVar1;
  auVar10._8_4_ = SUB84(dVar3,0);
  auVar10._0_8_ = dVar17;
  auVar10._12_4_ = uVar26;
  auVar11 = divpd(auVar10,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar11 = roundpd(auVar19,auVar11,3);
  dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar20._0_8_ = auVar11._0_8_ * dVar4;
  dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar20._8_8_ = auVar11._8_8_ * dVar5;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar1;
  auVar11 = divpd(auVar12,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar17 = dVar17 - auVar20._0_8_;
  dVar3 = dVar3 - auVar20._8_8_;
  auVar11 = roundpd(auVar20,auVar11,3);
  dVar18 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar17;
  auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar16 = auVar13._8_8_ + dVar5;
  dVar1 = dVar1 - auVar11._0_8_ * dVar18;
  dVar23 = 0.0 - auVar11._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar6 = -(ulonglong)(0.0 <= dVar1);
  uVar8 = -(ulonglong)(0.0 <= dVar23);
  uVar7 = -(ulonglong)(0.0 <= dVar17);
  uVar9 = -(ulonglong)(0.0 <= dVar3);
  auVar21._0_8_ = uVar7 & (ulonglong)dVar17;
  auVar21._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar3);
  auVar21._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar3) >> 0x20);
  auVar25._0_4_ = ~(uint)uVar7 & SUB84(dVar17 + dVar4,0);
  auVar25._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar17 + dVar4) >> 0x20);
  auVar25._8_4_ = ~(uint)uVar9 & SUB84(dVar16,0);
  auVar25._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar16 >> 0x20);
  auVar25 = auVar25 | auVar21;
  auVar14._8_4_ = SUB84(dVar23,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar17 = auVar14._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar24._0_8_ = (ulonglong)dVar1 & uVar6;
  auVar24._8_4_ = (undefined4)(uVar8 & (ulonglong)dVar23);
  auVar24._12_4_ = (undefined4)((uVar8 & (ulonglong)dVar23) >> 0x20);
  auVar22._0_4_ = ~(uint)uVar6 & SUB84(dVar1 + dVar18,0);
  auVar22._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar18) >> 0x20);
  auVar22._8_4_ = ~(uint)uVar8 & SUB84(dVar17,0);
  auVar22._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
  auVar22 = auVar22 | auVar24;
  uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar22._0_8_);
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar25._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar25._8_8_);
  auVar15._0_8_ = uVar8 & (ulonglong)(auVar25._0_8_ - dVar4);
  uVar6 = uVar9 & (ulonglong)(auVar25._8_8_ - dVar5);
  auVar15._8_4_ = (undefined4)uVar6;
  auVar15._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar11._4_4_ = ~(uint)(uVar8 >> 0x20) & auVar25._4_4_;
  auVar11._0_4_ = ~(uint)uVar8 & auVar25._0_4_;
  auVar11._8_4_ = ~(uint)uVar9 & auVar25._8_4_;
  auVar11._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar25._12_4_;
  __return_storage_ptr__->Pitch = (double)SUB168(auVar15 | auVar11,0);
  __return_storage_ptr__->Yaw = (double)SUB168(auVar15 | auVar11,8);
  __return_storage_ptr__->Roll =
       (double)(uVar7 & (ulonglong)(auVar22._0_8_ - dVar18) |
               CONCAT44(~(uint)(uVar7 >> 0x20) & auVar22._4_4_,~(uint)uVar7 & auVar22._0_4_));
  return __return_storage_ptr__;
}

// CubicCRSplineInterpSafe<float> @ 1481be1d0

float __cdecl
FMath::CubicCRSplineInterpSafe<float>
          (float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6,
          float param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((((float)((uint)(param_6 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) ||
       ((float)((uint)(param_7 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) ||
      ((float)((uint)(param_8 - param_7) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) ||
     (((float)((uint)(param_7 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77 ||
      ((float)((uint)(param_8 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)))) {
    fVar1 = *param_2;
  }
  else {
    fVar1 = __real_3f800000 / (param_7 - param_6);
    fVar2 = __real_3f800000 / (param_7 - param_5);
    fVar7 = __real_3f800000 / (param_8 - param_6);
    fVar6 = (param_9 - param_6) * fVar1;
    fVar1 = (param_7 - param_9) * fVar1;
    fVar3 = __real_3f800000 / (param_8 - param_7);
    fVar4 = __real_3f800000 / (param_6 - param_5);
    fVar5 = fVar6 * *param_3 + fVar1 * *param_2;
    fVar1 = (((param_6 - param_9) * fVar4 * *param_1 + (param_9 - param_5) * fVar4 * *param_2) *
             fVar2 * (param_7 - param_9) + (param_9 - param_5) * fVar2 * fVar5) * fVar1 +
            (((param_9 - param_7) * fVar3 * *param_4 + (param_8 - param_9) * fVar3 * *param_3) *
             fVar7 * (param_9 - param_6) + (param_8 - param_9) * fVar7 * fVar5) * fVar6;
  }
  return fVar1;
}

// CubicCRSplineInterpSafe<UE::Math::TVector4<float>_> @ 1481be440

TVector4<float> * __cdecl
FMath::CubicCRSplineInterpSafe<UE::Math::TVector4<float>_>
          (TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1,TVector4<float> *param_2
          ,TVector4<float> *param_3,TVector4<float> *param_4,float param_5,float param_6,
          float param_7,float param_8,float param_9)

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
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
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
  
  if (((((float)((uint)(param_6 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) ||
       ((float)((uint)(param_7 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) ||
      ((float)((uint)(param_8 - param_7) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) ||
     (((float)((uint)(param_7 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77 ||
      ((float)((uint)(param_8 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)))) {
    uVar15 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar15;
  }
  else {
    fVar1 = (param_2->field0_0x0)._s_0.Z;
    fVar2 = (param_2->field0_0x0)._s_0.Y;
    fVar3 = (param_2->field0_0x0)._s_0.W;
    fVar4 = (param_3->field0_0x0)._s_0.X;
    fVar16 = __real_3f800000 / (param_6 - param_5);
    fVar5 = (param_2->field0_0x0)._s_0.X;
    fVar19 = (param_6 - param_9) * fVar16;
    fVar16 = (param_9 - param_5) * fVar16;
    fVar17 = __real_3f800000 / (param_7 - param_6);
    fVar24 = (param_9 - param_6) * fVar17;
    fVar17 = (param_7 - param_9) * fVar17;
    fVar28 = fVar4 * fVar24 + fVar5 * fVar17;
    fVar29 = (param_3->field0_0x0)._s_0.Y * fVar24 + fVar17 * fVar2;
    fVar20 = (param_3->field0_0x0)._s_0.Z * fVar24 + fVar17 * fVar1;
    fVar21 = (param_3->field0_0x0)._s_0.W * fVar24 + fVar17 * fVar3;
    fVar22 = __real_3f800000 / (param_8 - param_7);
    fVar18 = (param_9 - param_7) * fVar22;
    fVar25 = __real_3f800000 / (param_7 - param_5);
    fVar26 = __real_3f800000 / (param_8 - param_6);
    fVar22 = (param_8 - param_9) * fVar22;
    fVar23 = fVar25 * (param_7 - param_9);
    fVar27 = fVar26 * (param_8 - param_9);
    fVar26 = fVar26 * (param_9 - param_6);
    fVar25 = fVar25 * (param_9 - param_5);
    fVar6 = (param_1->field0_0x0)._s_0.W;
    fVar7 = (param_1->field0_0x0)._s_0.Y;
    fVar8 = (param_1->field0_0x0)._s_0.Z;
    fVar9 = (param_4->field0_0x0)._s_0.Z;
    fVar10 = (param_4->field0_0x0)._s_0.Y;
    fVar11 = (param_4->field0_0x0)._s_0.W;
    fVar12 = (param_3->field0_0x0)._s_0.Y;
    fVar13 = (param_3->field0_0x0)._s_0.Z;
    fVar14 = (param_3->field0_0x0)._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((fVar19 * (param_1->field0_0x0)._s_0.X + fVar5 * fVar16) * fVar23 + fVar25 * fVar28) *
         fVar17 + ((fVar4 * fVar22 + fVar18 * (param_4->field0_0x0)._s_0.X) * fVar26 +
                  fVar27 * fVar28) * fVar24;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((fVar19 * fVar7 + fVar2 * fVar16) * fVar23 + fVar25 * fVar29) * fVar17 +
         ((fVar18 * fVar10 + fVar22 * fVar12) * fVar26 + fVar27 * fVar29) * fVar24;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((fVar19 * fVar8 + fVar1 * fVar16) * fVar23 + fVar25 * fVar20) * fVar17 +
         ((fVar18 * fVar9 + fVar22 * fVar13) * fVar26 + fVar27 * fVar20) * fVar24;
    (__return_storage_ptr__->field0_0x0)._s_0.W =
         ((fVar19 * fVar6 + fVar3 * fVar16) * fVar23 + fVar25 * fVar21) * fVar17 +
         ((fVar18 * fVar11 + fVar22 * fVar14) * fVar26 + fVar27 * fVar21) * fVar24;
  }
  return __return_storage_ptr__;
}

// CubicCRSplineInterpSafe<UE::Math::TVector<float>_> @ 1481be8f0

TVector<float> * __cdecl
FMath::CubicCRSplineInterpSafe<UE::Math::TVector<float>_>
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4,float param_5,float param_6,float param_7,
          float param_8,float param_9)

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
  
  if (((((float)((uint)(param_6 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) ||
       ((float)((uint)(param_7 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) ||
      ((float)((uint)(param_8 - param_7) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) ||
     (((float)((uint)(param_7 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77 ||
      ((float)((uint)(param_8 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)))) {
    fVar1 = (param_2->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  }
  else {
    fVar1 = (param_3->field0_0x0)._s_0.X;
    fVar9 = __real_3f800000 / (param_6 - param_5);
    fVar2 = (param_2->field0_0x0)._s_0.X;
    fVar3 = (param_3->field0_0x0)._s_0.Y;
    fVar4 = (param_2->field0_0x0)._s_0.Y;
    fVar12 = (param_6 - param_9) * fVar9;
    fVar5 = (param_3->field0_0x0)._s_0.Z;
    fVar9 = (param_9 - param_5) * fVar9;
    fVar10 = __real_3f800000 / (param_7 - param_6);
    fVar16 = (param_7 - param_9) * fVar10;
    fVar10 = (param_9 - param_6) * fVar10;
    fVar15 = fVar1 * fVar10 + fVar2 * fVar16;
    fVar18 = fVar3 * fVar10 + fVar4 * fVar16;
    fVar21 = fVar5 * fVar10 + (param_2->field0_0x0)._s_0.Z * fVar16;
    fVar13 = __real_3f800000 / (param_8 - param_7);
    fVar11 = __real_3f800000 / (param_8 - param_6);
    fVar19 = __real_3f800000 / (param_7 - param_5);
    fVar17 = (param_9 - param_7) * fVar13;
    fVar13 = (param_8 - param_9) * fVar13;
    fVar20 = fVar19 * (param_9 - param_5);
    fVar14 = fVar11 * (param_8 - param_9);
    fVar11 = fVar11 * (param_9 - param_6);
    fVar19 = fVar19 * (param_7 - param_9);
    fVar6 = (param_1->field0_0x0)._s_0.Y;
    fVar7 = (param_4->field0_0x0)._s_0.Y;
    fVar8 = (param_4->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((fVar2 * fVar9 + fVar12 * (param_1->field0_0x0)._s_0.X) * fVar19 + fVar20 * fVar15) *
         fVar16 + ((fVar17 * (param_4->field0_0x0)._s_0.X + fVar1 * fVar13) * fVar11 +
                  fVar14 * fVar15) * fVar10;
    fVar1 = (param_2->field0_0x0)._s_0.Z;
    fVar2 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((fVar12 * fVar6 + fVar4 * fVar9) * fVar19 + fVar20 * fVar18) * fVar16 +
         ((fVar17 * fVar7 + fVar3 * fVar13) * fVar11 + fVar14 * fVar18) * fVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((fVar17 * fVar8 + fVar5 * fVar13) * fVar11 + fVar14 * fVar21) * fVar10 +
         ((fVar12 * fVar2 + fVar1 * fVar9) * fVar19 + fVar20 * fVar21) * fVar16;
  }
  return __return_storage_ptr__;
}

// CubicCRSplineInterpSafe<FLinearColor> @ 1481becf0

FLinearColor * __cdecl
FMath::CubicCRSplineInterpSafe<FLinearColor>
          (FLinearColor *__return_storage_ptr__,FLinearColor *param_1,FLinearColor *param_2,
          FLinearColor *param_3,FLinearColor *param_4,float param_5,float param_6,float param_7,
          float param_8,float param_9)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (((((float)((uint)(param_6 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) ||
       ((float)((uint)(param_7 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) ||
      ((float)((uint)(param_8 - param_7) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) ||
     (((float)((uint)(param_7 - param_5) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77 ||
      ((float)((uint)(param_8 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)))) {
    fVar5 = (param_2->field0_0x0)._s_0.R;
    fVar6 = (param_2->field0_0x0)._s_0.G;
    fVar7 = (param_2->field0_0x0)._s_0.B;
    fVar8 = (param_2->field0_0x0)._s_0.A;
  }
  else {
    fVar7 = (param_2->field0_0x0)._s_0.B;
    fVar6 = (param_2->field0_0x0)._s_0.G;
    fVar8 = (param_2->field0_0x0)._s_0.A;
    fVar5 = (param_3->field0_0x0)._s_0.R;
    fVar2 = __real_3f800000 / (param_6 - param_5);
    fVar1 = (param_2->field0_0x0)._s_0.R;
    fVar9 = (param_6 - param_9) * fVar2;
    fVar2 = (param_9 - param_5) * fVar2;
    fVar3 = __real_3f800000 / (param_7 - param_6);
    fVar14 = (param_9 - param_6) * fVar3;
    fVar3 = (param_7 - param_9) * fVar3;
    fVar18 = fVar5 * fVar14 + fVar1 * fVar3;
    fVar19 = (param_3->field0_0x0)._s_0.G * fVar14 + fVar3 * fVar6;
    fVar10 = (param_3->field0_0x0)._s_0.B * fVar14 + fVar3 * fVar7;
    fVar11 = (param_3->field0_0x0)._s_0.A * fVar14 + fVar3 * fVar8;
    fVar12 = __real_3f800000 / (param_8 - param_7);
    fVar4 = (param_9 - param_7) * fVar12;
    fVar15 = __real_3f800000 / (param_7 - param_5);
    fVar16 = __real_3f800000 / (param_8 - param_6);
    fVar12 = (param_8 - param_9) * fVar12;
    fVar13 = fVar15 * (param_7 - param_9);
    fVar17 = fVar16 * (param_8 - param_9);
    fVar16 = fVar16 * (param_9 - param_6);
    fVar15 = fVar15 * (param_9 - param_5);
    fVar5 = ((fVar9 * (param_1->field0_0x0)._s_0.R + fVar1 * fVar2) * fVar13 + fVar15 * fVar18) *
            fVar3 + ((fVar5 * fVar12 + fVar4 * (param_4->field0_0x0)._s_0.R) * fVar16 +
                    fVar17 * fVar18) * fVar14;
    fVar6 = ((fVar9 * (param_1->field0_0x0)._s_0.G + fVar6 * fVar2) * fVar13 + fVar15 * fVar19) *
            fVar3 + ((fVar4 * (param_4->field0_0x0)._s_0.G + fVar12 * (param_3->field0_0x0)._s_0.G)
                     * fVar16 + fVar17 * fVar19) * fVar14;
    fVar7 = ((fVar9 * (param_1->field0_0x0)._s_0.B + fVar7 * fVar2) * fVar13 + fVar15 * fVar10) *
            fVar3 + ((fVar4 * (param_4->field0_0x0)._s_0.B + fVar12 * (param_3->field0_0x0)._s_0.B)
                     * fVar16 + fVar17 * fVar10) * fVar14;
    fVar8 = ((fVar9 * (param_1->field0_0x0)._s_0.A + fVar8 * fVar2) * fVar13 + fVar15 * fVar11) *
            fVar3 + ((fVar4 * (param_4->field0_0x0)._s_0.A + fVar12 * (param_3->field0_0x0)._s_0.A)
                     * fVar16 + fVar17 * fVar11) * fVar14;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar8;
  return __return_storage_ptr__;
}

// CubicInterpDerivative<UE::Math::TVector<double>,float> @ 1481bf1a0

TVector<double> * __cdecl
FMath::CubicInterpDerivative<UE::Math::TVector<double>,float>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4,float *param_5)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar15 = __real_4018000000000000;
  dVar14 = __real_4010000000000000;
  dVar13 = __real_4008000000000000;
  dVar17 = (param_3->field0_0x0)._s_0.X * __real_4018000000000000;
  fVar1 = *param_5;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.Y * __real_4018000000000000;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar12 = (param_2->field0_0x0)._s_0.Y;
  dVar11 = (param_3->field0_0x0)._s_0.Z * __real_4018000000000000;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  dVar8 = (double)fVar1;
  dVar10 = (double)(fVar1 * fVar1);
  dVar6 = (param_4->field0_0x0)._s_0.Z;
  dVar16 = (param_2->field0_0x0)._s_0.Y * __real_4010000000000000;
  dVar9 = (dVar5 + (param_2->field0_0x0)._s_0.Y) * __real_4008000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar17 - ((param_2->field0_0x0)._s_0.X * __real_4010000000000000 +
                  dVar2 * __real_4018000000000000 + dVar4 + dVar4)) * dVar8 +
       (((dVar4 + (param_2->field0_0x0)._s_0.X) * __real_4008000000000000 +
        dVar2 * __real_4018000000000000) - dVar17) * dVar10 + (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar7 - (dVar16 + dVar3 * dVar15 + dVar5 + dVar5)) * dVar8 +
       ((dVar9 + dVar3 * dVar15) - dVar7) * dVar10 + dVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar11 - (dVar2 * dVar14 + dVar4 * dVar15 + dVar6 + dVar6)) * dVar8 +
       (((dVar6 + (param_2->field0_0x0)._s_0.Z) * dVar13 + dVar4 * dVar15) - dVar11) * dVar10 +
       (param_2->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// IntersectPlanes3<double> @ 148241df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FMath::IntersectPlanes3<double>
          (TVector<double> *param_1,TPlane<double> *param_2,TPlane<double> *param_3,
          TPlane<double> *param_4)

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
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (double)param_4->_padding_;
  dVar2 = (double)param_4->_padding_;
  dVar3 = (double)param_2->_padding_;
  dVar4 = (double)param_3->_padding_;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_2->_padding_;
  dVar7 = (double)param_2->_padding_;
  dVar8 = (double)param_3->_padding_;
  dVar14 = dVar3 * dVar4 - dVar6 * dVar8;
  dVar15 = dVar5 * dVar6 - dVar7 * dVar4;
  dVar16 = dVar7 * dVar8 - dVar5 * dVar3;
  dVar9 = (double)param_4->_padding_;
  dVar18 = dVar1 * dVar15 + dVar9 * dVar14 + dVar2 * dVar16;
  bVar13 = ___real_3eb0c6f7c0000000 <= dVar18 * dVar18;
  if (bVar13) {
    dVar10 = param_2->W;
    dVar11 = param_3->W;
    dVar12 = param_4->W;
    dVar18 = __real_3ff0000000000000 / dVar18;
    (param_1->field0_0x0)._s_0.X =
         ((dVar6 * dVar1 - dVar3 * dVar2) * dVar11 + (dVar8 * dVar2 - dVar4 * dVar1) * dVar10 +
         dVar12 * dVar14) * dVar18;
    (param_1->field0_0x0)._s_0.Y =
         ((dVar7 * dVar2 - dVar6 * dVar9) * dVar11 + (dVar4 * dVar9 - dVar5 * dVar2) * dVar10 +
         dVar12 * dVar15) * dVar18;
    (param_1->field0_0x0)._s_0.Z =
         ((dVar3 * dVar9 - dVar7 * dVar1) * dVar11 + (dVar5 * dVar1 - dVar8 * dVar9) * dVar10 +
         dVar12 * dVar16) * dVar18;
  }
  else {
    (param_1->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = (double)uVar17;
    (param_1->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return bVar13;
}

// ClampAngle<double,float,float> @ 148339e90

double __cdecl FMath::ClampAngle<double,float,float>(double param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = __real_4076800000000000;
  dVar3 = FGenericPlatformMath::Fmod((double)param_3 - (double)param_2,__real_4076800000000000);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar2;
  }
  dVar3 = dVar3 * __real_3fe0000000000000;
  dVar4 = FGenericPlatformMath::Fmod(dVar3 + (double)param_2,dVar2);
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + dVar2;
  }
  dVar5 = FGenericPlatformMath::Fmod(param_1 - dVar4,dVar2);
  dVar1 = __real_4066800000000000;
  if (dVar5 < 0.0) {
    dVar5 = dVar5 + dVar2;
  }
  if (__real_4066800000000000 < dVar5) {
    dVar5 = dVar5 - dVar2;
  }
  if (dVar5 <= dVar3) {
    if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000)) {
      param_1 = dVar4 - dVar3;
    }
  }
  else {
    param_1 = dVar4 + dVar3;
  }
  dVar3 = FGenericPlatformMath::Fmod(param_1,dVar2);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar2;
  }
  if (dVar1 < dVar3) {
    dVar3 = dVar3 - dVar2;
  }
  return dVar3;
}

// LinePlaneIntersection<float> @ 148344ee0

TVector<float> * __cdecl
FMath::LinePlaneIntersection<float>
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar2 = (((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) *
           (param_4->field0_0x0)._s_0.Y +
           ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) *
           (param_4->field0_0x0)._s_0.X +
          ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) *
          (param_4->field0_0x0)._s_0.Z) /
          (fVar4 * (param_4->field0_0x0)._s_0.Y + fVar3 * (param_4->field0_0x0)._s_0.X +
          fVar5 * (param_4->field0_0x0)._s_0.Z);
  fVar1 = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar5 + (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2 * fVar3 + fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 * fVar4 + fVar5;
  return __return_storage_ptr__;
}

// LinePlaneIntersection<float> @ 148344fd0

TVector<float> * __cdecl
FMath::LinePlaneIntersection<float>
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TPlane<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)((longlong)&param_3->_padding_ + 4);
  fVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar2 = (param_3->W -
          (fVar1 * (param_1->field0_0x0)._s_0.Y +
           *(float *)&param_3->_padding_ * (param_1->field0_0x0)._s_0.X +
          (float)param_3->_padding_ * (param_1->field0_0x0)._s_0.Z)) /
          (fVar4 * fVar1 + fVar3 * *(float *)&param_3->_padding_ + fVar5 * (float)param_3->_padding_
          );
  fVar1 = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar5 + (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2 * fVar3 + fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 * fVar4 + fVar5;
  return __return_storage_ptr__;
}

// SphereAABBIntersection<double> @ 148a40720

bool __cdecl FMath::SphereAABBIntersection<double>(TSphere<double> *param_1,TBox<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (param_2->Min).field0_0x0._s_0.X;
  dVar2 = 0.0;
  dVar1 = (param_1->Center).field0_0x0._s_0.X;
  if ((dVar1 < dVar3) || (dVar3 = (param_2->Max).field0_0x0._s_0.X, dVar3 < dVar1)) {
    dVar2 = (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar3 = (param_2->Min).field0_0x0._s_0.Y;
  dVar1 = (param_1->Center).field0_0x0._s_0.Y;
  if ((dVar1 < dVar3) || (dVar3 = (param_2->Max).field0_0x0._s_0.Y, dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar3 = (param_2->Min).field0_0x0._s_0.Z;
  dVar1 = (param_1->Center).field0_0x0._s_0.Z;
  if ((dVar1 < dVar3) || (dVar3 = (param_2->Max).field0_0x0._s_0.Z, dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  return dVar2 <= param_1->W * param_1->W;
}

