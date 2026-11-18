// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FindClosestIntersection @ 14377b090

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TCorePlane<float,3>::FindClosestIntersection
          (TCorePlane<float,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double *pdVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar5 = *(double *)param_2 - *(double *)param_1;
  dVar6 = *(double *)&param_2->field_0x8 - dVar1;
  dVar2 = *(double *)&param_1->field_0x10;
  auVar14._0_8_ = dVar6 * dVar6;
  auVar14._8_8_ = 0;
  dVar7 = *(double *)&param_2->field_0x10 - dVar2;
  dVar11 = dVar5 * dVar5 + auVar14._0_8_ + dVar7 * dVar7;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar11;
  auVar12 = sqrtpd(auVar14,auVar12);
  uVar3 = dVar5;
  uVar8 = dVar6;
  uVar9 = dVar7;
  if ((dVar11 != __real_3ff0000000000000) &&
     (uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar11)) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    uVar3 = dVar5 * dVar11;
    uVar8 = dVar6 * dVar11;
    uVar9 = dVar7 * dVar11;
  }
  local_d0 = (double)*(float *)&(this->MX).field_0x4;
  local_c8 = (double)*(float *)&(this->MX).field_0x8;
  dVar11 = (double)*(float *)&this->MNormal;
  dVar5 = (double)*(float *)&(this->MNormal).field_0x4;
  dVar6 = (double)*(float *)&(this->MNormal).field_0x8;
  auVar15._0_8_ = dVar11 * param_3;
  auVar15._8_8_ = 0;
  local_c0 = auVar15._0_8_ + (double)*(float *)&this->MX;
  dStack_b8 = dVar5 * param_3 + local_d0;
  local_d0 = local_d0 - dVar5 * param_3;
  local_d8 = (double)*(float *)&this->MX - auVar15._0_8_;
  local_b0 = dVar6 * param_3 + local_c8;
  local_c8 = local_c8 - dVar6 * param_3;
  local_c0 = local_c0 - *(double *)param_1;
  dStack_b8 = dStack_b8 - dVar1;
  local_d0 = local_d0 - dVar1;
  local_b0 = local_b0 - dVar2;
  auVar13._0_8_ = dStack_b8 * dStack_b8;
  auVar13._8_8_ = 0;
  local_d8 = local_d8 - *(double *)param_1;
  local_c8 = local_c8 - dVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_c0 * local_c0 + auVar13._0_8_ + local_b0 * local_b0;
  auVar14 = sqrtpd(auVar13,auVar16);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_d0 * local_d0 + local_d8 * local_d8 + local_c8 * local_c8;
  auVar16 = sqrtpd(auVar15,auVar4);
  pdVar10 = &local_d8;
  if (auVar14._0_8_ <= auVar16._0_8_) {
    pdVar10 = &local_c0;
  }
  dVar7 = dVar5 * (double)uVar8 + dVar11 * (double)uVar3 + dVar6 * (double)uVar9;
  dVar11 = (*pdVar10 - *(double *)param_1) * dVar11 + (pdVar10[1] - dVar1) * dVar5 +
           (pdVar10[2] - dVar2) * dVar6;
  if (dVar7 == 0.0) {
    if (dVar11 == 0.0) {
      uVar8 = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)&param_2->field_0x8;
      __return_storage_ptr__->Second = true;
      uVar3 = *(undefined8 *)&param_2->field_0x10;
      *(undefined8 *)&__return_storage_ptr__->First = uVar8;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = uVar9;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = uVar3;
      return __return_storage_ptr__;
    }
  }
  else {
    dVar11 = dVar11 / dVar7;
    if ((0.0 <= dVar11) && (dVar11 <= auVar12._0_8_)) {
      *(double *)&__return_storage_ptr__->First = (double)uVar3 * dVar11 + *(double *)param_1;
      *(double *)&(__return_storage_ptr__->First).field_0x8 = (double)uVar8 * dVar11 + dVar1;
      *(double *)&(__return_storage_ptr__->First).field_0x10 = (double)uVar9 * dVar11 + dVar2;
      __return_storage_ptr__->Second = true;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->First = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
  __return_storage_ptr__->Second = false;
  return __return_storage_ptr__;
}

// GetTypeHash @ 1437931a0

uint __thiscall Chaos::TCorePlane<float,3>::GetTypeHash(TCorePlane<float,3> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->MNormal,0xc,0);
  uVar2 = FCrc::MemCrc_DEPRECATED(this,0xc,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// Raycast @ 1437a04e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TCorePlane<float,3>::Raycast
          (TCorePlane<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  dVar9 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
           *(double *)param_2 * *(double *)param_2 +
          *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9210575980660260710>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\CorePlane.h"
                         ,0x9a,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))")
     , bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *param_8 = -1;
  *param_5 = 0.0;
  *(undefined8 *)param_6 = 0;
  *(undefined8 *)&param_6->field_0x8 = 0;
  *(undefined8 *)&param_6->field_0x10 = 0;
  *(undefined8 *)param_7 = 0;
  *(undefined8 *)&param_7->field_0x8 = 0;
  *(undefined8 *)&param_7->field_0x10 = 0;
  fVar16 = *(float *)&(this->MNormal).field_0x4;
  fVar15 = *(float *)&(this->MNormal).field_0x8;
  dVar12 = (double)*(float *)&(this->MX).field_0x4;
  dVar9 = (double)*(float *)&(this->MX).field_0x8;
  dVar4 = (*(double *)&param_1->field_0x8 - dVar12) * (double)fVar16 +
          (*(double *)param_1 - (double)*(float *)&this->MX) * (double)*(float *)&this->MNormal +
          (*(double *)&param_1->field_0x10 - dVar9) * (double)fVar15;
  if (param_4 <= (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar8,SUB84(dVar4,0) & uVar7))
  {
    if (0.0 <= dVar4) {
      fVar16 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
      uVar10 = (ulonglong)((uint)*(float *)&this->MNormal ^ __xmm_80000000800000008000000080000000);
      fVar15 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000);
    }
    else {
      uVar10 = *(ulonglong *)&this->MNormal;
      fVar16 = (float)(uVar10 >> 0x20);
    }
    dVar13 = (double)(float)uVar10;
    dVar14 = (double)fVar16;
    dVar4 = (double)fVar15;
    dVar11 = dVar14 * *(double *)&param_2->field_0x8 + dVar13 * *(double *)param_2 +
             dVar4 * *(double *)&param_2->field_0x10;
    if ((dVar11 < ___real_3e7ad7f2a0000000) ||
       (dVar11 = (((dVar12 - dVar14 * param_4) - *(double *)&param_1->field_0x8) * dVar14 +
                  (((double)*(float *)&this->MX - dVar13 * param_4) - *(double *)param_1) * dVar13 +
                 ((dVar9 - dVar4 * param_4) - *(double *)&param_1->field_0x10) * dVar4) / dVar11,
       param_3 < dVar11)) {
      return false;
    }
    *param_5 = dVar11;
    dVar11 = dVar11 + param_4;
    dVar9 = *(double *)&param_2->field_0x8;
    dVar12 = *(double *)&param_2->field_0x10;
    dVar1 = *(double *)&param_1->field_0x8;
    dVar2 = *(double *)&param_1->field_0x10;
    *(double *)param_6 = dVar11 * *(double *)param_2 + *(double *)param_1;
    *(double *)&param_6->field_0x8 = dVar11 * dVar9 + dVar1;
    *(double *)&param_6->field_0x10 = dVar11 * dVar12 + dVar2;
    uVar7 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    *(ulonglong *)param_7 =
         CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar8,SUB84(dVar13,0) ^ uVar7);
    *(ulonglong *)&param_7->field_0x8 =
         CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar8,SUB84(dVar14,0) ^ uVar7);
    *(ulonglong *)&param_7->field_0x10 =
         CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar8,SUB84(dVar4,0) ^ uVar7);
  }
  return true;
}

// Raycast @ 143a89dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TCorePlane<double,3>::Raycast
          (TCorePlane<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  dVar9 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
           *(double *)param_2 * *(double *)param_2 +
          *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9210575980660260710>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\CorePlane.h"
                         ,0x9a,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))")
     , bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *param_8 = -1;
  *param_5 = 0.0;
  *(undefined8 *)param_6 = 0;
  *(undefined8 *)&param_6->field_0x8 = 0;
  *(undefined8 *)&param_6->field_0x10 = 0;
  *(undefined8 *)param_7 = 0;
  *(undefined8 *)&param_7->field_0x8 = 0;
  *(undefined8 *)&param_7->field_0x10 = 0;
  dVar9 = *(double *)&(this->MX).field_0x10;
  dVar11 = *(double *)&(this->MNormal).field_0x10;
  dVar10 = (*(double *)param_1 - *(double *)&this->MX) * *(double *)&this->MNormal +
           (*(double *)&param_1->field_0x8 - *(double *)&(this->MX).field_0x8) *
           *(double *)&(this->MNormal).field_0x8 +
           (*(double *)&param_1->field_0x10 - dVar9) * dVar11;
  if (param_4 <=
      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar17,SUB84(dVar10,0) & uVar16)) {
    uVar16 = (uint)__xmm_80000000000000008000000000000000;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (0.0 <= dVar10) {
      uVar1 = *(undefined8 *)&(this->MNormal).field_0x8;
      uVar12 = (uint)*(undefined8 *)&this->MNormal ^ uVar16;
      uVar13 = (uint)((ulonglong)*(undefined8 *)&this->MNormal >> 0x20) ^ uVar17;
      uVar2 = *(undefined8 *)&(this->MNormal).field_0x10;
      uVar14 = (uint)uVar1 ^ uVar16;
      uVar15 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar17;
      dVar11 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar17,(uint)uVar2 ^ uVar16);
    }
    else {
      uVar12 = *(uint *)&this->MNormal;
      uVar13 = *(uint *)&(this->MNormal).field_0x4;
      uVar14 = *(uint *)&(this->MNormal).field_0x8;
      uVar15 = *(uint *)&(this->MNormal).field_0xc;
    }
    dVar10 = (double)CONCAT44(uVar15,uVar14) * *(double *)&param_2->field_0x8 +
             (double)CONCAT44(uVar13,uVar12) * *(double *)param_2 +
             dVar11 * *(double *)&param_2->field_0x10;
    if ((dVar10 < ___real_3e7ad7f2a0000000) ||
       (dVar10 = (((*(double *)&this->MX - (double)CONCAT44(uVar13,uVar12) * param_4) -
                  *(double *)param_1) * (double)CONCAT44(uVar13,uVar12) +
                  ((*(double *)&(this->MX).field_0x8 - (double)CONCAT44(uVar15,uVar14) * param_4) -
                  *(double *)&param_1->field_0x8) * (double)CONCAT44(uVar15,uVar14) +
                 ((dVar9 - dVar11 * param_4) - *(double *)&param_1->field_0x10) * dVar11) / dVar10,
       param_3 < dVar10)) {
      bVar7 = false;
    }
    else {
      *param_5 = dVar10;
      dVar10 = dVar10 + param_4;
      dVar9 = *(double *)&param_2->field_0x8;
      dVar3 = *(double *)&param_2->field_0x10;
      dVar4 = *(double *)&param_1->field_0x8;
      dVar5 = *(double *)&param_1->field_0x10;
      *(double *)param_6 = dVar10 * *(double *)param_2 + *(double *)param_1;
      *(double *)&param_6->field_0x8 = dVar10 * dVar9 + dVar4;
      *(double *)&param_6->field_0x10 = dVar10 * dVar3 + dVar5;
      bVar7 = true;
      *(ulonglong *)param_7 = CONCAT44(uVar13 ^ uVar17,uVar12 ^ uVar16);
      *(ulonglong *)&param_7->field_0x8 = CONCAT44(uVar15 ^ uVar17,uVar14 ^ uVar16);
      *(ulonglong *)&param_7->field_0x10 =
           CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar17,SUB84(dVar11,0) ^ uVar16);
    }
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

