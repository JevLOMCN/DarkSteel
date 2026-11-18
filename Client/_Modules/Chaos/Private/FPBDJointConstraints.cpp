// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 63

// GetNumConstraints @ 143ba2d00

int __thiscall Chaos::FPBDJointConstraints::GetNumConstraints(FPBDJointConstraints *this)

{
  return (this->ConstraintParticles).ArrayNum;
}

// FPBDJointConstraints @ 143c44510

FPBDJointConstraints * __thiscall
Chaos::FPBDJointConstraints::FPBDJointConstraints(FPBDJointConstraints *this)

{
  FNameEntryId FVar1;
  uint uVar2;
  FConstraintHandleTypeID *pFVar3;
  
  pFVar3 = FPBDJointConstraintHandle::StaticType();
  FVar1.Value = (pFVar3->TypeName).ComparisonIndex.Value;
  uVar2 = (pFVar3->TypeName).Number;
  pFVar3 = pFVar3->BaseType;
  *(undefined4 *)&this->field_0x18 = 0xffffffff;
  *(undefined ***)this = &___7FPBDJointConstraints_Chaos__6B_;
  *(uint *)&this->field_0x8 = FVar1.Value;
  *(uint *)&this->field_0xc = uVar2;
  *(FConstraintHandleTypeID **)&this->field_0x10 = pFVar3;
  (this->Settings).SwingTwistAngleTolerance = 9.999999974752427e-07;
  (this->Settings).MinSolverStiffness = 1.0;
  (this->Settings).MaxSolverStiffness = 1.0;
  (this->Settings).LinearStiffnessOverride = -1.0;
  (this->Settings).TwistStiffnessOverride = -1.0;
  (this->Settings).SwingStiffnessOverride = -1.0;
  (this->Settings).LinearProjectionOverride = -1.0;
  (this->Settings).AngularProjectionOverride = -1.0;
  (this->Settings).ShockPropagationOverride = -1.0;
  (this->Settings).LinearDriveStiffnessOverride = -1.0;
  (this->Settings).LinearDriveDampingOverride = -1.0;
  (this->Settings).AngularDriveStiffnessOverride = -1.0;
  (this->Settings).AngularDriveDampingOverride = -1.0;
  (this->Settings).SoftLinearStiffnessOverride = -1.0;
  (this->Settings).SoftLinearDampingOverride = -1.0;
  (this->Settings).SoftTwistStiffnessOverride = -1.0;
  (this->Settings).SoftTwistDampingOverride = -1.0;
  (this->Settings).SoftSwingStiffnessOverride = -1.0;
  (this->Settings).SoftSwingDampingOverride = -1.0;
  (this->Settings).PositionTolerance = 0.0;
  (this->Settings).AngleTolerance = 0.0;
  (this->Settings).MinParentMassRatio = 0.0;
  (this->Settings).MaxInertiaRatio = 0.0;
  (this->Settings).NumIterationsAtMaxSolverStiffness = 1;
  (this->Settings).NumShockPropagationIterations = 0;
  (this->Settings).bUseSimd = false;
  (this->Settings).bSortEnabled = false;
  (this->Settings).bSolvePositionLast = true;
  (this->Settings).bUsePositionBasedDrives = true;
  (this->Settings).bEnableTwistLimits = true;
  (this->Settings).bEnableSwingLimits = true;
  (this->Settings).bEnableDrives = true;
  (this->ConstraintSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSettings).ArrayNum = 0;
  (this->ConstraintSettings).ArrayMax = 0;
  (this->ConstraintParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintParticles).ArrayNum = 0;
  (this->ConstraintParticles).ArrayMax = 0;
  (this->ConstraintStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintStates).ArrayNum = 0;
  (this->ConstraintStates).ArrayMax = 0;
  (this->Handles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Handles).ArrayNum = 0;
  (this->Handles).ArrayMax = 0;
  this->bJointsDirty = false;
  *(undefined8 *)&this->BreakCallback = 0;
  *(undefined8 *)&(this->BreakCallback).field_0x28 = 0;
  return this;
}

// ~FPBDJointConstraints @ 143c459e0

void __thiscall Chaos::FPBDJointConstraints::~FPBDJointConstraints(FPBDJointConstraints *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FPBDJointConstraints_Chaos__6B_;
  if (*(longlong *)&this->BreakCallback != 0) {
    plVar1 = *(longlong **)&(this->BreakCallback).field_0x28;
    plVar3 = (longlong *)&(this->BreakCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->Handles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConstraintStates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConstraintParticles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConstraintSettings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)this = &___7FPBDConstraintContainer_Chaos__6B_;
  return;
}

// operator() @ 143c49340

bool __thiscall
`Chaos::FPBDJointConstraints::SortConstraints'::__l2::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  FPBDJointConstraints *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = *(FPBDJointConstraints **)this;
  iVar2 = Chaos::FPBDJointConstraints::GetConstraintIsland(pFVar1,*param_2);
  iVar3 = Chaos::FPBDJointConstraints::GetConstraintIsland(pFVar1,*param_1);
  pFVar1 = *(FPBDJointConstraints **)this;
  if (iVar3 == iVar2) {
    iVar2 = Chaos::FPBDJointConstraints::GetConstraintLevel(pFVar1,*param_2);
    iVar3 = Chaos::FPBDJointConstraints::GetConstraintLevel(pFVar1,*param_1);
    if (iVar3 == iVar2) {
      iVar2 = Chaos::FPBDJointConstraints::GetConstraintColor
                        (*(FPBDJointConstraints **)this,*param_1);
      iVar3 = Chaos::FPBDJointConstraints::GetConstraintColor
                        (*(FPBDJointConstraints **)this,*param_2);
    }
    else {
      iVar2 = Chaos::FPBDJointConstraints::GetConstraintLevel
                        (*(FPBDJointConstraints **)this,*param_1);
      iVar3 = Chaos::FPBDJointConstraints::GetConstraintLevel
                        (*(FPBDJointConstraints **)this,*param_2);
    }
  }
  else {
    iVar2 = Chaos::FPBDJointConstraints::GetConstraintIsland(pFVar1,*param_1);
    iVar3 = Chaos::FPBDJointConstraints::GetConstraintIsland
                      (*(FPBDJointConstraints **)this,*param_2);
  }
  return iVar2 < iVar3;
}

// AddConstraint @ 143c55600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDJointConstraints::AddConstraint
          (FPBDJointConstraints *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  FPBDJointConstraintHandle *pFVar28;
  TVector<double,3> *pTVar29;
  uint uVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_438 [32];
  longlong local_418;
  longlong local_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_438;
  FPBDJointSettings::FPBDJointSettings((FPBDJointSettings *)local_3d8);
  dVar20 = *(double *)param_2;
  dVar21 = *(double *)&param_2->field_0x8;
  dVar11 = *(double *)&param_2->field_0x10;
  dVar12 = *(double *)&param_2->field_0x18;
  uVar3 = (uint)param_1->V[0]->_padding_;
  lVar31 = (longlong)(int)uVar3;
  lVar5 = param_1->V[0]->_padding_;
  iVar4 = *(int *)(lVar5 + 0x50);
  uVar30 = 0;
  if ((int)uVar3 < iVar4) {
    uVar30 = ~uVar3 >> 0x1f;
  }
  if (uVar30 == 0) {
    local_418 = lVar31;
    local_410 = (longlong)iVar4;
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar27) {
      pcVar6 = (code *)swi(3);
      pFVar28 = (FPBDJointConstraintHandle *)(*pcVar6)();
      return pFVar28;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 8 + lVar31 * 0x10);
  dVar32 = (double)(float)uVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar34 = (double)(float)((ulonglong)uVar1 >> 0x20) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar13 = (double)*(float *)(lVar5 + lVar31 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar17 = (double)*(float *)(lVar5 + 4 + lVar31 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar33 = *(double *)&param_2->field_0x20;
  dVar14 = *(double *)&param_2->field_0x28;
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar35 = *(double *)&param_2->field_0x30;
  dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar18 = dVar20 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar12 * dVar17 +
           dVar21 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar11 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar19 = dVar20 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar12 * dVar34 +
           dVar21 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar11 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_408 = dVar33;
  dStack_400 = dVar14;
  pTVar29 = TParticles<double,3>::GetX
                      ((TParticles<double,3> *)param_1->V[0]->_padding_,
                       (int)param_1->V[0]->_padding_);
  uVar26 = _UNK_150689688;
  uVar25 = ___xmm_3ff00000000000003ff0000000000000;
  uVar24 = _UNK_150689518;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  dVar22 = *(double *)&param_2->field_0x10;
  dVar23 = *(double *)&param_2->field_0x18;
  dVar14 = dVar14 - *(double *)&pTVar29->field_0x8;
  local_3a8 = dVar35 - *(double *)&pTVar29->field_0x10;
  local_3d8._8_4_ = SUB84(dVar18,0);
  local_3d8._0_8_ =
       dVar20 * dVar34 * dVar7 + dVar12 * dVar13 + dVar21 * dVar32 * dVar10 +
       dVar11 * dVar17 * dVar15;
  local_3d8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  local_3c8._8_4_ = SUB84(dVar19,0);
  local_3c8._0_8_ =
       dVar20 * dVar17 * dVar9 + dVar12 * dVar32 + dVar21 * dVar13 * dVar8 +
       dVar11 * dVar34 * dVar16;
  local_3c8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  local_398 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_390 = _UNK_150689688;
  local_388 = ___xmm_00000000000000003ff0000000000000;
  uStack_380 = _UNK_150689518;
  dVar20 = *(double *)param_2;
  dVar21 = *(double *)&param_2->field_0x8;
  local_3b8._8_4_ = SUB84(dVar14,0);
  local_3b8._0_8_ = dVar33 - *(double *)pTVar29;
  local_3b8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  uStack_3a0 = 0;
  uVar3 = (uint)param_1->V[1]->_padding_;
  lVar31 = (longlong)(int)uVar3;
  lVar5 = param_1->V[1]->_padding_;
  iVar4 = *(int *)(lVar5 + 0x50);
  uVar30 = 0;
  if ((int)uVar3 < iVar4) {
    uVar30 = ~uVar3 >> 0x1f;
  }
  local_3f8 = dVar35;
  if (uVar30 == 0) {
    local_418 = lVar31;
    local_410 = (longlong)iVar4;
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar27) {
      pcVar6 = (code *)swi(3);
      pFVar28 = (FPBDJointConstraintHandle *)(*pcVar6)();
      return pFVar28;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  uVar2 = *(undefined8 *)(lVar5 + 8 + lVar31 * 0x10);
  dVar33 = (double)(float)uVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar35 = (double)(float)((ulonglong)uVar2 >> 0x20) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar15 = (double)*(float *)(lVar5 + lVar31 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar13 = (double)*(float *)(lVar5 + 4 + lVar31 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar18 = *(double *)&param_2->field_0x20;
  dVar16 = *(double *)&param_2->field_0x28;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar19 = *(double *)&param_2->field_0x30;
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar14 = dVar20 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar23 * dVar13 +
           dVar21 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar22 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar17 = dVar20 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar23 * dVar35 +
           dVar21 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar22 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  pTVar29 = TParticles<double,3>::GetX
                      ((TParticles<double,3> *)param_1->V[1]->_padding_,
                       (int)param_1->V[1]->_padding_);
  dVar16 = dVar16 - *(double *)&pTVar29->field_0x8;
  local_348 = dVar19 - *(double *)&pTVar29->field_0x10;
  local_378._8_4_ = SUB84(dVar14,0);
  local_378._0_8_ =
       dVar20 * dVar35 * dVar11 + dVar23 * dVar15 + dVar21 * dVar33 * dVar8 +
       dVar22 * dVar13 * dVar9;
  local_378._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_368._8_4_ = SUB84(dVar17,0);
  local_368._0_8_ =
       dVar20 * dVar13 * dVar7 + dVar23 * dVar33 + dVar21 * dVar15 * dVar12 +
       dVar22 * dVar35 * dVar10;
  local_368._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_338 = uVar25;
  uStack_330 = uVar26;
  local_358._8_4_ = SUB84(dVar16,0);
  local_358._0_8_ = dVar18 - *(double *)pTVar29;
  local_358._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  uStack_340 = 0;
  local_328 = uVar1;
  uStack_320 = uVar24;
  pFVar28 = AddConstraint(this,param_1,(FPBDJointSettings *)local_3d8);
  return pFVar28;
}

// AddConstraint @ 143c55a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDJointConstraints::AddConstraint
          (FPBDJointConstraints *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_1,
          TVector<Chaos::TRigidTransform<double,3>,2> *param_2)

{
  FPBDJointConstraintHandle *pFVar1;
  undefined1 auStack_358 [32];
  FPBDJointSettings local_338;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_358;
  FPBDJointSettings::FPBDJointSettings(&local_338);
  local_338.ConnectorTransforms.V[0]._0_8_ = *(undefined8 *)param_2->V;
  local_338.ConnectorTransforms.V[0]._8_8_ = *(undefined8 *)&param_2->V[0].field_0x8;
  local_338.ConnectorTransforms.V[0]._16_8_ = *(undefined8 *)&param_2->V[0].field_0x10;
  local_338.ConnectorTransforms.V[0]._24_8_ = *(undefined8 *)&param_2->V[0].field_0x18;
  local_338.ConnectorTransforms.V[0]._32_8_ = *(undefined8 *)&param_2->V[0].field_0x20;
  local_338.ConnectorTransforms.V[0]._40_8_ = *(undefined8 *)&param_2->V[0].field_0x28;
  local_338.ConnectorTransforms.V[0]._48_8_ = *(undefined8 *)&param_2->V[0].field_0x30;
  local_338.ConnectorTransforms.V[0]._56_8_ = *(undefined8 *)&param_2->V[0].field_0x38;
  local_338.ConnectorTransforms.V[0]._64_8_ = *(undefined8 *)&param_2->V[0].field_0x40;
  local_338.ConnectorTransforms.V[0]._72_8_ = *(undefined8 *)&param_2->V[0].field_0x48;
  local_338.ConnectorTransforms.V[0]._80_8_ = *(undefined8 *)&param_2->V[0].field_0x50;
  local_338.ConnectorTransforms.V[0]._88_8_ = *(undefined8 *)&param_2->V[0].field_0x58;
  local_338.ConnectorTransforms.V[1]._0_8_ = *(undefined8 *)(param_2->V + 1);
  local_338.ConnectorTransforms.V[1]._8_8_ = *(undefined8 *)&param_2->V[1].field_0x8;
  local_338.ConnectorTransforms.V[1]._32_8_ = *(undefined8 *)&param_2->V[1].field_0x20;
  local_338.ConnectorTransforms.V[1]._40_8_ = *(undefined8 *)&param_2->V[1].field_0x28;
  local_338.ConnectorTransforms.V[1]._16_8_ = *(undefined8 *)&param_2->V[1].field_0x10;
  local_338.ConnectorTransforms.V[1]._24_8_ = *(undefined8 *)&param_2->V[1].field_0x18;
  local_338.ConnectorTransforms.V[1]._48_8_ = *(undefined8 *)&param_2->V[1].field_0x30;
  local_338.ConnectorTransforms.V[1]._56_8_ = *(undefined8 *)&param_2->V[1].field_0x38;
  local_338.ConnectorTransforms.V[1]._64_8_ = *(undefined8 *)&param_2->V[1].field_0x40;
  local_338.ConnectorTransforms.V[1]._72_8_ = *(undefined8 *)&param_2->V[1].field_0x48;
  local_338.ConnectorTransforms.V[1]._80_8_ = *(undefined8 *)&param_2->V[1].field_0x50;
  local_338.ConnectorTransforms.V[1]._88_8_ = *(undefined8 *)&param_2->V[1].field_0x58;
  pFVar1 = AddConstraint(this,param_1,&local_338);
  return pFVar1;
}

// AddConstraint @ 143c55b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDJointConstraints::AddConstraint
          (FPBDJointConstraints *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_1,
          FPBDJointSettings *param_2)

{
  int *piVar1;
  TArray<Chaos::FPBDJointConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<Chaos::FPBDJointState,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  FPBDJointConstraintHandle *pFVar10;
  bool *pbVar11;
  longlong lVar12;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement FVar15;
  TGeometryParticleHandleImp<double,3,1> *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 local_30;
  undefined1 uStack_2e;
  undefined5 uStack_2d;
  
  uVar13 = (this->Handles).ArrayNum;
  pTVar2 = &this->Handles;
  this->bJointsDirty = true;
  pTVar9 = ::operator_new(0x28);
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  local_88 = this_00;
  if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar9->_padding_ = (longlong)this;
    pTVar9->_padding_ = (longlong)&___7FPBDJointConstraintHandle_Chaos__6B_;
    *(undefined8 *)&pTVar9->HandleIdx = 0;
    *(uint *)&pTVar9[1]._padding_ = uVar13;
    *(undefined2 *)&pTVar9[1]._padding_ = 0;
    local_88 = pTVar9;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar5 + (longlong)(this->Handles).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDJointConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  iVar8 = (this->Handles).ArrayNum;
  piVar1 = &(this->Handles).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pTVar3 = &this->ConstraintParticles;
  (this->Handles).ArrayNum = iVar8 + 1;
  *(TGeometryParticleHandleImp<double,3,1> **)
   ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_88;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar5 <= param_1) &&
      (param_1 < pFVar5 + (longlong)(this->ConstraintParticles).ArrayMax * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDJointConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  iVar8 = (this->ConstraintParticles).ArrayNum;
  piVar1 = &(this->ConstraintParticles).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,piVar1);
  }
  local_70 = 0;
  (this->ConstraintParticles).ArrayNum = iVar8 + 1;
  pTVar9 = param_1->V[1];
  pTVar4 = &this->ConstraintStates;
  uStack_6e = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  uStack_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  pFVar5 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(TGeometryParticleHandleImp<double,3,1> **)pFVar5 = param_1->V[0];
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar5 + 8) = pTVar9;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  uStack_2e = 1;
  local_80 = ___xmm_00000000ffffffffffffffffffffffff;
  uStack_78 = _UNK_150ae1748;
  uStack_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_80) &&
      ((FScriptContainerElement *)&local_80 <
       pFVar5 + (longlong)(this->ConstraintStates).ArrayMax * 0x58)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDJointConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  iVar8 = (this->ConstraintStates).ArrayNum;
  piVar1 = &(this->ConstraintStates).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->ConstraintStates).ArrayNum = iVar8 + 1;
  piVar1 = &(this->ConstraintSettings).ArrayMax;
  lVar12 = (longlong)iVar8 * 0x58;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar5 + lVar12) = local_80;
  *(undefined8 *)(pFVar5 + lVar12 + 8) = uStack_78;
  *(ulonglong *)(pFVar5 + lVar12 + 0x10) =
       CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,local_70)));
  *(undefined8 *)(pFVar5 + lVar12 + 0x10 + 8) = uStack_68;
  *(undefined8 *)(pFVar5 + lVar12 + 0x20) = uStack_60;
  *(undefined8 *)(pFVar5 + lVar12 + 0x20 + 8) = uStack_58;
  *(undefined8 *)(pFVar5 + lVar12 + 0x30) = uStack_50;
  *(undefined8 *)(pFVar5 + lVar12 + 0x30 + 8) = local_48;
  *(undefined8 *)(pFVar5 + lVar12 + 0x40) = uStack_40;
  *(undefined8 *)(pFVar5 + lVar12 + 0x40 + 8) = uStack_38;
  *(ulonglong *)(pFVar5 + lVar12 + 0x50) = CONCAT53(uStack_2d,CONCAT12(uStack_2e,local_30));
  iVar8 = (this->ConstraintSettings).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (800,0x10,&(this->ConstraintSettings).AllocatorInstance,piVar1);
  }
  (this->ConstraintSettings).ArrayNum = iVar8 + 1;
  DefaultConstructItems<Chaos::FPBDJointSettings,int>
            ((this->ConstraintSettings).AllocatorInstance.Data + (longlong)iVar8 * 800,1);
  SetConstraintSettings(this,uVar13,param_2);
  pTVar9 = this_00;
  if (1 < *(byte *)((longlong)&param_1->V[0]->_padding_ + 4)) {
    pTVar9 = param_1->V[0];
  }
  if ((pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
     (pbVar11 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar9), *pbVar11 == false)) {
    if (1 < *(byte *)((longlong)&param_1->V[1]->_padding_ + 4)) {
      this_00 = param_1->V[1];
    }
    if ((this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       (pbVar11 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), *pbVar11 == false))
    {
      FVar15 = (FScriptContainerElement)0x0;
      goto LAB_143c55e90;
    }
  }
  FVar15 = (FScriptContainerElement)0x1;
LAB_143c55e90:
  uVar14 = 0;
  if ((int)uVar13 < (this->ConstraintStates).ArrayNum) {
    uVar14 = ~uVar13 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDJointConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  (pTVar4->AllocatorInstance).Data[(longlong)(int)uVar13 * 0x58 + 0x10] = FVar15;
  iVar8 = (this->Handles).ArrayNum;
  uVar14 = iVar8 - 1;
  uVar13 = 0;
  if ((int)uVar14 < iVar8) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDJointConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  return *(FPBDJointConstraintHandle **)
          ((pTVar2->AllocatorInstance).Data + (longlong)(this->Handles).ArrayNum * 8 + -8);
}

// AddConstraintsToGraph @ 143c56ab0

void __thiscall
Chaos::FPBDJointConstraints::AddConstraintsToGraph
          (FPBDJointConstraints *this,FPBDIslandManager *param_1)

{
  FConstraintHandle *pFVar1;
  FPBDIslandConstraint *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  bool *pbVar7;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FGenericParticleHandleImp local_res8;
  FPBDIslandManager *local_res10;
  FGenericParticleHandleImp local_res18;
  
  uVar11 = 0;
  if (0 < (this->ConstraintParticles).ArrayNum) {
    lVar12 = 0;
    lVar13 = 0;
    local_res10 = param_1;
    do {
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (this->Handles).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = *(FConstraintHandle **)((this->Handles).AllocatorInstance.Data + lVar13);
      if ((pFVar1 == (FConstraintHandle *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ConstraintHandle != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDJointConstraints.cpp"
                             ,0x41e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = pFVar1->GraphEdge;
      bVar5 = IsConstraintEnabled(this,uVar11);
      if (bVar5) {
        uVar6 = 0;
        if ((int)uVar11 < (this->ConstraintParticles).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar11 < (this->ConstraintParticles).ArrayNum) {
          uVar6 = uVar10;
        }
        pTVar9 = *(TGeometryParticleHandleImp<double,3,1> **)
                  ((this->ConstraintParticles).AllocatorInstance.Data + lVar12);
        local_res8.MHandle = pTVar9;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar3 = *(TGeometryParticleHandleImp<double,3,1> **)
                  ((this->ConstraintParticles).AllocatorInstance.Data + lVar12 + 8);
        param_1 = local_res10;
        local_res18.MHandle = pTVar3;
        if ((pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
           (pTVar3 == (TGeometryParticleHandleImp<double,3,1> *)0x0)) goto LAB_143c56ccb;
        this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar9->_padding_ + 4)) {
          this_00 = pTVar9;
        }
        if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
           (pbVar7 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                               ((TPBDRigidParticleHandleImp<double,3,1> *)this_00),
           param_1 = local_res10, *pbVar7 != false)) goto LAB_143c56ccb;
        pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
          pTVar9 = pTVar3;
        }
        if (((pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
            (pbVar7 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar9),
            param_1 = local_res10, *pbVar7 != false)) ||
           ((bVar5 = FGenericParticleHandleImp::IsDynamic(&local_res8), !bVar5 &&
            (bVar5 = FGenericParticleHandleImp::IsDynamic(&local_res18), param_1 = local_res10,
            !bVar5)))) goto LAB_143c56ccb;
        param_1 = local_res10;
        if (pFVar2 == (FPBDIslandConstraint *)0x0) {
          pTVar8 = GetConstrainedParticles(this,uVar11);
          param_1 = local_res10;
          Chaos::Private::FPBDIslandManager::AddConstraint
                    (local_res10,*(int *)&this->field_0x18,pFVar1,pTVar8);
        }
      }
      else {
LAB_143c56ccb:
        if (pFVar2 != (FPBDIslandConstraint *)0x0) {
          Chaos::Private::FPBDIslandManager::RemoveConstraint(param_1,pFVar1);
        }
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < (this->ConstraintParticles).ArrayNum);
  }
  return;
}

// ApplyPlasticityLimits @ 143c5a6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointConstraints::ApplyPlasticityLimits
          (FPBDJointConstraints *this,int param_1,FSolverBody *param_2,FSolverBody *param_3)

{
  __m128d *p_Var1;
  double *pdVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  FSolverBody *pFVar28;
  bool bVar29;
  uint uVar30;
  TGeometryParticleHandleImp<double,3,1> **ppTVar31;
  bool *pbVar32;
  TVector<double,3> *pTVar33;
  TRigidTransform<double,3> *pTVar34;
  TVector<double> *pTVar35;
  TGeometryParticleHandleImp<double,3,1> *pTVar36;
  longlong lVar37;
  TTransform<double> *this_00;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  double dVar44;
  undefined1 auVar46 [16];
  double dVar45;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar63;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  double dVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  double dVar89;
  double dVar90;
  undefined1 auVar91 [16];
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined4 uVar95;
  undefined4 uVar96;
  undefined1 auStack_4e8 [32];
  longlong local_4c8;
  longlong local_4c0;
  char local_4b8;
  char local_4b7;
  undefined1 local_4b6 [6];
  longlong local_4b0;
  FSolverBody *local_4a8;
  FSolverBody *local_4a0;
  undefined1 local_498 [16];
  undefined8 local_488;
  TVector<double>_u_0 local_480;
  TRotation<double,3> local_468;
  TRotation<double,3> local_448;
  double local_418;
  TRotation<double,3> local_408;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  TVector<double,3> local_398;
  TVector<double,3> local_380;
  TVector<double> local_368;
  TVector<double> local_350;
  TRigidTransform<double,3> local_338;
  TTransform<double> local_2d8;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  TTransform<double> local_218;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  uVar30 = 0;
  lVar39 = (longlong)param_1;
  uVar38 = (uint)~param_1 >> 0x1f;
  iVar5 = (this->ConstraintSettings).ArrayNum;
  uVar40 = uVar30;
  if (param_1 < iVar5) {
    uVar40 = uVar38;
  }
  local_4a8 = param_3;
  local_4a0 = param_2;
  if ((uVar40 == 0) &&
     (local_4c8 = lVar39, local_4c0 = (longlong)iVar5,
     bVar29 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar8 = __real_3e45798ee2308c3a;
  lVar37 = lVar39 * 800;
  this_00 = (TTransform<double> *)((this->ConstraintSettings).AllocatorInstance.Data + lVar37);
  local_4b8 = __real_47efffffe0000000 != this_00[7].Scale3D.XY.m128d_f64[0];
  local_4b7 = __real_47efffffe0000000 != this_00[8].Rotation.XY.m128d_f64[1];
  if ((!(bool)local_4b8) && (!(bool)local_4b7)) {
    return;
  }
  if ((this->Settings).bEnableDrives == false) {
    return;
  }
  if (((bool)local_4b8) &&
     (dVar45 = this_00[7].Scale3D.ZW.m128d_f64[0] - __real_47efffffe0000000,
     uVar40 = SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar42 = (uint)((ulonglong)dVar45 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar42,uVar40) < __real_3e45798ee2308c3a ||
     (double)CONCAT44(uVar42,uVar40) == __real_3e45798ee2308c3a)) {
    local_3c8 = (this_00->Translation).XY.m128d_f64[0];
    dStack_3c0 = (this_00->Translation).XY.m128d_f64[1];
    local_3b8 = (this_00->Translation).ZW.m128d_f64[0];
    iVar5 = (this->ConstraintSettings).ArrayNum;
    dVar45 = dStack_3c0 * dStack_3c0;
    uVar40 = uVar30;
    if (param_1 < iVar5) {
      uVar40 = uVar38;
    }
    dVar44 = local_3b8 * local_3b8;
    dVar90 = local_3c8 * local_3c8;
    if ((uVar40 == 0) &&
       (local_4c8 = lVar39, local_4c0 = (longlong)iVar5,
       bVar29 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    *(double *)((this->ConstraintSettings).AllocatorInstance.Data + lVar37 + 0x2f0) =
         dVar45 + dVar90 + dVar44;
    iVar5 = (this->ConstraintSettings).ArrayNum;
    uVar41 = uVar30;
    if (param_1 < iVar5) {
      uVar41 = uVar38;
    }
    if ((uVar41 == 0) &&
       (local_4c8 = lVar39, local_4c0 = (longlong)iVar5,
       bVar29 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar63 = *(undefined8 *)((this->ConstraintSettings).AllocatorInstance.Data + lVar37 + 0x2f0);
    uVar41 = (uint)uVar63 & uVar40;
    uVar43 = (uint)((ulonglong)uVar63 >> 0x20) & uVar42;
    if ((double)CONCAT44(uVar43,uVar41) < dVar8 || (double)CONCAT44(uVar43,uVar41) == dVar8) {
      local_3b0 = this_00[1].Translation.XY.m128d_f64[0];
      dVar45 = this_00[1].Translation.XY.m128d_f64[1];
      local_3a0 = this_00[1].Translation.ZW.m128d_f64[0];
      iVar5 = (this->ConstraintSettings).ArrayNum;
      uVar41 = uVar30;
      if (param_1 < iVar5) {
        uVar41 = uVar38;
      }
      dVar44 = local_3b0 * local_3b0;
      dVar90 = local_3a0 * local_3a0;
      dStack_3a8 = dVar45;
      if ((uVar41 == 0) &&
         (local_4c8 = lVar39, local_4c0 = (longlong)iVar5,
         bVar29 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(double *)((this->ConstraintSettings).AllocatorInstance.Data + lVar37 + 0x2f0) =
           dVar45 * dVar45 + dVar44 + dVar90;
    }
    iVar5 = (this->ConstraintSettings).ArrayNum;
    uVar41 = uVar30;
    if (param_1 < iVar5) {
      uVar41 = uVar38;
    }
    if ((uVar41 == 0) &&
       (local_4c8 = lVar39, local_4c0 = (longlong)iVar5,
       bVar29 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar63 = *(undefined8 *)((this->ConstraintSettings).AllocatorInstance.Data + lVar37 + 0x2f0);
    uVar40 = (uint)uVar63 & uVar40;
    uVar42 = (uint)((ulonglong)uVar63 >> 0x20) & uVar42;
    if ((double)CONCAT44(uVar42,uVar40) < dVar8 || (double)CONCAT44(uVar42,uVar40) == dVar8) {
      local_4b6[0] = 0;
      `Chaos::FPBDJointConstraints::ApplyPlasticityLimits'::__l14::<lambda_1>::operator()(local_4b6)
      ;
    }
  }
  iVar5 = (this->ConstraintParticles).ArrayNum;
  uVar40 = uVar30;
  if (param_1 < iVar5) {
    uVar40 = uVar38;
  }
  if ((uVar40 == 0) &&
     (local_4c8 = lVar39, local_4c0 = (longlong)iVar5,
     bVar29 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_4b0 = lVar39 * 0x10;
  ppTVar31 = TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[]
                       ((TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                        ((this->ConstraintParticles).AllocatorInstance.Data + local_4b0),1);
  iVar5 = (this->ConstraintParticles).ArrayNum;
  pTVar6 = *ppTVar31;
  if (param_1 < iVar5) {
    uVar30 = uVar38;
  }
  if ((uVar30 == 0) &&
     (local_4c8 = lVar39, local_4c0 = (longlong)iVar5,
     bVar29 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppTVar31 = TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[]
                       ((TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                        ((this->ConstraintParticles).AllocatorInstance.Data + local_4b0),0);
  pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
    pTVar36 = pTVar6;
  }
  pTVar6 = *ppTVar31;
  if ((pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (pbVar32 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar36), *pbVar32 != false)) {
    return;
  }
  pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
    pTVar36 = pTVar6;
  }
  if ((pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (pbVar32 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar36), *pbVar32 != false)) {
    return;
  }
  pFVar28 = local_4a8;
  auVar46 = *(undefined1 (*) [16])&(local_4a8->State).Q;
  dVar22 = *(double *)&(local_4a8->State).Q.field_0x10;
  dVar23 = *(double *)&(local_4a8->State).Q.field_0x18;
  dVar64 = *(double *)&(local_4a8->State).RoM.field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar68 = *(double *)&(local_4a8->State).RoM.field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar12 = *(double *)&(local_4a8->State).RoM *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar13 = *(double *)&(local_4a8->State).RoM.field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar9 = auVar46._0_8_;
  dVar11 = auVar46._8_8_;
  auVar48._8_4_ = auVar46._8_4_;
  auVar48._0_8_ = dVar11;
  auVar48._12_4_ = auVar46._12_4_;
  auVar66._8_4_ = SUB84(dVar13,0);
  auVar66._0_8_ = dVar12;
  auVar66._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar82 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar90 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar77 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar89 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar92 = dVar9 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar23 * dVar13 +
           auVar48._8_8_ * dVar68 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar22 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  pTVar33 = FSolverBody::ActorP(local_4a8,&local_398);
  dVar27 = _UNK_150689688;
  dVar26 = ___xmm_3ff00000000000003ff0000000000000;
  dVar25 = _UNK_150689518;
  dVar24 = ___xmm_00000000000000003ff0000000000000;
  local_1b8._8_4_ = SUB84(dVar92,0);
  local_1b8._0_8_ =
       dVar9 * dVar68 * dVar8 + dVar23 * dVar12 + dVar11 * dVar64 * dVar90 +
       dVar22 * auVar66._8_8_ * dVar3;
  local_1b8._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
  local_198 = *(undefined8 *)pTVar33;
  uStack_190 = *(undefined8 *)&pTVar33->field_0x8;
  local_188 = *(undefined8 *)&pTVar33->field_0x10;
  uStack_180 = 0;
  local_178 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_170 = _UNK_150689688;
  local_168 = ___xmm_00000000000000003ff0000000000000;
  dStack_160 = _UNK_150689518;
  local_1a8 = dVar9 * auVar66._8_8_ * dVar45 + dVar23 * dVar64 + dVar11 * dVar12 * dVar44 +
              dVar22 * dVar68 * dVar77;
  dStack_1a0 = dVar9 * dVar12 * dVar82 + dVar23 * dVar68 + dVar11 * dVar13 * dVar14 +
               dVar22 * dVar64 * dVar89;
  pTVar34 = TRigidTransform<double,3>::operator*
                      ((TRigidTransform<double,3> *)this_00,&local_338,
                       (TRigidTransform<double,3> *)local_1b8);
  dVar22 = *(double *)&(local_4a0->State).Q;
  dVar23 = *(double *)&(local_4a0->State).Q.field_0x8;
  dVar64 = *(double *)&(local_4a0->State).Q.field_0x10;
  dVar68 = *(double *)&(local_4a0->State).Q.field_0x18;
  dVar12 = *(double *)&(local_4a0->State).RoM *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar13 = *(double *)&(local_4a0->State).RoM.field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar92 = *(double *)&(local_4a0->State).RoM.field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = *(double *)&(local_4a0->State).RoM.field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar55._8_4_ = SUB84(dVar13,0);
  auVar55._0_8_ = dVar12;
  auVar55._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar82 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar46._8_4_ = SUB84(dVar9,0);
  auVar46._0_8_ = dVar92;
  auVar46._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar90 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar77 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar89 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar11 = dVar22 * dVar92 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar13 * dVar68 +
           auVar46._8_8_ * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar64 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  pTVar33 = FSolverBody::ActorP(local_4a0,&local_380);
  local_158.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
  local_158.Rotation.XY.m128d_f64[0] =
       dVar22 * dVar9 * dVar8 + dVar12 * dVar68 + dVar92 * dVar23 * dVar90 +
       dVar64 * auVar55._8_8_ * dVar3;
  local_158.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_158.Translation.XY.m128d_f64[0] = *(double *)pTVar33;
  local_158.Translation.XY.m128d_f64[1] = *(double *)&pTVar33->field_0x8;
  local_158.Translation.ZW.m128d_f64[0] = *(double *)&pTVar33->field_0x10;
  local_218.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_218.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_158.Translation.ZW.m128d_f64[1] = 0.0;
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
  local_158.Scale3D.XY.m128d_f64[0] = dVar26;
  local_158.Scale3D.XY.m128d_f64[1] = dVar27;
  local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_158.Scale3D.ZW.m128d_f64[0] = dVar24;
  local_158.Scale3D.ZW.m128d_f64[1] = dVar25;
  local_158.Rotation.ZW.m128d_f64[0] =
       dVar22 * auVar55._8_8_ * dVar45 + dVar92 * dVar68 + dVar12 * dVar23 * dVar44 +
       dVar64 * dVar9 * dVar77;
  local_158.Rotation.ZW.m128d_f64[1] =
       dVar22 * dVar12 * dVar82 + dVar9 * dVar68 + dVar13 * dVar23 * dVar14 +
       dVar64 * dVar92 * dVar89;
  UE::Math::TTransform<double>::Multiply(&local_218,this_00 + 1,&local_158);
  dVar8 = __real_bff0000000000000;
  dVar90 = __real_3ff0000000000000;
  local_2d8.Rotation.XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
  local_2d8.Rotation.XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
  local_2d8.Rotation.ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
  local_2d8.Rotation.ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
  local_2d8.Translation.XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
  local_2d8.Translation.XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
  local_2d8.Scale3D.XY.m128d_f64[0] = local_218.Scale3D.XY.m128d_f64[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = local_218.Scale3D.XY.m128d_f64[1];
  local_2d8.Translation.ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
  local_2d8.Translation.ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
  local_2d8.Scale3D.ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
  auVar46 = *(undefined1 (*) [16])&pTVar34->field_0x10;
  local_258 = *(double *)&pTVar34->field_0x20;
  dStack_250 = *(double *)&pTVar34->field_0x28;
  local_248 = *(undefined1 (*) [16])&pTVar34->field_0x30;
  local_238 = *(undefined8 *)&pTVar34->field_0x40;
  uStack_230 = *(undefined8 *)&pTVar34->field_0x48;
  local_228 = *(undefined1 (*) [16])&pTVar34->field_0x50;
  auVar56._0_8_ = auVar46._8_8_;
  auVar56._8_4_ = auVar46._8_4_;
  auVar56._12_4_ = auVar46._12_4_;
  uVar63 = auVar56._8_8_;
  dVar45 = __real_bff0000000000000;
  if (0.0 <= auVar56._0_8_ * local_218.Rotation.ZW.m128d_f64[1] +
             auVar46._0_8_ * local_218.Rotation.ZW.m128d_f64[0] +
             *(double *)&pTVar34->field_0x8 * local_218.Rotation.XY.m128d_f64[1] +
             *(double *)pTVar34 * local_218.Rotation.XY.m128d_f64[0]) {
    dVar45 = __real_3ff0000000000000;
  }
  dVar44 = *(double *)&pTVar34->field_0x8 * dVar45;
  local_278._8_4_ = SUB84(dVar44,0);
  local_278._0_8_ = *(double *)pTVar34 * dVar45;
  local_278._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  local_268._8_4_ = SUB84(auVar56._0_8_ * dVar45,0);
  local_268._0_8_ = auVar46._0_8_ * dVar45;
  local_268._12_4_ = (int)((ulonglong)(auVar56._0_8_ * dVar45) >> 0x20);
  if (local_4b8 != '\0') {
    local_480._s_0.X = local_258;
    local_480._s_0.Y = dStack_250;
    local_480._s_0.Z = *(double *)&pTVar34->field_0x30;
    pTVar35 = UE::Math::TTransform<double>::InverseTransformPositionNoScale
                        (&local_2d8,&local_368,(TVector<double> *)&local_480._s_0);
    local_498 = *(undefined1 (*) [16])&pTVar35->field0_0x0;
    dVar45 = local_498._0_8_;
    local_488 = *(undefined8 *)((longlong)&pTVar35->field0_0x0 + 0x10);
    uVar95 = (undefined4)local_488;
    uVar96 = (undefined4)((ulonglong)local_488 >> 0x20);
    if ((*(char *)this_00[5].Rotation.XY.m128d_f64 == '\0') ||
       (auVar94 = local_498, *(int *)this_00[2].Scale3D.XY.m128d_f64 == 2)) {
      auVar93._0_8_ = local_498._4_8_ << 0x20;
      auVar93._8_4_ = local_498._8_4_;
      auVar93._12_4_ = local_498._12_4_;
      dVar45 = 0.0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = auVar93._8_8_;
      auVar94 = auVar21 << 0x40;
    }
    if ((*(char *)((longlong)this_00[5].Rotation.XY.m128d_f64 + 1) == '\0') ||
       (*(int *)((longlong)this_00[2].Scale3D.XY.m128d_f64 + 4) == 2)) {
      dVar44 = 0.0;
      auVar94._8_8_ = 0;
      auVar94._0_8_ = dVar45;
    }
    else {
      auVar16._4_8_ = uVar63;
      auVar16._0_4_ = auVar94._4_4_;
      auVar57._0_8_ = auVar16._0_8_ << 0x20;
      auVar57._8_4_ = auVar94._8_4_;
      auVar57._12_4_ = auVar94._12_4_;
      dVar44 = auVar57._8_8_;
    }
    if ((*(char *)((longlong)this_00[5].Rotation.XY.m128d_f64 + 2) == '\0') ||
       (*(int *)(this_00[2].Scale3D.XY.m128d_f64 + 1) == 2)) {
      uVar95 = 0;
      uVar96 = 0;
    }
    dVar3 = this_00[7].Scale3D.XY.m128d_f64[0];
    p_Var1 = &this_00[4].Translation.ZW;
    dVar45 = dVar45 - p_Var1->m128d_f64[0];
    dVar44 = dVar44 - this_00[4].Translation.ZW.m128d_f64[1];
    dVar77 = (double)CONCAT44(uVar96,uVar95) - this_00[4].Scale3D.XY.m128d_f64[0];
    if (dVar3 * dVar3 * this_00[7].Scale3D.ZW.m128d_f64[0] <
        dVar45 * dVar45 + dVar44 * dVar44 + dVar77 * dVar77) {
      if (*(int *)(this_00[7].Scale3D.XY.m128d_f64 + 1) == 0) {
        *(undefined1 (*) [16])p_Var1->m128d_f64 = auVar94;
        this_00[4].Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar96,uVar95);
        SetDriveTargetChanged(this,param_1,true);
      }
      else {
        pTVar35 = UE::Math::TTransform<double>::InverseTransformPositionNoScale
                            (this_00,&local_350,(TVector<double> *)p_Var1);
        dVar90 = local_2d8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar44 = local_2d8.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        local_480._s_0.Z = (pTVar35->field0_0x0)._s_0.Z;
        dVar3 = local_2d8.Rotation.ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar77 = local_2d8.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar46 = *(undefined1 (*) [16])&pTVar35->field0_0x0;
        iVar5 = *(int *)(this_00[7].Scale3D.XY.m128d_f64 + 1);
        auVar65._8_4_ = SUB84(dVar44,0);
        auVar65._0_8_ = dVar90;
        auVar65._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        dVar45 = *(double *)&(pFVar28->State).P.field_0x10 - local_2d8.Translation.ZW.m128d_f64[0];
        dVar82 = *(double *)&(pFVar28->State).P - local_2d8.Translation.XY.m128d_f64[0];
        dVar14 = *(double *)&(pFVar28->State).P.field_0x8 - local_2d8.Translation.XY.m128d_f64[1];
        uVar83 = (undefined4)((ulonglong)dVar14 >> 0x20);
        auVar78._8_4_ = SUB84(dVar14,0);
        auVar78._0_8_ = dVar82;
        auVar78._12_4_ = uVar83;
        auVar47._8_4_ = SUB84(dVar14,0);
        auVar47._0_8_ = dVar82;
        auVar47._12_4_ = uVar83;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = dVar45;
        auVar48 = blendpd(auVar47,auVar15,2);
        auVar79._0_8_ = auVar78._8_8_ * dVar90 - dVar44 * dVar82;
        auVar79._8_8_ = dVar45 * dVar44 - dVar3 * dVar14;
        auVar91._8_4_ = SUB84(auVar79._8_8_,0);
        auVar91._0_8_ = auVar79._0_8_;
        auVar91._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
        auVar10._8_4_ = SUB84(dVar77,0);
        auVar10._0_8_ = dVar3;
        auVar10._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
        auVar66 = blendpd(auVar65,auVar10,2);
        auVar49._0_8_ = auVar48._0_8_ * dVar3 - auVar66._0_8_ * dVar45;
        auVar49._8_8_ = auVar48._8_8_ * dVar77 - auVar66._8_8_ * 0.0;
        auVar48 = blendpd(auVar79,auVar49,2);
        dVar89 = auVar91._8_8_ + auVar91._8_8_;
        dVar92 = auVar49._0_8_ + auVar49._0_8_;
        auVar80._0_8_ = auVar48._0_8_ + auVar48._0_8_;
        auVar80._8_8_ = auVar48._8_8_ + auVar48._8_8_;
        auVar58._8_4_ = SUB84(dVar92,0);
        auVar58._0_8_ = dVar89;
        uVar83 = (undefined4)((ulonglong)dVar92 >> 0x20);
        auVar58._12_4_ = uVar83;
        auVar50._8_4_ = SUB84(dVar92,0);
        auVar50._0_8_ = dVar89;
        auVar50._12_4_ = uVar83;
        auVar48 = blendpd(auVar50,auVar80,2);
        auVar59._0_8_ = auVar58._8_8_ * dVar90 - dVar89 * dVar44;
        auVar59._8_8_ = auVar80._0_8_ * dVar44 - dVar92 * dVar3;
        auVar51._0_8_ = auVar48._0_8_ * dVar3 - auVar80._0_8_ * auVar66._0_8_;
        auVar51._8_8_ = auVar48._8_8_ * dVar77 - auVar80._8_8_ * auVar66._8_8_;
        auVar48 = blendpd(auVar59,auVar51,2);
        local_418 = auVar80._0_8_ * dVar77 + dVar45 + auVar48._0_8_;
        dVar44 = dVar89 * dVar77 + dVar82 + auVar59._8_8_;
        dVar45 = dVar92 * dVar77 + dVar14 + auVar51._0_8_;
        uVar83 = (undefined4)((ulonglong)dVar44 >> 0x20);
        uVar84 = SUB84(dVar45,0);
        uVar85 = (undefined4)((ulonglong)dVar45 >> 0x20);
        dVar45 = auVar46._0_8_;
        dVar90 = __real_3ff0000000000000;
        if (iVar5 == 1) {
          auVar17._4_8_ = auVar48._8_8_;
          auVar17._0_4_ = uVar83;
          auVar60._0_8_ = auVar17._0_8_ << 0x20;
          auVar60._8_4_ = uVar84;
          auVar60._12_4_ = uVar85;
          auVar18._4_8_ = auVar51._8_8_;
          auVar18._0_4_ = auVar46._4_4_;
          auVar52._0_8_ = auVar18._0_8_ << 0x20;
          auVar52._8_4_ = auVar46._8_4_;
          auVar52._12_4_ = auVar46._12_4_;
          if (auVar52._8_8_ * auVar52._8_8_ + dVar45 * dVar45 + local_480._s_0.Z * local_480._s_0.Z
              <= auVar60._8_8_ * auVar60._8_8_ + dVar44 * dVar44 + local_418 * local_418)
          goto LAB_143c5b2f8;
        }
        else if ((iVar5 != 2) ||
                (auVar19._4_8_ = auVar48._8_8_, auVar19._0_4_ = uVar83,
                auVar61._0_8_ = auVar19._0_8_ << 0x20, auVar61._8_4_ = uVar84,
                auVar61._12_4_ = uVar85, auVar20._4_8_ = auVar51._8_8_,
                auVar20._0_4_ = auVar46._4_4_, auVar53._0_8_ = auVar20._0_8_ << 0x20,
                auVar53._8_4_ = auVar46._8_4_, auVar53._12_4_ = auVar46._12_4_,
                auVar61._8_8_ * auVar61._8_8_ + dVar44 * dVar44 + local_418 * local_418 <=
                auVar53._8_8_ * auVar53._8_8_ + dVar45 * dVar45 +
                local_480._s_0.Z * local_480._s_0.Z)) goto LAB_143c5b2f8;
        *(undefined1 (*) [16])p_Var1->m128d_f64 = auVar94;
        this_00[4].Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar96,uVar95);
        SetDriveTargetChanged(this,param_1,true);
        dVar90 = __real_3ff0000000000000;
      }
    }
  }
LAB_143c5b2f8:
  if (local_4b7 != '\0') {
    local_448._0_8_ = 0;
    local_448._8_8_ = 0;
    local_448._16_8_ = 0;
    local_448._24_8_ = 0;
    local_468._0_8_ = 0;
    local_468._8_8_ = 0;
    local_468._16_8_ = 0;
    local_468._24_8_ = 0;
    local_408._0_8_ = local_278._0_8_;
    local_408._8_8_ = local_278._8_8_;
    local_408._16_8_ = local_268._0_8_;
    local_408._24_8_ = local_268._8_8_;
    local_3e8 = local_2d8.Rotation.XY.m128d_f64[0];
    dStack_3e0 = local_2d8.Rotation.XY.m128d_f64[1];
    local_3d8 = local_2d8.Rotation.ZW.m128d_f64[0];
    dStack_3d0 = local_2d8.Rotation.ZW.m128d_f64[1];
    FPBDJointUtilities::DecomposeSwingTwistLocal
              ((TRotation<double,3> *)&local_3e8,&local_408,&local_448,&local_468);
    cVar4 = *(char *)(this_00[6].Translation.ZW.m128d_f64 + 1);
    if (((cVar4 == '\0') && (*(char *)((longlong)this_00[6].Translation.ZW.m128d_f64 + 10) == '\0'))
       || (*(int *)(this_00[2].Scale3D.ZW.m128d_f64 + 1) == 2)) {
      local_468._4_4_ = UE::Math::TQuat<double>::Identity.X._4_4_;
      local_468._0_4_ = UE::Math::TQuat<double>::Identity.X._0_4_;
      local_468._12_4_ = UE::Math::TQuat<double>::Identity.Y._4_4_;
      local_468._8_4_ = UE::Math::TQuat<double>::Identity.Y._0_4_;
      local_468._20_4_ = UE::Math::TQuat<double>::Identity.Z._4_4_;
      local_468._16_4_ = UE::Math::TQuat<double>::Identity.Z._0_4_;
      local_468._28_4_ = UE::Math::TQuat<double>::Identity.W._4_4_;
      local_468._24_4_ = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar95 = UE::Math::TQuat<double>::Identity.Z._0_4_;
      uVar96 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      uVar83 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar84 = UE::Math::TQuat<double>::Identity.W._4_4_;
      uVar85 = UE::Math::TQuat<double>::Identity.X._0_4_;
      uVar86 = UE::Math::TQuat<double>::Identity.X._4_4_;
      uVar87 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uVar88 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    }
    else {
      uVar95 = local_468._16_4_;
      uVar96 = local_468._20_4_;
      uVar83 = local_468._24_4_;
      uVar84 = local_468._28_4_;
      uVar85 = local_468._0_4_;
      uVar86 = local_468._4_4_;
      uVar87 = local_468._8_4_;
      uVar88 = local_468._12_4_;
    }
    if (((cVar4 == '\0') && (*(char *)((longlong)this_00[6].Translation.ZW.m128d_f64 + 0xc) == '\0')
        ) || ((*(int *)this_00[3].Rotation.XY.m128d_f64 == 2 &&
              (*(int *)((longlong)this_00[2].Scale3D.ZW.m128d_f64 + 0xc) == 2)))) {
      local_448._4_4_ = UE::Math::TQuat<double>::Identity.X._4_4_;
      local_448._0_4_ = UE::Math::TQuat<double>::Identity.X._0_4_;
      local_448._12_4_ = UE::Math::TQuat<double>::Identity.Y._4_4_;
      local_448._8_4_ = UE::Math::TQuat<double>::Identity.Y._0_4_;
      local_448._20_4_ = UE::Math::TQuat<double>::Identity.Z._4_4_;
      local_448._16_4_ = UE::Math::TQuat<double>::Identity.Z._0_4_;
      local_448._28_4_ = UE::Math::TQuat<double>::Identity.W._4_4_;
      local_448._24_4_ = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar69 = UE::Math::TQuat<double>::Identity.X._0_4_;
      uVar70 = UE::Math::TQuat<double>::Identity.X._4_4_;
      uVar71 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uVar72 = UE::Math::TQuat<double>::Identity.Y._4_4_;
      uVar73 = UE::Math::TQuat<double>::Identity.Z._0_4_;
      uVar74 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      uVar75 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar76 = UE::Math::TQuat<double>::Identity.W._4_4_;
    }
    else {
      uVar69 = local_448._0_4_;
      uVar70 = local_448._4_4_;
      uVar71 = local_448._8_4_;
      uVar72 = local_448._12_4_;
      uVar73 = local_448._16_4_;
      uVar74 = local_448._20_4_;
      uVar75 = local_448._24_4_;
      uVar76 = local_448._28_4_;
    }
    dVar44 = (double)CONCAT44(uVar70,uVar69);
    auVar67._4_4_ = uVar96;
    auVar67._0_4_ = uVar95;
    auVar67._8_4_ = uVar83;
    auVar67._12_4_ = uVar84;
    auVar81._8_4_ = uVar69;
    auVar81._0_8_ = dVar44;
    auVar81._12_4_ = uVar70;
    auVar62._4_4_ = uVar86;
    auVar62._0_4_ = uVar85;
    auVar62._8_4_ = uVar87;
    auVar62._12_4_ = uVar88;
    dVar45 = (double)CONCAT44(uVar72,uVar71);
    auVar54._8_4_ = uVar71;
    auVar54._0_8_ = dVar45;
    auVar54._12_4_ = uVar72;
    dVar77 = dVar44 * auVar67._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             (double)CONCAT44(uVar76,uVar75) * (double)CONCAT44(uVar86,uVar85) +
             dVar45 * (double)CONCAT44(uVar96,uVar95) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             (double)CONCAT44(uVar74,uVar73) * auVar62._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar82 = auVar81._8_8_ * (double)CONCAT44(uVar96,uVar95) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             (double)CONCAT44(uVar76,uVar75) * (double)CONCAT44(uVar88,uVar87) +
             auVar54._8_8_ * (double)CONCAT44(uVar84,uVar83) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             (double)CONCAT44(uVar74,uVar73) * (double)CONCAT44(uVar86,uVar85) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar44 = dVar44 * auVar62._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             (double)CONCAT44(uVar96,uVar95) * (double)CONCAT44(uVar76,uVar75) +
             dVar45 * (double)CONCAT44(uVar86,uVar85) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             (double)CONCAT44(uVar74,uVar73) * auVar67._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar3 = (double)CONCAT44(uVar70,uVar69) * (double)CONCAT44(uVar86,uVar85) *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            (double)CONCAT44(uVar84,uVar83) * (double)CONCAT44(uVar76,uVar75) +
            (double)CONCAT44(uVar72,uVar71) * (double)CONCAT44(uVar88,uVar87) *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            (double)CONCAT44(uVar74,uVar73) * (double)CONCAT44(uVar96,uVar95) *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar45 = dVar44 * this_00[6].Rotation.ZW.m128d_f64[0] +
             dVar3 * this_00[6].Rotation.ZW.m128d_f64[1] +
             dVar82 * this_00[6].Rotation.XY.m128d_f64[1] +
             dVar77 * this_00[6].Rotation.XY.m128d_f64[0];
    dVar45 = (dVar45 + dVar45) * dVar45 - dVar90;
    if ((dVar8 <= dVar45) && (dVar8 = dVar45, dVar90 <= dVar45)) {
      dVar8 = dVar90;
    }
    dVar8 = acos(dVar8);
    pdVar2 = this_00[8].Rotation.XY.m128d_f64 + 1;
    if (*pdVar2 <= dVar8 && dVar8 != *pdVar2) {
      this_00[6].Rotation.XY.m128d_f64[0] = dVar77;
      this_00[6].Rotation.XY.m128d_f64[1] = dVar82;
      this_00[6].Rotation.ZW.m128d_f64[0] = dVar44;
      this_00[6].Rotation.ZW.m128d_f64[1] = dVar3;
      SetDriveTargetChanged(this,param_1,true);
    }
  }
  return;
}

// BreakConstraint @ 143c5c180

void __thiscall Chaos::FPBDJointConstraints::BreakConstraint(FPBDJointConstraints *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_res8;
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar8 = (longlong)param_1 * 0x58;
  (this->ConstraintStates).AllocatorInstance.Data[lVar8 + 0x10] = (FScriptContainerElement)0x1;
  SetConstraintBroken(this,param_1,true);
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ConstraintStates).AllocatorInstance.Data[lVar8 + 0x12] = (FScriptContainerElement)0x1;
  if (*(longlong *)&this->BreakCallback != 0) {
    uVar4 = 0;
    if (param_1 < (this->Handles).ArrayNum) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res8 = *(undefined8 *)((this->Handles).AllocatorInstance.Data + (longlong)param_1 * 8);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BreakCallback);
    pcVar2 = *(code **)&this->BreakCallback;
    plVar1 = *(longlong **)&(this->BreakCallback).field_0x28;
    plVar6 = (longlong *)&(this->BreakCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar5,&local_res8);
  }
  return;
}

// CalculateConstraintSpace @ 143c5d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDJointConstraints::CalculateConstraintSpace
          (FPBDJointConstraints *this,int param_1,TVector<double,3> *param_2,
          PMatrix<double,3,3> *param_3,TVector<double,3> *param_4,PMatrix<double,3,3> *param_5)

{
  int iVar1;
  FGenericParticleHandle FVar2;
  FGenericParticleHandle FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  TVector<double,3> *local_390;
  TVector<double,3> *local_388;
  PMatrix<double,3,3> *local_380;
  PMatrix<double,3,3> *local_378;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  local_388 = param_4;
  iVar1 = (this->ConstraintParticles).ArrayNum;
  lVar11 = (longlong)param_1;
  local_378 = param_5;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < iVar1) {
    uVar9 = uVar10;
  }
  local_390 = param_2;
  local_380 = param_3;
  if (uVar9 == 0) {
    local_3a8 = lVar11;
    local_3a0 = (longlong)iVar1;
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
  iVar1 = (this->ConstraintParticles).ArrayNum;
  local_398 = lVar11 * 0x10;
  FVar2.Imp.MHandle =
       *(FGenericParticleHandleImp *)
        &(this->ConstraintParticles).AllocatorInstance.Data[local_398 + 8].field_0x0;
  uVar9 = 0;
  if (param_1 < iVar1) {
    uVar9 = uVar10;
  }
  if (uVar9 == 0) {
    local_3a8 = lVar11;
    local_3a0 = (longlong)iVar1;
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
  FVar3.Imp.MHandle =
       *(FGenericParticleHandleImp *)
        &(this->ConstraintParticles).AllocatorInstance.Data[local_398].field_0x0;
  FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  GetCoMWorldPosition<Chaos::FGenericParticleHandle>((TVector<double,3> *)&local_328,FVar2);
  FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  GetCoMWorldRotation<Chaos::FGenericParticleHandle>((TRotation<double,3> *)&local_368,FVar2);
  FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  GetCoMWorldPosition<Chaos::FGenericParticleHandle>((TVector<double,3> *)&local_310,FVar3);
  FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  GetCoMWorldRotation<Chaos::FGenericParticleHandle>((TRotation<double,3> *)&local_348,FVar3);
  iVar1 = (this->ConstraintSettings).ArrayNum;
  uVar9 = 0;
  if (param_1 < iVar1) {
    uVar9 = uVar10;
  }
  if (uVar9 == 0) {
    local_3a8 = lVar11;
    local_3a0 = (longlong)iVar1;
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
  local_398 = lVar11 * 800;
  FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  ParticleLocalToCoMLocal<Chaos::FGenericParticleHandle>
            ((TRigidTransform<double,3> *)&local_2b8,FVar2,
             (TRigidTransform<double,3> *)
             ((this->ConstraintSettings).AllocatorInstance.Data + local_398 + 0x60));
  iVar1 = (this->ConstraintSettings).ArrayNum;
  uVar9 = 0;
  if (param_1 < iVar1) {
    uVar9 = uVar10;
  }
  if (uVar9 == 0) {
    local_3a8 = lVar11;
    local_3a0 = (longlong)iVar1;
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
  FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
  ParticleLocalToCoMLocal<Chaos::FGenericParticleHandle>
            ((TRigidTransform<double,3> *)&local_258,FVar3,
             (TRigidTransform<double,3> *)
             ((this->ConstraintSettings).AllocatorInstance.Data + local_398));
  dVar7 = local_288 * dStack_360 - dStack_290 * local_358;
  dVar7 = dVar7 + dVar7;
  dVar5 = local_298 * local_358 - local_288 * local_368;
  dVar5 = dVar5 + dVar5;
  dVar6 = dStack_290 * local_368 - local_298 * dStack_360;
  dVar6 = dVar6 + dVar6;
  *(double *)local_390 =
       (dVar6 * dStack_360 - dVar5 * local_358) + dStack_350 * dVar7 + local_298 + local_328;
  *(double *)&local_390->field_0x8 =
       (dVar7 * local_358 - dVar6 * local_368) + dStack_350 * dVar5 + dStack_290 + local_320;
  *(double *)&local_390->field_0x10 =
       (dVar5 * local_368 - dVar7 * dStack_360) + dStack_350 * dVar6 + local_288 + local_318;
  dVar7 = local_228 * dStack_340 - dStack_230 * local_338;
  dVar5 = local_238 * local_338 - local_228 * local_348;
  dVar5 = dVar5 + dVar5;
  dVar7 = dVar7 + dVar7;
  dVar6 = dStack_230 * local_348 - local_238 * dStack_340;
  dVar6 = dVar6 + dVar6;
  *(double *)local_388 =
       (dVar6 * dStack_340 - dVar5 * local_338) + dVar7 * dStack_330 + local_238 + local_310;
  *(double *)&local_388->field_0x8 =
       (dVar7 * local_338 - dVar6 * local_348) + dVar5 * dStack_330 + dStack_230 + local_308;
  *(double *)&local_388->field_0x10 =
       (dVar5 * local_348 - dVar7 * dStack_340) + dVar6 * dStack_330 + local_228 + local_300;
  dVar5 = local_2a8 * local_368 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dStack_2b0 * dStack_350 +
          dStack_2a0 * dStack_360 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
          + local_358 * local_2b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_2f8._8_4_ = SUB84(dVar5,0);
  local_2f8._0_8_ =
       dStack_2a0 * local_368 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       local_2b8 * dStack_350 +
       local_2a8 * dStack_360 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       local_358 * dStack_2b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_2f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar5 = local_368 * local_2b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dStack_2a0 * dStack_350 +
          dStack_2b0 * dStack_360 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
          + local_358 * local_2a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_2e8._8_4_ = SUB84(dVar5,0);
  local_2e8._0_8_ =
       local_368 * dStack_2b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       local_2a8 * dStack_350 +
       local_2b8 * dStack_360 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       local_358 * dStack_2a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_2e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_1c8.M[0][0] = 0.0;
  local_1c8.M[0][1] = 0.0;
  local_1c8.M[0][2] = 0.0;
  local_1c8.M[0][3] = 0.0;
  local_1c8.M[1][0] = 0.0;
  local_1c8.M[1][1] = 0.0;
  local_1c8.M[1][2] = 0.0;
  local_1c8.M[1][3] = 0.0;
  local_1c8.M[2][0] = 0.0;
  local_1c8.M[2][1] = 0.0;
  local_1c8.M[2][2] = 0.0;
  local_1c8.M[2][3] = 0.0;
  local_1c8.M[3][0] = 0.0;
  local_1c8.M[3][1] = 0.0;
  local_1c8.M[3][2] = 0.0;
  local_1c8.M[3][3] = 0.0;
  UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)local_2f8,&local_1c8);
  *(double *)local_380 = local_1c8.M[0][0];
  *(double *)&local_380->field_0x8 = local_1c8.M[0][1];
  *(double *)&local_380->field_0x10 = local_1c8.M[0][2];
  *(double *)&local_380->field_0x18 = local_1c8.M[0][3];
  *(double *)&local_380->field_0x20 = local_1c8.M[1][0];
  *(double *)&local_380->field_0x28 = local_1c8.M[1][1];
  *(double *)&local_380->field_0x30 = local_1c8.M[1][2];
  *(double *)&local_380->field_0x38 = local_1c8.M[1][3];
  *(double *)&local_380->field_0x40 = local_1c8.M[2][0];
  *(double *)&local_380->field_0x48 = local_1c8.M[2][1];
  *(double *)&local_380->field_0x50 = local_1c8.M[2][2];
  *(double *)&local_380->field_0x58 = local_1c8.M[2][3];
  *(double *)&local_380->field_0x60 = local_1c8.M[3][0];
  *(double *)&local_380->field_0x68 = local_1c8.M[3][1];
  *(double *)&local_380->field_0x70 = local_1c8.M[3][2];
  *(double *)&local_380->field_0x78 = local_1c8.M[3][3];
  dVar5 = local_248 * local_348 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dStack_330 * dStack_250 +
          dStack_340 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
          + local_338 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_2d8._8_4_ = SUB84(dVar5,0);
  local_2d8._0_8_ =
       dStack_240 * local_348 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dStack_330 * local_258 +
       dStack_340 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       local_338 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_2d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar5 = local_348 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dStack_330 * dStack_240 +
          dStack_340 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
          + local_338 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_148.M[0][0] = 0.0;
  local_148.M[0][1] = 0.0;
  local_2c8._8_4_ = SUB84(dVar5,0);
  local_2c8._0_8_ =
       local_348 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dStack_330 * local_248 +
       dStack_340 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       local_338 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_2c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_148.M[0][2] = 0.0;
  local_148.M[0][3] = 0.0;
  local_148.M[1][0] = 0.0;
  local_148.M[1][1] = 0.0;
  local_148.M[1][2] = 0.0;
  local_148.M[1][3] = 0.0;
  local_148.M[2][0] = 0.0;
  local_148.M[2][1] = 0.0;
  local_148.M[2][2] = 0.0;
  local_148.M[2][3] = 0.0;
  local_148.M[3][0] = 0.0;
  local_148.M[3][1] = 0.0;
  local_148.M[3][2] = 0.0;
  local_148.M[3][3] = 0.0;
  UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)local_2d8,&local_148);
  *(double *)local_378 = local_148.M[0][0];
  *(double *)&local_378->field_0x8 = local_148.M[0][1];
  *(double *)&local_378->field_0x10 = local_148.M[0][2];
  *(double *)&local_378->field_0x18 = local_148.M[0][3];
  *(double *)&local_378->field_0x20 = local_148.M[1][0];
  *(double *)&local_378->field_0x28 = local_148.M[1][1];
  *(double *)&local_378->field_0x30 = local_148.M[1][2];
  *(double *)&local_378->field_0x38 = local_148.M[1][3];
  *(double *)&local_378->field_0x40 = local_148.M[2][0];
  *(double *)&local_378->field_0x48 = local_148.M[2][1];
  *(double *)&local_378->field_0x50 = local_148.M[2][2];
  *(double *)&local_378->field_0x58 = local_148.M[2][3];
  *(double *)&local_378->field_0x60 = local_148.M[3][0];
  *(double *)&local_378->field_0x68 = local_148.M[3][1];
  *(double *)&local_378->field_0x70 = local_148.M[3][2];
  *(double *)&local_378->field_0x78 = local_148.M[3][3];
  return;
}

// ClearBreakCallback @ 143c5e970

void __thiscall Chaos::FPBDJointConstraints::ClearBreakCallback(FPBDJointConstraints *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->BreakCallback != 0) {
    plVar1 = *(longlong **)&(this->BreakCallback).field_0x28;
    plVar2 = (longlong *)&(this->BreakCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->BreakCallback = 0;
  }
  return;
}

// ClearConstraintBreaking @ 143c5ea40

void __thiscall
Chaos::FPBDJointConstraints::ClearConstraintBreaking(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x12] =
       (FScriptContainerElement)0x0;
  return;
}

// ClearConstraintViolating @ 143c5eb40

void __thiscall
Chaos::FPBDJointConstraints::ClearConstraintViolating(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x13] =
       (FScriptContainerElement)0x0;
  return;
}

// ClearDriveTargetChanged @ 143c5ec40

void __thiscall
Chaos::FPBDJointConstraints::ClearDriveTargetChanged(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x14] =
       (FScriptContainerElement)0x0;
  return;
}

// ColorConstraints @ 143c5ece0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FPBDJointConstraints::ColorConstraints(FPBDJointConstraints *this)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  EObjectStateType EVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  byte bVar13;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar14;
  ulonglong *puVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  FPBDJointConstraints *pFVar26;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar27;
  longlong lVar28;
  undefined1 auStackY_218 [32];
  uint local_1c8;
  int local_1c4;
  undefined1 local_1c0 [8];
  FPBDJointConstraints *local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  FColoringGraph local_1a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  uint local_160;
  longlong local_158;
  int local_150;
  int local_14c;
  uint local_148;
  uint uStack_144;
  longlong local_140;
  longlong local_138;
  int local_130;
  int local_12c;
  TPBDRigidParticleHandleImp<double,3,1> *local_128;
  TPBDRigidParticleHandleImp<double,3,1> **local_120;
  TPBDRigidParticleHandleImp<double,3,1> *local_118;
  TPBDRigidParticleHandleImp<double,3,1> **local_110;
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar17 = (this->ConstraintParticles).ArrayNum;
  local_1a0.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Vertices.ArrayNum = 0;
  local_1a0.Vertices.ArrayMax = 0;
  local_1a0.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Edges.ArrayNum = 0;
  local_1a0.Edges.ArrayMax = 0;
  local_1a0.Islands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Islands.ArrayNum = 0;
  local_1a0.Islands.ArrayMax = 0;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  local_1b8 = this;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar17,(ForAnyElementType *)&local_1a0,0,&local_1a0.Vertices.ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_170,(this->ConstraintParticles).ArrayNum,Default);
  iVar8 = (this->ConstraintParticles).ArrayNum;
  uVar17 = 0;
  if (0 < iVar8) {
    lVar24 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    do {
      lVar23 = local_1a8;
      uVar22 = ~uVar17 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar17 < (this->ConstraintStates).ArrayNum) {
        uVar20 = uVar22;
      }
      if ((uVar20 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->ConstraintStates).AllocatorInstance.Data[lVar23 + 0x10] ==
          (FScriptContainerElement)0x0) {
        uVar20 = 0;
        if ((int)uVar17 < (this->ConstraintParticles).ArrayNum) {
          uVar20 = uVar22;
        }
        if ((uVar20 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = local_1b0;
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   ((this->ConstraintParticles).AllocatorInstance.Data + local_1b0);
        pTVar27 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar12->field_0xc) {
          pTVar27 = pTVar12;
        }
        uVar20 = 0;
        if ((int)uVar17 < (this->ConstraintParticles).ArrayNum) {
          uVar20 = uVar22;
        }
        if ((uVar20 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   ((this->ConstraintParticles).AllocatorInstance.Data + uVar1 + 8);
        pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar12->field_0xc) {
          pTVar11 = pTVar12;
        }
        if (pTVar27 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143c5ef93:
          bVar4 = false;
        }
        else {
          uVar20 = *(uint *)&pTVar27->field_0x8;
          lVar23 = *(longlong *)pTVar27;
          uVar21 = 0;
          if ((int)uVar20 < *(int *)(lVar23 + 0x2e0)) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((*(char *)(*(longlong *)(lVar23 + 0x2d8) + 0xb + (longlong)(int)uVar20 * 0x10) !=
               '\x04') &&
             (EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar27),
             EVar5 != Sleeping)) goto LAB_143c5ef93;
          bVar4 = true;
        }
        if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143c5f012:
          bVar6 = false;
        }
        else {
          uVar20 = *(uint *)&pTVar11->field_0x8;
          lVar23 = *(longlong *)pTVar11;
          uVar21 = 0;
          if ((int)uVar20 < *(int *)(lVar23 + 0x2e0)) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((*(char *)(*(longlong *)(lVar23 + 0x2d8) + 0xb + (longlong)(int)uVar20 * 0x10) !=
               '\x04') &&
             (EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11),
             EVar5 != Sleeping)) goto LAB_143c5f012;
          bVar6 = true;
        }
        if ((bVar4) || (bVar6)) {
          iVar8 = local_1a0.Vertices.ArrayNum;
          if (local_1a0.Vertices.ArrayNum == local_1a0.Vertices.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,(ForAnyElementType *)&local_1a0,&local_1a0.Vertices.ArrayMax);
          }
          local_1a0.Vertices.ArrayNum = iVar8 + 1;
          DefaultConstructItems<Chaos::FColoringGraph::FVertex,int>
                    (local_1a0.Vertices.AllocatorInstance.Data + (longlong)iVar8 * 0x20,1);
          uVar20 = 0;
          if ((int)uVar17 < local_170.ArrayNum) {
            uVar20 = uVar22;
          }
          if ((uVar20 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)(local_170.AllocatorInstance.Data + lVar24) = iVar8;
          if ((!bVar4) || (this = local_1b8, !bVar6)) {
            uVar20 = 0;
            if ((int)uVar17 < local_170.ArrayNum) {
              uVar20 = uVar22;
            }
            if ((uVar20 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar20 = *(uint *)(local_170.AllocatorInstance.Data + lVar24);
            this = local_1b8;
            if (uVar20 != 0xffffffff) {
              uVar22 = 0;
              if ((int)uVar20 < local_1a0.Vertices.ArrayNum) {
                uVar22 = ~uVar20 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(undefined4 *)
               (local_1a0.Vertices.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x20 + 0x14) = 0
              ;
              this = local_1b8;
            }
          }
        }
        else {
          uVar20 = 0;
          if ((int)uVar17 < local_170.ArrayNum) {
            uVar20 = uVar22;
          }
          if ((uVar20 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(local_170.AllocatorInstance.Data + lVar24) = 0xffffffff;
          this = local_1b8;
        }
      }
      local_1a8 = local_1a8 + 0x58;
      local_1b0 = local_1b0 + 0x10;
      iVar8 = (this->ConstraintParticles).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar24 = lVar24 + 4;
    } while ((int)uVar17 < iVar8);
  }
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_1c8 = 0;
  if (0 < iVar8) {
    do {
      uVar17 = local_1c8;
      uVar20 = 0;
      if ((int)local_1c8 < (this->ConstraintStates).ArrayNum) {
        uVar20 = ~local_1c8 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->ConstraintStates).AllocatorInstance.Data[(longlong)(int)uVar17 * 0x58 + 0x10] ==
          (FScriptContainerElement)0x0) {
        lVar24 = (longlong)(int)local_1c8;
        uVar17 = 0;
        if ((int)local_1c8 < (this->ConstraintParticles).ArrayNum) {
          uVar17 = ~local_1c8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar23 = (longlong)(int)local_1c8;
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   ((this->ConstraintParticles).AllocatorInstance.Data + lVar24 * 0x10);
        uVar17 = 0;
        if ((int)local_1c8 < (this->ConstraintParticles).ArrayNum) {
          uVar17 = ~local_1c8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar27 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   ((this->ConstraintParticles).AllocatorInstance.Data + lVar23 * 0x10 + 8);
        pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar12->field_0xc != '\0') {
          pTVar11 = pTVar12;
        }
        if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143c5f39f:
          pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (pTVar12->field_0xc != '\0') {
            pTVar11 = pTVar12;
          }
          if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar14 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar11->field_0xc) {
              pTVar14 = pTVar11;
            }
            if (pTVar14 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar5 = Kinematic;
            }
            else {
              EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar14);
            }
            if (EVar5 == Sleeping) goto LAB_143c5f3d2;
          }
        }
        else {
          pTVar14 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar11->field_0xc) {
            pTVar14 = pTVar11;
          }
          if (pTVar14 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar5 = Kinematic;
          }
          else {
            EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar14);
          }
          if (EVar5 != Dynamic) goto LAB_143c5f39f;
LAB_143c5f3d2:
          uVar17 = ((uint)((ulonglong)pTVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar12 >> 4)) *
                   -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          uVar17 = uVar17 >> 0x10 ^ uVar17;
          local_128 = pTVar12;
          if (local_88._8_4_ != local_54) {
            FVar16 = (ForElementType<FSetElementId>)local_50;
            if (local_48 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_48;
            }
            iVar8 = *(int *)((longlong)FVar16 + (ulonglong)(local_40 - 1U & uVar17) * 4);
            while (iVar8 != -1) {
              puVar15 = (ulonglong *)((longlong)iVar8 * 0x20 + local_88._0_8_);
              if ((TPBDRigidParticleHandleImp<double,3,1> *)*puVar15 == pTVar12) {
                if (puVar15 != (ulonglong *)0x0) goto LAB_143c5f496;
                break;
              }
              iVar8 = (int)puVar15[3];
            }
          }
          local_120 = &local_128;
          TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_&&>_>
                    ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_88,(uint)&local_150,
                     (TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_&&> *)
                     (ulonglong)uVar17,(bool *)&local_120);
          puVar15 = (ulonglong *)((longlong)local_150 * 0x20 + local_88._0_8_);
LAB_143c5f496:
          if ((((uint *)puVar15[1] <= &local_1c8) &&
              (&local_1c8 < (uint *)puVar15[1] + *(int *)((longlong)puVar15 + 0x14))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = (int)puVar15[2];
          if (iVar8 == *(int *)((longlong)puVar15 + 0x14)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)(puVar15 + 1),
                               (int *)((longlong)puVar15 + 0x14));
          }
          *(int *)(puVar15 + 2) = iVar8 + 1;
          *(uint *)(((ForAnyElementType *)(puVar15 + 1))->Data + (longlong)iVar8 * 4) = local_1c8;
        }
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar27->field_0xc != '\0') {
          pTVar12 = pTVar27;
        }
        if (pTVar12 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143c5f55d:
          pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (pTVar27->field_0xc != '\0') {
            pTVar12 = pTVar27;
          }
          if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar12->field_0xc) {
              pTVar11 = pTVar12;
            }
            if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar5 = Kinematic;
            }
            else {
              EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
            }
            if (EVar5 == Sleeping) goto LAB_143c5f590;
          }
        }
        else {
          pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar12->field_0xc) {
            pTVar11 = pTVar12;
          }
          if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar5 = Kinematic;
          }
          else {
            EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
          }
          if (EVar5 != Dynamic) goto LAB_143c5f55d;
LAB_143c5f590:
          uVar17 = ((uint)((ulonglong)pTVar27 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar27 >> 4)) *
                   -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          uVar17 = uVar17 >> 0x10 ^ uVar17;
          local_118 = pTVar27;
          if (local_88._8_4_ != local_54) {
            FVar16 = (ForElementType<FSetElementId>)local_50;
            if (local_48 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_48;
            }
            iVar8 = *(int *)((longlong)FVar16 + (ulonglong)(local_40 - 1U & uVar17) * 4);
            while (iVar8 != -1) {
              puVar15 = (ulonglong *)((longlong)iVar8 * 0x20 + local_88._0_8_);
              if ((TPBDRigidParticleHandleImp<double,3,1> *)*puVar15 == pTVar27) {
                if (puVar15 != (ulonglong *)0x0) goto LAB_143c5f656;
                break;
              }
              iVar8 = (int)puVar15[3];
            }
          }
          local_110 = &local_118;
          TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_&&>_>
                    ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_88,(uint)&local_14c,
                     (TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_&&> *)
                     (ulonglong)uVar17,(bool *)&local_110);
          puVar15 = (ulonglong *)((longlong)local_14c * 0x20 + local_88._0_8_);
LAB_143c5f656:
          if ((((uint *)puVar15[1] <= &local_1c8) &&
              (&local_1c8 < (uint *)puVar15[1] + *(int *)((longlong)puVar15 + 0x14))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = (int)puVar15[2];
          if (iVar8 == *(int *)((longlong)puVar15 + 0x14)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)(puVar15 + 1),
                               (int *)((longlong)puVar15 + 0x14));
          }
          *(int *)(puVar15 + 2) = iVar8 + 1;
          *(uint *)(((ForAnyElementType *)(puVar15 + 1))->Data + (longlong)iVar8 * 4) = local_1c8;
        }
      }
      local_1c8 = local_1c8 + 1;
    } while ((int)local_1c8 < (this->ConstraintParticles).ArrayNum);
  }
  uVar17 = (((local_88._8_4_ - local_54) + -1) * (local_88._8_4_ - local_54)) / 2;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (local_1a0.Edges.ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar17,&local_1a0.Edges.AllocatorInstance,local_1a0.Edges.ArrayNum,
               &local_1a0.Edges.ArrayMax);
  }
  uVar17 = local_60;
  iStack_100 = 0;
  local_e8 = 0;
  uStack_fc = 1;
  uStack_ec = 0;
  if (local_60 != 0) {
    puVar18 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar18 = local_68;
    }
    uVar20 = *puVar18;
    while (uVar20 == 0) {
      lVar24 = (longlong)iStack_100;
      local_e8 = local_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      uStack_ec = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_100)
      goto LAB_143c5f7e0;
      uVar20 = puVar18[lVar24 + 1];
    }
    uStack_fc = -uVar20 & uVar20;
    uVar1 = (ulonglong)uStack_fc * 2 + 1;
    lVar24 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_130 = (int)lVar24;
    uStack_ec = local_130 + -1 + local_e8;
    if ((int)local_60 < (int)uStack_ec) {
      uStack_ec = local_60;
    }
  }
LAB_143c5f7e0:
  local_108 = (longlong *)local_88;
  uStack_e4 = local_8c;
  local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_e0 = local_88._8_4_ - local_54;
  uVar20 = local_60 & 0xffffffe0;
  uStack_f0 = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
  iVar8 = (int)local_60 >> 5;
  TStack_d0._28_4_ = local_8c;
  TStack_d0.BaseBitIndex = local_e8;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  bVar13 = (byte)local_60;
  local_160 = local_60;
  local_d8 = local_108;
  TStack_d0.Array = local_f8;
  if (((int)local_60 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar17 != local_60) {
    puVar18 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar18 = local_68;
    }
    uVar17 = -1 << (bVar13 & 0x1f) & puVar18[iVar8];
    while (uVar17 == 0) {
      lVar24 = (longlong)iVar8;
      uVar20 = uVar20 + 0x20;
      iVar8 = iVar8 + 1;
      local_160 = local_60;
      uVar17 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_143c5f910;
      uVar17 = puVar18[lVar24 + 1];
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_12c = (int)lVar24;
    local_160 = (uVar20 - 1) + local_12c;
    uVar17 = local_160;
    if ((int)local_60 < (int)local_160) {
      local_160 = local_60;
      uVar17 = local_60;
    }
  }
LAB_143c5f910:
  while( true ) {
    plVar3 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      local_1c0[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c0);
    }
    if (((TStack_d0.CurrentBitIndex == uVar17) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar3 == (longlong *)local_88)) break;
    uVar20 = 0;
    lVar23 = (longlong)TStack_d0.CurrentBitIndex * 0x20 + *plVar3;
    local_1b0 = local_1b0 & 0xffffffff00000000;
    lVar24 = (longlong)*(int *)(lVar23 + 0x10);
    local_140 = lVar24;
    if (0 < lVar24) {
      local_1a8 = 1;
      local_138 = 0;
      local_158 = lVar24;
      do {
        lVar28 = local_138;
        uVar17 = 0;
        if ((int)uVar20 < *(int *)(lVar23 + 0x10)) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar17 = *(uint *)(lVar28 + *(longlong *)(lVar23 + 8));
        uVar22 = 0;
        if ((int)uVar17 < local_170.ArrayNum) {
          uVar22 = ~uVar17 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar17 = *(uint *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
        if ((uVar17 != 0xffffffff) && (lVar28 = local_1a8, local_1a8 < lVar24)) {
          do {
            uVar20 = uVar20 + 1;
            uVar22 = 0;
            if ((int)uVar20 < *(int *)(lVar23 + 0x10)) {
              uVar22 = ~uVar20 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar22 = *(uint *)(*(longlong *)(lVar23 + 8) + lVar28 * 4);
            uVar21 = 0;
            if ((int)uVar22 < local_170.ArrayNum) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar22 = *(uint *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
            if (uVar22 != 0xffffffff) {
              iVar8 = local_1a0.Edges.ArrayNum;
              local_148 = uVar17;
              uStack_144 = uVar22;
              if (local_1a0.Edges.ArrayNum == local_1a0.Edges.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_1a0.Edges.AllocatorInstance,
                                   &local_1a0.Edges.ArrayMax);
              }
              local_1a0.Edges.ArrayNum = iVar8 + 1;
              *(ulonglong *)(local_1a0.Edges.AllocatorInstance.Data + (longlong)iVar8 * 8) =
                   CONCAT44(uStack_144,local_148);
              uVar21 = 0;
              if ((int)uVar17 < local_1a0.Vertices.ArrayNum) {
                uVar21 = ~uVar17 >> 0x1f;
              }
              local_1c4 = iVar8;
              if ((uVar21 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar19 = local_1a0.Vertices.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x20;
              if (((*(FScriptContainerElement **)&pFVar19->field_0x0 <=
                    (FScriptContainerElement *)&local_1c4) &&
                  ((FScriptContainerElement *)&local_1c4 <
                   *(FScriptContainerElement **)&pFVar19->field_0x0 +
                   (longlong)*(int *)(pFVar19 + 0xc) * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar8 = *(int *)(pFVar19 + 8);
              if (iVar8 == *(int *)(pFVar19 + 0xc)) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 0xc));
              }
              *(int *)(pFVar19 + 8) = iVar8 + 1;
              *(int *)(*(FScriptContainerElement **)&pFVar19->field_0x0 + (longlong)iVar8 * 4) =
                   local_1c4;
              uVar21 = 0;
              if ((int)uVar22 < local_1a0.Vertices.ArrayNum) {
                uVar21 = ~uVar22 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar19 = local_1a0.Vertices.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x20;
              if (((*(FScriptContainerElement **)&pFVar19->field_0x0 <=
                    (FScriptContainerElement *)&local_1c4) &&
                  ((FScriptContainerElement *)&local_1c4 <
                   *(FScriptContainerElement **)&pFVar19->field_0x0 +
                   (longlong)*(int *)(pFVar19 + 0xc) * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar8 = *(int *)(pFVar19 + 8);
              if (iVar8 == *(int *)(pFVar19 + 0xc)) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 0xc));
              }
              *(int *)(pFVar19 + 8) = iVar8 + 1;
              *(int *)(*(FScriptContainerElement **)&pFVar19->field_0x0 + (longlong)iVar8 * 4) =
                   local_1c4;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < local_140);
          lVar24 = local_140;
          uVar20 = (uint)local_1b0;
        }
        uVar20 = uVar20 + 1;
        local_138 = local_138 + 4;
        local_1b0 = CONCAT44(local_1b0._4_4_,uVar20);
        local_1a8 = local_1a8 + 1;
        local_158 = local_158 + -1;
      } while (local_158 != 0);
      local_158 = 0;
      uVar17 = local_160;
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  FColoringGraph::Islandize(&local_1a0);
  FColoringGraph::Levelize(&local_1a0);
  FColoringGraph::Colorize(&local_1a0);
  uVar17 = 0;
  if (0 < (local_1b8->ConstraintParticles).ArrayNum) {
    lVar24 = 0;
    local_158 = 0;
    pFVar26 = local_1b8;
    do {
      lVar23 = local_158;
      uVar22 = ~uVar17 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar17 < (pFVar26->ConstraintStates).ArrayNum) {
        uVar20 = uVar22;
      }
      if ((uVar20 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar26->ConstraintStates).AllocatorInstance.Data[lVar24 + 0x10] ==
          (FScriptContainerElement)0x0) {
        uVar20 = 0;
        if ((int)uVar17 < local_170.ArrayNum) {
          uVar20 = uVar22;
        }
        if ((uVar20 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar20 = *(uint *)(local_170.AllocatorInstance.Data + lVar23);
        lVar23 = (longlong)(int)uVar20;
        if (uVar20 == 0xffffffff) {
          uVar25 = 0xffffffff;
        }
        else {
          uVar21 = 0;
          if ((int)uVar20 < local_1a0.Vertices.ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar25 = *(undefined4 *)(local_1a0.Vertices.AllocatorInstance.Data + lVar23 * 0x20 + 0x10)
          ;
        }
        uVar21 = 0;
        if ((int)uVar17 < (local_1b8->ConstraintStates).ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar21 = ~uVar20 >> 0x1f;
        *(undefined4 *)((local_1b8->ConstraintStates).AllocatorInstance.Data + lVar24) = uVar25;
        if (uVar20 == 0xffffffff) {
          uVar25 = 0xffffffff;
        }
        else {
          uVar9 = 0;
          if ((int)uVar20 < local_1a0.Vertices.ArrayNum) {
            uVar9 = uVar21;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = *(uint *)(local_1a0.Vertices.AllocatorInstance.Data + lVar23 * 0x20 + 0x10);
          uVar10 = 0;
          if ((int)uVar9 < local_1a0.Islands.ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar25 = *(undefined4 *)
                    (local_1a0.Islands.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18 + 8);
        }
        uVar9 = 0;
        if ((int)uVar17 < (local_1b8->ConstraintStates).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((local_1b8->ConstraintStates).AllocatorInstance.Data + lVar24 + 0xc) =
             uVar25;
        if (uVar20 == 0xffffffff) {
          uVar25 = 0xffffffff;
        }
        else {
          uVar9 = 0;
          if ((int)uVar20 < local_1a0.Vertices.ArrayNum) {
            uVar9 = uVar21;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar25 = *(undefined4 *)(local_1a0.Vertices.AllocatorInstance.Data + lVar23 * 0x20 + 0x14)
          ;
        }
        uVar9 = 0;
        if ((int)uVar17 < (local_1b8->ConstraintStates).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((local_1b8->ConstraintStates).AllocatorInstance.Data + lVar24 + 4) = uVar25;
        if (uVar20 == 0xffffffff) {
          uVar25 = 0xffffffff;
        }
        else {
          uVar9 = 0;
          if ((int)uVar20 < local_1a0.Vertices.ArrayNum) {
            uVar9 = uVar21;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar25 = *(undefined4 *)(local_1a0.Vertices.AllocatorInstance.Data + lVar23 * 0x20 + 0x18)
          ;
        }
        pFVar26 = local_1b8;
        uVar20 = 0;
        if ((int)uVar17 < (local_1b8->ConstraintStates).ArrayNum) {
          uVar20 = uVar22;
        }
        if ((uVar20 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((pFVar26->ConstraintStates).AllocatorInstance.Data + lVar24 + 8) = uVar25;
        lVar23 = local_158;
      }
      local_158 = lVar23 + 4;
      uVar17 = uVar17 + 1;
      lVar24 = lVar24 + 0x58;
    } while ((int)uVar17 < (pFVar26->ConstraintParticles).ArrayNum);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FColoringGraph::FIsland,int>
            ((FIsland *)local_1a0.Islands.AllocatorInstance.Data,local_1a0.Islands.ArrayNum);
  if ((FIsland *)local_1a0.Islands.AllocatorInstance.Data != (FIsland *)0x0) {
    FMemory::Free(local_1a0.Islands.AllocatorInstance.Data);
  }
  if (local_1a0.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Edges.AllocatorInstance.Data);
  }
  DestructItems<Chaos::FColoringGraph::FVertex,int>
            ((FVertex *)local_1a0.Vertices.AllocatorInstance.Data,local_1a0.Vertices.ArrayNum);
  if ((FVertex *)local_1a0.Vertices.AllocatorInstance.Data != (FVertex *)0x0) {
    FMemory::Free(local_1a0.Vertices.AllocatorInstance.Data);
  }
  return;
}

// CreateGroupSolver @ 143c636e0

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall Chaos::FPBDJointConstraints::CreateGroupSolver(FPBDJointConstraints *this,int param_1)

{
  TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *pTVar1;
  TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this_00;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if (this->bUseLinearSolver == false) {
    this_00 = ::operator_new(0x38);
    if (this_00 != (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *)0x0) {
      pTVar1 = (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *)
               Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::
               TPBDJointContainerSolver<Chaos::FPBDJointSolver>(this_00,this,in_R8D);
      goto LAB_143c6373c;
    }
  }
  else {
    pTVar1 = ::operator_new(0x38);
    if (pTVar1 != (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *)0x0) {
      pTVar1 = Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::
               TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>(pTVar1,this,in_R8D);
      goto LAB_143c6373c;
    }
  }
  pTVar1 = (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *)0x0;
LAB_143c6373c:
  ((FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1))->_padding_ =
       (longlong)pTVar1;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )(FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
}

// CreateSceneSolver @ 143c637d0

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall Chaos::FPBDJointConstraints::CreateSceneSolver(FPBDJointConstraints *this,int param_1)

{
  TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *pTVar1;
  TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this_00;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if (this->bUseLinearSolver == false) {
    this_00 = ::operator_new(0x38);
    if (this_00 != (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *)0x0) {
      pTVar1 = (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *)
               Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::
               TPBDJointContainerSolver<Chaos::FPBDJointSolver>(this_00,this,in_R8D);
      goto LAB_143c6382c;
    }
  }
  else {
    pTVar1 = ::operator_new(0x38);
    if (pTVar1 != (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *)0x0) {
      pTVar1 = Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::
               TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>(pTVar1,this,in_R8D);
      goto LAB_143c6382c;
    }
  }
  pTVar1 = (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *)0x0;
LAB_143c6382c:
  ((FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1))->_padding_ =
       (longlong)pTVar1;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )(FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
}

// DisconnectConstraints @ 143c64f40

void __thiscall
Chaos::FPBDJointConstraints::DisconnectConstraints
          (FPBDJointConstraints *this,
          TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  FPBDJointConstraints *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FConstraintHandleTypeID *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_d8;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar18 = 0;
  iVar20 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar21 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_143c64fed;
      uVar16 = puVar21[lVar13 + 1];
    }
    uVar9 = -uVar16 & uVar16;
    uVar14 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = iVar20 + -1 + (int)lVar13;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_143c64fed:
  local_d8 = *(uint *)&(param_1->Elements).field_0x28;
  uVar16 = local_d8 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar18);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_d8 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar20;
  uStack_50 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_d8 < 0) || (iVar3 < (int)local_d8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  if (local_d8 != uVar9) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)local_d8 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      local_d8 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_143c650f1;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_d8 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar9 < (int)local_d8) {
      local_d8 = uVar9;
    }
  }
LAB_143c650f1:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == local_d8) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    puVar4 = *(undefined8 **)
              (*(longlong *)&param_1->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    pTVar11 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                        ((TGeometryParticlesImp<double,3,0> *)*puVar4,*(int *)(puVar4 + 1));
    uVar9 = pTVar11->ArrayNum;
    uVar14 = (ulonglong)(int)uVar9;
    pFVar22 = (pTVar11->AllocatorInstance).Data;
    pFVar15 = pFVar22 + uVar14 * 8;
    while( true ) {
      if (pTVar11->ArrayNum != (int)uVar14) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::FConstraintHandle_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar22 == pFVar15) break;
      lVar13 = *(longlong *)pFVar22;
      lVar5 = *(longlong *)(lVar13 + 8);
      if ((lVar5 != 0) &&
         (((pFVar12 = FPBDJointConstraintHandle::StaticType(),
           pFVar12->TypeName == *(FName *)(lVar5 + 8) ||
           ((*(FConstraintHandleTypeID **)(lVar5 + 0x10) != (FConstraintHandleTypeID *)0x0 &&
            (bVar8 = FConstraintHandleTypeID::IsA
                               (*(FConstraintHandleTypeID **)(lVar5 + 0x10),pFVar12), bVar8)))) &&
          (pFVar6 = *(FPBDJointConstraints **)(lVar13 + 8), this == pFVar6)))) {
        if (pFVar6 != (FPBDJointConstraints *)0x0) {
          uVar16 = *(uint *)(lVar13 + 0x18);
          uVar17 = 0;
          if ((int)uVar16 < (pFVar6->ConstraintStates).ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (pFVar6->ConstraintStates).AllocatorInstance.Data[(longlong)(int)uVar16 * 0x58 + 0x10] =
               (FScriptContainerElement)0x1;
        }
        uVar16 = *(uint *)(lVar13 + 0x18);
        lVar13 = (longlong)(int)uVar16;
        if (uVar16 != 0xffffffff) {
          pTVar2 = &this->ConstraintParticles;
          uVar17 = 0;
          if ((int)uVar16 < (this->ConstraintParticles).ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(undefined8 **)((pTVar2->AllocatorInstance).Data + lVar13 * 0x10) == puVar4) {
            uVar17 = 0;
            if ((int)uVar16 < (this->ConstraintParticles).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar13 * 0x10) = 0;
          }
          uVar17 = 0;
          if ((int)uVar16 < (this->ConstraintParticles).ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(undefined8 **)((pTVar2->AllocatorInstance).Data + lVar13 * 0x10 + 8) == puVar4) {
            uVar17 = 0;
            if ((int)uVar16 < (this->ConstraintParticles).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar13 * 0x10 + 8) = 0;
          }
        }
      }
      pFVar22 = pFVar22 + 8;
      uVar14 = (ulonglong)uVar9;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// FixConstraint @ 143c67570

void __thiscall Chaos::FPBDJointConstraints::FixConstraint(FPBDJointConstraints *this,int param_1)

{
  SetConstraintBroken(this,param_1,false);
  SetConstraintEnabled(this,param_1,true);
  return;
}

// GetConstrainedParticleIndices @ 143c67c50

void __thiscall
Chaos::FPBDJointConstraints::GetConstrainedParticleIndices
          (FPBDJointConstraints *this,int param_1,int *param_2,int *param_3)

{
  *param_2 = 1;
  *param_3 = 0;
  return;
}

// GetConstrainedParticles @ 143c67ca0

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FPBDJointConstraints::GetConstrainedParticles(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintParticles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
         ((this->ConstraintParticles).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// GetConstraintAngularImpulse @ 143c67ec0

TVector<double,3> * __thiscall
Chaos::FPBDJointConstraints::GetConstraintAngularImpulse
          (FPBDJointConstraints *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->ConstraintStates).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x58 + 0x30;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x58 + 0x40);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pFVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
  return __return_storage_ptr__;
}

// GetConstraintAngularViolation @ 143c67f60

float __thiscall
Chaos::FPBDJointConstraints::GetConstraintAngularViolation(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((this->ConstraintStates).AllocatorInstance.Data +
                   (longlong)param_1 * 0x58 + 0x4c);
}

// GetConstraintColor @ 143c68000

int __thiscall
Chaos::FPBDJointConstraints::GetConstraintColor(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->ConstraintStates).AllocatorInstance.Data + (longlong)param_1 * 0x58 + 8);
}

// GetConstraintHandle @ 143c68120

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDJointConstraints::GetConstraintHandle(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointConstraintHandle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Handles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDJointConstraintHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDJointConstraintHandle **)
          ((this->Handles).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetConstraintHandle @ 143c681a0

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDJointConstraints::GetConstraintHandle(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointConstraintHandle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Handles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDJointConstraintHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDJointConstraintHandle **)
          ((this->Handles).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetConstraintIsland @ 143c682b0

int __thiscall
Chaos::FPBDJointConstraints::GetConstraintIsland(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->ConstraintStates).AllocatorInstance.Data + (longlong)param_1 * 0x58);
}

// GetConstraintLevel @ 143c68350

int __thiscall
Chaos::FPBDJointConstraints::GetConstraintLevel(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->ConstraintStates).AllocatorInstance.Data + (longlong)param_1 * 0x58 + 4);
}

// GetConstraintLinearImpulse @ 143c683d0

TVector<double,3> * __thiscall
Chaos::FPBDJointConstraints::GetConstraintLinearImpulse
          (FPBDJointConstraints *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->ConstraintStates).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x58 + 0x18;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x58 + 0x28);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pFVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
  return __return_storage_ptr__;
}

// GetConstraintLinearViolation @ 143c68470

float __thiscall
Chaos::FPBDJointConstraints::GetConstraintLinearViolation(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((this->ConstraintStates).AllocatorInstance.Data +
                   (longlong)param_1 * 0x58 + 0x48);
}

// GetConstraintResimType @ 143c684f0

EResimType __thiscall
Chaos::FPBDJointConstraints::GetConstraintResimType(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EResimType EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (EResimType)
         (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x50];
}

// GetConstraintSettings @ 143c68570

FPBDJointSettings * __thiscall
Chaos::FPBDJointConstraints::GetConstraintSettings(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointSettings *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDJointSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPBDJointSettings *)
         ((this->ConstraintSettings).AllocatorInstance.Data + (longlong)param_1 * 800);
}

// GetConstraintSyncState @ 143c68670

ESyncState __thiscall
Chaos::FPBDJointConstraints::GetConstraintSyncState(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESyncState EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (ESyncState)
         (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x51];
}

// GetSettings @ 143c69890

FPBDJointSolverSettings * __thiscall
Chaos::FPBDJointConstraints::GetSettings(FPBDJointConstraints *this)

{
  return &this->Settings;
}

// IsConstraintBreaking @ 143c6af50

bool __thiscall
Chaos::FPBDJointConstraints::IsConstraintBreaking(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x12];
}

// IsConstraintBroken @ 143c6aff0

bool __thiscall
Chaos::FPBDJointConstraints::IsConstraintBroken(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x11];
}

// IsConstraintEnabled @ 143c6b090

bool __thiscall
Chaos::FPBDJointConstraints::IsConstraintEnabled(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x10] ==
         (FScriptContainerElement)0x0;
}

// IsConstraintEnabledDuringResim @ 143c6b120

bool __thiscall
Chaos::FPBDJointConstraints::IsConstraintEnabledDuringResim(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x52];
}

// IsConstraintViolating @ 143c6b220

bool __thiscall
Chaos::FPBDJointConstraints::IsConstraintViolating(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x13];
}

// IsDriveTargetChanged @ 143c6b320

bool __thiscall
Chaos::FPBDJointConstraints::IsDriveTargetChanged(FPBDJointConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x14];
}

// NumConstraints @ 143c6bb50

int __thiscall Chaos::FPBDJointConstraints::NumConstraints(FPBDJointConstraints *this)

{
  return (this->ConstraintParticles).ArrayNum;
}

// PrepareTick @ 143c6c570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDJointConstraints::PrepareTick(FPBDJointConstraints *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_PrepareTick> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_Joints_PrepareTick;
  if (StatPtr_STAT_Joints_PrepareTick ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_PrepareTick>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_Joints_PrepareTick");
    FVar6 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_PrepareTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Joints_PrepareTick,*pFVar5,
                       L"Joints::PrepareTick","STATGROUP_ChaosJoint","STATCAT_Advanced",
                       L"ChaosJoint",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDJointConstraints.cpp"
                   ,0x3f3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_143c6c6ce;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143c6c6ce:
  if (this->bJointsDirty != false) {
    if ((this->Settings).bSortEnabled != false) {
      ColorConstraints(this);
      SortConstraints(this);
    }
    this->bJointsDirty = false;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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

// RemoveConstraint @ 143c6e1c0

void __thiscall
Chaos::FPBDJointConstraints::RemoveConstraint(FPBDJointConstraints *this,int param_1)

{
  int *piVar1;
  TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FConstraintHandle *pFVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  lVar12 = (longlong)param_1;
  this->bJointsDirty = true;
  uVar15 = ~param_1;
  uVar14 = uVar15 >> 0x1f;
  uVar8 = 0;
  uVar9 = uVar8;
  if (param_1 < (this->Handles).ArrayNum) {
    uVar9 = uVar14;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar2 = &this->ConstraintParticles;
  pFVar3 = *(FConstraintHandle **)((this->Handles).AllocatorInstance.Data + lVar12 * 8);
  uVar9 = 0;
  if (pFVar3 != (FConstraintHandle *)0x0) {
    uVar10 = uVar8;
    if (param_1 < (this->ConstraintParticles).ArrayNum) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar12 * 0x10) != 0) {
      uVar10 = uVar8;
      if (param_1 < (this->ConstraintParticles).ArrayNum) {
        uVar10 = uVar14;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar4 = *(undefined8 **)((pTVar2->AllocatorInstance).Data + lVar12 * 0x10);
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)*puVar4,(int *)(puVar4 + 1),pFVar3);
    }
    if (param_1 < (this->ConstraintParticles).ArrayNum) {
      uVar8 = uVar14;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar12 * 0x10 + 8) != 0) {
      uVar8 = uVar9;
      if (param_1 < (this->ConstraintParticles).ArrayNum) {
        uVar8 = uVar14;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar4 = *(undefined8 **)((pTVar2->AllocatorInstance).Data + lVar12 * 0x10 + 8);
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)*puVar4,(int *)(puVar4 + 1),pFVar3);
    }
    pFVar3->_padding_ = (longlong)&___7FConstraintHandle_Chaos__6B_;
    if (pFVar3->GraphEdge != (FPBDIslandConstraint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEdge == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                         ,0x79,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    ::operator_delete(pFVar3,0x28);
    uVar8 = uVar9;
    if (param_1 < (this->Handles).ArrayNum) {
      uVar8 = uVar14;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(undefined8 *)((this->Handles).AllocatorInstance.Data + lVar12 * 8) = 0;
  }
  if (param_1 < (this->ConstraintParticles).ArrayNum) {
    uVar9 = uVar14;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar11 = (this->ConstraintParticles).ArrayNum;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  iVar13 = uVar15 + iVar11;
  if (1 < iVar13) {
    iVar13 = 1;
  }
  if (iVar13 != 0) {
    memmove(pFVar5 + lVar12 * 0x10,pFVar5 + (longlong)(iVar11 - iVar13) * 0x10,(longlong)iVar13 << 4
           );
  }
  piVar1 = &(this->ConstraintParticles).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&pTVar2->AllocatorInstance,(this->ConstraintParticles).ArrayNum,
             &(this->ConstraintParticles).ArrayMax);
  uVar8 = 0;
  uVar9 = uVar8;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar9 = uVar14;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar13 = (this->ConstraintSettings).ArrayNum;
  iVar11 = uVar15 + iVar13;
  pFVar5 = (this->ConstraintSettings).AllocatorInstance.Data;
  if (1 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 != 0) {
    memmove(pFVar5 + lVar12 * 800,pFVar5 + (longlong)(iVar13 - iVar11) * 800,(longlong)iVar11 * 800)
    ;
  }
  piVar1 = &(this->ConstraintSettings).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (800,0x10,&(this->ConstraintSettings).AllocatorInstance,
             (this->ConstraintSettings).ArrayNum,&(this->ConstraintSettings).ArrayMax);
  uVar9 = uVar8;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar13 = (this->ConstraintStates).ArrayNum;
  pFVar5 = (this->ConstraintStates).AllocatorInstance.Data;
  iVar11 = ~param_1 + iVar13;
  if (1 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 != 0) {
    memmove(pFVar5 + lVar12 * 0x58,pFVar5 + (longlong)(iVar13 - iVar11) * 0x58,
            (longlong)iVar11 * 0x58);
  }
  piVar1 = &(this->ConstraintStates).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,&(this->ConstraintStates).AllocatorInstance,(this->ConstraintStates).ArrayNum,
             &(this->ConstraintStates).ArrayMax);
  if (param_1 < (this->Handles).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar13 = (this->Handles).ArrayNum;
  pFVar5 = (this->Handles).AllocatorInstance.Data;
  iVar11 = ~param_1 + iVar13;
  if (1 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 != 0) {
    memmove(pFVar5 + lVar12 * 8,pFVar5 + (longlong)(iVar13 - iVar11) * 8,(longlong)iVar11 << 3);
  }
  iVar13 = (this->Handles).ArrayNum + -1;
  (this->Handles).ArrayNum = iVar13;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->Handles).AllocatorInstance,iVar13,&(this->Handles).ArrayMax);
  if (param_1 < (this->Handles).ArrayNum) {
    if (param_1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(int *)(*(longlong *)((this->Handles).AllocatorInstance.Data + lVar12 * 8) + 0x18) = param_1;
  }
  return;
}

// ResetConstraints @ 143c714d0

void __thiscall Chaos::FPBDJointConstraints::ResetConstraints(FPBDJointConstraints *this)

{
  return;
}

// SetAngularDrivePositionTarget @ 143c73240

void __thiscall
Chaos::FPBDJointConstraints::SetAngularDrivePositionTarget
          (FPBDJointConstraints *this,int param_1,TRotation<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar4 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)&param_2->field_0x4;
  uVar6 = *(undefined4 *)&param_2->field_0x8;
  uVar7 = *(undefined4 *)&param_2->field_0xc;
  uVar8 = *(undefined8 *)&param_2->field_0x10;
  uVar9 = *(undefined8 *)&param_2->field_0x18;
  uVar11 = 0;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->ConstraintSettings).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1 * 800 + 0x240;
  *(undefined4 *)pFVar1 = uVar4;
  *(undefined4 *)(pFVar1 + 4) = uVar5;
  *(undefined4 *)(pFVar1 + 8) = uVar6;
  *(undefined4 *)(pFVar1 + 0xc) = uVar7;
  pFVar2 = pFVar2 + (longlong)param_1 * 800 + 0x250;
  *(undefined8 *)pFVar2 = uVar8;
  *(undefined8 *)(pFVar2 + 8) = uVar9;
  return;
}

// SetBreakCallback @ 143c73380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDJointConstraints::SetBreakCallback
          (FPBDJointConstraints *this,
          TFunction<void___cdecl(Chaos::FPBDJointConstraintHandle_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar7 = *(longlong *)&this->BreakCallback;
  uVar8 = *(undefined8 *)&(this->BreakCallback).field_0x8;
  uVar1 = *(undefined4 *)&(this->BreakCallback).field_0x10;
  uVar2 = *(undefined4 *)&(this->BreakCallback).field_0x14;
  uVar3 = *(undefined4 *)&(this->BreakCallback).field_0x18;
  uVar4 = *(undefined4 *)&(this->BreakCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(this->BreakCallback).field_0x20;
  plVar6 = *(longlong **)&(this->BreakCallback).field_0x28;
  *(longlong *)&this->BreakCallback = local_48;
  *(undefined8 *)&(this->BreakCallback).field_0x8 = uStack_40;
  *(undefined4 *)&(this->BreakCallback).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->BreakCallback).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->BreakCallback).field_0x18 = uStack_30;
  *(undefined4 *)&(this->BreakCallback).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->BreakCallback).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->BreakCallback).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->BreakCallback).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->BreakCallback).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar1;
  local_38._4_4_ = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar10 = &local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar10 = plVar6;
    }
    local_48 = lVar7;
    uStack_40 = uVar8;
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// SetConstraintBreaking @ 143c734f0

void __thiscall
Chaos::FPBDJointConstraints::SetConstraintBreaking
          (FPBDJointConstraints *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x12] =
       (FScriptContainerElement)param_2;
  return;
}

// SetConstraintBroken @ 143c73580

void __thiscall
Chaos::FPBDJointConstraints::SetConstraintBroken
          (FPBDJointConstraints *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x11] =
       (FScriptContainerElement)param_2;
  return;
}

// SetConstraintEnabled @ 143c73630

void __thiscall
Chaos::FPBDJointConstraints::SetConstraintEnabled
          (FPBDJointConstraints *this,int param_1,bool param_2)

{
  int iVar1;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  bool *pbVar6;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar8 = (longlong)param_1;
  iVar1 = (this->ConstraintStates).ArrayNum;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (!param_2) {
    if (param_1 < iVar1) {
      uVar9 = uVar10;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->ConstraintStates).AllocatorInstance.Data[lVar8 * 0x58 + 0x10] =
         (FScriptContainerElement)0x1;
    return;
  }
  uVar5 = 0;
  if (param_1 < iVar1) {
    uVar5 = uVar10;
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
  if ((this->ConstraintStates).AllocatorInstance.Data[lVar8 * 0x58 + 0x10] !=
      (FScriptContainerElement)0x0) {
    uVar5 = 0;
    if (param_1 < (this->ConstraintParticles).ArrayNum) {
      uVar5 = uVar10;
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
    uVar5 = uVar9;
    if (param_1 < (this->ConstraintParticles).ArrayNum) {
      uVar5 = uVar10;
    }
    pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
              ((this->ConstraintParticles).AllocatorInstance.Data + lVar8 * 0x10);
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
    pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)
              ((this->ConstraintParticles).AllocatorInstance.Data + lVar8 * 0x10 + 8);
    if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar7->field_0xc) {
        this_00 = pTVar7;
      }
      if (((this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) ||
          (pbVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00), *pbVar6 == false)) &&
         (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0)) {
        pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar2->field_0xc) {
          pTVar7 = pTVar2;
        }
        if (((pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) ||
            (pbVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(pTVar7), *pbVar6 == false))
           && (bVar4 = IsConstraintBroken(this,param_1), !bVar4)) {
          if (param_1 < (this->ConstraintStates).ArrayNum) {
            uVar9 = uVar10;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->ConstraintStates).AllocatorInstance.Data[lVar8 * 0x58 + 0x10] =
               (FScriptContainerElement)0x0;
        }
      }
    }
  }
  return;
}

// SetConstraintEnabledDuringResim @ 143c73880

void __thiscall
Chaos::FPBDJointConstraints::SetConstraintEnabledDuringResim
          (FPBDJointConstraints *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x52] =
       (FScriptContainerElement)param_2;
  return;
}

// SetConstraintSettings @ 143c73910

void __thiscall
Chaos::FPBDJointConstraints::SetConstraintSettings
          (FPBDJointConstraints *this,int param_1,FPBDJointSettings *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FPBDJointSettings *pFVar14;
  longlong lVar15;
  undefined8 local_338 [100];
  
  lVar13 = 6;
  lVar15 = 6;
  puVar7 = local_338;
  do {
    pFVar14 = param_2;
    puVar11 = puVar7;
    uVar3 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x8;
    uVar4 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x10;
    uVar5 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x18;
    param_2 = (FPBDJointSettings *)&(pFVar14->ConnectorTransforms).V[1].field_0x20;
    *puVar11 = *(undefined8 *)(pFVar14->ConnectorTransforms).V;
    puVar11[1] = uVar3;
    uVar3 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x20;
    uVar6 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x28;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    uVar4 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x30;
    uVar5 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x38;
    puVar11[4] = uVar3;
    puVar11[5] = uVar6;
    uVar3 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x40;
    uVar6 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x48;
    puVar11[6] = uVar4;
    puVar11[7] = uVar5;
    uVar4 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x50;
    uVar5 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[0].field_0x58;
    puVar11[8] = uVar3;
    puVar11[9] = uVar6;
    uVar3 = *(undefined8 *)((pFVar14->ConnectorTransforms).V + 1);
    uVar6 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[1].field_0x8;
    puVar11[10] = uVar4;
    puVar11[0xb] = uVar5;
    uVar4 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[1].field_0x10;
    uVar5 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[1].field_0x18;
    puVar11[0xc] = uVar3;
    puVar11[0xd] = uVar6;
    puVar11[0xe] = uVar4;
    puVar11[0xf] = uVar5;
    lVar15 = lVar15 + -1;
    puVar7 = puVar11 + 0x10;
  } while (lVar15 != 0);
  uVar3 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[1].field_0x28;
  iVar1 = (this->ConstraintSettings).ArrayNum;
  uVar4 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[1].field_0x30;
  uVar5 = *(undefined8 *)&(pFVar14->ConnectorTransforms).V[1].field_0x38;
  puVar11[0x10] = *(undefined8 *)param_2;
  puVar11[0x11] = uVar3;
  puVar11[0x12] = uVar4;
  puVar11[0x13] = uVar5;
  uVar10 = 0;
  if (param_1 < iVar1) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar7 = local_338;
  pFVar8 = (this->ConstraintSettings).AllocatorInstance.Data + (longlong)param_1 * 800;
  do {
    pFVar12 = pFVar8;
    puVar11 = puVar7;
    uVar3 = puVar11[1];
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    *(undefined8 *)pFVar12 = *puVar11;
    *(undefined8 *)(pFVar12 + 8) = uVar3;
    uVar3 = puVar11[4];
    uVar6 = puVar11[5];
    *(undefined8 *)(pFVar12 + 0x10) = uVar4;
    *(undefined8 *)(pFVar12 + 0x18) = uVar5;
    uVar4 = puVar11[6];
    uVar5 = puVar11[7];
    *(undefined8 *)(pFVar12 + 0x20) = uVar3;
    *(undefined8 *)(pFVar12 + 0x28) = uVar6;
    uVar3 = puVar11[8];
    uVar6 = puVar11[9];
    *(undefined8 *)(pFVar12 + 0x30) = uVar4;
    *(undefined8 *)(pFVar12 + 0x38) = uVar5;
    uVar4 = puVar11[10];
    uVar5 = puVar11[0xb];
    *(undefined8 *)(pFVar12 + 0x40) = uVar3;
    *(undefined8 *)(pFVar12 + 0x48) = uVar6;
    uVar3 = puVar11[0xc];
    uVar6 = puVar11[0xd];
    *(undefined8 *)(pFVar12 + 0x50) = uVar4;
    *(undefined8 *)(pFVar12 + 0x58) = uVar5;
    uVar4 = puVar11[0xe];
    uVar5 = puVar11[0xf];
    *(undefined8 *)(pFVar12 + 0x60) = uVar3;
    *(undefined8 *)(pFVar12 + 0x68) = uVar6;
    *(undefined8 *)(pFVar12 + 0x70) = uVar4;
    *(undefined8 *)(pFVar12 + 0x78) = uVar5;
    lVar13 = lVar13 + -1;
    puVar7 = puVar11 + 0x10;
    pFVar8 = pFVar12 + 0x80;
  } while (lVar13 != 0);
  uVar3 = puVar11[0x11];
  uVar4 = puVar11[0x12];
  uVar5 = puVar11[0x13];
  *(undefined8 *)(pFVar12 + 0x80) = puVar11[0x10];
  *(undefined8 *)(pFVar12 + 0x88) = uVar3;
  *(undefined8 *)(pFVar12 + 0x90) = uVar4;
  *(undefined8 *)(pFVar12 + 0x98) = uVar5;
  uVar10 = 0;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FPBDJointSettings::Sanitize
            ((FPBDJointSettings *)
             ((this->ConstraintSettings).AllocatorInstance.Data + (longlong)param_1 * 800));
  return;
}

// SetConstraintState @ 143c73af0

void __thiscall
Chaos::FPBDJointConstraints::SetConstraintState
          (FPBDJointConstraints *this,int param_1,FPBDJointState *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  longlong lVar19;
  
  iVar5 = param_2->Island;
  iVar6 = param_2->Level;
  iVar7 = param_2->Color;
  iVar8 = param_2->IslandSize;
  uVar9 = *(undefined8 *)&param_2->bDisabled;
  uVar10 = *(undefined8 *)&param_2->LinearImpulse;
  uVar11 = *(undefined8 *)&(param_2->LinearImpulse).field_0x8;
  uVar12 = *(undefined8 *)&(param_2->LinearImpulse).field_0x10;
  uVar13 = *(undefined8 *)&param_2->AngularImpulse;
  uVar14 = *(undefined8 *)&(param_2->AngularImpulse).field_0x8;
  uVar15 = *(undefined8 *)&(param_2->AngularImpulse).field_0x10;
  uVar16 = *(undefined8 *)&param_2->LinearViolation;
  uVar2 = *(undefined8 *)&param_2->ResimType;
  uVar18 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->ConstraintStates).AllocatorInstance.Data;
  lVar19 = (longlong)param_1 * 0x58;
  pFVar1 = pFVar3 + lVar19;
  *(int *)pFVar1 = iVar5;
  *(int *)(pFVar1 + 4) = iVar6;
  *(int *)(pFVar1 + 8) = iVar7;
  *(int *)(pFVar1 + 0xc) = iVar8;
  *(undefined8 *)(pFVar3 + lVar19 + 0x10) = uVar9;
  *(undefined8 *)(pFVar3 + lVar19 + 0x10 + 8) = uVar10;
  *(undefined8 *)(pFVar3 + lVar19 + 0x20) = uVar11;
  *(undefined8 *)(pFVar3 + lVar19 + 0x20 + 8) = uVar12;
  *(undefined8 *)(pFVar3 + lVar19 + 0x30) = uVar13;
  *(undefined8 *)(pFVar3 + lVar19 + 0x30 + 8) = uVar14;
  *(undefined8 *)(pFVar3 + lVar19 + 0x40) = uVar15;
  *(undefined8 *)(pFVar3 + lVar19 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar3 + lVar19 + 0x50) = uVar2;
  return;
}

// SetConstraintSyncState @ 143c73bf0

void __thiscall
Chaos::FPBDJointConstraints::SetConstraintSyncState
          (FPBDJointConstraints *this,int param_1,ESyncState param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x51] =
       (FScriptContainerElement)param_2;
  return;
}

// SetDriveTargetChanged @ 143c73e10

void __thiscall
Chaos::FPBDJointConstraints::SetDriveTargetChanged
          (FPBDJointConstraints *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintStates).AllocatorInstance.Data[(longlong)param_1 * 0x58 + 0x14] =
       (FScriptContainerElement)param_2;
  return;
}

// SetLinearDrivePositionTarget @ 143c74260

void __thiscall
Chaos::FPBDJointConstraints::SetLinearDrivePositionTarget
          (FPBDJointConstraints *this,int param_1,TVector<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)param_2;
  uVar6 = *(undefined4 *)&param_2->field_0x4;
  uVar7 = *(undefined4 *)&param_2->field_0x8;
  uVar8 = *(undefined4 *)&param_2->field_0xc;
  uVar2 = *(undefined8 *)&param_2->field_0x10;
  uVar10 = 0;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->ConstraintSettings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 800 + 0x1b0;
  *(undefined4 *)pFVar1 = uVar5;
  *(undefined4 *)(pFVar1 + 4) = uVar6;
  *(undefined4 *)(pFVar1 + 8) = uVar7;
  *(undefined4 *)(pFVar1 + 0xc) = uVar8;
  *(undefined8 *)(pFVar3 + (longlong)param_1 * 800 + 0x1c0) = uVar2;
  return;
}

// SetSettings @ 143c76000

void __thiscall
Chaos::FPBDJointConstraints::SetSettings
          (FPBDJointConstraints *this,FPBDJointSolverSettings *param_1)

{
  (this->Settings).SwingTwistAngleTolerance = param_1->SwingTwistAngleTolerance;
  (this->Settings).PositionTolerance = param_1->PositionTolerance;
  (this->Settings).AngleTolerance = param_1->AngleTolerance;
  (this->Settings).MinParentMassRatio = param_1->MinParentMassRatio;
  (this->Settings).MaxInertiaRatio = param_1->MaxInertiaRatio;
  (this->Settings).MinSolverStiffness = param_1->MinSolverStiffness;
  (this->Settings).MaxSolverStiffness = param_1->MaxSolverStiffness;
  (this->Settings).NumIterationsAtMaxSolverStiffness = param_1->NumIterationsAtMaxSolverStiffness;
  (this->Settings).NumShockPropagationIterations = param_1->NumShockPropagationIterations;
  (this->Settings).bUseLinearSolver = param_1->bUseLinearSolver;
  (this->Settings).bUseSimd = param_1->bUseSimd;
  (this->Settings).bSortEnabled = param_1->bSortEnabled;
  (this->Settings).bSolvePositionLast = param_1->bSolvePositionLast;
  (this->Settings).bUsePositionBasedDrives = param_1->bUsePositionBasedDrives;
  (this->Settings).bEnableTwistLimits = param_1->bEnableTwistLimits;
  (this->Settings).bEnableSwingLimits = param_1->bEnableSwingLimits;
  (this->Settings).bEnableDrives = param_1->bEnableDrives;
  (this->Settings).LinearStiffnessOverride = param_1->LinearStiffnessOverride;
  (this->Settings).TwistStiffnessOverride = param_1->TwistStiffnessOverride;
  (this->Settings).SwingStiffnessOverride = param_1->SwingStiffnessOverride;
  (this->Settings).LinearProjectionOverride = param_1->LinearProjectionOverride;
  (this->Settings).AngularProjectionOverride = param_1->AngularProjectionOverride;
  (this->Settings).ShockPropagationOverride = param_1->ShockPropagationOverride;
  (this->Settings).LinearDriveStiffnessOverride = param_1->LinearDriveStiffnessOverride;
  (this->Settings).LinearDriveDampingOverride = param_1->LinearDriveDampingOverride;
  (this->Settings).AngularDriveStiffnessOverride = param_1->AngularDriveStiffnessOverride;
  (this->Settings).AngularDriveDampingOverride = param_1->AngularDriveDampingOverride;
  (this->Settings).SoftLinearStiffnessOverride = param_1->SoftLinearStiffnessOverride;
  (this->Settings).SoftLinearDampingOverride = param_1->SoftLinearDampingOverride;
  (this->Settings).SoftTwistStiffnessOverride = param_1->SoftTwistStiffnessOverride;
  (this->Settings).SoftTwistDampingOverride = param_1->SoftTwistDampingOverride;
  (this->Settings).SoftSwingStiffnessOverride = param_1->SoftSwingStiffnessOverride;
  (this->Settings).SoftSwingDampingOverride = param_1->SoftSwingDampingOverride;
  return;
}

// SetSolverResults @ 143c76150

void __thiscall
Chaos::FPBDJointConstraints::SetSolverResults
          (FPBDJointConstraints *this,int param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,float param_4,float param_5,bool param_6,bool param_7,
          FSolverBody *param_8,FSolverBody *param_9)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar5 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)&param_2->field_0x8;
  uVar2 = *(undefined8 *)&param_2->field_0x10;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->ConstraintStates).AllocatorInstance.Data;
  lVar9 = (longlong)param_1 * 0x58;
  pFVar1 = pFVar3 + lVar9 + 0x18;
  *(undefined8 *)pFVar1 = uVar5;
  *(undefined8 *)(pFVar1 + 8) = uVar6;
  *(undefined8 *)(pFVar3 + lVar9 + 0x28) = uVar2;
  uVar5 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)&param_3->field_0x8;
  uVar2 = *(undefined8 *)&param_3->field_0x10;
  uVar8 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->ConstraintStates).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar9 + 0x30;
  *(undefined8 *)pFVar1 = uVar5;
  *(undefined8 *)(pFVar1 + 8) = uVar6;
  *(undefined8 *)(pFVar3 + lVar9 + 0x40) = uVar2;
  if (param_6) {
    BreakConstraint(this,param_1);
  }
  uVar8 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->ConstraintStates).AllocatorInstance.Data[lVar9 + 0x13] = (FScriptContainerElement)param_7;
  uVar8 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(float *)((this->ConstraintStates).AllocatorInstance.Data + lVar9 + 0x48) = param_4;
  uVar8 = 0;
  if (param_1 < (this->ConstraintStates).ArrayNum) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(float *)((this->ConstraintStates).AllocatorInstance.Data + lVar9 + 0x4c) = param_5;
  if ((param_8 != (FSolverBody *)0x0) && (param_9 != (FSolverBody *)0x0)) {
    ApplyPlasticityLimits(this,param_1,param_8,param_9);
  }
  return;
}

// SetUseLinearSolver @ 143c76450

void __thiscall
Chaos::FPBDJointConstraints::SetUseLinearSolver(FPBDJointConstraints *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  (this->ConstraintSettings).AllocatorInstance.Data[(longlong)param_1 * 800 + 0xfc] =
       (FScriptContainerElement)param_2;
  return;
}

// ShouldBeInGraph @ 143c764f0

bool __thiscall Chaos::FPBDJointConstraints::ShouldBeInGraph(FPBDJointConstraints *this,int param_1)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  bool *pbVar6;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  FGenericParticleHandleImp local_res18;
  FGenericParticleHandleImp local_res20;
  
  bVar3 = IsConstraintEnabled(this,param_1);
  if (bVar3) {
    uVar5 = 0;
    if (param_1 < (this->ConstraintParticles).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar5 = 0;
    if (param_1 < (this->ConstraintParticles).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    pTVar7 = *(TGeometryParticleHandleImp<double,3,1> **)
              ((this->ConstraintParticles).AllocatorInstance.Data + (longlong)param_1 * 0x10);
    local_res18.MHandle = pTVar7;
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)
              ((this->ConstraintParticles).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
    if ((pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
        this_00 = pTVar7;
      }
      local_res20.MHandle = pTVar1;
      if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (pbVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), *pbVar6 != false))
      {
        return false;
      }
      pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
        pTVar7 = pTVar1;
      }
      if ((pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (pbVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar7), *pbVar6 != false))
      {
        return false;
      }
      bVar3 = FGenericParticleHandleImp::IsDynamic(&local_res18);
      if ((!bVar3) && (bVar3 = FGenericParticleHandleImp::IsDynamic(&local_res20), !bVar3)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// SortConstraints @ 143c76690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDJointConstraints::SortConstraints(FPBDJointConstraints *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FIdentityFunctor FVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FIdentityFunctor FVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_Sort> FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  ulong64 uVar19;
  FName FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  longlong local_res20;
  int local_c8 [2];
  ForAnyElementType local_c0;
  uint local_b8;
  uint local_b4 [3];
  ForAnyElementType local_a8;
  undefined8 uStack_a0;
  ForAnyElementType local_98;
  undefined8 uStack_90;
  ForAnyElementType local_88;
  undefined8 uStack_80;
  ForAnyElementType local_78;
  undefined8 uStack_70;
  FName local_68;
  FPBDJointConstraints *local_58;
  FName local_50 [2];
  
  uVar24 = 0;
  FVar15 = StatPtr_STAT_Joints_Sort;
  if (StatPtr_STAT_Joints_Sort == (FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_Sort>)0x0) {
    pFVar14 = ::FName::FName(local_50,"STAT_Joints_Sort");
    FVar15 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_Sort>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Joints_Sort,*pFVar14,
                        L"Joints::Sort","STATGROUP_ChaosJoint","STATCAT_Advanced",L"ChaosJoint",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar7 = false;
  FVar6 = (FIdentityFunctor)0x0;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar10 = false;
  FVar9 = (FIdentityFunctor)0x0;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      FVar6 = (FIdentityFunctor)0x1;
      bVar10 = false;
      FVar9 = (FIdentityFunctor)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_res18.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDJointConstraints.cpp"
                   ,0x2e6);
        bVar7 = true;
        FVar6 = (FIdentityFunctor)0x1;
        bVar10 = true;
        FVar9 = (FIdentityFunctor)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar10 = true;
      goto LAB_143c767d3;
    }
  }
  bVar7 = bVar10;
  FVar6 = FVar9;
  bVar10 = false;
  FVar20 = local_68;
LAB_143c767d3:
  uVar17 = (this->Handles).ArrayNum;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_b4[0] = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&local_c0,0,(int *)local_b4);
  }
  local_c8[0] = 0;
  if (0 < (this->ConstraintParticles).ArrayNum) {
    do {
      if (((local_c0.Data <= (FScriptContainerElement *)local_c8) &&
          ((FScriptContainerElement *)local_c8 < local_c0.Data + (longlong)(int)local_b4[0] * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_b8 == local_b4[0]) {
        local_b8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_c0,(int *)local_b4);
      }
      uVar17 = local_b8 + 1;
      *(int *)(local_c0.Data + (longlong)(int)local_b8 * 4) = local_c8[0];
      local_c8[0] = local_c8[0] + 1;
      local_b8 = uVar17;
    } while (local_c8[0] < (this->ConstraintParticles).ArrayNum);
  }
  local_58 = this;
  AlgoImpl::
  StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,_Chaos::FPBDJointConstraints::SortConstraints_::__l2::<lambda_1>_>_>
            ((int *)local_c0.Data,local_b8,FVar6,(<lambda_1> *)&local_58);
  uVar19 = (ulong64)local_b8;
  local_78.Data = (FScriptContainerElement *)0x0;
  uStack_70 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  uStack_90 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  uStack_a0 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  uStack_80 = 0;
  if ((int)local_b8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  uStack_90._4_4_ = 0;
  uStack_90._0_4_ = 0;
  if (0 < (int)local_b8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_b8,&local_78,0,(int *)((longlong)&uStack_70 + 4));
    uVar19 = (ulong64)local_b8;
  }
  iVar13 = (int)uVar19;
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  if (uStack_90._4_4_ < iVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (800,0x10,iVar13,&local_98,(int)uStack_90,(int *)((longlong)&uStack_90 + 4));
    uVar19 = (ulong64)local_b8;
  }
  iVar13 = (int)uVar19;
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  if (uStack_a0._4_4_ < iVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar13,&local_a8,(int)uStack_a0,(int *)((longlong)&uStack_a0 + 4));
    uVar19 = (ulong64)local_b8;
  }
  iVar13 = (int)uVar19;
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  if (uStack_80._4_4_ < iVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar13,&local_88,(int)uStack_80,(int *)((longlong)&uStack_80 + 4));
    uVar19 = (ulong64)local_b8;
  }
  if (0 < (int)uVar19) {
    local_res20 = 0;
    do {
      lVar23 = local_res20;
      uVar17 = 0;
      if ((int)uVar24 < (int)uVar19) {
        uVar17 = ~uVar24 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar17 = *(uint *)(local_c0.Data + lVar23);
      lVar23 = (longlong)(int)uVar17;
      uVar25 = ~uVar17 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar17 < (this->Handles).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar21 = (this->Handles).AllocatorInstance.Data + lVar23 * 8;
      if (((local_78.Data <= pFVar21) && (pFVar21 < local_78.Data + (longlong)uStack_70._4_4_ * 8))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)uStack_70 == uStack_70._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_78,(int *)((longlong)&uStack_70 + 4));
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar13);
      }
      lVar18 = (longlong)(int)uStack_70;
      uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + 1);
      *(undefined8 *)(local_78.Data + lVar18 * 8) = *(undefined8 *)pFVar21;
      uVar12 = 0;
      if ((int)uVar17 < (this->ConstraintSettings).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar21 = (this->ConstraintSettings).AllocatorInstance.Data + lVar23 * 800;
      if (((local_98.Data <= pFVar21) && (pFVar21 < local_98.Data + (longlong)uStack_90._4_4_ * 800)
          ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar13 = (int)uStack_90;
      if ((int)uStack_90 == uStack_90._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (800,0x10,&local_98,(int *)((longlong)&uStack_90 + 4));
      }
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar13 + 1);
      lVar18 = 6;
      pFVar8 = local_98.Data + (longlong)iVar13 * 800;
      do {
        pFVar22 = pFVar21;
        pFVar16 = pFVar8;
        uVar2 = *(undefined8 *)(pFVar22 + 8);
        *(undefined8 *)pFVar16 = *(undefined8 *)pFVar22;
        *(undefined8 *)(pFVar16 + 8) = uVar2;
        uVar2 = *(undefined8 *)(pFVar22 + 0x18);
        *(undefined8 *)(pFVar16 + 0x10) = *(undefined8 *)(pFVar22 + 0x10);
        *(undefined8 *)(pFVar16 + 0x18) = uVar2;
        uVar2 = *(undefined8 *)(pFVar22 + 0x28);
        *(undefined8 *)(pFVar16 + 0x20) = *(undefined8 *)(pFVar22 + 0x20);
        *(undefined8 *)(pFVar16 + 0x28) = uVar2;
        uVar2 = *(undefined8 *)(pFVar22 + 0x38);
        *(undefined8 *)(pFVar16 + 0x30) = *(undefined8 *)(pFVar22 + 0x30);
        *(undefined8 *)(pFVar16 + 0x38) = uVar2;
        uVar2 = *(undefined8 *)(pFVar22 + 0x48);
        *(undefined8 *)(pFVar16 + 0x40) = *(undefined8 *)(pFVar22 + 0x40);
        *(undefined8 *)(pFVar16 + 0x48) = uVar2;
        uVar2 = *(undefined8 *)(pFVar22 + 0x58);
        *(undefined8 *)(pFVar16 + 0x50) = *(undefined8 *)(pFVar22 + 0x50);
        *(undefined8 *)(pFVar16 + 0x58) = uVar2;
        uVar2 = *(undefined8 *)(pFVar22 + 0x68);
        *(undefined8 *)(pFVar16 + 0x60) = *(undefined8 *)(pFVar22 + 0x60);
        *(undefined8 *)(pFVar16 + 0x68) = uVar2;
        uVar2 = *(undefined8 *)(pFVar22 + 0x78);
        *(undefined8 *)(pFVar16 + 0x70) = *(undefined8 *)(pFVar22 + 0x70);
        *(undefined8 *)(pFVar16 + 0x78) = uVar2;
        lVar18 = lVar18 + -1;
        pFVar8 = pFVar16 + 0x80;
        pFVar21 = pFVar22 + 0x80;
      } while (lVar18 != 0);
      uVar2 = *(undefined8 *)(pFVar22 + 0x88);
      *(undefined8 *)(pFVar16 + 0x80) = *(undefined8 *)(pFVar22 + 0x80);
      *(undefined8 *)(pFVar16 + 0x88) = uVar2;
      uVar2 = *(undefined8 *)(pFVar22 + 0x98);
      *(undefined8 *)(pFVar16 + 0x90) = *(undefined8 *)(pFVar22 + 0x90);
      *(undefined8 *)(pFVar16 + 0x98) = uVar2;
      uVar12 = 0;
      if ((int)uVar17 < (this->ConstraintParticles).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar21 = (this->ConstraintParticles).AllocatorInstance.Data + lVar23 * 0x10;
      if (((local_a8.Data <= pFVar21) &&
          (pFVar21 < local_a8.Data + (longlong)uStack_a0._4_4_ * 0x10)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar13 = (int)uStack_a0;
      if ((int)uStack_a0 == uStack_a0._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_a8,(int *)((longlong)&uStack_a0 + 4));
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar13 + 1);
      uVar2 = *(undefined8 *)(pFVar21 + 8);
      *(undefined8 *)(local_a8.Data + (longlong)iVar13 * 0x10) = *(undefined8 *)pFVar21;
      *(undefined8 *)(local_a8.Data + (longlong)iVar13 * 0x10 + 8) = uVar2;
      uVar12 = 0;
      if ((int)uVar17 < (this->ConstraintStates).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar21 = (this->ConstraintStates).AllocatorInstance.Data + lVar23 * 0x58;
      if (((local_88.Data <= pFVar21) &&
          (pFVar21 < local_88.Data + (longlong)uStack_80._4_4_ * 0x58)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar13 = (int)uStack_80;
      if ((int)uStack_80 == uStack_80._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_88,(int *)((longlong)&uStack_80 + 4));
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar13 + 1);
      uVar2 = *(undefined8 *)(pFVar21 + 8);
      lVar18 = (longlong)iVar13 * 0x58;
      *(undefined8 *)(local_88.Data + lVar18) = *(undefined8 *)pFVar21;
      *(undefined8 *)(local_88.Data + lVar18 + 8) = uVar2;
      uVar2 = *(undefined8 *)(pFVar21 + 0x18);
      *(undefined8 *)(local_88.Data + lVar18 + 0x10) = *(undefined8 *)(pFVar21 + 0x10);
      *(undefined8 *)(local_88.Data + lVar18 + 0x10 + 8) = uVar2;
      uVar2 = *(undefined8 *)(pFVar21 + 0x28);
      *(undefined8 *)(local_88.Data + lVar18 + 0x20) = *(undefined8 *)(pFVar21 + 0x20);
      *(undefined8 *)(local_88.Data + lVar18 + 0x20 + 8) = uVar2;
      uVar2 = *(undefined8 *)(pFVar21 + 0x38);
      *(undefined8 *)(local_88.Data + lVar18 + 0x30) = *(undefined8 *)(pFVar21 + 0x30);
      *(undefined8 *)(local_88.Data + lVar18 + 0x30 + 8) = uVar2;
      uVar2 = *(undefined8 *)(pFVar21 + 0x48);
      *(undefined8 *)(local_88.Data + lVar18 + 0x40) = *(undefined8 *)(pFVar21 + 0x40);
      *(undefined8 *)(local_88.Data + lVar18 + 0x40 + 8) = uVar2;
      *(undefined8 *)(local_88.Data + lVar18 + 0x50) = *(undefined8 *)(pFVar21 + 0x50);
      uVar12 = 0;
      if ((int)uVar17 < (this->Handles).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res20 = local_res20 + 4;
      *(uint *)(*(longlong *)((this->Handles).AllocatorInstance.Data + lVar23 * 8) + 0x18) = uVar24;
      uVar24 = uVar24 + 1;
      uVar19 = (ulong64)local_b8;
    } while ((int)uVar24 < (int)local_b8);
  }
  pFVar8 = (this->Handles).AllocatorInstance.Data;
  uVar3._0_4_ = (this->Handles).ArrayNum;
  uVar3._4_4_ = (this->Handles).ArrayMax;
  (this->Handles).AllocatorInstance.Data = local_78.Data;
  (this->Handles).ArrayNum = (int)uStack_70;
  (this->Handles).ArrayMax = uStack_70._4_4_;
  pFVar16 = (this->ConstraintSettings).AllocatorInstance.Data;
  uVar4._0_4_ = (this->ConstraintSettings).ArrayNum;
  uVar4._4_4_ = (this->ConstraintSettings).ArrayMax;
  (this->ConstraintSettings).AllocatorInstance.Data = local_98.Data;
  (this->ConstraintSettings).ArrayNum = (int)uStack_90;
  (this->ConstraintSettings).ArrayMax = uStack_90._4_4_;
  pFVar22 = (this->ConstraintParticles).AllocatorInstance.Data;
  uVar5._0_4_ = (this->ConstraintParticles).ArrayNum;
  uVar5._4_4_ = (this->ConstraintParticles).ArrayMax;
  (this->ConstraintParticles).AllocatorInstance.Data = local_a8.Data;
  (this->ConstraintParticles).ArrayNum = (int)uStack_a0;
  (this->ConstraintParticles).ArrayMax = uStack_a0._4_4_;
  pFVar21 = (this->ConstraintStates).AllocatorInstance.Data;
  uVar2._0_4_ = (this->ConstraintStates).ArrayNum;
  uVar2._4_4_ = (this->ConstraintStates).ArrayMax;
  (this->ConstraintStates).AllocatorInstance.Data = local_88.Data;
  (this->ConstraintStates).ArrayNum = (int)uStack_80;
  (this->ConstraintStates).ArrayMax = uStack_80._4_4_;
  local_a8.Data = pFVar22;
  uStack_a0 = uVar5;
  local_98.Data = pFVar16;
  uStack_90 = uVar4;
  local_88.Data = pFVar21;
  uStack_80 = uVar2;
  local_78.Data = pFVar8;
  uStack_70 = uVar3;
  if (pFVar21 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar21);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if ((bool)FVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// UnprepareTick @ 143c79190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDJointConstraints::UnprepareTick(FPBDJointConstraints *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_UnprepareTick> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_Joints_UnprepareTick;
  if (StatPtr_STAT_Joints_UnprepareTick ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_UnprepareTick>)0x0) {
    pFVar4 = ::FName::FName(local_res18,"STAT_Joints_UnprepareTick");
    FVar5 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Joints_UnprepareTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Joints_UnprepareTick,*pFVar4,
                       L"Joints::UnprepareTick","STATGROUP_ChaosJoint","STATCAT_Advanced",
                       L"ChaosJoint",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar7.Value;
        local_res10.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDJointConstraints.cpp"
                   ,0x403);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar7.Value;
      local_res10.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res10);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// operator() @ 1504a6730

bool __thiscall
`Chaos::FPBDJointConstraints::ApplyPlasticityLimits'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2676959549734255484>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2676959549734255484>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

