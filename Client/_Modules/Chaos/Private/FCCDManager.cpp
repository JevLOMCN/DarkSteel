// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// operator() @ 14374d130

bool __thiscall
`Chaos::FCCDManager::ProjectCCD'::__l2::<lambda_2>::operator()
          (void *this,FPBDCollisionConstraint *param_1,FPBDCollisionConstraint *param_2)

{
  uint uVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  EObjectStateType EVar11;
  uint uVar12;
  uint uVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  bool bVar17;
  byte bVar18;
  bool bVar19;
  TGeometryParticleHandleImp<double,3,1> *pTVar20;
  byte bVar21;
  byte local_res10;
  byte local_res18;
  byte local_res20;
  
  pTVar15 = param_1->Particle[0];
  pTVar20 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar16 = param_1->Particle[1];
  pTVar2 = param_2->Particle[1];
  pTVar3 = param_2->Particle[0];
  pTVar14 = pTVar20;
  if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
    pTVar14 = pTVar15;
  }
  uVar13 = 0;
  if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_res18 = 0;
  }
  else {
    uVar1 = (uint)pTVar14->_padding_;
    lVar4 = pTVar14->_padding_;
    uVar12 = uVar13;
    if ((int)uVar1 < *(int *)(lVar4 + 0x2e0)) {
      uVar12 = ~uVar1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    local_res18 = *(byte *)(*(longlong *)(lVar4 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 1 & 1
    ;
  }
  pTVar14 = pTVar20;
  if (1 < *(byte *)((longlong)&pTVar16->_padding_ + 4)) {
    pTVar14 = pTVar16;
  }
  if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_res10 = 0;
  }
  else {
    uVar1 = (uint)pTVar14->_padding_;
    lVar4 = pTVar14->_padding_;
    uVar12 = uVar13;
    if ((int)uVar1 < *(int *)(lVar4 + 0x2e0)) {
      uVar12 = ~uVar1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    local_res10 = *(byte *)(*(longlong *)(lVar4 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 1 & 1
    ;
  }
  pTVar14 = pTVar20;
  if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
    pTVar14 = pTVar3;
  }
  if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_res20 = 0;
  }
  else {
    uVar1 = (uint)pTVar14->_padding_;
    lVar4 = pTVar14->_padding_;
    uVar12 = uVar13;
    if ((int)uVar1 < *(int *)(lVar4 + 0x2e0)) {
      uVar12 = ~uVar1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    local_res20 = *(byte *)(*(longlong *)(lVar4 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 1 & 1
    ;
  }
  pTVar14 = pTVar20;
  if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
    pTVar14 = pTVar2;
  }
  if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar21 = 0;
  }
  else {
    uVar1 = (uint)pTVar14->_padding_;
    lVar4 = pTVar14->_padding_;
    if ((int)uVar1 < *(int *)(lVar4 + 0x2e0)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    bVar21 = *(byte *)(*(longlong *)(lVar4 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 1 & 1;
  }
  pTVar14 = pTVar20;
  if (*(char *)((longlong)&pTVar15->_padding_ + 4) != '\0') {
    pTVar14 = pTVar15;
  }
  if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14374d3c0:
    pTVar14 = pTVar20;
    if (*(char *)((longlong)&pTVar15->_padding_ + 4) != '\0') {
      pTVar14 = pTVar15;
    }
    if (pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar15 = pTVar20;
      if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
        pTVar15 = pTVar14;
      }
      if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar11 = Kinematic;
      }
      else {
        EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
      }
      if (EVar11 == Sleeping) goto LAB_14374d3ed;
    }
    bVar9 = false;
  }
  else {
    this_00 = pTVar20;
    if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
      this_00 = pTVar14;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = Kinematic;
    }
    else {
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar11 != Dynamic) goto LAB_14374d3c0;
LAB_14374d3ed:
    bVar9 = true;
  }
  pTVar15 = pTVar20;
  if (*(char *)((longlong)&pTVar16->_padding_ + 4) != '\0') {
    pTVar15 = pTVar16;
  }
  if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14374d422:
    pTVar15 = pTVar20;
    if (*(char *)((longlong)&pTVar16->_padding_ + 4) != '\0') {
      pTVar15 = pTVar16;
    }
    if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar16 = pTVar20;
      if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
        pTVar16 = pTVar15;
      }
      if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar11 = Kinematic;
      }
      else {
        EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
      }
      if (EVar11 == Sleeping) goto LAB_14374d44f;
    }
    bVar6 = false;
  }
  else {
    pTVar14 = pTVar20;
    if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
      pTVar14 = pTVar15;
    }
    if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = Kinematic;
    }
    else {
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14);
    }
    if (EVar11 != Dynamic) goto LAB_14374d422;
LAB_14374d44f:
    bVar6 = true;
  }
  pTVar15 = pTVar20;
  if (*(char *)((longlong)&pTVar3->_padding_ + 4) != '\0') {
    pTVar15 = pTVar3;
  }
  if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14374d484:
    pTVar15 = pTVar20;
    if (*(char *)((longlong)&pTVar3->_padding_ + 4) != '\0') {
      pTVar15 = pTVar3;
    }
    if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar16 = pTVar20;
      if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
        pTVar16 = pTVar15;
      }
      if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar11 = Kinematic;
      }
      else {
        EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
      }
      if (EVar11 == Sleeping) goto LAB_14374d4b1;
    }
    bVar7 = false;
  }
  else {
    pTVar16 = pTVar20;
    if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
      pTVar16 = pTVar15;
    }
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = Kinematic;
    }
    else {
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
    }
    if (EVar11 != Dynamic) goto LAB_14374d484;
LAB_14374d4b1:
    bVar7 = true;
  }
  pTVar15 = pTVar20;
  if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    pTVar15 = pTVar2;
  }
  if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14374d4e9:
    pTVar15 = pTVar20;
    if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
      pTVar15 = pTVar2;
    }
    if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar16 = pTVar20;
      if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
        pTVar16 = pTVar15;
      }
      if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar11 = Kinematic;
      }
      else {
        EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
      }
      if (EVar11 == Sleeping) goto LAB_14374d516;
    }
    bVar8 = false;
  }
  else {
    pTVar16 = pTVar20;
    if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
      pTVar16 = pTVar15;
    }
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = Kinematic;
    }
    else {
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
    }
    if (EVar11 != Dynamic) goto LAB_14374d4e9;
LAB_14374d516:
    bVar8 = true;
  }
  if (((local_res18 == 0) && (bVar9)) || ((local_res10 == 0 && (bVar6)))) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  if (((local_res20 == 0) && (bVar7)) || ((bVar21 == 0 && (bVar8)))) {
    bVar17 = true;
  }
  else {
    bVar17 = false;
  }
  if (bVar19 == bVar17) {
    if (((local_res18 == 0) && (!bVar9)) || ((local_res10 == 0 && (!bVar6)))) {
      bVar18 = 1;
    }
    else {
      bVar18 = 0;
    }
    if (((local_res20 == 0) && (!bVar7)) || ((bVar21 == 0 && (!bVar8)))) {
      bVar21 = 1;
    }
    else {
      bVar21 = 0;
    }
    if (bVar18 != bVar21) {
      pTVar20 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)bVar21;
    }
    bVar19 = SUB81(pTVar20,0);
  }
  return bVar19;
}

// AdvanceParticleXToTOI @ 143752da0

void __thiscall
Chaos::FCCDManager::AdvanceParticleXToTOI
          (FCCDManager *this,FCCDParticle *param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  TVector<double,3> *pTVar11;
  longlong lVar12;
  double local_68;
  double local_60;
  double local_58;
  
  if (param_1->TOI < param_2) {
    pTVar5 = param_1->Particle;
    dVar8 = (param_2 - param_1->TOI) * param_3;
    pTVar11 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)pTVar5,*(int *)&pTVar5->field_0x8);
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar5,(TVector<double,3> *)&local_68
               ,*(int *)&pTVar5->field_0x8);
    dVar1 = *(double *)&pTVar11->field_0x10;
    dVar2 = *(double *)&pTVar11->field_0x8;
    dVar3 = *(double *)pTVar11;
    uVar4 = *(uint *)&pTVar5->field_0x8;
    lVar12 = (longlong)(int)uVar4;
    lVar6 = *(longlong *)pTVar5;
    uVar10 = 0;
    if ((int)uVar4 < *(int *)(lVar6 + 0x30)) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x28);
    *(double *)(lVar6 + lVar12 * 0x18) = dVar8 * local_68 + dVar3;
    *(double *)(lVar6 + 8 + lVar12 * 0x18) = dVar8 * local_60 + dVar2;
    *(double *)(lVar6 + 0x10 + lVar12 * 0x18) = dVar8 * local_58 + dVar1;
    param_1->TOI = param_2;
  }
  return;
}

// ApplyCCD @ 143752ee0

void __thiscall
Chaos::FCCDManager::ApplyCCD
          (FCCDManager *this,double param_1,
          TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *param_2,int param_3)

{
  bool bVar1;
  undefined1 local_res18 [16];
  double local_58 [2];
  undefined1 local_48 [16];
  undefined1 *local_38;
  FCCDManager *local_30;
  double *local_28;
  
  if (0 < param_2->ArrayNum) {
    local_48._0_8_ = param_2->DataPtr;
    local_48._8_8_ = *(undefined8 *)&param_2->ArrayNum;
    local_58[0] = param_1;
    bVar1 = Init(this,param_1,(TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *)local_48,
                 param_3);
    if (bVar1) {
      local_res18[0] = CVars::ChaosCollisionCCDConstraintMaxProcessCount == 1;
      AssignParticleIslandsAndGroupParticles(this);
      AssignConstraintIslandsAndRecordConstraintNum(this);
      GroupConstraintsWithIslands(this);
      local_38 = local_res18;
      local_28 = local_58;
      local_48._8_8_ = &local_38;
      local_48._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FCCDManager::ApplySweptConstraints'::__l2::<lambda_1>,void,int>
           ::Call;
      local_30 = this;
      PhysicsParallelFor(this->IslandNum,(TFunctionRef<void___cdecl(int)> *)local_48,false);
    }
    UpdateSweptConstraints(this,param_1);
    OverwriteXUsingV(this,param_1);
  }
  return;
}

// ApplyImpulse @ 143752fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Chaos::FCCDManager::ApplyImpulse(FCCDManager *this,FCCDConstraint *param_1)

{
  float fVar1;
  FPBDCollisionConstraint *pFVar2;
  ForElementType<Chaos::FManifoldPoint> FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  bool bVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  double *pdVar13;
  FDebugDrawQueue *pFVar14;
  ForElementType<Chaos::FManifoldPoint> FVar15;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined8 uVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  uint uVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_268 [32];
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_188 [24];
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pFVar2 = param_1->SweptConstraint;
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)*(undefined1 *)((longlong)&pFVar2->Particle[0]->_padding_ + 4)) {
    this_00 = pFVar2->Particle[0];
  }
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)*(undefined1 *)((longlong)&pFVar2->Particle[1]->_padding_ + 4)) {
    this_01 = pFVar2->Particle[1];
  }
  if (((this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Rigid0 != nullptr || Rigid1 != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDUtilities.cpp"
                          ,0x345,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar1 = (pFVar2->Material).Restitution;
  uVar17 = 0;
  if (0 < (pFVar2->ManifoldPoints).ArrayNum) {
    lVar16 = 0;
    uVar37 = (uint)__xmm_80000000000000008000000000000000;
    uVar39 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar12 = 0;
      if ((int)uVar17 < (pFVar2->ManifoldPoints).ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (pFVar2->ManifoldPoints).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<Chaos::FManifoldPoint>)&pFVar2->ManifoldPoints;
      if (FVar3 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar15 = FVar3;
      }
      if ((*(byte *)(lVar16 + 0x30 + (longlong)FVar15) & 1) == 0) {
        auVar31 = *(undefined1 (*) [16])&pFVar2->ShapeWorldTransforms[1].field_0x10;
        dVar22 = auVar31._0_8_;
        auVar21 = *(undefined1 (*) [16])(pFVar2->ShapeWorldTransforms + 1);
        dVar23 = *(double *)&pFVar2->ShapeWorldTransforms[1].field_0x18;
        uVar26 = *(undefined8 *)(lVar16 + 0x18 + (longlong)FVar15);
        dVar5 = (double)(float)uVar26;
        dVar6 = (double)(float)((ulonglong)uVar26 >> 0x20);
        uVar41 = SUB84(dVar6,0);
        uVar42 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_148 = (double)*(float *)(lVar16 + 0x20 + (longlong)FVar15);
        auVar32._8_4_ = uVar41;
        auVar32._0_8_ = dVar5;
        auVar32._12_4_ = uVar42;
        local_1a8 = *(undefined1 (*) [16])(pFVar2->ShapeWorldTransforms + 1);
        auVar27 = blendpd(local_1a8,auVar31,2);
        auVar33._0_8_ = auVar32._8_8_ * local_1a8._0_8_ - local_1a8._8_8_ * dVar5;
        auVar33._8_8_ = local_148 * local_1a8._8_8_ - dVar22 * dVar6;
        auVar28._8_4_ = uVar41;
        auVar28._0_8_ = dVar5;
        auVar28._12_4_ = uVar42;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_148;
        auVar19 = blendpd(auVar28,auVar19,2);
        local_158._8_4_ = uVar41;
        local_158._0_8_ = dVar5;
        local_158._12_4_ = uVar42;
        auVar20._0_8_ = auVar19._0_8_ * dVar22 - auVar27._0_8_ * local_148;
        auVar20._8_8_ = auVar19._8_8_ * auVar31._8_8_ - auVar27._8_8_ * 0.0;
        auVar19 = blendpd(auVar33,auVar20,2);
        dVar18 = auVar33._8_8_ + auVar33._8_8_;
        dVar7 = auVar20._0_8_ + auVar20._0_8_;
        uVar41 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar34._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar34._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar29._8_4_ = SUB84(dVar7,0);
        auVar29._0_8_ = dVar18;
        auVar29._12_4_ = uVar41;
        auVar27._8_4_ = SUB84(dVar7,0);
        auVar27._0_8_ = dVar18;
        auVar27._12_4_ = uVar41;
        auVar19 = blendpd(auVar27,auVar34,2);
        auVar30._0_8_ = auVar29._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar18;
        auVar30._8_8_ = auVar34._0_8_ * auVar21._8_8_ - dVar22 * dVar7;
        auVar28 = blendpd(auVar21,auVar31,2);
        auVar21._8_4_ = SUB84(auVar30._8_8_,0);
        auVar21._0_8_ = auVar30._0_8_;
        auVar21._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
        auVar24._0_8_ = auVar19._0_8_ * dVar22 - auVar28._0_8_ * auVar34._0_8_;
        auVar24._8_8_ = auVar19._8_8_ * auVar31._8_8_ - auVar28._8_8_ * auVar34._8_8_;
        auVar31 = blendpd(auVar30,auVar24,2);
        dVar5 = dVar18 * dVar23 + dVar5 + auVar21._8_8_;
        dVar6 = dVar7 * dVar23 + dVar6 + auVar24._0_8_;
        local_160 = auVar34._0_8_ * dVar23 + local_148 + auVar31._0_8_;
        local_170._8_4_ = SUB84(dVar6,0);
        local_170._0_8_ = dVar5;
        local_170._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          uVar41 = 0;
          uVar42 = 0;
          uVar38 = 0;
          uVar40 = 0;
          uVar35 = 0;
          uVar36 = 0;
        }
        else {
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                     (TVector<double,3> *)local_188,(int)this_00->_padding_);
          uVar35 = (undefined4)local_188._16_8_;
          uVar36 = SUB84(local_188._16_8_,4);
          local_198 = (double)local_188._16_8_;
          uVar41 = local_188._0_4_;
          uVar42 = local_188._4_4_;
          uVar38 = local_188._8_4_;
          uVar40 = local_188._12_4_;
        }
        uVar26 = auVar24._8_8_;
        if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          auVar31 = ZEXT816(0);
          dVar18 = 0.0;
        }
        else {
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                     (TVector<double,3> *)local_1a8,(int)this_01->_padding_);
          uVar26 = auVar24._8_8_;
          local_210 = local_198;
          auVar31 = local_1a8;
          dVar18 = local_198;
        }
        dVar7 = local_160;
        auVar8._4_8_ = uVar26;
        auVar8._0_4_ = uVar42;
        auVar25._0_8_ = auVar8._0_8_ << 0x20;
        auVar25._8_4_ = uVar38;
        auVar25._12_4_ = uVar40;
        dVar18 = ((double)CONCAT44(uVar42,uVar41) - auVar31._0_8_) * dVar5 +
                 dVar6 * (auVar25._8_8_ - auVar31._8_8_) +
                 local_160 * ((double)CONCAT44(uVar36,uVar35) - dVar18);
        if (dVar18 < 0.0) {
          dVar23 = dVar18 * (double)fVar1;
          if ((this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
             (((CVars::bChaosCollisionCCDAllowClipping != false &&
               (param_1->Particle[0] != (FCCDParticle *)0x0)) &&
              (param_1->Particle[0]->Done != false)))) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if ((this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
             (((CVars::bChaosCollisionCCDAllowClipping != false &&
               (param_1->Particle[1] != (FCCDParticle *)0x0)) &&
              (param_1->Particle[1]->Done != false)))) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if (bVar11) {
            uVar41 = 0;
            uVar42 = 0;
          }
          else {
            pdVar13 = TPBDRigidParticleHandleImp<double,3,1>::InvM
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
            uVar41 = SUB84(*pdVar13,0);
            uVar42 = (undefined4)((ulonglong)*pdVar13 >> 0x20);
          }
          if (bVar9) {
            uVar38 = 0;
            uVar40 = 0;
          }
          else {
            pdVar13 = TPBDRigidParticleHandleImp<double,3,1>::InvM
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
            uVar38 = SUB84(*pdVar13,0);
            uVar40 = (undefined4)((ulonglong)*pdVar13 >> 0x20);
          }
          dVar18 = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) ^ uVar39,
                                    SUB84(dVar23,0) ^ uVar37) - dVar18;
          dVar23 = __real_3ff0000000000000 /
                   ((double)CONCAT44(uVar40,uVar38) + (double)CONCAT44(uVar42,uVar41));
          dVar5 = dVar18 * dVar5 * dVar23;
          dVar6 = dVar18 * dVar6 * dVar23;
          dVar23 = dVar18 * dVar7 * dVar23;
          local_220 = dVar5;
          local_218 = dVar6;
          local_210 = dVar23;
          if (0.0 <= (double)CONCAT44(uVar42,uVar41) && (double)CONCAT44(uVar42,uVar41) != 0.0) {
            TKinematicGeometryParticlesImp<double,3,0>::GetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                       (TVector<double,3> *)&local_208,(int)this_00->_padding_);
            local_1f0 = dVar5 * (double)CONCAT44(uVar42,uVar41) + local_208;
            local_1e8 = dVar6 * (double)CONCAT44(uVar42,uVar41) + local_200;
            local_1e0 = dVar23 * (double)CONCAT44(uVar42,uVar41) + local_1f8;
            TKinematicGeometryParticlesImp<double,3,0>::SetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                       (int)this_00->_padding_,(TVector<double,3> *)&local_1f0);
          }
          if (0.0 <= (double)CONCAT44(uVar40,uVar38) && (double)CONCAT44(uVar40,uVar38) != 0.0) {
            TKinematicGeometryParticlesImp<double,3,0>::GetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                       (TVector<double,3> *)&local_1d8,(int)this_01->_padding_);
            local_1c0 = local_1d8 - dVar5 * (double)CONCAT44(uVar40,uVar38);
            local_1b8 = local_1d0 - (double)CONCAT44(uVar40,uVar38) * dVar6;
            local_1b0 = local_1c8 - dVar23 * (double)CONCAT44(uVar40,uVar38);
            TKinematicGeometryParticlesImp<double,3,0>::SetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                       (int)this_01->_padding_,(TVector<double,3> *)&local_1c0);
          }
          dVar18 = *(double *)&(param_1->NetImpulse).field_0x8;
          dVar7 = *(double *)&(param_1->NetImpulse).field_0x10;
          *(double *)&param_1->NetImpulse = dVar5 + *(double *)&param_1->NetImpulse;
          *(double *)&(param_1->NetImpulse).field_0x8 = dVar6 + dVar18;
          *(double *)&(param_1->NetImpulse).field_0x10 = dVar23 + dVar7;
          if (CVars::ChaosSolverDrawCCDInteractions != 0) {
            local_138[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_138[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            local_128[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_128[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_118[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
            local_118[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
            local_108[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
            local_108[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
            local_f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
            local_f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
            local_e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
            local_e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
            pFVar14 = FDebugDrawQueue::GetInstance();
            if ((pFVar14->bEnableDebugDrawing != false) &&
               (pFVar14 = FDebugDrawQueue::GetInstance(),
               fVar10 = Chaos::DebugDraw::ChaosDebugDrawCCDDuration, 0 < pFVar14->NumConsumers)) {
              Chaos::DebugDraw::DrawCollisionImpl
                        ((TRigidTransform<double,3> *)local_138,param_1->SweptConstraint,
                         __real_3f800000,Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                         &CVars::ChaosSolverDebugDebugDrawSettings);
              Chaos::DebugDraw::DrawParticleCCDCollisionImpulseImpl
                        ((TRigidTransform<double,3> *)local_138,param_1->Particle[0],param_1,uVar17,
                         (TVector<double,3> *)&local_220,fVar10,
                         &CVars::ChaosSolverDebugDebugDrawSettings);
              Chaos::DebugDraw::DrawParticleCCDCollisionImpulseImpl
                        ((TRigidTransform<double,3> *)local_138,param_1->Particle[1],param_1,uVar17,
                         (TVector<double,3> *)&local_220,fVar10,
                         &CVars::ChaosSolverDebugDebugDrawSettings);
            }
          }
          uVar37 = (uint)__xmm_80000000000000008000000000000000;
          uVar39 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        }
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x6c;
    } while ((int)uVar17 < (pFVar2->ManifoldPoints).ArrayNum);
  }
  return;
}

// ApplyIslandSweptConstraints2 @ 143753660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Chaos::FCCDManager::ApplyIslandSweptConstraints2(FCCDManager *this,int param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FCCDConstraint *pFVar10;
  FCCDParticle *pFVar11;
  FCCDParticle *pFVar12;
  ForElementType<Chaos::FManifoldPoint> FVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar15;
  code *pcVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [12];
  bool bVar21;
  float fVar22;
  bool bVar23;
  undefined1 uVar24;
  uint uVar25;
  uint uVar26;
  FPBDCollisionConstraint *pFVar27;
  FDebugDrawQueue *pFVar28;
  FDebugDrawQueue *pFVar29;
  TVector<double,3> *pTVar30;
  TRigidTransform<double,3> *pTVar31;
  TGeometryParticleHandleImp<double,3,1> *pTVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  ForElementType<Chaos::FManifoldPoint> FVar36;
  ulonglong uVar37;
  longlong lVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  uint uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined1 auStackY_658 [32];
  byte local_628;
  uint local_624;
  FGenericParticleHandleImp local_5d8;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_568;
  double local_560;
  double local_558;
  double local_548;
  double local_540;
  double local_538;
  double local_528;
  double local_520;
  double local_518;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  undefined1 local_4c0 [16];
  double local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  double local_450;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_428;
  TQuat<double> local_408;
  undefined1 local_3e8 [16];
  double local_3d8;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined1 local_3b0 [16];
  double local_3a0;
  undefined1 local_398 [16];
  double local_388;
  undefined1 local_378 [16];
  double local_358 [2];
  double local_348 [2];
  double local_338 [2];
  double local_328 [2];
  double local_318 [2];
  double local_308 [2];
  TVector<double>_u_0 local_2f8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  FColor_u_0 local_2c8;
  undefined1 local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4;
  float local_2b0;
  void *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_150;
  TRigidTransform<double,3> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_658;
  lVar35 = (longlong)param_1;
  uVar42 = (uint)~param_1 >> 0x1f;
  uVar25 = 0;
  if (param_1 < (this->IslandConstraintStart).ArrayNum) {
    uVar25 = uVar42;
  }
  if ((uVar25 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  local_624 = *(uint *)((this->IslandConstraintStart).AllocatorInstance.Data + lVar35 * 4);
  uVar25 = 0;
  if (param_1 < (this->IslandConstraintNum).ArrayNum) {
    uVar25 = uVar42;
  }
  if ((uVar25 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar39 = *(int *)((this->IslandConstraintNum).AllocatorInstance.Data + lVar35 * 4);
  uVar25 = 0;
  if (param_1 < (this->IslandConstraintEnd).ArrayNum) {
    uVar25 = uVar42;
  }
  if ((uVar25 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar4 = *(int *)((this->IslandConstraintEnd).AllocatorInstance.Data + lVar35 * 4);
  uVar25 = 0;
  if (param_1 < (this->IslandParticleStart).ArrayNum) {
    uVar25 = uVar42;
  }
  if ((uVar25 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  uVar25 = *(uint *)((this->IslandParticleStart).AllocatorInstance.Data + lVar35 * 4);
  uVar40 = (ulonglong)(int)uVar25;
  uVar34 = 0;
  if (param_1 < (this->IslandParticleNum).ArrayNum) {
    uVar34 = uVar42;
  }
  if ((uVar34 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar5 = *(int *)((this->IslandParticleNum).AllocatorInstance.Data + lVar35 * 4);
  if (iVar39 != 0) {
    if ((int)uVar25 < (int)(iVar5 + uVar25)) {
      lVar35 = uVar40 * 8;
      uVar42 = uVar25;
      do {
        uVar33 = ~uVar42 >> 0x1f;
        uVar34 = 0;
        if ((int)uVar42 < (this->GroupedCCDParticles).ArrayNum) {
          uVar34 = uVar33;
        }
        if ((uVar34 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        puVar6 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        uVar34 = 0;
        if ((int)uVar42 < (this->GroupedCCDParticles).ArrayNum) {
          uVar34 = uVar33;
        }
        if ((uVar34 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        plVar7 = (longlong *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        uVar34 = *(uint *)(plVar7 + 1);
        lVar41 = (longlong)(int)uVar34;
        lVar38 = *plVar7;
        uVar26 = 0;
        if ((int)uVar34 < *(int *)(lVar38 + 0x550)) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        lVar38 = *(longlong *)(lVar38 + 0x548);
        uVar34 = 0;
        if ((int)uVar42 < (this->GroupedCCDParticles).ArrayNum) {
          uVar34 = uVar33;
        }
        if ((uVar34 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        puVar8 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar8,
                   (TVector<double,3> *)&local_5b8,*(int *)(puVar8 + 1));
        local_5a0 = *(double *)(lVar38 + lVar41 * 0x18) - local_5b8 * param_2;
        local_598 = *(double *)(lVar38 + 8 + lVar41 * 0x18) - local_5b0 * param_2;
        local_590 = *(double *)(lVar38 + 0x10 + lVar41 * 0x18) - local_5a8 * param_2;
        TParticles<double,3>::SetX
                  ((TParticles<double,3> *)*puVar6,*(int *)(puVar6 + 1),
                   (TVector<double,3> *)&local_5a0);
        uVar42 = uVar42 + 1;
        lVar35 = lVar35 + 8;
      } while ((int)uVar42 < (int)(iVar5 + uVar25));
      uVar40 = (ulonglong)uVar25;
    }
    ResetIslandParticles(this,param_1);
    ResetIslandConstraints(this,param_1);
    dVar17 = __real_3ff0000000000000;
    local_628 = 1;
    if ((int)local_624 < iVar4) {
      lVar38 = (longlong)(int)local_624;
      lVar35 = lVar38 * 8;
      do {
        if (local_628 != 0) {
          pFVar9 = (this->SortedCCDConstraints).AllocatorInstance.Data;
          pFVar1 = pFVar9 + (longlong)(int)local_624 * 8;
          pFVar9 = pFVar9 + (iVar39 + lVar38) * 8;
          std::
          _Sort_unchecked<Chaos::FCCDConstraint_*_*,bool_(__cdecl*)(Chaos::FCCDConstraint_const_*,Chaos::FCCDConstraint_const_*)>
                    ((FCCDConstraint **)pFVar1,(FCCDConstraint **)pFVar9,
                     (longlong)pFVar9 - (longlong)pFVar1 >> 3,CCDConstraintSortPredicate);
          local_628 = 0;
        }
        uVar42 = 0;
        if ((int)local_624 < (this->SortedCCDConstraints).ArrayNum) {
          uVar42 = ~local_624 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar10 = *(FCCDConstraint **)((this->SortedCCDConstraints).AllocatorInstance.Data + lVar35)
        ;
        pFVar11 = pFVar10->Particle[0];
        pFVar12 = pFVar10->Particle[1];
        dVar19 = (double)pFVar10->SweptConstraint->CCDTimeOfImpact;
        if (dVar17 < dVar19) break;
        if ((pFVar11 == (FCCDParticle *)0x0) || (pFVar11->Done != false)) {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
        if ((pFVar12 == (FCCDParticle *)0x0) || (pFVar12->Done != false)) {
          bVar21 = true;
        }
        else {
          bVar21 = false;
        }
        if ((!bVar23) || (!bVar21)) {
          pFVar10->ProcessedCount = pFVar10->ProcessedCount + 1;
          if ((pFVar11 != (FCCDParticle *)0x0) && (pFVar11->Done == false)) {
            AdvanceParticleXToTOI(this,pFVar11,dVar19,param_2);
          }
          if ((pFVar12 != (FCCDParticle *)0x0) && (pFVar12->Done == false)) {
            AdvanceParticleXToTOI(this,pFVar12,dVar19,param_2);
          }
          if (CVars::ChaosSolverDrawCCDInteractions != 0) {
            pFVar27 = pFVar10->SweptConstraint;
            uVar42 = 0;
            if (0 < (pFVar27->ManifoldPoints).ArrayNum) {
              lVar41 = 0;
              do {
                uVar34 = 0;
                if ((int)uVar42 < (pFVar27->ManifoldPoints).ArrayNum) {
                  uVar34 = ~uVar42 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                FVar13 = (pFVar27->ManifoldPoints).AllocatorInstance.SecondaryData;
                FVar36 = (ForElementType<Chaos::FManifoldPoint>)&pFVar27->ManifoldPoints;
                if (FVar13 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
                  FVar36 = FVar13;
                }
                if ((*(byte *)(lVar41 + 0x30 + (longlong)FVar36) & 1) == 0) {
                  pFVar27 = pFVar10->SweptConstraint;
                  uVar3 = *(undefined8 *)(lVar41 + 0xc + (longlong)FVar36);
                  local_3c8 = (double)(float)uVar3;
                  dStack_3c0 = (double)(float)((ulonglong)uVar3 >> 0x20);
                  auVar63 = *(undefined1 (*) [16])&pFVar27->ShapeWorldTransforms[1].field_0x10;
                  dVar48 = auVar63._0_8_;
                  auVar58 = *(undefined1 (*) [16])(pFVar27->ShapeWorldTransforms + 1);
                  auVar65._8_4_ = SUB84(dStack_3c0,0);
                  auVar65._0_8_ = local_3c8;
                  uVar68 = (undefined4)((ulonglong)dStack_3c0 >> 0x20);
                  auVar65._12_4_ = uVar68;
                  dVar64 = *(double *)&pFVar27->ShapeWorldTransforms[1].field_0x18;
                  local_3b8 = (double)*(float *)(lVar41 + 0x14 + (longlong)FVar36);
                  auVar44 = *(undefined1 (*) [16])(pFVar27->ShapeWorldTransforms + 1);
                  dVar53 = auVar63._8_8_;
                  auVar55 = blendpd(auVar44,auVar63,2);
                  auVar66._0_8_ = auVar65._8_8_ * auVar44._0_8_ - auVar44._8_8_ * local_3c8;
                  auVar66._8_8_ = local_3b8 * auVar44._8_8_ - dVar48 * dStack_3c0;
                  auVar43._8_4_ = SUB84(dStack_3c0,0);
                  auVar43._0_8_ = local_3c8;
                  auVar43._12_4_ = uVar68;
                  auVar44._8_8_ = 0;
                  auVar44._0_8_ = local_3b8;
                  auVar44 = blendpd(auVar43,auVar44,2);
                  auVar45._0_8_ = auVar44._0_8_ * dVar48 - auVar55._0_8_ * local_3b8;
                  auVar45._8_8_ = auVar44._8_8_ * dVar53 - auVar55._8_8_ * 0.0;
                  auVar44 = blendpd(auVar66,auVar45,2);
                  auVar67._0_8_ = auVar44._0_8_ + auVar44._0_8_;
                  auVar67._8_8_ = auVar44._8_8_ + auVar44._8_8_;
                  dVar70 = auVar66._8_8_ + auVar66._8_8_;
                  dVar49 = auVar45._0_8_ + auVar45._0_8_;
                  uVar68 = (undefined4)((ulonglong)dVar49 >> 0x20);
                  auVar59._8_4_ = SUB84(dVar49,0);
                  auVar59._0_8_ = dVar70;
                  auVar59._12_4_ = uVar68;
                  auVar56._8_4_ = SUB84(dVar49,0);
                  auVar56._0_8_ = dVar70;
                  auVar56._12_4_ = uVar68;
                  auVar44 = blendpd(auVar56,auVar67,2);
                  auVar60._0_8_ = auVar59._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar70;
                  auVar60._8_8_ = auVar67._0_8_ * auVar58._8_8_ - dVar48 * dVar49;
                  auVar55._8_4_ = SUB84(auVar60._8_8_,0);
                  auVar55._0_8_ = auVar60._0_8_;
                  auVar55._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
                  auVar58 = blendpd(auVar58,auVar63,2);
                  auVar57._0_8_ = auVar44._0_8_ * dVar48 - auVar58._0_8_ * auVar67._0_8_;
                  auVar57._8_8_ = auVar44._8_8_ * dVar53 - auVar58._8_8_ * auVar67._8_8_;
                  uVar3 = *(undefined8 *)(lVar41 + 0x18 + (longlong)FVar36);
                  dVar54 = (double)(float)uVar3;
                  dVar69 = (double)(float)((ulonglong)uVar3 >> 0x20);
                  uVar68 = SUB84(dVar69,0);
                  uVar74 = (undefined4)((ulonglong)dVar69 >> 0x20);
                  auVar71._8_4_ = uVar68;
                  auVar71._0_8_ = dVar54;
                  auVar71._12_4_ = uVar74;
                  dVar18 = dVar70 * dVar64 + local_3c8 + auVar55._8_8_ +
                           *(double *)&pFVar27->ShapeWorldTransforms[1].field_0x20;
                  dVar70 = dVar49 * dVar64 + dStack_3c0 + auVar57._0_8_ +
                           *(double *)&pFVar27->ShapeWorldTransforms[1].field_0x28;
                  uVar75 = SUB84(dVar70,0);
                  uVar76 = (undefined4)((ulonglong)dVar70 >> 0x20);
                  local_3a0 = (double)*(float *)(lVar41 + 0x20 + (longlong)FVar36);
                  auVar58 = blendpd(auVar60,auVar57,2);
                  local_378 = *(undefined1 (*) [16])(pFVar27->ShapeWorldTransforms + 1);
                  dVar64 = auVar67._0_8_ * dVar64 + local_3b8 + auVar58._0_8_ +
                           *(double *)&pFVar27->ShapeWorldTransforms[1].field_0x30;
                  auVar44 = blendpd(local_378,auVar63,2);
                  auVar72._0_8_ = auVar71._8_8_ * local_378._0_8_ - local_378._8_8_ * dVar54;
                  auVar72._8_8_ = local_3a0 * local_378._8_8_ - dVar48 * dVar69;
                  auVar46._8_4_ = uVar68;
                  auVar46._0_8_ = dVar54;
                  auVar46._12_4_ = uVar74;
                  auVar58._8_8_ = 0;
                  auVar58._0_8_ = local_3a0;
                  auVar58 = blendpd(auVar46,auVar58,2);
                  local_398._8_4_ = uVar75;
                  local_398._0_8_ = dVar18;
                  local_398._12_4_ = uVar76;
                  auVar47._0_8_ = auVar58._0_8_ * dVar48 - auVar44._0_8_ * local_3a0;
                  auVar47._8_8_ = auVar58._8_8_ * dVar53 - auVar44._8_8_ * 0.0;
                  local_3b0._8_4_ = uVar68;
                  local_3b0._0_8_ = dVar54;
                  local_3b0._12_4_ = uVar74;
                  auVar58 = *(undefined1 (*) [16])(pFVar27->ShapeWorldTransforms + 1);
                  auVar44 = blendpd(auVar72,auVar47,2);
                  dVar70 = auVar72._8_8_ + auVar72._8_8_;
                  dVar49 = auVar47._0_8_ + auVar47._0_8_;
                  uVar68 = (undefined4)((ulonglong)dVar49 >> 0x20);
                  auVar73._0_8_ = auVar44._0_8_ + auVar44._0_8_;
                  auVar73._8_8_ = auVar44._8_8_ + auVar44._8_8_;
                  auVar61._8_4_ = SUB84(dVar49,0);
                  auVar61._0_8_ = dVar70;
                  auVar61._12_4_ = uVar68;
                  auVar50._8_4_ = SUB84(dVar49,0);
                  auVar50._0_8_ = dVar70;
                  auVar50._12_4_ = uVar68;
                  auVar44 = blendpd(auVar50,auVar73,2);
                  auVar62._0_8_ = auVar61._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar70;
                  auVar62._8_8_ = auVar73._0_8_ * auVar58._8_8_ - dVar48 * dVar49;
                  auVar58 = blendpd(auVar58,auVar63,2);
                  auVar63._8_4_ = SUB84(auVar62._8_8_,0);
                  auVar63._0_8_ = auVar62._0_8_;
                  auVar63._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
                  auVar51._0_8_ = auVar44._0_8_ * dVar48 - auVar58._0_8_ * auVar73._0_8_;
                  auVar51._8_8_ = auVar44._8_8_ * dVar53 - auVar58._8_8_ * auVar73._8_8_;
                  dVar70 = dVar70 * dVar53 + dVar54 + auVar63._8_8_;
                  dVar49 = dVar49 * dVar53 + dVar69 + auVar51._0_8_;
                  auVar63 = blendpd(auVar62,auVar51,2);
                  local_3e8._8_4_ = SUB84(dVar49,0);
                  local_3e8._0_8_ = dVar70;
                  local_3e8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
                  dVar69 = auVar73._0_8_ * dVar53 + local_3a0 + auVar63._0_8_;
                  pFVar28 = FDebugDrawQueue::GetInstance();
                  fVar22 = CVars::ChaosSolverDebugDebugDrawSettings.LineThickness;
                  uVar24 = (undefined1)CVars::ChaosSolverDebugDebugDrawSettings.DrawPriority;
                  auVar20._4_8_ = auVar51._8_8_;
                  auVar20._0_4_ = (int)((ulonglong)dVar18 >> 0x20);
                  auVar52._0_8_ = auVar20._0_8_ << 0x20;
                  auVar52._8_4_ = uVar75;
                  auVar52._12_4_ = uVar76;
                  dVar54 = (double)(CVars::ChaosSolverDebugDebugDrawSettings.DrawScale *
                                   __real_42480000);
                  local_3d8 = dVar69;
                  local_388 = dVar64;
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  if ((pFVar29->bEnableDebugDrawing != false) &&
                     (pFVar29 = FDebugDrawQueue::GetInstance(), 0 < pFVar29->NumConsumers)) {
                    lpCriticalSection = &pFVar28->CommandQueueCS;
                    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    local_4c0._8_4_ = uVar75;
                    local_4c0._0_8_ = dVar18;
                    local_4c0._12_4_ = uVar76;
                    local_4b0 = dVar64;
                    bVar23 = FDebugDrawQueue::AcceptCommand
                                       (pFVar28,1,(TVector<double,3> *)local_4c0);
                    if (bVar23) {
                      local_230 = (void *)0x0;
                      local_228 = 0;
                      local_220 = 0;
                      local_2c8 = FColor::Red.field0_0x0;
                      local_2b0 = fVar22;
                      local_2f8._8_4_ = uVar75;
                      local_2f8._0_8_ = dVar18;
                      local_2f8._12_4_ = uVar76;
                      local_2c0 = 0;
                      local_2b8 = 0x38d1b717;
                      local_150 = 1;
                      local_2f8._s_0.Z = dVar64;
                      local_2e0 = dVar54 * dVar70 + dVar18;
                      local_2d8 = dVar54 * dVar49 + auVar52._8_8_;
                      local_2d0 = dVar54 * dVar69 + dVar64;
                      local_2b4 = uVar24;
                      FDebugDrawQueue::AddCommand(pFVar28,(FLatentDrawCommand *)&local_2f8._s_0);
                      if (local_230 != (void *)0x0) {
                        FMemory::Free(local_230);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  }
                }
                pFVar27 = pFVar10->SweptConstraint;
                uVar42 = uVar42 + 1;
                lVar41 = lVar41 + 0x6c;
              } while ((int)uVar42 < (pFVar27->ManifoldPoints).ArrayNum);
            }
          }
          if (CVars::CCDAllowedDepthBoundsScale <= __real_00000000) {
            ApplyImpulse(this,pFVar10);
          }
          if (pFVar11 != (FCCDParticle *)0x0) {
            uVar42 = pFVar10->FastMovingKinematicIndex;
            if (uVar42 == 0xffffffff) {
              pTVar15 = pFVar11->Particle;
              pTVar30 = TParticles<double,3>::GetX
                                  (*(TParticles<double,3> **)pTVar15,*(int *)&pTVar15->field_0x8);
              TPBDRigidParticleHandleImp<double,3,1>::SetP(pTVar15,pTVar30);
            }
            else {
              pFVar27 = pFVar10->SweptConstraint;
              if ((1 < uVar42) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                      ,0x15f,L""), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pTVar14 = pFVar27->Particle[(int)uVar42];
              FPBDCollisionConstraint::CalculateWorldContactNormal
                        (pFVar10->SweptConstraint,(TVector<double,3> *)&local_588);
              pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(undefined1 *)((longlong)&pTVar14->_padding_ + 4) != '\0') {
                pTVar32 = pTVar14;
              }
              dVar70 = (double)FGenericParticleHandleImp::ZeroVector._16_8_;
              dVar49 = (double)FGenericParticleHandleImp::ZeroVector._0_8_;
              dVar54 = (double)FGenericParticleHandleImp::ZeroVector._8_8_;
              if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                           (TVector<double,3> *)&local_4a8,(int)pTVar32->_padding_);
                dVar70 = local_498;
                dVar49 = local_4a8;
                dVar54 = dStack_4a0;
              }
              dVar69 = (dVar17 - dVar19) * param_2;
              local_558 = dVar69 * dVar49 * local_588 + dVar69 * dVar54 * local_580 +
                          dVar69 * dVar70 * local_578;
              local_560 = local_580 * local_558;
              local_568 = local_558 * local_588;
              local_558 = local_578 * local_558;
              local_480 = dVar70;
              ClipParticleP(this,pFVar11,(TVector<double,3> *)&local_568);
            }
            pFVar11->Done = true;
          }
          if (pFVar12 != (FCCDParticle *)0x0) {
            uVar42 = pFVar10->FastMovingKinematicIndex;
            if (uVar42 == 0xffffffff) {
              pTVar15 = pFVar12->Particle;
              pTVar30 = TParticles<double,3>::GetX
                                  (*(TParticles<double,3> **)pTVar15,*(int *)&pTVar15->field_0x8);
              TPBDRigidParticleHandleImp<double,3,1>::SetP(pTVar15,pTVar30);
            }
            else {
              pFVar27 = pFVar10->SweptConstraint;
              if ((1 < uVar42) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                      ,0x15f,L""), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pTVar14 = pFVar27->Particle[(int)uVar42];
              FPBDCollisionConstraint::CalculateWorldContactNormal
                        (pFVar10->SweptConstraint,(TVector<double,3> *)&local_548);
              pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(undefined1 *)((longlong)&pTVar14->_padding_ + 4) != '\0') {
                pTVar32 = pTVar14;
              }
              dVar70 = (double)FGenericParticleHandleImp::ZeroVector._16_8_;
              dVar49 = (double)FGenericParticleHandleImp::ZeroVector._0_8_;
              dVar54 = (double)FGenericParticleHandleImp::ZeroVector._8_8_;
              if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                           (TVector<double,3> *)&local_478,(int)pTVar32->_padding_);
                dVar70 = local_468;
                dVar49 = local_478;
                dVar54 = dStack_470;
              }
              dVar69 = (dVar17 - dVar19) * param_2;
              local_518 = dVar69 * dVar49 * local_548 + dVar69 * dVar54 * local_540 +
                          dVar69 * dVar70 * local_538;
              local_520 = local_540 * local_518;
              local_528 = local_518 * local_548;
              local_518 = local_538 * local_518;
              local_450 = dVar70;
              ClipParticleP(this,pFVar12,(TVector<double,3> *)&local_528);
            }
            pFVar12->Done = true;
          }
          if (pFVar11 != (FCCDParticle *)0x0) {
            bVar23 = UpdateParticleSweptConstraints(this,pFVar11,dVar19,param_2);
            local_628 = local_628 | bVar23;
          }
          if (pFVar12 != (FCCDParticle *)0x0) {
            bVar23 = UpdateParticleSweptConstraints(this,pFVar12,dVar19,param_2);
            local_628 = local_628 | bVar23;
          }
        }
        local_624 = local_624 + 1;
        lVar35 = lVar35 + 8;
      } while ((int)local_624 < iVar4);
    }
    if (CVars::ChaosSolverDrawCCDInteractions != 0) {
      iVar39 = (int)uVar40;
      uVar37 = uVar40 & 0xffffffff;
      if (iVar39 < iVar5 + iVar39) {
        lVar35 = (longlong)iVar39 * 8;
        do {
          uVar34 = (uint)uVar37;
          uVar42 = 0;
          if ((int)uVar34 < (this->GroupedCCDParticles).ArrayNum) {
            uVar42 = ~uVar34 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          local_358[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_358[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_348[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_348[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_338[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_338[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_328[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_328[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)
                    **(undefined8 **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
          local_318[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_318[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_308[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_308[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          pFVar28 = FDebugDrawQueue::GetInstance();
          if ((pFVar28->bEnableDebugDrawing != false) &&
             (pFVar28 = FDebugDrawQueue::GetInstance(), 0 < pFVar28->NumConsumers)) {
            local_5d8.MHandle = pTVar14;
            pTVar31 = FGenericParticleHandleImp::GetTransformPQ(&local_5d8,&local_148);
            Chaos::DebugDraw::DrawParticleShapesImpl
                      ((TRigidTransform<double,3> *)local_358,pTVar14,pTVar31,&FColor::Green,
                       &CVars::ChaosSolverDebugDebugDrawSettings);
          }
          uVar37 = (ulonglong)(uVar34 + 1);
          lVar35 = lVar35 + 8;
        } while ((int)(uVar34 + 1) < iVar5 + iVar39);
        uVar40 = (ulonglong)uVar25;
      }
    }
    iVar39 = (int)uVar40;
    if (iVar39 < iVar5 + iVar39) {
      lVar35 = (longlong)iVar39 * 8;
      do {
        uVar34 = (uint)uVar40;
        uVar42 = ~uVar34 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar34 < (this->GroupedCCDParticles).ArrayNum) {
          uVar25 = uVar42;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        puVar6 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        TPBDRigidParticles<double,3>::PCom
                  ((TPBDRigidParticles<double,3> *)*puVar6,(TVector<double,3> *)&local_4f0,
                   *(int *)(puVar6 + 1));
        uVar25 = 0;
        if ((int)uVar34 < (this->GroupedCCDParticles).ArrayNum) {
          uVar25 = uVar42;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        puVar6 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar6,
                   (TVector<double,3> *)&local_508,*(int *)(puVar6 + 1));
        uVar25 = 0;
        if ((int)uVar34 < (this->GroupedCCDParticles).ArrayNum) {
          uVar25 = uVar42;
        }
        dVar17 = local_4f0 - local_508 * param_2;
        dVar70 = local_4e8 - local_500 * param_2;
        dVar19 = local_4e0 - local_4f8 * param_2;
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        plVar7 = (longlong *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        uVar25 = *(uint *)(plVar7 + 1);
        lVar41 = (longlong)(int)uVar25;
        lVar38 = *plVar7;
        uVar42 = 0;
        if ((int)uVar25 < *(int *)(lVar38 + 0x50)) {
          uVar42 = ~uVar25 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        lVar38 = *(longlong *)(lVar38 + 0x48);
        local_408.X = (double)*(float *)(lVar38 + lVar41 * 0x10);
        local_408.Y = (double)*(float *)(lVar38 + 4 + lVar41 * 0x10);
        uVar3 = *(undefined8 *)(lVar38 + 8 + lVar41 * 0x10);
        local_408.Z = (double)(float)uVar3;
        local_408.W = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar25 = 0;
        if ((int)uVar34 < (this->GroupedCCDParticles).ArrayNum) {
          uVar25 = ~uVar34 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        plVar7 = (longlong *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        uVar25 = *(uint *)(plVar7 + 1);
        lVar38 = *plVar7;
        uVar42 = 0;
        if ((int)uVar25 < *(int *)(lVar38 + 0x400)) {
          uVar42 = ~uVar25 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        lVar38 = *(longlong *)(lVar38 + 0x3f8);
        pdVar2 = (double *)(lVar38 + (longlong)(int)uVar25 * 0x18);
        local_448._s_0.X = *pdVar2;
        local_448._s_0.Y = pdVar2[1];
        local_448._s_0.Z = *(double *)(lVar38 + 0x10 + (longlong)(int)uVar25 * 0x18);
        UE::Math::TQuat<double>::RotateVector
                  (&local_408,(TVector<double> *)&local_428._s_0,(TVector<double> *)&local_448._s_0)
        ;
        local_5c0 = local_428._s_0.Z;
        local_5d0 = local_428._s_0.X;
        dStack_5c8 = local_428._s_0.Y;
        uVar25 = 0;
        if ((int)uVar34 < (this->GroupedCCDParticles).ArrayNum) {
          uVar25 = ~uVar34 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        local_4d8 = dVar17 - local_5d0;
        local_4d0 = dVar70 - dStack_5c8;
        local_4c8 = dVar19 - local_5c0;
        puVar6 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar35);
        TParticles<double,3>::SetX
                  ((TParticles<double,3> *)*puVar6,*(int *)(puVar6 + 1),
                   (TVector<double,3> *)&local_4d8);
        uVar40 = (ulonglong)(uVar34 + 1);
        lVar35 = lVar35 + 8;
      } while ((int)(uVar34 + 1) < iVar5 + iVar39);
    }
  }
  return;
}

// ApplyIslandSweptConstraints @ 1437548f0

void __thiscall
Chaos::FCCDManager::ApplyIslandSweptConstraints(FCCDManager *this,int param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  FCCDConstraint *pFVar5;
  FCCDParticle *pFVar6;
  FCCDParticle *pFVar7;
  FPBDCollisionConstraint *pFVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  longlong *plVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  TVector<double,3> *pTVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint local_res8;
  undefined1 local_res10 [8];
  ulonglong local_res20;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_c8 [2] [16];
  double local_a0;
  undefined1 local_98 [2] [16];
  double local_70;
  
  lVar20 = (longlong)param_1;
  uVar22 = (uint)~param_1 >> 0x1f;
  uVar17 = 0;
  if (param_1 < (this->IslandConstraintStart).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_res8 = *(uint *)((this->IslandConstraintStart).AllocatorInstance.Data + lVar20 * 4);
  uVar17 = 0;
  if (param_1 < (this->IslandConstraintNum).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar3 = *(int *)((this->IslandConstraintNum).AllocatorInstance.Data + lVar20 * 4);
  uVar17 = 0;
  if (param_1 < (this->IslandConstraintEnd).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar4 = *(int *)((this->IslandConstraintEnd).AllocatorInstance.Data + lVar20 * 4);
  if ((iVar3 < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintNum > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDUtilities.cpp"
                          ,0x207,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar23 = (ulonglong)(int)local_res8;
  pFVar21 = (this->SortedCCDConstraints).AllocatorInstance.Data;
  lVar20 = uVar23 + (longlong)iVar3;
  pFVar1 = pFVar21 + uVar23 * 8;
  pFVar21 = pFVar21 + lVar20 * 8;
  std::
  _Sort_unchecked<Chaos::FCCDConstraint_*_*,bool_(__cdecl*)(Chaos::FCCDConstraint_const_*,Chaos::FCCDConstraint_const_*)>
            ((FCCDConstraint **)pFVar1,(FCCDConstraint **)pFVar21,
             (longlong)pFVar21 - (longlong)pFVar1 >> 3,CCDConstraintSortPredicate);
  ResetIslandParticles(this,param_1);
  ResetIslandConstraints(this,param_1);
  dVar2 = __real_3ff0000000000000;
  local_res20 = uVar23;
  while ((longlong)local_res20 < (longlong)iVar4) {
    uVar17 = 0;
    if ((int)(uint)uVar23 < (this->SortedCCDConstraints).ArrayNum) {
      uVar17 = ~(uint)uVar23 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar5 = *(FCCDConstraint **)
              ((this->SortedCCDConstraints).AllocatorInstance.Data + local_res20 * 8);
    pFVar6 = pFVar5->Particle[0];
    pFVar7 = pFVar5->Particle[1];
    dVar13 = (double)pFVar5->SweptConstraint->CCDTimeOfImpact;
    if (dVar2 < dVar13) break;
    if (((CVars::bChaosCollisionCCDAllowClipping == false) ||
        ((pFVar6 != (FCCDParticle *)0x0 && (pFVar6->Done == false)))) ||
       ((pFVar7 != (FCCDParticle *)0x0 && (pFVar7->Done == false)))) {
      if ((CVars::ChaosCollisionCCDConstraintMaxProcessCount <= pFVar5->ProcessedCount) &&
         (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2304641848594924070>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDUtilities.cpp"
                              ,0x226,
                              "CCDConstraint->ProcessedCount < CVars::ChaosCollisionCCDConstraintMaxProcessCount"
                             ), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((pFVar6 != (FCCDParticle *)0x0) && (pFVar6->Done == false)) {
        AdvanceParticleXToTOI(this,pFVar6,dVar13,param_2);
      }
      if ((pFVar7 != (FCCDParticle *)0x0) && (pFVar7->Done == false)) {
        AdvanceParticleXToTOI(this,pFVar7,dVar13,param_2);
      }
      ApplyImpulse(this,pFVar5);
      pFVar5->ProcessedCount = pFVar5->ProcessedCount + 1;
      bVar14 = false;
      bVar15 = false;
      pFVar5->SweptConstraint->CCDTimeOfImpact = 3.4028235e+38;
      if (pFVar5->ProcessedCount < CVars::ChaosCollisionCCDConstraintMaxProcessCount) {
        if ((pFVar6 != (FCCDParticle *)0x0) && (pFVar6->Done == false)) {
          UpdateParticleP(this,pFVar6,param_2);
          bVar14 = true;
        }
        if ((pFVar7 != (FCCDParticle *)0x0) && (pFVar7->Done == false)) {
          UpdateParticleP(this,pFVar7,param_2);
          bVar15 = true;
        }
        uVar23 = (ulonglong)local_res8;
      }
      else {
        if (CVars::bChaosCollisionCCDAllowClipping == false) {
          bVar14 = pFVar6 != (FCCDParticle *)0x0;
          if (bVar14) {
            UpdateParticleP(this,pFVar6,param_2);
          }
          if (pFVar7 != (FCCDParticle *)0x0) {
            UpdateParticleP(this,pFVar7,param_2);
            bVar15 = true;
          }
        }
        else {
          if (pFVar6 != (FCCDParticle *)0x0) {
            uVar17 = pFVar5->FastMovingKinematicIndex;
            if (uVar17 == 0xffffffff) {
              pTVar10 = pFVar6->Particle;
              pTVar18 = TParticles<double,3>::GetX
                                  (*(TParticles<double,3> **)pTVar10,*(int *)&pTVar10->field_0x8);
              TPBDRigidParticleHandleImp<double,3,1>::SetP(pTVar10,pTVar18);
            }
            else {
              pFVar8 = pFVar5->SweptConstraint;
              if ((1 < uVar17) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                      ,0x15f,L""), bVar14)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar9 = pFVar8->Particle[(int)uVar17];
              FPBDCollisionConstraint::CalculateWorldContactNormal
                        (pFVar5->SweptConstraint,(TVector<double,3> *)&local_148);
              pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(undefined1 *)((longlong)&pTVar9->_padding_ + 4) != '\0') {
                pTVar19 = pTVar9;
              }
              if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                uVar28 = FGenericParticleHandleImp::ZeroVector._0_4_;
                uVar29 = FGenericParticleHandleImp::ZeroVector._4_4_;
                dVar27 = FGenericParticleHandleImp::ZeroVector._8_8_;
                uVar24 = FGenericParticleHandleImp::ZeroVector._16_4_;
                uVar25 = FGenericParticleHandleImp::ZeroVector._20_4_;
              }
              else {
                TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar19->_padding_,
                           (TVector<double,3> *)local_c8,(int)pTVar19->_padding_);
                uVar28 = local_c8[0]._0_4_;
                uVar29 = local_c8[0]._4_4_;
                dVar27 = local_c8[0]._8_8_;
                uVar24 = (undefined4)local_c8[1]._0_8_;
                uVar25 = SUB84(local_c8[1]._0_8_,4);
              }
              local_a0 = (double)CONCAT44(uVar25,uVar24);
              dVar26 = (dVar2 - dVar13) * param_2;
              dVar27 = (double)CONCAT44(uVar29,uVar28) * dVar26 * local_148 +
                       dVar27 * dVar26 * dStack_140 + local_a0 * dVar26 * local_138;
              local_118 = dVar27 * local_138;
              local_128._8_4_ = SUB84(dStack_140 * dVar27,0);
              local_128._0_8_ = local_148 * dVar27;
              local_128._12_4_ = (int)((ulonglong)(dStack_140 * dVar27) >> 0x20);
              ClipParticleP(this,pFVar6,(TVector<double,3> *)local_128);
            }
            pFVar6->Done = true;
            bVar14 = true;
          }
          if (pFVar7 != (FCCDParticle *)0x0) {
            uVar17 = pFVar5->FastMovingKinematicIndex;
            if (uVar17 == 0xffffffff) {
              pTVar10 = pFVar7->Particle;
              pTVar18 = TParticles<double,3>::GetX
                                  (*(TParticles<double,3> **)pTVar10,*(int *)&pTVar10->field_0x8);
              TPBDRigidParticleHandleImp<double,3,1>::SetP(pTVar10,pTVar18);
              bVar15 = true;
              local_res8 = local_res8 + 1;
              uVar23 = (ulonglong)local_res8;
              pFVar7->Done = true;
              local_res20 = local_res20 + 1;
            }
            else {
              pFVar8 = pFVar5->SweptConstraint;
              if ((1 < uVar17) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                      ,0x15f,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar9 = pFVar8->Particle[(int)uVar17];
              FPBDCollisionConstraint::CalculateWorldContactNormal
                        (pFVar5->SweptConstraint,(TVector<double,3> *)&local_108);
              pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(undefined1 *)((longlong)&pTVar9->_padding_ + 4) != '\0') {
                pTVar19 = pTVar9;
              }
              if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                uVar28 = FGenericParticleHandleImp::ZeroVector._0_4_;
                uVar29 = FGenericParticleHandleImp::ZeroVector._4_4_;
                dVar27 = FGenericParticleHandleImp::ZeroVector._8_8_;
                uVar24 = FGenericParticleHandleImp::ZeroVector._16_4_;
                uVar25 = FGenericParticleHandleImp::ZeroVector._20_4_;
              }
              else {
                TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar19->_padding_,
                           (TVector<double,3> *)local_98,(int)pTVar19->_padding_);
                uVar28 = local_98[0]._0_4_;
                uVar29 = local_98[0]._4_4_;
                dVar27 = local_98[0]._8_8_;
                uVar24 = (undefined4)local_98[1]._0_8_;
                uVar25 = SUB84(local_98[1]._0_8_,4);
              }
              local_70 = (double)CONCAT44(uVar25,uVar24);
              dVar26 = (dVar2 - dVar13) * param_2;
              dVar27 = (double)CONCAT44(uVar29,uVar28) * dVar26 * local_108 +
                       dVar27 * dVar26 * dStack_100 + local_70 * dVar26 * local_f8;
              local_d8 = dVar27 * local_f8;
              local_e8._8_4_ = SUB84(dStack_100 * dVar27,0);
              local_e8._0_8_ = local_108 * dVar27;
              local_e8._12_4_ = (int)((ulonglong)(dStack_100 * dVar27) >> 0x20);
              ClipParticleP(this,pFVar7,(TVector<double,3> *)local_e8);
              bVar15 = true;
              local_res8 = local_res8 + 1;
              uVar23 = (ulonglong)local_res8;
              pFVar7->Done = true;
              local_res20 = local_res20 + 1;
            }
            goto LAB_143754f33;
          }
        }
        local_res8 = local_res8 + 1;
        uVar23 = (ulonglong)local_res8;
        local_res20 = local_res20 + 1;
      }
LAB_143754f33:
      bVar16 = false;
      if (bVar14) {
        bVar16 = UpdateParticleSweptConstraints(this,pFVar6,dVar13,param_2);
      }
      if (bVar15) {
        bVar14 = UpdateParticleSweptConstraints(this,pFVar7,dVar13,param_2);
        bVar16 = (bool)(bVar16 | bVar14);
      }
      if (bVar16 != false) {
        pFVar21 = (this->SortedCCDConstraints).AllocatorInstance.Data;
        pFVar1 = pFVar21 + (longlong)(int)uVar23 * 8;
        pFVar21 = pFVar21 + lVar20 * 8;
        std::
        _Sort_unchecked<Chaos::FCCDConstraint_*_*,bool_(__cdecl*)(Chaos::FCCDConstraint_const_*,Chaos::FCCDConstraint_const_*)>
                  ((FCCDConstraint **)pFVar1,(FCCDConstraint **)pFVar21,
                   (longlong)pFVar21 - (longlong)pFVar1 >> 3,CCDConstraintSortPredicate);
      }
    }
    else {
      local_res8 = local_res8 + 1;
      uVar23 = (ulonglong)local_res8;
      local_res20 = local_res20 + 1;
    }
  }
  pFVar21 = (this->SortedCCDConstraints).AllocatorInstance.Data;
  iVar3 = (this->SortedCCDConstraints).ArrayNum;
  pFVar1 = pFVar21 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->SortedCCDConstraints).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FCCDConstraint_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar21 == pFVar1) break;
    plVar11 = *(longlong **)pFVar21;
    pFVar21 = pFVar21 + 8;
    lVar20 = *plVar11;
    dVar2 = (double)plVar11[7];
    dVar13 = (double)plVar11[5];
    *(float *)(lVar20 + 0x124) = (float)(double)plVar11[6] + *(float *)(lVar20 + 0x124);
    *(float *)(lVar20 + 0x128) = (float)dVar2 + *(float *)(lVar20 + 0x128);
    *(float *)(lVar20 + 0x120) = (float)dVar13 + *(float *)(lVar20 + 0x120);
  }
  return;
}

// ApplySweptConstraints @ 143755180

void __thiscall
Chaos::FCCDManager::ApplySweptConstraints
          (FCCDManager *this,double param_1,
          TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *param_2,int param_3)

{
  bool bVar1;
  double local_res10;
  undefined1 local_res18 [16];
  undefined1 local_38 [16];
  undefined1 *local_28;
  FCCDManager *local_20;
  double *local_18;
  
  local_38._0_8_ = param_2->DataPtr;
  local_38._8_4_ = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res10 = param_1;
  bVar1 = Init(this,param_1,(TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *)local_38,
               param_3);
  if (bVar1) {
    local_res18[0] = CVars::ChaosCollisionCCDConstraintMaxProcessCount == 1;
    AssignParticleIslandsAndGroupParticles(this);
    AssignConstraintIslandsAndRecordConstraintNum(this);
    GroupConstraintsWithIslands(this);
    local_28 = local_res18;
    local_18 = &local_res10;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FCCDManager::ApplySweptConstraints'::__l2::<lambda_1>,void,int>
         ::Call;
    local_20 = this;
    PhysicsParallelFor(this->IslandNum,(TFunctionRef<void___cdecl(int)> *)local_38,false);
  }
  return;
}

// AssignConstraintIslandsAndRecordConstraintNum @ 143755220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FCCDManager::AssignConstraintIslandsAndRecordConstraintNum(FCCDManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->IslandConstraintNum,this->IslandNum,Default);
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < this->IslandNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->IslandConstraintNum).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      *(undefined4 *)((this->IslandConstraintNum).AllocatorInstance.Data + uVar8) = 0;
      uVar8 = uVar8 + 4;
    } while ((int)(uVar6 + 1) < this->IslandNum);
  }
  iVar2 = (this->CCDConstraints).ArrayNum;
  pFVar9 = (this->CCDConstraints).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x40;
  while( true ) {
    if ((this->CCDConstraints).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FCCDConstraint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    uVar5 = 0xffffffff;
    if ((*(longlong *)(pFVar9 + 8) == 0) ||
       (uVar5 = *(uint *)(*(longlong *)(pFVar9 + 8) + 0x28), uVar5 == 0xffffffff)) {
      if ((*(longlong *)(pFVar9 + 0x10) == 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2304641848594923818>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDUtilities.cpp"
                             ,0x12a,"CCDConstraint.Particle[1] != nullptr"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(pFVar9 + 0x10) != 0) {
        uVar5 = *(uint *)(*(longlong *)(pFVar9 + 0x10) + 0x28);
      }
    }
    *(uint *)(pFVar9 + 0x18) = uVar5;
    uVar6 = 0;
    if ((int)uVar5 < (this->IslandConstraintNum).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar1 = (this->IslandConstraintNum).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    pFVar9 = pFVar9 + 0x40;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// AssignParticleIslandsAndGroupParticles @ 1437553f0

void __thiscall Chaos::FCCDManager::AssignParticleIslandsAndGroupParticles(FCCDManager *this)

{
  int *piVar1;
  TArray<Chaos::FCCDParticle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  int *piVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  TArray<Chaos::FCCDParticle_*,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  int local_78;
  int local_74;
  FScriptContainerElement *local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  int *local_58;
  
  pTVar2 = &this->IslandStack;
  this->IslandNum = 0;
  piVar1 = &(this->IslandStack).ArrayMax;
  (this->IslandStack).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  piVar17 = &(this->GroupedCCDParticles).ArrayMax;
  (this->GroupedCCDParticles).ArrayNum = 0;
  local_58 = piVar17;
  if ((this->GroupedCCDParticles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->GroupedCCDParticles).AllocatorInstance,0,piVar17);
  }
  piVar9 = &(this->IslandParticleStart).ArrayMax;
  (this->IslandParticleStart).ArrayNum = 0;
  if (*piVar9 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IslandParticleStart).AllocatorInstance,0,piVar9);
  }
  piVar9 = &(this->IslandParticleNum).ArrayMax;
  (this->IslandParticleNum).ArrayNum = 0;
  if (*piVar9 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IslandParticleNum).AllocatorInstance,0,piVar9);
  }
  local_res18 = (this->CCDParticles).ArrayNum;
  uVar14 = (ulonglong)(int)local_res18;
  local_res20 = (this->CCDParticles).AllocatorInstance.Data;
  pFVar16 = local_res20 + uVar14 * 0x40;
  local_60 = pFVar16;
  do {
    if ((this->CCDParticles).ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FCCDParticle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (local_res20 == pFVar16) {
      return;
    }
    if (*(int *)(local_res20 + 0x28) == -1) {
      uVar5 = *(uint *)(*(longlong **)local_res20 + 1);
      lVar6 = **(longlong **)local_res20;
      uVar11 = 0;
      if ((int)uVar5 < *(int *)(lVar6 + 0x2e0)) {
        uVar11 = ~uVar5 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar16 = local_60;
      if (*(char *)(*(longlong *)(lVar6 + 0x2d8) + 0xb + (longlong)(int)uVar5 * 0x10) == '\x04') {
        *(int *)(local_res20 + 0x28) = this->IslandNum;
        pFVar16 = (pTVar2->AllocatorInstance).Data;
        local_70 = local_res20;
        if (((pFVar16 <= (FScriptContainerElement *)&local_70) &&
            ((FScriptContainerElement *)&local_70 < pFVar16 + (longlong)*piVar1 * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (this->IslandStack).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        pTVar3 = &this->IslandParticleStart;
        (this->IslandStack).ArrayNum = iVar12 + 1;
        *(FScriptContainerElement **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
             local_70;
        local_74 = (this->GroupedCCDParticles).ArrayNum;
        pFVar16 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_74) &&
            ((FScriptContainerElement *)&local_74 <
             pFVar16 + (longlong)(this->IslandParticleStart).ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (this->IslandParticleStart).ArrayNum;
        if (iVar12 == (this->IslandParticleStart).ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar3->AllocatorInstance,&(this->IslandParticleStart).ArrayMax
                             );
        }
        (this->IslandParticleStart).ArrayNum = iVar12 + 1;
        *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_74;
        iVar12 = (this->IslandStack).ArrayNum;
        local_78 = 0;
        piVar9 = piVar17;
        while (0 < iVar12) {
          pTVar18 = &this->GroupedCCDParticles;
          if (((this->IslandStack).ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = (this->IslandStack).ArrayNum;
          pFVar16 = *(FScriptContainerElement **)
                     ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8 + -8);
          iVar12 = iVar12 + -1;
          (this->IslandStack).ArrayNum = iVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,iVar12,piVar1);
          pFVar7 = (pTVar18->AllocatorInstance).Data;
          local_70 = pFVar16;
          if (((pFVar7 <= (FScriptContainerElement *)&local_70) &&
              ((FScriptContainerElement *)&local_70 < pFVar7 + (longlong)*piVar9 * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = (this->GroupedCCDParticles).ArrayNum;
          if (iVar12 == *piVar9) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar18->AllocatorInstance,piVar9);
          }
          pFVar16 = local_70;
          (this->GroupedCCDParticles).ArrayNum = iVar12 + 1;
          *(FScriptContainerElement **)((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 8) =
               local_70;
          local_78 = local_78 + 1;
          plVar15 = *(longlong **)(local_70 + 8);
          iVar12 = *(int *)(local_70 + 0x10);
          plVar4 = plVar15 + iVar12;
          while( true ) {
            if (*(int *)(pFVar16 + 0x10) != iVar12) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<Chaos::FCCDParticle_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (plVar15 == plVar4) break;
            local_68 = *plVar15;
            if (*(int *)(local_68 + 0x28) == -1) {
              *(int *)(local_68 + 0x28) = this->IslandNum;
              pFVar7 = (pTVar2->AllocatorInstance).Data;
              if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
                  ((FScriptContainerElement *)&local_68 < pFVar7 + (longlong)*piVar1 * 8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar13 = (this->IslandStack).ArrayNum;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->IslandStack).ArrayNum = iVar13 + 1;
              *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_68;
            }
            plVar15 = plVar15 + 1;
          }
          piVar9 = &(this->GroupedCCDParticles).ArrayMax;
          piVar17 = local_58;
          iVar12 = (this->IslandStack).ArrayNum;
        }
        pTVar3 = &this->IslandParticleNum;
        pFVar16 = (pTVar3->AllocatorInstance).Data;
        piVar9 = &(this->IslandParticleNum).ArrayMax;
        if (((pFVar16 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar16 + (longlong)*piVar9 * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (this->IslandParticleNum).ArrayNum;
        if (iVar12 == *piVar9) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar3->AllocatorInstance,piVar9);
        }
        (this->IslandParticleNum).ArrayNum = iVar12 + 1;
        *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_78;
        this->IslandNum = this->IslandNum + 1;
        pFVar16 = local_60;
      }
    }
    uVar14 = (ulonglong)local_res18;
    local_res20 = local_res20 + 0x40;
  } while( true );
}

// ClipParticleP @ 143759980

void __thiscall Chaos::FCCDManager::ClipParticleP(FCCDManager *this,FCCDParticle *param_1)

{
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  TVector<double,3> *pTVar1;
  
  this_00 = param_1->Particle;
  pTVar1 = TParticles<double,3>::GetX(*(TParticles<double,3> **)this_00,*(int *)&this_00->field_0x8)
  ;
  TPBDRigidParticleHandleImp<double,3,1>::SetP(this_00,pTVar1);
  return;
}

// ClipParticleP @ 1437599b0

void __thiscall
Chaos::FCCDManager::ClipParticleP
          (FCCDManager *this,FCCDParticle *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  TVector<double,3> *pTVar12;
  
  this_00 = param_1->Particle;
  pTVar12 = TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)this_00,*(int *)&this_00->field_0x8);
  uVar3 = *(uint *)&this_00->field_0x8;
  lVar4 = *(longlong *)this_00;
  dVar8 = *(double *)&param_2->field_0x8;
  dVar1 = *(double *)pTVar12;
  dVar9 = *(double *)&pTVar12->field_0x8;
  dVar2 = *(double *)param_2;
  dVar7 = *(double *)&pTVar12->field_0x10 + *(double *)&param_2->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x30)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x28);
  *(double *)(lVar4 + (longlong)(int)uVar3 * 0x18) = dVar1 + dVar2;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar9 + dVar8;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(lVar4 + 8 + (longlong)(int)uVar3 * 0x18) = auVar6;
  pTVar12 = TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)this_00,*(int *)&this_00->field_0x8);
  TPBDRigidParticleHandleImp<double,3,1>::SetP(this_00,pTVar12);
  return;
}

// GroupConstraintsWithIslands @ 1437940f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FCCDManager::GroupConstraintsWithIslands(FCCDManager *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  TArray<Chaos::FCCDConstraint_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  
  this_00 = &this->IslandConstraintStart;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,this->IslandNum + 1,Default);
  this_01 = &this->IslandConstraintEnd;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_01,this->IslandNum,Default);
  if ((this->IslandConstraintStart).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar10 = 0;
  *(undefined4 *)(this_00->AllocatorInstance).Data = 0;
  if (0 < this->IslandNum) {
    lVar12 = 0;
    lVar15 = 0;
    do {
      uVar13 = ~uVar10 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar10 < (this->IslandConstraintStart).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar4 = *(undefined4 *)((this_00->AllocatorInstance).Data + lVar15);
      uVar14 = 0;
      if ((int)uVar10 < (this->IslandConstraintEnd).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined4 *)((this_01->AllocatorInstance).Data + lVar12 * 4) = uVar4;
      uVar14 = 0;
      if ((int)uVar10 < (this->IslandConstraintNum).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar11 = (this->IslandConstraintNum).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar10 < (this->IslandConstraintStart).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar10 = uVar10 + 1;
      iVar8 = *(int *)((this_00->AllocatorInstance).Data + lVar12 * 4);
      iVar7 = *(int *)(pFVar11 + lVar12 * 4);
      uVar14 = 0;
      if ((int)uVar10 < (this->IslandConstraintStart).ArrayNum) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar15 = lVar15 + 4;
      *(int *)((this_00->AllocatorInstance).Data + lVar12 * 4 + 4) = iVar8 + iVar7;
      lVar12 = lVar12 + 1;
    } while ((int)uVar10 < this->IslandNum);
  }
  uVar10 = (this->CCDConstraints).ArrayNum;
  pTVar2 = &this->SortedCCDConstraints;
  iVar8 = (this->SortedCCDConstraints).ArrayNum;
  piVar1 = &(this->SortedCCDConstraints).ArrayNum;
  if (iVar8 < (int)uVar10) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar10 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                       &(this->SortedCCDConstraints).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
           (longlong)(int)(uVar10 - iVar8) << 3);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar8) {
      uVar14 = iVar8 - uVar10;
      if ((int)(uVar10 | uVar14) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar14 != 0) {
        pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8;
        iVar8 = (*piVar1 - uVar10) - uVar14;
        if (iVar8 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar14 * 8,(longlong)iVar8 << 3);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->SortedCCDConstraints).ArrayMax);
      }
    }
  }
  local_res10 = (this->CCDConstraints).ArrayNum;
  uVar9 = (ulonglong)(int)local_res10;
  pFVar11 = (this->CCDConstraints).AllocatorInstance.Data;
  pFVar16 = pFVar11 + uVar9 * 0x40;
  while( true ) {
    if ((this->CCDConstraints).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FCCDConstraint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar16) break;
    uVar10 = *(uint *)(pFVar11 + 0x18);
    uVar14 = 0;
    if ((int)uVar10 < (this->IslandConstraintEnd).ArrayNum) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar14 = *(uint *)((this_01->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
    uVar13 = 0;
    if ((int)uVar14 < *piVar1) {
      uVar13 = ~uVar14 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(FScriptContainerElement **)
     ((this->SortedCCDConstraints).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) = pFVar11;
    uVar14 = 0;
    if ((int)uVar10 < (this->IslandConstraintEnd).ArrayNum) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this_01->AllocatorInstance).Data + (longlong)(int)uVar10 * 4;
    *(int *)pFVar3 = *(int *)pFVar3 + 1;
    uVar9 = (ulonglong)local_res10;
    pFVar11 = pFVar11 + 0x40;
  }
  return;
}

// Init @ 1437948f0

/* WARNING: Removing unreachable block (ram,0x000143794db8) */
/* WARNING: Removing unreachable block (ram,0x000143794dc6) */

bool __thiscall
Chaos::FCCDManager::Init
          (FCCDManager *this,double param_1,
          TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  FCCDParticle *pFVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  FCCDConstraint *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  FCCDParticle *this_00;
  FPBDCollisionConstraint *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TGeometryParticleHandleImp<double,3,1> *pTVar18;
  uint uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  char cVar22;
  TGeometryParticleHandleImp<double,3,1> *pTVar23;
  uint uVar24;
  TGeometryParticleHandleImp<double,3,1> *pTVar25;
  undefined1 *puVar26;
  TGeometryParticleHandleImp<double,3,1> *local_res18;
  char local_res20 [8];
  FScriptContainerElement *local_178;
  FCCDParticle *local_170 [2];
  longlong local_160;
  int *local_158;
  TGeometryParticleHandleImp<double,3,1> *local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  FScriptContainerElement local_118;
  FPBDCollisionConstraint *local_110;
  FPBDCollisionConstraint **local_108;
  FCCDConstraint local_100;
  TGeometryParticleHandleImp<double,3,1> **local_c0;
  longlong *local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  TVector<double,3> local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  piVar1 = &(this->CCDParticles).ArrayMax;
  pFVar4 = (FCCDParticle *)(this->CCDParticles).AllocatorInstance.Data;
  iVar16 = (this->CCDParticles).ArrayNum;
  if ((this->CCDParticles).ArrayMax < 0) {
    DestructItems<Chaos::FCCDParticle,int>(pFVar4,iVar16);
    (this->CCDParticles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FCCDParticle,int>(pFVar4,iVar16);
    (this->CCDParticles).ArrayNum = 0;
  }
  pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  uVar17 = param_2->ArrayNum;
  if ((int)(uVar17 * 2) < param_3) {
    param_3 = uVar17 * 2;
  }
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
  }
  if (*piVar1 < param_3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,param_3,(ForAnyElementType *)this,(this->CCDParticles).ArrayNum,piVar1);
  }
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*,0>,FDefaultSetAllocator>
           *)&this->ParticleToCCDParticle);
  local_158 = &(this->CCDConstraints).ArrayMax;
  uVar24 = 0;
  (this->CCDConstraints).ArrayNum = 0;
  if ((this->CCDConstraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->CCDConstraints).AllocatorInstance,0,local_158);
  }
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*local_158 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar17,&(this->CCDConstraints).AllocatorInstance,
               (this->CCDConstraints).ArrayNum,local_158);
  }
  uVar11 = __real_3ff0000000000000;
  local_158 = (int *)param_2->DataPtr;
  bVar13 = false;
  local_108 = (FPBDCollisionConstraint **)((longlong)local_158 + (longlong)(int)uVar17 * 8);
  if ((FPBDCollisionConstraint **)local_158 != local_108) {
    do {
      local_110 = *(FPBDCollisionConstraint **)local_158;
      uVar3 = (local_110->Flags).Bits;
      if (((((byte)uVar3 >> 1 & 1) == 0) && ((uVar3 >> 10 & 1) != 0)) && ((uVar3 >> 8 & 1) == 0)) {
        local_res20[0] = '\0';
        local_res20[1] = '\0';
        puVar26 = &local_98.field_0x8;
        local_170[0] = (FCCDParticle *)0x0;
        local_170[1] = (FCCDParticle *)0x0;
        local_98._0_8_ = 0;
        local_98._8_8_ = 0;
        local_98._16_8_ = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        pTVar23 = pTVar25;
        do {
          local_160 = 0;
          local_res18 = pTVar25;
          if (1 < *(byte *)((longlong)&local_110->Particle[(longlong)pTVar23]->_padding_ + 4)) {
            local_res18 = local_110->Particle[(longlong)pTVar23];
          }
          if (local_res18 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143794e85:
            cVar22 = '\0';
          }
          else {
            uVar17 = (uint)local_res18->_padding_;
            lVar21 = local_res18->_padding_;
            uVar19 = uVar24;
            if ((int)uVar17 < *(int *)(lVar21 + 0x2e0)) {
              uVar19 = ~uVar17 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            if (*(char *)(*(longlong *)(lVar21 + 0x2d8) + 0xb + (longlong)(int)uVar17 * 0x10) !=
                '\x04') goto LAB_143794e85;
            cVar22 = '\x01';
            uVar17 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_res18 >> 4)) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            if (*(int *)&(this->ParticleToCCDParticle).field_0x8 !=
                *(int *)&(this->ParticleToCCDParticle).field_0x34) {
              puVar5 = *(undefined1 **)&(this->ParticleToCCDParticle).field_0x40;
              puVar20 = &(this->ParticleToCCDParticle).field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar20 = puVar5;
              }
              iVar16 = *(int *)(puVar20 +
                               (ulonglong)
                               (*(int *)&(this->ParticleToCCDParticle).field_0x48 - 1U &
                               (uVar17 >> 0x10 ^ uVar17)) * 4);
              if (iVar16 != -1) {
                do {
                  lVar21 = *(longlong *)&this->ParticleToCCDParticle + (longlong)iVar16 * 0x18;
                  if (*(TGeometryParticleHandleImp<double,3,1> **)
                       (*(longlong *)&this->ParticleToCCDParticle + (longlong)iVar16 * 0x18) ==
                      local_res18) {
                    pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)(lVar21 + 8);
                    if (lVar21 == 0) {
                      pTVar18 = pTVar25;
                    }
                    if (pTVar18 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                      local_160 = pTVar18->_padding_;
                      goto LAB_143794e87;
                    }
                    break;
                  }
                  iVar16 = *(int *)(lVar21 + 0x10);
                } while (iVar16 != -1);
              }
            }
            if ((*piVar1 <= (this->CCDParticles).ArrayNum) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CCDParticles.Num() < CCDParticles.Max()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDUtilities.cpp"
                                    ,0xbd,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            local_120 = uVar11;
            local_148.Data = (FScriptContainerElement *)0x0;
            local_140 = 0;
            local_138.Data = (FScriptContainerElement *)0x0;
            local_130 = 0;
            local_128 = 0xffffffff;
            local_118 = (FScriptContainerElement)0x0;
            local_150 = local_res18;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,8,&local_148,0,(int *)((longlong)&local_140 + 4));
            if (local_130._4_4_ < 8) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,8,&local_138,(int)local_130,(int *)((longlong)&local_130 + 4));
            }
            pFVar6 = (this->CCDParticles).AllocatorInstance.Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_150) &&
                ((FScriptContainerElement *)&local_150 < pFVar6 + (longlong)*piVar1 * 0x40)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            iVar16 = (this->CCDParticles).ArrayNum;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,(ForAnyElementType *)this,piVar1);
            }
            (this->CCDParticles).ArrayNum = iVar16 + 1;
            pFVar6 = (this->CCDParticles).AllocatorInstance.Data;
            lVar21 = (longlong)iVar16 * 0x40;
            *(TGeometryParticleHandleImp<double,3,1> **)(pFVar6 + lVar21) = local_150;
            *(undefined8 *)(pFVar6 + lVar21 + 8) = 0;
            *(FScriptContainerElement **)(pFVar6 + lVar21 + 8) = local_148.Data;
            *(undefined4 *)(pFVar6 + lVar21 + 0x10) = (undefined4)local_140;
            *(undefined4 *)(pFVar6 + lVar21 + 0x14) = local_140._4_4_;
            *(undefined8 *)(pFVar6 + lVar21 + 0x18) = 0;
            *(FScriptContainerElement **)(pFVar6 + lVar21 + 0x18) = local_138.Data;
            *(int *)(pFVar6 + lVar21 + 0x20) = (int)local_130;
            *(int *)(pFVar6 + lVar21 + 0x24) = local_130._4_4_;
            *(undefined4 *)(pFVar6 + lVar21 + 0x28) = local_128;
            *(undefined8 *)(pFVar6 + lVar21 + 0x30) = local_120;
            pFVar6[lVar21 + 0x38] = local_118;
            local_130 = 0;
            local_138.Data = (FScriptContainerElement *)0x0;
            local_140 = 0;
            local_148.Data = (FScriptContainerElement *)0x0;
            iVar16 = (this->CCDParticles).ArrayNum;
            uVar19 = iVar16 - 1;
            uVar17 = uVar24;
            if ((int)uVar19 < iVar16) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            local_c0 = &local_res18;
            local_160 = (longlong)
                        ((this->CCDParticles).AllocatorInstance.Data +
                        (longlong)((this->CCDParticles).ArrayNum + -1) * 0x40);
            local_b8 = &local_160;
            TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::FCCDParticle_*_const_&>_>
                      ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*,0>,FDefaultSetAllocator>
                        *)&this->ParticleToCCDParticle,
                       (TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::FCCDParticle_*_const_&>
                        *)&stack0x00000008,(bool *)&local_c0);
          }
LAB_143794e87:
          local_170[(longlong)pTVar23] = (FCCDParticle *)local_160;
          local_res20[(longlong)pTVar23] = cVar22;
          if (local_res18 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            TKinematicGeometryParticlesImp<double,3,0>::GetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)local_res18->_padding_,
                       (TVector<double,3> *)&local_b0,(int)local_res18->_padding_);
            auVar10._8_4_ = SUB84(dStack_a8 * param_1,0);
            auVar10._0_8_ = local_b0 * param_1;
            auVar10._12_4_ = (int)((ulonglong)(dStack_a8 * param_1) >> 0x20);
            *(undefined1 (*) [16])(puVar26 + -8) = auVar10;
            *(double *)(puVar26 + 8) = local_a0 * param_1;
          }
          pFVar12 = local_110;
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)((longlong)&pTVar23->_padding_ + 1);
          puVar26 = puVar26 + 0x18;
        } while ((longlong)pTVar23 < 2);
        bVar13 = FCCDHelpers::DeltaExceedsThreshold
                           (local_110->Particle[0],local_110->Particle[1],param_1);
        this_00 = local_170[1];
        pFVar4 = local_170[0];
        if ((local_170[0] != (FCCDParticle *)0x0) || (local_170[1] != (FCCDParticle *)0x0)) {
          local_100.SweptConstraint = pFVar12;
          local_100.Particle[0] = local_170[0];
          local_100.Particle[1] = local_170[1];
          local_100.Island = -1;
          local_100.ProcessedCount = 0;
          local_100.FastMovingKinematicIndex =
               FCCDConstraint::GetFastMovingKinematicIndex(&local_100,pFVar12,&local_98);
          pFVar7 = (FCCDConstraint *)(this->CCDConstraints).AllocatorInstance.Data;
          local_100.NetImpulse._16_8_ = 0;
          local_100.NetImpulse._0_8_ = 0;
          local_100.NetImpulse._8_8_ = 0;
          if ((pFVar7 <= &local_100) &&
             ((&local_100 < pFVar7 + (this->CCDConstraints).ArrayMax &&
              (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)))) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          iVar16 = (this->CCDConstraints).ArrayNum;
          if (iVar16 == (this->CCDConstraints).ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(this->CCDConstraints).AllocatorInstance,
                                &(this->CCDConstraints).ArrayMax);
          }
          (this->CCDConstraints).ArrayNum = iVar16 + 1;
          pFVar8 = (this->CCDConstraints).AllocatorInstance.Data;
          lVar21 = (longlong)iVar16 * 0x40;
          *(FPBDCollisionConstraint **)(pFVar8 + lVar21) = local_100.SweptConstraint;
          *(FCCDParticle **)(pFVar8 + lVar21 + 8) = local_100.Particle[0];
          *(FCCDParticle **)(pFVar8 + lVar21 + 0x10) = local_100.Particle[1];
          *(ulonglong *)(pFVar8 + lVar21 + 0x10 + 8) =
               CONCAT44(local_100.ProcessedCount,local_100.Island);
          pFVar6 = pFVar8 + lVar21 + 0x20;
          *(int *)pFVar6 = local_100.FastMovingKinematicIndex;
          *(int *)(pFVar6 + 4) = local_100._padding_;
          *(undefined4 *)(pFVar6 + 8) = local_100.NetImpulse._0_4_;
          *(undefined4 *)(pFVar6 + 0xc) = local_100.NetImpulse._4_4_;
          pFVar8 = pFVar8 + lVar21 + 0x30;
          *(undefined4 *)pFVar8 = local_100.NetImpulse._8_4_;
          *(undefined4 *)(pFVar8 + 4) = local_100.NetImpulse._12_4_;
          *(undefined4 *)(pFVar8 + 8) = local_100.NetImpulse._16_4_;
          *(undefined4 *)(pFVar8 + 0xc) = local_100.NetImpulse._20_4_;
          if (pFVar4 != (FCCDParticle *)0x0) {
            iVar16 = (this->CCDConstraints).ArrayNum;
            uVar19 = iVar16 - 1;
            uVar17 = uVar24;
            if ((int)uVar19 < iVar16) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            local_178 = (this->CCDConstraints).AllocatorInstance.Data +
                        (longlong)((this->CCDConstraints).ArrayNum + -1) * 0x40;
            pFVar6 = (pFVar4->AttachedCCDConstraints).AllocatorInstance.Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_178) &&
                ((FScriptContainerElement *)&local_178 <
                 pFVar6 + (longlong)(pFVar4->AttachedCCDConstraints).ArrayMax * 8)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            iVar16 = (pFVar4->AttachedCCDConstraints).ArrayNum;
            piVar2 = &(pFVar4->AttachedCCDConstraints).ArrayMax;
            if (iVar16 == *piVar2) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(pFVar4->AttachedCCDConstraints).AllocatorInstance,piVar2);
            }
            (pFVar4->AttachedCCDConstraints).ArrayNum = iVar16 + 1;
            *(FScriptContainerElement **)
             ((pFVar4->AttachedCCDConstraints).AllocatorInstance.Data + (longlong)iVar16 * 8) =
                 local_178;
          }
          if (this_00 != (FCCDParticle *)0x0) {
            iVar16 = (this->CCDConstraints).ArrayNum;
            uVar19 = iVar16 - 1;
            uVar17 = uVar24;
            if ((int)uVar19 < iVar16) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            local_178 = (this->CCDConstraints).AllocatorInstance.Data +
                        (longlong)((this->CCDConstraints).ArrayNum + -1) * 0x40;
            pFVar6 = (this_00->AttachedCCDConstraints).AllocatorInstance.Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_178) &&
                ((FScriptContainerElement *)&local_178 <
                 pFVar6 + (longlong)(this_00->AttachedCCDConstraints).ArrayMax * 8)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            iVar16 = (this_00->AttachedCCDConstraints).ArrayNum;
            piVar2 = &(this_00->AttachedCCDConstraints).ArrayMax;
            if (iVar16 == *piVar2) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(this_00->AttachedCCDConstraints).AllocatorInstance,piVar2)
              ;
            }
            (this_00->AttachedCCDConstraints).ArrayNum = iVar16 + 1;
            *(FScriptContainerElement **)
             ((this_00->AttachedCCDConstraints).AllocatorInstance.Data + (longlong)iVar16 * 8) =
                 local_178;
          }
          if ((local_res20[0] != '\0') && (local_res20[1] != '\0')) {
            FCCDParticle::AddOverlappingDynamicParticle(pFVar4,this_00);
            FCCDParticle::AddOverlappingDynamicParticle(this_00,pFVar4);
          }
        }
      }
      local_158 = (int *)((longlong)local_158 + 8);
    } while ((FPBDCollisionConstraint **)local_158 != local_108);
  }
  return bVar13;
}

// OverwriteXUsingV @ 14379afd0

void __thiscall Chaos::FCCDManager::OverwriteXUsingV(FCCDManager *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_res8 [8];
  double local_88;
  double local_80;
  double local_78;
  
  iVar4 = (this->CCDParticles).ArrayNum;
  pFVar13 = (this->CCDParticles).AllocatorInstance.Data;
  pFVar12 = pFVar13 + (longlong)iVar4 * 0x40;
  while( true ) {
    if ((this->CCDParticles).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FCCDParticle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar12) break;
    plVar6 = *(longlong **)pFVar13;
    uVar5 = *(uint *)(plVar6 + 1);
    lVar11 = (longlong)(int)uVar5;
    lVar7 = *plVar6;
    uVar10 = 0;
    if ((int)uVar5 < *(int *)(lVar7 + 0x550)) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0x548);
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)*plVar6,(TVector<double,3> *)&local_88,
               (int)plVar6[1]);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar11 * 0x18);
    dVar2 = *(double *)(lVar7 + 8 + lVar11 * 0x18);
    dVar3 = *(double *)(lVar7 + lVar11 * 0x18);
    uVar5 = *(uint *)(plVar6 + 1);
    lVar11 = (longlong)(int)uVar5;
    lVar7 = *plVar6;
    dVar14 = local_78 * param_1;
    dVar16 = local_80 * param_1;
    uVar10 = 0;
    if ((int)uVar5 < *(int *)(lVar7 + 0x30)) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    dVar15 = local_88 * param_1;
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0x28);
    pFVar13 = pFVar13 + 0x40;
    *(double *)(lVar7 + lVar11 * 0x18) = dVar3 - dVar15;
    *(double *)(lVar7 + 8 + lVar11 * 0x18) = dVar2 - dVar16;
    *(double *)(lVar7 + 0x10 + lVar11 * 0x18) = dVar1 - dVar14;
  }
  return;
}

// ProjectCCD @ 14379ec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FCCDManager::ProjectCCD
          (FCCDManager *this,double param_1,
          TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *param_2)

{
  float fVar1;
  float fVar2;
  FPBDCollisionConstraint **_Src;
  longlong lVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  ForElementType<Chaos::FManifoldPoint> FVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  EObjectStateType EVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  TVector<double,3> *pTVar22;
  TGeometryParticleHandleImp<double,3,1> *pTVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  ulonglong uVar25;
  TGeometryParticleHandleImp<double,3,1> *pTVar26;
  byte bVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  ForElementType<Chaos::FManifoldPoint> FVar30;
  uint uVar31;
  byte bVar32;
  uint uVar33;
  FPBDCollisionConstraint *pFVar34;
  ForAnyElementType FVar35;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar41;
  undefined1 auVar40 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  double dVar52;
  uint uVar54;
  double dVar53;
  double dVar55;
  undefined1 auStackY_438 [32];
  undefined1 local_3f7;
  FIdentityFunctor local_3f6 [6];
  FGenericParticleHandleImp local_3f0;
  FGenericParticleHandleImp local_3e8;
  FScriptContainerElement *local_3e0;
  ForAnyElementType local_3d8;
  uint local_3d0;
  int local_3cc;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  uint local_3b0;
  int local_3ac;
  int local_3a8;
  FScriptContainerElement *local_3a0;
  FPBDCollisionConstraint *local_398;
  double dStack_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  undefined1 local_320 [24];
  double local_308 [2];
  double local_2f8;
  double local_2e0;
  double local_2c8;
  undefined1 local_2c0 [40];
  double local_298;
  undefined1 local_290 [40];
  double local_268;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_3d0 = param_2->ArrayNum;
  lVar28 = (longlong)(int)local_3d0;
  _Src = param_2->DataPtr;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  if (local_3d0 == 0) {
    local_3cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_3d0,0,&local_3d8,local_3d0,&local_3cc);
    memcpy(local_3d8.Data,_Src,lVar28 << 3);
  }
  FVar35.Data = local_3d8.Data;
  uVar33 = local_3d0;
  if ((CVars::bClearNullCCDConstraintsOnApply != false) && (local_3d0 != 0)) {
    pFVar34 = *(FPBDCollisionConstraint **)local_3d8.Data;
    uVar33 = 0;
    if ((pFVar34 == (FPBDCollisionConstraint *)0x0) ||
       ((pFVar34->Particle[0] == (TGeometryParticleHandleImp<double,3,1> *)0x0 ||
        (pFVar34->Particle[1] == (TGeometryParticleHandleImp<double,3,1> *)0x0)))) {
      bVar32 = 0;
    }
    else {
      bVar32 = 1;
    }
    lVar36 = (longlong)(int)local_3d0;
    lVar28 = 0;
    uVar54 = 0;
    do {
      uVar31 = uVar54;
      do {
        lVar28 = lVar28 + 1;
        uVar31 = uVar31 + 1;
        if (lVar36 <= lVar28) break;
        lVar3 = *(longlong *)(FVar35.Data + lVar28 * 8);
        if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0xe0) == 0)) ||
           (*(longlong *)(lVar3 + 0xe8) == 0)) {
          bVar27 = 0;
        }
        else {
          bVar27 = 1;
        }
      } while (bVar32 == bVar27);
      if (bVar32 != 0) {
        if (uVar33 != uVar54) {
          memmove(FVar35.Data + (longlong)(int)uVar33 * 8,FVar35.Data + (longlong)(int)uVar54 * 8,
                  (longlong)(int)(uVar31 - uVar54) << 3);
        }
        uVar33 = uVar33 + (uVar31 - uVar54);
      }
      bVar32 = bVar32 ^ 1;
      uVar54 = uVar31;
    } while (lVar28 < lVar36);
  }
  local_3d0 = uVar33;
  AlgoImpl::
  IntroSortInternal<Chaos::FPBDCollisionConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FPBDCollisionConstraint_*,_Chaos::FCCDManager::ProjectCCD_::__l2::<lambda_2>_>_>
            ((FPBDCollisionConstraint **)local_3d8.Data,local_3d0,local_3f6[0],
             (<lambda_2> *)local_3f6);
  uVar46 = (undefined4)__real_3fe0000000000000;
  uVar47 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar44 = (undefined4)__real_3ff0000000000000;
  uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_388 = (double)CVars::ChaosCollisionCCDCorrectionPhiToleranceScale;
  local_3a8 = CVars::ChaosCollisionCCDCorrectionIterations;
  iVar21 = 0;
  dVar52 = ___xmm_00000000000000003ff0000000000000;
  dVar37 = _UNK_150689518;
  dVar38 = ___xmm_3ff00000000000003ff0000000000000;
  dVar55 = _UNK_150689688;
  do {
    if (local_3a8 <= iVar21) break;
    uVar25 = (ulonglong)(int)local_3d0;
    local_3ac = iVar21 + 1;
    bVar19 = true;
    bVar13 = true;
    local_3b0 = local_3d0;
    local_3e0 = local_3d8.Data + uVar25 * 8;
    pFVar29 = local_3e0;
    FVar35.Data = local_3d8.Data;
    while( true ) {
      uVar51 = 0;
      uVar50 = 0;
      local_3a0 = FVar35.Data;
      if (local_3d0 != (uint)uVar25) {
        local_3f7 = 0;
        `TCheckedPointerIterator<Chaos::FPBDCollisionConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_3f7);
      }
      if (FVar35.Data == pFVar29) break;
      pFVar34 = *(FPBDCollisionConstraint **)FVar35.Data;
      local_398 = pFVar34;
      if ((((pFVar34->Flags).Bits >> 8 & 1) == 0) && (((byte)(pFVar34->Flags).Bits >> 1 & 1) == 0))
      {
        pTVar24 = pFVar34->Particle[0];
        pTVar4 = pFVar34->Particle[1];
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
          pTVar23 = pTVar24;
        }
        local_3f0.MHandle = pTVar24;
        local_3e8.MHandle = pTVar4;
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14379eec1:
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
            pTVar23 = pTVar24;
          }
          if (pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
              pTVar26 = pTVar23;
            }
            if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              EVar18 = Kinematic;
            }
            else {
              EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
            }
            if (EVar18 == Sleeping) goto LAB_14379eeec;
          }
          bVar20 = false;
        }
        else {
          pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
            pTVar26 = pTVar23;
          }
          if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            EVar18 = Kinematic;
          }
          else {
            EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
          }
          if (EVar18 != Dynamic) goto LAB_14379eec1;
LAB_14379eeec:
          bVar20 = true;
        }
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
          pTVar23 = pTVar4;
        }
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14379ef1f:
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
            pTVar23 = pTVar4;
          }
          if (pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
              pTVar26 = pTVar23;
            }
            if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              EVar18 = Kinematic;
            }
            else {
              EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
            }
            if (EVar18 == Sleeping) goto LAB_14379ef4a;
          }
          bVar12 = false;
        }
        else {
          pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
            pTVar26 = pTVar23;
          }
          if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            EVar18 = Kinematic;
          }
          else {
            EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
          }
          if (EVar18 != Dynamic) goto LAB_14379ef1f;
LAB_14379ef4a:
          bVar12 = true;
        }
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
          pTVar23 = pTVar24;
        }
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          bVar32 = 0;
        }
        else {
          uVar33 = (uint)pTVar23->_padding_;
          lVar28 = pTVar23->_padding_;
          uVar54 = 0;
          if ((int)uVar33 < *(int *)(lVar28 + 0x2e0)) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar32 = *(byte *)(*(longlong *)(lVar28 + 0x2d8) + 8 + (longlong)(int)uVar33 * 0x10) >> 1
                   & 1;
        }
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
          pTVar23 = pTVar4;
        }
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          bVar27 = 0;
        }
        else {
          uVar33 = (uint)pTVar23->_padding_;
          lVar28 = pTVar23->_padding_;
          uVar54 = 0;
          if ((int)uVar33 < *(int *)(lVar28 + 0x2e0)) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar27 = *(byte *)(*(longlong *)(lVar28 + 0x2d8) + 8 + (longlong)(int)uVar33 * 0x10) >> 1
                   & 1;
          pFVar34 = local_398;
        }
        pFVar29 = local_3e0;
        bVar19 = bVar13;
        if (((bVar32 == 0) && (bVar27 == 0)) || ((!bVar20 && (!bVar12)))) goto LAB_14379fb19;
        if ((bVar20) && (uVar50 = uVar46, uVar51 = uVar47, !bVar12)) {
          uVar50 = uVar44;
          uVar51 = uVar45;
        }
        dVar8 = (double)CONCAT44(uVar45,uVar44) - (double)CONCAT44(uVar51,uVar50);
        bVar20 = FGenericParticleHandleImp::IsDynamic(&local_3f0);
        if (bVar20) {
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
            pTVar23 = pTVar24;
          }
          uVar33 = (uint)pTVar23->_padding_;
          lVar28 = pTVar23->_padding_;
          uVar54 = 0;
          if ((int)uVar33 < *(int *)(lVar28 + 0x568)) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar28 = *(longlong *)(lVar28 + 0x560);
        }
        else {
          uVar33 = (uint)pTVar24->_padding_;
          lVar28 = pTVar24->_padding_;
          uVar54 = 0;
          if ((int)uVar33 < *(int *)(lVar28 + 0x50)) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar28 = *(longlong *)(lVar28 + 0x48);
        }
        lVar36 = (longlong)(int)uVar33;
        fVar1 = *(float *)(lVar28 + 4 + lVar36 * 0x10);
        fVar2 = *(float *)(lVar28 + lVar36 * 0x10);
        uVar41 = *(undefined8 *)(lVar28 + 8 + lVar36 * 0x10);
        dVar39 = (double)(float)((ulonglong)uVar41 >> 0x20);
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
          pTVar23 = pTVar24;
        }
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14379f1bd:
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
            pTVar23 = pTVar24;
          }
          if (pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
              pTVar26 = pTVar23;
            }
            if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              EVar18 = Kinematic;
            }
            else {
              EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
            }
            if (EVar18 == Sleeping) goto LAB_14379f1e8;
          }
          pTVar22 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pTVar24->_padding_,(int)pTVar24->_padding_);
        }
        else {
          pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
            pTVar26 = pTVar23;
          }
          if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            EVar18 = Kinematic;
          }
          else {
            EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
          }
          if (EVar18 != Dynamic) goto LAB_14379f1bd;
LAB_14379f1e8:
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
            pTVar23 = pTVar24;
          }
          pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23);
        }
        local_198.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar39,0);
        local_198.Rotation.ZW.m128d_f64[0] = (double)(float)uVar41;
        local_198.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar39 >> 0x20);
        local_198.Translation.XY.m128d_f64[0] = *(double *)pTVar22;
        local_198.Translation.XY.m128d_f64[1] = *(double *)&pTVar22->field_0x8;
        local_198.Translation.ZW.m128d_f64[0] = *(double *)&pTVar22->field_0x10;
        local_258.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_258.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_258.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_258.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_198.Translation.ZW.m128d_f64[1] = 0.0;
        local_258.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_258.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_258.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_258.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_258.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_258.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_258.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_258.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_258.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_258.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_198.Rotation.XY.m128d_f64[0] = (double)fVar2;
        local_198.Rotation.XY.m128d_f64[1] = (double)fVar1;
        local_198.Scale3D.XY.m128d_f64[0] = dVar38;
        local_198.Scale3D.XY.m128d_f64[1] = dVar55;
        local_198.Scale3D.ZW.m128d_f64[0] = dVar52;
        local_198.Scale3D.ZW.m128d_f64[1] = dVar37;
        UE::Math::TTransform<double>::Multiply
                  (&local_258,(TTransform<double> *)pFVar34->ImplicitTransform,&local_198);
        dVar15 = local_258.Translation.ZW.m128d_f64[1];
        dVar14 = local_258.Translation.ZW.m128d_f64[0];
        dVar55 = local_258.Rotation.ZW.m128d_f64[1];
        dVar38 = local_258.Rotation.ZW.m128d_f64[0];
        dVar37 = local_258.Rotation.XY.m128d_f64[1];
        dVar52 = local_258.Rotation.XY.m128d_f64[0];
        dVar39 = local_258.Translation.XY.m128d_f64[0];
        dVar53 = local_258.Translation.XY.m128d_f64[1];
        dVar16 = local_258.Scale3D.XY.m128d_f64[0];
        dVar17 = local_258.Scale3D.XY.m128d_f64[1];
        local_398 = (FPBDCollisionConstraint *)local_258.Scale3D.ZW.m128d_f64[0];
        dStack_390 = local_258.Scale3D.ZW.m128d_f64[1];
        bVar20 = FGenericParticleHandleImp::IsDynamic(&local_3e8);
        if (bVar20) {
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
            pTVar23 = pTVar4;
          }
          uVar33 = (uint)pTVar23->_padding_;
          lVar28 = pTVar23->_padding_;
          uVar54 = 0;
          if ((int)uVar33 < *(int *)(lVar28 + 0x568)) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar28 = *(longlong *)(lVar28 + 0x560);
        }
        else {
          uVar33 = (uint)pTVar4->_padding_;
          lVar28 = pTVar4->_padding_;
          uVar54 = 0;
          if ((int)uVar33 < *(int *)(lVar28 + 0x50)) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar28 = *(longlong *)(lVar28 + 0x48);
        }
        lVar36 = (longlong)(int)uVar33;
        fVar1 = *(float *)(lVar28 + 4 + lVar36 * 0x10);
        fVar2 = *(float *)(lVar28 + lVar36 * 0x10);
        uVar41 = *(undefined8 *)(lVar28 + 8 + lVar36 * 0x10);
        dVar7 = (double)(float)((ulonglong)uVar41 >> 0x20);
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
          pTVar23 = pTVar4;
        }
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14379f40b:
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
            pTVar23 = pTVar4;
          }
          if (pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
              pTVar26 = pTVar23;
            }
            if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              EVar18 = Kinematic;
            }
            else {
              EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
            }
            if (EVar18 == Sleeping) goto LAB_14379f436;
          }
          pTVar22 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pTVar4->_padding_,(int)pTVar4->_padding_);
        }
        else {
          pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
            pTVar26 = pTVar23;
          }
          if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            EVar18 = Kinematic;
          }
          else {
            EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
          }
          if (EVar18 != Dynamic) goto LAB_14379f40b;
LAB_14379f436:
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
            pTVar23 = pTVar4;
          }
          pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23);
        }
        local_138.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
        local_138.Rotation.ZW.m128d_f64[0] = (double)(float)uVar41;
        local_138.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_138.Translation.XY.m128d_f64[0] = *(double *)pTVar22;
        local_138.Translation.XY.m128d_f64[1] = *(double *)&pTVar22->field_0x8;
        local_138.Translation.ZW.m128d_f64[0] = *(double *)&pTVar22->field_0x10;
        local_138.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_138.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_138.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_138.Translation.ZW.m128d_f64[1] = 0.0;
        local_1f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1f8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_138.Rotation.XY.m128d_f64[0] = (double)fVar2;
        local_138.Rotation.XY.m128d_f64[1] = (double)fVar1;
        UE::Math::TTransform<double>::Multiply
                  (&local_1f8,(TTransform<double> *)(pFVar34->ImplicitTransform + 1),&local_138);
        *(double *)pFVar34->ShapeWorldTransforms = dVar52;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x8 = dVar37;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x10 = dVar38;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x18 = dVar55;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x20 = dVar39;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x28 = dVar53;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x30 = dVar14;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x38 = dVar15;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x40 = dVar16;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x48 = dVar17;
        *(FPBDCollisionConstraint **)&pFVar34->ShapeWorldTransforms[0].field_0x50 = local_398;
        *(double *)&pFVar34->ShapeWorldTransforms[0].field_0x58 = dStack_390;
        *(double *)(pFVar34->ShapeWorldTransforms + 1) = local_1f8.Rotation.XY.m128d_f64[0];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x8 = local_1f8.Rotation.XY.m128d_f64[1];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x10 = local_1f8.Rotation.ZW.m128d_f64[0]
        ;
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x18 = local_1f8.Rotation.ZW.m128d_f64[1]
        ;
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x20 =
             local_1f8.Translation.XY.m128d_f64[0];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x28 =
             local_1f8.Translation.XY.m128d_f64[1];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x30 =
             local_1f8.Translation.ZW.m128d_f64[0];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x38 =
             local_1f8.Translation.ZW.m128d_f64[1];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x40 = local_1f8.Scale3D.XY.m128d_f64[0];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x48 = local_1f8.Scale3D.XY.m128d_f64[1];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x50 = local_1f8.Scale3D.ZW.m128d_f64[0];
        *(double *)&pFVar34->ShapeWorldTransforms[1].field_0x58 = local_1f8.Scale3D.ZW.m128d_f64[1];
        FPBDCollisionConstraint::UpdateManifoldContacts(pFVar34);
        uVar33 = pFVar34->ClosestManifoldPointIndex;
        dVar52 = __real_7fefffffffffffff;
        if (uVar33 != 0xffffffff) {
          uVar54 = 0;
          if ((int)uVar33 < (pFVar34->ManifoldPoints).ArrayNum) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (pFVar34->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar30 = (ForElementType<Chaos::FManifoldPoint>)&pFVar34->ManifoldPoints;
          if (FVar5 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar30 = FVar5;
          }
          dVar52 = (double)*(float *)((longlong)(int)uVar33 * 0x6c + 0x24 + (longlong)FVar30);
        }
        dVar37 = (double)pFVar34->CCDTargetPenetration * local_388;
        uVar33 = (uint)__xmm_80000000000000008000000000000000;
        uVar54 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        if ((double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^ uVar54,SUB84(dVar37,0) ^ uVar33) <=
            dVar52) {
          uVar44 = (undefined4)__real_3ff0000000000000;
          uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          uVar46 = (undefined4)__real_3fe0000000000000;
          uVar47 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
          pFVar29 = local_3e0;
          dVar52 = ___xmm_00000000000000003ff0000000000000;
          dVar37 = _UNK_150689518;
          dVar38 = ___xmm_3ff00000000000003ff0000000000000;
          dVar55 = _UNK_150689688;
          goto LAB_14379fb19;
        }
        bVar19 = false;
        bVar13 = false;
        FPBDCollisionConstraint::CalculateWorldContactNormal
                  (pFVar34,(TVector<double,3> *)&local_3c8);
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
          pTVar23 = pTVar24;
        }
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          dVar37 = (double)CONCAT44(FGenericParticleHandleImp::ZeroVector._4_4_,
                                    FGenericParticleHandleImp::ZeroVector._0_4_);
          auVar11._8_4_ = FGenericParticleHandleImp::ZeroVector._8_4_;
          auVar11._0_8_ = dVar37;
          auVar11._12_4_ = FGenericParticleHandleImp::ZeroVector._12_4_;
          dVar38 = auVar11._8_8_;
          uVar42 = FGenericParticleHandleImp::ZeroVector._16_4_;
          uVar43 = FGenericParticleHandleImp::ZeroVector._20_4_;
          local_2e0 = (double)FGenericParticleHandleImp::ZeroVector._16_8_;
          uVar44 = FGenericParticleHandleImp::ZeroVector._0_4_;
          uVar45 = FGenericParticleHandleImp::ZeroVector._4_4_;
          uVar46 = FGenericParticleHandleImp::ZeroVector._8_4_;
          uVar47 = FGenericParticleHandleImp::ZeroVector._12_4_;
          uVar41 = extraout_XMM0_Qb;
        }
        else {
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar23->_padding_,
                     (TVector<double,3> *)local_320,(int)pTVar23->_padding_);
          uVar41 = 0;
          uVar42 = FGenericParticleHandleImp::ZeroVector._16_4_;
          uVar43 = FGenericParticleHandleImp::ZeroVector._20_4_;
          dVar37 = (double)CONCAT44(FGenericParticleHandleImp::ZeroVector._4_4_,
                                    FGenericParticleHandleImp::ZeroVector._0_4_);
          dVar38._4_4_ = FGenericParticleHandleImp::ZeroVector._12_4_;
          dVar38._0_4_ = FGenericParticleHandleImp::ZeroVector._8_4_;
          local_2e0 = (double)local_320._16_8_;
          uVar44 = local_320._0_4_;
          uVar45 = local_320._4_4_;
          uVar46 = local_320._8_4_;
          uVar47 = local_320._12_4_;
        }
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
          pTVar23 = pTVar4;
        }
        if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          local_2c8 = (double)CONCAT44(uVar43,uVar42);
        }
        else {
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar23->_padding_,
                     (TVector<double,3> *)local_308,(int)pTVar23->_padding_);
          uVar41 = 0;
          local_2c8 = local_2f8;
          dVar37 = local_308[0];
          dVar38 = local_308[1];
        }
        dVar55 = __real_3e45798ee0000000;
        uVar42 = SUB84(local_3c0,0);
        uVar43 = (undefined4)((ulonglong)local_3c0 >> 0x20);
        auVar9._4_8_ = uVar41;
        auVar9._0_4_ = (int)((ulonglong)dVar37 >> 0x20);
        auVar40._0_8_ = auVar9._0_8_ << 0x20;
        auVar40._8_4_ = SUB84(dVar38,0);
        auVar40._12_4_ = SUB84(dVar38,4);
        uVar48 = SUB84(local_3b8,0);
        uVar49 = (undefined4)((ulonglong)local_3b8 >> 0x20);
        dVar37 = ((double)CONCAT44(uVar45,uVar44) - dVar37) * local_3c8 +
                 local_3c0 * ((double)CONCAT44(uVar47,uVar46) - auVar40._8_8_) +
                 local_3b8 * (local_2e0 - local_2c8);
        if (__real_0000000000000000 <= dVar37) {
          dVar37 = __real_0000000000000000;
        }
        if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar51,uVar50) &&
            (double)CONCAT44(uVar51,uVar50) != __real_3e45798ee0000000) {
          dVar38 = dVar52 * (double)CONCAT44(uVar51,uVar50);
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
            pTVar23 = pTVar24;
          }
          dVar39 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^ uVar54,
                                    SUB84(dVar38,0) ^ uVar33);
          dVar38 = local_3c0 * dVar39;
          dVar53 = dVar39 * local_3c8;
          dVar39 = local_3b8 * dVar39;
          if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14379f7b2:
            pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
              pTVar23 = pTVar24;
            }
            if (pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
                pTVar26 = pTVar23;
              }
              if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                EVar18 = Kinematic;
              }
              else {
                EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                   ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
              }
              if (EVar18 == Sleeping) goto LAB_14379f7dd;
            }
            pTVar22 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pTVar24->_padding_,(int)pTVar24->_padding_)
            ;
          }
          else {
            pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
              pTVar26 = pTVar23;
            }
            if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              EVar18 = Kinematic;
            }
            else {
              EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
            }
            if (EVar18 != Dynamic) goto LAB_14379f7b2;
LAB_14379f7dd:
            pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
              pTVar23 = pTVar24;
            }
            pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23);
          }
          local_380 = dVar53 + *(double *)pTVar22;
          local_378 = dVar38 + *(double *)&pTVar22->field_0x8;
          local_370 = dVar39 + *(double *)&pTVar22->field_0x10;
          bVar20 = FGenericParticleHandleImp::IsDynamic(&local_3f0);
          if (bVar20) {
            pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
              pTVar23 = pTVar24;
            }
            TPBDRigidParticleHandleImp<double,3,1>::SetP
                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23,
                       (TVector<double,3> *)&local_380);
          }
          else {
            TParticles<double,3>::SetX
                      ((TParticles<double,3> *)pTVar24->_padding_,(int)pTVar24->_padding_,
                       (TVector<double,3> *)&local_380);
          }
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
            pTVar23 = pTVar24;
          }
          if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            auVar10._4_4_ = FGenericParticleHandleImp::ZeroVector._4_4_;
            auVar10._0_4_ = FGenericParticleHandleImp::ZeroVector._0_4_;
            auVar10._8_4_ = FGenericParticleHandleImp::ZeroVector._8_4_;
            auVar10._12_4_ = FGenericParticleHandleImp::ZeroVector._12_4_;
            local_348 = auVar10._8_8_;
            local_298 = (double)FGenericParticleHandleImp::ZeroVector._16_8_;
            uVar44 = FGenericParticleHandleImp::ZeroVector._0_4_;
            uVar45 = FGenericParticleHandleImp::ZeroVector._4_4_;
          }
          else {
            TKinematicGeometryParticlesImp<double,3,0>::GetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar23->_padding_,
                       (TVector<double,3> *)local_2c0,(int)pTVar23->_padding_);
            local_348 = local_2c0._8_8_;
            local_298 = (double)local_2c0._16_8_;
            uVar44 = local_2c0._0_4_;
            uVar45 = local_2c0._4_4_;
          }
          uVar42 = SUB84(local_3c0,0);
          uVar43 = (undefined4)((ulonglong)local_3c0 >> 0x20);
          uVar48 = SUB84(local_3b8,0);
          uVar49 = (undefined4)((ulonglong)local_3b8 >> 0x20);
          pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
            pTVar23 = pTVar24;
          }
          dVar38 = dVar37 * (double)CONCAT44(uVar51,uVar50);
          local_350 = (double)CONCAT44(uVar45,uVar44) - dVar38 * local_3c8;
          local_348 = local_348 - local_3c0 * dVar38;
          local_340 = local_298 - local_3b8 * dVar38;
          if (pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            TKinematicGeometryParticlesImp<double,3,0>::SetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar23->_padding_,
                       (int)pTVar23->_padding_,(TVector<double,3> *)&local_350);
            uVar48 = SUB84(local_3b8,0);
            uVar49 = (undefined4)((ulonglong)local_3b8 >> 0x20);
            uVar42 = SUB84(local_3c0,0);
            uVar43 = (undefined4)((ulonglong)local_3c0 >> 0x20);
          }
        }
        if (dVar55 < dVar8) {
          dVar52 = dVar52 * dVar8;
          pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
            pTVar24 = pTVar4;
          }
          dVar38 = dVar52 * local_3c8;
          if (pTVar24 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14379f968:
            pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
              pTVar24 = pTVar4;
            }
            if (pTVar24 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
                pTVar23 = pTVar24;
              }
              if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                EVar18 = Kinematic;
              }
              else {
                EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                   ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23);
              }
              if (EVar18 == Sleeping) goto LAB_14379f993;
            }
            pTVar22 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pTVar4->_padding_,(int)pTVar4->_padding_);
          }
          else {
            pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
              pTVar23 = pTVar24;
            }
            if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              EVar18 = Kinematic;
            }
            else {
              EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23);
            }
            if (EVar18 != Dynamic) goto LAB_14379f968;
LAB_14379f993:
            pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
              pTVar24 = pTVar4;
            }
            pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
          }
          local_368 = dVar38 + *(double *)pTVar22;
          local_360 = (double)CONCAT44(uVar43,uVar42) * dVar52 + *(double *)&pTVar22->field_0x8;
          local_358 = (double)CONCAT44(uVar49,uVar48) * dVar52 + *(double *)&pTVar22->field_0x10;
          bVar20 = FGenericParticleHandleImp::IsDynamic(&local_3e8);
          if (bVar20) {
            pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
              pTVar24 = pTVar4;
            }
            TPBDRigidParticleHandleImp<double,3,1>::SetP
                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24,
                       (TVector<double,3> *)&local_368);
          }
          else {
            TParticles<double,3>::SetX
                      ((TParticles<double,3> *)pTVar4->_padding_,(int)pTVar4->_padding_,
                       (TVector<double,3> *)&local_368);
          }
          pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
            pTVar24 = pTVar4;
          }
          uVar44 = FGenericParticleHandleImp::ZeroVector._0_4_;
          uVar45 = FGenericParticleHandleImp::ZeroVector._4_4_;
          uVar46 = FGenericParticleHandleImp::ZeroVector._8_4_;
          uVar47 = FGenericParticleHandleImp::ZeroVector._12_4_;
          dVar52 = (double)FGenericParticleHandleImp::ZeroVector._16_8_;
          if (pTVar24 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            TKinematicGeometryParticlesImp<double,3,0>::GetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar24->_padding_,
                       (TVector<double,3> *)local_290,(int)pTVar24->_padding_);
            uVar44 = local_290._0_4_;
            uVar45 = local_290._4_4_;
            uVar46 = local_290._8_4_;
            uVar47 = local_290._12_4_;
            dVar52 = (double)local_290._16_8_;
          }
          dVar37 = dVar37 * dVar8;
          pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
            pTVar24 = pTVar4;
          }
          local_338 = dVar37 * local_3c8 + (double)CONCAT44(uVar45,uVar44);
          local_330 = local_3c0 * dVar37 + (double)CONCAT44(uVar47,uVar46);
          local_328 = local_3b8 * dVar37 + dVar52;
          local_268 = dVar52;
          if (pTVar24 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            TKinematicGeometryParticlesImp<double,3,0>::SetV
                      ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar24->_padding_,
                       (int)pTVar24->_padding_,(TVector<double,3> *)&local_338);
          }
        }
        uVar44 = (undefined4)__real_3ff0000000000000;
        uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        FVar35.Data = local_3a0 + 8;
        uVar46 = (undefined4)__real_3fe0000000000000;
        uVar47 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
        uVar25 = (ulonglong)local_3b0;
        pFVar29 = local_3e0;
        dVar52 = ___xmm_00000000000000003ff0000000000000;
        dVar37 = _UNK_150689518;
        dVar38 = ___xmm_3ff00000000000003ff0000000000000;
        dVar55 = _UNK_150689688;
      }
      else {
LAB_14379fb19:
        uVar25 = (ulonglong)local_3b0;
        FVar35.Data = local_3a0 + 8;
      }
    }
    iVar21 = local_3ac;
  } while (!bVar19);
  if (local_3d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data);
  }
  return;
}

// ResetIslandConstraints @ 1437a69b0

void __thiscall Chaos::FCCDManager::ResetIslandConstraints(FCCDManager *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  if (param_1 < (this->IslandConstraintStart).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = (ulonglong)
          *(int *)((this->IslandConstraintStart).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar5 = 0;
  if (param_1 < (this->IslandConstraintEnd).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = *(int *)((this->IslandConstraintEnd).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar8 = uVar7;
  while( true ) {
    if ((longlong)iVar2 <= (longlong)uVar7) {
      return;
    }
    uVar6 = (uint)uVar8;
    uVar5 = 0;
    if ((int)uVar6 < (this->SortedCCDConstraints).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar8 = (ulonglong)(uVar6 + 1);
    lVar1 = uVar7 * 8;
    uVar7 = uVar7 + 1;
    *(undefined4 *)
     (*(longlong *)((this->SortedCCDConstraints).AllocatorInstance.Data + lVar1) + 0x1c) = 0;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ResetIslandParticles @ 1437a6b10

void __thiscall Chaos::FCCDManager::ResetIslandParticles(FCCDManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = 0;
  uVar5 = uVar9;
  if (param_1 < (this->IslandParticleStart).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = *(int *)((this->IslandParticleStart).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar7 = (ulonglong)iVar2;
  uVar5 = uVar9;
  if (param_1 < (this->IslandParticleNum).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar10 = *(int *)((this->IslandParticleNum).AllocatorInstance.Data + (longlong)param_1 * 4) +
           iVar2;
  if (iVar2 < iVar10) {
    lVar8 = uVar7 * 8;
    do {
      uVar6 = (uint)uVar7;
      uVar5 = uVar9;
      if ((int)uVar6 < (this->GroupedCCDParticles).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)
       (*(longlong *)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar8) + 0x30) = 0;
      uVar5 = 0;
      if ((int)uVar6 < (this->GroupedCCDParticles).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      pFVar1 = (this->GroupedCCDParticles).AllocatorInstance.Data + lVar8;
      lVar8 = lVar8 + 8;
      *(undefined1 *)(*(longlong *)pFVar1 + 0x38) = 0;
    } while ((int)(uVar6 + 1) < iVar10);
  }
  return;
}

// UpdateParticleP @ 1437bfd60

void __thiscall
Chaos::FCCDManager::UpdateParticleP(FCCDManager *this,FCCDParticle *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  TVector<double,3> *pTVar11;
  longlong lVar12;
  double local_58;
  double local_50;
  double local_48;
  
  pTVar5 = param_1->Particle;
  dVar8 = (__real_3ff0000000000000 - param_1->TOI) * param_2;
  pTVar11 = TParticles<double,3>::GetX(*(TParticles<double,3> **)pTVar5,*(int *)&pTVar5->field_0x8);
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar5,(TVector<double,3> *)&local_58,
             *(int *)&pTVar5->field_0x8);
  dVar1 = *(double *)&pTVar11->field_0x10;
  dVar2 = *(double *)&pTVar11->field_0x8;
  dVar3 = *(double *)pTVar11;
  uVar4 = *(uint *)&pTVar5->field_0x8;
  lVar12 = (longlong)(int)uVar4;
  lVar6 = *(longlong *)pTVar5;
  uVar10 = 0;
  if ((int)uVar4 < *(int *)(lVar6 + 0x550)) {
    uVar10 = ~uVar4 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x548);
  *(double *)(lVar6 + lVar12 * 0x18) = dVar8 * local_58 + dVar3;
  *(double *)(lVar6 + 8 + lVar12 * 0x18) = dVar8 * local_50 + dVar2;
  *(double *)(lVar6 + 0x10 + lVar12 * 0x18) = dVar8 * local_48 + dVar1;
  return;
}

// UpdateParticleSweptConstraints @ 1437bfe70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FCCDManager::UpdateParticleSweptConstraints
          (FCCDManager *this,FCCDParticle *param_1,double param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  FCCDParticle *pFVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  FPBDCollisionConstraint *pFVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  bool bVar20;
  double dVar21;
  bool bVar22;
  undefined1 uVar23;
  bool bVar24;
  EObjectStateType EVar25;
  uint uVar26;
  uint uVar27;
  TGeometryParticleHandleImp<double,3,1> *pTVar28;
  TVector<double,3> *pTVar29;
  TGeometryParticleHandleImp<double,3,1> *pTVar30;
  TGeometryParticleHandleImp<double,3,1> *pTVar31;
  TParticles<double,3> *this_00;
  int iVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  VectorRegister4Double *pVVar36;
  longlong lVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_568 [32];
  longlong local_548;
  longlong local_540;
  uint local_538;
  undefined1 local_534 [4];
  FGenericParticleHandleImp local_530;
  double local_528;
  FCCDManager *local_520;
  longlong local_518;
  FGenericParticleHandleImp local_510;
  FGenericParticleHandleImp local_508;
  FGenericParticleHandleImp local_500;
  FGenericParticleHandleImp local_4f8;
  double local_4f0;
  FCCDParticle *local_4e8;
  TVector<double,3> local_4e0;
  double local_4b8;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  dVar21 = _UNK_150689518;
  dVar6 = ___xmm_00000000000000003ff0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_568;
  bVar24 = false;
  local_4f0 = __real_3ff0000000000000 - param_2;
  dVar19 = local_4f0 * param_3;
  local_528 = param_3;
  local_520 = this;
  local_4e8 = param_1;
  if ((param_1 != (FCCDParticle *)0x0) &&
     (local_538 = 0, 0 < (param_1->AttachedCCDConstraints).ArrayNum)) {
    local_518 = 0;
    bVar24 = false;
    dVar48 = ___xmm_3ff00000000000003ff0000000000000;
    dVar49 = _UNK_150689688;
    do {
      lVar37 = local_518;
      iVar32 = (param_1->AttachedCCDConstraints).ArrayNum;
      uVar26 = 0;
      if ((int)local_538 < iVar32) {
        uVar26 = ~local_538 >> 0x1f;
      }
      if (uVar26 == 0) {
        local_548 = (longlong)(int)local_538;
        local_540 = (longlong)iVar32;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar11 = (code *)swi(3);
          uVar23 = (*pcVar11)();
          return (bool)uVar23;
        }
      }
      plVar7 = *(longlong **)((param_1->AttachedCCDConstraints).AllocatorInstance.Data + lVar37);
      if (*(int *)((longlong)plVar7 + 0x1c) < CVars::ChaosCollisionCCDConstraintMaxProcessCount) {
        if ((plVar7[1] == 0) || (*(char *)(plVar7[1] + 0x38) != '\0')) {
          bVar22 = true;
        }
        else {
          bVar22 = false;
        }
        if ((plVar7[2] == 0) || (*(char *)(plVar7[2] + 0x38) != '\0')) {
          bVar20 = true;
        }
        else {
          bVar20 = false;
        }
        if ((!bVar22) || (!bVar20)) {
          uVar44 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar45 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          lVar37 = 0xe0;
          local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_1a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1a8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          uVar38 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          uVar39 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          uVar42 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          uVar43 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          uVar40 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          uVar41 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar44;
          local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar45;
          local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar40;
          local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar41;
          local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar40;
          local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar41;
          local_1a8.Translation.ZW.m128d_f64[1]._0_4_ = uVar38;
          local_1a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1a8.Translation.ZW.m128d_f64[1]._4_4_ = uVar39;
          local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar42;
          local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar43;
          local_148.Rotation.XY.m128d_f64[1]._0_4_ = uVar44;
          local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_148.Rotation.XY.m128d_f64[1]._4_4_ = uVar45;
          local_148.Translation.ZW.m128d_f64[1]._0_4_ = uVar38;
          local_148.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_148.Translation.ZW.m128d_f64[1]._4_4_ = uVar39;
          local_148.Scale3D.XY.m128d_f64[1]._0_4_ = uVar42;
          local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_148.Scale3D.XY.m128d_f64[1]._4_4_ = uVar43;
          pVVar36 = &local_1a8.Translation;
          local_148.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
          local_148.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
          local_148.Translation.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
          local_148.Translation.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
          do {
            pFVar8 = *(FCCDParticle **)(lVar37 + -0xd8 + (longlong)plVar7);
            if (pFVar8 == (FCCDParticle *)0x0) {
              pTVar31 = *(TGeometryParticleHandleImp<double,3,1> **)(lVar37 + *plVar7);
              pTVar28 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(char *)((longlong)&pTVar31->_padding_ + 4) != '\0') {
                pTVar28 = pTVar31;
              }
              local_530.MHandle = pTVar31;
              if (pTVar28 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1437c033b:
                uVar26 = (uint)pTVar31->_padding_;
                lVar33 = (longlong)(int)uVar26;
                lVar35 = pTVar31->_padding_;
                iVar32 = *(int *)(lVar35 + 0x50);
                uVar27 = 0;
                if ((int)uVar26 < iVar32) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (local_548 = lVar33, local_540 = (longlong)iVar32,
                   bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar24)) {
                  pcVar11 = (code *)swi(3);
                  uVar23 = (*pcVar11)();
                  return (bool)uVar23;
                }
                lVar35 = *(longlong *)(lVar35 + 0x48);
                iVar32 = (int)pTVar31->_padding_;
                fVar46 = *(float *)(lVar35 + lVar33 * 0x10);
                fVar47 = *(float *)(lVar35 + 4 + lVar33 * 0x10);
                uVar2 = *(undefined8 *)(lVar35 + 8 + lVar33 * 0x10);
                fVar12 = (float)uVar2;
                fVar13 = (float)((ulonglong)uVar2 >> 0x20);
                this_00 = (TParticles<double,3> *)pTVar31->_padding_;
                goto LAB_1437c03ae;
              }
              pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar28->_padding_ + 4)) {
                pTVar30 = pTVar28;
              }
              if (pTVar30 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                EVar25 = Kinematic;
              }
              else {
                EVar25 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                   ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar30);
              }
              if (EVar25 != Kinematic) goto LAB_1437c033b;
              bVar24 = FGenericParticleHandleImp::IsDynamic(&local_530);
              if (bVar24) {
                pTVar28 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
                  pTVar28 = pTVar31;
                }
                uVar26 = (uint)pTVar28->_padding_;
                lVar33 = (longlong)(int)uVar26;
                lVar35 = pTVar28->_padding_;
                iVar32 = *(int *)(lVar35 + 0x568);
                uVar27 = 0;
                if ((int)uVar26 < iVar32) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (local_548 = lVar33, local_540 = (longlong)iVar32,
                   bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar24)) {
                  pcVar11 = (code *)swi(3);
                  uVar23 = (*pcVar11)();
                  return (bool)uVar23;
                }
                lVar35 = *(longlong *)(lVar35 + 0x560);
              }
              else {
                uVar26 = (uint)pTVar31->_padding_;
                lVar33 = (longlong)(int)uVar26;
                lVar35 = pTVar31->_padding_;
                iVar32 = *(int *)(lVar35 + 0x50);
                uVar27 = 0;
                if ((int)uVar26 < iVar32) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (local_548 = lVar33, local_540 = (longlong)iVar32,
                   bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar24)) {
                  pcVar11 = (code *)swi(3);
                  uVar23 = (*pcVar11)();
                  return (bool)uVar23;
                }
                lVar35 = *(longlong *)(lVar35 + 0x48);
              }
              uVar2 = *(undefined8 *)(lVar35 + 8 + lVar33 * 0x10);
              dVar48 = (double)(float)((ulonglong)uVar2 >> 0x20);
              fVar46 = *(float *)(lVar35 + lVar33 * 0x10);
              dVar49 = (double)*(float *)(lVar35 + 4 + lVar33 * 0x10);
              bVar24 = FGenericParticleHandleImp::IsDynamic(&local_530);
              if (bVar24) {
                pTVar28 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
                  pTVar28 = pTVar31;
                }
                pTVar29 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar28);
              }
              else {
                pTVar29 = TParticles<double,3>::GetX
                                    ((TParticles<double,3> *)pTVar31->_padding_,
                                     (int)pTVar31->_padding_);
              }
              pTVar28 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(char *)((longlong)&pTVar31->_padding_ + 4) != '\0') {
                pTVar28 = pTVar31;
              }
              if (pTVar28 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                uVar38 = FGenericParticleHandleImp::ZeroVector._16_4_;
                uVar39 = FGenericParticleHandleImp::ZeroVector._20_4_;
                uVar40 = FGenericParticleHandleImp::ZeroVector._0_4_;
                uVar41 = FGenericParticleHandleImp::ZeroVector._4_4_;
                uVar42 = FGenericParticleHandleImp::ZeroVector._8_4_;
                uVar43 = FGenericParticleHandleImp::ZeroVector._12_4_;
              }
              else {
                TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar28->_padding_,
                           &local_4e0,(int)pTVar28->_padding_);
                uVar38 = local_4e0._16_4_;
                uVar39 = local_4e0._20_4_;
                uVar40 = local_4e0._0_4_;
                uVar41 = local_4e0._4_4_;
                uVar42 = local_4e0._8_4_;
                uVar43 = local_4e0._12_4_;
              }
              local_4b8 = (double)CONCAT44(uVar39,uVar38);
              dVar4 = *(double *)pTVar29 - (double)CONCAT44(uVar41,uVar40) * dVar19;
              dVar3 = *(double *)&pTVar29->field_0x8 - (double)CONCAT44(uVar43,uVar42) * dVar19;
              dVar5 = *(double *)&pTVar29->field_0x10 - local_4b8 * dVar19;
              auVar14._8_4_ = SUB84(dVar49,0);
              auVar14._0_8_ = (double)fVar46;
              auVar14._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
              *(undefined1 (*) [16])(((TTransform<double> *)(pVVar36 + -1))->Rotation).XY.m128d_f64
                   = auVar14;
              auVar17._8_4_ = SUB84(dVar48,0);
              auVar17._0_8_ = (double)(float)uVar2;
              auVar17._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
              *(undefined1 (*) [16])(((TTransform<double> *)(pVVar36 + -1))->Rotation).ZW.m128d_f64
                   = auVar17;
              dVar48 = ___xmm_3ff00000000000003ff0000000000000;
              dVar49 = _UNK_150689688;
            }
            else {
              pTVar9 = pFVar8->Particle;
              if (pFVar8->Done == false) {
                AdvanceParticleXToTOI(this,pFVar8,param_2,param_3);
              }
              uVar26 = *(uint *)&pTVar9->field_0x8;
              lVar33 = (longlong)(int)uVar26;
              lVar35 = *(longlong *)pTVar9;
              iVar32 = *(int *)(lVar35 + 0x50);
              uVar27 = 0;
              if ((int)uVar26 < iVar32) {
                uVar27 = ~uVar26 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (local_548 = lVar33, local_540 = (longlong)iVar32,
                 bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar24)) {
                pcVar11 = (code *)swi(3);
                uVar23 = (*pcVar11)();
                return (bool)uVar23;
              }
              lVar35 = *(longlong *)(lVar35 + 0x48);
              this_00 = *(TParticles<double,3> **)pTVar9;
              fVar46 = *(float *)(lVar35 + lVar33 * 0x10);
              fVar47 = *(float *)(lVar35 + 4 + lVar33 * 0x10);
              uVar2 = *(undefined8 *)(lVar35 + 8 + lVar33 * 0x10);
              fVar12 = (float)uVar2;
              fVar13 = (float)((ulonglong)uVar2 >> 0x20);
              iVar32 = *(int *)&pTVar9->field_0x8;
LAB_1437c03ae:
              pTVar29 = TParticles<double,3>::GetX(this_00,iVar32);
              dVar3 = *(double *)&pTVar29->field_0x8;
              dVar4 = *(double *)pTVar29;
              dVar5 = *(double *)&pTVar29->field_0x10;
              auVar18._8_4_ = SUB84((double)fVar47,0);
              auVar18._0_8_ = (double)fVar46;
              auVar18._12_4_ = (int)((ulonglong)(double)fVar47 >> 0x20);
              *(undefined1 (*) [16])(((TTransform<double> *)(pVVar36 + -1))->Rotation).XY.m128d_f64
                   = auVar18;
              auVar16._8_4_ = SUB84((double)fVar13,0);
              auVar16._0_8_ = (double)fVar12;
              auVar16._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
              *(undefined1 (*) [16])(((TTransform<double> *)(pVVar36 + -1))->Rotation).ZW.m128d_f64
                   = auVar16;
            }
            auVar15._8_4_ = SUB84(dVar3,0);
            auVar15._0_8_ = dVar4;
            auVar15._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            *(undefined1 (*) [16])(pVVar36->XY).m128d_f64 = auVar15;
            lVar37 = lVar37 + 8;
            (pVVar36->ZW).m128d_f64[0] = dVar5;
            (pVVar36->ZW).m128d_f64[1] = 0.0;
            pVVar36[1].XY.m128d_f64[0] = dVar48;
            pVVar36[1].XY.m128d_f64[1] = dVar49;
            pVVar36[1].ZW.m128d_f64[0] = dVar6;
            pVVar36[1].ZW.m128d_f64[1] = dVar21;
            pVVar36 = pVVar36 + 3;
            this = local_520;
            param_3 = local_528;
          } while (lVar37 < 0xf0);
          pFVar10 = (FPBDCollisionConstraint *)*plVar7;
          pTVar31 = pFVar10->Particle[0];
          pTVar28 = pFVar10->Particle[1];
          local_4a8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_4a8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_4a8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_4a8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_4a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_4a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_4a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_4a8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_4a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_4a8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_4a8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_4a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_4a8,(TTransform<double> *)pFVar10->ImplicitTransform,&local_1a8);
          local_208 = local_4a8.Rotation.XY.m128d_f64[0];
          dStack_200 = local_4a8.Rotation.XY.m128d_f64[1];
          local_1e8 = local_4a8.Translation.XY.m128d_f64[0];
          dStack_1e0 = local_4a8.Translation.XY.m128d_f64[1];
          local_1c8 = local_4a8.Scale3D.XY.m128d_f64[0];
          dStack_1c0 = local_4a8.Scale3D.XY.m128d_f64[1];
          local_1f8 = local_4a8.Rotation.ZW.m128d_f64[0];
          dStack_1f0 = local_4a8.Rotation.ZW.m128d_f64[1];
          local_448.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_448.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1d8 = local_4a8.Translation.ZW.m128d_f64[0];
          dStack_1d0 = local_4a8.Translation.ZW.m128d_f64[1];
          local_1b8 = local_4a8.Scale3D.ZW.m128d_f64[0];
          dStack_1b0 = local_4a8.Scale3D.ZW.m128d_f64[1];
          local_448.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_448.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_448.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_448.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_448.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_448.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_448.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_448.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_448.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_448.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_448.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_448.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_448,(TTransform<double> *)(pFVar10->ImplicitTransform + 1),&local_148);
          local_268 = local_448.Rotation.XY.m128d_f64[0];
          dStack_260 = local_448.Rotation.XY.m128d_f64[1];
          local_258 = local_448.Rotation.ZW.m128d_f64[0];
          dStack_250 = local_448.Rotation.ZW.m128d_f64[1];
          local_248 = local_448.Translation.XY.m128d_f64[0];
          dStack_240 = local_448.Translation.XY.m128d_f64[1];
          local_238 = local_448.Translation.ZW.m128d_f64[0];
          dStack_230 = local_448.Translation.ZW.m128d_f64[1];
          local_228 = local_448.Scale3D.XY.m128d_f64[0];
          dStack_220 = local_448.Scale3D.XY.m128d_f64[1];
          local_218 = local_448.Scale3D.ZW.m128d_f64[0];
          dStack_210 = local_448.Scale3D.ZW.m128d_f64[1];
          local_510.MHandle = pTVar31;
          bVar24 = FGenericParticleHandleImp::IsDynamic(&local_510);
          if (bVar24) {
            pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
              pTVar30 = pTVar31;
            }
            uVar26 = (uint)pTVar30->_padding_;
            lVar35 = (longlong)(int)uVar26;
            lVar37 = pTVar30->_padding_;
            iVar32 = *(int *)(lVar37 + 0x568);
            uVar27 = 0;
            if ((int)uVar26 < iVar32) {
              uVar27 = ~uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (local_548 = lVar35, local_540 = (longlong)iVar32,
               bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar11 = (code *)swi(3);
              uVar23 = (*pcVar11)();
              return (bool)uVar23;
            }
            lVar37 = *(longlong *)(lVar37 + 0x560);
          }
          else {
            uVar26 = (uint)pTVar31->_padding_;
            lVar35 = (longlong)(int)uVar26;
            lVar37 = pTVar31->_padding_;
            iVar32 = *(int *)(lVar37 + 0x50);
            uVar27 = 0;
            if ((int)uVar26 < iVar32) {
              uVar27 = ~uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (local_548 = lVar35, local_540 = (longlong)iVar32,
               bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar11 = (code *)swi(3);
              uVar23 = (*pcVar11)();
              return (bool)uVar23;
            }
            lVar37 = *(longlong *)(lVar37 + 0x48);
          }
          fVar46 = *(float *)(lVar37 + lVar35 * 0x10);
          uVar2 = *(undefined8 *)(lVar37 + 8 + lVar35 * 0x10);
          dVar4 = (double)(float)((ulonglong)uVar2 >> 0x20);
          dVar3 = (double)*(float *)(lVar37 + 4 + lVar35 * 0x10);
          local_508.MHandle = pTVar31;
          bVar24 = FGenericParticleHandleImp::IsDynamic(&local_508);
          if (bVar24) {
            pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
              pTVar30 = pTVar31;
            }
            pTVar29 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar30);
          }
          else {
            pTVar29 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pTVar31->_padding_,(int)pTVar31->_padding_)
            ;
          }
          local_328.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
          local_328.Rotation.ZW.m128d_f64[0] = (double)(float)uVar2;
          local_328.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
          local_328.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
          local_328.Rotation.XY.m128d_f64[0] = (double)fVar46;
          local_328.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_328.Translation.ZW.m128d_f64[0] = *(double *)&pTVar29->field_0x10;
          local_328.Translation.XY.m128d_f64[0] = *(double *)pTVar29;
          local_328.Translation.XY.m128d_f64[1] = *(double *)&pTVar29->field_0x8;
          local_328.Translation.ZW.m128d_f64[1] = 0.0;
          local_328.Scale3D.ZW.m128d_f64[0] = dVar6;
          local_328.Scale3D.ZW.m128d_f64[1] = dVar21;
          local_500.MHandle = pTVar28;
          local_328.Scale3D.XY.m128d_f64[0] = dVar48;
          local_328.Scale3D.XY.m128d_f64[1] = dVar49;
          bVar24 = FGenericParticleHandleImp::IsDynamic(&local_500);
          if (bVar24) {
            pTVar31 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar28->_padding_ + 4)) {
              pTVar31 = pTVar28;
            }
            uVar26 = (uint)pTVar31->_padding_;
            lVar35 = (longlong)(int)uVar26;
            lVar37 = pTVar31->_padding_;
            iVar32 = *(int *)(lVar37 + 0x568);
            uVar27 = 0;
            if ((int)uVar26 < iVar32) {
              uVar27 = ~uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (local_548 = lVar35, local_540 = (longlong)iVar32,
               bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar11 = (code *)swi(3);
              uVar23 = (*pcVar11)();
              return (bool)uVar23;
            }
            lVar37 = *(longlong *)(lVar37 + 0x560);
          }
          else {
            uVar26 = (uint)pTVar28->_padding_;
            lVar35 = (longlong)(int)uVar26;
            lVar37 = pTVar28->_padding_;
            iVar32 = *(int *)(lVar37 + 0x50);
            uVar27 = 0;
            if ((int)uVar26 < iVar32) {
              uVar27 = ~uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (local_548 = lVar35, local_540 = (longlong)iVar32,
               bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar11 = (code *)swi(3);
              uVar23 = (*pcVar11)();
              return (bool)uVar23;
            }
            lVar37 = *(longlong *)(lVar37 + 0x48);
          }
          fVar46 = *(float *)(lVar37 + lVar35 * 0x10);
          uVar2 = *(undefined8 *)(lVar37 + 8 + lVar35 * 0x10);
          dVar4 = (double)(float)((ulonglong)uVar2 >> 0x20);
          dVar3 = (double)*(float *)(lVar37 + 4 + lVar35 * 0x10);
          local_4f8.MHandle = pTVar28;
          bVar24 = FGenericParticleHandleImp::IsDynamic(&local_4f8);
          if (bVar24) {
            pTVar31 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar28->_padding_ + 4)) {
              pTVar31 = pTVar28;
            }
            pTVar29 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar31);
          }
          else {
            pTVar29 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pTVar28->_padding_,(int)pTVar28->_padding_)
            ;
          }
          local_2c8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
          local_2c8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar2;
          local_2c8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
          local_2c8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
          local_2c8.Rotation.XY.m128d_f64[0] = (double)fVar46;
          local_2c8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_2c8.Translation.XY.m128d_f64[0] = *(double *)pTVar29;
          local_2c8.Translation.XY.m128d_f64[1] = *(double *)&pTVar29->field_0x8;
          local_2c8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar29->field_0x10;
          local_3e8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_3e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_3e8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_2c8.Translation.ZW.m128d_f64[1] = 0.0;
          local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_3e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_3e8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_3e8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_3e8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_3e8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_3e8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_3e8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_3e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_3e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_2c8.Scale3D.ZW.m128d_f64[0] = dVar6;
          local_2c8.Scale3D.ZW.m128d_f64[1] = dVar21;
          local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_2c8.Scale3D.XY.m128d_f64[0] = dVar48;
          local_2c8.Scale3D.XY.m128d_f64[1] = dVar49;
          UE::Math::TTransform<double>::Multiply
                    (&local_3e8,(TTransform<double> *)pFVar10->ImplicitTransform,&local_328);
          local_388.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_388.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_388.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_388.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_388.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_388.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_388.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_388.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_388,(TTransform<double> *)(pFVar10->ImplicitTransform + 1),&local_2c8);
          *(double *)pFVar10->ShapeWorldTransforms = local_3e8.Rotation.XY.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x8 =
               local_3e8.Rotation.XY.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x10 =
               local_3e8.Rotation.ZW.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x18 =
               local_3e8.Rotation.ZW.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x20 =
               local_3e8.Translation.XY.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x28 =
               local_3e8.Translation.XY.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x30 =
               local_3e8.Translation.ZW.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x38 =
               local_3e8.Translation.ZW.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x40 =
               local_3e8.Scale3D.XY.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x48 =
               local_3e8.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar10->ShapeWorldTransforms + 1) = local_388.Rotation.XY.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x8 =
               local_388.Rotation.XY.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x50 =
               local_3e8.Scale3D.ZW.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[0].field_0x58 =
               local_3e8.Scale3D.ZW.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x10 =
               local_388.Rotation.ZW.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x18 =
               local_388.Rotation.ZW.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x20 =
               local_388.Translation.XY.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x28 =
               local_388.Translation.XY.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x30 =
               local_388.Translation.ZW.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x38 =
               local_388.Translation.ZW.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x40 =
               local_388.Scale3D.XY.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x48 =
               local_388.Scale3D.XY.m128d_f64[1];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x50 =
               local_388.Scale3D.ZW.m128d_f64[0];
          *(double *)&pFVar10->ShapeWorldTransforms[1].field_0x58 =
               local_388.Scale3D.ZW.m128d_f64[1];
          Collisions::UpdateConstraintSwept
                    (pFVar10,(TRigidTransform<double,3> *)&local_208,
                     (TRigidTransform<double,3> *)&local_268,dVar19);
          lVar37 = *plVar7;
          dVar3 = (double)*(float *)(lVar37 + 0x640);
          if ((0.0 <= dVar3) && (dVar3 < __real_3ff0000000000000)) {
            dVar3 = local_4f0 * dVar3 + param_2;
            if ((__real_47efffffe0000000 < dVar3) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TOI <= FReal(MaxTOI)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                    ,0x2ee,L""), bVar24)) {
              pcVar11 = (code *)swi(3);
              uVar23 = (*pcVar11)();
              return (bool)uVar23;
            }
            *(float *)(lVar37 + 0x640) = (float)dVar3;
          }
          bVar24 = true;
          param_1 = local_4e8;
          lVar37 = local_518;
          this = local_520;
          param_3 = local_528;
        }
      }
      local_538 = local_538 + 1;
      local_518 = lVar37 + 8;
    } while ((int)local_538 < (param_1->AttachedCCDConstraints).ArrayNum);
  }
  pFVar34 = (this->SortedCCDConstraints).AllocatorInstance.Data;
  iVar32 = (this->SortedCCDConstraints).ArrayNum;
  pFVar1 = pFVar34 + (longlong)iVar32 * 8;
  while( true ) {
    if ((this->SortedCCDConstraints).ArrayNum != iVar32) {
      `TCheckedPointerIterator<Chaos::FCCDConstraint_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_534);
    }
    if (pFVar34 == pFVar1) break;
    plVar7 = *(longlong **)pFVar34;
    if ((plVar7 != (longlong *)0x0) && (lVar37 = *plVar7, lVar37 != 0)) {
      dVar19 = (double)plVar7[7];
      dVar6 = (double)plVar7[5];
      *(float *)(lVar37 + 0x124) = (float)(double)plVar7[6] + *(float *)(lVar37 + 0x124);
      *(float *)(lVar37 + 0x128) = (float)dVar19 + *(float *)(lVar37 + 0x128);
      *(float *)(lVar37 + 0x120) = (float)dVar6 + *(float *)(lVar37 + 0x120);
    }
    pFVar34 = pFVar34 + 8;
  }
  return bVar24;
}

// UpdateSweptConstraints @ 1437c0bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall Chaos::FCCDManager::UpdateSweptConstraints(FCCDManager *this,double param_1)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  FPBDCollisionConstraint *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  bool bVar12;
  ECollisionVisitorResult EVar13;
  uint uVar14;
  FParticleCollisions *pFVar15;
  TVector<double,3> *pTVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  TGeometryParticleHandleImp<double,3,1> *this_02;
  longlong lVar22;
  longlong lVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStack_418 [32];
  longlong local_3f8;
  longlong local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e7 [7];
  FGenericParticleHandleImp local_3e0;
  int local_3d8;
  int local_3d4;
  <lambda_1> local_3d0;
  FGenericParticleHandleImp local_3c8;
  longlong *local_3c0;
  int iStack_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *local_3b0;
  undefined4 uStack_3a8;
  uint uStack_3a4;
  int local_3a0;
  undefined4 uStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  longlong *local_390;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_388;
  undefined8 uStack_368;
  undefined4 local_344;
  undefined1 local_338 [32];
  uint *local_318;
  uint local_310;
  undefined4 local_30c;
  undefined4 local_308;
  int local_304;
  void *local_2f8;
  undefined4 local_2f0;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_418;
  iVar20 = (this->CCDParticles).ArrayNum;
  pFVar26 = (this->CCDParticles).AllocatorInstance.Data;
  pFVar27 = pFVar26 + (longlong)iVar20 * 0x40;
  local_338._0_8_ = 0;
  local_338._8_8_ = 0;
  local_318 = (uint *)0x0;
  local_310 = 0;
  local_30c = 0x80;
  local_308 = 0xffffffff;
  local_304 = 0;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  while( true ) {
    if ((this->CCDParticles).ArrayNum != iVar20) {
      local_3e8 = 0;
      `TCheckedPointerIterator<Chaos::FCCDParticle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_3e8);
    }
    uVar19 = local_310;
    if (pFVar26 == pFVar27) break;
    pFVar15 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                        ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)pFVar26,
                         *(int *)(*(undefined8 **)pFVar26 + 1));
    uVar19 = 0;
    local_3d0.Collisions =
         (TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
          *)local_338;
    iVar18 = (pFVar15->MidPhases).ArrayNum;
    if (0 < iVar18) {
      lVar22 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar19 < iVar18) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_3f0 = (longlong)iVar18;
          local_3f8 = (longlong)(int)uVar19;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        EVar13 = FParticlePairMidPhase::
                 VisitCollisions<_Chaos::FCCDManager::UpdateSweptConstraints_::__l6::<lambda_1>_>
                           (*(FParticlePairMidPhase **)
                             ((pFVar15->MidPhases).AllocatorInstance.Data + lVar22 + 8),&local_3d0,
                            VisitDefault);
        if (EVar13 == Stop) break;
        iVar18 = (pFVar15->MidPhases).ArrayNum;
        uVar19 = uVar19 + 1;
        lVar22 = lVar22 + 0x10;
      } while ((int)uVar19 < iVar18);
    }
    pFVar26 = pFVar26 + 0x40;
  }
  iStack_3b8 = 0;
  local_3a0 = 0;
  uStack_3b4 = 1;
  uStack_3a4 = 0;
  if (local_310 != 0) {
    puVar25 = (uint *)(local_338 + 0x10);
    if (local_318 != (uint *)0x0) {
      puVar25 = local_318;
    }
    uVar21 = *puVar25;
    while (uVar21 == 0) {
      lVar22 = (longlong)iStack_3b8;
      local_3a0 = local_3a0 + 0x20;
      iStack_3b8 = iStack_3b8 + 1;
      uStack_3a4 = local_310;
      if ((int)((local_310 - 1) + ((int)(local_310 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_3b8)
      goto LAB_1437c0da1;
      uVar21 = puVar25[lVar22 + 1];
    }
    uStack_3b4 = -uVar21 & uVar21;
    uVar1 = (ulonglong)uStack_3b4 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_3d8 = (int)lVar22;
    uStack_3a4 = local_3a0 + -1 + local_3d8;
    if ((int)local_310 < (int)uStack_3a4) {
      uStack_3a4 = local_310;
    }
  }
LAB_1437c0da1:
  local_3c0 = (longlong *)local_338;
  uStack_39c = local_344;
  local_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_338 + 0x10);
  iStack_398 = local_338._8_4_ - local_304;
  uVar21 = local_310 & 0xffffffe0;
  uStack_3a8 = 0xffffffff;
  TStack_388.CurrentBitIndex = uStack_3a4;
  TStack_388.UnvisitedBitMask = 0xffffffff;
  TStack_388._padding_ = CONCAT44(uStack_3b4,iStack_3b8);
  iVar20 = (int)local_310 >> 5;
  TStack_388._28_4_ = local_344;
  TStack_388.BaseBitIndex = local_3a0;
  uStack_368 = CONCAT44(uStack_394,iStack_398);
  bVar17 = (byte)local_310;
  local_390 = local_3c0;
  TStack_388.Array = local_3b0;
  if (((int)local_310 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar10 = _UNK_150689688;
  dVar9 = ___xmm_3ff00000000000003ff0000000000000;
  dVar8 = _UNK_150689518;
  dVar7 = ___xmm_00000000000000003ff0000000000000;
  if (uVar19 != local_310) {
    puVar25 = (uint *)(local_338 + 0x10);
    if (local_318 != (uint *)0x0) {
      puVar25 = local_318;
    }
    uVar19 = -1 << (bVar17 & 0x1f) & puVar25[iVar20];
    while (uVar19 == 0) {
      lVar22 = (longlong)iVar20;
      uVar21 = uVar21 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = local_310;
      if ((int)((local_310 - 1) + ((int)(local_310 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_1437c0ee0;
      uVar19 = puVar25[lVar22 + 1];
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_3d4 = (int)lVar22;
    uVar19 = local_3d4 + -1 + uVar21;
    if ((int)local_310 < (int)uVar19) {
      uVar19 = local_310;
    }
  }
LAB_1437c0ee0:
  do {
    plVar11 = local_390;
    if ((int)local_390[1] - *(int *)((longlong)local_390 + 0x34) != (int)uStack_368) {
      local_3e7[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::FPBDCollisionConstraint_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e7);
    }
    if (((TStack_388.CurrentBitIndex == uVar19) &&
        (TStack_388.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_338 + 0x10))) &&
       (plVar11 == (longlong *)local_338)) {
      local_2f0 = 0;
      if (local_2f8 != (void *)0x0) {
        FMemory::Free(local_2f8);
      }
      TSparseArray<TSparseSetElement<Chaos::FPBDCollisionConstraint_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Chaos::FPBDCollisionConstraint_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<Chaos::FPBDCollisionConstraint_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_338);
      return;
    }
    this_00 = *(FPBDCollisionConstraint **)(*plVar11 + (longlong)TStack_388.CurrentBitIndex * 0x10);
    pTVar24 = this_00->Particle[0];
    this_01 = this_00->Particle[1];
    local_3e0.MHandle = this_01;
    local_3c8.MHandle = pTVar24;
    bVar12 = FGenericParticleHandleImp::IsDynamic(&local_3c8);
    if (bVar12) {
      this_02 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
        this_02 = pTVar24;
      }
      uVar21 = (uint)this_02->_padding_;
      lVar23 = (longlong)(int)uVar21;
      lVar22 = this_02->_padding_;
      iVar20 = *(int *)(lVar22 + 0x568);
      uVar14 = 0;
      if ((int)uVar21 < iVar20) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_3f8 = lVar23, local_3f0 = (longlong)iVar20,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = *(longlong *)(lVar22 + 0x560);
      fVar2 = *(float *)(lVar22 + lVar23 * 0x10);
      uVar3 = *(undefined8 *)(lVar22 + 8 + lVar23 * 0x10);
      dVar5 = (double)(float)((ulonglong)uVar3 >> 0x20);
      dVar6 = (double)*(float *)(lVar22 + 4 + lVar23 * 0x10);
      pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_02);
      local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
      local_1c8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar3;
      local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_1c8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_1c8.Rotation.XY.m128d_f64[0] = (double)fVar2;
      local_1c8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_1c8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar16->field_0x10;
      local_1c8.Translation.XY.m128d_f64[0] = *(double *)pTVar16;
      local_1c8.Translation.XY.m128d_f64[1] = *(double *)&pTVar16->field_0x8;
      local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1c8.Scale3D.XY.m128d_f64[0] = dVar9;
      local_1c8.Scale3D.XY.m128d_f64[1] = dVar10;
      local_1c8.Scale3D.ZW.m128d_f64[0] = dVar7;
      local_1c8.Scale3D.ZW.m128d_f64[1] = dVar8;
    }
    else {
      TGeometryParticleHandleImp<double,3,1>::GetTransformXR
                (pTVar24,(TRigidTransform<double,3> *)&local_1c8);
    }
    local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_2e8,(TTransform<double> *)this_00->ImplicitTransform,&local_1c8);
    local_228 = local_2e8.Rotation.XY.m128d_f64[0];
    dStack_220 = local_2e8.Rotation.XY.m128d_f64[1];
    local_218 = local_2e8.Rotation.ZW.m128d_f64[0];
    dStack_210 = local_2e8.Rotation.ZW.m128d_f64[1];
    local_208 = local_2e8.Translation.XY.m128d_f64[0];
    dStack_200 = local_2e8.Translation.XY.m128d_f64[1];
    local_1f8 = local_2e8.Translation.ZW.m128d_f64[0];
    dStack_1f0 = local_2e8.Translation.ZW.m128d_f64[1];
    local_1e8 = local_2e8.Scale3D.XY.m128d_f64[0];
    dStack_1e0 = local_2e8.Scale3D.XY.m128d_f64[1];
    local_1d8 = local_2e8.Scale3D.ZW.m128d_f64[0];
    dStack_1d0 = local_2e8.Scale3D.ZW.m128d_f64[1];
    bVar12 = FGenericParticleHandleImp::IsDynamic(&local_3e0);
    if (bVar12) {
      pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&this_01->_padding_ + 4)) {
        pTVar24 = this_01;
      }
      uVar21 = (uint)pTVar24->_padding_;
      lVar23 = (longlong)(int)uVar21;
      lVar22 = pTVar24->_padding_;
      iVar20 = *(int *)(lVar22 + 0x568);
      uVar14 = 0;
      if ((int)uVar21 < iVar20) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_3f8 = lVar23, local_3f0 = (longlong)iVar20,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = *(longlong *)(lVar22 + 0x560);
      fVar2 = *(float *)(lVar22 + lVar23 * 0x10);
      uVar3 = *(undefined8 *)(lVar22 + 8 + lVar23 * 0x10);
      dVar5 = (double)(float)((ulonglong)uVar3 >> 0x20);
      dVar6 = (double)*(float *)(lVar22 + 4 + lVar23 * 0x10);
      pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
      local_168.Rotation.ZW.m128d_f64[0] = (double)(float)uVar3;
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_168.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_168.Rotation.XY.m128d_f64[0] = (double)fVar2;
      local_168.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_168.Translation.ZW.m128d_f64[0] = *(double *)&pTVar16->field_0x10;
      local_168.Translation.XY.m128d_f64[0] = *(double *)pTVar16;
      local_168.Translation.XY.m128d_f64[1] = *(double *)&pTVar16->field_0x8;
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.XY.m128d_f64[0] = dVar9;
      local_168.Scale3D.XY.m128d_f64[1] = dVar10;
      local_168.Scale3D.ZW.m128d_f64[0] = dVar7;
      local_168.Scale3D.ZW.m128d_f64[1] = dVar8;
    }
    else {
      TGeometryParticleHandleImp<double,3,1>::GetTransformXR
                (this_01,(TRigidTransform<double,3> *)&local_168);
    }
    local_288.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_288.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_288.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_288.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_288.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_288.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_288.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_288.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_288,(TTransform<double> *)(this_00->ImplicitTransform + 1),&local_168);
    *(double *)this_00->ShapeWorldTransforms = local_228;
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x8 = dStack_220;
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x10 = local_218;
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x18 = dStack_210;
    *(double *)(this_00->ShapeWorldTransforms + 1) = local_288.Rotation.XY.m128d_f64[0];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x8 = local_288.Rotation.XY.m128d_f64[1];
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x20 = local_208;
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x28 = dStack_200;
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x10 = local_288.Rotation.ZW.m128d_f64[0];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x18 = local_288.Rotation.ZW.m128d_f64[1];
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x30 = local_1f8;
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x38 = dStack_1f0;
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x20 = local_288.Translation.XY.m128d_f64[0];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x28 = local_288.Translation.XY.m128d_f64[1];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x30 = local_288.Translation.ZW.m128d_f64[0];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x38 = local_288.Translation.ZW.m128d_f64[1];
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x40 = local_1e8;
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x48 = dStack_1e0;
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x40 = local_288.Scale3D.XY.m128d_f64[0];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x48 = local_288.Scale3D.XY.m128d_f64[1];
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x50 = local_1d8;
    *(double *)&this_00->ShapeWorldTransforms[0].field_0x58 = dStack_1d0;
    local_108 = local_288.Rotation.XY.m128d_f64[0];
    dStack_100 = local_288.Rotation.XY.m128d_f64[1];
    local_f8 = local_288.Rotation.ZW.m128d_f64[0];
    dStack_f0 = local_288.Rotation.ZW.m128d_f64[1];
    local_e8 = local_288.Translation.XY.m128d_f64[0];
    dStack_e0 = local_288.Translation.XY.m128d_f64[1];
    local_d8 = local_288.Translation.ZW.m128d_f64[0];
    dStack_d0 = local_288.Translation.ZW.m128d_f64[1];
    local_c8 = local_288.Scale3D.XY.m128d_f64[0];
    dStack_c0 = local_288.Scale3D.XY.m128d_f64[1];
    local_b8 = local_288.Scale3D.ZW.m128d_f64[0];
    dStack_b0 = local_288.Scale3D.ZW.m128d_f64[1];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x50 = local_288.Scale3D.ZW.m128d_f64[0];
    *(double *)&this_00->ShapeWorldTransforms[1].field_0x58 = local_288.Scale3D.ZW.m128d_f64[1];
    FPBDCollisionConstraint::ResetManifold(this_00);
    Collisions::UpdateConstraint
              (this_00,(TRigidTransform<double,3> *)&local_228,
               (TRigidTransform<double,3> *)&local_108,param_1);
    TStack_388.UnvisitedBitMask = TStack_388.UnvisitedBitMask & ~TStack_388._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_388);
  } while( true );
}

// ~FCCDManager @ 143d03100

void __thiscall Chaos::FCCDManager::~FCCDManager(FCCDManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IslandConstraintEnd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IslandConstraintNum).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IslandConstraintStart).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IslandParticleNum).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IslandParticleStart).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IslandStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortedCCDConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CCDConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ParticleToCCDParticle).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ParticleToCCDParticle).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FCCDParticle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParticleToCCDParticle);
  pFVar1 = (this->GroupedCCDParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::FCCDParticle,int>
            ((FCCDParticle *)(this->CCDParticles).AllocatorInstance.Data,
             (this->CCDParticles).ArrayNum);
  pFVar1 = (this->CCDParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

