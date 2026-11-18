// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// FParticlePairMidPhase @ 1439c0a20

FParticlePairMidPhase * __thiscall
Chaos::FParticlePairMidPhase::FParticlePairMidPhase
          (FParticlePairMidPhase *this,EParticlePairMidPhaseType param_1)

{
  this->MidPhaseType = param_1;
  this->_padding_ = (longlong)&___7FParticlePairMidPhase_Chaos__6B_;
  (this->Flags).Bits = 0;
  this->Particle0 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  (this->ParticlePairKey).Key.Key64 = 0;
  this->NumActiveConstraints = 0;
  this->CullDistanceScale = 1.0;
  this->LastUsedEpoch = -1;
  this->ParticleCollisionsIndex0 = -1;
  this->ParticleCollisionsIndex1 = -1;
  return this;
}

// ~FParticlePairMidPhase @ 1439c0e80

void __thiscall Chaos::FParticlePairMidPhase::~FParticlePairMidPhase(FParticlePairMidPhase *this)

{
  this->_padding_ = (longlong)&___7FParticlePairMidPhase_Chaos__6B_;
  return;
}

// CalculateMidPhaseType @ 1439c7350

EParticlePairMidPhaseType __cdecl
Chaos::FParticlePairMidPhase::CalculateMidPhaseType
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  int iVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  FImplicitObject *pFVar5;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  int iVar7;
  int iVar8;
  FGenericParticleHandleImp local_res18 [2];
  
  if (CVars::bChaos_Collision_MidPhase_EnableShapePairs) {
    pFVar5 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
    iVar7 = 0;
    iVar8 = 0;
    if (pFVar5 != (FImplicitObject *)0x0) {
      iVar8 = 1;
      uVar2 = FImplicitObject::GetType(pFVar5);
      if ((uVar2 == '\x05') || (uVar2 == '\x0f')) {
        iVar8 = (int)pFVar5[3]._padding_;
      }
    }
    pFVar5 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_2);
    if (pFVar5 != (FImplicitObject *)0x0) {
      iVar7 = 1;
      uVar2 = FImplicitObject::GetType(pFVar5);
      if ((uVar2 == '\x05') || (uVar2 == '\x0f')) {
        iVar7 = (int)pFVar5[3]._padding_;
      }
    }
    pTVar6 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_1);
    iVar1 = pTVar6->ArrayNum;
    pTVar6 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_2);
    if ((CVars::Chaos_Collision_MidPhase_MaxShapePairs < 1) ||
       (iVar7 * iVar8 <= CVars::Chaos_Collision_MidPhase_MaxShapePairs)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((iVar1 < iVar8) || (pTVar6->ArrayNum < iVar7)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((!bVar3) && (!bVar4)) {
      if (CVars::ChaosOneWayInteractionPairCollisionMode == 2) {
        local_res18[0].MHandle = param_1;
        bVar3 = FGenericParticleHandleImp::OneWayInteraction(local_res18);
        local_res18[0].MHandle = param_2;
        bVar4 = FGenericParticleHandleImp::OneWayInteraction(local_res18);
        if (bVar3) {
          return bVar4 + ShapePair;
        }
      }
      return ShapePair;
    }
  }
  return Generic;
}

// DetachParticle @ 1439caf30

void __thiscall
Chaos::FParticlePairMidPhase::DetachParticle
          (FParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  (this->Flags).Bits = (this->Flags).Bits & 0xfe29 | 0x21;
  (**(code **)(this->_padding_ + 0x10))(this);
  if (param_1 == this->Particle0) {
    this->Particle0 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    return;
  }
  if (param_1 == this->Particle1) {
    this->Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  return;
}

// GenerateCollisions @ 1439d0c70

void __thiscall
Chaos::FParticlePairMidPhase::GenerateCollisions
          (FParticlePairMidPhase *this,double param_1,double param_2,FCollisionContext *param_3)

{
  uint uVar1;
  bool bVar2;
  EObjectStateType EVar3;
  bool bVar4;
  int iVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  FGenericParticleHandleImp FVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  ushort uVar11;
  FGenericParticleHandleImp this_00;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined1 local_e0 [24];
  TVector<float,3> local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  TVector<double,3> local_88 [4];
  
  local_res8.MHandle = this->Particle0;
  if (local_res8.MHandle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  pTVar10 = this->Particle1;
  if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  if (((this->Flags).Bits & 1) == 0) goto LAB_1439d1152;
  this_00.MHandle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  fVar23 = (float)param_1 * this->CullDistanceScale;
  local_f8.MHandle = pTVar10;
  if (((this->Flags).Bits & 4) == 0) {
LAB_1439d0e30:
    uVar11 = 0;
  }
  else {
    local_c8._0_8_ = 0;
    local_88[0]._16_8_ = 0;
    local_88[0]._0_8_ = 0;
    local_88[0]._8_8_ = 0;
    pTVar8 = this_00.MHandle;
    if (*(char *)((longlong)&(local_res8.MHandle)->_padding_ + 4) != '\0') {
      pTVar8 = local_res8.MHandle;
    }
    if (pTVar8 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      uVar17 = FGenericParticleHandleImp::ZeroVector._0_4_;
      uVar18 = FGenericParticleHandleImp::ZeroVector._4_4_;
      dVar16 = FGenericParticleHandleImp::ZeroVector._8_8_;
      local_e0._16_8_ = FGenericParticleHandleImp::ZeroVector._16_8_;
      local_98 = dVar16;
      uVar12 = uVar17;
      uVar15 = uVar18;
    }
    else {
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar8->_padding_,
                 (TVector<double,3> *)local_e0,(int)pTVar8->_padding_);
      uVar17 = local_e0._0_4_;
      uVar18 = local_e0._4_4_;
      dVar16 = FGenericParticleHandleImp::ZeroVector._8_8_;
      local_98 = local_e0._8_8_;
      uVar12 = FGenericParticleHandleImp::ZeroVector._0_4_;
      uVar15 = FGenericParticleHandleImp::ZeroVector._4_4_;
    }
    dVar21 = (double)(float)param_2;
    local_a0 = (double)CONCAT44(uVar18,uVar17) * dVar21;
    local_98 = local_98 * dVar21;
    local_90 = (double)local_e0._16_8_ * dVar21;
    pTVar8 = this_00.MHandle;
    if (*(char *)((longlong)&pTVar10->_padding_ + 4) != '\0') {
      pTVar8 = pTVar10;
    }
    if (pTVar8 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      local_e0._16_8_ = FGenericParticleHandleImp::ZeroVector._16_8_;
    }
    else {
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar8->_padding_,
                 (TVector<double,3> *)local_e0,(int)pTVar8->_padding_);
      uVar12 = local_e0._0_4_;
      uVar15 = local_e0._4_4_;
      dVar16 = local_e0._8_8_;
    }
    local_b8._0_8_ = (double)CONCAT44(uVar15,uVar12) * dVar21;
    local_b8._8_8_ = dVar16 * dVar21;
    local_a8 = (double)local_e0._16_8_ * dVar21;
    bVar2 = Collisions::ShouldUseCCD
                      (this->Particle0,(TVector<double,3> *)&local_a0,this->Particle1,
                       (TVector<double,3> *)local_b8,local_88,(double *)&local_c8);
    if (!bVar2) goto LAB_1439d0e30;
    uVar11 = 8;
  }
  (this->Flags).Bits = (this->Flags).Bits & 0xfff7;
  (this->Flags).Bits = (this->Flags).Bits | uVar11;
  FVar9.MHandle = this_00.MHandle;
  if (*(char *)((longlong)&(local_res8.MHandle)->_padding_ + 4) != '\0') {
    FVar9.MHandle = local_res8.MHandle;
  }
  if (FVar9.MHandle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1439d0e75:
    FVar9.MHandle = this_00.MHandle;
    if (*(char *)((longlong)&(local_res8.MHandle)->_padding_ + 4) != '\0') {
      FVar9.MHandle = local_res8.MHandle;
    }
    if (FVar9.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar10 = this_00.MHandle;
      if (1 < *(byte *)((longlong)&(FVar9.MHandle)->_padding_ + 4)) {
        pTVar10 = FVar9.MHandle;
      }
      if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar3 = Kinematic;
      }
      else {
        EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
      }
      if (EVar3 == Sleeping) goto LAB_1439d0eaa;
    }
LAB_1439d0edf:
    FVar9.MHandle = this_00.MHandle;
    if (1 < *(byte *)((longlong)&(local_res8.MHandle)->_padding_ + 4)) {
      FVar9.MHandle = local_res8.MHandle;
    }
    if ((FVar9.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (bVar2 = TPBDRigidParticleHandleImp<double,3,1>::IsMovingKinematic
                          ((TPBDRigidParticleHandleImp<double,3,1> *)FVar9.MHandle), bVar2))
    goto LAB_1439d0ef8;
    bVar2 = false;
  }
  else {
    pTVar10 = this_00.MHandle;
    if (1 < *(byte *)((longlong)&(FVar9.MHandle)->_padding_ + 4)) {
      pTVar10 = FVar9.MHandle;
    }
    if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar3 = Kinematic;
    }
    else {
      EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
    }
    if (EVar3 != Dynamic) goto LAB_1439d0e75;
LAB_1439d0eaa:
    FVar9.MHandle = this_00.MHandle;
    if (*(char *)((longlong)&(local_res8.MHandle)->_padding_ + 4) != '\0') {
      FVar9.MHandle = local_res8.MHandle;
    }
    if (FVar9.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar10 = this_00.MHandle;
      if (1 < *(byte *)((longlong)&(FVar9.MHandle)->_padding_ + 4)) {
        pTVar10 = FVar9.MHandle;
      }
      if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar3 = Kinematic;
      }
      else {
        EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
      }
      if (EVar3 == Sleeping) goto LAB_1439d0edf;
    }
LAB_1439d0ef8:
    bVar2 = true;
  }
  FVar9.MHandle = this_00.MHandle;
  if (*(char *)((longlong)&(local_f8.MHandle)->_padding_ + 4) != '\0') {
    FVar9.MHandle = local_f8.MHandle;
  }
  if (FVar9.MHandle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1439d0f32:
    FVar9.MHandle = this_00.MHandle;
    if (*(char *)((longlong)&(local_f8.MHandle)->_padding_ + 4) != '\0') {
      FVar9.MHandle = local_f8.MHandle;
    }
    if (FVar9.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar10 = this_00.MHandle;
      if (1 < *(byte *)((longlong)&(FVar9.MHandle)->_padding_ + 4)) {
        pTVar10 = FVar9.MHandle;
      }
      if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar3 = Kinematic;
      }
      else {
        EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
      }
      if (EVar3 == Sleeping) goto LAB_1439d0f64;
    }
LAB_1439d0f96:
    if (1 < *(byte *)((longlong)&(local_f8.MHandle)->_padding_ + 4)) {
      this_00.MHandle = local_f8.MHandle;
    }
    if ((this_00.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (bVar4 = TPBDRigidParticleHandleImp<double,3,1>::IsMovingKinematic
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00.MHandle), bVar4))
    goto LAB_1439d0fb4;
    bVar4 = false;
  }
  else {
    pTVar10 = this_00.MHandle;
    if (1 < *(byte *)((longlong)&(FVar9.MHandle)->_padding_ + 4)) {
      pTVar10 = FVar9.MHandle;
    }
    if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar3 = Kinematic;
    }
    else {
      EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
    }
    if (EVar3 != Dynamic) goto LAB_1439d0f32;
LAB_1439d0f64:
    FVar9.MHandle = this_00.MHandle;
    if (*(char *)((longlong)&(local_f8.MHandle)->_padding_ + 4) != '\0') {
      FVar9.MHandle = local_f8.MHandle;
    }
    if (FVar9.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar10 = this_00.MHandle;
      if (1 < *(byte *)((longlong)&(FVar9.MHandle)->_padding_ + 4)) {
        pTVar10 = FVar9.MHandle;
      }
      if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar3 = Kinematic;
      }
      else {
        EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
      }
      if (EVar3 == Sleeping) goto LAB_1439d0f96;
    }
LAB_1439d0fb4:
    bVar4 = true;
  }
  if ((!bVar2) && (!bVar4)) {
    local_b8._0_8_ = &local_res8;
    local_b8._8_8_ = &local_f8;
    `Chaos::FParticlePairMidPhase::GenerateCollisions'::__l8::<lambda_1>::operator()(local_b8);
  }
  local_f0 = 0;
  local_e8 = 0.0;
  if ((*(byte *)&this->Flags & 0x10) == 0) {
    pTVar6 = FGenericParticleHandleImp::GetPreVf(&local_res8,&local_c8);
    uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar22 = (float)(*(uint *)&pTVar6->field_0x4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar22 <= (float)(*(uint *)pTVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar22 = (float)(*(uint *)pTVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    fVar13 = (float)(*(uint *)&pTVar6->field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar22 <= fVar13) {
      fVar22 = fVar13;
    }
    pTVar6 = FGenericParticleHandleImp::GetPreVf(&local_f8,&local_c8);
    fVar13 = (float)param_3->Settings->BoundsVelocityInflation;
    if ((0.0 < fVar13) &&
       (fVar20 = (float)param_3->Settings->MaxVelocityBoundsExpansion, 0.0 < fVar20)) {
      fVar19 = (float)(*(uint *)&pTVar6->field_0x4 & uVar1);
      if (fVar19 <= (float)(*(uint *)pTVar6 & uVar1)) {
        fVar19 = (float)(*(uint *)pTVar6 & uVar1);
      }
      fVar14 = (float)(*(uint *)&pTVar6->field_0x8 & uVar1);
      if (fVar19 <= fVar14) {
        fVar19 = fVar14;
      }
      if (fVar19 <= fVar22) {
        fVar19 = fVar22;
      }
      fVar13 = fVar19 * (float)param_2 * fVar13;
      if (fVar20 <= fVar13) {
        fVar13 = fVar20;
      }
      fVar23 = fVar23 + fVar13;
    }
  }
  else {
    pTVar6 = FGenericParticleHandleImp::GetVf(&local_res8,&local_c8);
    pTVar7 = FGenericParticleHandleImp::GetVf(&local_f8,(TVector<float,3> *)local_b8);
    fVar22 = (float)param_2;
    local_e8 = (*(float *)&pTVar6->field_0x8 - *(float *)&pTVar7->field_0x8) * fVar22;
    local_f0 = CONCAT44((*(float *)&pTVar6->field_0x4 - *(float *)&pTVar7->field_0x4) * fVar22,
                        (*(float *)pTVar6 - *(float *)pTVar7) * fVar22);
  }
  iVar5 = (**(code **)(this->_padding_ + 0x20))(this,(float)param_2,fVar23,&local_f0,param_3);
  this->NumActiveConstraints = iVar5;
LAB_1439d1152:
  uVar11 = (this->Flags).Bits;
  if ((uVar11 >> 8 & 1) != 0) {
    (this->Flags).Bits = ((uVar11 & 2) * 2 ^ (uVar11 & 0xfffb | 1)) & 0xfeff | 0x20;
  }
  this->LastUsedEpoch = param_3->Allocator->CurrentEpoch;
  return;
}

// Init @ 1439d4c00

void __thiscall
Chaos::FParticlePairMidPhase::Init
          (FParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2,FCollisionParticlePairKey *param_3,
          FCollisionContext *param_4)

{
  bool bVar1;
  FIDKey FVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  bool *pbVar12;
  TAABB<double,3> *pTVar13;
  ushort uVar14;
  FFlags *pFVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_res10;
  FGenericParticleHandleImp local_res18;
  FGenericParticleHandleImp local_res20;
  
  if ((param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParticle0 != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                         ,0x38d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParticle1 != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                         ,0x38e,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Particle0 = param_1;
  this->Particle1 = param_2;
  uVar11 = 0;
  FVar2 = param_3->Key;
  (this->Flags).Bits = (this->Flags).Bits | 1;
  (this->ParticlePairKey).Key = FVar2;
  local_res8.MHandle = param_1;
  local_res10.MHandle = param_2;
  if ((param_4->Settings->bAllowCCD == false) ||
     ((bVar8 = FGenericParticleHandleImp::CCDEnabled(&local_res8), !bVar8 &&
      (bVar8 = FGenericParticleHandleImp::CCDEnabled(&local_res10), !bVar8)))) {
    uVar14 = 0;
  }
  else {
    uVar11 = 2;
    uVar14 = 4;
  }
  pFVar15 = &this->Flags;
  (this->Flags).Bits = (this->Flags).Bits & 0xfffd;
  (this->Flags).Bits = uVar11 | (this->Flags).Bits & 0xfffb | uVar14;
  if ((param_4->Settings->bAllowMACD == false) ||
     (((CVars::bChaosForceMACD == false &&
       (bVar8 = FGenericParticleHandleImp::MACDEnabled(&local_res8), !bVar8)) &&
      (bVar8 = FGenericParticleHandleImp::MACDEnabled(&local_res10), !bVar8)))) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x10;
  }
  pFVar15->Bits = pFVar15->Bits & 0xffef;
  pFVar15->Bits = pFVar15->Bits | uVar11;
  pFVar15->Bits = pFVar15->Bits | 0x20;
  (**(code **)(this->_padding_ + 0x18))(this);
  local_res18.MHandle = this->Particle0;
  bVar9 = FGenericParticleHandleImp::IsDynamic(&local_res18);
  local_res20.MHandle = this->Particle1;
  bVar10 = FGenericParticleHandleImp::IsDynamic(&local_res20);
  pTVar3 = this->Particle0;
  pbVar12 = TGeometryParticlesImp<double,3,0>::HasBounds
                      ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,(int)pTVar3->_padding_
                      );
  pTVar3 = this->Particle1;
  bVar8 = *pbVar12;
  pbVar12 = TGeometryParticlesImp<double,3,0>::HasBounds
                      ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,(int)pTVar3->_padding_
                      );
  dVar6 = (double)CVars::Chaos_Collision_CullDistanceScaleInverseSize;
  bVar1 = *pbVar12;
  dVar7 = (double)CVars::Chaos_Collision_MinCullDistanceScale;
  if ((bVar9) && (bVar8 != false)) {
    pTVar13 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(this->Particle0);
    dVar5 = *(double *)&(pTVar13->MMax).field_0x8 - *(double *)&(pTVar13->MMin).field_0x8;
    dVar16 = *(double *)&pTVar13->MMax - *(double *)&pTVar13->MMin;
    dVar17 = *(double *)&(pTVar13->MMax).field_0x10 - *(double *)&(pTVar13->MMin).field_0x10;
    if (dVar5 <= dVar16) {
      dVar5 = dVar16;
    }
    if (dVar5 <= dVar17) {
      dVar5 = dVar17;
    }
  }
  else {
    dVar5 = 0.0;
  }
  dVar16 = 0.0;
  if ((bVar10) && (dVar16 = 0.0, bVar1 != false)) {
    pTVar13 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(this->Particle1);
    dVar16 = *(double *)&(pTVar13->MMax).field_0x8 - *(double *)&(pTVar13->MMin).field_0x8;
    dVar17 = *(double *)&pTVar13->MMax - *(double *)&pTVar13->MMin;
    dVar18 = *(double *)&(pTVar13->MMax).field_0x10 - *(double *)&(pTVar13->MMin).field_0x10;
    if (dVar16 <= dVar17) {
      dVar16 = dVar17;
    }
    if (dVar16 <= dVar18) {
      dVar16 = dVar18;
    }
  }
  dVar16 = dVar16 * dVar6;
  dVar5 = dVar5 * dVar6;
  if (dVar16 <= dVar5) {
    dVar16 = dVar5;
  }
  if (dVar16 <= dVar7) {
    dVar16 = dVar7;
  }
  this->CullDistanceScale = (float)dVar16;
  return;
}

// InitThresholds @ 1439d50d0

void __thiscall Chaos::FParticlePairMidPhase::InitThresholds(FParticlePairMidPhase *this)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool *pbVar8;
  TAABB<double,3> *pTVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FGenericParticleHandleImp local_res8;
  
  local_res8.MHandle = this->Particle0;
  bVar6 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  local_res8.MHandle = this->Particle1;
  bVar7 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  pbVar8 = TGeometryParticlesImp<double,3,0>::HasBounds
                     ((TGeometryParticlesImp<double,3,0> *)this->Particle0->_padding_,
                      (int)this->Particle0->_padding_);
  bVar1 = *pbVar8;
  pbVar8 = TGeometryParticlesImp<double,3,0>::HasBounds
                     ((TGeometryParticlesImp<double,3,0> *)this->Particle1->_padding_,
                      (int)this->Particle1->_padding_);
  dVar4 = (double)CVars::Chaos_Collision_CullDistanceScaleInverseSize;
  bVar2 = *pbVar8;
  dVar5 = (double)CVars::Chaos_Collision_MinCullDistanceScale;
  if ((bVar6) && (bVar1 != false)) {
    pTVar9 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(this->Particle0);
    dVar3 = *(double *)&(pTVar9->MMax).field_0x8 - *(double *)&(pTVar9->MMin).field_0x8;
    dVar10 = *(double *)&pTVar9->MMax - *(double *)&pTVar9->MMin;
    dVar11 = *(double *)&(pTVar9->MMax).field_0x10 - *(double *)&(pTVar9->MMin).field_0x10;
    if (dVar3 <= dVar10) {
      dVar3 = dVar10;
    }
    if (dVar3 <= dVar11) {
      dVar3 = dVar11;
    }
  }
  else {
    dVar3 = 0.0;
  }
  dVar10 = 0.0;
  if ((bVar7) && (dVar10 = 0.0, bVar2 != false)) {
    pTVar9 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(this->Particle1);
    dVar10 = *(double *)&(pTVar9->MMax).field_0x8 - *(double *)&(pTVar9->MMin).field_0x8;
    dVar11 = *(double *)&pTVar9->MMax - *(double *)&pTVar9->MMin;
    dVar12 = *(double *)&(pTVar9->MMax).field_0x10 - *(double *)&(pTVar9->MMin).field_0x10;
    if (dVar10 <= dVar11) {
      dVar10 = dVar11;
    }
    if (dVar10 <= dVar12) {
      dVar10 = dVar12;
    }
  }
  dVar10 = dVar10 * dVar4;
  dVar3 = dVar3 * dVar4;
  if (dVar10 <= dVar3) {
    dVar10 = dVar3;
  }
  if (dVar10 <= dVar5) {
    dVar10 = dVar5;
  }
  this->CullDistanceScale = (float)dVar10;
  return;
}

// InjectCollision @ 1439d5230

void __thiscall
Chaos::FParticlePairMidPhase::InjectCollision
          (FParticlePairMidPhase *this,FPBDCollisionConstraint *param_1,FCollisionContext *param_2)

{
  (**(code **)(this->_padding_ + 0x30))();
  this->LastUsedEpoch = param_2->Allocator->CurrentEpoch;
  return;
}

// IsInConstraintGraph @ 1439d55b0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

bool __thiscall Chaos::FParticlePairMidPhase::IsInConstraintGraph(FParticlePairMidPhase *this)

{
  bool local_res10 [8];
  <lambda_1> local_res18 [2];
  
  local_res18[0].bInGraph = local_res10;
  local_res10[0] = false;
  VisitConstCollisions<_Chaos::FParticlePairMidPhase::IsInConstraintGraph_::__l2::<lambda_1>_>
            (this,local_res18,VisitAllCurrent);
  return local_res10[0];
}

// Make @ 1439d58b0

FParticlePairMidPhase * __cdecl
Chaos::FParticlePairMidPhase::Make
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  FParticleIDKey *pFVar1;
  int iVar2;
  FIDKey *pFVar3;
  uchar uVar4;
  bool bVar5;
  bool bVar6;
  FImplicitObject *pFVar7;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  FParticlePairMidPhase *pFVar9;
  int iVar10;
  int iVar11;
  FGenericParticleHandleImp local_res18;
  TVector<double,3> local_48 [2];
  
  iVar10 = 0;
  iVar11 = 0;
  if (CVars::bChaos_Collision_MidPhase_EnableShapePairs) {
    pFVar7 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
    if (pFVar7 != (FImplicitObject *)0x0) {
      iVar11 = 1;
      uVar4 = FImplicitObject::GetType(pFVar7);
      if ((uVar4 == '\x05') || (uVar4 == '\x0f')) {
        iVar11 = (int)pFVar7[3]._padding_;
      }
    }
    pFVar7 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_2);
    if (pFVar7 != (FImplicitObject *)0x0) {
      iVar10 = 1;
      uVar4 = FImplicitObject::GetType(pFVar7);
      if ((uVar4 == '\x05') || (uVar4 == '\x0f')) {
        iVar10 = (int)pFVar7[3]._padding_;
      }
    }
    pTVar8 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_1);
    iVar2 = pTVar8->ArrayNum;
    pTVar8 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_2);
    if ((CVars::Chaos_Collision_MidPhase_MaxShapePairs < 1) ||
       (iVar10 * iVar11 <= CVars::Chaos_Collision_MidPhase_MaxShapePairs)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((iVar2 < iVar11) || (pTVar8->ArrayNum < iVar10)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((!bVar5) && (!bVar6)) {
      if (CVars::ChaosOneWayInteractionPairCollisionMode == 2) {
        local_res18.MHandle = param_1;
        bVar5 = FGenericParticleHandleImp::OneWayInteraction(&local_res18);
        local_res18.MHandle = param_2;
        bVar6 = FGenericParticleHandleImp::OneWayInteraction(&local_res18);
        if ((bVar5) && (bVar6)) {
          pFVar9 = ::operator_new(200);
          if (pFVar9 == (FParticlePairMidPhase *)0x0) {
            return (FParticlePairMidPhase *)0x0;
          }
          pFVar9->MidPhaseType = SphereApproximation;
          (pFVar9->Flags).Bits = 0;
          pFVar9->Particle0 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          pFVar9->Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          pFVar9->CullDistanceScale = 1.0;
          (pFVar9->ParticlePairKey).Key.Key64 = 0;
          pFVar9->LastUsedEpoch = -1;
          pFVar9->NumActiveConstraints = 0;
          pFVar9->ParticleCollisionsIndex0 = -1;
          pFVar9->ParticleCollisionsIndex1 = -1;
          local_48[0]._16_8_ = 0;
          pFVar9->_padding_ = (longlong)&___7FSphereApproximationParticlePairMidPhase_Chaos__6B_;
          local_48[0]._0_8_ = 0;
          local_48[0]._8_8_ = 0;
          TSphere<double,3>::TSphere<double,3>((TSphere<double,3> *)(pFVar9 + 1),local_48,0.0);
          local_48[0]._16_8_ = 0;
          local_48[0]._0_8_ = 0;
          local_48[0]._8_8_ = 0;
          TSphere<double,3>::TSphere<double,3>
                    ((TSphere<double,3> *)&pFVar9[1].LastUsedEpoch,local_48,0.0);
          *(undefined8 *)&pFVar9[2].CullDistanceScale = 0;
          pFVar9[2].ParticlePairKey.Key.Key64 = 0;
          pFVar9[2].LastUsedEpoch = 0;
          pFVar9[2].NumActiveConstraints = 0;
          pFVar9[2].ParticleCollisionsIndex0 = 0;
          pFVar9[2].ParticleCollisionsIndex1 = 0;
          *(undefined4 *)&pFVar9[3]._padding_ = 0xffffffff;
          *(undefined1 *)((longlong)&pFVar9[3]._padding_ + 4) = 0;
          return pFVar9;
        }
      }
      pFVar9 = ::operator_new(0xa8);
      if (pFVar9 == (FParticlePairMidPhase *)0x0) {
        return (FParticlePairMidPhase *)0x0;
      }
      pFVar9->MidPhaseType = ShapePair;
      pFVar9->_padding_ = (longlong)&___7FShapePairParticlePairMidPhase_Chaos__6B_;
      (pFVar9->Flags).Bits = 0;
      pFVar9->Particle0 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      pFVar9->Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      pFVar9->CullDistanceScale = 1.0;
      (pFVar9->ParticlePairKey).Key.Key64 = 0;
      pFVar9->LastUsedEpoch = -1;
      pFVar9->NumActiveConstraints = 0;
      pFVar9->ParticleCollisionsIndex0 = -1;
      pFVar9->ParticleCollisionsIndex1 = -1;
      pFVar9[2].Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      pFVar9[2].CullDistanceScale = 0.0;
      *(undefined4 *)&pFVar9[2].field_0x24 = 1;
      return pFVar9;
    }
  }
  pFVar9 = ::operator_new(0xa0);
  if (pFVar9 == (FParticlePairMidPhase *)0x0) {
    return (FParticlePairMidPhase *)0x0;
  }
  pFVar9->MidPhaseType = Generic;
  pFVar9->_padding_ = (longlong)&___7FGenericParticlePairMidPhase_Chaos__6B_;
  (pFVar9->Flags).Bits = 0;
  pFVar9->Particle0 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pFVar9->Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pFVar9->CullDistanceScale = 1.0;
  (pFVar9->ParticlePairKey).Key.Key64 = 0;
  pFVar9->LastUsedEpoch = -1;
  pFVar9->NumActiveConstraints = 0;
  pFVar9->ParticleCollisionsIndex0 = -1;
  pFVar9->ParticleCollisionsIndex1 = -1;
  pFVar9[1]._padding_ = 0;
  pFVar9[1].MidPhaseType = Generic;
  pFVar9[1].field_0x9 = 0;
  pFVar9[1].Flags = (FFlags)0x0;
  *(undefined4 *)&pFVar9[1].field_0xc = 0;
  *(undefined8 *)&pFVar9[1].CullDistanceScale = 0;
  pFVar3 = &pFVar9[1].ParticlePairKey.Key;
  pFVar3.Key31 = 0;
  pFVar9[1].ParticlePairKey.IsLocal = 0;
  pFVar1 = pFVar9[1].ParticlePairKey.Key.Key32s + 1;
  pFVar1->Key31 = 0x80;
  pFVar1->IsLocal = 0;
  pFVar9[1].LastUsedEpoch = -1;
  pFVar9[1].NumActiveConstraints = 0;
  pFVar9[2]._padding_ = 0;
  pFVar9[2].MidPhaseType = Generic;
  pFVar9[2].field_0x9 = 0;
  pFVar9[2].Flags = (FFlags)0x0;
  pFVar9[2].Particle0 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pFVar9[2].Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  return pFVar9;
}

// Reset @ 1439dd8e0

void __thiscall Chaos::FParticlePairMidPhase::Reset(FParticlePairMidPhase *this)

{
  (this->Flags).Bits = (this->Flags).Bits & 0xfe29 | 0x21;
                    /* WARNING: Could not recover jumptable at 0x0001439dd8f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// ResetModifications @ 1439ddbc0

void __thiscall Chaos::FParticlePairMidPhase::ResetModifications(FParticlePairMidPhase *this)

{
  ushort uVar1;
  
  uVar1 = (this->Flags).Bits;
  if ((uVar1 >> 8 & 1) != 0) {
    (this->Flags).Bits = ((uVar1 & 2) * 2 ^ (uVar1 & 0xfffb | 1)) & 0xfeff | 0x20;
  }
  return;
}

// SetConvexOptimizationIsActive @ 1439de580

void __thiscall
Chaos::FParticlePairMidPhase::SetConvexOptimizationIsActive
          (FParticlePairMidPhase *this,bool param_1,
          TFunctionRef<void___cdecl(Chaos::FPBDCollisionConstraint_*)> *param_2)

{
  return;
}

// SetIsSleeping @ 1439de6a0

void __thiscall
Chaos::FParticlePairMidPhase::SetIsSleeping(FParticlePairMidPhase *this,bool param_1,int param_2)

{
  if (((this->Flags).Bits >> 7 & 1) != (ushort)param_1) {
    if ((!param_1) && (this->LastUsedEpoch < param_2)) {
      (**(code **)(this->_padding_ + 0x28))(this,param_2);
      this->LastUsedEpoch = param_2;
    }
    (this->Flags).Bits = (this->Flags).Bits & 0xff7f;
    (this->Flags).Bits = (this->Flags).Bits | (ushort)param_1 << 7;
  }
  return;
}

// SetParticleCollisionsIndex @ 1439def60

void __thiscall
Chaos::FParticlePairMidPhase::SetParticleCollisionsIndex
          (FParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != this->Particle0) && (param_1 != this->Particle1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InParticle == Particle0) || (InParticle == Particle1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\ParticlePairMidPhase.h"
                       ,0x146,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == this->Particle0) {
    this->ParticleCollisionsIndex0 = param_2;
    return;
  }
  this->ParticleCollisionsIndex1 = param_2;
  return;
}

// ShouldEnableCCDSweep @ 1439df0a0

bool __thiscall
Chaos::FParticlePairMidPhase::ShouldEnableCCDSweep(FParticlePairMidPhase *this,double param_1)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  bool bVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double local_res8;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48 [24];
  TVector<double,3> local_30;
  
  if ((*(byte *)&this->Flags & 4) == 0) {
    bVar2 = false;
  }
  else {
    pTVar1 = this->Particle1;
    local_res8 = 0.0;
    local_30._16_8_ = 0;
    local_30._0_8_ = 0;
    local_30._8_8_ = 0;
    pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&this->Particle0->_padding_ + 4) != '\0') {
      pTVar3 = this->Particle0;
    }
    if (pTVar3 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      uVar6 = FGenericParticleHandleImp::ZeroVector._0_4_;
      uVar7 = FGenericParticleHandleImp::ZeroVector._4_4_;
      local_70 = FGenericParticleHandleImp::ZeroVector._8_8_;
      local_48._16_8_ = FGenericParticleHandleImp::ZeroVector._16_8_;
      local_58 = local_70;
      uVar4 = uVar6;
      uVar5 = uVar7;
    }
    else {
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                 (TVector<double,3> *)local_48,(int)pTVar3->_padding_);
      uVar6 = local_48._0_4_;
      uVar7 = local_48._4_4_;
      local_70 = FGenericParticleHandleImp::ZeroVector._8_8_;
      local_58 = local_48._8_8_;
      uVar4 = FGenericParticleHandleImp::ZeroVector._0_4_;
      uVar5 = FGenericParticleHandleImp::ZeroVector._4_4_;
    }
    local_60 = (double)CONCAT44(uVar7,uVar6) * param_1;
    local_58 = local_58 * param_1;
    local_50 = (double)local_48._16_8_ * param_1;
    pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&pTVar1->_padding_ + 4) != '\0') {
      pTVar3 = pTVar1;
    }
    if (pTVar3 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      local_48._16_8_ = FGenericParticleHandleImp::ZeroVector._16_8_;
    }
    else {
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                 (TVector<double,3> *)local_48,(int)pTVar3->_padding_);
      uVar4 = local_48._0_4_;
      uVar5 = local_48._4_4_;
      local_70 = local_48._8_8_;
    }
    local_78 = (double)CONCAT44(uVar5,uVar4) * param_1;
    local_70 = local_70 * param_1;
    local_68 = (double)local_48._16_8_ * param_1;
    bVar2 = Collisions::ShouldUseCCD
                      (this->Particle0,(TVector<double,3> *)&local_60,this->Particle1,
                       (TVector<double,3> *)&local_78,&local_30,&local_res8);
  }
  return bVar2;
}

// operator() @ 1504a3fc0

bool __thiscall
`Chaos::FParticlePairMidPhase::GenerateCollisions'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6000059167799245830>);
  if (bVar2) {
    Chaos::FGenericParticleHandleImp::GetDebugName
              (*(FGenericParticleHandleImp **)((longlong)this + 8));
    Chaos::FGenericParticleHandleImp::GetDebugName(*(FGenericParticleHandleImp **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6000059167799245830>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

