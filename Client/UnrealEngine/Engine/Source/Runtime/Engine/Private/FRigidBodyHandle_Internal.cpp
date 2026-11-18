// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// SetV @ 148322e90

void __thiscall
Chaos::FRigidBodyHandle_Internal::SetV
          (FRigidBodyHandle_Internal *this,TVector<double,3> *param_1,bool param_2)

{
  FRewindData *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  EObjectStateType EVar2;
  bool bVar3;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
  this_00 = *(FRewindData **)(*(longlong *)&this->field_0x8 + 0x238);
  if (this_00 != (FRewindData *)0x0) {
    FRewindData::MarkDirtyFromPT
              (this_00,*(TGeometryParticleHandleImp<double,3,1> **)&this->field_0x48);
  }
  pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48;
  pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (pTVar1->field_0xc != 0) {
    pTVar4 = pTVar1;
  }
  if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    if (param_2) {
      this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar1->field_0xc) {
        this_01 = pTVar1;
      }
      if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01);
        if (EVar2 == Sleeping) {
          bVar3 = UE::Math::TVector<double>::IsNearlyZero
                            ((TVector<double> *)param_1,__real_3f1a36e2e0000000);
          if (!bVar3) {
            SetObjectStateHelper((IPhysicsProxyBase *)this,this_01,Dynamic,true,true);
          }
        }
      }
    }
    TKinematicGeometryParticlesImp<double,3,0>::SetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar4,*(int *)&pTVar4->field_0x8,
               param_1);
  }
  return;
}

// SetW @ 148322f70

void __thiscall
Chaos::FRigidBodyHandle_Internal::SetW
          (FRigidBodyHandle_Internal *this,TVector<double,3> *param_1,bool param_2)

{
  FRewindData *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  EObjectStateType EVar2;
  bool bVar3;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
  this_00 = *(FRewindData **)(*(longlong *)&this->field_0x8 + 0x238);
  if (this_00 != (FRewindData *)0x0) {
    FRewindData::MarkDirtyFromPT
              (this_00,*(TGeometryParticleHandleImp<double,3,1> **)&this->field_0x48);
  }
  pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48;
  pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (pTVar1->field_0xc != 0) {
    pTVar4 = pTVar1;
  }
  if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    if (param_2) {
      this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar1->field_0xc) {
        this_01 = pTVar1;
      }
      if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01);
        if (EVar2 == Sleeping) {
          bVar3 = UE::Math::TVector<double>::IsNearlyZero
                            ((TVector<double> *)param_1,__real_3f1a36e2e0000000);
          if (!bVar3) {
            SetObjectStateHelper((IPhysicsProxyBase *)this,this_01,Dynamic,true,true);
          }
        }
      }
    }
    TKinematicGeometryParticlesImp<double,3,0>::SetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar4,*(int *)&pTVar4->field_0x8,
               param_1);
  }
  return;
}

