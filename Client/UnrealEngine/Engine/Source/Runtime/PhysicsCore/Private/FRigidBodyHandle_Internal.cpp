// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// SetObjectState @ 1441b8e30

void __thiscall
Chaos::FRigidBodyHandle_Internal::SetObjectState
          (FRigidBodyHandle_Internal *this,EObjectStateType param_1,bool param_2,bool param_3)

{
  FRewindData *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
  this_00 = *(FRewindData **)(*(longlong *)&this->field_0x8 + 0x238);
  if (this_00 != (FRewindData *)0x0) {
    FRewindData::MarkDirtyFromPT
              (this_00,*(TGeometryParticleHandleImp<double,3,1> **)&this->field_0x48);
  }
  pTVar1 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48)->field_0xc) {
    pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48;
  }
  if (pTVar1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    SetObjectStateHelper((IPhysicsProxyBase *)this,pTVar1,param_1,param_2,param_3);
  }
  return;
}

