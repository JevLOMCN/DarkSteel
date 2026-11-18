// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetCollisionAccumulatedImpulse @ 1482866c0

TVector<double,3> * __thiscall
ImmediatePhysics_Chaos::FSimulation::FCollisionData::GetCollisionAccumulatedImpulse
          (FCollisionData *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  FPBDCollisionConstraint *pFVar3;
  
  pFVar3 = this->Collision;
  fVar1 = *(float *)&(pFVar3->AccumulatedImpulse).field_0x4;
  *(double *)__return_storage_ptr__ = (double)*(float *)&pFVar3->AccumulatedImpulse;
  fVar2 = *(float *)&(pFVar3->AccumulatedImpulse).field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetManifoldPointData @ 148289f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ImmediatePhysics_Chaos::FSimulation::FCollisionData::GetManifoldPointData
          (FCollisionData *this,int param_1,float *param_2,TVector<double,3> *param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5)

{
  int iVar1;
  FPBDCollisionConstraint *pFVar2;
  FConstGenericParticleHandle FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  FManifoldPoint *pFVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  double dStack_2c0;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  pFVar15 = Chaos::FPBDCollisionConstraint::GetManifoldPoint(this->Collision,param_1);
  pFVar2 = this->Collision;
  *param_2 = pFVar15->InitialPhi;
  FVar3.Imp.MHandle = (FGenericParticleHandleImp)pFVar2->Particle[1];
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  GetActorWorldTransform<Chaos::FConstGenericParticleHandle>
            ((TRigidTransform<double,3> *)&local_158,
             (FConstGenericParticleHandle)pFVar2->Particle[0]);
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  GetActorWorldTransform<Chaos::FConstGenericParticleHandle>
            ((TRigidTransform<double,3> *)&local_1b8,FVar3);
  pFVar15 = Chaos::FPBDCollisionConstraint::GetManifoldPoint(this->Collision,param_1);
  pFVar2 = this->Collision;
  if (((pFVar2->ManifoldPoints).ArrayNum <= param_1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("PointIndex < NumManifoldPoints()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                          ,0x232,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (pFVar2->ManifoldPointResults).ArrayNum;
  if (param_1 < iVar1) {
    if ((param_1 < 0) &&
       (local_2d8 = (longlong)param_1, local_2d0 = (longlong)iVar1,
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) <
            `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
            ::__l12::_thread_safe_static_guard_0__) &&
          (_Init_thread_header(&`public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                                ::__l12::_thread_safe_static_guard_0__),
          `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
          ::__l12::_thread_safe_static_guard_0__ == -1)) {
    `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
    ::__l12::ZeroResult.bInsideStaticFrictionCone = '\0';
    `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
    ::__l12::ZeroResult.bIsValid = '\0';
    `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
    ::__l12::ZeroResult.NetImpulse._4_8_ = 0;
    `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
    ::__l12::ZeroResult.NetPushOut._0_8_ = 0;
    `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
    ::__l12::ZeroResult.NetPushOut._8_4_ = 0;
    `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
    ::__l12::ZeroResult.NetImpulse._0_4_ = 0;
    _Init_thread_footer(&`public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                         ::__l12::_thread_safe_static_guard_0__);
  }
  local_218.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_218.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_218.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_218.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_218.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_218.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_218,(TTransform<double> *)(this->Collision->ImplicitTransform + 1),&local_1b8);
  local_278.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_278.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_278.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_278.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_278.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_278.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_278.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_278,(TTransform<double> *)this->Collision->ImplicitTransform,&local_158);
  auVar42._0_8_ = (double)*(float *)&(pFVar15->ContactPoint).ShapeContactNormal.field_0x8;
  auVar42._8_8_ = 0;
  dVar37 = (double)*(float *)&(pFVar15->ContactPoint).ShapeContactNormal;
  dVar29 = (double)*(float *)&(pFVar15->ContactPoint).ShapeContactNormal.field_0x4;
  dVar12 = local_218.Rotation.ZW.m128d_f64[0];
  dVar11 = local_218.Rotation.XY.m128d_f64[1];
  auVar38._8_4_ = SUB84(dVar29,0);
  auVar38._0_8_ = dVar37;
  uVar36 = (undefined4)((ulonglong)dVar29 >> 0x20);
  auVar38._12_4_ = uVar36;
  dVar13 = local_218.Rotation.ZW.m128d_f64[1];
  dVar10 = local_218.Rotation.XY.m128d_f64[0];
  auVar16._8_4_ = SUB84(dVar29,0);
  auVar16._0_8_ = dVar37;
  auVar16._12_4_ = uVar36;
  auVar7._8_4_ = local_218.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar7._0_8_ = dVar13;
  auVar7._12_4_ = local_218.Rotation.ZW.m128d_f64[1]._4_4_;
  auVar39._0_8_ = auVar38._8_8_ * dVar10 - dVar37 * dVar11;
  auVar39._8_8_ = auVar42._0_8_ * dVar11 - dVar29 * dVar12;
  auVar17 = blendpd(auVar16,auVar42,2);
  auVar51 = blendpd((undefined1  [16])local_218.Rotation.XY.m128d_f64,
                    (undefined1  [16])local_218.Rotation.ZW.m128d_f64,2);
  dVar50 = auVar51._0_8_;
  dVar52 = auVar51._8_8_;
  auVar18._0_8_ = auVar17._0_8_ * dVar12 - auVar42._0_8_ * dVar50;
  auVar18._8_8_ = auVar17._8_8_ * dVar13 - dVar52 * 0.0;
  dVar5 = auVar39._8_8_ + auVar39._8_8_;
  dVar6 = auVar18._0_8_ + auVar18._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar17 = blendpd(auVar39,auVar18,2);
  auVar40._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar40._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  auVar30._8_4_ = SUB84(dVar6,0);
  auVar30._0_8_ = dVar5;
  auVar30._12_4_ = uVar36;
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar5;
  auVar19._12_4_ = uVar36;
  auVar17 = blendpd(auVar19,auVar40,2);
  auVar31._0_8_ = auVar30._8_8_ * dVar10 - dVar5 * dVar11;
  auVar31._8_8_ = auVar40._0_8_ * dVar11 - dVar6 * dVar12;
  auVar20._0_8_ = auVar17._0_8_ * dVar12 - auVar40._0_8_ * dVar50;
  auVar20._8_8_ = auVar17._8_8_ * dVar13 - auVar40._8_8_ * dVar52;
  auVar51 = blendpd(auVar31,auVar20,2);
  dVar6 = dVar6 * dVar13 + dVar29 + auVar20._0_8_;
  auVar17._8_4_ = SUB84(dVar6,0);
  auVar17._0_8_ = dVar5 * dVar13 + dVar37 + auVar31._8_8_;
  auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar17;
  *(double *)&param_3->field_0x10 = auVar40._0_8_ * dVar13 + auVar42._0_8_ + auVar51._0_8_;
  dVar29 = local_278.Rotation.XY.m128d_f64[1];
  local_278.Scale3D.XY.m128d_f64[0] =
       (double)*(float *)(pFVar15->ContactPoint).ShapeContactPoints *
       local_278.Scale3D.XY.m128d_f64[0];
  local_278.Scale3D.XY.m128d_f64[1] =
       (double)*(float *)&(pFVar15->ContactPoint).ShapeContactPoints[0].field_0x4 *
       local_278.Scale3D.XY.m128d_f64[1];
  uVar36 = (undefined4)((ulonglong)local_278.Scale3D.XY.m128d_f64[1] >> 0x20);
  local_278.Scale3D.ZW.m128d_f64[0] =
       (double)*(float *)&(pFVar15->ContactPoint).ShapeContactPoints[0].field_0x8 *
       local_278.Scale3D.ZW.m128d_f64[0];
  local_278.Scale3D.ZW.m128d_f64[1] = local_278.Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar37 = local_278.Rotation.ZW.m128d_f64[0];
  dVar46 = local_278.Rotation.ZW.m128d_f64[1];
  auVar47._8_4_ = SUB84(local_278.Scale3D.XY.m128d_f64[1],0);
  auVar47._0_8_ = local_278.Scale3D.XY.m128d_f64[0];
  auVar47._12_4_ = uVar36;
  auVar51 = blendpd((undefined1  [16])local_278.Rotation.XY.m128d_f64,
                    (undefined1  [16])local_278.Rotation.ZW.m128d_f64,2);
  auVar48._0_8_ =
       auVar47._8_8_ * local_278.Rotation.XY.m128d_f64[0] -
       dVar29 * local_278.Scale3D.XY.m128d_f64[0];
  auVar48._8_8_ =
       local_278.Scale3D.ZW.m128d_f64[0] * dVar29 - dVar37 * local_278.Scale3D.XY.m128d_f64[1];
  auVar21._8_4_ = SUB84(local_278.Scale3D.XY.m128d_f64[1],0);
  auVar21._0_8_ = local_278.Scale3D.XY.m128d_f64[0];
  auVar21._12_4_ = uVar36;
  auVar9._8_4_ = SUB84(local_278.Scale3D.ZW.m128d_f64[1],0);
  auVar9._0_8_ = local_278.Scale3D.ZW.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)local_278.Scale3D.ZW.m128d_f64[1] >> 0x20);
  auVar17 = blendpd(auVar21,auVar9,2);
  auVar22._0_8_ = auVar17._0_8_ * dVar37 - auVar51._0_8_ * local_278.Scale3D.ZW.m128d_f64[0];
  auVar22._8_8_ = auVar17._8_8_ * dVar46 - auVar51._8_8_ * local_278.Scale3D.ZW.m128d_f64[1];
  auVar17 = blendpd(auVar48,auVar22,2);
  dVar5 = auVar48._8_8_ + auVar48._8_8_;
  dVar6 = auVar22._0_8_ + auVar22._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar49._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar49._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  auVar32._8_4_ = SUB84(dVar6,0);
  auVar32._0_8_ = dVar5;
  auVar32._12_4_ = uVar36;
  auVar23._8_4_ = SUB84(dVar6,0);
  auVar23._0_8_ = dVar5;
  auVar23._12_4_ = uVar36;
  auVar17 = blendpd(auVar23,auVar49,2);
  auVar33._0_8_ = auVar32._8_8_ * local_278.Rotation.XY.m128d_f64[0] - dVar5 * dVar29;
  auVar33._8_8_ = auVar49._0_8_ * dVar29 - dVar6 * dVar37;
  auVar24._0_8_ = auVar17._0_8_ * dVar37 - auVar49._0_8_ * auVar51._0_8_;
  auVar24._8_8_ = auVar17._8_8_ * dVar46 - auVar49._8_8_ * auVar51._8_8_;
  auVar17 = blendpd(auVar33,auVar24,2);
  local_278.Translation.XY.m128d_f64[1] =
       dVar6 * dVar46 + local_278.Scale3D.XY.m128d_f64[1] + auVar24._0_8_ +
       local_278.Translation.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(local_278.Translation.XY.m128d_f64[1],0);
  auVar8._0_8_ = dVar5 * dVar46 + local_278.Scale3D.XY.m128d_f64[0] + auVar33._8_8_ +
                 local_278.Translation.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)local_278.Translation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])param_4 = auVar8;
  *(double *)&param_4->field_0x10 =
       auVar49._0_8_ * dVar46 + local_278.Scale3D.ZW.m128d_f64[0] + auVar17._0_8_ +
       local_278.Translation.ZW.m128d_f64[0];
  local_218.Scale3D.XY.m128d_f64[0] =
       (double)*(float *)((pFVar15->ContactPoint).ShapeContactPoints + 1) *
       local_218.Scale3D.XY.m128d_f64[0];
  local_218.Scale3D.XY.m128d_f64[1] =
       (double)*(float *)&(pFVar15->ContactPoint).ShapeContactPoints[1].field_0x4 *
       local_218.Scale3D.XY.m128d_f64[1];
  auVar41._0_8_ =
       (double)*(float *)&(pFVar15->ContactPoint).ShapeContactPoints[1].field_0x8 *
       local_218.Scale3D.ZW.m128d_f64[0];
  auVar41._8_8_ = local_218.Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar43._8_4_ = SUB84(local_218.Scale3D.XY.m128d_f64[1],0);
  auVar43._0_8_ = local_218.Scale3D.XY.m128d_f64[0];
  uVar36 = (undefined4)((ulonglong)local_218.Scale3D.XY.m128d_f64[1] >> 0x20);
  auVar43._12_4_ = uVar36;
  auVar25._8_4_ = SUB84(local_218.Scale3D.XY.m128d_f64[1],0);
  auVar25._0_8_ = local_218.Scale3D.XY.m128d_f64[0];
  auVar25._12_4_ = uVar36;
  auVar17 = blendpd(auVar25,auVar41,2);
  auVar44._0_8_ = auVar43._8_8_ * dVar10 - local_218.Scale3D.XY.m128d_f64[0] * dVar11;
  auVar44._8_8_ = auVar41._0_8_ * dVar11 - local_218.Scale3D.XY.m128d_f64[1] * dVar12;
  auVar26._0_8_ = auVar17._0_8_ * dVar12 - auVar41._0_8_ * dVar50;
  auVar26._8_8_ = auVar17._8_8_ * dVar13 - auVar41._8_8_ * dVar52;
  auVar17 = blendpd(auVar44,auVar26,2);
  dVar5 = auVar44._8_8_ + auVar44._8_8_;
  dVar6 = auVar26._0_8_ + auVar26._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar45._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar45._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  auVar34._8_4_ = SUB84(dVar6,0);
  auVar34._0_8_ = dVar5;
  auVar34._12_4_ = uVar36;
  auVar27._8_4_ = SUB84(dVar6,0);
  auVar27._0_8_ = dVar5;
  auVar27._12_4_ = uVar36;
  dStack_2c0 = auVar7._8_8_;
  auVar17 = blendpd(auVar27,auVar45,2);
  auVar35._0_8_ = auVar34._8_8_ * dVar10 - dVar5 * dVar11;
  auVar35._8_8_ = auVar45._0_8_ * dVar11 - dVar6 * dVar12;
  auVar28._0_8_ = auVar17._0_8_ * dVar12 - auVar45._0_8_ * dVar50;
  auVar28._8_8_ = auVar17._8_8_ * dVar13 - auVar45._8_8_ * dVar52;
  auVar17 = blendpd(auVar35,auVar28,2);
  local_218.Translation.XY.m128d_f64[1] =
       dVar6 * dStack_2c0 + local_218.Scale3D.XY.m128d_f64[1] + auVar28._0_8_ +
       local_218.Translation.XY.m128d_f64[1];
  auVar51._8_4_ = SUB84(local_218.Translation.XY.m128d_f64[1],0);
  auVar51._0_8_ =
       dVar5 * dVar13 + local_218.Scale3D.XY.m128d_f64[0] + auVar35._8_8_ +
       local_218.Translation.XY.m128d_f64[0];
  auVar51._12_4_ = (int)((ulonglong)local_218.Translation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])param_5 = auVar51;
  *(double *)&param_5->field_0x10 =
       auVar45._0_8_ * dVar13 + auVar41._0_8_ + auVar17._0_8_ +
       local_218.Translation.ZW.m128d_f64[0];
  return;
}

// GetNumManifoldPoints @ 14828b3a0

int __thiscall
ImmediatePhysics_Chaos::FSimulation::FCollisionData::GetNumManifoldPoints(FCollisionData *this)

{
  return (this->Collision->ManifoldPoints).ArrayNum;
}

