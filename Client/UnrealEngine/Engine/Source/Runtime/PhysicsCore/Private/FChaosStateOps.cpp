// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 18

// AddAngularImpulseInRadians @ 1441a36b0

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddAngularImpulseInRadians
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2)

{
  TVector<double,3> *pTVar1;
  undefined1 local_res8 [8];
  undefined1 local_38 [24];
  double local_20;
  double local_18;
  double local_10;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  pTVar1 = `Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AngularImpulse'::__l2::<lambda_1>::
           operator()<Chaos::TGeometryParticle<double,3>_const_>
                     (local_res8,(TVector<double,3> *)local_38,
                      *(TGeometryParticle<double,3> **)&param_1->field_0x40);
  local_20 = (param_2->field0_0x0)._s_0.X + *(double *)pTVar1;
  local_10 = (param_2->field0_0x0)._s_0.Z + *(double *)&pTVar1->field_0x10;
  local_38._0_8_ = &local_20;
  local_18 = (param_2->field0_0x0)._s_0.Y + *(double *)&pTVar1->field_0x8;
  local_38._8_2_ = 0x100;
  local_38._16_8_ = param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  `Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetAngularImpulse'::__l2::<lambda_1>::
  operator()<Chaos::TGeometryParticle<double,3>_>
            (local_38,*(TGeometryParticle<double,3> **)&param_1->field_0x40);
  return;
}

// AddAngularImpulseInRadians @ 1441a3760

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddAngularImpulseInRadians
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2)

{
  FRewindData *this;
  TVector<double,3> *pTVar1;
  undefined1 local_res8 [8];
  undefined1 local_38 [24];
  double local_20;
  double local_18;
  double local_10;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pTVar1 = `Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::AngularImpulse'::__l2::<lambda_1>::
           operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_const_>
                     (local_res8,(TVector<double,3> *)local_38,
                      *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
  local_20 = (param_2->field0_0x0)._s_0.X + *(double *)pTVar1;
  local_10 = (param_2->field0_0x0)._s_0.Z + *(double *)&pTVar1->field_0x10;
  local_38._0_8_ = &local_20;
  local_18 = (param_2->field0_0x0)._s_0.Y + *(double *)&pTVar1->field_0x8;
  local_38._8_2_ = 0x100;
  local_38._16_8_ = param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  this = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
  if (this != (FRewindData *)0x0) {
    Chaos::FRewindData::MarkDirtyFromPT
              (this,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
  }
  `Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::SetAngularImpulse'::__l2::<lambda_1>::
  operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (local_38,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
  return;
}

// AddForce @ 1441a4040

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddForce
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2,bool param_3,bool param_4)

{
  double dVar1;
  EObjectStateType EVar2;
  IPhysicsProxyBase *pIVar3;
  TPBDRigidParticle<double,3> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_38 [16];
  double local_28;
  
  uVar5 = 0;
  uVar6 = 0;
  if ((((param_2->field0_0x0)._s_0.X != 0.0) || ((param_2->field0_0x0)._s_0.Y != 0.0)) ||
     ((param_2->field0_0x0)._s_0.Z != 0.0)) {
    Chaos::FRigidBodyHandle_External::SetObjectState(param_1,Dynamic,true,true);
  }
  if (param_4) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    pTVar4 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar4 = (TPBDRigidParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar1 = (pTVar4->MMassProps).Property.MM;
      uVar5 = SUB84(dVar1,0);
      uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    local_28 = (double)CONCAT44(uVar6,uVar5) * (param_2->field0_0x0)._s_0.Z;
    dVar1 = (double)CONCAT44(uVar6,uVar5) * (param_2->field0_0x0)._s_0.Y;
    local_38._8_4_ = SUB84(dVar1,0);
    local_38._0_8_ = (double)CONCAT44(uVar6,uVar5) * (param_2->field0_0x0)._s_0.X;
    local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    pTVar4 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar4 = (TPBDRigidParticle<double,3> *)0x0;
    }
    if (pTVar4 == (TPBDRigidParticle<double,3> *)0x0) {
      return;
    }
    EVar2 = (pTVar4->MMiscData).Property.MObjectState;
  }
  else {
    local_38 = *(undefined1 (*) [16])&param_2->field0_0x0;
    local_28 = (param_2->field0_0x0)._s_0.Z;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    pTVar4 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar4 = (TPBDRigidParticle<double,3> *)0x0;
    }
    if (pTVar4 == (TPBDRigidParticle<double,3> *)0x0) {
      return;
    }
    EVar2 = (pTVar4->MMiscData).Property.MObjectState;
  }
  if (EVar2 == Sleeping) {
    pTVar4->MWakeEvent = Awake;
  }
  else if (EVar2 != Dynamic) {
    return;
  }
  pIVar3 = *(IPhysicsProxyBase **)&pTVar4->field_0x10;
  (pTVar4->MMiscData).Property.MObjectState = Dynamic;
  *(uint *)&pTVar4->field_0x9c = *(uint *)&pTVar4->field_0x9c | 8;
  if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  Chaos::TPBDRigidParticle<double,3>::AddForce(pTVar4,(TVector<double,3> *)local_38,true);
  return;
}

// AddForce @ 1441a41a0

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddForce
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2,bool param_3,bool param_4)

{
  FRewindData *pFVar1;
  double dVar2;
  EObjectStateType EVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_38 [16];
  double local_28;
  
  uVar5 = 0;
  uVar6 = 0;
  if ((((param_2->field0_0x0)._s_0.X != 0.0) || ((param_2->field0_0x0)._s_0.Y != 0.0)) ||
     ((param_2->field0_0x0)._s_0.Z != 0.0)) {
    Chaos::FRigidBodyHandle_Internal::SetObjectState(param_1,Dynamic,true,true);
  }
  if (param_4) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
    pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
      pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
    }
    if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      dVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(pTVar4);
      uVar5 = SUB84(dVar2,0);
      uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    local_28 = (double)CONCAT44(uVar6,uVar5) * (param_2->field0_0x0)._s_0.Z;
    dVar2 = (double)CONCAT44(uVar6,uVar5) * (param_2->field0_0x0)._s_0.Y;
    local_38._8_4_ = SUB84(dVar2,0);
    local_38._0_8_ = (double)CONCAT44(uVar6,uVar5) * (param_2->field0_0x0)._s_0.X;
    local_38._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
    pFVar1 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
    if (pFVar1 != (FRewindData *)0x0) {
      Chaos::FRewindData::MarkDirtyFromPT
                (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
    }
  }
  else {
    local_38 = *(undefined1 (*) [16])&param_2->field0_0x0;
    local_28 = (param_2->field0_0x0)._s_0.Z;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
    pFVar1 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
    if (pFVar1 != (FRewindData *)0x0) {
      Chaos::FRewindData::MarkDirtyFromPT
                (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
    }
  }
  pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if ((pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
     ((EVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar4), EVar3 == Sleeping
      || (EVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar4),
         EVar3 == Dynamic)))) {
    Chaos::SetObjectStateHelper((IPhysicsProxyBase *)param_1,pTVar4,Dynamic,true,true);
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddForce
              (pTVar4,(TVector<double,3> *)local_38,true);
  }
  return;
}

// AddForceAtPosition @ 1441a4440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddForceAtPosition
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4,bool param_5)

{
  EObjectStateType EVar1;
  longlong lVar2;
  IPhysicsProxyBase *pIVar3;
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
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  TPBDRigidParticle<double,3> *pTVar17;
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
  undefined8 in_XMM3_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double local_b0;
  
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
  GetCoMWorldPosition<Chaos::FRigidBodyHandle_External_*>((TVector<double,3> *)&local_f0,param_1);
  Chaos::FRigidBodyHandle_External::SetObjectState(param_1,Dynamic,true,true);
  if (!param_5) {
    auVar27 = *(undefined1 (*) [16])&param_2->field0_0x0;
    dVar6 = (param_2->field0_0x0)._s_0.Z;
    local_e8 = (param_3->field0_0x0)._s_0.Y - local_e8;
    auVar16._4_8_ = in_XMM3_Qb;
    auVar16._0_4_ = auVar27._4_4_;
    auVar18._0_8_ = auVar16._0_8_ << 0x20;
    auVar18._8_4_ = auVar27._8_4_;
    auVar18._12_4_ = auVar27._12_4_;
    local_e0 = (param_3->field0_0x0)._s_0.Z - local_e0;
    local_f0 = (param_3->field0_0x0)._s_0.X - local_f0;
    local_108 = dVar6 * local_e8 - auVar18._8_8_ * local_e0;
    local_c8 = (param_2->field0_0x0)._s_0.Z;
    local_100 = auVar27._0_8_ * local_e0 - dVar6 * local_f0;
    local_f8 = auVar18._8_8_ * local_f0 - auVar27._0_8_ * local_e8;
    local_d8 = *(undefined1 (*) [16])&param_2->field0_0x0;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AddForce
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1,(TVector<double,3> *)local_d8,
               true);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AddTorque
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1,(TVector<double,3> *)&local_108
               ,true);
    return;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar2 = *(longlong *)&param_1->field_0x40;
  dVar11 = (double)(float)*(undefined8 *)(lVar2 + 0x48);
  dVar12 = (double)(float)((ulonglong)*(undefined8 *)(lVar2 + 0x48) >> 0x20);
  dVar10 = (double)*(float *)(lVar2 + 0x40);
  dVar9 = (double)*(float *)(lVar2 + 0x44);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar2 = *(longlong *)&param_1->field_0x40;
  auVar27 = *(undefined1 (*) [16])&param_3->field0_0x0;
  auVar32._0_8_ = (param_3->field0_0x0)._s_0.Z * ___xmm_00000000000000003ff0000000000000;
  auVar32._8_8_ = _UNK_150689518 * 0.0;
  dVar42 = auVar27._8_8_;
  auVar18 = blendpd(auVar27,auVar32,2);
  auVar38._8_4_ = SUB84(dVar9,0);
  auVar38._0_8_ = dVar10;
  auVar38._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar30._8_4_ = SUB84(dVar12,0);
  auVar30._0_8_ = dVar11;
  auVar30._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar39 = blendpd(auVar38,auVar30,2);
  auVar40._0_8_ = dVar42 * dVar10 - auVar27._0_8_ * dVar9;
  auVar40._8_8_ = auVar32._0_8_ * dVar9 - dVar42 * dVar11;
  dVar6 = auVar39._0_8_;
  dVar8 = auVar39._8_8_;
  auVar19._0_8_ = auVar18._0_8_ * dVar11 - dVar6 * auVar32._0_8_;
  auVar19._8_8_ = auVar18._8_8_ * dVar12 - dVar8 * auVar32._8_8_;
  auVar18 = blendpd(auVar40,auVar19,2);
  dVar13 = auVar40._8_8_ + auVar40._8_8_;
  dVar14 = auVar19._0_8_ + auVar19._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar14 >> 0x20);
  auVar41._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar41._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar28._8_4_ = SUB84(dVar14,0);
  auVar28._0_8_ = dVar13;
  auVar28._12_4_ = uVar36;
  auVar23._8_4_ = SUB84(dVar14,0);
  auVar23._0_8_ = dVar13;
  auVar23._12_4_ = uVar36;
  auVar18 = blendpd(auVar23,auVar41,2);
  auVar29._0_8_ = auVar28._8_8_ * dVar10 - dVar13 * dVar9;
  auVar29._8_8_ = auVar41._0_8_ * dVar9 - dVar14 * dVar11;
  dVar4 = (param_2->field0_0x0)._s_0.Z * ___xmm_00000000000000003ff0000000000000;
  dVar5 = _UNK_150689518 * 0.0;
  auVar24._0_8_ = auVar18._0_8_ * dVar11 - auVar41._0_8_ * dVar6;
  auVar24._8_8_ = auVar18._8_8_ * dVar12 - auVar41._8_8_ * dVar8;
  auVar30 = blendpd(auVar29,auVar24,2);
  auVar18 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar35 = auVar18._8_8_;
  auVar39._8_4_ = SUB84(dVar5,0);
  auVar39._0_8_ = dVar4;
  auVar39._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar39 = blendpd(auVar18,auVar39,2);
  auVar33._0_8_ = dVar35 * dVar10 - auVar18._0_8_ * dVar9;
  auVar33._8_8_ = dVar4 * dVar9 - dVar35 * dVar11;
  local_e0 = (auVar41._0_8_ * dVar12 + auVar32._0_8_ + auVar30._0_8_ + *(double *)(lVar2 + 0x30)) -
             local_e0;
  auVar20._0_8_ = auVar39._0_8_ * dVar11 - dVar4 * dVar6;
  auVar20._8_8_ = auVar39._8_8_ * dVar12 - dVar5 * dVar8;
  auVar39 = blendpd(auVar33,auVar20,2);
  dVar5 = auVar33._8_8_ + auVar33._8_8_;
  dVar7 = auVar20._0_8_ + auVar20._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar34._0_8_ = auVar39._0_8_ + auVar39._0_8_;
  auVar34._8_8_ = auVar39._8_8_ + auVar39._8_8_;
  auVar25._8_4_ = SUB84(dVar7,0);
  auVar25._0_8_ = dVar5;
  auVar25._12_4_ = uVar36;
  auVar21._8_4_ = SUB84(dVar7,0);
  auVar21._0_8_ = dVar5;
  auVar21._12_4_ = uVar36;
  auVar39 = blendpd(auVar21,auVar34,2);
  auVar26._0_8_ = auVar25._8_8_ * dVar10 - dVar5 * dVar9;
  auVar26._8_8_ = auVar34._0_8_ * dVar9 - dVar7 * dVar11;
  auVar22._0_8_ = auVar39._0_8_ * dVar11 - auVar34._0_8_ * dVar6;
  auVar22._8_8_ = auVar39._8_8_ * dVar12 - auVar34._8_8_ * dVar8;
  dVar6 = dVar5 * dVar12 + auVar18._0_8_ + auVar26._8_8_;
  dVar8 = dVar7 * dVar12 + dVar35 + auVar22._0_8_;
  uVar36 = SUB84(dVar8,0);
  uVar37 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar15._4_8_ = dVar35;
  auVar15._0_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar31._0_8_ = auVar15._0_8_ << 0x20;
  auVar31._8_4_ = uVar36;
  auVar31._12_4_ = uVar37;
  local_f0 = (dVar13 * dVar12 + auVar27._0_8_ + auVar29._8_8_ + *(double *)(lVar2 + 0x20)) -
             local_f0;
  local_e8 = (dVar14 * dVar12 + dVar42 + auVar24._0_8_ + *(double *)(lVar2 + 0x28)) - local_e8;
  auVar27 = blendpd(auVar26,auVar22,2);
  local_c8 = auVar34._0_8_ * dVar12 + dVar4 + auVar27._0_8_;
  local_108 = local_e8 * local_c8 - local_e0 * auVar31._8_8_;
  local_f8 = local_f0 * auVar31._8_8_ - local_e8 * dVar6;
  local_d8._8_4_ = uVar36;
  local_d8._0_8_ = dVar6;
  local_d8._12_4_ = uVar37;
  local_100 = local_e0 * dVar6 - local_f0 * local_c8;
  local_b0 = local_c8;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  pTVar17 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
  if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
    pTVar17 = (TPBDRigidParticle<double,3> *)0x0;
  }
  if (pTVar17 != (TPBDRigidParticle<double,3> *)0x0) {
    EVar1 = (pTVar17->MMiscData).Property.MObjectState;
    if (EVar1 == Sleeping) {
      pTVar17->MWakeEvent = Awake;
    }
    else if (EVar1 != Dynamic) goto LAB_1441a47c7;
    pIVar3 = *(IPhysicsProxyBase **)&pTVar17->field_0x10;
    (pTVar17->MMiscData).Property.MObjectState = Dynamic;
    *(uint *)&pTVar17->field_0x9c = *(uint *)&pTVar17->field_0x9c | 8;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    Chaos::TPBDRigidParticle<double,3>::AddForce(pTVar17,(TVector<double,3> *)local_d8,true);
  }
LAB_1441a47c7:
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  pTVar17 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
  if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
    pTVar17 = (TPBDRigidParticle<double,3> *)0x0;
  }
  if (pTVar17 != (TPBDRigidParticle<double,3> *)0x0) {
    EVar1 = (pTVar17->MMiscData).Property.MObjectState;
    if (EVar1 == Sleeping) {
      pTVar17->MWakeEvent = Awake;
    }
    else if (EVar1 != Dynamic) {
      return;
    }
    pIVar3 = *(IPhysicsProxyBase **)&pTVar17->field_0x10;
    (pTVar17->MMiscData).Property.MObjectState = Dynamic;
    *(uint *)&pTVar17->field_0x9c = *(uint *)&pTVar17->field_0x9c | 8;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    Chaos::TPBDRigidParticle<double,3>::AddTorque(pTVar17,(TVector<double,3> *)&local_108,true);
  }
  return;
}

// AddForceAtPosition @ 1441a4910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddForceAtPosition
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4,bool param_5)

{
  FRewindData *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  EObjectStateType EVar10;
  TVector<double,3> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined8 in_XMM2_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined4 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_a8;
  
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
  GetCoMWorldPosition<Chaos::FRigidBodyHandle_Internal_*>((TVector<double,3> *)&local_110,param_1);
  Chaos::FRigidBodyHandle_Internal::SetObjectState(param_1,Dynamic,true,true);
  if (!param_5) {
    local_f8 = *(undefined1 (*) [16])&param_2->field0_0x0;
    local_e8 = (param_2->field0_0x0)._s_0.Z;
    auVar9._4_8_ = in_XMM2_Qb;
    auVar9._0_4_ = local_f8._4_4_;
    auVar15._0_8_ = auVar9._0_8_ << 0x20;
    auVar15._8_4_ = local_f8._8_4_;
    auVar15._12_4_ = local_f8._12_4_;
    local_100 = (param_3->field0_0x0)._s_0.Z - local_100;
    local_108 = (param_3->field0_0x0)._s_0.Y - local_108;
    local_110 = (param_3->field0_0x0)._s_0.X - local_110;
    local_128 = local_108 * local_e8 - local_100 * auVar15._8_8_;
    local_120 = local_100 * local_f8._0_8_ - local_110 * local_e8;
    local_118 = local_110 * auVar15._8_8_ - local_108 * local_f8._0_8_;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::AddForce
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1,(TVector<double,3> *)local_f8,
               true);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::AddTorque
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1,(TVector<double,3> *)&local_128
               ,true);
    return;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::GetR
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1,(TRotation<double,3> *)local_d8);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pTVar11 = Chaos::TParticles<double,3>::GetX
                      ((TParticles<double,3> *)**(undefined8 **)&param_1->field_0x48,
                       *(int *)(*(undefined8 **)&param_1->field_0x48 + 1));
  auVar15 = *(undefined1 (*) [16])&param_3->field0_0x0;
  dVar19 = (param_3->field0_0x0)._s_0.Z * ___xmm_00000000000000003ff0000000000000;
  dVar2 = _UNK_150689518 * 0.0;
  dVar13 = auVar15._8_8_;
  dVar6 = local_c8._8_8_;
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar19;
  auVar14._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar14 = blendpd(auVar15,auVar14,2);
  dVar5 = local_c8._0_8_;
  dVar3 = local_d8._0_8_;
  dVar4 = local_d8._8_8_;
  auVar42 = blendpd(local_d8,local_c8,2);
  auVar38._0_8_ = dVar13 * dVar3 - auVar15._0_8_ * dVar4;
  auVar38._8_8_ = dVar19 * dVar4 - dVar13 * dVar5;
  dVar41 = auVar42._0_8_;
  dVar43 = auVar42._8_8_;
  auVar26._8_4_ = SUB84(auVar38._8_8_,0);
  auVar26._0_8_ = auVar38._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
  auVar33._0_8_ = auVar14._0_8_ * dVar5 - dVar19 * dVar41;
  auVar33._8_8_ = auVar14._8_8_ * dVar6 - dVar2 * dVar43;
  auVar14 = blendpd(auVar38,auVar33,2);
  dVar25 = auVar26._8_8_ + auVar26._8_8_;
  dVar30 = auVar33._0_8_ + auVar33._0_8_;
  auVar39._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar39._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar14 = *(undefined1 (*) [16])&param_2->field0_0x0;
  auVar31._8_4_ = SUB84(dVar30,0);
  auVar31._0_8_ = dVar25;
  uVar24 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar31._12_4_ = uVar24;
  dVar2 = (param_2->field0_0x0)._s_0.Z * ___xmm_00000000000000003ff0000000000000;
  dVar23 = _UNK_150689518 * 0.0;
  auVar20._8_4_ = SUB84(dVar30,0);
  auVar20._0_8_ = dVar25;
  auVar20._12_4_ = uVar24;
  auVar32._0_8_ = auVar31._8_8_ * dVar3 - dVar25 * dVar4;
  auVar32._8_8_ = auVar39._0_8_ * dVar4 - dVar30 * dVar5;
  auVar42 = blendpd(auVar20,auVar39,2);
  auVar21._0_8_ = auVar42._0_8_ * dVar5 - auVar39._0_8_ * dVar41;
  auVar21._8_8_ = auVar42._8_8_ * dVar6 - auVar39._8_8_ * dVar43;
  auVar33 = blendpd(auVar32,auVar21,2);
  dVar37 = auVar14._8_8_;
  dVar25 = dVar6 * dVar25 + auVar15._0_8_ + auVar32._8_8_ + *(double *)pTVar11;
  dVar13 = dVar6 * dVar30 + dVar13 + auVar21._0_8_ + *(double *)&pTVar11->field_0x8;
  auVar34._0_8_ = dVar37 * dVar3 - auVar14._0_8_ * dVar4;
  auVar34._8_8_ = dVar2 * dVar4 - dVar37 * dVar5;
  auVar42._8_4_ = SUB84(dVar23,0);
  auVar42._0_8_ = dVar2;
  auVar42._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar15 = blendpd(auVar14,auVar42,2);
  local_100 = (dVar6 * auVar39._0_8_ + dVar19 + auVar33._0_8_ + *(double *)&pTVar11->field_0x10) -
              local_100;
  auVar22._8_4_ = SUB84(auVar34._8_8_,0);
  auVar22._0_8_ = auVar34._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar40._8_4_ = local_c8._8_4_;
  auVar40._0_8_ = dVar6;
  auVar40._12_4_ = local_c8._12_4_;
  auVar16._0_8_ = auVar15._0_8_ * dVar5 - dVar2 * dVar41;
  auVar16._8_8_ = auVar15._8_8_ * dVar6 - dVar23 * dVar43;
  auVar15 = blendpd(auVar34,auVar16,2);
  auVar35._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar35._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  dVar19 = auVar22._8_8_ + auVar22._8_8_;
  dVar23 = auVar16._0_8_ + auVar16._0_8_;
  auVar27._8_4_ = SUB84(dVar23,0);
  auVar27._0_8_ = dVar19;
  uVar24 = (undefined4)((ulonglong)dVar23 >> 0x20);
  auVar27._12_4_ = uVar24;
  auVar17._8_4_ = SUB84(dVar23,0);
  auVar17._0_8_ = dVar19;
  auVar17._12_4_ = uVar24;
  auVar15 = blendpd(auVar17,auVar35,2);
  auVar28._0_8_ = auVar27._8_8_ * dVar3 - dVar19 * dVar4;
  auVar28._8_8_ = auVar35._0_8_ * dVar4 - dVar23 * dVar5;
  auVar7._4_8_ = auVar35._8_8_;
  auVar7._0_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar36._0_8_ = auVar7._0_8_ << 0x20;
  auVar36._8_4_ = SUB84(dVar13,0);
  auVar36._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar18._0_8_ = auVar15._0_8_ * dVar5 - auVar35._0_8_ * dVar41;
  auVar18._8_8_ = auVar15._8_8_ * dVar6 - auVar35._8_8_ * dVar43;
  local_108 = auVar36._8_8_ - local_108;
  dVar25 = dVar25 - local_110;
  local_f8._0_8_ = dVar6 * dVar19 + auVar14._0_8_ + auVar28._8_8_;
  local_f8._8_8_ = auVar40._8_8_ * dVar23 + dVar37 + auVar18._0_8_;
  auVar15 = blendpd(auVar28,auVar18,2);
  local_e8 = dVar6 * auVar35._0_8_ + dVar2 + auVar15._0_8_;
  auVar8._4_8_ = auVar15._8_8_;
  auVar8._0_4_ = (int)((ulonglong)local_f8._0_8_ >> 0x20);
  auVar29._0_8_ = auVar8._0_8_ << 0x20;
  auVar29._8_4_ = (int)local_f8._8_8_;
  auVar29._12_4_ = (int)((ulonglong)local_f8._8_8_ >> 0x20);
  local_128 = local_e8 * local_108 - auVar29._8_8_ * local_100;
  local_120 = (double)local_f8._0_8_ * local_100 - local_e8 * dVar25;
  local_118 = auVar29._8_8_ * dVar25 - (double)local_f8._0_8_ * local_108;
  local_a8 = local_e8;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pFVar1 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
  if (pFVar1 != (FRewindData *)0x0) {
    Chaos::FRewindData::MarkDirtyFromPT
              (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
  }
  pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if ((pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
     ((EVar10 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar12),
      EVar10 == Sleeping ||
      (EVar10 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar12),
      EVar10 == Dynamic)))) {
    Chaos::SetObjectStateHelper((IPhysicsProxyBase *)param_1,pTVar12,Dynamic,true,true);
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddForce
              (pTVar12,(TVector<double,3> *)local_f8,true);
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pFVar1 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
  if (pFVar1 != (FRewindData *)0x0) {
    Chaos::FRewindData::MarkDirtyFromPT
              (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
  }
  pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    EVar10 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar12);
    if ((EVar10 != Sleeping) &&
       (EVar10 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar12),
       EVar10 != Dynamic)) {
      return;
    }
    Chaos::SetObjectStateHelper((IPhysicsProxyBase *)param_1,pTVar12,Dynamic,true,true);
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddTorque
              (pTVar12,(TVector<double,3> *)&local_128,true);
  }
  return;
}

// AddImpulse @ 1441a4ee0

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddImpulse
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  IPhysicsProxyBase *pIVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar6 = *(longlong *)&param_1->field_0x40;
  if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    dVar9 = *(double *)(lVar6 + 0x108);
    dVar7 = (double)*(float *)(lVar6 + 0x170) * dVar9;
    dVar8 = (double)*(float *)(lVar6 + 0x16c) * dVar9;
    dVar9 = (double)*(float *)(lVar6 + 0x168) * dVar9;
  }
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar6 = *(longlong *)&param_1->field_0x40;
  if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x19c) == '\x01') {
      *(undefined1 *)(lVar6 + 0x1b1) = 1;
    }
    else if (*(char *)(lVar6 + 0x19c) != '\x04') {
      return;
    }
    pIVar3 = *(IPhysicsProxyBase **)(lVar6 + 0x10);
    *(undefined1 *)(lVar6 + 0x19c) = 4;
    *(uint *)(lVar6 + 0x9c) = *(uint *)(lVar6 + 0x9c) | 8;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    dVar2 = *(double *)(lVar6 + 0x148);
    pIVar3 = *(IPhysicsProxyBase **)(lVar6 + 0x10);
    *(float *)(lVar6 + 0x168) = (float)(dVar2 * (dVar4 + dVar9));
    *(float *)(lVar6 + 0x16c) = (float)(dVar2 * (dVar5 + dVar8));
    *(float *)(lVar6 + 0x170) = (float)(dVar2 * (dVar1 + dVar7));
    *(uint *)(lVar6 + 0x9c) = *(uint *)(lVar6 + 0x9c) | 4;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
  }
  return;
}

// AddImpulse @ 1441a5070

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddImpulse
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2)

{
  FRewindData *this;
  double dVar1;
  double dVar2;
  EObjectStateType EVar3;
  TVector<double,3> *pTVar4;
  double *pdVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_58;
  double local_50;
  double local_48;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pTVar6 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar6 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar7 = 0.0;
  }
  else {
    pTVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity(pTVar6);
    dVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(pTVar6);
    dVar8 = dVar7 * *(double *)&pTVar4->field_0x10;
    dVar9 = dVar7 * *(double *)&pTVar4->field_0x8;
    dVar7 = dVar7 * *(double *)pTVar4;
  }
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  local_48 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = local_48 + dVar8;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  this = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
  if (this != (FRewindData *)0x0) {
    Chaos::FRewindData::MarkDirtyFromPT
              (this,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
  }
  pTVar6 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    EVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar6);
    if ((EVar3 != Sleeping) &&
       (EVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar6), EVar3 != Dynamic
       )) {
      return;
    }
    Chaos::SetObjectStateHelper((IPhysicsProxyBase *)param_1,pTVar6,Dynamic,true,true);
    pdVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM(pTVar6);
    local_48 = *pdVar5;
    local_58 = (dVar1 + dVar7) * local_48;
    local_50 = (dVar2 + dVar9) * local_48;
    local_48 = dVar8 * local_48;
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetLinearImpulseVelocity
              (pTVar6,(TVector<double,3> *)&local_58,true);
  }
  return;
}

// AddImpulseAtLocation @ 1441a51f0

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddImpulseAtLocation
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double,3> *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_88 [24];
  double local_70;
  double local_68;
  double local_60;
  
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
  GetCoMWorldPosition<Chaos::FRigidBodyHandle_External_*>((TVector<double,3> *)local_88,param_1);
  dVar4 = (param_3->field0_0x0)._s_0.X - (double)local_88._0_8_;
  dVar3 = (param_3->field0_0x0)._s_0.Y - (double)CONCAT62(local_88._10_6_,local_88._8_2_);
  dVar2 = (param_3->field0_0x0)._s_0.Z - (double)local_88._16_8_;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  AddImpulse(param_1,param_2);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  pTVar7 = `Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AngularImpulse'::__l2::<lambda_1>::
           operator()<Chaos::TGeometryParticle<double,3>_const_>
                     (local_res8,(TVector<double,3> *)local_88,
                      *(TGeometryParticle<double,3> **)&param_1->field_0x40);
  local_88._0_8_ = &local_70;
  local_88._8_2_ = 0x100;
  local_70 = (dVar3 * dVar1 - dVar2 * dVar6) + *(double *)pTVar7;
  local_60 = (dVar4 * dVar6 - dVar3 * dVar5) + *(double *)&pTVar7->field_0x10;
  local_68 = (dVar2 * dVar5 - dVar4 * dVar1) + *(double *)&pTVar7->field_0x8;
  local_88._16_8_ = param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  `Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetAngularImpulse'::__l2::<lambda_1>::
  operator()<Chaos::TGeometryParticle<double,3>_>
            (local_88,*(TGeometryParticle<double,3> **)&param_1->field_0x40);
  return;
}

// AddImpulseAtLocation @ 1441a5360

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddImpulseAtLocation
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_48 [2];
  
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
  GetCoMWorldPosition<Chaos::FRigidBodyHandle_Internal_*>
            ((TVector<double,3> *)&local_48[0]._s_0,param_1);
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Y - (double)local_48[0]._8_8_;
  dVar5 = (param_3->field0_0x0)._s_0.Z - (double)local_48[0]._16_8_;
  dVar2 = (param_3->field0_0x0)._s_0.X - (double)local_48[0]._0_8_;
  local_48[0]._0_8_ = dVar6 * dVar1 - dVar5 * dVar4;
  local_48[0]._8_8_ = dVar5 * dVar3 - dVar2 * dVar1;
  local_48[0]._16_8_ = dVar2 * dVar4 - dVar6 * dVar3;
  AddImpulse(param_1,param_2);
  AddAngularImpulseInRadians(param_1,(TVector<double> *)&local_48[0]._s_0);
  return;
}

// AddRadialForce @ 1441a5520

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddRadialForce
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2,float param_3,float param_4,
          uchar param_5,bool param_6,bool param_7)

{
  IPhysicsProxyBase *pIVar1;
  double dVar2;
  double dVar3;
  TPBDRigidParticle<double,3> *pTVar4;
  EObjectStateType EVar5;
  TVector<double,3> *pTVar6;
  TPBDRigidParticle<double,3> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar14 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_c0 [16];
  double local_b0;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  pTVar7 = (TPBDRigidParticle<double,3> *)0x0;
  pTVar4 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
  if ((*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 == '\0') {
    pTVar4 = pTVar7;
  }
  if (pTVar4 == (TPBDRigidParticle<double,3> *)0x0) {
    return;
  }
  if ((byte)pTVar4->field_0x98 < 2) {
    EVar5 = Kinematic;
  }
  else {
    EVar5 = (pTVar4->MMiscData).Property.MObjectState;
  }
  if ((EVar5 != Dynamic) && (EVar5 != Sleeping)) {
    return;
  }
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
  GetCoMWorldPosition<Chaos::FRigidBodyHandle_External_*>((TVector<double,3> *)local_c0,param_1);
  dVar2 = (double)local_c0._0_8_ - (param_2->field0_0x0)._s_0.X;
  dVar8 = local_b0 - (param_2->field0_0x0)._s_0.Z;
  dVar10 = (double)local_c0._8_8_ - (param_2->field0_0x0)._s_0.Y;
  dVar3 = (double)param_3;
  dVar9 = dVar2 * dVar2 + dVar10 * dVar10 + dVar8 * dVar8;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar9;
  auVar14 = sqrtpd(unaff_XMM8,auVar14);
  dVar13 = auVar14._0_8_;
  if (dVar3 < dVar13) {
    return;
  }
  Chaos::FRigidBodyHandle_External::SetObjectState(param_1,Dynamic,true,true);
  uVar11 = 0;
  uVar12 = 0;
  if (__real_3f1a36e2eb1c432d <= dVar13) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    dVar2 = dVar2 * dVar9;
    dVar10 = dVar9 * dVar10;
    dVar9 = dVar9 * dVar8;
  }
  else {
    dVar10 = 0.0;
    dVar9 = 0.0;
    dVar2 = __real_3ff0000000000000;
  }
  local_c8 = 0.0;
  local_d8 = 0.0;
  dStack_d0 = 0.0;
  dVar8 = (double)param_4;
  if (param_5 != '\0') {
    if (param_5 != '\x01') goto LAB_1441a56f9;
    dVar8 = ((dVar3 - dVar13) / dVar3) * dVar8;
  }
  local_c8 = dVar8 * dVar9;
  dStack_d0 = dVar8 * dVar10;
  local_d8 = dVar8 * dVar2;
LAB_1441a56f9:
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  if (param_6) {
    pTVar4 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar4 = pTVar7;
    }
    if (pTVar4 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar2 = (pTVar4->MMassProps).Property.MM;
      uVar11 = SUB84(dVar2,0);
      uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = dStack_d0 * (double)CONCAT44(uVar12,uVar11);
    local_c0._8_4_ = SUB84(dVar2,0);
    local_c0._0_8_ = local_d8 * (double)CONCAT44(uVar12,uVar11);
    local_c0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_b0 = local_c8 * (double)CONCAT44(uVar12,uVar11);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    pTVar4 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar4 = pTVar7;
    }
    if (pTVar4 == (TPBDRigidParticle<double,3> *)0x0) {
      return;
    }
    EVar5 = (pTVar4->MMiscData).Property.MObjectState;
    if (EVar5 == Sleeping) {
      pTVar4->MWakeEvent = Awake;
    }
    else if (EVar5 != Dynamic) {
      return;
    }
    pIVar1 = *(IPhysicsProxyBase **)&pTVar4->field_0x10;
    (pTVar4->MMiscData).Property.MObjectState = Dynamic;
    *(uint *)&pTVar4->field_0x9c = *(uint *)&pTVar4->field_0x9c | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
    pTVar6 = (TVector<double,3> *)local_c0;
  }
  else {
    pTVar4 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar4 = pTVar7;
    }
    if (pTVar4 == (TPBDRigidParticle<double,3> *)0x0) {
      return;
    }
    EVar5 = (pTVar4->MMiscData).Property.MObjectState;
    if (EVar5 == Sleeping) {
      pTVar4->MWakeEvent = Awake;
    }
    else if (EVar5 != Dynamic) {
      return;
    }
    pIVar1 = *(IPhysicsProxyBase **)&pTVar4->field_0x10;
    (pTVar4->MMiscData).Property.MObjectState = Dynamic;
    *(uint *)&pTVar4->field_0x9c = *(uint *)&pTVar4->field_0x9c | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
    pTVar6 = (TVector<double,3> *)&local_d8;
  }
  Chaos::TPBDRigidParticle<double,3>::AddForce(pTVar4,pTVar6,true);
  return;
}

// AddRadialForce @ 1441a5870

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddRadialForce
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2,float param_3,float param_4,
          uchar param_5,bool param_6,bool param_7)

{
  FRewindData *pFVar1;
  double dVar2;
  double dVar3;
  EObjectStateType EVar4;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  TVector<double,3> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar13 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_c0 [16];
  double local_b0;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  pTVar5 = this_00;
  if ((*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc != '\0') {
    pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    this = this_00;
    if (1 < (byte)pTVar5->field_0xc) {
      this = pTVar5;
    }
    if (this == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      EVar4 = Kinematic;
    }
    else {
      EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this);
    }
    if ((EVar4 == Dynamic) || (EVar4 == Sleeping)) {
      Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
      GetCoMWorldPosition<Chaos::FRigidBodyHandle_Internal_*>((TVector<double,3> *)local_c0,param_1)
      ;
      dVar2 = (double)local_c0._0_8_ - (param_2->field0_0x0)._s_0.X;
      dVar9 = local_b0 - (param_2->field0_0x0)._s_0.Z;
      dVar7 = (double)local_c0._8_8_ - (param_2->field0_0x0)._s_0.Y;
      dVar3 = (double)param_3;
      dVar8 = dVar2 * dVar2 + dVar7 * dVar7 + dVar9 * dVar9;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar8;
      auVar13 = sqrtpd(unaff_XMM8,auVar13);
      dVar12 = auVar13._0_8_;
      if (dVar12 <= dVar3) {
        Chaos::FRigidBodyHandle_Internal::SetObjectState(param_1,Dynamic,true,true);
        uVar10 = 0;
        uVar11 = 0;
        if (__real_3f1a36e2eb1c432d <= dVar12) {
          dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
          dVar2 = dVar2 * dVar8;
          dVar9 = dVar8 * dVar9;
          dVar8 = dVar8 * dVar7;
        }
        else {
          dVar8 = 0.0;
          dVar9 = 0.0;
          dVar2 = __real_3ff0000000000000;
        }
        local_c8 = 0.0;
        local_d8 = 0.0;
        dStack_d0 = 0.0;
        dVar7 = (double)param_4;
        if (param_5 == '\0') {
          local_d8 = dVar2 * dVar7;
          dStack_d0 = dVar7 * dVar8;
          local_c8 = dVar9 * dVar7;
        }
        else if (param_5 == '\x01') {
          dVar7 = ((dVar3 - dVar12) / dVar3) * dVar7;
          local_d8 = dVar7 * dVar2;
          dStack_d0 = dVar7 * dVar8;
          local_c8 = dVar7 * dVar9;
        }
        Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
        if (param_6) {
          pTVar5 = this_00;
          if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->
                        field_0xc) {
            pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
          }
          if (pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            dVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(pTVar5);
            uVar10 = SUB84(dVar2,0);
            uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          dVar2 = dStack_d0 * (double)CONCAT44(uVar11,uVar10);
          local_c0._8_4_ = SUB84(dVar2,0);
          local_c0._0_8_ = local_d8 * (double)CONCAT44(uVar11,uVar10);
          local_c0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          local_b0 = local_c8 * (double)CONCAT44(uVar11,uVar10);
          Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                    ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
          pFVar1 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
          if (pFVar1 != (FRewindData *)0x0) {
            Chaos::FRewindData::MarkDirtyFromPT
                      (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
          }
          if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->
                        field_0xc) {
            this_00 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
          }
          if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            return;
          }
          EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
          if ((EVar4 != Sleeping) &&
             (EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00),
             EVar4 != Dynamic)) {
            return;
          }
          Chaos::SetObjectStateHelper((IPhysicsProxyBase *)param_1,this_00,Dynamic,true,true);
          pTVar6 = (TVector<double,3> *)local_c0;
        }
        else {
          pFVar1 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
          if (pFVar1 != (FRewindData *)0x0) {
            Chaos::FRewindData::MarkDirtyFromPT
                      (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
          }
          if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->
                        field_0xc) {
            this_00 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
          }
          if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            return;
          }
          EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
          if ((EVar4 != Sleeping) &&
             (EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00),
             EVar4 != Dynamic)) {
            return;
          }
          Chaos::SetObjectStateHelper((IPhysicsProxyBase *)param_1,this_00,Dynamic,true,true);
          pTVar6 = (TVector<double,3> *)&local_d8;
        }
        Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddForce(this_00,pTVar6,true);
      }
    }
  }
  return;
}

// AddRadialImpulse @ 1441a5cb0

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddRadialImpulse
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2,float param_3,float param_4,
          ERadialImpulseFalloff param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TVector<double>_u_0 *pTVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  TVector<double>_u_0 local_88;
  double local_70;
  double dStack_68;
  double local_60;
  
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
  GetCoMWorldPosition<Chaos::FRigidBodyHandle_External_*>((TVector<double,3> *)&local_a0,param_1);
  local_70 = (param_2->field0_0x0)._s_0.X;
  dStack_68 = (param_2->field0_0x0)._s_0.Y;
  local_60 = (param_2->field0_0x0)._s_0.Z;
  local_90 = local_90 - local_60;
  local_a0 = local_a0 - local_70;
  local_98 = local_98 - dStack_68;
  dVar6 = (double)param_3;
  auVar7._0_8_ = local_a0 * local_a0 + local_98 * local_98 + local_90 * local_90;
  auVar7._8_8_ = 0;
  auVar7 = sqrtpd(auVar7,auVar7);
  dVar5 = auVar7._0_8_;
  if (dVar5 < dVar6) {
    uVar9 = 0;
    uVar10 = 0;
    dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar5 <= 0.0) {
      dVar6 = (double)param_4;
      local_a8 = dVar6 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      unique0x10000104 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar6,0)
      ;
      local_b8 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X * dVar6;
      unique0x10000108 =
           (int)((ulonglong)(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar6) >>
                0x20);
    }
    else {
      dVar8 = __real_3ff0000000000000 / dVar5;
      if (param_5 == RIF_Constant) {
        dVar6 = (double)param_4;
        local_a8 = dVar6 * dVar8 * local_90;
        dStack_b0 = dVar6 * dVar8 * local_98;
        local_b8 = dVar6 * dVar8 * local_a0;
      }
      else if (param_5 == RIF_Linear) {
        if (0.0 < dVar6 - dVar5) {
          dVar6 = (double)(float)(((dVar6 - dVar5) / dVar6) * (double)param_4);
          local_a8 = dVar6 * dVar8 * local_90;
          dStack_b0 = dVar6 * dVar8 * local_98;
          local_b8 = dVar6 * dVar8 * local_a0;
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8752542440373615727>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                           ,0x391,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (param_6) {
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
      lVar3 = *(longlong *)&param_1->field_0x40;
      if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        uVar9 = (undefined4)*(undefined8 *)(lVar3 + 0x108);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x108) >> 0x20);
      }
      pTVar4 = &local_88;
      dVar6 = dStack_b0 * (double)CONCAT44(uVar10,uVar9);
      local_88._8_4_ = SUB84(dVar6,0);
      local_88._0_8_ = local_b8 * (double)CONCAT44(uVar10,uVar9);
      local_88._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_88._s_0.Z = (double)local_a8 * (double)CONCAT44(uVar10,uVar9);
    }
    else {
      pTVar4 = (TVector<double>_u_0 *)&local_b8;
    }
    AddImpulse(param_1,(TVector<double> *)&pTVar4->_s_0);
  }
  return;
}

// AddRadialImpulse @ 1441a5f10

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddRadialImpulse
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2,float param_3,float param_4,
          ERadialImpulseFalloff param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  TVector<double>_u_0 *pTVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  TVector<double>_u_0 local_88;
  double local_70;
  double dStack_68;
  double local_60;
  
  Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
  GetCoMWorldPosition<Chaos::FRigidBodyHandle_Internal_*>((TVector<double,3> *)&local_a0,param_1);
  local_70 = (param_2->field0_0x0)._s_0.X;
  dStack_68 = (param_2->field0_0x0)._s_0.Y;
  local_60 = (param_2->field0_0x0)._s_0.Z;
  local_90 = local_90 - local_60;
  local_a0 = local_a0 - local_70;
  local_98 = local_98 - dStack_68;
  dVar5 = (double)param_3;
  auVar6._0_8_ = local_a0 * local_a0 + local_98 * local_98 + local_90 * local_90;
  auVar6._8_8_ = 0;
  auVar6 = sqrtpd(auVar6,auVar6);
  dVar4 = auVar6._0_8_;
  if (dVar4 < dVar5) {
    uVar8 = 0;
    uVar9 = 0;
    dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar4 <= 0.0) {
      dVar5 = (double)param_4;
      local_a8 = dVar5 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      unique0x1000010d = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar5,0)
      ;
      local_b8 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X * dVar5;
      unique0x10000111 =
           (int)((ulonglong)(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar5) >>
                0x20);
    }
    else {
      dVar7 = __real_3ff0000000000000 / dVar4;
      if (param_5 == RIF_Constant) {
        dVar5 = (double)param_4;
        local_a8 = dVar5 * dVar7 * local_90;
        dStack_b0 = dVar5 * dVar7 * local_98;
        local_b8 = dVar5 * dVar7 * local_a0;
      }
      else if (param_5 == RIF_Linear) {
        if (0.0 < dVar5 - dVar4) {
          dVar5 = (double)(float)(((dVar5 - dVar4) / dVar5) * (double)param_4);
          local_a8 = dVar5 * dVar7 * local_90;
          dStack_b0 = dVar5 * dVar7 * local_98;
          local_b8 = dVar5 * dVar7 * local_a0;
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8752542440373615727>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                           ,0x391,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (param_6) {
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      this = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
        this = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      }
      if (this != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        dVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(this);
        uVar8 = SUB84(dVar5,0);
        uVar9 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      pTVar3 = &local_88;
      dVar5 = dStack_b0 * (double)CONCAT44(uVar9,uVar8);
      local_88._8_4_ = SUB84(dVar5,0);
      local_88._0_8_ = local_b8 * (double)CONCAT44(uVar9,uVar8);
      local_88._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_88._s_0.Z = (double)local_a8 * (double)CONCAT44(uVar9,uVar8);
    }
    else {
      pTVar3 = (TVector<double>_u_0 *)&local_b8;
    }
    AddImpulse(param_1,(TVector<double> *)&pTVar3->_s_0);
  }
  return;
}

// AddTorque @ 1441a62c0

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddTorque
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2,bool param_3,bool param_4)

{
  double dVar1;
  IPhysicsProxyBase *pIVar2;
  double dVar3;
  double dVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  PMatrix<double,3,3> *pPVar6;
  EObjectStateType EVar7;
  TPBDRigidParticle<double,3> *pTVar8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  PMatrix<double,3,3> local_98;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  pTVar8 = (TPBDRigidParticle<double,3> *)0x0;
  pTVar5 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
  if ((*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 == '\0') {
    pTVar5 = pTVar8;
  }
  if (pTVar5 == (TPBDRigidParticle<double,3> *)0x0) {
    return;
  }
  if ((byte)pTVar5->field_0x98 < 2) {
    EVar7 = Kinematic;
  }
  else {
    EVar7 = (pTVar5->MMiscData).Property.MObjectState;
  }
  if ((EVar7 != Dynamic) && (EVar7 != Sleeping)) {
    return;
  }
  if (param_4) {
    pPVar6 = Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
             GetWorldInertia<Chaos::FRigidBodyHandle_External_*>(&local_98,param_1);
    dVar3 = (param_2->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    local_b8 = dVar4 * *(double *)&pPVar6->field_0x48 + dVar3 * *(double *)&pPVar6->field_0x40 +
               dVar1 * *(double *)&pPVar6->field_0x50;
    dStack_c0 = dVar4 * *(double *)&pPVar6->field_0x28 + dVar3 * *(double *)&pPVar6->field_0x20 +
                dVar1 * *(double *)&pPVar6->field_0x30;
    local_c8 = dVar4 * *(double *)&pPVar6->field_0x8 + dVar3 * *(double *)pPVar6 +
               dVar1 * *(double *)&pPVar6->field_0x10;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    pTVar5 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar5 = pTVar8;
    }
    if (pTVar5 == (TPBDRigidParticle<double,3> *)0x0) {
      return;
    }
    EVar7 = (pTVar5->MMiscData).Property.MObjectState;
  }
  else {
    local_c8 = (param_2->field0_0x0)._s_0.X;
    dStack_c0 = (param_2->field0_0x0)._s_0.Y;
    local_b8 = (param_2->field0_0x0)._s_0.Z;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    pTVar5 = *(TPBDRigidParticle<double,3> **)&param_1->field_0x40;
    if ((byte)(*(TPBDRigidParticle<double,3> **)&param_1->field_0x40)->field_0x98 < 2) {
      pTVar5 = pTVar8;
    }
    if (pTVar5 == (TPBDRigidParticle<double,3> *)0x0) {
      return;
    }
    EVar7 = (pTVar5->MMiscData).Property.MObjectState;
  }
  if (EVar7 == Sleeping) {
    pTVar5->MWakeEvent = Awake;
  }
  else if (EVar7 != Dynamic) {
    return;
  }
  pIVar2 = *(IPhysicsProxyBase **)&pTVar5->field_0x10;
  (pTVar5->MMiscData).Property.MObjectState = Dynamic;
  *(uint *)&pTVar5->field_0x9c = *(uint *)&pTVar5->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  Chaos::TPBDRigidParticle<double,3>::AddTorque(pTVar5,(TVector<double,3> *)&local_c8,true);
  return;
}

// AddTorque @ 1441a6490

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddTorque
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2,bool param_3,bool param_4)

{
  double dVar1;
  FRewindData *this;
  double dVar2;
  double dVar3;
  EObjectStateType EVar4;
  PMatrix<double,3,3> *pPVar5;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  double local_c8;
  double dStack_c0;
  double local_b8;
  PMatrix<double,3,3> local_98;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  pTVar6 = this_01;
  if ((*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc != '\0') {
    pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    this_00 = this_01;
    if (1 < (byte)pTVar6->field_0xc) {
      this_00 = pTVar6;
    }
    if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      EVar4 = Kinematic;
    }
    else {
      EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
    }
    if ((EVar4 == Dynamic) || (EVar4 == Sleeping)) {
      if (param_4) {
        pPVar5 = Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
                 GetWorldInertia<Chaos::FRigidBodyHandle_Internal_*>(&local_98,param_1);
        dVar2 = (param_2->field0_0x0)._s_0.X;
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        dVar1 = (param_2->field0_0x0)._s_0.Z;
        local_b8 = dVar3 * *(double *)&pPVar5->field_0x48 + dVar2 * *(double *)&pPVar5->field_0x40 +
                   dVar1 * *(double *)&pPVar5->field_0x50;
        dStack_c0 = dVar3 * *(double *)&pPVar5->field_0x28 + dVar2 * *(double *)&pPVar5->field_0x20
                    + dVar1 * *(double *)&pPVar5->field_0x30;
        local_c8 = dVar3 * *(double *)&pPVar5->field_0x8 + dVar2 * *(double *)pPVar5 +
                   dVar1 * *(double *)&pPVar5->field_0x10;
        Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      }
      else {
        local_c8 = (param_2->field0_0x0)._s_0.X;
        dStack_c0 = (param_2->field0_0x0)._s_0.Y;
        local_b8 = (param_2->field0_0x0)._s_0.Z;
        Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      }
      this = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
      if (this != (FRewindData *)0x0) {
        Chaos::FRewindData::MarkDirtyFromPT
                  (this,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
      }
      if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
        this_01 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      }
      if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01);
        if ((EVar4 != Sleeping) &&
           (EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01),
           EVar4 != Dynamic)) {
          return;
        }
        Chaos::SetObjectStateHelper((IPhysicsProxyBase *)param_1,this_01,Dynamic,true,true);
        Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddTorque
                  (this_01,(TVector<double,3> *)&local_c8,true);
      }
    }
  }
  return;
}

// AddVelocity @ 1441a6b40

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddVelocity
          (FRigidBodyHandle_External *param_1,TVector<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  TVector<double>_u_0 local_28;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar2 = *(longlong *)&param_1->field_0x40;
  if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = *(double *)(lVar2 + 0x108);
  }
  local_28._s_0.Z = dVar3 * (param_2->field0_0x0)._s_0.Z;
  dVar1 = dVar3 * (param_2->field0_0x0)._s_0.Y;
  local_28._8_4_ = SUB84(dVar1,0);
  local_28._0_8_ = dVar3 * (param_2->field0_0x0)._s_0.X;
  local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  AddImpulse(param_1,(TVector<double> *)&local_28._s_0);
  return;
}

// AddVelocity @ 1441a6bc0

void __cdecl
FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddVelocity
          (FRigidBodyHandle_Internal *param_1,TVector<double> *param_2)

{
  double dVar1;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  double dVar2;
  TVector<double>_u_0 local_28;
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  this = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    this = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (this == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(this);
  }
  local_28._s_0.Z = dVar2 * (param_2->field0_0x0)._s_0.Z;
  dVar1 = dVar2 * (param_2->field0_0x0)._s_0.Y;
  local_28._8_4_ = SUB84(dVar1,0);
  local_28._0_8_ = dVar2 * (param_2->field0_0x0)._s_0.X;
  local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  AddImpulse(param_1,(TVector<double> *)&local_28._s_0);
  return;
}

