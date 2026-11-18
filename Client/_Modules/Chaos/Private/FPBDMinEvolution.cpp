// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// FPBDMinEvolution @ 143afa440

FPBDMinEvolution * __thiscall
Chaos::FPBDMinEvolution::FPBDMinEvolution
          (FPBDMinEvolution *this,FPBDRigidsSOAs *param_1,
          TArrayCollectionArray<Chaos::TVector<double,3>_> *param_2,
          TArrayCollectionArray<Chaos::TRotation<double,3>_> *param_3,
          FBasicCollisionDetector *param_4)

{
  this->CollisionDetector = param_4;
  this->Particles = param_1;
  this->ParticlePrevXs = param_2;
  this->ParticlePrevRs = param_3;
  (this->ConstraintContainers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintContainers).ArrayNum = 0;
  (this->ConstraintContainers).ArrayMax = 0;
  *(undefined ***)&this->ConstraintSolver = &___7FPBDConstraintGroupSolver_Private_Chaos__6B_;
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *)
             &(this->ConstraintSolver).field_0x8,0);
  *(undefined8 *)&(this->ConstraintSolver).field_0x28 = 0;
  *(undefined8 *)&(this->ConstraintSolver).field_0x38 = 0;
  *(undefined8 *)&(this->ConstraintSolver).field_0x20 = 0;
  *(undefined8 *)&(this->ConstraintSolver).field_0x30 = 0;
  *(undefined8 *)&(this->ConstraintSolver).field_0x50 = 0;
  *(undefined4 *)&(this->ConstraintSolver).field_0x58 = 0;
  *(undefined4 *)&(this->ConstraintSolver).field_0x5c = 0x80;
  *(undefined4 *)&(this->ConstraintSolver).field_0x64 = 0;
  *(undefined4 *)&(this->ConstraintSolver).field_0x60 = 0xffffffff;
  *(undefined8 *)&(this->ConstraintSolver).field_0x70 = 0;
  *(undefined4 *)&(this->ConstraintSolver).field_0x78 = 0;
  (this->ConstraintSolver).field_0x80 = 1;
  *(undefined ***)&this->ConstraintSolver = &___7FPBDSceneConstraintGroupSolver_Private_Chaos__6B_;
  *(undefined8 *)&(this->ConstraintSolver).field_0x90 = 0;
  *(undefined4 *)&(this->ConstraintSolver).field_0x98 = 0;
  *(undefined8 *)&(this->ConstraintSolver).field_0xa8 = 0;
  *(undefined2 *)&(this->ConstraintSolver).field_0xb0 = 0;
  (this->ConstraintSolver).field_0xb2 = 0;
  *(undefined8 *)&(this->ConstraintSolver).field_0x88 = 0;
  *(undefined8 *)&(this->ConstraintSolver).field_0xa0 = 0;
  (this->SimulationSpaceSettings).LinearAccelerationAlpha = 1.0;
  (this->SimulationSpaceSettings).CoriolisAlpha = 1.0;
  (this->SimulationSpaceSettings).CentrifugalAlpha = 1.0;
  (this->SimulationSpaceSettings).EulerAlpha = 1.0;
  (this->SimulationSpaceSettings).AngularAccelerationAlpha = 1.0;
  (this->SimulationSpaceSettings).LinearVelocityAlpha = 1.0;
  (this->SimulationSpaceSettings).AngularVelocityAlpha = 1.0;
  *(undefined8 *)&this->Gravity = 0;
  *(undefined8 *)&(this->Gravity).field_0x8 = 0;
  *(undefined8 *)&(this->Gravity).field_0x10 = 0;
  (this->SimulationSpaceSettings).MasterAlpha = 0.0;
  (this->SimulationSpaceSettings).Alpha = 0.0;
  (this->SimulationSpaceSettings).bEnabled = false;
  *(undefined8 *)&(this->SimulationSpaceSettings).ExternalLinearEtherDrag = 0;
  *(undefined8 *)&(this->SimulationSpaceSettings).ExternalLinearEtherDrag.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpaceSettings).ExternalLinearEtherDrag.field_0x10 = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearAcceleration = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearAcceleration.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearAcceleration.field_0x10 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularAcceleration = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularAcceleration.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularAcceleration.field_0x10 = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearVelocity = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearVelocity.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearVelocity.field_0x10 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularVelocity = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularVelocity.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularVelocity.field_0x10 = 0;
  this->bRewindVelocities = false;
  return this;
}

// ~FPBDMinEvolution @ 143afd690

void __thiscall Chaos::FPBDMinEvolution::~FPBDMinEvolution(FPBDMinEvolution *this)

{
  FScriptContainerElement *pFVar1;
  
  Chaos::Private::FPBDConstraintGroupSolver::~FPBDConstraintGroupSolver
            ((FPBDConstraintGroupSolver *)&this->ConstraintSolver);
  pFVar1 = (this->ConstraintContainers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143b02540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>::operator()
          (void *this,TPBDRigidParticleHandleImp<double,3,0> *param_1,int param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  EKinematicTargetMode EVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  EObjectStateType EVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FKinematicTarget *pFVar18;
  TVector<double,3> *pTVar19;
  TRotation<float,3> *pTVar20;
  TQuat<float> *pTVar21;
  TRotation<double,3> *pTVar22;
  uint uVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  double dVar30;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStack_438 [32];
  longlong local_418;
  longlong local_410;
  TQuat<float> local_408;
  undefined1 local_3f8 [16];
  double local_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  TVector<float,3> local_3c8;
  TVector<float,3> local_3bc;
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  TVector<float,3> local_3a0;
  TVector<float,3> local_394;
  double local_388;
  double dStack_380;
  double local_378;
  TVector<double,3> local_370;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  TVector<double,3> local_308;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  TQuat<float> local_2a8;
  TVector<double,3> local_298;
  TVector<double,3> local_280;
  TVector<double,3> local_268;
  double local_250;
  double dStack_248;
  double local_240;
  TVector<double,3> local_238;
  TRotation<float,3> local_218;
  TRotation<float,3> local_208;
  TQuat<float> local_1f8;
  TRotation<double,3> local_1e8;
  TRotation<double,3> local_1c8;
  TRigidTransform<double,3> local_1a8;
  TRigidTransform<double,3> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_438;
  EVar13 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState(param_1);
  if (EVar13 == Kinematic) {
    pFVar18 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)&param_1->field_0x8);
    pTVar19 = Chaos::TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    uVar17 = *(uint *)&param_1->field_0x8;
    lVar24 = (longlong)(int)uVar17;
    lVar7 = *(longlong *)param_1;
    local_3e0 = *(double *)pTVar19;
    dStack_3d8 = *(double *)&pTVar19->field_0x8;
    local_3d0 = *(double *)&pTVar19->field_0x10;
    iVar5 = *(int *)(lVar7 + 0x50);
    uVar23 = 0;
    if ((int)uVar17 < iVar5) {
      uVar23 = ~uVar17 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (local_418 = lVar24, local_410 = (longlong)iVar5,
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x48);
    bVar14 = false;
    local_408.Y = *(float *)(lVar7 + 4 + lVar24 * 0x10);
    local_408.Z = *(float *)(lVar7 + 8 + lVar24 * 0x10);
    local_408.W = *(float *)(lVar7 + 0xc + lVar24 * 0x10);
    local_408.X = *(float *)(lVar7 + lVar24 * 0x10);
    EVar6 = pFVar18->Mode;
    uVar17 = 0;
    if (EVar6 == Reset) {
      local_3c8._0_8_ = 0;
      local_3c8._8_4_ = 0;
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetVf
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8
                 ,&local_3c8);
      local_3bc._0_8_ = 0;
      local_3bc._8_4_ = 0;
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetWf
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8
                 ,&local_3bc);
      pFVar18->Mode = None;
    }
    else if (EVar6 == Position) {
      if (*(char *)((longlong)this + 0x10) == '\0') {
        dVar26 = *(double *)((longlong)this + 8);
        local_250 = *(double *)&pFVar18->Position;
        dStack_248 = *(double *)&(pFVar18->Position).field_0x8;
        local_240 = *(double *)&(pFVar18->Position).field_0x10;
        uVar42 = SUB84(local_3e0,0);
        uVar43 = (undefined4)((ulonglong)local_3e0 >> 0x20);
        uVar40 = SUB84(dStack_3d8,0);
        uVar41 = (undefined4)((ulonglong)dStack_3d8 >> 0x20);
        uVar38 = SUB84(local_3d0,0);
        uVar39 = (undefined4)((ulonglong)local_3d0 >> 0x20);
        dVar2 = (local_250 - local_3e0) * dVar26 + local_3e0;
        dVar25 = (dStack_248 - dStack_3d8) * dVar26 + dStack_3d8;
        dVar3 = (local_240 - local_3d0) * dVar26 + local_3d0;
        local_3f8._8_8_ = dVar25;
        local_3f8._0_8_ = dVar2;
        local_3e8 = dVar3;
        if ((pFVar18->Mode != Position) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mode == EKinematicTargetMode::Position",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                                ,0x4f,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_2a8.X = *(float *)&(pFVar18->Rotation).field_0x0;
        local_2a8.Y = *(float *)&(pFVar18->Rotation).field_0x4;
        local_2a8.Z = *(float *)&(pFVar18->Rotation).field_0x8;
        local_2a8.W = *(float *)&(pFVar18->Rotation).field_0xc;
        pTVar21 = UE::Math::TQuat<float>::Slerp_NotNormalized
                            (&local_1f8,&local_408,&local_2a8,(float)dVar26);
        local_3f8._8_4_ = SUB84(dVar25,0);
        local_3f8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        fVar35 = pTVar21->X;
        fVar36 = pTVar21->Y;
        fVar37 = pTVar21->Z;
        fVar9 = pTVar21->W;
        fVar29 = fVar36 * fVar36 + fVar35 * fVar35;
        fVar31 = fVar35 * fVar35 + fVar36 * fVar36;
        fVar32 = fVar9 * fVar9 + fVar37 * fVar37;
        fVar33 = fVar37 * fVar37 + fVar9 * fVar9;
        auVar27._0_4_ = fVar32 + fVar29;
        auVar27._4_4_ = fVar33 + fVar31;
        auVar27._8_4_ = fVar29 + fVar32;
        auVar27._12_4_ = fVar31 + fVar33;
        auVar28 = sqrtps(auVar27,auVar27);
        auVar28 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar28);
        fVar35 = (float)((uint)(auVar28._0_4_ * fVar35) &
                         -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar27._0_4_) |
                        ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar27._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]);
        fVar36 = (float)((uint)(auVar28._4_4_ * fVar36) & -(uint)(_UNK_1506895d4 <= auVar27._4_4_) |
                        ~-(uint)(_UNK_1506895d4 <= auVar27._4_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[1]);
        fVar37 = (float)((uint)(auVar28._8_4_ * fVar37) & -(uint)(_UNK_1506895d8 <= auVar27._8_4_) |
                        ~-(uint)(_UNK_1506895d8 <= auVar27._8_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[2]);
        local_348 = (float)((uint)(auVar28._12_4_ * fVar9) &
                            -(uint)(_UNK_1506895dc <= auVar27._12_4_) |
                           ~-(uint)(_UNK_1506895dc <= auVar27._12_4_) &
                           GlobalVectorConstants::Float0001.m128_u32[3]);
      }
      else {
        dVar2 = *(double *)&pFVar18->Position;
        dVar25 = *(double *)&(pFVar18->Position).field_0x8;
        local_3f8 = *(undefined1 (*) [16])&pFVar18->Position;
        local_3e8 = *(double *)&(pFVar18->Position).field_0x10;
        if ((pFVar18->Mode != Position) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mode == EKinematicTargetMode::Position",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                                ,0x4f,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar35 = *(float *)&pFVar18->Rotation;
        fVar36 = *(float *)&(pFVar18->Rotation).field_0x4;
        fVar37 = *(float *)&(pFVar18->Rotation).field_0x8;
        local_348 = *(float *)&(pFVar18->Rotation).field_0xc;
        pFVar18->Mode = Reset;
        uVar38 = SUB84(local_3d0,0);
        uVar39 = (undefined4)((ulonglong)local_3d0 >> 0x20);
        uVar40 = SUB84(dStack_3d8,0);
        uVar41 = (undefined4)((ulonglong)dStack_3d8 >> 0x20);
        uVar42 = SUB84(local_3e0,0);
        uVar43 = (undefined4)((ulonglong)local_3e0 >> 0x20);
        dVar3 = local_3e8;
      }
      dVar26 = (double)CONCAT44(uVar43,uVar42) - dVar2;
      dVar34 = (double)CONCAT44(uVar39,uVar38) - dVar3;
      dVar30 = (double)CONCAT44(uVar41,uVar40) - dVar25;
      if (((__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (__real_3e45798ee0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (((__real_38d1b717 <
            (float)((uint)(fVar35 - local_408.X) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
          (__real_38d1b717 <
           (float)((uint)(fVar36 - local_408.Y) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_38d1b717 <
          (float)((uint)(fVar37 - local_408.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((bVar15) || (bVar12)) {
        bVar14 = true;
      }
      dVar26 = *(double *)this;
      local_378 = 0.0;
      local_370._16_8_ = 0;
      local_388 = 0.0;
      dStack_380 = 0.0;
      local_370._0_8_ = 0;
      local_370._8_8_ = 0;
      fStack_344 = local_348;
      fStack_340 = local_348;
      fStack_33c = local_348;
      if (__real_3eb0c6f7a0000000 < dVar26) {
        if (bVar15) {
          dStack_380 = __real_3ff0000000000000 / dVar26;
          local_388 = (dVar2 - (double)CONCAT44(uVar43,uVar42)) * dStack_380;
          local_378 = dStack_380 * (dVar3 - (double)CONCAT44(uVar39,uVar38));
          dStack_380 = dStack_380 * (dVar25 - (double)CONCAT44(uVar41,uVar40));
        }
        if (bVar12) {
          local_2e0 = (double)fVar36;
          local_2e8 = (double)fVar35;
          local_2d0 = (double)local_348;
          local_2d8 = (double)fVar37;
          local_2c0 = (double)local_408.Y;
          local_2c8 = (double)local_408.X;
          local_2b0 = (double)local_408.W;
          local_2b8 = (double)local_408.Z;
          Chaos::TRotation<double,3>::CalculateAngularVelocity1
                    (&local_298,(TRotation<double,3> *)&local_2c8,(TRotation<double,3> *)&local_2e8,
                     dVar26);
          local_370._0_8_ = local_298._0_8_;
          local_370._8_8_ = local_298._8_8_;
          local_370._16_8_ = local_298._16_8_;
        }
      }
      uVar23 = *(uint *)&param_1->field_0x8;
      lVar24 = (longlong)(int)uVar23;
      lVar7 = *(longlong *)param_1;
      iVar5 = *(int *)(lVar7 + 0x30);
      uVar16 = uVar17;
      if ((int)uVar23 < iVar5) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_418 = lVar24, local_410 = (longlong)iVar5,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)(lVar7 + 0x28);
      auVar28._8_4_ = SUB84(dVar25,0);
      auVar28._0_8_ = dVar2;
      auVar28._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + lVar24 * 0x18) = auVar28;
      *(double *)(lVar7 + 0x10 + lVar24 * 0x18) = local_3e8;
      uVar23 = *(uint *)&param_1->field_0x8;
      lVar7 = *(longlong *)param_1;
      iVar5 = *(int *)(lVar7 + 0x50);
      uVar16 = uVar17;
      if ((int)uVar23 < iVar5) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      fStack_3a4 = local_348;
      local_3b0 = fVar35;
      fStack_3ac = fVar36;
      fStack_3a8 = fVar37;
      if ((uVar16 == 0) &&
         (local_418 = (longlong)(int)uVar23, local_410 = (longlong)iVar5,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar23 * 0x10);
      *puVar1 = CONCAT44(fStack_3ac,local_3b0);
      puVar1[1] = CONCAT44(fStack_3a4,fStack_3a8);
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8
                 ,(TVector<double,3> *)&local_388);
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8
                 ,&local_370);
    }
    else if (EVar6 == Velocity) {
      bVar14 = true;
      pTVar19 = Chaos::TParticles<double,3>::GetX
                          (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                 (TVector<double,3> *)&local_338,*(int *)&param_1->field_0x8);
      dVar26 = *(double *)this;
      lVar7 = *(longlong *)param_1;
      iVar5 = *(int *)(lVar7 + 0x30);
      dVar2 = *(double *)&pTVar19->field_0x10;
      dVar3 = *(double *)&pTVar19->field_0x8;
      dVar25 = *(double *)pTVar19;
      uVar23 = *(uint *)&param_1->field_0x8;
      lVar24 = (longlong)(int)uVar23;
      uVar16 = 0;
      if ((int)uVar23 < iVar5) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_418 = lVar24, local_410 = (longlong)iVar5,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)(lVar7 + 0x28);
      *(double *)(lVar7 + lVar24 * 0x18) = dVar26 * local_338 + dVar25;
      *(double *)(lVar7 + 8 + lVar24 * 0x18) = dVar26 * local_330 + dVar3;
      *(double *)(lVar7 + 0x10 + lVar24 * 0x18) = dVar26 * local_328 + dVar2;
      uVar23 = *(uint *)&param_1->field_0x8;
      lVar24 = (longlong)(int)uVar23;
      lVar7 = *(longlong *)param_1;
      dVar26 = *(double *)this;
      iVar5 = *(int *)(lVar7 + 0x2b0);
      uVar16 = uVar17;
      if ((int)uVar23 < iVar5) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_418 = lVar24, local_410 = (longlong)iVar5,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)(lVar7 + 0x2a8);
      local_3a0._0_8_ = *(undefined8 *)(lVar7 + lVar24 * 0xc);
      local_3a0._8_4_ = *(undefined4 *)(lVar7 + 8 + lVar24 * 0xc);
      pTVar20 = Chaos::TGeometryParticleHandleImp<double,3,0>::GetRf
                          ((TGeometryParticleHandleImp<double,3,0> *)param_1,&local_218);
      pTVar20 = Chaos::TRotation<float,3>::IntegrateRotationWithAngularVelocity
                          (&local_208,pTVar20,&local_3a0,(float)dVar26);
      Chaos::TGeometryParticleHandleImp<double,3,0>::SetRf
                ((TGeometryParticleHandleImp<double,3,0> *)param_1,pTVar20,false);
    }
    pTVar19 = Chaos::TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    uVar23 = *(uint *)&param_1->field_0x8;
    lVar24 = (longlong)(int)uVar23;
    lVar7 = *(longlong *)param_1;
    uVar10 = *(undefined8 *)pTVar19;
    uVar11 = *(undefined8 *)&pTVar19->field_0x8;
    uVar4 = *(undefined8 *)&pTVar19->field_0x10;
    iVar5 = *(int *)(lVar7 + 0x550);
    if ((int)uVar23 < iVar5) {
      uVar17 = ~uVar23 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_418 = lVar24, local_410 = (longlong)iVar5,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x548);
    puVar1 = (undefined8 *)(lVar7 + lVar24 * 0x18);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    *(undefined8 *)(lVar7 + 0x10 + lVar24 * 0x18) = uVar4;
    uVar17 = *(uint *)&param_1->field_0x8;
    lVar7 = *(longlong *)param_1;
    iVar5 = *(int *)(lVar7 + 0x50);
    uVar16 = 0;
    uVar23 = uVar16;
    if ((int)uVar17 < iVar5) {
      uVar23 = ~uVar17 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (local_418 = (longlong)(int)uVar17, local_410 = (longlong)iVar5,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar23 = *(uint *)&param_1->field_0x8;
    lVar24 = *(longlong *)param_1;
    puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar17 * 0x10);
    uVar4 = *puVar1;
    uVar10 = puVar1[1];
    iVar5 = *(int *)(lVar24 + 0x568);
    uVar17 = uVar16;
    if ((int)uVar23 < iVar5) {
      uVar17 = ~uVar23 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_418 = (longlong)(int)uVar23, local_410 = (longlong)iVar5,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar24 + 0x560) + (longlong)(int)uVar23 * 0x10);
    *puVar1 = uVar4;
    puVar1[1] = uVar10;
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,&local_238,
               *(int *)&param_1->field_0x8);
    Chaos::TPBDRigidParticles<double,3>::SetPreV
              (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8,&local_238);
    uVar17 = *(uint *)&param_1->field_0x8;
    lVar24 = (longlong)(int)uVar17;
    lVar7 = *(longlong *)param_1;
    iVar5 = *(int *)(lVar7 + 0x2b0);
    uVar23 = uVar16;
    if ((int)uVar17 < iVar5) {
      uVar23 = ~uVar17 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (local_418 = lVar24, local_410 = (longlong)iVar5,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x2a8);
    local_394._0_8_ = *(undefined8 *)(lVar7 + lVar24 * 0xc);
    local_394._8_4_ = *(undefined4 *)(lVar7 + 8 + lVar24 * 0xc);
    Chaos::TPBDRigidParticles<double,3>::SetPreWf
              (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8,&local_394);
    if (bVar14) {
      uVar17 = *(uint *)&param_1->field_0x8;
      lVar7 = *(longlong *)param_1;
      iVar5 = *(int *)(lVar7 + 0x2e0);
      if ((int)uVar17 < iVar5) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_418 = (longlong)(int)uVar17, local_410 = (longlong)iVar5,
         bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(byte *)(*(longlong *)(lVar7 + 0x2d8) + 8 + (longlong)(int)uVar17 * 0x10) >> 1 & 1) == 0
         ) {
        local_280._16_8_ = 0;
        local_280._0_8_ = 0;
        local_280._8_8_ = 0;
        pTVar22 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetQ(param_1,&local_1e8);
        pTVar19 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetP(param_1);
        local_1a8._16_8_ = *(undefined8 *)&pTVar22->field_0x10;
        local_1a8._24_8_ = *(undefined8 *)&pTVar22->field_0x18;
        local_1a8._0_8_ = *(undefined8 *)pTVar22;
        local_1a8._8_8_ = *(undefined8 *)&pTVar22->field_0x8;
        local_1a8._32_8_ = *(undefined8 *)pTVar19;
        local_1a8._40_8_ = *(undefined8 *)&pTVar19->field_0x8;
        local_1a8._48_8_ = *(undefined8 *)&pTVar19->field_0x10;
        local_1a8._80_8_ = ___xmm_00000000000000003ff0000000000000;
        local_1a8._88_8_ = _UNK_150689518;
        local_1a8._56_8_ = 0;
        local_1a8._64_8_ = ___xmm_3ff00000000000003ff0000000000000;
        local_1a8._72_8_ = _UNK_150689688;
        Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                  (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
                   &local_1a8,&local_280);
      }
      else {
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                   (TVector<double,3> *)&local_320,*(int *)&param_1->field_0x8);
        dVar26 = *(double *)this;
        local_308._0_4_ = SUB84(local_320 * dVar26,0) ^ (uint)__xmm_80000000000000008000000000000000
        ;
        local_308._4_4_ =
             (uint)((ulonglong)(local_320 * dVar26) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
        local_308._8_4_ = SUB84(dStack_318 * dVar26,0) ^ _UNK_15066df78;
        local_308._12_4_ = (uint)((ulonglong)(dStack_318 * dVar26) >> 0x20) ^ _UNK_15066df7c;
        local_268._16_8_ = 0;
        local_308._16_4_ =
             SUB84(dVar26 * local_310,0) ^ (uint)__xmm_80000000000000008000000000000000;
        local_308._20_4_ =
             (uint)((ulonglong)(dVar26 * local_310) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
        local_268._0_8_ = 0;
        local_268._8_8_ = 0;
        pTVar22 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetQ(param_1,&local_1c8);
        pTVar19 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetP(param_1);
        local_148._16_8_ = *(undefined8 *)&pTVar22->field_0x10;
        local_148._24_8_ = *(undefined8 *)&pTVar22->field_0x18;
        local_148._0_8_ = *(undefined8 *)pTVar22;
        local_148._8_8_ = *(undefined8 *)&pTVar22->field_0x8;
        local_148._32_8_ = *(undefined8 *)pTVar19;
        local_148._40_8_ = *(undefined8 *)&pTVar19->field_0x8;
        local_148._48_8_ = *(undefined8 *)&pTVar19->field_0x10;
        local_148._80_8_ = ___xmm_00000000000000003ff0000000000000;
        local_148._88_8_ = _UNK_150689518;
        local_148._56_8_ = 0;
        local_148._64_8_ = ___xmm_3ff00000000000003ff0000000000000;
        local_148._72_8_ = _UNK_150689688;
        Chaos::TGeometryParticleHandleImp<double,3,0>::UpdateWorldSpaceStateSwept
                  ((TGeometryParticleHandleImp<double,3,0> *)param_1,&local_148,&local_268,
                   &local_308);
      }
    }
  }
  return;
}

// operator() @ 143b0b920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>::operator()
          (void *this,TKinematicGeometryParticleHandleImp<double,3,0> *param_1,int param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  EKinematicTargetMode EVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  FKinematicTarget *pFVar17;
  TVector<double,3> *pTVar18;
  TRotation<float,3> *pTVar19;
  TQuat<float> *pTVar20;
  uint uVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  double dVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  uint uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  TRotation<float,3> local_278;
  undefined1 local_268 [8];
  float fStack_260;
  uint uStack_25c;
  TQuat<float> local_258;
  undefined1 local_248 [16];
  double local_238;
  double local_230;
  double dStack_228;
  double local_220;
  TVector<float,3> local_218;
  TVector<float,3> local_20c;
  TVector<float,3> local_200;
  TVector<float,3> local_1f4;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  TRotation<float,3> local_1b8;
  TQuat<float> local_1a8;
  TVector<double,3> local_198;
  double local_180;
  double dStack_178;
  double local_170;
  TRotation<float,3> local_168;
  TQuat<float> local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pFVar17 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8);
  pTVar18 = Chaos::TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  uVar16 = *(uint *)&param_1->field_0x8;
  lVar22 = (longlong)(int)uVar16;
  lVar7 = *(longlong *)param_1;
  local_230 = *(double *)pTVar18;
  dStack_228 = *(double *)&pTVar18->field_0x8;
  local_220 = *(double *)&pTVar18->field_0x10;
  iVar5 = *(int *)(lVar7 + 0x50);
  uVar21 = 0;
  if ((int)uVar16 < iVar5) {
    uVar21 = ~uVar16 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (local_288 = lVar22, local_280 = (longlong)iVar5,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x48);
  local_258.Y = *(float *)(lVar7 + 4 + lVar22 * 0x10);
  local_258.Z = *(float *)(lVar7 + 8 + lVar22 * 0x10);
  local_258.W = *(float *)(lVar7 + 0xc + lVar22 * 0x10);
  local_258.X = *(float *)(lVar7 + lVar22 * 0x10);
  EVar6 = pFVar17->Mode;
  if (EVar6 == Reset) {
    local_218._0_8_ = 0;
    local_218._8_4_ = 0;
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetVf
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
               &local_218);
    local_20c._0_8_ = 0;
    local_20c._8_4_ = 0;
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetWf
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
               &local_20c);
    pFVar17->Mode = None;
    return;
  }
  uVar16 = 0;
  uVar21 = 0;
  if (EVar6 != Position) {
    if (EVar6 != Velocity) {
      return;
    }
    pTVar18 = Chaos::TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
               (TVector<double,3> *)&local_1d0,*(int *)&param_1->field_0x8);
    dVar24 = *(double *)this;
    lVar7 = *(longlong *)param_1;
    iVar5 = *(int *)(lVar7 + 0x30);
    dVar2 = *(double *)&pTVar18->field_0x10;
    dVar3 = *(double *)&pTVar18->field_0x8;
    dVar23 = *(double *)pTVar18;
    uVar38 = *(uint *)&param_1->field_0x8;
    lVar22 = (longlong)(int)uVar38;
    uVar39 = 0;
    if ((int)uVar38 < iVar5) {
      uVar39 = ~uVar38 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (local_288 = lVar22, local_280 = (longlong)iVar5,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x28);
    *(double *)(lVar7 + lVar22 * 0x18) = dVar24 * local_1d0 + dVar23;
    *(double *)(lVar7 + 8 + lVar22 * 0x18) = dVar24 * local_1c8 + dVar3;
    *(double *)(lVar7 + 0x10 + lVar22 * 0x18) = dVar24 * local_1c0 + dVar2;
    dVar24 = *(double *)this;
    uVar38 = *(uint *)&param_1->field_0x8;
    lVar22 = (longlong)(int)uVar38;
    lVar7 = *(longlong *)param_1;
    iVar5 = *(int *)(lVar7 + 0x2b0);
    uVar39 = uVar16;
    if ((int)uVar38 < iVar5) {
      uVar39 = ~uVar38 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (local_288 = lVar22, local_280 = (longlong)iVar5,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x2a8);
    uVar38 = *(uint *)&param_1->field_0x8;
    lVar8 = *(longlong *)param_1;
    local_200._0_8_ = *(undefined8 *)(lVar7 + lVar22 * 0xc);
    local_200._8_4_ = *(undefined4 *)(lVar7 + 8 + lVar22 * 0xc);
    iVar5 = *(int *)(lVar8 + 0x50);
    if ((int)uVar38 < iVar5) {
      uVar16 = ~uVar38 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_288 = (longlong)(int)uVar38, local_280 = (longlong)iVar5,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar8 + 0x48) + (longlong)(int)uVar38 * 0x10);
    local_1b8._0_8_ = *puVar1;
    local_1b8._8_8_ = puVar1[1];
    pTVar19 = Chaos::TRotation<float,3>::IntegrateRotationWithAngularVelocity
                        (&local_168,&local_1b8,&local_200,(float)dVar24);
    Chaos::TGeometryParticleHandleImp<double,3,0>::SetRf
              ((TGeometryParticleHandleImp<double,3,0> *)param_1,pTVar19,false);
    goto LAB_143b0c160;
  }
  _local_268 = (TRotation<float,3>)ZEXT416(0);
  if (*(char *)((longlong)this + 0x10) == '\0') {
    dVar24 = *(double *)((longlong)this + 8);
    local_180 = *(double *)&pFVar17->Position;
    dStack_178 = *(double *)&(pFVar17->Position).field_0x8;
    local_170 = *(double *)&(pFVar17->Position).field_0x10;
    uVar42 = SUB84(local_230,0);
    uVar43 = (undefined4)((ulonglong)local_230 >> 0x20);
    uVar37 = SUB84(dStack_228,0);
    uVar41 = (undefined4)((ulonglong)dStack_228 >> 0x20);
    uVar40 = SUB84(local_220,0);
    uVar36 = (undefined4)((ulonglong)local_220 >> 0x20);
    dVar2 = (local_180 - local_230) * dVar24 + local_230;
    dVar23 = (dStack_178 - dStack_228) * dVar24 + dStack_228;
    dVar3 = (local_170 - local_220) * dVar24 + local_220;
    local_248._8_8_ = dVar23;
    local_248._0_8_ = dVar2;
    local_238 = dVar3;
    if ((pFVar17->Mode != Position) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mode == EKinematicTargetMode::Position",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                            ,0x4f,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_1a8.X = *(float *)&(pFVar17->Rotation).field_0x0;
    local_1a8.Y = *(float *)&(pFVar17->Rotation).field_0x4;
    local_1a8.Z = *(float *)&(pFVar17->Rotation).field_0x8;
    local_1a8.W = *(float *)&(pFVar17->Rotation).field_0xc;
    pTVar20 = UE::Math::TQuat<float>::Slerp_NotNormalized
                        (&local_158,&local_258,&local_1a8,(float)dVar24);
    local_248._8_4_ = SUB84(dVar23,0);
    local_248._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    fVar32 = pTVar20->X;
    fVar33 = pTVar20->Y;
    fVar34 = pTVar20->Z;
    fVar11 = pTVar20->W;
    fVar27 = fVar33 * fVar33 + fVar32 * fVar32;
    fVar29 = fVar32 * fVar32 + fVar33 * fVar33;
    fVar30 = fVar11 * fVar11 + fVar34 * fVar34;
    fVar31 = fVar34 * fVar34 + fVar11 * fVar11;
    auVar25._0_4_ = fVar30 + fVar27;
    auVar25._4_4_ = fVar31 + fVar29;
    auVar25._8_4_ = fVar27 + fVar30;
    auVar25._12_4_ = fVar29 + fVar31;
    auVar26 = sqrtps(auVar25,auVar25);
    auVar26 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar26);
    fVar32 = (float)((uint)(auVar26._0_4_ * fVar32) &
                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar25._0_4_) |
                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar25._0_4_) &
                    GlobalVectorConstants::Float0001.m128_u32[0]);
    fVar33 = (float)((uint)(auVar26._4_4_ * fVar33) & -(uint)(_UNK_1506895d4 <= auVar25._4_4_) |
                    ~-(uint)(_UNK_1506895d4 <= auVar25._4_4_) &
                    GlobalVectorConstants::Float0001.m128_u32[1]);
    fVar34 = (float)((uint)(auVar26._8_4_ * fVar34) & -(uint)(_UNK_1506895d8 <= auVar25._8_4_) |
                    ~-(uint)(_UNK_1506895d8 <= auVar25._8_4_) &
                    GlobalVectorConstants::Float0001.m128_u32[2]);
    local_268._4_4_ = fVar33;
    local_268._0_4_ = fVar32;
    fStack_260 = fVar34;
    uStack_25c = (uint)(auVar26._12_4_ * fVar11) & -(uint)(_UNK_1506895dc <= auVar25._12_4_) |
                 ~-(uint)(_UNK_1506895dc <= auVar25._12_4_) &
                 GlobalVectorConstants::Float0001.m128_u32[3];
  }
  else {
    dVar2 = *(double *)&pFVar17->Position;
    dVar23 = *(double *)&(pFVar17->Position).field_0x8;
    local_248 = *(undefined1 (*) [16])&pFVar17->Position;
    local_238 = *(double *)&(pFVar17->Position).field_0x10;
    if ((pFVar17->Mode != Position) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mode == EKinematicTargetMode::Position",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                            ,0x4f,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar32 = *(float *)&pFVar17->Rotation;
    fVar33 = *(float *)&(pFVar17->Rotation).field_0x4;
    fVar34 = *(float *)&(pFVar17->Rotation).field_0x8;
    uVar10 = *(undefined4 *)&(pFVar17->Rotation).field_0xc;
    pFVar17->Mode = Reset;
    uVar40 = SUB84(local_220,0);
    uVar36 = (undefined4)((ulonglong)local_220 >> 0x20);
    uVar37 = SUB84(dStack_228,0);
    uVar41 = (undefined4)((ulonglong)dStack_228 >> 0x20);
    uVar42 = SUB84(local_230,0);
    uVar43 = (undefined4)((ulonglong)local_230 >> 0x20);
    auVar12._4_8_ = _fStack_260;
    auVar12._0_4_ = fVar33;
    local_268 = (undefined1  [8])(auVar12._0_8_ << 0x20);
    fStack_260 = fVar34;
    uStack_25c = uVar10;
    local_268._0_4_ = fVar32;
    dVar3 = local_238;
  }
  dVar24 = (double)CONCAT44(uVar43,uVar42) - dVar2;
  dVar35 = (double)CONCAT44(uVar36,uVar40) - dVar3;
  dVar28 = (double)CONCAT44(uVar41,uVar37) - dVar23;
  if (((__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3e45798ee0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3e45798ee0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if (((__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)((double)fVar32 - (double)local_258.X) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84((double)fVar32 - (double)local_258.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar38 = SUB84((double)fVar33 - (double)local_258.Y,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar39 = (uint)((ulonglong)((double)fVar33 - (double)local_258.Y) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3e45798ee0000000 <= (double)CONCAT44(uVar39,uVar38) &&
      (double)CONCAT44(uVar39,uVar38) != __real_3e45798ee0000000)) ||
     (__real_3e45798ee0000000 <
      (double)CONCAT44((uint)((ulonglong)((double)fVar34 - (double)local_258.Z) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84((double)fVar34 - (double)local_258.Z,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if ((bVar15) || (bVar13)) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  dVar24 = *(double *)this;
  local_278._0_8_ = 0;
  local_278._8_8_ = (ulonglong)(uint)local_278._12_4_ << 0x20;
  local_1d8 = 0.0;
  local_1e8 = 0.0;
  dStack_1e0 = 0.0;
  if (dVar24 <= __real_3eb0c6f7a0000000) {
LAB_143b0bfdb:
    uVar40 = 0;
    uVar36 = 0;
    uVar37 = 0;
  }
  else {
    if (bVar15) {
      dStack_1e0 = __real_3ff0000000000000 / dVar24;
      local_1e8 = (dVar2 - (double)CONCAT44(uVar43,uVar42)) * dStack_1e0;
      local_1d8 = dStack_1e0 * (dVar3 - (double)CONCAT44(uVar36,uVar40));
      dStack_1e0 = dStack_1e0 * (dVar23 - (double)CONCAT44(uVar41,uVar37));
    }
    if (!bVar13) goto LAB_143b0bfdb;
    Chaos::TRotation<float,3>::CalculateAngularVelocity1
              (&local_1f4,(TRotation<float,3> *)&local_258,(TRotation<float,3> *)local_268,
               (float)dVar24);
    uVar36 = local_1f4._0_4_;
    uVar37 = local_1f4._4_4_;
    uVar40 = local_1f4._8_4_;
  }
  uVar38 = *(uint *)&param_1->field_0x8;
  lVar22 = (longlong)(int)uVar38;
  lVar7 = *(longlong *)param_1;
  iVar5 = *(int *)(lVar7 + 0x30);
  if ((int)uVar38 < iVar5) {
    uVar16 = ~uVar38 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (local_288 = lVar22, local_280 = (longlong)iVar5,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x28);
  auVar26._8_4_ = SUB84(dVar23,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(lVar7 + lVar22 * 0x18) = auVar26;
  *(double *)(lVar7 + 0x10 + lVar22 * 0x18) = local_238;
  uVar16 = *(uint *)&param_1->field_0x8;
  lVar7 = *(longlong *)param_1;
  local_278._0_8_ = local_268;
  local_278._8_8_ = _fStack_260;
  iVar5 = *(int *)(lVar7 + 0x50);
  uVar38 = uVar21;
  if ((int)uVar16 < iVar5) {
    uVar38 = ~uVar16 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (local_288 = (longlong)(int)uVar16, local_280 = (longlong)iVar5,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar16 * 0x10);
  *puVar1 = local_278._0_8_;
  puVar1[1] = local_278._8_8_;
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
             (TVector<double,3> *)&local_1e8);
  uVar16 = *(uint *)&param_1->field_0x8;
  lVar22 = (longlong)(int)uVar16;
  lVar7 = *(longlong *)param_1;
  iVar5 = *(int *)(lVar7 + 0x2b0);
  uVar38 = uVar21;
  if ((int)uVar16 < iVar5) {
    uVar38 = ~uVar16 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (local_288 = lVar22, local_280 = (longlong)iVar5,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x2a8);
  *(ulonglong *)(lVar7 + lVar22 * 0xc) = CONCAT44(uVar37,uVar36);
  *(undefined4 *)(lVar7 + 8 + lVar22 * 0xc) = uVar40;
  if (!bVar14) {
    return;
  }
LAB_143b0c160:
  uVar16 = *(uint *)&param_1->field_0x8;
  lVar22 = (longlong)(int)uVar16;
  lVar7 = *(longlong *)param_1;
  local_198._16_8_ = 0;
  local_198._0_8_ = 0;
  local_198._8_8_ = 0;
  iVar5 = *(int *)(lVar7 + 0x50);
  if ((int)uVar16 < iVar5) {
    uVar21 = ~uVar16 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (local_288 = lVar22, local_280 = (longlong)iVar5,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x48);
  fVar32 = *(float *)(lVar7 + lVar22 * 0x10);
  uVar4 = *(undefined8 *)(lVar7 + 8 + lVar22 * 0x10);
  dVar24 = (double)(float)((ulonglong)uVar4 >> 0x20);
  dVar2 = (double)*(float *)(lVar7 + 4 + lVar22 * 0x10);
  pTVar18 = Chaos::TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  local_138._8_4_ = SUB84(dVar24,0);
  local_138._0_8_ = (double)(float)uVar4;
  local_138._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  local_148._8_4_ = SUB84(dVar2,0);
  local_148._0_8_ = (double)fVar32;
  local_148._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_128 = *(undefined8 *)pTVar18;
  uStack_120 = *(undefined8 *)&pTVar18->field_0x8;
  local_118 = *(undefined8 *)&pTVar18->field_0x10;
  local_f8 = ___xmm_00000000000000003ff0000000000000;
  uStack_f0 = _UNK_150689518;
  uStack_110 = 0;
  local_108 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_100 = _UNK_150689688;
  Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
             (TRigidTransform<double,3> *)local_148,&local_198);
  return;
}

// AddConstraintContainer @ 143b0f510

void __thiscall
Chaos::FPBDMinEvolution::AddConstraintContainer
          (FPBDMinEvolution *this,FPBDConstraintContainer *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
  *pTVar6;
  undefined8 *local_res8;
  FPBDConstraintContainer *local_28 [2];
  
  if (param_1->ContainerId != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer.GetContainerId() == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                       ,0x4d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ConstraintContainers).AllocatorInstance.Data;
  local_28[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar2 + (longlong)(this->ConstraintContainers).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ConstraintContainers).ArrayNum;
  piVar1 = &(this->ConstraintContainers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConstraintContainers).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->ConstraintContainers).AllocatorInstance.Data;
  (this->ConstraintContainers).ArrayNum = iVar5 + 1;
  *(FPBDConstraintContainer **)(pFVar2 + (longlong)iVar5 * 8) = local_28[0];
  param_1->ContainerId = iVar5;
  pTVar6 = (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            *)(**(code **)(param_1->_padding_ + 0x48))(param_1,&local_res8,param_2);
  Chaos::Private::FPBDConstraintGroupSolver::SetConstraintSolver
            ((FPBDConstraintGroupSolver *)&this->ConstraintSolver,iVar5,pTVar6);
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// Advance @ 143b11f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDMinEvolution::Advance(FPBDMinEvolution *this,double param_1,int param_2,double param_3)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Advance> FVar11;
  longlong lVar12;
  FNameEntryId FVar13;
  FName FVar14;
  ulonglong uVar15;
  TParticleHandleBase<double,3>_u_0 TVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  FName local_res8;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  FName local_c8;
  FName local_c0;
  TParticleHandleBase<double,3>_u_0 local_b0;
  uint uStack_a8;
  int iStack_a4;
  undefined1 local_a0 [24];
  uint uStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  int local_78;
  
  uVar15 = (ulonglong)(uint)param_2;
  FVar11 = StatPtr_STAT_MinEvolution_Advance;
  if (StatPtr_STAT_MinEvolution_Advance ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Advance>)0x0) {
    pFVar10 = ::FName::FName(&local_c8,"STAT_MinEvolution_Advance");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Advance>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_Advance,*pFVar10,
                        L"MinEvolution::Advance","STATGROUP_ChaosMinEvolution","STATCAT_Advanced",
                        L"ChaosMinEvolution",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar18 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x5c);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar13.Value;
      uStackX_24 = uVar18;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_143b120c2;
    }
  }
  bVar5 = false;
  FVar14 = local_c0;
LAB_143b120c2:
  PrepareTick(this);
  if (__real_3e45798ee0000000 < param_3) {
    Rewind(this,param_1,param_3);
  }
  if (0 < param_2) {
    iVar17 = 1;
    dVar3 = __real_3ff0000000000000 / (double)param_2;
    do {
      if (5 < (byte)LogChaosMinEvolution._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosMinEvolution);
      }
      AdvanceOneTimeStep(this,param_1,(double)iVar17 * dVar3);
      iVar17 = iVar17 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_a0,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveParticlesView);
  if ((TGeometryParticlesImp<double,3,0> *)local_a0._16_8_ !=
      (TGeometryParticlesImp<double,3,0> *)0x0) {
    TVar16 = (TParticleHandleBase<double,3>_u_0)local_a0._16_8_;
    uVar18 = uStack_88;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_a0);
      uVar9 = 0;
      if ((int)uVar18 < (int)(TVar16.PBDRigidParticles)->_padding_) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(char *)((TVar16.PBDRigidParticles)->_padding_ + 0xb + (longlong)(int)uVar18 * 0x10) ==
          '\x04') {
        uVar9 = 0;
        if ((int)uVar18 < (int)(TVar16.PBDRigidParticles)->_padding_) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = local_a0._16_8_;
        lVar12 = (longlong)(int)uVar18;
        lVar19 = (TVar16.PBDRigidParticles)->_padding_;
        *(undefined8 *)(lVar19 + lVar12 * 0x18) = 0;
        *(undefined8 *)(lVar19 + 8 + lVar12 * 0x18) = 0;
        *(undefined8 *)(lVar19 + 0x10 + lVar12 * 0x18) = 0;
        lVar19 = (longlong)(int)uStack_88;
        uVar18 = 0;
        if ((int)uStack_88 < (int)*(longlong *)(local_a0._16_8_ + 0x340)) {
          uVar18 = ~uStack_88 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = *(longlong *)(uVar7 + 0x338);
        *(undefined8 *)(lVar12 + lVar19 * 0x18) = 0;
        *(undefined8 *)(lVar12 + 8 + lVar19 * 0x18) = 0;
        *(undefined8 *)(lVar12 + 0x10 + lVar19 * 0x18) = 0;
        TVar16 = (TParticleHandleBase<double,3>_u_0)local_a0._16_8_;
        uVar18 = uStack_88;
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_a0);
      do {
        uVar7 = local_a0._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_a0._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar18 = uVar18 + 1;
          uStack_88 = uVar18;
          if (local_7c <= (int)uVar18) {
LAB_143b12329:
            local_80 = local_80 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_a0);
            TVar16 = (TParticleHandleBase<double,3>_u_0)local_a0._16_8_;
            uVar18 = uStack_88;
          }
        }
        else {
          iVar17 = local_78 + 1;
          local_78 = iVar17;
          if (*(int *)(local_a0._8_8_ + 8) <= iVar17) goto LAB_143b12329;
          if ((iVar17 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar7)->Data + (longlong)iVar17 * 8);
          TVar16 = (TParticleHandleBase<double,3>_u_0)pTVar1->PBDRigidParticles;
          uVar18 = *(uint *)(pTVar1 + 1);
          if (TVar16.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_a4 = (uint)iStack_a4._1_3_ << 8;
          }
          else {
            iStack_a4 = CONCAT31(iStack_a4._1_3_,(TVar16.GeometryParticles)->MParticleType);
          }
          uStack_84 = iStack_a4;
          uStack_88 = uVar18;
          local_b0 = TVar16;
          uStack_a8 = uVar18;
          local_a0._16_8_ = TVar16;
        }
        if (TVar16.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
        goto LAB_143b12368;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_a0);
        bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_a0 + 0x10));
      } while (bVar8);
    } while (TVar16.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
  }
LAB_143b12368:
  UnprepareTick(this);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// AdvanceOneTimeStep @ 143b12f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDMinEvolution::AdvanceOneTimeStep(FPBDMinEvolution *this,double param_1,double param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_AdvanceOneTimeStep> FVar9;
  uint *puVar10;
  FChaosVDThreadContext *pFVar11;
  FChaosVDContext *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  FColor_u_0 local_138 [2];
  FName local_130;
  FChaosVDContext local_128;
  FName local_108;
  LARGE_INTEGER local_f8;
  FStatMessage local_f0;
  code *local_e0;
  uint *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  undefined1 *local_90;
  FName local_88 [2];
  TStringView<wchar_t> local_78;
  TArrayView<Chaos::FPBDConstraintContainer_*_const,int> local_68;
  FChaosVDOptionalDataChannel *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  FVar9 = StatPtr_STAT_MinEvolution_AdvanceOneTimeStep;
  if (StatPtr_STAT_MinEvolution_AdvanceOneTimeStep ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_AdvanceOneTimeStep>)0x0) {
    pFVar8 = ::FName::FName(local_88,"STAT_MinEvolution_AdvanceOneTimeStep");
    FVar9 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_AdvanceOneTimeStep>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_AdvanceOneTimeStep,
                       *pFVar8,L"MinEvolution::AdvanceOneTimeStep","STATGROUP_ChaosMinEvolution",
                       "STATCAT_Advanced",L"ChaosMinEvolution",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar15 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar14.Value;
        local_130.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x7e);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_143b13094;
    }
  }
  bVar5 = false;
  FVar15 = local_108;
LAB_143b13094:
  puVar10 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_d8 = &local_res8;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e0,puVar10);
  pFVar12 = FChaosVDThreadContext::GetCurrentContext(pFVar11);
  if (pFVar12 != (FChaosVDContext *)0x0) {
    local_128.OwnerID = pFVar12->OwnerID;
    local_128.Id = pFVar12->Id;
    local_128.Type = pFVar12->Type;
    local_128.Attributes = pFVar12->Attributes;
    local_58 = (pFVar12->CurrentDataChannel).Object;
    pTStack_50 = (pFVar12->CurrentDataChannel).SharedReferenceCount.ReferenceController;
    if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128.CurrentDataChannel.SharedReferenceCount.ReferenceController =
         CVDDC_Default.SharedReferenceCount.ReferenceController;
    local_128.CurrentDataChannel.Object = CVDDC_Default.Object;
    if (CVDDC_Default.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    puVar10 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_c8 = local_res10;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar11 = (FChaosVDThreadContext *)
              FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d0,puVar10);
    FChaosVDThreadContext::PushContext(pFVar11,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.CurrentDataChannel.SharedReferenceCount.ReferenceController);
  }
  uStack_b0 = 0x11;
  local_b8 = L"Evolution Advance";
  local_78._12_4_ = uStack_ac;
  local_78.Size = 0x11;
  local_78.DataPtr = L"Evolution Advance";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_78);
  Integrate(this,param_1);
  ApplyKinematicTargets(this,param_1,param_2);
  DetectCollisions(this,param_1);
  if (0.0 < param_1) {
    GatherInput(this,param_1);
    ApplyConstraintsPhase1(this,param_1);
    ApplyConstraintsPhase2(this,param_1);
    ApplyConstraintsPhase3(this,param_1);
    ScatterOutput(this,param_1);
  }
  local_a8 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar2 = (this->ConstraintContainers).ArrayNum;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_68._12_4_ = uStack_9c;
  local_68.ArrayNum = iVar2;
  local_68.DataPtr = (FPBDConstraintContainer **)local_a8;
  iStack_a0 = iVar2;
  FChaosVisualDebuggerTrace::TraceConstraintsContainer(&local_68);
  FChaosVisualDebuggerTrace::TraceParticles(&this->Particles->ParticleHandles);
  FChaosVisualDebuggerTrace::TraceSolverStepEnd();
  puVar10 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_90 = local_res20;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar10);
  FChaosVDThreadContext::PopContext(pFVar11);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f0.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f8);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_f0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ApplyConstraintsPhase1 @ 143b14870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDMinEvolution::ApplyConstraintsPhase1(FPBDMinEvolution *this,double param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase1> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar11 = StatPtr_STAT_MinEvolution_ApplyConstraintsPhase1;
  if (StatPtr_STAT_MinEvolution_ApplyConstraintsPhase1 ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase1>)0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_MinEvolution_ApplyConstraintsPhase1");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase1>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MinEvolution_ApplyConstraintsPhase1,*pFVar10,
                        L"MinEvolution::ApplyConstraintsPhase1","STATGROUP_ChaosMinEvolution",
                        "STATCAT_Advanced",L"ChaosMinEvolution",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar14 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x235);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_143b149d3;
    }
  }
  bVar6 = false;
  FVar13 = local_70;
LAB_143b149d3:
  uVar14 = 0;
  if (0 < *(int *)&(this->ConstraintSolver).field_0x90) {
    lVar15 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0x90) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(longlong *)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0x88) != 0) {
        uVar9 = 0;
        if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0x90) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        plVar3 = *(longlong **)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0x88);
        (**(code **)(*plVar3 + 0x50))(plVar3,SUB84(param_1,0));
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0x90);
  }
  cVar2 = (this->ConstraintSolver).field_0xb0;
  iVar16 = 0;
  if ('\0' < cVar2) {
    do {
      uVar14 = 0;
      if (0 < *(int *)&(this->ConstraintSolver).field_0xa8) {
        lVar15 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (*(longlong *)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0xa0) != 0) {
            uVar9 = 0;
            if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            plVar3 = *(longlong **)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0xa0);
            (**(code **)(*plVar3 + 0x68))(plVar3,SUB84(param_1,0),iVar16,(int)cVar2);
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 8;
        } while ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < cVar2);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ApplyConstraintsPhase2 @ 143b14d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDMinEvolution::ApplyConstraintsPhase2(FPBDMinEvolution *this,double param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase2> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar11 = StatPtr_STAT_MinEvolution_ApplyConstraintsPhase2;
  if (StatPtr_STAT_MinEvolution_ApplyConstraintsPhase2 ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase2>)0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_MinEvolution_ApplyConstraintsPhase2");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase2>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MinEvolution_ApplyConstraintsPhase2,*pFVar10,
                        L"MinEvolution::ApplyConstraintsPhase2","STATGROUP_ChaosMinEvolution",
                        "STATCAT_Advanced",L"ChaosMinEvolution",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar14 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x23d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_143b14e63;
    }
  }
  bVar6 = false;
  FVar13 = local_70;
LAB_143b14e63:
  Chaos::Private::FPBDConstraintGroupSolver::PreApplyVelocityConstraints
            ((FPBDConstraintGroupSolver *)&this->ConstraintSolver,param_1);
  cVar2 = (this->ConstraintSolver).field_0xb1;
  iVar16 = 0;
  if ('\0' < cVar2) {
    do {
      uVar14 = 0;
      if (0 < *(int *)&(this->ConstraintSolver).field_0xa8) {
        lVar15 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0xa0) != 0) {
            uVar9 = 0;
            if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar3 = *(longlong **)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0xa0);
            (**(code **)(*plVar3 + 0x70))(plVar3,SUB84(param_1,0),iVar16,(int)cVar2);
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 8;
        } while ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < cVar2);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ApplyConstraintsPhase3 @ 143b150c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDMinEvolution::ApplyConstraintsPhase3(FPBDMinEvolution *this,double param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase3> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar11 = StatPtr_STAT_MinEvolution_ApplyConstraintsPhase3;
  if (StatPtr_STAT_MinEvolution_ApplyConstraintsPhase3 ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase3>)0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_MinEvolution_ApplyConstraintsPhase3");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_ApplyConstraintsPhase3>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MinEvolution_ApplyConstraintsPhase3,*pFVar10,
                        L"MinEvolution::ApplyConstraintsPhase3","STATGROUP_ChaosMinEvolution",
                        "STATCAT_Advanced",L"ChaosMinEvolution",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar14 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x245);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_143b15223;
    }
  }
  bVar6 = false;
  FVar13 = local_70;
LAB_143b15223:
  Chaos::Private::FPBDConstraintGroupSolver::PreApplyProjectionConstraints
            ((FPBDConstraintGroupSolver *)&this->ConstraintSolver,param_1);
  cVar2 = (this->ConstraintSolver).field_0xb2;
  iVar16 = 0;
  if ('\0' < cVar2) {
    do {
      uVar14 = 0;
      if (0 < *(int *)&(this->ConstraintSolver).field_0xa8) {
        lVar15 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0xa0) != 0) {
            uVar9 = 0;
            if ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar3 = *(longlong **)(lVar15 + *(longlong *)&(this->ConstraintSolver).field_0xa0);
            (**(code **)(*plVar3 + 0x78))(plVar3,SUB84(param_1,0),iVar16,(int)cVar2);
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 8;
        } while ((int)uVar14 < *(int *)&(this->ConstraintSolver).field_0xa8);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < cVar2);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ApplyKinematicTargets @ 143b15590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDMinEvolution::ApplyKinematicTargets(FPBDMinEvolution *this,double param_1,double param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_KinematicTargets> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  double dVar13;
  uint local_res8;
  uint uStackX_c;
  <lambda_1> local_res10 [8];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  <lambda_2> local_c8;
  <lambda_2> local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  <lambda_2> local_a0;
  <lambda_1> local_88;
  FName local_70 [8];
  
  FVar9 = StatPtr_STAT_MinEvolution_KinematicTargets;
  if (StatPtr_STAT_MinEvolution_KinematicTargets ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_KinematicTargets>)0x0) {
    pFVar8 = ::FName::FName(local_70,"STAT_MinEvolution_KinematicTargets");
    FVar9 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_KinematicTargets>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_KinematicTargets,
                       *pFVar8,L"MinEvolution::KinematicTargets","STATGROUP_ChaosMinEvolution",
                       "STATCAT_Advanced",L"ChaosMinEvolution",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_143b156d5:
    bVar4 = false;
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x130);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143b156d5;
    local_res8 = FVar11.Value;
    uStackX_c = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
  }
  dVar13 = __real_3ff0000000000000;
  if (0.0 < param_2) {
    if ((__real_3ff0000000000000 < param_2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StepFraction <= (FReal)1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                           ,0x133,L""), bVar7)) goto code_r0x000143b1573c;
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StepFraction > (FReal)0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                       ,0x132,L"");
    if (bVar7) {
code_r0x000143b1573c:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar6 = __real_3f1a36e2e0000000;
  local_c8.Func = &local_a0;
  dVar13 = (double)CONCAT44((uint)((ulonglong)(param_2 - dVar13) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(param_2 - dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           );
  local_a0.IsLastStep = dVar13 <= __real_3f1a36e2e0000000;
  local_a0.Dt = param_1;
  local_a0.StepFraction = param_2;
  local_88.Dt = param_1;
  local_88.StepFraction = param_2;
  local_88.IsLastStep = local_a0.IsLastStep;
  ParticlesParallelFor<Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,_Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<_Chaos::FPBDMinEvolution::ApplyKinematicTargets_::__l2::<lambda_2>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<_Chaos::FPBDMinEvolution::ApplyKinematicTargets_::__l2::<lambda_2>_>_::__l2::<lambda_2>_>
            (&this->Particles->ActiveKinematicParticlesView,(<lambda_1> *)&local_res8,&local_c8,true
            );
  local_c0.Func = &local_88;
  ParticlesParallelFor<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_Chaos::FPBDMinEvolution::ApplyKinematicTargets_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_Chaos::FPBDMinEvolution::ApplyKinematicTargets_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
            (&this->Particles->ActiveDynamicMovingKinematicParticlesView,local_res10,&local_c0,true)
  ;
  if (dVar13 <= dVar6) {
    FPBDRigidsSOAs::UpdateAllMovingKinematic(this->Particles,true);
  }
  FPBDRigidsSOAs::UpdateViews(this->Particles);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DetectCollisions @ 143b1b4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDMinEvolution::DetectCollisions(FPBDMinEvolution *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_DetectCollisions> FVar7;
  uint uVar8;
  FColor_u_0 FVar9;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar7 = StatPtr_STAT_MinEvolution_DetectCollisions;
  if (StatPtr_STAT_MinEvolution_DetectCollisions ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_DetectCollisions>)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_MinEvolution_DetectCollisions");
    FVar7 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_DetectCollisions>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_DetectCollisions,
                       *pFVar6,L"MinEvolution::DetectCollisions","STATGROUP_ChaosMinEvolution",
                       "STATCAT_Advanced",L"ChaosMinEvolution",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9.Bits = (uint)FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Bits != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar9.Bits;
        uStackX_c = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x20d);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar9.Bits;
      uStackX_c = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      goto LAB_143b1b5ff;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_143b1b5ff:
  pFVar11 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar2 = (this->ConstraintContainers).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar11 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar11 + 0x18))();
    pFVar11 = pFVar11 + 8;
  }
  (**(code **)(this->CollisionDetector->_padding_ + 8))(this->CollisionDetector,SUB84(param_1,0),0);
  Chaos::Private::FCollisionConstraintAllocator::PruneExpiredMidPhases
            ((FCollisionConstraintAllocator *)(this->CollisionDetector->_padding_ + 0x28));
  Chaos::Private::FCollisionConstraintAllocator::SortActiveConstraints
            ((FCollisionConstraintAllocator *)(this->CollisionDetector->_padding_ + 0x28));
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar10,CycleScopeEnd);
  }
  return;
}

// GatherInput @ 143b1f540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDMinEvolution::GatherInput(FPBDMinEvolution *this,double param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Gather> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  uVar17 = 0;
  FVar13 = StatPtr_STAT_MinEvolution_Gather;
  if (StatPtr_STAT_MinEvolution_Gather ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Gather>)0x0) {
    pFVar12 = ::FName::FName(&local_78,"STAT_MinEvolution_Gather");
    FVar13 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Gather>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_Gather,*pFVar12,
                        L"MinEvolution::Gather","STATGROUP_ChaosMinEvolution","STATCAT_Advanced",
                        L"ChaosMinEvolution",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x21b);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar14.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_143b1f6a3;
    }
  }
  bVar7 = false;
  FVar15 = local_70;
LAB_143b1f6a3:
  *(undefined4 *)&(this->ConstraintSolver).field_0x18 = 0;
  *(undefined4 *)&(this->ConstraintSolver).field_0x28 = 0;
  if (*(int *)&(this->ConstraintSolver).field_0x2c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->ConstraintSolver).field_0x20,0,
               (int *)&(this->ConstraintSolver).field_0x2c);
  }
  TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
           *)&(this->ConstraintSolver).field_0x30);
  (this->ConstraintSolver).field_0x80 = 0;
  uVar18 = uVar17;
  if (0 < *(int *)&(this->ConstraintSolver).field_0x90) {
    do {
      uVar16 = (uint)uVar17;
      uVar10 = 0;
      if ((int)uVar16 < *(int *)&(this->ConstraintSolver).field_0x90) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(uVar18 + *(longlong *)&(this->ConstraintSolver).field_0x88) != 0) {
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->ConstraintSolver).field_0x90) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar3 = *(longlong **)(uVar18 + *(longlong *)&(this->ConstraintSolver).field_0x88);
        (**(code **)(*plVar3 + 8))(plVar3,0);
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar18 = uVar18 + 8;
    } while ((int)(uVar16 + 1) < *(int *)&(this->ConstraintSolver).field_0x90);
  }
  uVar18 = 0;
  lVar4 = *(longlong *)&this->ConstraintSolver;
  *(undefined4 *)&(this->ConstraintSolver).field_0x98 = 0;
  (**(code **)(lVar4 + 0x10))(&this->ConstraintSolver);
  (**(code **)(*(longlong *)&this->ConstraintSolver + 0x20))(&this->ConstraintSolver);
  uVar17 = uVar18;
  if (0 < *(int *)&(this->ConstraintSolver).field_0x90) {
    do {
      uVar19 = (uint)uVar18;
      uVar16 = ~uVar19 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar19 < *(int *)&(this->ConstraintSolver).field_0x90) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(uVar17 + *(longlong *)&(this->ConstraintSolver).field_0x88) != 0) {
        uVar10 = 0;
        if ((int)uVar19 < *(int *)&(this->ConstraintSolver).field_0x90) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar3 = *(longlong **)(uVar17 + *(longlong *)&(this->ConstraintSolver).field_0x88);
        (**(code **)(*plVar3 + 0x28))(plVar3,&(this->ConstraintSolver).field_0x8);
        uVar10 = 0;
        if ((int)uVar19 < *(int *)&(this->ConstraintSolver).field_0x90) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (**(code **)(**(longlong **)
                                (uVar17 + *(longlong *)&(this->ConstraintSolver).field_0x88) + 0x10)
                 )();
        puVar2 = &(this->ConstraintSolver).field_0x98;
        *(int *)puVar2 = *(int *)puVar2 + iVar11;
      }
      uVar18 = (ulonglong)(uVar19 + 1);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar19 + 1) < *(int *)&(this->ConstraintSolver).field_0x90);
  }
  uVar18 = 0;
  (this->ConstraintSolver).field_0x80 = 1;
  FSolverBodyContainer::GatherInput
            ((FSolverBodyContainer *)&(this->ConstraintSolver).field_0x8,param_1,0,
             *(int *)&(this->ConstraintSolver).field_0x18);
  uVar17 = uVar18;
  if (0 < *(int *)&(this->ConstraintSolver).field_0x90) {
    do {
      uVar16 = (uint)uVar18;
      uVar10 = 0;
      if ((int)uVar16 < *(int *)&(this->ConstraintSolver).field_0x90) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(uVar17 + *(longlong *)&(this->ConstraintSolver).field_0x88) != 0) {
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->ConstraintSolver).field_0x90) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar3 = *(longlong **)(uVar17 + *(longlong *)&(this->ConstraintSolver).field_0x88);
        (**(code **)(*plVar3 + 0x38))(plVar3,SUB84(param_1,0));
      }
      uVar18 = (ulonglong)(uVar16 + 1);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar16 + 1) < *(int *)&(this->ConstraintSolver).field_0x90);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Integrate @ 143b22ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDMinEvolution::Integrate(FPBDMinEvolution *this,double param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined1 (*pauVar13) [12];
  code *pcVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  bool bVar18;
  TStatId TVar19;
  TVector<double,3> *pTVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  TParticleHandleBase<double,3>_u_0 this_00;
  double dVar27;
  double dVar28;
  double dVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  uint uVar37;
  double dVar36;
  undefined8 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 auStackY_438 [32];
  undefined1 local_408 [24];
  uint uStack_3f0;
  undefined4 uStack_3ec;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  FCycleCounter local_3c0;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double dStack_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  longlong local_330;
  uint uStack_328;
  int iStack_324;
  double local_320;
  double local_318;
  double local_310;
  FSourceLocation local_308;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [48];
  double local_278 [6];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  TRotation<double,3> local_1f8;
  TVector<double,3> local_1d8;
  PMatrix<double,3,3> local_1b8;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_380 = param_1;
  TVar19 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_MinEvolution_Integrate,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_MinEvolution_Integrate,1> *)
                      &StatPtr_STAT_MinEvolution_Integrate);
  local_308.Impl._Line = 0xd5;
  local_308.Impl._Column = 3;
  local_308.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
  ;
  local_308.Impl._Function = "void __cdecl Chaos::FPBDMinEvolution::Integrate(double)";
  local_3c0.StatId.ComparisonIndex.Value = 0;
  local_3c0.StatId.Number = 0;
  local_3c0.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_3c0,*(TStatIdData **)&(TVar19.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_308);
  local_2b8._0_8_ = *(undefined8 *)(this->CollisionDetector->_padding_ + 0x110);
  local_2b8._8_8_ = local_2b8._0_8_;
  local_2a8._0_8_ = local_2b8._0_8_;
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_408,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveParticlesView);
  if ((TPBDRigidParticles<double,3> *)local_408._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    uVar23 = (ulonglong)uStack_3f0;
    this_00 = (TParticleHandleBase<double,3>_u_0)local_408._16_8_;
    uVar33 = ___xmm_3ff00000000000000000000000000000;
    uVar38 = _UNK_15061cbc8;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_408);
      uVar42 = 0;
      uVar21 = (uint)uVar23;
      uVar41 = uVar42;
      if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
        uVar41 = ~uVar21 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (*(char *)((this_00.PBDRigidParticles)->_padding_ + 0xb + (longlong)(int)uVar21 * 0x10) ==
          '\x04') {
        uVar41 = uVar42;
        if ((int)uVar21 < (int)*(longlong *)&((this_00.KinematicGeometryParticles)->MV).field_0x10)
        {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar4 = *(undefined8 *)
                 ((this_00.PBDRigidParticles)->_padding_ + (longlong)(int)uVar21 * 0xc);
        uVar12 = *(undefined4 *)
                  ((this_00.PBDRigidParticles)->_padding_ + 8 + (longlong)(int)uVar21 * 0xc);
        if ((int)uVar21 < *(int *)&((this_00.PBDRigidParticles)->MPreV).field_0x10) {
          uVar42 = ~uVar21 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = (this_00.PBDRigidClusteredParticles)->_padding_;
        *(undefined8 *)(lVar25 + (longlong)(int)uVar21 * 0xc) = uVar4;
        *(undefined4 *)(lVar25 + 8 + (longlong)(int)uVar21 * 0xc) = uVar12;
        uVar42 = 0;
        uVar41 = uVar42;
        if ((int)uVar21 < (int)*(longlong *)&((this_00.KinematicGeometryParticles)->MW).field_0x10)
        {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar4 = *(undefined8 *)
                 ((this_00.PBDRigidParticles)->_padding_ + (longlong)(int)uVar21 * 0xc);
        uVar12 = *(undefined4 *)
                  ((this_00.PBDRigidParticles)->_padding_ + 8 + (longlong)(int)uVar21 * 0xc);
        uVar41 = uVar42;
        if ((int)uVar21 < *(int *)&((this_00.PBDRigidParticles)->MPreW).field_0x10) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = (this_00.PBDRigidClusteredParticles)->_padding_;
        lVar24 = (longlong)(int)uVar21;
        *(undefined8 *)(lVar25 + (longlong)(int)uVar21 * 0xc) = uVar4;
        *(undefined4 *)(lVar25 + 8 + (longlong)(int)uVar21 * 0xc) = uVar12;
        TPBDRigidParticles<double,3>::XCom
                  (this_00.PBDRigidParticles,(TVector<double,3> *)&local_398,uVar21);
        TPBDRigidParticles<double,3>::RCom
                  (this_00.PBDRigidParticles,(TRotation<double,3> *)(local_2a8 + 0x10),uVar21);
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = (this_00.PBDRigidParticles)->_padding_;
        local_278[4] = 0.0;
        local_238 = 0;
        local_278[1] = 0.0;
        local_278[0] = (double)*(float *)(lVar25 + lVar24 * 0xc);
        local_230 = 0;
        local_278[5] = (double)*(float *)(lVar25 + 4 + lVar24 * 0xc);
        local_278[2] = 0.0;
        local_228 = (double)*(float *)(lVar25 + 8 + lVar24 * 0xc);
        local_248 = 0;
        local_278[3] = 0.0;
        local_240 = 0;
        local_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = uVar33;
        uStack_200 = uVar38;
        Utilities::ComputeWorldSpaceInertia
                  (&local_1b8,(TRotation<double,3> *)(local_2a8 + 0x10),
                   (PMatrix<double,3,3> *)local_278);
        lVar25 = (longlong)(int)uVar21;
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar24 = (this_00.PBDRigidParticles)->_padding_;
        lVar26 = (longlong)(int)uVar21;
        dVar27 = *(double *)(lVar24 + lVar25 * 0x18);
        dVar28 = *(double *)(lVar24 + 8 + lVar25 * 0x18);
        dVar36 = *(double *)(lVar24 + 0x10 + lVar25 * 0x18);
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = (this_00.PBDRigidParticles)->_padding_;
        lVar24 = (longlong)(int)uVar21;
        dVar27 = param_1 * dVar27 + *(double *)(lVar25 + lVar26 * 0x18);
        dVar34 = param_1 * dVar28 + *(double *)(lVar25 + 8 + lVar26 * 0x18);
        dVar28 = param_1 * dVar36 + *(double *)(lVar25 + 0x10 + lVar26 * 0x18);
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        local_3b0 = dVar27;
        local_3a8 = dVar34;
        local_360 = dVar28;
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = (this_00.PBDRigidParticles)->_padding_;
        lVar26 = (longlong)(int)uVar21;
        dVar36 = *(double *)(lVar25 + lVar24 * 0x18);
        dVar5 = *(double *)(lVar25 + 8 + lVar24 * 0x18);
        dVar6 = *(double *)(lVar25 + 0x10 + lVar24 * 0x18);
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = (this_00.PBDRigidParticles)->_padding_;
        local_350 = 0.0;
        dVar36 = param_1 * dVar36 + *(double *)(lVar25 + lVar26 * 0x18);
        dVar5 = param_1 * dVar5 + *(double *)(lVar25 + 8 + lVar26 * 0x18);
        dVar6 = param_1 * dVar6 + *(double *)(lVar25 + 0x10 + lVar26 * 0x18);
        local_358 = 0.0;
        local_338 = 0.0;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar42 = ~uVar21 >> 0x1f;
        }
        local_340 = 0.0;
        local_348 = 0.0;
        local_320 = dVar36;
        local_318 = dVar5;
        local_310 = dVar6;
        if ((uVar42 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((*(byte *)((this_00.PBDRigidParticles)->_padding_ + 8 + (longlong)(int)uVar21 * 0x10) &
            1) != 0) {
          dVar27 = dVar27 + param_1 * *(double *)&this->Gravity;
          dVar34 = dVar34 + param_1 * *(double *)&(this->Gravity).field_0x8;
          dVar28 = dVar28 + param_1 * *(double *)&(this->Gravity).field_0x10;
          local_3b0 = dVar27;
          local_3a8 = dVar34;
          local_360 = dVar28;
        }
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  (this_00.KinematicGeometryParticles,(TVector<double,3> *)&local_3d8,uVar21);
        TKinematicGeometryParticlesImp<double,3,0>::GetW
                  (this_00.KinematicGeometryParticles,(TVector<double,3> *)&local_378,uVar21);
        dVar7 = 0.0;
        if ((this->SimulationSpaceSettings).bEnabled != false) {
          dVar27 = *(double *)&(this->SimulationSpace).AngularVelocity.field_0x8;
          local_338 = *(double *)&(this->SimulationSpace).AngularVelocity;
          dVar28 = *(double *)&(this->SimulationSpace).AngularVelocity.field_0x10;
          dVar5 = *(double *)&(this->SimulationSpace).AngularAcceleration.field_0x10;
          dVar7 = (this->SimulationSpaceSettings).CentrifugalAlpha;
          dVar35 = dVar27 * local_388 - dVar28 * local_390;
          dVar8 = (this->SimulationSpaceSettings).EulerAlpha;
          dVar29 = *(double *)&(this->SimulationSpace).AngularAcceleration.field_0x8;
          dVar9 = (this->SimulationSpaceSettings).LinearAccelerationAlpha;
          dVar10 = (this->SimulationSpaceSettings).CoriolisAlpha;
          dVar15 = dVar28 * local_398 - local_338 * local_388;
          dVar28 = *(double *)&(this->SimulationSpace).AngularAcceleration;
          dVar10 = dVar10 + dVar10;
          dVar11 = (this->SimulationSpaceSettings).AngularAccelerationAlpha;
          dVar16 = local_338 * local_390 - dVar27 * local_398;
          local_3a0 = *(double *)&(this->SimulationSpace).LinearVelocity;
          dVar27 = local_3b0 -
                   ((dVar29 * local_388 - dVar5 * local_390) * dVar8 +
                    (dVar16 * dVar27 -
                    dVar15 * *(double *)&(this->SimulationSpace).AngularVelocity.field_0x10) * dVar7
                    + (dVar27 * local_3c8 -
                      *(double *)&(this->SimulationSpace).AngularVelocity.field_0x10 * local_3d0) *
                      dVar10 +
                   (local_3a0 + local_3d8 + dVar35) *
                   *(double *)&(this->SimulationSpaceSettings).ExternalLinearEtherDrag +
                   dVar9 * *(double *)&(this->SimulationSpace).LinearAcceleration) * local_380;
          dVar36 = *(double *)&(this->SimulationSpace).AngularVelocity.field_0x10;
          dVar34 = local_3a8 -
                   ((dVar35 * dVar36 - dVar16 * local_338) * dVar7 +
                    (dVar5 * local_398 - dVar28 * local_388) * dVar8 +
                    dVar9 * *(double *)&(this->SimulationSpace).LinearAcceleration.field_0x8 +
                   (dVar36 * local_3d8 - local_338 * local_3c8) * dVar10 +
                   (local_3d0 + *(double *)&(this->SimulationSpace).LinearVelocity.field_0x8 +
                   dVar15) * *(double *)
                              &(this->SimulationSpaceSettings).ExternalLinearEtherDrag.field_0x8) *
                   local_380;
          local_340 = *(double *)&(this->SimulationSpace).AngularVelocity.field_0x8;
          dVar36 = local_320 - dVar11 * dVar28 * local_380;
          dVar6 = local_310 - dVar11 * dVar5 * local_380;
          dVar5 = (this->SimulationSpaceSettings).LinearVelocityAlpha;
          uVar41 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar42 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          local_3a0 = local_3a0 * (double)CONCAT44(uVar42,uVar41);
          local_350 = (double)CONCAT44(uVar42,uVar41) *
                      *(double *)&(this->SimulationSpace).LinearVelocity.field_0x8;
          dVar28 = local_360 -
                   ((dVar28 * local_390 - dVar29 * local_398) * dVar8 +
                    (dVar15 * local_338 - dVar35 * local_340) * dVar7 +
                    dVar9 * *(double *)&(this->SimulationSpace).LinearAcceleration.field_0x10 +
                   (local_338 * local_3d0 - local_340 * local_3d8) * dVar10 +
                   (local_3c8 + *(double *)&(this->SimulationSpace).LinearVelocity.field_0x10 +
                   dVar16) * *(double *)
                              &(this->SimulationSpaceSettings).ExternalLinearEtherDrag.field_0x10) *
                   local_380;
          local_358 = (double)CONCAT44(uVar42,uVar41) *
                      *(double *)&(this->SimulationSpace).LinearVelocity.field_0x10;
          dVar5 = local_318 - dVar11 * dVar29 * local_380;
          dVar7 = (this->SimulationSpaceSettings).AngularVelocityAlpha;
          uVar41 = SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar42 = (uint)((ulonglong)dVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          local_338 = (double)CONCAT44(uVar42,uVar41) * local_338;
          local_348 = (double)CONCAT44(uVar42,uVar41) *
                      *(double *)&(this->SimulationSpace).AngularVelocity.field_0x10;
          local_340 = (double)CONCAT44(uVar42,uVar41) * local_340;
          param_1 = local_380;
          local_3b0 = dVar27;
          local_3a8 = dVar34;
          dVar7 = local_3a0;
        }
        uVar42 = 0;
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        dVar8 = param_1 * *(double *)
                           ((this_00.PBDRigidParticles)->_padding_ + (longlong)(int)uVar21 * 8);
        if (__real_3ff0000000000000 <= dVar8) {
          dVar8 = __real_3ff0000000000000;
        }
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        dVar29 = param_1 * *(double *)
                            ((this_00.PBDRigidParticles)->_padding_ + (longlong)(int)uVar21 * 8);
        if (__real_3ff0000000000000 <= dVar29) {
          dVar29 = __real_3ff0000000000000;
        }
        local_3c8 = dVar8 * (local_358 - (dVar28 + local_3c8)) + dVar28 + local_3c8;
        local_3d0 = dVar8 * (local_350 - (dVar34 + local_3d0)) + dVar34 + local_3d0;
        local_3d8 = (dVar7 - (dVar27 + local_3d8)) * dVar8 + dVar27 + local_3d8;
        local_368 = dVar29 * (local_348 - (local_368 + dVar6)) + local_368 + dVar6;
        dStack_370 = dVar29 * (local_340 - (dStack_370 + dVar5)) + dStack_370 + dVar5;
        local_378 = (local_338 - (dVar36 + local_378)) * dVar29 + dVar36 + local_378;
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((*(ushort *)((this_00.PBDRigidParticles)->_padding_ + 8 + (longlong)(int)uVar21 * 0x10)
             >> 0xb & 1) != 0) {
          lVar25 = (longlong)(int)uVar21;
          uVar41 = uVar42;
          if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
            uVar41 = ~uVar21 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar24 = (this_00.PBDRigidParticles)->_padding_;
          local_2d8 = (double)*(float *)(lVar24 + 8 + lVar25 * 0xc);
          local_2e0 = (double)*(float *)(lVar24 + 4 + lVar25 * 0xc);
          local_2e8 = (double)*(float *)(lVar24 + lVar25 * 0xc);
          pTVar20 = Utilities::GetAngularVelocityAdjustedForGyroscopicTorques
                              (&local_1d8,(TRotation<double,3> *)(local_2a8 + 0x10),
                               (TVector<double,3> *)&local_2e8,(TVector<double,3> *)&local_378,
                               param_1);
          local_378 = *(double *)pTVar20;
          dStack_370 = *(double *)&pTVar20->field_0x8;
          local_368 = *(double *)&pTVar20->field_0x10;
        }
        local_2c8 = local_3d0 * param_1 + local_390;
        local_2d0 = param_1 * local_3d8 + local_398;
        local_2c0 = local_3c8 * param_1 + local_388;
        TRotation<double,3>::IntegrateRotationWithAngularVelocity
                  (&local_1f8,(TRotation<double,3> *)(local_2a8 + 0x10),
                   (TVector<double,3> *)&local_378,param_1);
        TPBDRigidParticles<double,3>::SetTransformPQCom
                  (this_00.PBDRigidParticles,uVar21,(TVector<double,3> *)&local_2d0,&local_1f8);
        TKinematicGeometryParticlesImp<double,3,0>::SetV
                  (this_00.KinematicGeometryParticles,uVar21,(TVector<double,3> *)&local_3d8);
        TKinematicGeometryParticlesImp<double,3,0>::SetW
                  (this_00.KinematicGeometryParticles,uVar21,(TVector<double,3> *)&local_378);
        uVar41 = uVar42;
        if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar41 = ~uVar21 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar24 = (longlong)(int)uVar21;
        lVar25 = (this_00.PBDRigidParticles)->_padding_;
        *(undefined8 *)(lVar25 + lVar24 * 0x18) = 0;
        *(undefined8 *)(lVar25 + 8 + lVar24 * 0x18) = 0;
        *(undefined8 *)(lVar25 + 0x10 + lVar24 * 0x18) = 0;
        lVar25 = (longlong)(int)uStack_3f0;
        uVar33 = local_408._16_8_;
        uVar41 = uVar42;
        if ((int)uStack_3f0 < (int)*(longlong *)(local_408._16_8_ + 0x370)) {
          uVar41 = ~uStack_3f0 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar24 = *(longlong *)(uVar33 + 0x368);
        *(undefined8 *)(lVar24 + lVar25 * 0x18) = 0;
        *(undefined8 *)(lVar24 + 8 + lVar25 * 0x18) = 0;
        *(undefined8 *)(lVar24 + 0x10 + lVar25 * 0x18) = 0;
        uVar41 = uStack_3f0;
        uVar23 = (ulonglong)(int)uStack_3f0;
        this_00 = (TParticleHandleBase<double,3>_u_0)local_408._16_8_;
        uVar21 = uVar42;
        if ((int)uStack_3f0 <
            *(int *)&((TArrayCollectionArray<Chaos::TRotation<float,3>_> *)
                     (local_408._16_8_ + 0x558))->field_0x10) {
          uVar21 = ~uStack_3f0 >> 0x1f;
        }
        uVar30 = SUB84(param_1 * local_3d8,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar31 = (uint)((ulonglong)(param_1 * local_3d8) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        uVar32 = SUB84(local_3d0 * param_1,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar37 = (uint)((ulonglong)(local_3d0 * param_1) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar27 = (double)CONCAT44(uVar37,uVar32);
        uVar39 = SUB84(local_3c8 * param_1,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar40 = (uint)((ulonglong)(local_3c8 * param_1) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = *(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x560);
        fVar2 = *(float *)(lVar25 + uVar23 * 0x10);
        fVar3 = *(float *)(lVar25 + 4 + uVar23 * 0x10);
        uVar33 = *(undefined8 *)(lVar25 + 8 + uVar23 * 0x10);
        dVar28 = (double)(float)((ulonglong)uVar33 >> 0x20);
        uVar21 = uVar42;
        if ((int)uVar41 <
            *(int *)&((TArrayCollectionArray<Chaos::TVector<double,3>_> *)
                     ((longlong)this_00.PBDRigidParticles + 0x540))->field_0x10) {
          uVar21 = ~uVar41 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_128._8_4_ = SUB84(dVar28,0);
        local_128._0_8_ = (double)(float)uVar33;
        local_128._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        lVar25 = (longlong)(int)uVar41;
        local_108 = *(undefined8 *)
                     (*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x548) + 0x10 +
                     (longlong)(int)uVar41 * 0x18);
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x548) +
                 (longlong)(int)uVar41 * 0x18);
        local_118 = *puVar1;
        uStack_110 = puVar1[1];
        local_f8 = ___xmm_3ff00000000000003ff0000000000000;
        uStack_f0 = _UNK_150689688;
        local_e8 = ___xmm_00000000000000003ff0000000000000;
        uStack_e0 = _UNK_150689518;
        uStack_100 = 0;
        local_138 = (double)fVar2;
        dStack_130 = (double)fVar3;
        TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                  (this_00.GeometryParticles,uVar41,(TRigidTransform<double,3> *)&local_138,
                   (TVector<double,3> *)local_2b8);
        if ((int)uVar41 <
            (int)*(longlong *)
                  &((TArrayCollectionArray<Chaos::TAABB<double,3>_> *)
                   ((longlong)this_00.GeometryParticles + 0x138))->field_0x10) {
          uVar42 = ~uVar41 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar24 = *(longlong *)((longlong)this_00.KinematicGeometryParticles + 0x140);
        dVar28 = (double)CONCAT44(uVar31,uVar30);
        if (0.0 <= dVar28) {
          dVar28 = 0.0;
        }
        dVar36 = dVar27;
        if (dVar27 <= 0.0) {
          dVar36 = 0.0;
        }
        if (0.0 <= dVar27) {
          uVar32 = 0;
          uVar37 = 0;
        }
        if ((double)CONCAT44(uVar31,uVar30) <= 0.0) {
          uVar30 = 0;
          uVar31 = 0;
        }
        *(double *)(lVar24 + lVar25 * 0x30) = dVar28 + *(double *)(lVar24 + lVar25 * 0x30);
        dVar27 = (double)CONCAT44(uVar40,uVar39);
        if (0.0 <= dVar27) {
          dVar27 = 0.0;
        }
        *(double *)(lVar24 + 8 + lVar25 * 0x30) =
             (double)CONCAT44(uVar37,uVar32) + *(double *)(lVar24 + 8 + lVar25 * 0x30);
        if ((double)CONCAT44(uVar40,uVar39) <= 0.0) {
          uVar39 = 0;
          uVar40 = 0;
        }
        *(double *)(lVar24 + 0x10 + lVar25 * 0x30) =
             dVar27 + *(double *)(lVar24 + 0x10 + lVar25 * 0x30);
        *(double *)(lVar24 + 0x20 + lVar25 * 0x30) =
             dVar36 + *(double *)(lVar24 + 0x20 + lVar25 * 0x30);
        uVar38 = _UNK_15061cbc8;
        uVar33 = ___xmm_3ff00000000000000000000000000000;
        *(double *)(lVar24 + 0x18 + lVar25 * 0x30) =
             (double)CONCAT44(uVar31,uVar30) + *(double *)(lVar24 + 0x18 + lVar25 * 0x30);
        *(double *)(lVar24 + 0x28 + lVar25 * 0x30) =
             (double)CONCAT44(uVar40,uVar39) + *(double *)(lVar24 + 0x28 + lVar25 * 0x30);
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_408);
      do {
        uVar4 = local_408._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_408._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar41 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar41;
          uStack_3f0 = uVar41;
          if (local_3e4 <= (int)uVar41) {
LAB_143b24129:
            local_3e8 = local_3e8 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_408);
            uVar23 = (ulonglong)uStack_3f0;
            this_00 = (TParticleHandleBase<double,3>_u_0)local_408._16_8_;
          }
        }
        else {
          iVar22 = local_3e0 + 1;
          local_3e0 = iVar22;
          if (*(int *)(local_408._8_8_ + 8) <= iVar22) goto LAB_143b24129;
          if ((iVar22 < 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pauVar13 = *(undefined1 (**) [12])
                      (((ForAnyElementType *)uVar4)->Data + (longlong)iVar22 * 8);
          local_330 = *(longlong *)*pauVar13;
          uStack_328 = *(uint *)(*pauVar13 + 8);
          auVar17 = *pauVar13;
          if (local_330 == 0) {
            iStack_324 = (uint)iStack_324._1_3_ << 8;
          }
          else {
            iStack_324 = CONCAT31(iStack_324._1_3_,*(undefined1 *)(local_330 + 0x70));
          }
          uStack_3ec = iStack_324;
          local_408._16_8_ = auVar17._0_8_;
          uStack_3f0 = auVar17._8_4_;
          this_00 = auVar17._0_8_;
          uVar23 = (ulonglong)uStack_328;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) goto LAB_143b241d6;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_408);
        bVar18 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_408 + 0x10));
      } while (bVar18);
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
LAB_143b241d6:
  if ((local_3c0.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_3c0.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_3c0.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_3c0.StatId,CycleScopeEnd);
  }
  return;
}

// PrepareTick @ 143b2c050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDMinEvolution::PrepareTick(FPBDMinEvolution *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_PrepareTick> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar13.Value = 0;
  FVar8 = StatPtr_STAT_MinEvolution_PrepareTick;
  if (StatPtr_STAT_MinEvolution_PrepareTick ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_PrepareTick>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_MinEvolution_PrepareTick");
    FVar8 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_PrepareTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_PrepareTick,*pFVar7,
                       L"MinEvolution::PrepareTick","STATGROUP_ChaosMinEvolution","STATCAT_Advanced"
                       ,L"ChaosMinEvolution",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x9d);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = FVar10.Value;
      goto LAB_143b2c1b7;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_143b2c1b7:
  pFVar12 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar3 = (this->ConstraintContainers).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar12 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar12 + 0x20))();
    pFVar12 = pFVar12 + 8;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Rewind @ 143b38ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDMinEvolution::Rewind(FPBDMinEvolution *this,double param_1,double param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  TRotation<float,3> TVar10;
  TArrayCollectionArray<Chaos::TVector<double,3>_> *pTVar11;
  TArrayCollectionArray<Chaos::TRotation<double,3>_> *pTVar12;
  TParticleHandleBase<double,3>_u_0 *pTVar13;
  code *pcVar14;
  double dVar15;
  float fVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  bool bVar26;
  uint uVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Rewind> FVar29;
  TVector<double,3> *pTVar30;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar31;
  longlong lVar32;
  TQuat<float> *pTVar33;
  TRotation<float,3> *pTVar34;
  FName FVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  int iVar39;
  longlong lVar40;
  TParticleHandleBase<double,3>_u_0 this_00;
  TParticleHandleBase<double,3>_u_0 TVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  undefined1 local_288 [24];
  ulonglong uStack_270;
  int local_268;
  int local_264;
  int local_260;
  undefined1 local_258 [24];
  uint uStack_240;
  undefined4 uStack_23c;
  int local_238;
  int local_234;
  int local_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_21c;
  float local_214;
  FName local_210;
  float local_200;
  float local_1fc;
  float local_1f8;
  TVector<float,3> local_1f4;
  TVector<float,3> local_1e8;
  TQuat<float> local_1d8;
  TParticleHandleBase<double,3>_u_0 local_1c8;
  uint uStack_1c0;
  int iStack_1bc;
  TParticleHandleBase<double,3>_u_0 local_1b8;
  uint uStack_1b0;
  int iStack_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  uint local_188;
  undefined8 local_184;
  uint local_17c;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  TQuat<float> local_128;
  TRotation<float,3> local_118;
  TRotation<float,3> local_108;
  TQuat<float> local_f8;
  TRotation<float,3> local_e8;
  TRotation<float,3> local_d8 [9];
  
  FVar29 = StatPtr_STAT_MinEvolution_Rewind;
  if (StatPtr_STAT_MinEvolution_Rewind ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Rewind>)0x0) {
    pFVar28 = ::FName::FName(&local_res20,"STAT_MinEvolution_Rewind");
    FVar29 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Rewind>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_Rewind,*pFVar28,
                        L"MinEvolution::Rewind","STATGROUP_ChaosMinEvolution","STATCAT_Advanced",
                        L"ChaosMinEvolution",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar29;
  bVar19 = false;
  bVar18 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar26 = false;
  bVar25 = false;
  if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar19 = false;
      bVar18 = true;
      bVar26 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_res18.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0xb2);
        bVar19 = true;
        bVar18 = true;
        bVar26 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar25 = true;
      goto LAB_143b3906e;
    }
  }
  bVar19 = bVar26;
  bVar18 = bVar25;
  bVar25 = false;
  FVar35 = local_210;
LAB_143b3906e:
  dVar15 = (param_1 - param_2) / param_1;
  if (5 < (byte)LogChaosMinEvolution._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosMinEvolution);
  }
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_288,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveParticlesView);
  fVar24 = _UNK_1506895dc;
  fVar23 = _UNK_1506895d8;
  fVar22 = _UNK_1506895d4;
  fVar21 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  uVar20 = __xmm_80000000800000008000000080000000;
  if ((TPBDRigidParticles<double,3> *)local_288._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    uVar38 = uStack_270 & 0xffffffff;
    TVar41 = (TParticleHandleBase<double,3>_u_0)local_288._16_8_;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_288);
      uVar36 = (uint)uVar38;
      uVar37 = 0;
      if ((int)uVar36 < (int)(TVar41.PBDRigidParticles)->_padding_) {
        uVar37 = ~uVar36 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (*(char *)((TVar41.PBDRigidParticles)->_padding_ + 0xb + (longlong)(int)uVar36 * 0x10) ==
          '\x04') {
        pTVar30 = TParticles<double,3>::GetX
                            ((TParticles<double,3> *)TVar41.GeometryParticles,uVar36);
        pTVar31 = TPBDRigidParticles<double,3>::Handle(TVar41.PBDRigidParticles,uVar36);
        pTVar11 = this->ParticlePrevXs;
        uVar37 = *(uint *)&pTVar31->field_0x10;
        lVar40 = (longlong)(int)uVar37;
        uVar27 = 0;
        if ((int)uVar37 < *(int *)&pTVar11->field_0x10) {
          uVar27 = ~uVar37 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar32 = *(longlong *)&pTVar11->field_0x8;
        dVar2 = *(double *)pTVar30;
        dVar3 = *(double *)&pTVar30->field_0x8;
        dVar4 = *(double *)&pTVar30->field_0x10;
        dVar5 = *(double *)(lVar32 + lVar40 * 0x18);
        dVar42 = *(double *)(lVar32 + 8 + lVar40 * 0x18);
        dVar43 = *(double *)(lVar32 + 0x10 + lVar40 * 0x18);
        dVar6 = *(double *)(lVar32 + lVar40 * 0x18);
        dVar7 = *(double *)(lVar32 + 8 + lVar40 * 0x18);
        dVar8 = *(double *)(lVar32 + 0x10 + lVar40 * 0x18);
        uVar37 = 0;
        if ((int)uVar36 < (int)(TVar41.GeometryParticles)->_padding_) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        this_00 = (TParticleHandleBase<double,3>_u_0)local_288._16_8_;
        lVar32 = (longlong)(int)uVar36;
        lVar40 = (TVar41.GeometryParticles)->_padding_;
        *(double *)(lVar40 + lVar32 * 0x18) = (dVar2 - dVar5) * dVar15 + dVar6;
        *(double *)(lVar40 + 8 + lVar32 * 0x18) = (dVar3 - dVar42) * dVar15 + dVar7;
        *(double *)(lVar40 + 0x10 + lVar32 * 0x18) = (dVar4 - dVar43) * dVar15 + dVar8;
        uVar37 = (uint)uStack_270;
        uVar38 = (ulonglong)(int)(uint)uStack_270;
        uVar36 = 0;
        if ((int)(uint)uStack_270 < (int)*(longlong *)(local_288._16_8_ + 0x50)) {
          uVar36 = ~(uint)uStack_270 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)this_00.GeometryParticles + 0x48) + uVar38 * 0x10);
        local_128._0_8_ = *puVar1;
        local_128._8_8_ = puVar1[1];
        pTVar31 = TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar37);
        pTVar12 = this->ParticlePrevRs;
        uVar36 = *(uint *)&pTVar31->field_0x10;
        uVar27 = 0;
        if ((int)uVar36 < *(int *)&pTVar12->field_0x10) {
          uVar27 = ~uVar36 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar40 = *(longlong *)&pTVar12->field_0x8;
        fVar54 = (float)dVar15;
        lVar32 = (longlong)(int)uVar36 * 0x20;
        local_1d8.W = (float)*(double *)(lVar32 + 0x18 + lVar40);
        local_1d8.Z = (float)*(double *)(lVar32 + 0x10 + lVar40);
        local_1d8.Y = (float)*(double *)(lVar32 + 8 + lVar40);
        local_1d8.X = (float)*(double *)(lVar32 + lVar40);
        pTVar33 = UE::Math::TQuat<float>::Slerp_NotNormalized
                            (&local_f8,&local_1d8,&local_128,fVar54);
        fVar50 = pTVar33->X;
        fVar52 = pTVar33->Y;
        fVar53 = pTVar33->Z;
        fVar16 = pTVar33->W;
        uVar36 = 0;
        if ((int)uVar37 < (int)*(longlong *)((longlong)this_00.GeometryParticles + 0x50)) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        fVar46 = fVar52 * fVar52 + fVar50 * fVar50;
        fVar47 = fVar50 * fVar50 + fVar52 * fVar52;
        fVar48 = fVar16 * fVar16 + fVar53 * fVar53;
        fVar49 = fVar53 * fVar53 + fVar16 * fVar16;
        auVar44._0_4_ = fVar48 + fVar46;
        auVar44._4_4_ = fVar49 + fVar47;
        auVar44._8_4_ = fVar46 + fVar48;
        auVar44._12_4_ = fVar47 + fVar49;
        auVar45 = sqrtps(auVar44,auVar44);
        auVar45 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar45);
        auVar51._0_4_ = (uint)(auVar45._0_4_ * fVar50) & -(uint)(fVar21 <= auVar44._0_4_);
        auVar51._4_4_ = (uint)(auVar45._4_4_ * fVar52) & -(uint)(fVar22 <= auVar44._4_4_);
        auVar51._8_4_ = (uint)(auVar45._8_4_ * fVar53) & -(uint)(fVar23 <= auVar44._8_4_);
        auVar51._12_4_ = (uint)(auVar45._12_4_ * fVar16) & -(uint)(fVar24 <= auVar44._12_4_);
        auVar45._4_4_ =
             ~-(uint)(fVar22 <= auVar44._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
        auVar45._0_4_ =
             ~-(uint)(fVar21 <= auVar44._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
        auVar45._8_4_ =
             ~-(uint)(fVar23 <= auVar44._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
        auVar45._12_4_ =
             ~-(uint)(fVar24 <= auVar44._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
        if ((uVar36 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        *(undefined1 (*) [16])
         (*(longlong *)((longlong)this_00.GeometryParticles + 0x48) + (longlong)(int)uVar37 * 0x10)
             = auVar51 | auVar45;
        if (this->bRewindVelocities != false) {
          uVar36 = 0;
          if ((int)uVar37 <
              (int)*(longlong *)
                    &((TArrayCollectionArray<Chaos::TVector<float,3>_> *)
                     ((longlong)this_00.KinematicGeometryParticles + 0x288))->field_0x10) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_228 = *(undefined8 *)
                       (*(longlong *)((longlong)this_00.PBDRigidParticles + 0x290) +
                       (longlong)(int)uVar37 * 0xc);
          local_220 = *(float *)(*(longlong *)((longlong)this_00.PBDRigidParticles + 0x290) + 8 +
                                (longlong)(int)uVar37 * 0xc);
          uVar36 = 0;
          if ((int)uVar37 <
              *(int *)&((TArrayCollectionArray<Chaos::TVector<float,3>_> *)
                       ((longlong)this_00.PBDRigidParticles + 0x570))->field_0x10) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar9 = *(undefined8 *)
                   (*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x578) +
                   (longlong)(int)uVar37 * 0xc);
          local_1a0 = *(float *)(*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x578)
                                 + 8 + (longlong)(int)uVar37 * 0xc);
          local_200 = ((float)local_228 - (float)uVar9) * fVar54 + (float)uVar9;
          local_1a8._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
          local_1fc = (local_228._4_4_ - local_1a8._4_4_) * fVar54 + local_1a8._4_4_;
          local_1f8 = (local_220 - local_1a0) * fVar54 + local_1a0;
          local_1a8 = uVar9;
          TKinematicGeometryParticlesImp<double,3,0>::SetVf
                    (this_00.KinematicGeometryParticles,uVar37,(TVector<float,3> *)&local_200);
          uVar36 = 0;
          if ((int)uVar37 <
              (int)*(longlong *)
                    &((TArrayCollectionArray<Chaos::TVector<float,3>_> *)
                     ((longlong)this_00.KinematicGeometryParticles + 0x2a0))->field_0x10) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_21c = *(undefined8 *)
                       (*(longlong *)((longlong)this_00.PBDRigidParticles + 0x2a8) +
                       (longlong)(int)uVar37 * 0xc);
          local_214 = *(float *)(*(longlong *)((longlong)this_00.PBDRigidParticles + 0x2a8) + 8 +
                                (longlong)(int)uVar37 * 0xc);
          uVar36 = 0;
          if ((int)uVar37 <
              *(int *)&((TArrayCollectionArray<Chaos::TVector<float,3>_> *)
                       ((longlong)this_00.PBDRigidParticles + 0x588))->field_0x10) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar9 = *(undefined8 *)
                   (*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x590) +
                   (longlong)(int)uVar37 * 0xc);
          local_194 = *(float *)(*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x590)
                                 + 8 + (longlong)(int)uVar37 * 0xc);
          fVar50 = (float)local_21c - (float)uVar9;
          local_19c._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
          fVar52 = (local_21c._4_4_ - local_19c._4_4_) * fVar54 + local_19c._4_4_;
          uVar36 = 0;
          if ((int)uVar37 <
              (int)*(longlong *)
                    &((TArrayCollectionArray<Chaos::TVector<float,3>_> *)
                     ((longlong)this_00.KinematicGeometryParticles + 0x2a0))->field_0x10) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          fVar53 = (local_214 - local_194) * fVar54 + local_194;
          local_19c = uVar9;
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar32 = (longlong)(int)uVar37;
          lVar40 = *(longlong *)((longlong)this_00.PBDRigidParticles + 0x2a8);
          *(float *)(lVar40 + lVar32 * 0xc) = fVar50 * fVar54 + (float)uVar9;
          *(float *)(lVar40 + 4 + lVar32 * 0xc) = fVar52;
          *(float *)(lVar40 + 8 + lVar32 * 0xc) = fVar53;
          uVar38 = uStack_270 & 0xffffffff;
          this_00 = (TParticleHandleBase<double,3>_u_0)local_288._16_8_;
        }
      }
      else {
        uVar37 = 0;
        if ((int)uVar36 < (int)(TVar41.PBDRigidParticles)->_padding_) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        this_00 = TVar41;
        if (*(char *)((TVar41.PBDRigidParticles)->_padding_ + 0xb + (longlong)(int)uVar36 * 0x10) ==
            '\x02') {
          pTVar30 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)TVar41.GeometryParticles,uVar36);
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    (TVar41.KinematicGeometryParticles,(TVector<double,3> *)&local_178,uVar36);
          dVar2 = *(double *)&pTVar30->field_0x10;
          dVar3 = *(double *)&pTVar30->field_0x8;
          dVar4 = *(double *)pTVar30;
          dVar42 = local_168 * param_2;
          dVar5 = local_170 * param_2;
          uVar37 = 0;
          if ((int)uVar36 < (int)(TVar41.GeometryParticles)->_padding_) {
            uVar37 = ~uVar36 >> 0x1f;
          }
          dVar43 = local_178 * param_2;
          if ((uVar37 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          this_00 = (TParticleHandleBase<double,3>_u_0)local_288._16_8_;
          lVar32 = (longlong)(int)uVar36;
          lVar40 = (TVar41.GeometryParticles)->_padding_;
          *(double *)(lVar40 + lVar32 * 0x18) = dVar4 - dVar43;
          *(double *)(lVar40 + 8 + lVar32 * 0x18) = dVar3 - dVar5;
          *(double *)(lVar40 + 0x10 + lVar32 * 0x18) = dVar2 - dVar42;
          uVar37 = (uint)uStack_270;
          uVar38 = (ulonglong)(int)(uint)uStack_270;
          uVar36 = 0;
          if ((int)(uint)uStack_270 <
              (int)*(longlong *)
                    &((TArrayCollectionArray<Chaos::TVector<float,3>_> *)(local_288._16_8_ + 0x2a0))
                     ->field_0x10) {
            uVar36 = ~(uint)uStack_270 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          local_190 = *(undefined8 *)
                       (*(longlong *)((longlong)this_00.PBDRigidParticles + 0x2a8) + uVar38 * 0xc);
          local_188 = *(uint *)(*(longlong *)((longlong)this_00.PBDRigidParticles + 0x2a8) + 8 +
                               uVar38 * 0xc);
          local_1f4._0_4_ = (uint)local_190 ^ uVar20;
          local_1f4._8_4_ = local_188 ^ uVar20;
          local_1f4._4_4_ = (uint)((ulonglong)local_190 >> 0x20) ^ uVar20;
          uVar36 = 0;
          if ((int)uVar37 < (int)*(longlong *)((longlong)this_00.GeometryParticles + 0x50)) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          puVar1 = (undefined8 *)
                   (*(longlong *)((longlong)this_00.GeometryParticles + 0x48) +
                   (longlong)(int)uVar37 * 0x10);
          local_118._0_8_ = *puVar1;
          local_118._8_8_ = puVar1[1];
          pTVar34 = TRotation<float,3>::IntegrateRotationWithAngularVelocity
                              (&local_e8,&local_118,&local_1f4,(float)param_2);
          TVar10 = *pTVar34;
          uVar36 = 0;
          if ((int)uVar37 < (int)*(longlong *)((longlong)this_00.GeometryParticles + 0x50)) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          *(TRotation<float,3> *)
           (*(longlong *)((longlong)this_00.GeometryParticles + 0x48) + (longlong)(int)uVar37 * 0x10
           ) = TVar10;
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_288);
      do {
        uVar9 = local_288._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_288._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar37 = (int)uVar38 + 1;
          uVar38 = (ulonglong)uVar37;
          uStack_270 = CONCAT44(uStack_270._4_4_,uVar37);
          if (local_264 <= (int)uVar37) {
LAB_143b39a77:
            local_268 = local_268 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_288);
            uVar38 = uStack_270 & 0xffffffff;
            this_00 = (TParticleHandleBase<double,3>_u_0)local_288._16_8_;
          }
        }
        else {
          iVar39 = local_260 + 1;
          local_260 = iVar39;
          if (*(int *)(local_288._8_8_ + 8) <= iVar39) goto LAB_143b39a77;
          if ((iVar39 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pTVar13 = *(TParticleHandleBase<double,3>_u_0 **)
                     (((ForAnyElementType *)uVar9)->Data + (longlong)iVar39 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar13->PBDRigidParticles;
          uStack_1c0 = *(uint *)(pTVar13 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_1bc = (uint)iStack_1bc._1_3_ << 8;
          }
          else {
            iStack_1bc = CONCAT31(iStack_1bc._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_270 = CONCAT44(iStack_1bc,uStack_1c0);
          uVar38 = (ulonglong)uStack_1c0;
          local_288._16_8_ = this_00;
          local_1c8 = this_00;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) goto LAB_143b39ad6;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_288);
        bVar26 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_288 + 0x10));
      } while (bVar26);
      TVar41 = this_00;
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
LAB_143b39ad6:
  TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)local_258
             ,(TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
               *)&this->Particles->ActiveKinematicParticlesView);
  if ((TKinematicGeometryParticlesImp<double,3,0> *)local_258._16_8_ !=
      (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
    TVar41 = (TParticleHandleBase<double,3>_u_0)local_258._16_8_;
    uVar37 = uStack_240;
    do {
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
      RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                           *)local_258);
      pTVar30 = TParticles<double,3>::GetX((TParticles<double,3> *)TVar41.GeometryParticles,uVar37);
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                (TVar41.KinematicGeometryParticles,(TVector<double,3> *)&local_160,uVar37);
      local_148 = *(double *)pTVar30 - local_160 * param_2;
      local_140 = *(double *)&pTVar30->field_0x8 - local_158 * param_2;
      local_138 = *(double *)&pTVar30->field_0x10 - local_150 * param_2;
      TParticles<double,3>::SetX
                ((TParticles<double,3> *)TVar41.GeometryParticles,uVar37,
                 (TVector<double,3> *)&local_148);
      uVar36 = 0;
      if ((int)uVar37 < *(int *)&((TVar41.KinematicGeometryParticles)->MW).field_0x10) {
        uVar36 = ~uVar37 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      local_184 = *(undefined8 *)
                   ((TVar41.PBDRigidParticles)->_padding_ + (longlong)(int)uVar37 * 0xc);
      local_17c = *(uint *)((TVar41.PBDRigidParticles)->_padding_ + 8 + (longlong)(int)uVar37 * 0xc)
      ;
      local_1e8._0_4_ = (uint)local_184 ^ uVar20;
      local_1e8._8_4_ = local_17c ^ uVar20;
      local_1e8._4_4_ = (uint)((ulonglong)local_184 >> 0x20) ^ uVar20;
      uVar36 = 0;
      if ((int)uVar37 < (int)(TVar41.GeometryParticles)->_padding_) {
        uVar36 = ~uVar37 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      puVar1 = (undefined8 *)((TVar41.GeometryParticles)->_padding_ + (longlong)(int)uVar37 * 0x10);
      local_108._0_8_ = *puVar1;
      local_108._8_8_ = puVar1[1];
      pTVar34 = TRotation<float,3>::IntegrateRotationWithAngularVelocity
                          (local_d8,&local_108,&local_1e8,(float)param_2);
      uVar9 = *(undefined8 *)pTVar34;
      uVar17 = *(undefined8 *)&pTVar34->field_0x8;
      uVar36 = 0;
      if ((int)uVar37 < (int)(TVar41.GeometryParticles)->_padding_) {
        uVar36 = ~uVar37 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      puVar1 = (undefined8 *)((TVar41.GeometryParticles)->_padding_ + (longlong)(int)uVar37 * 0x10);
      *puVar1 = uVar9;
      puVar1[1] = uVar17;
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
      RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                           *)local_258);
      do {
        uVar9 = local_258._8_8_;
        if ((TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
             *)local_258._8_8_ ==
            (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
             *)0x0) {
          uVar37 = uVar37 + 1;
          uStack_240 = uVar37;
          if (local_234 <= (int)uVar37) {
LAB_143b39d45:
            local_238 = local_238 + 1;
            TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
            SeekNonEmptySOA((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                             *)local_258);
            TVar41 = (TParticleHandleBase<double,3>_u_0)local_258._16_8_;
            uVar37 = uStack_240;
          }
        }
        else {
          iVar39 = local_230 + 1;
          local_230 = iVar39;
          if (*(int *)(local_258._8_8_ + 8) <= iVar39) goto LAB_143b39d45;
          if ((iVar39 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pTVar13 = *(TParticleHandleBase<double,3>_u_0 **)
                     (((ForAnyElementType *)uVar9)->Data + (longlong)iVar39 * 8);
          TVar41 = (TParticleHandleBase<double,3>_u_0)pTVar13->PBDRigidParticles;
          uVar37 = *(uint *)(pTVar13 + 1);
          if ((TKinematicGeometryParticlesImp<double,3,0> *)TVar41.GeometryParticles ==
              (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_1ac = (uint)iStack_1ac._1_3_ << 8;
          }
          else {
            iStack_1ac = CONCAT31(iStack_1ac._1_3_,(TVar41.GeometryParticles)->MParticleType);
          }
          uStack_23c = iStack_1ac;
          uStack_240 = uVar37;
          local_258._16_8_ = TVar41;
          local_1b8 = TVar41;
          uStack_1b0 = uVar37;
        }
        if ((TKinematicGeometryParticlesImp<double,3,0> *)TVar41.GeometryParticles ==
            (TKinematicGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143b39d7c;
        TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                             *)local_258);
        bVar26 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_258 + 0x10));
      } while (bVar26);
    } while ((TKinematicGeometryParticlesImp<double,3,0> *)TVar41.GeometryParticles !=
             (TKinematicGeometryParticlesImp<double,3,0> *)0x0);
  }
LAB_143b39d7c:
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar25) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  return;
}

// ScatterOutput @ 143b3a280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDMinEvolution::ScatterOutput(FPBDMinEvolution *this,double param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TArrayCollectionArray<Chaos::TVector<double,3>_> *pTVar6;
  TArrayCollectionArray<Chaos::TRotation<double,3>_> *pTVar7;
  TParticleHandleBase<double,3>_u_0 *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Scatter> FVar20;
  TVector<double,3> *pTVar21;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar22;
  FName FVar23;
  TParticleHandleBase<double,3>_u_0 this_00;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  FColor_u_0 local_res20 [2];
  FName local_d8;
  FName local_d0;
  FName local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  TParticleHandleBase<double,3>_u_0 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [24];
  ulonglong uStack_80;
  int local_78;
  int local_74;
  int local_70;
  
  FVar20 = StatPtr_STAT_MinEvolution_Scatter;
  if (StatPtr_STAT_MinEvolution_Scatter ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Scatter>)0x0) {
    pFVar19 = ::FName::FName(&local_d0,"STAT_MinEvolution_Scatter");
    FVar20 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_Scatter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_Scatter,*pFVar19,
                        L"MinEvolution::Scatter","STATGROUP_ChaosMinEvolution","STATCAT_Advanced",
                        L"ChaosMinEvolution",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar20;
  bVar15 = false;
  bVar14 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar17 = false;
  bVar16 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar15 = false;
      bVar14 = true;
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_d8.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0x225);
        bVar15 = true;
        bVar14 = true;
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar16 = true;
      goto LAB_143b3a3de;
    }
  }
  bVar15 = bVar17;
  bVar14 = bVar16;
  bVar16 = false;
  FVar23 = local_c8;
LAB_143b3a3de:
  uVar24 = 0;
  if (0 < *(int *)&(this->ConstraintSolver).field_0x90) {
    lVar28 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar24 < *(int *)&(this->ConstraintSolver).field_0x90) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(longlong *)(lVar28 + *(longlong *)&(this->ConstraintSolver).field_0x88) != 0) {
        uVar18 = 0;
        if ((int)uVar24 < *(int *)&(this->ConstraintSolver).field_0x90) {
          uVar18 = ~uVar24 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar5 = *(longlong **)(lVar28 + *(longlong *)&(this->ConstraintSolver).field_0x88);
        (**(code **)(*plVar5 + 0x48))(plVar5,SUB84(param_1,0));
      }
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 8;
    } while ((int)uVar24 < *(int *)&(this->ConstraintSolver).field_0x90);
  }
  FSolverBodyContainer::ScatterOutput
            ((FSolverBodyContainer *)&(this->ConstraintSolver).field_0x8,0,
             *(int *)&(this->ConstraintSolver).field_0x18);
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveParticlesView);
  if ((TPBDRigidParticles<double,3> *)local_98._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    uVar27 = uStack_80 & 0xffffffff;
    this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      uVar25 = (uint)uVar27;
      pTVar21 = TParticles<double,3>::GetX((TParticles<double,3> *)this_00.GeometryParticles,uVar25)
      ;
      uVar12 = *(undefined8 *)pTVar21;
      uVar13 = *(undefined8 *)&pTVar21->field_0x8;
      uVar4 = *(undefined8 *)&pTVar21->field_0x10;
      pTVar22 = TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar25);
      pTVar6 = this->ParticlePrevXs;
      uVar24 = *(uint *)&pTVar22->field_0x10;
      uVar18 = 0;
      if ((int)uVar24 < *(int *)&pTVar6->field_0x10) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar28 = *(longlong *)&pTVar6->field_0x8;
      lVar29 = (longlong)(int)uVar25;
      puVar1 = (undefined8 *)(lVar28 + (longlong)(int)uVar24 * 0x18);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      *(undefined8 *)(lVar28 + 0x10 + (longlong)(int)uVar24 * 0x18) = uVar4;
      uVar24 = 0;
      if ((int)uVar25 < (int)(this_00.GeometryParticles)->_padding_) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar28 = (this_00.GeometryParticles)->_padding_;
      fVar2 = *(float *)(lVar28 + lVar29 * 0x10);
      fVar3 = *(float *)(lVar28 + 0xc + lVar29 * 0x10);
      uVar4 = *(undefined8 *)(lVar28 + 4 + lVar29 * 0x10);
      pTVar22 = TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar25);
      pTVar7 = this->ParticlePrevRs;
      uVar24 = *(uint *)&pTVar22->field_0x10;
      dVar11 = (double)(float)((ulonglong)uVar4 >> 0x20);
      uVar18 = 0;
      if ((int)uVar24 < *(int *)&pTVar7->field_0x10) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
      lVar28 = *(longlong *)&pTVar7->field_0x8;
      lVar29 = (longlong)(int)uVar24 * 0x20;
      *(double *)(lVar29 + lVar28) = (double)fVar2;
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ = (double)(float)uVar4;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + 8 + lVar28) = auVar10;
      *(double *)(lVar29 + 0x18 + lVar28) = (double)fVar3;
      uVar24 = (uint)uStack_80;
      uVar27 = (ulonglong)(int)(uint)uStack_80;
      uVar18 = 0;
      if ((int)(uint)uStack_80 <
          *(int *)&((TArrayCollectionArray<Chaos::TVector<double,3>_> *)(local_98._16_8_ + 0x540))->
                   field_0x10) {
        uVar18 = ~(uint)uStack_80 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TParticles<double,3>::SetX
                ((TParticles<double,3> *)this_00.GeometryParticles,uVar24,
                 (TVector<double,3> *)
                 (*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x548) +
                 uVar27 * 0x18));
      uVar18 = 0;
      if ((int)uVar24 <
          *(int *)&((TArrayCollectionArray<Chaos::TRotation<float,3>_> *)
                   ((longlong)this_00.PBDRigidParticles + 0x558))->field_0x10) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)this_00.PBDRigidClusteredParticles + 0x560) +
               (longlong)(int)uVar24 * 0x10);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      uVar18 = 0;
      if ((int)uVar24 < (int)*(longlong *)((longlong)this_00.GeometryParticles + 0x50)) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)this_00.GeometryParticles + 0x48) +
               (longlong)(int)uVar24 * 0x10);
      *puVar1 = local_b8;
      puVar1[1] = uStack_b0;
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      do {
        uVar4 = local_98._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_98._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar24 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar24;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar24);
          if (local_74 <= (int)uVar24) {
LAB_143b3a809:
            local_78 = local_78 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
            uVar27 = uStack_80 & 0xffffffff;
            this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
          }
        }
        else {
          iVar26 = local_70 + 1;
          local_70 = iVar26;
          if (*(int *)(local_98._8_8_ + 8) <= iVar26) goto LAB_143b3a809;
          if ((iVar26 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar8 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar4)->Data + (longlong)iVar26 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar8->GeometryParticles;
          uStack_a0 = *(uint *)(pTVar8 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_9c = (uint)iStack_9c._1_3_ << 8;
          }
          else {
            iStack_9c = CONCAT31(iStack_9c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_80 = CONCAT44(iStack_9c,uStack_a0);
          uVar27 = (ulonglong)uStack_a0;
          local_a8 = this_00;
          local_98._16_8_ = this_00;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) break;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
        bVar17 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
      } while (bVar17);
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// SetConstraintContainerPriority @ 143b3ed50

void __thiscall
Chaos::FPBDMinEvolution::SetConstraintContainerPriority
          (FPBDMinEvolution *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = (longlong)param_1;
  uVar5 = (uint)~param_1 >> 0x1f;
  uVar3 = 0;
  if (param_1 < *(int *)&(this->ConstraintSolver).field_0x90) {
    uVar3 = uVar5;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(*(longlong *)&(this->ConstraintSolver).field_0x88 + lVar4 * 8) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->ConstraintSolver).field_0x90) {
      uVar3 = uVar5;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(*(longlong *)(*(longlong *)&(this->ConstraintSolver).field_0x88 + lVar4 * 8) + 8)
        != param_2) {
      uVar3 = 0;
      if (param_1 < *(int *)&(this->ConstraintSolver).field_0x90) {
        uVar3 = uVar5;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(int *)(*(longlong *)(*(longlong *)&(this->ConstraintSolver).field_0x88 + lVar4 * 8) + 8) =
           param_2;
      Chaos::Private::FPBDConstraintGroupSolver::SortSolverContainers
                ((FPBDConstraintGroupSolver *)&this->ConstraintSolver);
    }
  }
  return;
}

// UnprepareTick @ 143b47380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDMinEvolution::UnprepareTick(FPBDMinEvolution *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_UnprepareTick> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar13.Value = 0;
  FVar8 = StatPtr_STAT_MinEvolution_UnprepareTick;
  if (StatPtr_STAT_MinEvolution_UnprepareTick ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_UnprepareTick>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_MinEvolution_UnprepareTick");
    FVar8 = (FThreadSafeStaticStat<Chaos::FStat_STAT_MinEvolution_UnprepareTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MinEvolution_UnprepareTick,*pFVar7
                       ,L"MinEvolution::UnprepareTick","STATGROUP_ChaosMinEvolution",
                       "STATCAT_Advanced",L"ChaosMinEvolution",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\PBDMinEvolution.cpp"
                   ,0xa7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = FVar10.Value;
      goto LAB_143b474e7;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_143b474e7:
  pFVar12 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar3 = (this->ConstraintContainers).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar12 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar12 + 0x28))();
    pFVar12 = pFVar12 + 8;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

