// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// DeltaExceedsThreshold @ 14375d3b0

bool __cdecl
Chaos::FCCDHelpers::DeltaExceedsThreshold
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  TVector<double,3> *pTVar11;
  TVector<double,3> *pTVar12;
  longlong lVar13;
  TVector<double> *pTVar14;
  uint uVar15;
  longlong lVar16;
  TGeometryParticleHandleImp<double,3,1> *this;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar17;
  uint uVar18;
  TVector<double>_u_0 local_148;
  TQuat<double> local_128;
  TVector<double> local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8 [32];
  TQuat<double> local_b8;
  TVector<double>_u_0 local_98;
  TVector<double> local_78 [4];
  
  this = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    this = param_1;
  }
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
    this_00 = param_2;
  }
  if (this == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    dVar4 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    auVar8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    auVar8._0_8_ = dVar4;
    auVar8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dVar5 = auVar8._8_8_;
    local_148._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar11 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this);
    pTVar12 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)this->_padding_,(int)this->_padding_);
    dVar4 = *(double *)pTVar11 - *(double *)pTVar12;
    dVar5 = *(double *)&pTVar11->field_0x8 - *(double *)&pTVar12->field_0x8;
    uVar6 = *(double *)&pTVar11->field_0x10 - *(double *)&pTVar12->field_0x10;
  }
  dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_148._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar11 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    pTVar12 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
    dVar2 = *(double *)pTVar11 - *(double *)pTVar12;
    dVar3 = *(double *)&pTVar11->field_0x8 - *(double *)&pTVar12->field_0x8;
    uVar7 = *(double *)&pTVar11->field_0x10 - *(double *)&pTVar12->field_0x10;
  }
  uVar17 = 0;
  if (this == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar18 = (uint)param_1->_padding_;
    lVar13 = param_1->_padding_;
    uVar15 = uVar17;
    if ((int)uVar18 < *(int *)(lVar13 + 0x50)) {
      uVar15 = ~uVar18 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x48);
  }
  else {
    uVar18 = (uint)this->_padding_;
    lVar13 = this->_padding_;
    uVar15 = uVar17;
    if ((int)uVar18 < *(int *)(lVar13 + 0x568)) {
      uVar15 = ~uVar18 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x560);
  }
  lVar16 = (longlong)(int)uVar18;
  local_128.X = (double)*(float *)(lVar13 + lVar16 * 0x10);
  local_128.Y = (double)*(float *)(lVar13 + 4 + lVar16 * 0x10);
  local_128.Z = (double)*(float *)(lVar13 + 8 + lVar16 * 0x10);
  local_128.W = (double)*(float *)(lVar13 + 0xc + lVar16 * 0x10);
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar18 = (uint)param_2->_padding_;
    lVar13 = param_2->_padding_;
    if ((int)uVar18 < *(int *)(lVar13 + 0x50)) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x48);
  }
  else {
    uVar18 = (uint)this_00->_padding_;
    lVar13 = this_00->_padding_;
    if ((int)uVar18 < *(int *)(lVar13 + 0x568)) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x560);
  }
  lVar16 = (longlong)(int)uVar18;
  local_b8.X = (double)*(float *)(lVar13 + lVar16 * 0x10);
  local_b8.Y = (double)*(float *)(lVar13 + 4 + lVar16 * 0x10);
  local_b8.Z = (double)*(float *)(lVar13 + 8 + lVar16 * 0x10);
  local_b8.W = (double)*(float *)(lVar13 + 0xc + lVar16 * 0x10);
  pTVar11 = TGeometryParticleHandleImp<double,3,1>::CCDAxisThreshold(param_2);
  pTVar12 = TGeometryParticleHandleImp<double,3,1>::CCDAxisThreshold(param_1);
  local_e0 = (double)uVar7 - (double)uVar6;
  local_f0 = dVar2 - dVar4;
  local_e8 = dVar3 - dVar5;
  local_98._s_0.X = (double)*(undefined8 *)pTVar11;
  local_98._s_0.Y = (double)*(undefined8 *)&pTVar11->field_0x8;
  local_98._s_0.Z = (double)*(undefined8 *)&pTVar11->field_0x10;
  pTVar14 = UE::Math::TQuat<double>::UnrotateVector
                      (&local_b8,local_78,(TVector<double> *)&local_98._s_0);
  local_148._s_0.X = (pTVar14->field0_0x0)._s_0.X;
  local_148._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
  local_148._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  UE::Math::TQuat<double>::RotateVector(&local_128,&local_108,(TVector<double> *)&local_148._s_0);
  uVar17 = SUB84(local_108.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar18 = (uint)((ulonglong)local_108.field0_0x0._0_8_ >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_d8._16_8_ =
       CONCAT44((uint)((ulonglong)local_108.field0_0x0._16_8_ >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                SUB84(local_108.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
  ;
  dVar4 = *(double *)pTVar12;
  if (dVar4 <= (double)CONCAT44(uVar18,uVar17)) {
    uVar17 = SUB84(dVar4,0);
    uVar18 = (uint)((ulonglong)dVar4 >> 0x20);
  }
  if (*(double *)&pTVar12->field_0x10 <= (double)local_d8._16_8_) {
    local_d8._16_8_ = *(double *)&pTVar12->field_0x10;
  }
  local_d8._4_4_ = uVar18;
  local_d8._0_4_ = uVar17;
  uVar17 = SUB84(local_108.field0_0x0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar18 = (uint)((ulonglong)local_108.field0_0x0._8_8_ >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar4 = *(double *)&pTVar12->field_0x8;
  if (dVar4 <= (double)CONCAT44(uVar18,uVar17)) {
    uVar17 = SUB84(dVar4,0);
    uVar18 = (uint)((ulonglong)dVar4 >> 0x20);
  }
  local_d8._12_4_ = uVar18;
  local_d8._8_4_ = uVar17;
  bVar9 = DeltaExceedsThreshold
                    ((TVector<double,3> *)local_d8,(TVector<double,3> *)&local_f0,&local_128);
  return bVar9;
}

// DeltaExceedsThreshold @ 14375d790

bool __cdecl
Chaos::FCCDHelpers::DeltaExceedsThreshold
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2,double param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  TVector<double,3> *pTVar12;
  TVector<double,3> *pTVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  TGeometryParticleHandleImp<double,3,1> *pTVar17;
  uint uVar18;
  uint uVar19;
  TVector<double>_u_0 local_1a8;
  TQuat<double> local_188;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  TVector<double> local_138;
  double local_120;
  double local_118;
  double local_110;
  undefined1 local_108 [32];
  TQuat<double> local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double> local_a8 [6];
  
  pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar17 = param_1;
  }
  pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
    pTVar16 = param_2;
  }
  if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    dVar5 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    auVar8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    auVar8._0_8_ = dVar5;
    auVar8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dVar4 = auVar8._8_8_;
    local_1a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar17->_padding_,
               (TVector<double,3> *)&local_168,(int)pTVar17->_padding_);
    dVar5 = local_168 * param_3;
    dVar4 = local_160 * param_3;
    uVar6 = local_158 * param_3;
  }
  dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_1a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar16->_padding_,
               (TVector<double,3> *)&local_150,(int)pTVar16->_padding_);
    dVar2 = local_150 * param_3;
    dVar3 = local_148 * param_3;
    uVar7 = local_140 * param_3;
  }
  if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar18 = (uint)param_1->_padding_;
    lVar11 = param_1->_padding_;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar11 + 0x50)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar11 = *(longlong *)(lVar11 + 0x48);
  }
  else {
    uVar18 = (uint)pTVar17->_padding_;
    lVar11 = pTVar17->_padding_;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar11 + 0x568)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar11 = *(longlong *)(lVar11 + 0x560);
  }
  lVar15 = (longlong)(int)uVar18;
  local_188.X = (double)*(float *)(lVar11 + lVar15 * 0x10);
  local_188.Y = (double)*(float *)(lVar11 + 4 + lVar15 * 0x10);
  local_188.Z = (double)*(float *)(lVar11 + 8 + lVar15 * 0x10);
  local_188.W = (double)*(float *)(lVar11 + 0xc + lVar15 * 0x10);
  if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar18 = (uint)param_2->_padding_;
    lVar11 = param_2->_padding_;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar11 + 0x50)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar11 = *(longlong *)(lVar11 + 0x48);
  }
  else {
    uVar18 = (uint)pTVar16->_padding_;
    lVar11 = pTVar16->_padding_;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar11 + 0x568)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
    }
    lVar11 = *(longlong *)(lVar11 + 0x560);
  }
  lVar15 = (longlong)(int)uVar18;
  local_e8.X = (double)*(float *)(lVar11 + lVar15 * 0x10);
  local_e8.Y = (double)*(float *)(lVar11 + 4 + lVar15 * 0x10);
  local_e8.Z = (double)*(float *)(lVar11 + 8 + lVar15 * 0x10);
  local_e8.W = (double)*(float *)(lVar11 + 0xc + lVar15 * 0x10);
  pTVar12 = TGeometryParticleHandleImp<double,3,1>::CCDAxisThreshold(param_2);
  pTVar13 = TGeometryParticleHandleImp<double,3,1>::CCDAxisThreshold(param_1);
  local_c8._s_0.X = (double)*(undefined8 *)pTVar12;
  local_c8._s_0.Y = (double)*(undefined8 *)&pTVar12->field_0x8;
  local_c8._s_0.Z = (double)*(undefined8 *)&pTVar12->field_0x10;
  local_110 = (double)uVar7 - (double)uVar6;
  local_118 = dVar3 - dVar4;
  local_120 = dVar2 - dVar5;
  pTVar14 = UE::Math::TQuat<double>::UnrotateVector
                      (&local_e8,local_a8,(TVector<double> *)&local_c8._s_0);
  local_1a8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
  local_1a8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
  local_1a8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  UE::Math::TQuat<double>::RotateVector(&local_188,&local_138,(TVector<double> *)&local_1a8._s_0);
  uVar18 = SUB84(local_138.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)local_138.field0_0x0._0_8_ >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_108._16_8_ =
       CONCAT44((uint)((ulonglong)local_138.field0_0x0._16_8_ >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                SUB84(local_138.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
  ;
  dVar4 = *(double *)pTVar13;
  if (dVar4 <= (double)CONCAT44(uVar19,uVar18)) {
    uVar18 = SUB84(dVar4,0);
    uVar19 = (uint)((ulonglong)dVar4 >> 0x20);
  }
  if (*(double *)&pTVar13->field_0x10 <= (double)local_108._16_8_) {
    local_108._16_8_ = *(double *)&pTVar13->field_0x10;
  }
  local_108._4_4_ = uVar19;
  local_108._0_4_ = uVar18;
  uVar18 = SUB84(local_138.field0_0x0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)local_138.field0_0x0._8_8_ >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar4 = *(double *)&pTVar13->field_0x8;
  if (dVar4 <= (double)CONCAT44(uVar19,uVar18)) {
    uVar18 = SUB84(dVar4,0);
    uVar19 = (uint)((ulonglong)dVar4 >> 0x20);
  }
  local_108._12_4_ = uVar19;
  local_108._8_4_ = uVar18;
  bVar9 = DeltaExceedsThreshold
                    ((TVector<double,3> *)local_108,(TVector<double,3> *)&local_120,&local_188);
  return bVar9;
}

// DeltaExceedsThreshold @ 14375dbc0

bool __cdecl
Chaos::FCCDHelpers::DeltaExceedsThreshold
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TQuat<double> *param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5,TQuat<double> *param_6)

{
  double dVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TVector<double> local_78;
  TVector<double>_u_0 local_58;
  undefined1 local_38 [16];
  double local_28;
  TVector<double> local_20;
  
  dVar1 = *(double *)&param_5->field_0x8 - *(double *)&param_2->field_0x8;
  local_28 = *(double *)&param_5->field_0x10 - *(double *)&param_2->field_0x10;
  local_38._8_4_ = SUB84(dVar1,0);
  local_38._0_8_ = *(double *)param_5 - *(double *)param_2;
  local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_58._s_0.Z = (double)*(undefined8 *)&param_4->field_0x10;
  local_58._s_0.X = (double)*(undefined8 *)param_4;
  local_58._s_0.Y = (double)*(undefined8 *)&param_4->field_0x8;
  pTVar3 = UE::Math::TQuat<double>::UnrotateVector
                     (param_6,&local_20,(TVector<double> *)&local_58._s_0);
  local_58._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  local_58._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
  UE::Math::TQuat<double>::RotateVector(param_3,&local_78,(TVector<double> *)&local_58._s_0);
  uVar4 = SUB84(local_78.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)local_78.field0_0x0._0_8_ >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar1 = *(double *)param_1;
  if (dVar1 <= (double)CONCAT44(uVar5,uVar4)) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (uint)((ulonglong)dVar1 >> 0x20);
  }
  uVar6 = SUB84(local_78.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)local_78.field0_0x0._16_8_ >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar1 = *(double *)&param_1->field_0x10;
  if (dVar1 <= (double)CONCAT44(uVar7,uVar6)) {
    uVar6 = SUB84(dVar1,0);
    uVar7 = (uint)((ulonglong)dVar1 >> 0x20);
  }
  local_58._s_0.X = (double)CONCAT44(uVar5,uVar4);
  uVar4 = SUB84(local_78.field0_0x0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)local_78.field0_0x0._8_8_ >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_58._s_0.Z = (double)CONCAT44(uVar7,uVar6);
  dVar1 = *(double *)&param_1->field_0x8;
  if (dVar1 <= (double)CONCAT44(uVar5,uVar4)) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (uint)((ulonglong)dVar1 >> 0x20);
  }
  local_58._s_0.Y = (double)CONCAT44(uVar5,uVar4);
  bVar2 = DeltaExceedsThreshold
                    ((TVector<double,3> *)&local_58._s_0,(TVector<double,3> *)local_38,param_3);
  return bVar2;
}

// DeltaExceedsThreshold @ 14375dcc0

bool __cdecl
Chaos::FCCDHelpers::DeltaExceedsThreshold
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TQuat<double> *param_3)

{
  undefined8 uVar1;
  float fVar2;
  TVector<double> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_58;
  TVector<double> local_38 [2];
  
  fVar2 = CVars::CCDEnableThresholdBoundsScale;
  if (CVars::CCDEnableThresholdBoundsScale < 0.0) {
    return false;
  }
  if (CVars::CCDEnableThresholdBoundsScale == 0.0) {
    return true;
  }
  local_58._s_0.X = (double)*(undefined8 *)param_2;
  local_58._s_0.Y = (double)*(undefined8 *)&param_2->field_0x8;
  local_58._s_0.Z = (double)*(undefined8 *)&param_2->field_0x10;
  pTVar3 = UE::Math::TQuat<double>::UnrotateVector
                     (param_3,local_38,(TVector<double> *)&local_58._s_0);
  dVar5 = (double)fVar2;
  uVar1 = *(undefined8 *)((longlong)&pTVar3->field0_0x0 + 8);
  dVar6 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          dVar5 * *(double *)&param_1->field_0x8;
  dVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar3->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&pTVar3->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          dVar5 * *(double *)param_1;
  uVar1 = *(undefined8 *)((longlong)&pTVar3->field0_0x0 + 0x10);
  dVar5 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          dVar5 * *(double *)&param_1->field_0x10;
  if (dVar6 <= dVar4) {
    dVar6 = dVar4;
  }
  if (dVar6 <= dVar5) {
    dVar6 = dVar5;
  }
  return 0.0 < dVar6;
}

// DeltaExceedsThreshold @ 14375dd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Chaos::FCCDHelpers::DeltaExceedsThreshold
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TQuat<double> *param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5,TVector<double,3> *param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  if (0.0 <= CVars::CCDEnableThresholdBoundsScale) {
    if (CVars::CCDEnableThresholdBoundsScale == 0.0) {
      bVar6 = true;
    }
    else {
      local_48._s_0.X = (double)*(undefined8 *)param_2;
      local_48._s_0.Y = (double)*(undefined8 *)&param_2->field_0x8;
      local_48._s_0.Z = (double)*(undefined8 *)&param_2->field_0x10;
      pTVar7 = UE::Math::TQuat<double>::UnrotateVector
                         (param_3,&local_28,(TVector<double> *)&local_48._s_0);
      uVar1 = *(undefined8 *)((longlong)&pTVar7->field0_0x0 + 0x10);
      uVar8 = *(uint *)((longlong)&pTVar7->field0_0x0 + 4) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar9 = *(uint *)((longlong)&pTVar7->field0_0x0 + 8) & _UNK_15061cc88;
      uVar10 = *(uint *)((longlong)&pTVar7->field0_0x0 + 0xc) & _UNK_15061cc8c;
      uVar13 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar14 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      *(uint *)param_4 = *(uint *)&pTVar7->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff
      ;
      *(uint *)&param_4->field_0x4 = uVar8;
      *(uint *)&param_4->field_0x8 = uVar9;
      *(uint *)&param_4->field_0xc = uVar10;
      *(ulonglong *)&param_4->field_0x10 = CONCAT44(uVar14,uVar13);
      dVar12 = (double)CVars::CCDEnableThresholdBoundsScale;
      dVar11 = dVar12 * *(double *)&param_1->field_0x10;
      dVar5 = *(double *)param_1;
      dVar4 = dVar12 * *(double *)&param_1->field_0x8;
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = dVar12 * dVar5;
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])param_5 = auVar3;
      *(double *)&param_5->field_0x10 = dVar11;
      dVar11 = *(double *)&param_4->field_0x10 - dVar11;
      dVar4 = *(double *)&param_4->field_0x8 - dVar4;
      auVar2._8_4_ = SUB84(dVar4,0);
      auVar2._0_8_ = *(double *)param_4 - dVar12 * dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])param_6 = auVar2;
      *(double *)&param_6->field_0x10 = dVar11;
      dVar12 = *(double *)&param_6->field_0x8;
      if (*(double *)&param_6->field_0x8 <= *(double *)param_6) {
        dVar12 = *(double *)param_6;
      }
      if (dVar12 <= dVar11) {
        dVar12 = dVar11;
      }
      bVar6 = 0.0 < dVar12;
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// GetParticleTransformAtTOI @ 143791ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __cdecl
Chaos::FCCDHelpers::GetParticleTransformAtTOI
          (TRigidTransform<double,3> *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  EObjectStateType EVar14;
  TRigidTransform<double,3> *pTVar15;
  longlong lVar16;
  TGeometryParticleHandleImp<double,3,1> *pTVar17;
  TVector<double,3> *pTVar18;
  uint uVar19;
  TGeometryParticleHandleImp<double,3,1> *pTVar20;
  longlong lVar21;
  TGeometryParticleHandleImp<double,3,1> *pTVar22;
  undefined1 in_XMM1 [16];
  undefined8 uVar24;
  undefined1 auVar23 [16];
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  FGenericParticleHandleImp local_98;
  undefined1 local_90 [120];
  
  pTVar22 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar17 = pTVar22;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar17 = param_1;
  }
  local_98.MHandle = param_1;
  if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1437921f6:
    TGeometryParticleHandleImp<double,3,1>::GetTransformXR(param_1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  uVar7 = (uint)pTVar17->_padding_;
  lVar16 = pTVar17->_padding_;
  uVar19 = 0;
  if ((int)uVar7 < *(int *)(lVar16 + 0x2e0)) {
    uVar19 = ~uVar7 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar15 = (TRigidTransform<double,3> *)(*pcVar8)();
    return pTVar15;
  }
  if ((*(byte *)(*(longlong *)(lVar16 + 0x2d8) + 8 + (longlong)(int)uVar7 * 0x10) >> 1 & 1) == 0)
  goto LAB_1437921f6;
  dVar9 = __real_3ff0000000000000 - param_2;
  if (__real_3ff0000000000000 <= __real_3ff0000000000000 - param_2) {
    dVar9 = __real_3ff0000000000000;
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  bVar13 = FGenericParticleHandleImp::IsDynamic(&local_98);
  if (bVar13) {
    pTVar17 = pTVar22;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar17 = param_1;
    }
    uVar7 = (uint)pTVar17->_padding_;
    lVar16 = pTVar17->_padding_;
    uVar19 = 0;
    if ((int)uVar7 < *(int *)(lVar16 + 0x568)) {
      uVar19 = ~uVar7 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar15 = (TRigidTransform<double,3> *)(*pcVar8)();
      return pTVar15;
    }
    lVar16 = *(longlong *)(lVar16 + 0x560);
  }
  else {
    uVar7 = (uint)param_1->_padding_;
    lVar16 = param_1->_padding_;
    uVar19 = 0;
    if ((int)uVar7 < *(int *)(lVar16 + 0x50)) {
      uVar19 = ~uVar7 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar15 = (TRigidTransform<double,3> *)(*pcVar8)();
      return pTVar15;
    }
    lVar16 = *(longlong *)(lVar16 + 0x48);
  }
  lVar21 = (longlong)(int)uVar7;
  fVar1 = *(float *)(lVar16 + 4 + lVar21 * 0x10);
  fVar2 = *(float *)(lVar16 + lVar21 * 0x10);
  uVar3 = *(undefined8 *)(lVar16 + 8 + lVar21 * 0x10);
  dVar11 = (double)(float)((ulonglong)uVar3 >> 0x20);
  pTVar17 = pTVar22;
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    pTVar17 = param_1;
  }
  if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1437920d0:
    pTVar17 = pTVar22;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar17 = param_1;
    }
    if (pTVar17 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar20 = pTVar22;
      if (1 < *(byte *)((longlong)&pTVar17->_padding_ + 4)) {
        pTVar20 = pTVar17;
      }
      if (pTVar20 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar14 = Kinematic;
      }
      else {
        EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar20);
      }
      if (EVar14 == Sleeping) goto LAB_1437920fd;
    }
    pTVar18 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  }
  else {
    pTVar20 = pTVar22;
    if (1 < *(byte *)((longlong)&pTVar17->_padding_ + 4)) {
      pTVar20 = pTVar17;
    }
    if (pTVar20 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar14 = Kinematic;
    }
    else {
      EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar20);
    }
    if (EVar14 != Dynamic) goto LAB_1437920d0;
LAB_1437920fd:
    pTVar17 = pTVar22;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar17 = param_1;
    }
    pTVar18 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar17);
  }
  uVar24 = in_XMM1._8_8_;
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    pTVar22 = param_1;
  }
  if (pTVar22 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    dVar25 = FGenericParticleHandleImp::ZeroVector._0_8_;
    uVar26 = FGenericParticleHandleImp::ZeroVector._8_4_;
    uVar27 = FGenericParticleHandleImp::ZeroVector._12_4_;
    local_90._16_8_ = FGenericParticleHandleImp::ZeroVector._16_8_;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar22->_padding_,
               (TVector<double,3> *)local_90,(int)pTVar22->_padding_);
    uVar24 = in_XMM1._8_8_;
    dVar25 = local_90._0_8_;
    uVar26 = local_90._8_4_;
    uVar27 = local_90._12_4_;
  }
  dVar4 = *(double *)&pTVar18->field_0x8;
  auVar12._4_8_ = uVar24;
  auVar12._0_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = uVar26;
  auVar23._12_4_ = uVar27;
  dVar5 = *(double *)&pTVar18->field_0x10;
  dVar9 = dVar9 * param_3;
  dVar6 = *(double *)pTVar18;
  *(double *)__return_storage_ptr__ = (double)fVar2;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = (double)(float)uVar3;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar10;
  *(double *)&__return_storage_ptr__->field_0x20 = dVar6 - dVar25 * dVar9;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar4 - auVar23._8_8_ * dVar9;
  *(double *)&__return_storage_ptr__->field_0x30 = dVar5 - (double)local_90._16_8_ * dVar9;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  uVar3 = _UNK_150689688;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar3;
  uVar3 = _UNK_150689518;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar3;
  return __return_storage_ptr__;
}

