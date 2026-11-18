// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// BoundingBox @ 143b5e9d0

TAABB<double,3> * __thiscall
Chaos::FTaperedCylinder::BoundingBox(FTaperedCylinder *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// GetTypeHash @ 143b692e0

uint __thiscall Chaos::FTaperedCylinder::GetTypeHash(FTaperedCylinder *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = TCorePlane<float,3>::GetTypeHash(&this->MPlane2);
  uVar3 = TCorePlane<float,3>::GetTypeHash(&this->MPlane1);
  fVar1 = this->MRadius2;
  uVar4 = uVar3 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar5 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar4 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar6 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar5 = (uVar3 - uVar6) - uVar4 ^ uVar6 << 10;
  uVar3 = (int)this->MRadius1 - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - (int)fVar1 ^ uVar3 << 8;
  uVar7 = ((int)fVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar7 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar3 = (int)this->MHeight - uVar7 ^ uVar7 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar3 ^ uVar3 << 8;
  uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar2 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar7 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar3 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = ((uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar2 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// PhiWithNormal @ 143b6c4f0

double __thiscall
Chaos::FTaperedCylinder::PhiWithNormal
          (FTaperedCylinder *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fStack_e4;
  float local_e0;
  float fStack_d8;
  float local_d4;
  float fStack_cc;
  float local_c8;
  
  fVar8 = __real_322bcc77;
  uVar1 = *(undefined8 *)&(this->MPlane1).MX;
  uVar2 = *(undefined8 *)&(this->MPlane1).MNormal;
  fStack_d8 = (float)*(double *)&param_1->field_0x8;
  fVar14 = (float)*(double *)param_1;
  local_d4 = (float)*(double *)&param_1->field_0x10;
  fVar18 = (fVar14 - (float)uVar1) * (float)uVar2 +
           (fStack_d8 - (float)((ulonglong)uVar1 >> 0x20)) * (float)((ulonglong)uVar2 >> 0x20) +
           (local_d4 - *(float *)&(this->MPlane1).MX.field_0x8) *
           *(float *)&(this->MPlane1).MNormal.field_0x8;
  if (fVar18 < __real_322bcc77) {
    uVar1 = *(undefined8 *)&(this->MPlane2).MX;
    uVar2 = *(undefined8 *)&(this->MPlane2).MNormal;
    if (((fVar14 - (float)uVar1) * (float)uVar2 +
         (fStack_d8 - (float)((ulonglong)uVar1 >> 0x20)) * (float)((ulonglong)uVar2 >> 0x20) +
         (local_d4 - *(float *)&(this->MPlane2).MX.field_0x8) *
         *(float *)&(this->MPlane2).MNormal.field_0x8 <= 0.0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8177328349572497519>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaperedCylinder.h"
                           ,0x6f,"MPlane2.SignedDistance(Xf) > (FRealSingle)0."), bVar5)) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
    fVar14 = *(float *)&(this->MPlane1).MNormal;
    fVar10 = *(float *)&(this->MPlane1).MNormal.field_0x4;
    fVar11 = *(float *)&(this->MPlane1).MNormal.field_0x8;
    fVar13 = this->MRadius1;
    fVar15 = (float)(*(double *)param_1 - (double)(fVar14 * fVar18 + *(float *)&(this->MPlane1).MX))
    ;
    fVar17 = (float)(*(double *)&param_1->field_0x8 -
                    (double)(fVar10 * fVar18 + *(float *)&(this->MPlane1).MX.field_0x4));
    fVar19 = (float)(*(double *)&param_1->field_0x10 -
                    (double)(fVar11 * fVar18 + *(float *)&(this->MPlane1).MX.field_0x8));
    fVar7 = fVar17 * fVar17 + fVar15 * fVar15 + fVar19 * fVar19;
    if (SQRT(fVar7) <= fVar13) {
      fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
      fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
      fVar18 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
      *(double *)param_2 = (double)(float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
      *(double *)&param_2->field_0x8 = (double)fVar10;
      *(double *)&param_2->field_0x10 = (double)fVar11;
      dVar6 = (double)fVar18;
    }
    else {
      uVar9 = fVar15;
      uVar16 = fVar17;
      uVar20 = fVar19;
      if ((fVar7 != __real_3f800000) &&
         (uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
         uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
         uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, fVar8 <= fVar7)) {
        fVar14 = __real_3f800000 / SQRT(fVar7);
        uVar9 = fVar14 * fVar15;
        uVar16 = fVar14 * fVar17;
        uVar20 = fVar14 * fVar19;
      }
      uVar9 = (undefined4)
              (*(double *)param_1 - (double)(fVar13 * (float)uVar9 + *(float *)&(this->MPlane1).MX))
      ;
      fStack_e4 = (float)(*(double *)&param_1->field_0x8 -
                         (double)(fVar13 * (float)uVar16 + *(float *)&(this->MPlane1).MX.field_0x4))
      ;
      local_e0 = (float)(*(double *)&param_1->field_0x10 -
                        (double)(fVar13 * (float)uVar20 + *(float *)&(this->MPlane1).MX.field_0x8));
      fVar14 = fStack_e4 * fStack_e4 + (float)uVar9 * (float)uVar9 + local_e0 * local_e0;
      if (fVar14 != __real_3f800000) {
        if (fVar8 <= fVar14) {
          fVar8 = __real_3f800000 / SQRT(fVar14);
          fStack_e4 = fVar8 * fStack_e4;
          local_e0 = fVar8 * local_e0;
          uVar9 = fVar8 * (float)uVar9;
        }
        else {
          local_e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          fStack_e4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      *(double *)param_2 = (double)(float)uVar9;
      *(double *)&param_2->field_0x8 = (double)fStack_e4;
      *(double *)&param_2->field_0x10 = (double)local_e0;
      dVar6 = (double)SQRT(fVar14);
    }
  }
  else {
    fVar10 = this->MHeight;
    fVar11 = fVar10 - fVar18;
    if (fVar11 < __real_322bcc77) {
      fVar8 = *(float *)&(this->MPlane2).MNormal.field_0x8;
      fVar18 = *(float *)&(this->MPlane2).MX.field_0x8;
      fVar10 = *(float *)&(this->MPlane2).MNormal.field_0x4;
      fVar13 = *(float *)&(this->MPlane2).MNormal;
      fVar7 = this->MRadius2;
      fVar12 = local_d4 - (fVar8 * fVar11 + fVar18);
      fVar19 = fStack_d8 - (fVar10 * fVar11 + *(float *)&(this->MPlane2).MX.field_0x4);
      fVar17 = fVar14 - (fVar13 * fVar11 + *(float *)&(this->MPlane2).MX);
      fVar15 = fVar17 * fVar17 + fVar19 * fVar19 + fVar12 * fVar12;
      if (SQRT(fVar15) <= fVar7) {
        fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
        fVar8 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
        fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
        *(double *)param_2 = (double)(float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000);
        *(double *)&param_2->field_0x8 = (double)fVar10;
        *(double *)&param_2->field_0x10 = (double)fVar8;
        dVar6 = (double)fVar11;
      }
      else {
        uVar9 = fVar19;
        uVar16 = fVar17;
        uVar20 = fVar12;
        if ((fVar15 != __real_3f800000) &&
           (uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           __real_322bcc77 <= fVar15)) {
          fVar8 = __real_3f800000 / SQRT(fVar15);
          uVar9 = fVar8 * fVar19;
          uVar16 = fVar8 * fVar17;
          uVar20 = fVar8 * fVar12;
        }
        local_d4 = local_d4 - (fVar7 * (float)uVar20 + fVar18);
        uVar16 = fVar14 - (fVar7 * (float)uVar16 + *(float *)&(this->MPlane2).MX);
        fStack_d8 = fStack_d8 - (fVar7 * (float)uVar9 + *(float *)&(this->MPlane2).MX.field_0x4);
        fVar8 = (float)uVar16 * (float)uVar16 + fStack_d8 * fStack_d8 + local_d4 * local_d4;
        if (fVar8 != __real_3f800000) {
          if (__real_322bcc77 <= fVar8) {
            fVar14 = __real_3f800000 / SQRT(fVar8);
            fStack_d8 = fVar14 * fStack_d8;
            local_d4 = fVar14 * local_d4;
            uVar16 = fVar14 * (float)uVar16;
          }
          else {
            local_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
            fStack_d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          }
        }
        *(double *)param_2 = (double)(float)uVar16;
        *(double *)&param_2->field_0x8 = (double)fStack_d8;
        *(double *)&param_2->field_0x10 = (double)local_d4;
        dVar6 = (double)SQRT(fVar8);
      }
    }
    else {
      if (((fVar10 < fVar18) || (fVar10 < fVar11)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8177328349572497552>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaperedCylinder.h"
                             ,0x90,"Distance1 <= MHeight && Distance2 <= MHeight"), bVar5)) {
        pcVar3 = (code *)swi(3);
        dVar6 = (double)(*pcVar3)();
        return dVar6;
      }
      uVar4 = __xmm_80000000800000008000000080000000;
      fVar7 = *(float *)&(this->MPlane1).MNormal.field_0x8;
      fVar13 = *(float *)&(this->MPlane1).MNormal.field_0x4;
      fVar10 = *(float *)&(this->MPlane1).MNormal;
      fVar15 = fVar18 / this->MHeight;
      local_c8 = local_d4 - (fVar7 * fVar18 + *(float *)&(this->MPlane1).MX.field_0x8);
      fStack_cc = fStack_d8 - (fVar13 * fVar18 + *(float *)&(this->MPlane1).MX.field_0x4);
      uVar9 = fVar14 - (fVar10 * fVar18 + *(float *)&(this->MPlane1).MX);
      fVar14 = fStack_cc * fStack_cc + (float)uVar9 * (float)uVar9 + local_c8 * local_c8;
      fVar15 = SQRT(fVar14) -
               ((__real_3f800000 - fVar15) * this->MRadius1 + fVar15 * this->MRadius2);
      if (fVar15 < 0.0) {
        fVar17 = fVar11;
        if (fVar18 <= fVar11) {
          fVar17 = fVar18;
        }
        if (fVar17 < (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000)) {
          if (fVar11 <= fVar18) {
            fVar10 = *(float *)&(this->MPlane2).MNormal;
            fVar13 = *(float *)&(this->MPlane2).MNormal.field_0x4;
            fVar7 = *(float *)&(this->MPlane2).MNormal.field_0x8;
          }
          fVar13 = (float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000);
          *(double *)param_2 =
               (double)(float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
          *(double *)&param_2->field_0x8 = (double)fVar13;
          *(double *)&param_2->field_0x10 = (double)(float)((uint)fVar7 ^ uVar4);
          return (double)(float)((uint)fVar17 ^ uVar4);
        }
      }
      if (fVar14 != __real_3f800000) {
        if (fVar8 <= fVar14) {
          fVar8 = __real_3f800000 / SQRT(fVar14);
          fStack_cc = fStack_cc * fVar8;
          local_c8 = local_c8 * fVar8;
          uVar9 = (float)uVar9 * fVar8;
        }
        else {
          fStack_cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_2 = (double)(float)uVar9;
      *(double *)&param_2->field_0x8 = (double)fStack_cc;
      *(double *)&param_2->field_0x10 = (double)local_c8;
      dVar6 = (double)fVar15;
    }
  }
  return dVar6;
}

