// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Initialize @ 14783feb0

void __thiscall FRandomStream::Initialize(FRandomStream *this,FName param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  LARGE_INTEGER local_res8;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  if (param_1 == (FName)0x0) {
    QueryPerformanceCounter(&local_res8);
    this->InitialSeed = local_res8.s.LowPart;
  }
  else {
    pFVar2 = ::FName::ToString(local_res10,&local_18);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    local_res8.s.LowPart = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    this->InitialSeed = local_res8.s.LowPart;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      this->Seed = this->InitialSeed;
      return;
    }
  }
  this->Seed = local_res8.s.LowPart;
  return;
}

// RandPointInBox @ 147dba630

TVector<double> * __thiscall
FRandomStream::RandPointInBox
          (FRandomStream *this,TVector<double> *__return_storage_ptr__,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  fVar7 = __real_3f800000;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  uVar8 = this->Seed * 0xbb38435 + 0x3619636b;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  this->Seed = uVar8;
  dVar3 = (param_1->Min).field0_0x0._s_0.Y;
  dVar4 = (param_1->Max).field0_0x0._s_0.Y;
  uVar9 = uVar8 * 0xbb38435 + 0x3619636b;
  this->Seed = uVar9;
  dVar5 = (param_1->Min).field0_0x0._s_0.X;
  dVar6 = (param_1->Max).field0_0x0._s_0.X;
  uVar10 = uVar9 * 0xbb38435 + 0x3619636b;
  this->Seed = uVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((float)(uVar10 >> 9 | 0x3f800000) - fVar7) * (dVar6 - dVar5) + dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)((float)(uVar9 >> 9 | 0x3f800000) - fVar7) * (dVar4 - dVar3) + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)((float)(uVar8 >> 9 | 0x3f800000) - fVar7) * (dVar1 - dVar2) + dVar2;
  return __return_storage_ptr__;
}

// VRandCone @ 147dc7e90

TVector<double> * __thiscall
FRandomStream::VRandCone
          (FRandomStream *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          float param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  TRotationMatrix<double> *pTVar12;
  TVector<double> *pTVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  TRotator<double> local_1a0 [6];
  TRotationMatrix<double> local_108 [2];
  
  fVar15 = __real_bf800000;
  fVar6 = __real_3f800000;
  if (param_2 <= 0.0) {
    UE::Math::TVector<double>::GetSafeNormal
              (param_1,__return_storage_ptr__,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
  }
  else {
    uVar10 = this->Seed * 0xbb38435 + 0x3619636b;
    uVar11 = uVar10 * 0xbb38435 + 0x3619636b;
    this->Seed = uVar11;
    fVar14 = (float)(uVar11 >> 9 | 0x3f800000) - fVar6;
    fVar14 = (fVar14 + fVar14) - fVar6;
    if ((fVar15 <= fVar14) && (fVar15 = fVar14, fVar6 <= fVar14)) {
      fVar15 = fVar6;
    }
    fVar15 = acosf(fVar15);
    fVar15 = FGenericPlatformMath::Fmod(fVar15,param_2);
    UE::Math::TVector<double>::ToOrientationRotator(param_1,local_1a0);
    pTVar12 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(local_108,local_1a0);
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar19 = __real_3ff0000000000000;
    local_1b8._s_0.X = (double)*(undefined8 *)pTVar12;
    local_1b8._s_0.Y = (double)*(undefined8 *)&pTVar12->field_0x8;
    local_1b8._s_0.Z = (double)*(undefined8 *)&pTVar12->field_0x10;
    local_1d8._s_0.X = (double)*(undefined8 *)&pTVar12->field_0x20;
    local_1d8._s_0.Y = (double)*(undefined8 *)&pTVar12->field_0x28;
    local_1d8._s_0.Z = (double)*(undefined8 *)&pTVar12->field_0x30;
    dVar17 = local_1b8._s_0.Y * local_1b8._s_0.Y + local_1b8._s_0.X * local_1b8._s_0.X +
             local_1b8._s_0.Z * local_1b8._s_0.Z;
    if (dVar17 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
        local_1b8._s_0.X = local_1b8._s_0.X * dVar17;
        local_1b8._s_0.Y = local_1b8._s_0.Y * dVar17;
        local_1b8._s_0.Z = local_1b8._s_0.Z * dVar17;
      }
      else {
        local_1b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_1b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    dVar17 = local_1d8._s_0.Y * local_1d8._s_0.Y + local_1d8._s_0.X * local_1d8._s_0.X +
             local_1d8._s_0.Z * local_1d8._s_0.Z;
    if (dVar17 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
        local_1d8._s_0.X = local_1d8._s_0.X * dVar17;
        local_1d8._s_0.Y = local_1d8._s_0.Y * dVar17;
        local_1d8._s_0.Z = local_1d8._s_0.Z * dVar17;
      }
      else {
        local_1d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_1d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    UE::Math::TVector<double>::RotateAngleAxis
              (param_1,(TVector<double> *)local_1a0,(double)(fVar15 * __real_42652ee0),
               (TVector<double> *)&local_1d8._s_0);
    pTVar13 = UE::Math::TVector<double>::RotateAngleAxis
                        ((TVector<double> *)local_1a0,(TVector<double> *)&local_1d8._s_0,
                         (double)(((float)(uVar10 >> 9 | 0x3f800000) - fVar6) * __real_43b40000),
                         (TVector<double> *)&local_1b8._s_0);
    dVar4 = (pTVar13->field0_0x0)._s_0.X;
    dVar5 = (pTVar13->field0_0x0)._s_0.Y;
    dVar17 = (pTVar13->field0_0x0)._s_0.Z;
    dVar18 = dVar5 * dVar5 + dVar4 * dVar4 + dVar17 * dVar17;
    uVar16 = dVar17;
    uVar2 = dVar5;
    uVar3 = dVar4;
    if ((dVar18 != dVar19) &&
       (uVar16 = uVar9, uVar2 = uVar8, uVar3 = uVar7, __real_3e45798ee0000000 <= dVar18)) {
      dVar19 = dVar19 / SQRT(dVar18);
      uVar16 = dVar17 * dVar19;
      uVar2 = dVar5 * dVar19;
      uVar3 = dVar4 * dVar19;
    }
    auVar1._8_4_ = (int)uVar2;
    auVar1._0_8_ = uVar3;
    auVar1._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar16;
  }
  return __return_storage_ptr__;
}

// VRandCone @ 147dc81e0

TVector<double> * __thiscall
FRandomStream::VRandCone
          (FRandomStream *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  TRotationMatrix<double> *pTVar12;
  TVector<double> *pTVar13;
  float fVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float extraout_XMM0_Db;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  TRotator<double> local_1a0 [6];
  TRotationMatrix<double> local_108 [2];
  
  fVar15 = __real_bf800000;
  fVar6 = __real_3f800000;
  if ((param_3 <= 0.0) || (param_2 <= 0.0)) {
    UE::Math::TVector<double>::GetSafeNormal
              (param_1,__return_storage_ptr__,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
  }
  else {
    uVar10 = this->Seed * 0xbb38435 + 0x3619636b;
    uVar11 = uVar10 * 0xbb38435 + 0x3619636b;
    this->Seed = uVar11;
    fVar14 = (float)(uVar11 >> 9 | 0x3f800000) - fVar6;
    fVar14 = (fVar14 + fVar14) - fVar6;
    if ((fVar15 <= fVar14) && (fVar15 = fVar14, fVar6 <= fVar14)) {
      fVar15 = fVar6;
    }
    __libm_sse2_sincosf_();
    fVar15 = acosf(fVar15);
    fVar15 = FGenericPlatformMath::Fmod
                       (fVar15,SQRT(fVar6 / ((extraout_XMM0_Da / param_2) *
                                             (extraout_XMM0_Da / param_2) +
                                            (extraout_XMM0_Db / param_3) *
                                            (extraout_XMM0_Db / param_3))));
    UE::Math::TVector<double>::ToOrientationRotator(param_1,local_1a0);
    pTVar12 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(local_108,local_1a0);
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar19 = __real_3ff0000000000000;
    local_1b8._s_0.X = (double)*(undefined8 *)pTVar12;
    local_1b8._s_0.Y = (double)*(undefined8 *)&pTVar12->field_0x8;
    local_1b8._s_0.Z = (double)*(undefined8 *)&pTVar12->field_0x10;
    local_1d8._s_0.X = (double)*(undefined8 *)&pTVar12->field_0x20;
    local_1d8._s_0.Y = (double)*(undefined8 *)&pTVar12->field_0x28;
    local_1d8._s_0.Z = (double)*(undefined8 *)&pTVar12->field_0x30;
    dVar17 = local_1b8._s_0.Y * local_1b8._s_0.Y + local_1b8._s_0.X * local_1b8._s_0.X +
             local_1b8._s_0.Z * local_1b8._s_0.Z;
    if (dVar17 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
        local_1b8._s_0.X = local_1b8._s_0.X * dVar17;
        local_1b8._s_0.Y = local_1b8._s_0.Y * dVar17;
        local_1b8._s_0.Z = local_1b8._s_0.Z * dVar17;
      }
      else {
        local_1b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_1b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    dVar17 = local_1d8._s_0.Y * local_1d8._s_0.Y + local_1d8._s_0.X * local_1d8._s_0.X +
             local_1d8._s_0.Z * local_1d8._s_0.Z;
    if (dVar17 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
        local_1d8._s_0.X = local_1d8._s_0.X * dVar17;
        local_1d8._s_0.Y = local_1d8._s_0.Y * dVar17;
        local_1d8._s_0.Z = local_1d8._s_0.Z * dVar17;
      }
      else {
        local_1d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_1d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    UE::Math::TVector<double>::RotateAngleAxis
              (param_1,(TVector<double> *)local_1a0,(double)(fVar15 * __real_42652ee0),
               (TVector<double> *)&local_1d8._s_0);
    pTVar13 = UE::Math::TVector<double>::RotateAngleAxis
                        ((TVector<double> *)local_1a0,(TVector<double> *)&local_1d8._s_0,
                         (double)(((float)(uVar10 >> 9 | 0x3f800000) - fVar6) * __real_43b40000),
                         (TVector<double> *)&local_1b8._s_0);
    dVar4 = (pTVar13->field0_0x0)._s_0.X;
    dVar5 = (pTVar13->field0_0x0)._s_0.Y;
    dVar17 = (pTVar13->field0_0x0)._s_0.Z;
    dVar18 = dVar5 * dVar5 + dVar4 * dVar4 + dVar17 * dVar17;
    uVar16 = dVar17;
    uVar2 = dVar5;
    uVar3 = dVar4;
    if ((dVar18 != dVar19) &&
       (uVar16 = uVar9, uVar2 = uVar8, uVar3 = uVar7, __real_3e45798ee0000000 <= dVar18)) {
      dVar19 = dVar19 / SQRT(dVar18);
      uVar16 = dVar17 * dVar19;
      uVar2 = dVar5 * dVar19;
      uVar3 = dVar4 * dVar19;
    }
    auVar1._8_4_ = (int)uVar2;
    auVar1._0_8_ = uVar3;
    auVar1._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar16;
  }
  return __return_storage_ptr__;
}

